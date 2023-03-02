/*
RGB Colour turn of using Seriel Commands
Created by Giftlin Devapriya K
18Feb 2023
*/

char colour;
String inputString="";

void setup()                    // run once, when the sketch starts
{
 Serial.begin(9600);            // set the baud rate to 9600, same should be of your Serial Monitor
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(7, OUTPUT);
}

void loop()
{
  if(Serial.available()){
  while(Serial.available())
    {
      char inChar = (char)Serial.read(); //read the input
      inputString += inChar;        //make a string of the characters coming on serial
    }
    Serial.println(inputString);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    while (Serial.available() > 0)  
    { colour = Serial.read() ; }      // clear the serial buffer
    if(inputString == "R"){         //Red
      digitalWrite(5, LOW);
      delay(1000);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);  
    }
    else if(inputString == "G"){   //Green
      digitalWrite(6, LOW);
      delay(1000);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    }
    else if(inputString == "B"){   //blue
      digitalWrite(7, LOW);
      delay(1000);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);                                                                                                
    }
    else if(inputString == "Y"){ //Yellow  
      digitalWrite(6, LOW);
      digitalWrite(5, LOW);
      delay(1000);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    }
    else if(inputString == "W"){   //white
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      digitalWrite(5, LOW);
      delay(1000);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    }
    else if(inputString == "M"){//Magneta   
      digitalWrite(5, LOW);
      digitalWrite(7, LOW);
      delay(1000);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    }
     else if(inputString == "C"){//Cyan   
      digitalWrite(7, LOW);
      digitalWrite(6, LOW);
      delay(1000);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    }
    inputString = "";
  }
}
