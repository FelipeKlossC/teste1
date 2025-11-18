#include <stdio.h>

int main() {
	char mensagem_original[50]; 
	printf("Mensagem Original: ");  //a lógica era percorrer a string e ir verificando se os caracteres são vogais ou não
	fgets(mensagem_original, 50, stdin); //porém não deu certo :(
	for(int i = 0; i < mensagem_original; i++) {
		if (mensagem_original[i] == 'a' || mensagem_original[i] == 'A') { //iria ser feita a verificação de cada variável
			mensagem_original[i] = '*';
		}
	}
	printf("%s", mensagem_original[i]);
	return 0;
}
