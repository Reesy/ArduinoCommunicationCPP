bool currentlyReading = false;
bool finishedReading = false;



int result = 0;

int ledPin = 9;
int val = 0;   

void setup() {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
    
   
}

void loop () {
    
    if(Serial.available() > 0){
        val = Serial.read();
        if(val == '>'){
            currentlyReading = true;
            Serial.println("Reading engaged");
        }
        if(val == ':'){
            currentlyReading = false;
            Serial.println("Reading disengaged");
        }
        if(currentlyReading == true){
           
            if(val == '1'){
                result = map(1, 1, 9, 1, 255);
            }
            if(val == '2'){
                result = map(2, 1, 9, 1, 255);
            }
            if(val == '3'){
                result = map(3, 1, 9, 1, 255);
            }
            if(val == '4'){
                result = map(4, 1, 9, 1, 255);
            }
            if(val == '5'){
                result = map(5, 1, 9, 1, 255);
            }
            if(val == '6'){
                result = map(6, 1, 9, 1, 255);
            }
            if(val == '7'){
                result = map(7, 1, 9, 1, 255);
            }
            if(val == '8'){
                result = map(8, 1, 9, 1, 255);
            }
            if(val == '9'){
                result = map(9, 1, 9, 1, 255);
            }
            
             analogWrite(ledPin, result);  
      }
      
    }
}

