#include"Fonction.h"


static lv_obj_t* SYS_labelC;
static lv_obj_t* DIA_labelC;
static lv_obj_t* PUL_labelC;

static lv_obj_t* SYS_labelD;
static lv_obj_t* DIA_labelD;
static lv_obj_t* PUL_labelD;

static lv_obj_t* SYS_labelU;
static lv_obj_t* DIA_labelU;
static lv_obj_t* PUL_labelU;

static lv_obj_t* Systole_label;
static lv_obj_t* Diastole_label;
static lv_obj_t* Pulse_label;
static lv_obj_t* mbox1;
static lv_obj_t* mboxErreur;
lv_obj_t* tabview;

lv_obj_t* winSettings;
lv_obj_t* winSecurity;
lv_obj_t* winMenu;
lv_obj_t* winData;

char codeMillier = '1' ;
char codeCentaine = '2' ;
char codeDizaine = '3' ;
char codeUnite = '4' ;
char codePin[5]={'1','2','3','4'};

char codePinMillier = '1';
char codePinCentaine = '2' ;
char codePinDizaine = '3' ;
char codePinUnite = '4' ;
char codePinChangement[5]={ '1','2','3','4' };

int ids_client;

lv_obj_t* mboxPin;

bool Bconnexion = false;

char data[3*3];
/*Timer + wifi*/
int valArc = 0;
lv_timer_t* timer;
lv_obj_t* arc;
bool delTimer = false;
lv_obj_t* lblWifiStatu;
/*timer + wifi end*/
char SYS[3] = { '1','2','0'};
char DIA[3] = { '0','8','0' };
char PUL[3] = { '0','7','0' };

void my_timer(lv_timer_t* timer) {
    if (Bconnexion == false) {
        lv_arc_set_value(arc, 20);
        if (valArc == 360) valArc = 0;
        valArc = valArc + 10;
        //std::cout << valArc << std::endl;
        lv_arc_set_rotation(arc, valArc);
    }
    else {
        lv_arc_set_value(arc, 100);
        lv_label_set_text(lblWifiStatu, "Wifi_OK");
    }
}
void my_timer_Ping(lv_timer_t* timer) {
    if (Bconnexion == false) {
       // Bconnexion = connexion("10.187.52.43", 12345);
 }

    
}

/*Timer*/
void initialisation() {

    lv_timer_t* timerPing = lv_timer_create(my_timer_Ping, 5000, NULL);
}

void ModeSettingsPage(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* btn = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED)


        SettingsPage();
};

void ModeDataPage(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* btn = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED)
       
        DataPage();
};


void ModeMenuPage(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* btn = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED)
        MenuPage();
};



