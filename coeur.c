#include "coeur.h"
#include <Arduino.h>




void une_led_sur_deux() {
      digitalWrite(2,HIGH);    
      digitalWrite(3,LOW);      
      digitalWrite(4,HIGH);    
      digitalWrite(5,LOW);     
      digitalWrite(6,HIGH);   
      digitalWrite(7,LOW);     
      digitalWrite(8,HIGH);   
      digitalWrite(9,LOW);    
      digitalWrite(10,HIGH);  
      digitalWrite(11,LOW);    
      delay(250);              
      digitalWrite(2,LOW);    
      digitalWrite(3,HIGH);    
      digitalWrite(4,LOW);     
      digitalWrite(5,HIGH);    
      digitalWrite(6,LOW);     
      digitalWrite(7,HIGH);   
      digitalWrite(8,LOW);     
      digitalWrite(9,HIGH);   
      digitalWrite(10,LOW);    
      digitalWrite(11,HIGH);   
      delay(250);             
  
}
//*__________________________________________________________________________________________________________________________________________________________________________________*//



void une_led_sur_trois() {//boucle infinit qui vas rèpeter les directives suivante 
    digitalWrite(2,LOW);   
    digitalWrite(3,LOW);  
    digitalWrite(4,HIGH);  
    digitalWrite(5,LOW);   
    digitalWrite(6,LOW);  
    digitalWrite(7,HIGH);  
    digitalWrite(8,LOW); 
    digitalWrite(9,LOW);  
    digitalWrite(10,HIGH);  
    digitalWrite(11,LOW); 
    delay(100);            
    digitalWrite(2,HIGH);  
    digitalWrite(3,LOW);  
    digitalWrite(4,LOW); 
    digitalWrite(5,HIGH);  
    digitalWrite(6,LOW);   
    digitalWrite(7,LOW);  
    digitalWrite(8,HIGH);  
    digitalWrite(9,LOW); 
    digitalWrite(10,LOW);  
    digitalWrite(11,HIGH); 
    delay(100);            
         

}
//*_____________________________________________________________________________________________________________________________________________________________________________________*//



void chenille() {
  // configuration du mode d'allumage , void loop c'est une boucle infinie , elle vas relire le programe selon ca configuration
digitalWrite(2,HIGH);//la preumière led qui seras allumer se relie dans le pin 2 de l'arduino
delay(50);          // la led vas rester 100 ms 
digitalWrite(2,LOW); // la led vas s'èteindre 
digitalWrite(3,HIGH);// en mème temp que la led prècèdente s'eteint la led suivante qui se reliras au pin 3 s'allumeras 
delay(50);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
delay(50);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(50);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
delay(50);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(50);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
delay(50);
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
delay(50);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
delay(50);
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
delay(50);
digitalWrite(11,LOW);
delay(1000);

}
//*___________________________________________________________________________________________________________________________________________________________________________________*//



void chenille2() {
  // configuration du mode d'allumage , void loop c'est une boucle infinie , elle vas relire le programe selon ca configuration
digitalWrite(2,HIGH);//la preumière led qui seras allumer se relie dans le pin 2 de l'arduino
delay(100);          // la led vas rester allumer ( elle vas garder son etat) pendant  100 ms 
digitalWrite(2,LOW); // la led vas s'èteindre 
digitalWrite(3,HIGH);// en mème temp que la led prècèdente s'eteint la led suivante qui se reliras au pin 3 s'allumeras 
delay(100);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
delay(100);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
delay(100);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
delay(100);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(100);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
delay(100);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
delay(100);
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
delay(100);
digitalWrite(11,LOW);
digitalWrite(11,HIGH);
delay(100);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);
delay(100);
digitalWrite(10,LOW);
digitalWrite(9,HIGH);
delay(100);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(100);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
delay(100);
digitalWrite(7,LOW);
digitalWrite(6,HIGH);
delay(100);
digitalWrite(6,LOW);
digitalWrite(5,HIGH);
delay(100);
digitalWrite(5,LOW);
digitalWrite(4,HIGH);
delay(100);
digitalWrite(4,LOW);
digitalWrite(3,HIGH);
delay(100);
digitalWrite(3,LOW);

}

