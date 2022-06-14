
/**
 * @file main
 *
 */

/*********************
 *      INCLUDES
 *********************/
#define _DEFAULT_SOURCE /* needed for usleep() */
#include <stdlib.h>
#include <unistd.h>
#define SDL_MAIN_HANDLED /*To fix SDL's "undefined reference to WinMain" issue*/
#include <SDL2/SDL.h>
#include "lvgl/lvgl.h"
//#include "lvgl/examples/lv_examples.h"
//#include "lv_examples/lv_demo.h"
#include "lv_drivers/display/monitor.h"
#include "lv_drivers/indev/mouse.h"
#include "lv_drivers/indev/keyboard.h"
#include "lv_drivers/indev/mousewheel.h"
#include "Fonction.h"
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void hal_init(void);
static int tick_thread(void *data);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *      VARIABLES
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/




int main(int argc, char **argv)
{
  (void)argc; /*Unused*/
  (void)argv; /*Unused*/

  /*Initialize LVGL*/

  lv_init();

  /*Initialize the HAL (display, input devices, tick) for LVGL*/
  hal_init();

  initialisation();
  SecurityPage();

/////////////////////////////////////////////////   TEST DES POSSIBILITE ///////////////////////////////////////////////////

/* static lv_style_t style_sel;
    lv_style_init(&style_sel);
    lv_style_set_text_font(&style_sel, &lv_font_montserrat_22);

lv_obj_t* tabView = lv_tabview_create(lv_scr_act(), LV_DIR_TOP, 50);

        lv_obj_t* tabSlider = lv_tabview_add_tab(tabView, "slider");
        lv_obj_t* tabArc = lv_tabview_add_tab(tabView, "arc");
        lv_obj_t* tabRoller = lv_tabview_add_tab(tabView, "roller");
        lv_obj_t* tabClavier = lv_tabview_add_tab(tabView, "clavier");

        const char* opts = "1\n2\n3\n4\n5\n6\n7\n8\n9\n10";

        static const char* btnm_map[] = { "1", "2", "3", "\n", "4", "5", 
                                  "6","\n", "7", "8", "9","\n", "0",
                                  "Action1", "Action2", ""
        };


        lv_obj_t* roller = lv_roller_create(tabRoller);
        lv_obj_center(roller);
        lv_roller_set_options(roller, opts, LV_ROLLER_MODE_NORMAL);
        lv_roller_set_visible_row_count(roller, 2);
        lv_obj_set_width(roller, 100);
        lv_obj_set_height(roller, 300);
        lv_obj_add_style(roller, &style_sel, LV_PART_SELECTED);
        lv_obj_set_style_text_align(roller, LV_TEXT_ALIGN_LEFT, 0);
        lv_roller_set_selected(roller, 2, LV_ANIM_OFF);

        lv_obj_t* arc = lv_arc_create(tabArc);
        lv_obj_center(arc);
        lv_obj_set_size(arc, 250, 250);

        lv_obj_t* slider = lv_slider_create(tabSlider);
        lv_obj_center(slider);

        lv_obj_t* clavier = lv_btnmatrix_create(tabClavier);
        lv_obj_set_size(clavier, 300, 300);
        lv_btnmatrix_set_map(clavier, btnm_map);
        lv_btnmatrix_set_btn_width(clavier, 10, 2);
        lv_obj_align(clavier, LV_ALIGN_CENTER, 0, 0);

*/

while(1) {
    /* Periodically call the lv_task handler.
     * It could be done in a timer interrupt or an OS task too.*/
    lv_timer_handler();
    usleep(10);
//nanosleep(10);
  }

  return 0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

/**
 * Initialize the Hardware Abstraction Layer (HAL) for the LVGL graphics
 * library
 */
static void hal_init(void)
{
  /* Use the 'monitor' driver which creates window on PC's monitor to simulate a display*/
  monitor_init();
  /* Tick init.
   * You have to call 'lv_tick_inc()' in periodically to inform LittelvGL about
   * how much time were elapsed Create an SDL thread to do this*/
  SDL_CreateThread(tick_thread, "tick", NULL);

  /*Create a display buffer*/
  static lv_disp_draw_buf_t disp_buf1;
  static lv_color_t buf1_1[MONITOR_HOR_RES * 100];
  static lv_color_t buf1_2[MONITOR_HOR_RES * 100];
  lv_disp_draw_buf_init(&disp_buf1, buf1_1, buf1_2, MONITOR_HOR_RES * 100);

  /*Create a display*/
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv); /*Basic initialization*/
  disp_drv.draw_buf = &disp_buf1;
  disp_drv.flush_cb = monitor_flush;
  disp_drv.hor_res = MONITOR_HOR_RES;
  disp_drv.ver_res = MONITOR_VER_RES;
  disp_drv.antialiasing = 1;

  lv_disp_t * disp = lv_disp_drv_register(&disp_drv);

  lv_theme_t * th = lv_theme_default_init(disp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), LV_THEME_DEFAULT_DARK, LV_FONT_DEFAULT);
  lv_disp_set_theme(disp, th);

  lv_group_t * g = lv_group_create();
  lv_group_set_default(g);

  /* Add the mouse as input device
   * Use the 'mouse' driver which reads the PC's mouse*/
  mouse_init();
  static lv_indev_drv_t indev_drv_1;
  lv_indev_drv_init(&indev_drv_1); /*Basic initialization*/
  indev_drv_1.type = LV_INDEV_TYPE_POINTER;

  /*This function will be called periodically (by the library) to get the mouse position and state*/
  indev_drv_1.read_cb = mouse_read;
  lv_indev_t *mouse_indev = lv_indev_drv_register(&indev_drv_1);

  keyboard_init();
  static lv_indev_drv_t indev_drv_2;
  lv_indev_drv_init(&indev_drv_2); /*Basic initialization*/
  indev_drv_2.type = LV_INDEV_TYPE_KEYPAD;
  indev_drv_2.read_cb = keyboard_read;
  lv_indev_t *kb_indev = lv_indev_drv_register(&indev_drv_2);
  lv_indev_set_group(kb_indev, g);
  mousewheel_init();
  static lv_indev_drv_t indev_drv_3;
  lv_indev_drv_init(&indev_drv_3); /*Basic initialization*/
  indev_drv_3.type = LV_INDEV_TYPE_ENCODER;
  indev_drv_3.read_cb = mousewheel_read;

  lv_indev_t * enc_indev = lv_indev_drv_register(&indev_drv_3);
  lv_indev_set_group(enc_indev, g);

  /*Set a cursor for the mouse*/
  LV_IMG_DECLARE(mouse_cursor_icon); /*Declare the image file.*/
  lv_obj_t * cursor_obj = lv_img_create(lv_scr_act()); /*Create an image object for the cursor */
  lv_img_set_src(cursor_obj, &mouse_cursor_icon);           /*Set the image source*/
  lv_indev_set_cursor(mouse_indev, cursor_obj);             /*Connect the image  object to the driver*/
}

/**
 * A task to measure the elapsed time for LVGL
 * @param data unused
 * @return never return
 */
static int tick_thread(void *data) {
  (void)data;

  while(1) {
    SDL_Delay(20);
    lv_tick_inc(20); /*Tell LittelvGL that 5 milliseconds were elapsed*/
  }

  return 0;
}
