// #include <Arduino.h>
// #include "MyOledView.h"
// #include "MyOledViewInitialisation.h"
// #include "Adafruit_SSD1306.h"
// #include "MyOledViewWifiAp.h"

// using namespace std;

// void MyOledViewWifiAp::update(Adafruit_SSD1306 *adafruit){
    
// }
// void MyOledViewWifiAp::setNomDuSysteme(std::string val){
//     setNomDuSysteme = val;
// }

// void MyOledViewIMyOledViewWifiApnitialisation::setSsIDDuSysteme(std::string val){
//     setSsIDDuSysteme = val;
// }

// void MyOledViewWifiAp::setSsIDDuSysteme(std::string val){
//     setSsIDDuSysteme = val;
// }
// void MyOledViewWifiAp::display(Adafruit_SSD1306 *adafruit){

//     char strID[128];
//     char strSSID[128];
//     char strPass[128];

//     sprintf(strID,"Id : %s", IdDuSysteme.c_str());
//     sprintf(strSSID,"SSID : %s", NomDuSysteme.c_str());
//     sprintf(strPass,"PASS : %s", passDuSysteme.c_str());

//     adafruit->clearDisplay();
//     adafruit->setTextSize(2);
//     adafruit->setTextColor(WHITE);
//     adafruit->setCursor(0,0);
//     adafruit->println(NomDuSysteme.c_str());
//     adafruit->setTextSize(1);
//     adafruit->println(strID);
//     adafruit->println("AP Configuration");
//     adafruit->println(strSSID);
//     adafruit->println(strPass);
//     adafruit->display();

// }