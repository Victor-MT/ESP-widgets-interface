#include "esp-wizard.h"
#include "templates.h"
using namespace std;

const char *mainPage = headerTemp;
const String target = "<!-- %%APP%% -->";

EspWizard::EspWizard(AsyncWebServer* server) {
  
}

void EspWizard::build(){
  server -> on("/", HTTP_GET, [mainPage](AsyncWebServerRequest *request){
    request-> send_P(200, "text/html", mainPage);
  });
}

void EspWizard::addButton(String button_label, String button){
  String m;
  strcopy(m, mainPage);

  m.replace(m.find(target),target.length(), target);
}

void EspWizard::addLabel(char label[], char value[]){
  
}

int EspWizard::addToggleButton(){
  return 0;
}
