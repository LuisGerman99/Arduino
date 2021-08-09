// Define los pines del motor
#define M_1 3 //llanta numero 1 50-51
#define M_2 2 //llanra numero 2 52-53
#define M_3 13 //llanta numero 3 11-12
#define M_4 8 //llanta numero 4 9-10

#define M1_PA 15
#define M1_PB 14

#define M2_PA 16
#define M2_PB 17

#define M3_PA 12
#define M3_PB 11

#define M4_PA 9
#define M4_PB 10

int PWM=230;



void setup() {
  // Inicializamos los pines del motor
  //MOTOR1
  pinMode(M_1, OUTPUT);
  pinMode(M1_PA, OUTPUT);
  pinMode(M1_PB, OUTPUT);
  //MOTOR2
  pinMode(M_2, OUTPUT);
  pinMode(M2_PA, OUTPUT);
  pinMode(M2_PB, OUTPUT);
  //MOTOR3
  pinMode(M_3, OUTPUT);
  pinMode(M3_PA, OUTPUT);
  pinMode(M3_PB, OUTPUT);
  //MOTOR4
  pinMode(M_4, OUTPUT);
  pinMode(M4_PA, OUTPUT);
  pinMode(M4_PB, OUTPUT);

  // Iniciamos Monitor Serial y mostramos menu por primera vez  
  Serial.begin(9600);
}

