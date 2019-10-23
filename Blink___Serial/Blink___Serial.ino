
int chlopcy = 15;
int dziewczynki = 10;

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.println("Mikolaj");
}

// MODULO 

void loop() {
  if(!(chlopcy == dziewczynki)){
    Serial.print("Nierówno ");
    if(chlopcy < dziewczynki){
      Serial.print("więcej dziewczynek o ");
      Serial.println(dziewczynki-chlopcy);
    }else if(dziewczynki < chlopcy){
      Serial.print("więcej chłopców o ");
      Serial.println(chlopcy-dziewczynki);
    }
    
  }else{
    Serial.println("Równo");
  }
  digitalWrite(13, HIGH);   // Dioda zapalona
  delay(1000);              // Czekaj 1000 ms czyli 1 s         
  digitalWrite(13, LOW);    // Dioda zgaszona
  delay(1000);                       
}

