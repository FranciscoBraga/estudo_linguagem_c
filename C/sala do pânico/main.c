#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fase = 0;

int historia(){
	
printf("Voc� � um renomado arque�logo, conhecido por desvendar mist�rios antigos em todo o mundo. Durante sua �ltima expedi��o, voc� descobre um templo escondido nas profundezas da selva amaz�nica. Dentro do templo, voc� encontra uma sala secreta adornada com inscri��es antigas e artefatos misteriosos.\n");
printf("Ao explorar mais a fundo, voc� aciona acidentalmente uma armadilha ancestral e se v� preso dentro da sala do p�nico.\n");
printf("As paredes est�o cobertas de s�mbolos enigm�ticos, e uma atmosfera opressiva de mist�rio paira no ar. Voc� percebe que a �nica maneira de escapar � resolver uma s�rie de desafios mortais deixados pelos antigos guardi�es do templo.\n");
printf("Com o tempo se esgotando e o cora��o pulsando com adrenalina, voc� se v� imerso em uma corrida contra o rel�gio para decifrar os quebra-cabe�as, desvendar os enigmas e encontrar uma sa�da antes que seja tarde demais. Cada desafio revela um segredo antigo e perigoso, testando n�o apenas sua intelig�ncia, mas tamb�m sua coragem e determina��o.\n");
printf("Enquanto voc� se aprofunda na sala do p�nico, fica claro que n�o est� apenas lutando pela sua pr�pria sobreviv�ncia, mas tamb�m pelo conhecimento ancestral que poderia mudar o curso da hist�ria. Com cada desafio superado, voc� se aproxima um passo mais perto da liberdade - mas tamb�m de descobrir os segredos ocultos que o templo guarda.\n");
printf("Agora, cabe a voc� usar todas as suas habilidades e conhecimentos para escapar da sala do p�nico e desvendar os mist�rios milenares que ela guarda. O rel�gio est� correndo, e o destino aguarda ansiosamente sua decis�o. Voc� est� pronto para enfrentar o desafio");


 fase = 1;
 return fase;
}


void desafio_um(){
  printf("    [06]    \n");
  printf("[09][x][03]\n");
  printf("    [18]    \n");
  
	
}

int main() {

while(fase != 11){
	if(fase == 0)
	{
	 fase = historia();
	}else if (fase == 1){
	  desafio_um();
	}
}

	return 0;
}