void loop() {

  // Esperamos a que ingresen algo
  if (Serial.available()) {

    char input = Serial.read();
  
    Serial.println(input);
    // Segun la opcion ingresada ejecutamos la orden
    
//    switch (input){
//      case 'V':
//        PWM=0;
//      break;
      
//      case 'X':
//        PWM=100;
//      break;

//      case 'Y':
//        PWM=180;
//      break;

//      case 'Z':
//        PWM=255;
//      break;
//    }
    
    switch (input) {
      //ADELANTE
      case 'A': 
      //MOTOR1
        analogWrite(M_1, PWM);
        digitalWrite(M1_PA, HIGH);
        digitalWrite(M1_PB, LOW);
      //MOTOR2
        analogWrite(M_2, PWM);
        digitalWrite(M2_PA, HIGH);
        digitalWrite(M2_PB, LOW);
      //MOTOR3
        analogWrite(M_3, PWM);
        digitalWrite(M3_PA, HIGH);
        digitalWrite(M3_PB, LOW);
      //MOTOR4
        analogWrite(M_4, PWM);
        digitalWrite(M4_PA, HIGH);
        digitalWrite(M4_PB, LOW);
      break;
      //DIAG SUP DER
      case 'B':
      //MOTOR1
        analogWrite(M_1, PWM);
        digitalWrite(M1_PA, HIGH);
        digitalWrite(M1_PB, LOW);
      //MOTOR2
        analogWrite(M_2, 0);
        digitalWrite(M2_PA, HIGH);
        digitalWrite(M2_PB, LOW);
      //MOTOR3
        analogWrite(M_3, PWM);
        digitalWrite(M3_PA, HIGH);
        digitalWrite(M3_PB, LOW);
      //MOTOR4
        analogWrite(M_4, 0);
        digitalWrite(M4_PA, HIGH);
        digitalWrite(M4_PB, LOW); 
      break;
      //DER
      case 'C':
      //MOTOR1
        analogWrite(M_1, PWM);
        digitalWrite(M1_PA, HIGH);
        digitalWrite(M1_PB, LOW);
      //MOTOR2
        analogWrite(M_2, PWM);
        digitalWrite(M2_PA, LOW);
        digitalWrite(M2_PB, HIGH);
      //MOTOR3
        analogWrite(M_3, PWM);
        digitalWrite(M3_PA, HIGH);
        digitalWrite(M3_PB, LOW);
      //MOTOR4
        analogWrite(M_4, PWM);
        digitalWrite(M4_PA, LOW);
        digitalWrite(M4_PB, HIGH); 
      break;
      case 'D':
      //MOTOR1
        analogWrite(M_1, 0);
        digitalWrite(M1_PA, HIGH);
        digitalWrite(M1_PB, LOW);
      //MOTOR2
        analogWrite(M_2, PWM);
        digitalWrite(M2_PA, LOW);
        digitalWrite(M2_PB, HIGH);
      //MOTOR3
        analogWrite(M_3, 0);
        digitalWrite(M3_PA, HIGH);
        digitalWrite(M3_PB, LOW);
      //MOTOR4
        analogWrite(M_4, PWM);
        digitalWrite(M4_PA, LOW);
        digitalWrite(M4_PB, HIGH); 
      break;
      //ATRAS
      case 'E':
      //MOTOR1
        analogWrite(M_1, PWM);
        digitalWrite(M1_PA, LOW);
        digitalWrite(M1_PB, HIGH);
      //MOTOR2
        analogWrite(M_2, PWM);
        digitalWrite(M2_PA, LOW);
        digitalWrite(M2_PB, HIGH);
      //MOTOR3
        analogWrite(M_3, PWM);
        digitalWrite(M3_PA, LOW);
        digitalWrite(M3_PB, HIGH);
      //MOTOR4
        analogWrite(M_4, PWM);
        digitalWrite(M4_PA, LOW);
        digitalWrite(M4_PB, HIGH);
      break;
      //DIAG INFERIOR IZQ
      case 'F':
      //MOTOR1
        analogWrite(M_1, PWM);
        digitalWrite(M1_PA, LOW);
        digitalWrite(M1_PB, HIGH);
      //MOTOR2
        analogWrite(M_2, 0);
        digitalWrite(M2_PA, LOW);
        digitalWrite(M2_PB, HIGH);
      //MOTOR3
        analogWrite(M_3, PWM);
        digitalWrite(M3_PA, LOW);
        digitalWrite(M3_PB, HIGH);
      //MOTOR4
        analogWrite(M_4, 0);
        digitalWrite(M4_PA, LOW);
        digitalWrite(M4_PB, HIGH); 
      break;
      //IZQ
      case 'G':
      //MOTOR1
        analogWrite(M_1, PWM);
        digitalWrite(M1_PA, LOW);
        digitalWrite(M1_PB, HIGH);
      //MOTOR2
        analogWrite(M_2, PWM);
        digitalWrite(M2_PA, HIGH);
        digitalWrite(M2_PB, LOW);
      //MOTOR3
        analogWrite(M_3, PWM);
        digitalWrite(M3_PA, LOW);
        digitalWrite(M3_PB, HIGH);
      //MOTOR4
        analogWrite(M_4, PWM);
        digitalWrite(M4_PA, HIGH);
        digitalWrite(M4_PB, LOW); 
      break;
      //DIAG SUP IZQ
      case 'H':
      //MOTOR1
        analogWrite(M_1, 0);
        digitalWrite(M1_PA, HIGH);
        digitalWrite(M1_PB, LOW);
      //MOTOR2
        analogWrite(M_2, PWM);
        digitalWrite(M2_PA, HIGH);
        digitalWrite(M2_PB, LOW);
      //MOTOR3
        analogWrite(M_3, 0);
        digitalWrite(M3_PA, HIGH);
        digitalWrite(M3_PB, LOW);
      //MOTOR4
        analogWrite(M_4, PWM);
        digitalWrite(M4_PA, HIGH);
        digitalWrite(M4_PB, LOW); 
      break;
      //GIRO DER
      case 'I':
      //MOTOR1
        analogWrite(M_1, PWM);
        digitalWrite(M1_PA, HIGH);
        digitalWrite(M1_PB, LOW);
      //MOTOR2
        analogWrite(M_2, PWM);
        digitalWrite(M2_PA, LOW);
        digitalWrite(M2_PB, HIGH);
      //MOTOR3
        analogWrite(M_3, PWM);
        digitalWrite(M3_PA, LOW);
        digitalWrite(M3_PB, HIGH);
      //MOTOR4
        analogWrite(M_4, PWM);
        digitalWrite(M4_PA, HIGH);
        digitalWrite(M4_PB, LOW);
      break;
      //GIRO IZQ
      case 'J':
      //MOTOR1
        analogWrite(M_1, PWM);
        digitalWrite(M1_PA, LOW);
        digitalWrite(M1_PB, HIGH);
      //MOTOR2
        analogWrite(M_2, PWM);
        digitalWrite(M2_PA, HIGH);
        digitalWrite(M2_PB, LOW);
      //MOTOR3
        analogWrite(M_3, PWM);
        digitalWrite(M3_PA, HIGH);
        digitalWrite(M3_PB, LOW);
      //MOTOR4
        analogWrite(M_4, PWM);
        digitalWrite(M4_PA, LOW);
        digitalWrite(M4_PB, HIGH);
      break;

      case 'S':
       //MOTOR1
         analogWrite(M_1,0);
       //MOTOR2
         analogWrite(M_2,0);
       //MOTOR3
         analogWrite(M_3,0);
       //MOTOR4
         analogWrite(M_4,0);
        
      default:
       //MOTOR1
         analogWrite(M_1,0);
       //MOTOR2
         analogWrite(M_2,0);
       //MOTOR3
         analogWrite(M_3,0);
       //MOTOR4
         analogWrite(M_4,0);
    }
         
  }

}
  
