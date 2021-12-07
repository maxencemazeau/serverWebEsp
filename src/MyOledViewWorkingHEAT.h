/**
    Class MyOled : Gestion d'un écran Oled Utilisant un GPIO d'un contrôleur ESP32
    @file MyOled.h (Héritage : Adafruit_SSD1306)
    @author Alain Dubé
    @version 1.0 17/03/21  
    
    Historique des versions   
                            Versions  Date      Auteur      Description
                            
                            1.2      04/12/21   Samuel GASSAMA Ajout et définition des méthodes de la classe 
                            
    platform = espressif32
    board = esp32doit-devkit-v1
    framework = arduino
    lib_deps = 
        adafruit/Adafruit GFX Library @ ^1.10.1
        adafruit/Adafruit SSD1306 @ ^2.4.0
        adafruit/Adafruit NeoPixel @ ^1.7.0
    Autres librairies (à copier dans le répertoire lib)
        Aucune
    Résolution 128 x 64
            Protocole I2C, Adresse : 0x3C (défaut)
            GPIO21 : SDA
            GPIO22 : SCL
    Exemple d'utilisation (ainsi que toutes les commandes héritées de la Librarie Adafruit)
        #include "MyOled.h"
        MyOled *myOled = new MyOled(&Wire, OLED_RESET, SCREEN_HEIGHT, SCREEN_WIDTH);
        myOled->init(OLED_I2C_ADDRESS);
        myOled->veilleDelay(30); //En secondes

        myOledViewWorking = new MyOledViewWorking();
        myOledViewWorking->setNomDuSysteme("nomDuSysteme");
        myOledViewWorking->setIpDuSysteme(WiFi.localIP().toString().c_str());
        myOledViewWorking->setStatusDuSysteme("Four OK");
        myOled->displayView(myOledViewWorking);

        if (myOled->veilleCheck()) cout << "\nEst en veille";

        loop:
            myOled->veilleCheck();
            myOled->updateCurrentView(myOledViewWorking); //Pour les animations dans la vue si utilisées

**/

// #
// #include <Arduino.h>
// #include <Adafruit_SSD1306.h>


// class MyOledViewWorkingHEAT : public MyOledViewWorking {


//     private : 

//         virtual void display(Adafruit_SSD1306 * adafruit)= 0;
//         virtual void update(Adafruit_SSD1306 * adafruit)=0;

// }
