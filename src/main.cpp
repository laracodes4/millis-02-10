#include <Arduino.h>
#include <Bounce2.h>

Bounce botao = Bounce();

#define LED 19
//#define botao 12
bool estadoAnteriorBotao;
bool estadoAtualBotao;
int estadoLed;
bool pressionado;
int n = 0;
bool acionado = LOW;
int contadorPisca;
int situacao;

void setup() {
 pinMode(LED, OUTPUT);
 //pinMode (botao, INPUT_PULLUP);
 Serial.begin (115200);
 Serial.println ("Serial funcionando");
 botao.attach(12, INPUT_PULLUP); //pinMode do bounce
}

void loop() {

  //EXERCICIO 1 -------------------------------------

 //estadoAtualBotao = digitalRead (botao);
  
  //if (estadoAnteriorBotao == 1 && estadoAtualBotao == 0){
    //digitalWrite (LED, HIGH);
  //}
  //if (estadoAnteriorBotao == 0 && estadoAtualBotao == 1){
    //digitalWrite (LED, LOW);
  //}
  
	//estadoAnteriorBotao = estadoAtualBotao;
	//delay (50);

  //EXERCICIO 2 ---------------------------------------

  // bool estadoLed = 0;
  // estadoAtualBotao = digitalRead (botao);
  
  // if (estadoAnteriorBotao == 1 && estadoAtualBotao == 0){
  //   estadoLed = !estadoLed;
  //   digitalWrite (LED, estadoLed);
  //   delay (50);
  // }
  
  // estadoAnteriorBotao = estadoAtualBotao;
  
  //EXERCICIO 3 ------------------------------------------

  // estadoAtualBotao = digitalRead (botao);
  // if (estadoAnteriorBotao == 1 && estadoAtualBotao == 0){
  //   n = n + 1;
  //   Serial.println (n);
  // }
  
  // estadoAnteriorBotao = estadoAtualBotao;

  //COMANDOS -----------------------------------------------

  //btn.update();//digitalRead
  //Serial.println (btn.fell());//retorna 1 quando o botao é pressionado
  //Serial.println (btn.changed());//aponta toda vez que houver alteração no botão
  //delay (1000);

  //EXERCICIO 1 ----------------------------------------

// botao.update();

// if (botao.fell()) {
//   estadoLed = !estadoLed;
//   digitalWrite (LED, estadoLed);
// }

//EXERCICIO 2 ---------------------------------------

// botao.update();

// if (botao.read() == LOW && botao.currentDuration() >= 2000 && !acionado) {
//   estadoLed = !estadoLed;
//   digitalWrite(LED, estadoLed);
//   acionado = true;
// }

// if (botao.rose()) {
//   acionado = false;
// }

//EXERCICIO 3 ------------------------------- -------------

// botao.update();

// if (botao.read() == LOW && botao.currentDuration() >= 2000 && !acionado) {

//     if (estadoLed == 2) {
//       // Para de piscar e mantém aceso
//       estadoLed = 1;
//       situacao = HIGH;
//       digitalWrite(LED, HIGH);
//     } 
//     else {
//       // Começa a piscar
//       estadoLed = 2;
//       contadorPisca = 0;
//       situacao = LOW;
//       digitalWrite(LED, LOW);
//     }

//     acionado = true;
//   }

//   // Clique curto ao soltar o botão
//   if (botao.rose()) {
//     if (!acionado) {
//       if (estadoLed == 0) {
//         estadoLed = 1;
//         situacao = HIGH;
//         digitalWrite(LED, HIGH);
//       }
//       else if (estadoLed == 1) {
//         estadoLed = 0;
//         situacao = LOW;
//         digitalWrite(LED, LOW);
//       }
//     }

//     acionado = false;
//   }

//   // Piscar o LED
//   if (estadoLed == 2) {
//     contadorPisca++;

//     if (contadorPisca >= 40) {
//       contadorPisca = 0;
//       situacao = !situacao;
//       digitalWrite(LED, situacao);
//     }
//   }

//   delay(10);
// }