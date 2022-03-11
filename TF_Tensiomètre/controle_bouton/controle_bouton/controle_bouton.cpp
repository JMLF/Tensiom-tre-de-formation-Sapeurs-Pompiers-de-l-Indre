//https://www.ics.com/blog/gpio-programming-exploring-libgpiod-library
//ne marche que sous linux


//faudra gerer les retour des fonctions pour la gestion d'erreur avec des exception

#include <iostream>
#include <gpiod.h>
#include <unistd.h>

int main()
{
    std::cout << "Start!\n";

    struct  gpiod_chip* gpiochip;
    struct  gpiod_line* sortie12;
    struct  gpiod_line* sortie22;
    struct gpiod_line* entree5;

    gpiod_chip = gpiod_chip_open("/dev/gpiochip0");

    sortie12 = gpiod_chip_get_line(gpiod_chip, 12); //line 12
    sortie22 = gpiod_chip_get_line(gpiod_chip, 22); //line22
    entree5 = gpiod_chip_get_line(gpiod_chip, 5); //line 5

    gpiod_line_request_output(sortie12, "sortie12", 0); //line,nom,0=normal/1=inversée
    gpiod_line_request_output(sortie22, "sortie22", 0);
    
    gpiod_line_request_input(entree5, "entree5");

    while (true)
    {
        
        if (gpiod_line_get_value(entree5) != 0)
        {
            gpiod_line_set_value(sortie12, 1);
            gpiod_line_set_value(sortie22, 0);
        }
        else
        {
            gpiod_line_set_value(sortie22, 1);
            gpiod_line_set_value(sortie12, 0);
        }

    }
    

    
    gpiod_line_release(sortie12);
    gpiod_line_release(sortie22);
    gpiod_line_release(entree5);

    gpiod_chip_close(gpiochip);
  
    return 0;
    


}


