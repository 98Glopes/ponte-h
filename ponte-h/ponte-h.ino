/* Código para disciplina de Engenharia de Produto
   Ponte H controlada por Attiny 85
*/

//Pinagem da ponte H e dos botes
#define btn_horario 0
#define btn_anti 1
#define ponte_a 2
#define ponte_b 3


void setup() {
  //Configura as entradas e saídas digitais
  pinMode(btn_horario, INPUT);
  pinMode(btn_anti, INPUT);
  pinMode(ponte_a, OUTPUT);
  pinMode(ponte_b, OUTPUT);

}

void loop() {
  // Verifica se algum botão foi precionado

  //gira o motor no sentido horario
  if (digitalRead(btn_horario) == HIGH) {
    digitalWrite(ponte_a, HIGH);
    digitalWrite(ponte_b, LOW);
  }

   //gira o motor no sentido anti horario
  if (digitalRead(btn_anti) == HIGH) {
    digitalWrite(ponte_b, HIGH);
    digitalWrite(ponte_a, LOW);
  }

  //mantem o motor parado enquanto nenhum botão é precionado
  digitalWrite(ponte_a, LOW);
  digitalWrite(ponte_b, LOW);
}
