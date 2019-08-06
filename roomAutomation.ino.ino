int fan1Pin = 11;
int lightPin = 12;
int fan2Pin=9;


 

void setup()                  

{

 Serial.begin(9600);

 pinMode(fan1Pin, OUTPUT);
 
 pinMode(fan2Pin, OUTPUT);
 pinMode(lightPin, OUTPUT);
}



void loop()

{
   digitalWrite(fan1Pin,HIGH);
    digitalWrite(fan2Pin,HIGH);
     digitalWrite(lightPin,HIGH);
  while(Serial.available())

    {// reading the input
char state=Serial.read();
      if(state=='a'){
        digitalWrite(fan1Pin,HIGH);
        }
         if(state=='b'){
          digitalWrite(fan1Pin,LOW);
          
          Serial.println(state);
          }
              if(state=='c'){
          digitalWrite(fan2Pin,HIGH);
           Serial.println(state);
          }
              if(state=='d'){
          digitalWrite(fan2Pin,LOW);
           Serial.println(state);
          }
            if(state=='e'){
          digitalWrite(lightPin,HIGH);
           Serial.println(state);
          }
             if(state=='f'){
          digitalWrite(lightPin,LOW);
           Serial.println(state);
          }
    }
}

  
