//https://www.ics.com/blog/gpio-programming-exploring-libgpiod-library
//ne marche que sous linux

#include <iostream>
#include <gpiod.h>
#include <unistd.h>

int main()
{
    std::cout << "Start!\n";

    const char* chipname = "gpiochip0";
    struct gpiod_chip* chip;
    struct gpiod_line* lineRed;    // Red LED
    struct gpiod_line* lineGreen;  // Green LED
    struct gpiod_line* lineYellow; // Yellow LED
    struct gpiod_line* lineButton; // Pushbutton
    int i, val;

    // Open GPIO chip
    chip = gpiod_chip_open_by_name(chipname);

    // Open GPIO lines
    lineYellow = gpiod_chip_get_line(chip, 5);
    lineButton = gpiod_chip_get_line(chip, 6);

    // Open LED lines for output
    gpiod_line_request_output(lineYellow, "example1", 0);

    // Open switch line for input
    gpiod_line_request_input(lineButton, "example1");

  

    // Release lines and chip
    gpiod_line_release(lineYellow);
    gpiod_line_release(lineButton);
    gpiod_chip_close(chip);

    return 0;
}