void SettingsPage() {

    /*timer*/
    if (delTimer == false) {
        lv_timer_del(timer); // attention pour la page data car timer déja delete = bug
        delTimer = true;
    }
    /*Timer_end*/

    winSettings = lv_obj_create(NULL);
    lv_obj_t* btn;
    lv_obj_t* lbl;

     btn = lv_btn_create(winSettings);
    lv_obj_set_size(btn, 50, 50);
    lv_obj_align(btn, LV_ALIGN_TOP_RIGHT, 0, 0);
    lbl = lv_label_create(btn);
    lv_label_set_text(lbl, LV_SYMBOL_HOME);
    lv_obj_align_to(lbl, btn, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_event_cb(btn, ModeMenuPage, LV_EVENT_ALL, NULL);

    /*Roller*/

    

    int largeur = 320 / 4 - 10;
    int hauteur = 4;

    const char* opts = "0\n1\n2\n3\n4\n5\n6\n7\n8\n9";
    static lv_style_t style_sel;
    lv_style_init(&style_sel);
    lv_style_set_text_font(&style_sel, &lv_font_montserrat_38);
    static lv_style_t style_other;
    lv_style_init(&style_other);
    lv_style_set_text_font(&style_other, &lv_font_montserrat_28);


    lbl = lv_label_create(winSettings);
    lv_obj_add_style(lbl, &style_sel, LV_PART_MAIN);
    lv_label_set_text(lbl, "Parametre");
    lv_obj_align(lbl, LV_ALIGN_TOP_MID, 0, 0);

    lv_obj_t* rollerM = lv_roller_create(winSettings);
    lv_roller_set_options(rollerM, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(rollerM, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(rollerM, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(rollerM, hauteur);
    lv_obj_set_width(rollerM, largeur);
    lv_obj_set_style_text_align(rollerM, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_align(rollerM, LV_ALIGN_LEFT_MID, 20, 0);
    lv_obj_add_event_cb(rollerM, event_pinMillier_Changement, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(rollerM, 1, LV_ANIM_OFF);

    lv_obj_t* rollerC = lv_roller_create(winSettings);
    lv_roller_set_options(rollerC, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(rollerC, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(rollerC, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(rollerC, hauteur);
    lv_obj_set_width(rollerC, largeur);
    lv_obj_set_style_text_align(rollerC, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_align_to(rollerC, rollerM, LV_ALIGN_OUT_RIGHT_MID, 0, 0);
    lv_obj_add_event_cb(rollerC, event_pinCentaine_Changement, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(rollerC, 2, LV_ANIM_OFF);

    lv_obj_t* rollerD = lv_roller_create(winSettings);
    lv_roller_set_options(rollerD, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(rollerD, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(rollerD, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(rollerD, hauteur);
    lv_obj_set_width(rollerD, largeur);
    lv_obj_set_style_text_align(rollerD, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_align_to(rollerD, rollerC, LV_ALIGN_OUT_RIGHT_MID, 0, 0);
    lv_obj_add_event_cb(rollerD, event_pinDizaine_Changement, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(rollerD, 3, LV_ANIM_OFF);

    lv_obj_t* rollerU = lv_roller_create(winSettings);
    lv_roller_set_options(rollerU, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(rollerU, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(rollerU, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(rollerU, hauteur);
    lv_obj_set_width(rollerU, largeur);
    lv_obj_set_style_text_align(rollerU, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_align_to(rollerU, rollerD, LV_ALIGN_OUT_RIGHT_MID, 0, 0);
    lv_obj_add_event_cb(rollerU, event_pinUnite_Changement, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(rollerU, 4, LV_ANIM_OFF);

    btn = lv_btn_create(winSettings);
    lv_obj_set_size(btn, 200, 50);
    lv_obj_align(btn, LV_ALIGN_BOTTOM_MID, 0, 0);
    lbl = lv_label_create(btn);
    lv_label_set_text(lbl, LV_SYMBOL_REFRESH "  Valider  " LV_SYMBOL_REFRESH);
    lv_obj_align_to(lbl, btn, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_event_cb(btn, event_ChangerPin, LV_EVENT_ALL, NULL);
    //lv_obj_add_event_cb(btn, event_Changer_Pin, LV_EVENT_ALL, NULL);

    /*Changement de page*/
    lv_obj_t* prev = lv_scr_act();
    lv_scr_load(winSettings);
    lv_obj_del(prev);
};



void SecurityPage() {



    winSecurity = lv_obj_create(NULL);
    lv_obj_t* btn;

    lv_obj_t* lbl;



    const char* opts = "0\n1\n2\n3\n4\n5\n6\n7\n8\n9";
    static lv_style_t style_sel;
    lv_style_init(&style_sel);
    lv_style_set_text_font(&style_sel, &lv_font_montserrat_38);
    static lv_style_t style_other;
    lv_style_init(&style_other);
    lv_style_set_text_font(&style_other, &lv_font_montserrat_28);


    lbl = lv_label_create(winSecurity);
    lv_obj_add_style(lbl, &style_sel, LV_PART_MAIN);
    lv_label_set_text(lbl, "Securite");
    lv_obj_align(lbl, LV_ALIGN_TOP_MID, 0, 0);

    int largeur = 320 / 4 - 10;
    int hauteur = 4;

    lv_obj_t* rollerM = lv_roller_create(winSecurity);
    lv_roller_set_options(rollerM, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(rollerM, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(rollerM, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(rollerM, hauteur);
    lv_obj_set_width(rollerM, largeur);
    lv_obj_set_style_text_align(rollerM, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_align(rollerM, LV_ALIGN_LEFT_MID, 20, 0);
    lv_obj_add_event_cb(rollerM, event_pinMillier, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(rollerM, 1, LV_ANIM_OFF);

    lv_obj_t* rollerC = lv_roller_create(winSecurity);
    lv_roller_set_options(rollerC, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(rollerC, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(rollerC, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(rollerC, hauteur);
    lv_obj_set_width(rollerC, largeur);
    lv_obj_set_style_text_align(rollerC, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_align_to(rollerC, rollerM, LV_ALIGN_OUT_RIGHT_MID, 0, 0);
    lv_obj_add_event_cb(rollerC, event_pinCentaine, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(rollerC, 2, LV_ANIM_OFF);

    lv_obj_t* rollerD = lv_roller_create(winSecurity);
    lv_roller_set_options(rollerD, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(rollerD, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(rollerD, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(rollerD, hauteur);
    lv_obj_set_width(rollerD, largeur);
    lv_obj_set_style_text_align(rollerD, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_align_to(rollerD, rollerC, LV_ALIGN_OUT_RIGHT_MID, 0, 0);
    lv_obj_add_event_cb(rollerD, event_pinDizaine, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(rollerD, 3, LV_ANIM_OFF);

    lv_obj_t* rollerU = lv_roller_create(winSecurity);
    lv_roller_set_options(rollerU, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(rollerU, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(rollerU, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(rollerU, hauteur);
    lv_obj_set_width(rollerU, largeur);
    lv_obj_set_style_text_align(rollerU, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_align_to(rollerU, rollerD, LV_ALIGN_OUT_RIGHT_MID, 0, 0);
    lv_obj_add_event_cb(rollerU, event_pinUnite, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(rollerU, 4, LV_ANIM_OFF);

    btn = lv_btn_create(winSecurity);
    lv_obj_set_size(btn, 200, 50);
    lv_obj_align(btn, LV_ALIGN_BOTTOM_MID, 0, 0);
    lbl = lv_label_create(btn);
    lv_label_set_text(lbl, LV_SYMBOL_OK "  Valider  " LV_SYMBOL_OK);
    lv_obj_align_to(lbl, btn, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_event_cb(btn, btn_event_btnSecurite, LV_EVENT_ALL, NULL);

    lv_scr_load(winSecurity);
};

static void event_pinMillier(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));

        codeMillier = buf[0];
        
        
    }
};
static void event_pinCentaine(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));

        codeCentaine = buf[0];
        
    }
};
static void event_pinDizaine(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));

        codeDizaine = buf[0];
        
       
    }
};
static void event_pinUnite(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));

        codeUnite = buf[0];
        
    }
};

static void event_pinMillier_Changement(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));

        
        codePinMillier = buf[0];
    }
};
static void event_pinCentaine_Changement(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));

        
        codePinCentaine = buf[0];
    }
};
static void event_pinDizaine_Changement(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));

       
        codePinDizaine = buf[0];
    }
};
static void event_pinUnite_Changement(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));
        LV_LOG_USER("Selected month: %s\n", buf);
        
        codePinUnite = buf[0];
    }
};




static void event_cbErreur(lv_event_t* e)
{
    lv_obj_t* obj = lv_event_get_current_target(e);

    // lv_msgbox_close(mbox1);
    lv_msgbox_close(mboxErreur);
    lv_tabview_set_act(tabview, 4, LV_ANIM_ON);

};

void MenuPage() {



    winMenu = lv_obj_create(NULL);

    static lv_style_t style_sel;
    lv_style_init(&style_sel);
    lv_style_set_text_font(&style_sel, &lv_font_montserrat_38);

    lv_obj_t* Titre = lv_label_create(winMenu);
    lv_obj_align(Titre, LV_ALIGN_TOP_MID, 0, 0);
    lv_obj_add_style(Titre, &style_sel,LV_PART_MAIN);
    lv_label_set_text(Titre, LV_SYMBOL_HOME " Menu " LV_SYMBOL_HOME);

    /*Timer*/
    arc = lv_arc_create(winMenu);
    lv_arc_set_value(arc, 25);
    lv_obj_set_size(arc, 150, 150);
    lv_arc_set_rotation(arc, 360);
    lv_arc_set_bg_angles(arc, 0, 360);
    lv_obj_remove_style(arc, NULL, LV_PART_KNOB);   /*Be sure the knob is not displayed*/
    lv_obj_clear_flag(arc, LV_OBJ_FLAG_CLICKABLE);  /*To not allow adjusting by click*/
    lv_obj_center(arc);
   // lv_timer_del(timer);
   
        timer = lv_timer_create(my_timer, 100, NULL);//////////////////////////////////////////////////////////////////////////////////
        delTimer = false;
    
    /*wifi symbol*/
    lblWifiStatu = lv_label_create(winMenu);
    lv_obj_center(lblWifiStatu);
    lv_label_set_text(lblWifiStatu,"wifiNok");
    /*Timer_end*/

    lv_obj_t* btn = lv_btn_create(winMenu);
    lv_obj_set_size(btn, 200, 50);
    lv_obj_align_to(btn, arc, LV_ALIGN_OUT_BOTTOM_MID, 0, 10);
    lv_obj_t* lbl = lv_label_create(btn);
    lv_label_set_text(lbl, LV_SYMBOL_PLAY "  DataPage  " LV_SYMBOL_PLAY);
    lv_obj_align_to(lbl, btn, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_event_cb(btn, ModeDataPage, LV_EVENT_ALL, NULL);
    //lv_obj_align_to(btn, arc, LV_ALIGN_OUT_BOTTOM_MID, 0, 10);

    btn = lv_btn_create(winMenu);
    lv_obj_set_size(btn, 50, 50);
    lbl = lv_label_create(btn);
    lv_label_set_text(lbl, LV_SYMBOL_SETTINGS);
    lv_obj_align_to(lbl, btn, LV_ALIGN_CENTER, 0, 0);
    lv_obj_align(btn, LV_ALIGN_TOP_RIGHT, 0, 0);
    lv_obj_add_event_cb(btn, ModeSettingsPage, LV_EVENT_ALL, NULL);

    lv_obj_t* prev = lv_scr_act();
    lv_scr_load(winMenu);
    lv_obj_del(prev);



};

static void btn_event_send_ERREUR(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* btn = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED) {
        static const char* btns[] = { "Fermer","" };
        if (true == false) {

            mboxErreur = lv_msgbox_create(NULL, "Erreur envoyer", "", btns, false);

            //envoyer("E");
            lv_obj_add_event_cb(mboxErreur, event_cbErreur, LV_EVENT_VALUE_CHANGED, NULL);
            lv_obj_center(mboxErreur);
        }
        else {

            Bconnexion = false;
            mboxErreur = lv_msgbox_create(NULL, "Erreur de connexion", "", btns, false);
            lv_obj_add_event_cb(mboxErreur, event_cbErreur, LV_EVENT_VALUE_CHANGED, NULL);
            lv_obj_center(mboxErreur);
        }

    }

}

void DataPage() {


    /*timer*/
    lv_timer_del(timer);
    delTimer = true;
    /*Timer_end*/

    winData = lv_obj_create(NULL);
    lv_obj_t* btn;
    lv_obj_t* lbl;
    lv_obj_t* roller;
    tabview = lv_tabview_create(winData, LV_DIR_TOP, 50);

    /*Add 3 tabs (the tabs are page (lv_page) and can be scrolled*/
    lv_obj_t* tab1 = lv_tabview_add_tab(tabview, "SYS");
    lv_obj_t* tab2 = lv_tabview_add_tab(tabview, "DIA");
    lv_obj_t* tab3 = lv_tabview_add_tab(tabview, "PUL");
    lv_obj_t* tab4 = lv_tabview_add_tab(tabview, "Res");

    const char* opts = "0\n1\n2\n3\n4\n5\n6\n7\n8\n9";
    static lv_style_t style_sel;
    lv_style_init(&style_sel);
    lv_style_set_text_font(&style_sel, &lv_font_montserrat_38);
    static lv_style_t style_other;
    lv_style_init(&style_other);
    lv_style_set_text_font(&style_other, &lv_font_montserrat_28);
    int largeur = 100;
    int hauteur = 4;

    lbl = lv_label_create(tab2);
    lv_obj_add_style(lbl, &style_sel, LV_PART_MAIN);
    lv_label_set_text(lbl, "Diastole : ");
    lv_obj_align(lbl, LV_ALIGN_TOP_MID, 0, 0);
    

    roller = lv_roller_create(tab2);
    lv_roller_set_options(roller, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(roller, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(roller, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(roller, hauteur);
    lv_obj_set_width(roller, largeur);
    lv_obj_set_style_text_align(roller, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_align(roller, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_add_event_cb(roller, event_handlerDyaCentaine, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(roller, 0, LV_ANIM_OFF);

    roller = lv_roller_create(tab2);
    lv_roller_set_options(roller, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(roller, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(roller, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(roller, hauteur);
    lv_obj_set_width(roller, largeur);
    lv_obj_set_style_text_align(roller, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_center(roller);
    lv_obj_add_event_cb(roller, event_handlerDyaDizaine, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(roller, 8, LV_ANIM_OFF);

    roller = lv_roller_create(tab2);
    lv_roller_set_options(roller, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(roller, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(roller, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(roller, hauteur);
    lv_obj_set_width(roller, largeur);
    lv_obj_set_style_text_align(roller, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_align(roller, LV_ALIGN_RIGHT_MID, 0, 0);
    lv_obj_add_event_cb(roller, event_handlerDyaUnite, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(roller, 0, LV_ANIM_OFF);

    btn = lv_btn_create(tab2);
    lv_obj_align(btn, LV_ALIGN_BOTTOM_MID, 0, 0);
    lv_obj_set_size(btn, 200, 50);
    lbl = lv_label_create(btn);
    lv_label_set_text(lbl, LV_SYMBOL_OK "  Valider  " LV_SYMBOL_OK);
    lv_obj_align_to(lbl, btn, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_event_cb(btn, DIA_btn_event_btn_suivant, LV_EVENT_ALL, NULL);

    lbl = lv_label_create(tab3);
    lv_obj_add_style(lbl, &style_sel, LV_PART_MAIN);
    lv_label_set_text(lbl, "Pulsation : ");
    lv_obj_align(lbl, LV_ALIGN_TOP_MID, 0, 0);

    roller = lv_roller_create(tab3);
    lv_roller_set_options(roller, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(roller, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(roller, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(roller, hauteur);
    lv_obj_set_width(roller, largeur);
    lv_obj_set_style_text_align(roller, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_align(roller, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_add_event_cb(roller, event_handlerPulCentaine, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(roller, 0, LV_ANIM_OFF);

    roller = lv_roller_create(tab3);
    lv_roller_set_options(roller, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(roller, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(roller, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(roller, hauteur);
    lv_obj_set_width(roller, largeur);
    lv_obj_set_style_text_align(roller, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_center(roller);
    lv_obj_add_event_cb(roller, event_handlerPulDizaine, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(roller, 7, LV_ANIM_OFF);

    roller = lv_roller_create(tab3);
    lv_roller_set_options(roller, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(roller, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(roller, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(roller, hauteur);
    lv_obj_set_width(roller, largeur);
    lv_obj_set_style_text_align(roller, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_align(roller, LV_ALIGN_RIGHT_MID, 0, 0);
    lv_obj_add_event_cb(roller, event_handlerPulUnite, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(roller, 0, LV_ANIM_OFF);

    btn = lv_btn_create(tab3);
    lv_obj_align(btn, LV_ALIGN_BOTTOM_MID, 0, 0);
    lv_obj_set_size(btn, 200, 50);
    lbl = lv_label_create(btn);
    lv_label_set_text(lbl, LV_SYMBOL_OK "  Valider  " LV_SYMBOL_OK);
    lv_obj_align_to(lbl, btn, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_event_cb(btn, PUL_btn_event_btn_suivant, LV_EVENT_ALL, NULL);

    lv_obj_t* lblSysD = lv_label_create(tab4);
    lv_obj_add_style(lblSysD, &style_other, LV_PART_MAIN);
    lv_label_set_text(lblSysD, "Systole : ");
    lv_obj_align(lblSysD, LV_ALIGN_TOP_LEFT, 0, 0);

    lv_obj_t* lblPulD = lv_label_create(tab4);
    lv_obj_add_style(lblPulD, &style_other, LV_PART_MAIN);
    lv_label_set_text(lblPulD, "Diastole : ");
    lv_obj_align(lblPulD, LV_ALIGN_TOP_LEFT, 0, 30);

    lv_obj_t* lblDiaD = lv_label_create(tab4);
    lv_obj_add_style(lblDiaD, &style_other, LV_PART_MAIN);
    lv_label_set_text(lblDiaD, "Pouls : ");
    lv_obj_align(lblDiaD, LV_ALIGN_TOP_LEFT, 0, 60);



    SYS_labelC = lv_label_create(tab4);
    lv_obj_add_style(SYS_labelC, &style_other, LV_PART_MAIN);
    lv_label_set_text(SYS_labelC, "1");
    lv_obj_align_to(SYS_labelC, lblSysD, LV_ALIGN_OUT_RIGHT_MID, 0, 0);

    SYS_labelD = lv_label_create(tab4);
    lv_obj_add_style(SYS_labelD, &style_other, LV_PART_MAIN);
    lv_label_set_text(SYS_labelD, "2");
    lv_obj_align_to(SYS_labelD, SYS_labelC, LV_ALIGN_OUT_RIGHT_MID, 0, 0);

    SYS_labelU = lv_label_create(tab4);
    lv_obj_add_style(SYS_labelU, &style_other, LV_PART_MAIN);
    lv_label_set_text(SYS_labelU, "0");
    lv_obj_align_to(SYS_labelU, SYS_labelD, LV_ALIGN_OUT_RIGHT_MID, 0, 0);

    DIA_labelC = lv_label_create(tab4);
    lv_obj_add_style(DIA_labelC, &style_other, LV_PART_MAIN);
    lv_label_set_text(DIA_labelC, "0");
    lv_obj_align_to(DIA_labelC, lblPulD, LV_ALIGN_OUT_RIGHT_MID, 0, 0);

    DIA_labelD = lv_label_create(tab4);
    lv_obj_add_style(DIA_labelD, &style_other, LV_PART_MAIN);
    lv_label_set_text(DIA_labelD, "8");
    lv_obj_align_to(DIA_labelD, DIA_labelC, LV_ALIGN_OUT_RIGHT_MID, 0, 0);

    DIA_labelU = lv_label_create(tab4);
    lv_obj_add_style(DIA_labelU, &style_other, LV_PART_MAIN);
    lv_label_set_text(DIA_labelU, "0");
    lv_obj_align_to(DIA_labelU, DIA_labelD, LV_ALIGN_OUT_RIGHT_MID, 0, 0);

    PUL_labelC = lv_label_create(tab4);
    lv_obj_add_style(PUL_labelC, &style_other, LV_PART_MAIN);
    lv_label_set_text(PUL_labelC, "0");
    lv_obj_align_to(PUL_labelC, lblDiaD, LV_ALIGN_OUT_RIGHT_MID, 0, 0);

    PUL_labelD = lv_label_create(tab4);
    lv_obj_add_style(PUL_labelD, &style_other, LV_PART_MAIN);
    lv_label_set_text(PUL_labelD, "7");
    lv_obj_align_to(PUL_labelD, PUL_labelC, LV_ALIGN_OUT_RIGHT_MID, 0, 0);

    PUL_labelU = lv_label_create(tab4);
    lv_obj_add_style(PUL_labelU, &style_other, LV_PART_MAIN);
    lv_label_set_text(PUL_labelU, "0");
    lv_obj_align_to(PUL_labelU, PUL_labelD, LV_ALIGN_OUT_RIGHT_MID, 0, 0);







    lv_obj_t* lblSysF = lv_label_create(tab4);
    lv_obj_add_style(lblSysF, &style_other, LV_PART_MAIN);
    lv_label_set_text(lblSysF, " mmHg");
    lv_obj_align_to(lblSysF, SYS_labelU, LV_ALIGN_OUT_RIGHT_MID, 0, 0);

    lv_obj_t* lblPulF = lv_label_create(tab4);
    lv_obj_add_style(lblPulF, &style_other, LV_PART_MAIN);
    lv_label_set_text(lblPulF, " Pul/min");
    lv_obj_align_to(lblPulF, PUL_labelU, LV_ALIGN_OUT_RIGHT_MID, 0, 0);

    lv_obj_t* lblDiaF = lv_label_create(tab4);
    lv_obj_add_style(lblDiaF, &style_other, LV_PART_MAIN);
    lv_label_set_text(lblDiaF, " mmHg");
    lv_obj_align_to(lblDiaF, DIA_labelU, LV_ALIGN_OUT_RIGHT_MID, 0, 0);

    lv_obj_t* btnSend = lv_btn_create(tab4);
    lv_obj_align(btnSend, LV_ALIGN_BOTTOM_MID, 0, 0);
    lv_obj_set_size(btnSend, 200, 50);
    lv_obj_t* lblSend = lv_label_create(btnSend);
    lv_label_set_text(lblSend, LV_SYMBOL_UPLOAD "  Envoyer  " LV_SYMBOL_UPLOAD);
    lv_obj_align_to(lblSend, btnSend, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_event_cb(btnSend, btn_event_cb, LV_EVENT_ALL, NULL);

    lv_obj_t* btnErreur = lv_btn_create(tab4);
    lv_obj_align(btnErreur, LV_ALIGN_BOTTOM_MID, 0, -60);
    lv_obj_set_size(btnErreur, 200, 50);
    lv_obj_add_event_cb(btnErreur, btn_event_send_ERREUR, LV_EVENT_ALL, NULL);

    lv_obj_t* labelErreur = lv_label_create(btnErreur);
    lv_label_set_text(labelErreur, LV_SYMBOL_WARNING "  Erreur  " LV_SYMBOL_WARNING);
    lv_obj_center(labelErreur);


    btn = lv_btn_create(tab4);
    lv_obj_align(btn, LV_ALIGN_BOTTOM_LEFT, 0, 0);
    lv_obj_set_size(btn, 40, 50);
    lbl = lv_label_create(btn);
    lv_label_set_text(lbl, LV_SYMBOL_SETTINGS);
    lv_obj_align_to(lbl, btn, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_event_cb(btn, ModeSettingsPage, LV_EVENT_ALL, NULL);


    lv_obj_t* btnHome = lv_btn_create(tab4);
    lv_obj_set_size(btnHome, 40, 50);
    lv_obj_align(btnHome, LV_ALIGN_BOTTOM_RIGHT, 0, 0);
    lbl = lv_label_create(btnHome);
    lv_label_set_text(lbl, LV_SYMBOL_HOME);
    lv_obj_align_to(lbl, btnHome, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_event_cb(btnHome, ModeMenuPage, LV_EVENT_ALL, NULL);

    lbl = lv_label_create(tab1);
    lv_obj_add_style(lbl, &style_sel, LV_PART_MAIN);
    lv_label_set_text(lbl, "Systole : ");
    lv_obj_align(lbl, LV_ALIGN_TOP_MID, 0, 0);


    roller = lv_roller_create(tab1);
    lv_roller_set_options(roller, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(roller, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(roller, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(roller, hauteur);
    lv_obj_set_width(roller, largeur);
    lv_obj_set_style_text_align(roller, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_align(roller, LV_ALIGN_LEFT_MID, 0, 0);
    lv_obj_add_event_cb(roller, event_handlerSysCentaine, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(roller, 1, LV_ANIM_OFF);

    roller = lv_roller_create(tab1);
    lv_roller_set_options(roller, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(roller, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(roller, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(roller, hauteur);
    lv_obj_set_width(roller, largeur);
    lv_obj_set_style_text_align(roller, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_center(roller);
    lv_obj_add_event_cb(roller, event_handlerSysDizaine, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(roller, 2, LV_ANIM_OFF);

    roller = lv_roller_create(tab1);
    lv_roller_set_options(roller, opts, LV_ROLLER_MODE_INFINITE);
    lv_obj_add_style(roller, &style_sel, LV_PART_SELECTED);
    lv_obj_add_style(roller, &style_other, LV_PART_MAIN);
    lv_roller_set_visible_row_count(roller, hauteur);
    lv_obj_set_width(roller, largeur);
    lv_obj_set_style_text_align(roller, LV_TEXT_ALIGN_LEFT, 0);
    lv_obj_align(roller, LV_ALIGN_RIGHT_MID, 0, 0);
    lv_obj_add_event_cb(roller, event_handlerSysUnite, LV_EVENT_ALL, NULL);
    lv_roller_set_selected(roller, 0, LV_ANIM_OFF);

    btn = lv_btn_create(tab1);
    lv_obj_align(btn, LV_ALIGN_BOTTOM_MID, 0, 0);
    lv_obj_set_size(btn, 200, 50);
    lbl = lv_label_create(btn);
    lv_label_set_text(lbl, LV_SYMBOL_OK "  Valider  " LV_SYMBOL_OK);
    lv_obj_align_to(lbl, btn, LV_ALIGN_CENTER, 0, 0);
    lv_obj_add_event_cb(btn, SYS_btn_event_btn_suivant, LV_EVENT_ALL, NULL);

    lv_obj_t* prev = lv_scr_act();
    lv_scr_load(winData);
    lv_obj_del(prev);
};

static void event_handlerSysCentaine(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));
        //    LV_LOG_USER("Selected value: %s", buf);
        lv_label_set_text(SYS_labelC, buf);
        SYS[0] = buf[0];
    }
}
static void event_handlerSysDizaine(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));
        //    LV_LOG_USER("Selected value: %s", buf);
        lv_label_set_text(SYS_labelD, buf);
        SYS[1] = buf[0];
    }
}
static void event_handlerSysUnite(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));
        //    LV_LOG_USER("Selected value: %s", buf);
        lv_label_set_text(SYS_labelU, buf);
        SYS[2] = buf[0];
    }
}
static void event_handlerDyaCentaine(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));
        //    LV_LOG_USER("Selected value: %s", buf);
        lv_label_set_text(DIA_labelC, buf);
        DIA[0] = buf[0];
    }
}
static void event_handlerDyaDizaine(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));
        //   LV_LOG_USER("Selected value: %s", buf);
        lv_label_set_text(DIA_labelD, buf);
        DIA[1] = buf[0];
    }
}
static void event_handlerDyaUnite(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));
        //   LV_LOG_USER("Selected value: %s", buf);
        lv_label_set_text(DIA_labelU, buf);
        DIA[2] = buf[0];
    }
}
static void event_handlerPulCentaine(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));
        //   LV_LOG_USER("Selected value: %s", buf);
        lv_label_set_text(PUL_labelC, buf);
        PUL[0] = buf[0];
    }
}
static void event_handlerPulDizaine(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));
        lv_label_set_text(PUL_labelD, buf);
        PUL[1] = buf[0];
    }
}
static void event_handlerPulUnite(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* obj = lv_event_get_target(e);
    if (code == LV_EVENT_VALUE_CHANGED) {
        char buf[32];
        lv_roller_get_selected_str(obj, buf, sizeof(buf));
        lv_label_set_text(PUL_labelU, buf);
        PUL[2] = buf[0];
    }
}
static void event_cb(lv_event_t* e)
{
    lv_obj_t* obj = lv_event_get_current_target(e);
 lv_msgbox_close(mbox1);
    lv_tabview_set_act(tabview, 4, LV_ANIM_ON);

}
static void btn_event_cb(lv_event_t* e)
{


    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* btn = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED) {

        
        

        static const char* btns[] = { "Fermer","" };
        if (Bconnexion == true) {// pour connexion
            

            mbox1 = lv_msgbox_create(NULL, "Message envoyer", "", btns, false);
            //envoyer(data);

            lv_obj_add_event_cb(mbox1, event_cb, LV_EVENT_VALUE_CHANGED, NULL);
            lv_obj_center(mbox1);
        }
        else {

            Bconnexion = false;
            mbox1 = lv_msgbox_create(NULL, "Erreur de connexion", "", btns, false);
            lv_obj_add_event_cb(mbox1, event_cb, LV_EVENT_VALUE_CHANGED, NULL);
            lv_obj_center(mbox1);
        }

    }
}

static void SYS_btn_event_btn_suivant(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* btn = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED) {
        lv_tabview_set_act(tabview, 1, LV_ANIM_ON);
    }
}
static void DIA_btn_event_btn_suivant(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* btn = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED) {
        lv_tabview_set_act(tabview, 2, LV_ANIM_ON);
    }
}
static void PUL_btn_event_btn_suivant(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* btn = lv_event_get_target(e);
    if (code == LV_EVENT_CLICKED) {
        lv_tabview_set_act(tabview, 3, LV_ANIM_ON);
    }
}
static void btn_event_btnSecurite(lv_event_t* e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* btn = lv_event_get_target(e);
    static const char* btns[] = { "Fermer","" };
    
    if (code == LV_EVENT_CLICKED) {
    
        
        char pinT[4];
        char tab[5];
        tab[0] = codeMillier;
        tab[1] = codeCentaine;
        tab[2] = codeDizaine;
        tab[3] = codeUnite;
        tab[4] = '\0';
        /*lire dans un txt*/
        FILE* f;
        f = fopen("SecuriteCode.txt", "r");
        //fputs(tab, f);// pour ecrire
        fread(pinT, sizeof(pinT), 1, f);
        fclose(f);
        /*lire*/
        if (tab[0] + tab[1] + tab[2] + tab[3] == pinT[0] + pinT[1] + pinT[2] + pinT[3]) { // 
            MenuPage();



        }
        else {
            mboxPin = lv_msgbox_create(NULL, "Veuiller Reassyer", "", btns, false);
            lv_obj_add_event_cb(mboxPin, event_mboxPin, LV_EVENT_VALUE_CHANGED, NULL);
            lv_obj_center(mboxPin);
        }
    }
}

static void event_mboxPin(lv_event_t* e)
{
    lv_obj_t* obj = lv_event_get_current_target(e);

    
    lv_msgbox_close(mboxPin);
    

};

static void event_ChangerPin(lv_event_t* e) {
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t* btn = lv_event_get_target(e);

    //lv_label_set_text(lblTestSecurite, codePin.c_str());
    if (code == LV_EVENT_CLICKED) {
       
        //codePinChangement = codePinMillier + codePinCentaine + codePinDizaine + codePinUnite;
        //std::fstream fichier("C:\\Users\\JUILLEJ\\Desktop\\SecuriteCode.txt");  // on ouvre le fichier en lecture
        static const char* btns[] = { "Fermer","" };
        codePin[0] = codePinMillier;
        codePin[1] = codePinCentaine;
        codePin[2] = codePinDizaine;
        codePin[3] = codePinUnite;
        codePin[4] = '\0';
        
        FILE* f;
        f = fopen("SecuriteCode.txt", "w");
        
        if (f != NULL)  // si l'ouverture a réussi
        {
         
            fputs(codePin, f);// pour ecrire
            fclose(f);
        
           mboxPin = lv_msgbox_create(NULL, "Le code pin vien d'etre changer", "", btns, false);
           lv_obj_add_event_cb(mboxPin, event_mboxPin, LV_EVENT_VALUE_CHANGED, NULL);
            lv_obj_center(mboxPin);
        }
        else { // sinon
            
           // mboxPin = lv_msgbox_create(NULL, "Pin changée", "", btns, false);
            mboxPin = lv_msgbox_create(NULL, "Erreur dans l'ecriture", "", btns, false);
           lv_obj_add_event_cb(mboxPin, event_mboxPin, LV_EVENT_VALUE_CHANGED, NULL);
           lv_obj_center(mboxPin);
        }
    }
}

//std::string exec(const char* cmd) {
//    char buffer[128];
//    std::string result = "";
//    FILE* pipe = _popen(cmd, "r");
//    if (!pipe) throw std::runtime_error("popen() failed!");
//    try {
//        while (fgets(buffer, sizeof buffer, pipe) != NULL) {
//            result += buffer;
//        }
//    }
//    catch (...) {
//        _pclose(pipe);
//        throw;
//    }
//    _pclose(pipe);
//    return result;
//}
/*bool clientTcp::connexion(std::string IpServeur, unsigned int port)
{

    ids_client = socket(AF_INET, SOCK_STREAM, 0);
    if (ids_client < 0)
    {
        return false;
    }
    this->ids_client = ids_client;


    adr_serveur.sin_family = AF_INET; // Domaine d'@
    adr_serveur.sin_port = htons(port);// N° du port
    adr_serveur.sin_addr.s_addr = inet_addr(IpServeur.c_str());
    // @IP du serveur                                                                       	   int res_connexion = connect(ids_client,
    int res_connexion = connect(ids_client, (struct sockaddr*)&adr_serveur, sizeof(adr_serveur));
    if (res_connexion < 0)
    {
        return false;
    }
    return true;
}
*/
//bool clientTcp::envoyer(std::string data)
//{
   // if (!send(ids_client, data.c_str(), data.size(), 0)) return false;
   // return true;
//}

//void clientTcp::fermer()
//{
    //close(ids_client);
//}
