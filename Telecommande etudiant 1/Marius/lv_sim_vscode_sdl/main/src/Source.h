#pragma once

#include "lvgl/lvgl.h"
#include "lvgl/examples/lv_examples.h"
#include "lvgl/demos/lv_demos.h"
#include "lv_drivers/win32drv/win32drv.h"


#include "sys/types.h>"
#include <sys/socket.h> // socket, recv, send
#include <netinet/in.h> // sockaddr_in, htonl
#include <arpa/inet.h>  // inet_addr
#include <unistd.h>     // close

#include<iostream>
#include <stdio.h>
#include <stdlib.h>

void ModeSettingsPage(lv_event_t* e);
void ModeMenuPage(lv_event_t* e);
void ModeDataPage(lv_event_t* e);
void SecurityPage();
void MenuPage();
void SettingsPage();
void DataPage();

void my_timer(lv_timer_t* timer);


static void event_handlerSysCentaine(lv_event_t* e);
static void event_handlerSysDizaine(lv_event_t* e);
static void event_handlerSysUnite(lv_event_t* e);
static void event_handlerDyaCentaine(lv_event_t* e);
static void event_handlerDyaDizaine(lv_event_t* e);
static void event_handlerDyaUnite(lv_event_t* e);
static void event_handlerPulCentaine(lv_event_t* e);
static void event_handlerPulDizaine(lv_event_t* e);
static void event_handlerPulUnite(lv_event_t* e);
static void event_cb(lv_event_t* e);
static void btn_event_cb(lv_event_t* e);
static void btn_event_send_ERREUR(lv_event_t* e);
static void btn_event_send_ERREUR(lv_event_t* e);
static void SYS_btn_event_btn_suivant(lv_event_t* e);
static void DIA_btn_event_btn_suivant(lv_event_t* e);
static void PUL_btn_event_btn_suivant(lv_event_t* e);
static void event_pinMillier(lv_event_t* e);
static void event_pinCentaine(lv_event_t* e);
static void event_pinDizaine(lv_event_t* e);
static void event_pinUnite(lv_event_t* e);

static void event_pinMillier_Changement(lv_event_t* e);
static void event_pinCentaine_Changement(lv_event_t* e);
static void event_pinDizaine_Changement(lv_event_t* e);
static void event_pinUnite_Changement(lv_event_t* e);

static void btn_event_btnSecurite(lv_event_t* e);

static void event_ChangerPin(lv_event_t* e);

void initialisation();
//std::string exec(const char* cmd);
static void event_mboxPin(lv_event_t* e);


bool connexion(char* IpServeur, unsigned int port);
bool envoyer(char* data);
void fermer();
