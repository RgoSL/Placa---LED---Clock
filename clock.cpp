void setup() {
  pinMode(0, OUTPUT); 
  pinMode(1, OUTPUT); 
  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  
  digitalWrite(0, 1, 2, 3, 4, 5, 8, 9, 10, 11, 12, HIGH); //0
  delay(1000);       
                 
  digitalWrite(0, 1, 2, 3, 4, 5, 8, 9, 10, 11, 12, LOW);   
  delay(1000);     

   digitalWrite(2, 4, 7, 9, 12, HIGH); //1
  delay(1000);       
                 
  digitalWrite(2, 4, 7, 9, 12, LOW);    
  delay(1000);     

   digitalWrite(0, 1, 2, 4, 7, 6, 5, 8, 10, 11, 12, HIGH); //2
  delay(1000);       
                 
  digitalWrite(0, 1, 2, 4, 7, 6, 5, 8, 10, 11, 12, LOW);    
  delay(1000);     

   digitalWrite(0, 1, 2, 4, 7, 6, 5, 9, 10, 11, 12, HIGH); //3
  delay(1000);       
                 
  digitalWrite(0, 1, 2, 4, 7, 6, 5, 9, 10, 11, 12, LOW);    
  delay(1000);     

   digitalWrite(0, 2, 3, 4, 5, 6, 7, 9, 12, HIGH); //4
  delay(1000);       
                 
  digitalWrite(0, 2, 3, 4, 5, 6, 7, 9, 12, LOW);    
  delay(1000);     

   digitalWrite(0, 1, 2, 3, 5, 6, 7, 9, 10, 11, 12, HIGH); //5
  delay(1000);       
                 
  digitalWrite(0, 1, 2, 3, 5, 6, 7, 9, 10, 11, 12, LOW);    
  delay(1000);     

   digitalWrite(0, 1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, HIGH); //6  
  delay(1000);       
                 
  digitalWrite(0, 1, 2, 3, 5, 6, 7, 8, 9, 10, 11, 12, LOW);    
  delay(1000);     

   digitalWrite(0, 1, 2, 4, 7, 9, 12, HIGH); //7  
  delay(1000);       
                 
  digitalWrite(0, 1, 2, 4, 7, 9, 12, LOW);    
  delay(1000);     

   digitalWrite(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, HIGH); //8   
  delay(1000);       
                 
  digitalWrite(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, LOW);    
  delay(1000);     

   digitalWrite(0, 1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, HIGH); //9
  delay(1000);       
                 
  digitalWrite(0, 1, 2, 3, 4, 5, 6, 7, 9, 10, 11, 12, LOW);    
  delay(1000);     
                
}
