//https://www.ics.com/blog/gpio-programming-exploring-libgpiod-library
//ne marche que sous linux


//faudra gerer les retour des fonctions pour la gestion d'erreur avec des exception

#include <iostream>
#include <gpiod.hpp>
#include <unistd.h>

int main()
{
    std::cout << "Start!\n";
  /*
    struct  gpiod_chip* gpiochip; //struct pour les ligne gpio 
    struct  gpiod_line* sortie12;
    struct  gpiod_line* sortie22;
    struct gpiod_line* entree5;

    	gpiochip = gpiod_chip_open("/dev/gpiochip0");


    	sortie12 = gpiod_chip_get_line(gpiochip, 12); //line 12
    	sortie22 = gpiod_chip_get_line(gpiochip, 22); //line22
    	entree5 = gpiod_chip_get_line(gpiochip, 6); //line 5


    	gpiod_line_request_output(sortie12, "sortie12", 0); //line,nom,0=normal/1=inversée
    	gpiod_line_request_output(sortie22, "sortie22", 0);


    	gpiod_line_request_input(entree5, "entree5");
       
    while (true)
    {
        std::cout << gpiod_line_get_value(entree5) << std::endl;

        if (gpiod_line_get_value(entree5) != 0)
        {
           int err = gpiod_line_set_value(sortie12, 1);
           std::cout << "1err " + err << std::endl;
            
           gpiod_line_set_value(sortie22, 0);
        }
        else
        {
           int err = gpiod_line_set_value(sortie22, 1);
          std::cout << "2err " + err << std::endl;
          
          gpiod_line_set_value(sortie12, 0);
        }
        sleep(1);
    }



    gpiod_line_release(sortie12);
    gpiod_line_release(sortie22);
    gpiod_line_release(entree5);
    gpiod_chip_close(gpiochip);


    */

    gpiod::chip chip;

    chip.open("gpiochip0");

    auto line5 = chip.get_line(6);
    auto line12 = chip.get_line(12);
    auto line22 = chip.get_line(22);


    gpiod::line_request lineInput { "Button",gpiod::line_request::DIRECTION_INPUT,0 };
    gpiod::line_request lineOutput{ "Button",gpiod::line_request::DIRECTION_OUTPUT,0 };


    line5.request(lineInput,0);
    line12.request(lineOutput,0);
    line22.request(lineOutput,0);
    
    auto value = line5.get_value();
    
    while (true)
    {
        if (value != 0)
        {
            line12.set_value(1);
            line22.set_value(1);
        }
        else
        {
            line12.set_value(0);
            line22.set_value(0);
        }
        value = line5.get_value();
    }
    
    line12.release();
    line22.release();
    line5.release();
    return 0;



}


