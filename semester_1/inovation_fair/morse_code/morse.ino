int led1 = 9;
int led2 = 8;
int buzzpin = 10;
int feqdit = 2000;
int feqdat = 1800;
int dit = 100;
int dat = 300;
int re = 200;
int delaytime = 100;
String inp;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while(Serial.available() == 0){}
  inp = Serial.readString();
  Serial.println(inp);
  delay(delaytime);
  //dit = .
  if(inp == "dit\n"){
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
  }
  //dah = -
  else if(inp == "dah\n"){
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
  }
  //A .-
  else if(inp == "a\n"){
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
  }
  //B -...
  else if(inp == "b\n"){
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
  }
  //C -.-.
  else if(inp =="c\n"){
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
  }
  //D -..
    else if(inp =="d\n"){
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //E .
    else if(inp =="e\n"){
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //F ..-.
    else if(inp =="f\n"){
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //G --.
    else if(inp =="g\n"){
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //H ....
    else if(inp =="h\n"){
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //I ..
    else if(inp =="i\n"){
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //J .---
    else if(inp =="j\n"){
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //K -.-
    else if(inp =="k\n"){
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //L .-..
    else if(inp =="l\n"){
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //M --
    else if(inp =="m\n"){
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //N -.
    else if(inp =="n\n"){
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //O ---
    else if(inp =="o\n"){
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //P .--.
    else if(inp =="p\n"){
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
  }
  //Q --.-
    else if(inp =="q\n"){
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //R .-.
    else if(inp =="r\n"){
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //S ...
    else if(inp =="s\n"){
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //T -
    else if(inp =="t\n"){
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //U ..-
  else if(inp == "u\n"){
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //V ...-
    else if(inp =="v\n"){
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //W .--
  else if(inp =="w\n"){
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
  }
  //X -..-
    else if(inp =="x\n"){
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //Y -.--
    else if(inp =="y\n"){
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
  //Z --..
    else if(inp =="z\n"){
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
    //SOS = ...---...
    else if(inp = "sos\n"){
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dah
    tone(buzzpin, feqdat, dat);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dat);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    //dit
    tone(buzzpin, feqdit, dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(re);
    }
}
