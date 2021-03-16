#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>
#define Class struct

Class Pessoa {
	char nome[10];
	uint8_t idade;
	uint8_t altura;
	void (*show)(Class Pessoa *);
};

void printPessoa(Class Pessoa *this)
{
	printf("Pessoa : %s %d %d\n",
		this->nome, 
		this->idade, 
		this->altura);
}

Class Pessoa * newPessoa(char name[],uint8_t age, uint8_t height){

		Class Pessoa *this = (Class Pessoa *) malloc(sizeof(struct Pessoa));
		strcpy(this -> nome, "Lucas T.");
		this ->idade = 24;
		this->altura = 178;
	
		this -> show = &printPessoa;
		return this;
	}


int main()
{
	Class Pessoa *pessoa = (struct Pessoa *) newPessoa("", 0, 0);

	pessoa->show(pessoa);
	return 0;
}
