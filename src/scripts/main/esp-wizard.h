#include "Arduino.h"
#include "ESPAsyncWebServer.h"

class EspWizard{
  private:
    AsyncWebServer* server;

  public:
    EspWizard(AsyncWebServer* server);
    void build();
    void addButton(String button_label, String button);
    void addLabel(char label[], char value[]);
    int addToggleButton();

};