//*_______________________________________________________________________________________________________________________________________________________________________________*//



void deux_chenille() {
 digitalWrite(11,HIGH);
 delay(100);
  digitalWrite(11,LOW);
   digitalWrite(2,HIGH);
    digitalWrite(10,HIGH);
    delay(100);
     digitalWrite(2,LOW);
      digitalWrite(10,LOW);
       digitalWrite(3,HIGH);
        digitalWrite(9,HIGH);
        delay(100);
         digitalWrite(3,LOW);
          digitalWrite(9,LOW);
           digitalWrite(4,HIGH);
            digitalWrite(8,HIGH);
            delay(100);
             digitalWrite(4,LOW); 
              digitalWrite(8,LOW);
               digitalWrite(5,HIGH);
                digitalWrite(7,HIGH);
                delay(100);
                 digitalWrite(5,LOW);
                  digitalWrite(7,LOW);
                  digitalWrite(6,HIGH);
                  delay(100);
                  digitalWrite(6,LOW);
                  digitalWrite(5,HIGH);
                digitalWrite(7,HIGH);
                 delay(100);
                  digitalWrite(5,LOW);
                  digitalWrite(7,LOW);
                  digitalWrite(4,HIGH);
            digitalWrite(8,HIGH);
              delay(100);
              digitalWrite(4,LOW); 
              digitalWrite(8,LOW);
              digitalWrite(3,HIGH);
        digitalWrite(9,HIGH);
           delay(100);
             digitalWrite(3,LOW);
          digitalWrite(9,LOW);
            digitalWrite(2,HIGH);
    digitalWrite(10,HIGH);
            delay(100);
              digitalWrite(2,LOW);
      digitalWrite(10,LOW);
        
              

}

//*__________________________________________________________________________________________________________________________________________________________________________*//



void toutes_les_leds() { // configuration du mode d'allumage , void loop c'est une boucle infinie , elle vas relire le programe selon ca configuration
  // dans cette partie toutes les LEDs vont s'allumer 
digitalWrite(2,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);

delay (1000);           // les leds seront allumer pendant un lapse de temp d'une seconde soit 1000 ms  apres ce laps de temp les leds s'eteindrons 
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);

delay (1000);
}
//*_______________________________________________________________________________________________________________________________________________________________________________*//

void au_choix(int x){
  digitalWrite(x,LOW);   //Fonction d allumage
    delay(300);             //Delai d allumage
    digitalWrite(x,HIGH);    //Fonction d allumage
    delay(300);   
}
//*________________________________________________________________________________________________________________________________________________________________________________*//
void optionelle1() {
// nous metons en place des directives soit haut (HIGH) soit bas (LOW), pour faire en sorte qu'une LED sur deux soit allumer 
digitalWrite(2,HIGH);// ici les leds qui se trouve a la sortie 2,3,4,5 seront allumer 
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);



digitalWrite(7,LOW);//pendant que les leds qui se trouve a la sortie 7,8,9,10 seront eteinte 
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
delay(1000); // c'est directives vont rèster sur le mème etat pendant un certaint lapse de temp dèfinit , dans ce cas si c'est 1000 ms 
// apres ce lapse de temp nous passons aux directives suivante 

digitalWrite(2,LOW);//ici les leds qui etait allumer au dèbut vont s'èteindre 
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);



digitalWrite(7,HIGH);//et les leds qui etait eteinte au debut vont s'allumer 
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
delay (1000);// cette dernière directive vas aussi garder ses etat pendant 1000 ms 

// le programame est finit les lEDS vont s'allumer 1/2 , le void loop () est une bouclce infinit , du coup le programme vas lire les directives en suivant les etapes et les rèpeter a l'infinti 
  
}
//*______________________________________________________________________________________________________________________________________________________________________________________*//
void optionelle2() {//boucle infinit qui vas rèpeter les directives suivante 
digitalWrite(11,LOW);//low(etat bas) les LEDS seront allumer
digitalWrite(2,LOW);
digitalWrite(3,LOW);
delay(1000);
digitalWrite(11,HIGH);//HIGH ( etat haut ) les LEDS seront allumer
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
delay(1000);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
delay(1000);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(2,LOW);
delay(1000);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
digitalWrite(2,HIGH);

}
