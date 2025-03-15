// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.11
// Project name: Coffee wending

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_Main
void ui_Main_screen_init(void);
lv_obj_t * ui_Main;
lv_obj_t * ui_Image8;
lv_obj_t * ui_Label2;
lv_obj_t * ui_Image1;
lv_obj_t * ui_Container1;
void ui_event_Button1(lv_event_t * e);
lv_obj_t * ui_Button1;
lv_obj_t * ui_Image11;
lv_obj_t * ui_Image2;
lv_obj_t * ui_Label1;
lv_obj_t * ui_Label4;
void ui_event_Button2(lv_event_t * e);
lv_obj_t * ui_Button2;
lv_obj_t * ui_Image13;
lv_obj_t * ui_Image7;
lv_obj_t * ui_Label6;
lv_obj_t * ui_Label7;
void ui_event_Button3(lv_event_t * e);
lv_obj_t * ui_Button3;
lv_obj_t * ui_Image14;
lv_obj_t * ui_Image9;
lv_obj_t * ui_Label8;
lv_obj_t * ui_Label10;
void ui_event_Button4(lv_event_t * e);
lv_obj_t * ui_Button4;
lv_obj_t * ui_Image15;
lv_obj_t * ui_Image10;
lv_obj_t * ui_Label9;
lv_obj_t * ui_Label11;
void ui_event_Button5(lv_event_t * e);
lv_obj_t * ui_Button5;
lv_obj_t * ui_Image12;
lv_obj_t * ui_Image21;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Label12;
void ui_event_Button6(lv_event_t * e);
lv_obj_t * ui_Button6;
lv_obj_t * ui_Image19;
lv_obj_t * ui_Image18;
lv_obj_t * ui_Label13;
lv_obj_t * ui_Label14;
// CUSTOM VARIABLES


// SCREEN: ui_Payment
void ui_Payment_screen_init(void);
void ui_event_Payment( lv_event_t * e);
lv_obj_t *ui_Payment;
lv_obj_t *ui_Panel_QR;
void ui_event_Image3( lv_event_t * e);
lv_obj_t *ui_Image3;
void ui_event_Image4( lv_event_t * e);
lv_obj_t *ui_Image4;
lv_obj_t *ui_Label_Item;
lv_obj_t *ui_Label_Price;
lv_obj_t *ui_Image5;
lv_obj_t *ui_Label3;
lv_obj_t *ui_Image16;


// SCREEN: ui_Preparation
void ui_Preparation_screen_init(void);
void ui_event_Preparation(lv_event_t * e);
lv_obj_t * ui_Preparation;
lv_obj_t * ui_img_coffee;
lv_obj_t * ui_Image_mask;
lv_obj_t * ui_Img_glass;
lv_obj_t * ui_Label_Status;
void ui_event_Image6(lv_event_t * e);
lv_obj_t * ui_Image6;
lv_obj_t * ui_Image17;
lv_obj_t * ui_img_coffee1;
lv_obj_t * ui_Image_mask1;
lv_obj_t * ui_Img_glass1;
lv_obj_t * ui_img_coffee2;
lv_obj_t * ui_Image_mask1;
lv_obj_t * ui_Image_mask2;
lv_obj_t * ui_Img_glass1;
// CUSTOM VARIABLES

// EVENTS
lv_obj_t * ui____initial_actions0;

// IMAGES AND IMAGE SETS
const lv_img_dsc_t * ui_imgset_coffee_[2] = {&ui_img_images_coffee_1_png, &ui_img_images_coffee_2_png};
const lv_img_dsc_t * ui_imgset_empty_glass_[1] = {&ui_img_images_empty_glass_1_png};
const lv_img_dsc_t * ui_imgset_mask[1] = {&ui_img_images_mask1_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Button1( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      button_espresso( e );
      _ui_screen_change( &ui_Payment, LV_SCR_LOAD_ANIM_MOVE_LEFT, 300, 0, &ui_Payment_screen_init);
      _ui_screen_delete( &ui_Main);
}
}
void ui_event_Button2( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      button_americano( e );
      _ui_screen_change( &ui_Payment, LV_SCR_LOAD_ANIM_MOVE_LEFT, 300, 0, &ui_Payment_screen_init);
      _ui_screen_delete( &ui_Main);
}
}
void ui_event_Button3( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      button_latte( e );
      _ui_screen_change( &ui_Payment, LV_SCR_LOAD_ANIM_MOVE_LEFT, 300, 0, &ui_Payment_screen_init);
      _ui_screen_delete( &ui_Main);
}
}
void ui_event_Button4( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      button_irish( e );
      _ui_screen_change( &ui_Payment, LV_SCR_LOAD_ANIM_MOVE_LEFT, 300, 0, &ui_Payment_screen_init);
      _ui_screen_delete( &ui_Main);
	}
}

void ui_event_Button5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        button_Macchiato(e);
        _ui_screen_change(&ui_Payment, LV_SCR_LOAD_ANIM_MOVE_LEFT, 300, 0, &ui_Payment_screen_init);
        _ui_screen_delete(&ui_Main);
    }
}

void ui_event_Button6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_CLICKED) {
        button_cream(e);
        _ui_screen_change(&ui_Payment, LV_SCR_LOAD_ANIM_MOVE_LEFT, 300, 0, &ui_Payment_screen_init);
        _ui_screen_delete(&ui_Main);
    }
}

void ui_event_Payment(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);

    if(event_code == LV_EVENT_SCREEN_LOADED) {
        Payment_screen_loaded(e);
    }
}
void ui_event_Image3( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_Main, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 300, 0, &ui_Main_screen_init);
      _ui_screen_delete( &ui_Payment);
      _ui_screen_delete( &ui_Preparation);
}
}
void ui_event_Image4( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_Preparation, LV_SCR_LOAD_ANIM_MOVE_LEFT, 300, 0, &ui_Preparation_screen_init);
}
}
void ui_event_Preparation( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_SCREEN_LOADED) {
      Prep_screen_loaded( e );
}
}
void ui_event_Image6( lv_event_t * e) {
    lv_event_code_t event_code = lv_event_get_code(e);lv_obj_t * target = lv_event_get_target(e);
if ( event_code == LV_EVENT_CLICKED) {
      _ui_screen_change( &ui_Main, LV_SCR_LOAD_ANIM_MOVE_LEFT, 300, 0, &ui_Main_screen_init);
      _ui_screen_delete( &ui_Payment);
      _ui_screen_delete( &ui_Preparation);
}
}

///////////////////// SCREENS ////////////////////

void ui_init( void )
{
lv_disp_t *dispp = lv_disp_get_default();
lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), true, LV_FONT_DEFAULT);
lv_disp_set_theme(dispp, theme);
ui_Main_screen_init();
ui_Payment_screen_init();
ui_Preparation_screen_init();
ui____initial_actions0 = lv_obj_create(NULL);
lv_disp_load_scr( ui_Main);
}
