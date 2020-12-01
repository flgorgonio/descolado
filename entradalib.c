///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Biblioteca de Leitura e Validação                      ///
///                Developed by  @flgorgonio - Nov, 2020                    ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "validalib.h"


char* lelinha(void);


///////////////////////////////////////////////////////////////////////////////
/// Entrada de dados                                                        ///
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Lê, valida e retorna um apontador para um nome exclusivamente alfabético
///
char* lerNome(void) {
	char *nome;
	nome = lelinha();
	while (!validarNome(nome)) {
		printf("Erro! Entrada inválida.\n");
		printf("Tente novamente...\n");
		nome = lelinha();
	}
	return nome;
}


///////////////////////////////////////////////////////////////////////////////
/// Lê e retorna um apontador para um email válido
///
char* lerEmail(void) {
	char *email;
	email = lelinha();
	while (!validarEmail(email)) {
		printf("Erro! Endereço de e-mail inválido.\n");
		printf("Tente novamente...\n");
		email = lelinha();
	}
	return email;
}


///////////////////////////////////////////////////////////////////////////////
/// Lê e retorna um apontador para uma data válida (formato ddmmaaaa)
///
char* lerData(void) {
	char *data;
	data = lelinha();
	while (!validarData(data)) {
		printf("Erro! Data inválida.\n");
		printf("Tente novamente...\n");
		data = lelinha();
	}
	return data;
}


///////////////////////////////////////////////////////////////////////////////
/// Lê e retorna um apontador para um número válido de celular (apenas dígitos)
///
char* lerFone(void) {
	char *fone;
	fone = lelinha();
	while (!validarFone(fone)) {
		printf("Erro! Número de telefone inválido.\n");
		printf("Tente novamente...\n");
		fone = lelinha();
	}
	return fone;
}






///////////////////////////
/// Alocação Dinâmica   ///
///////////////////////////

// static
char* lelinha(void) {
	int tam;
	char linha[256];
	char *novalinha;
	scanf(" %255[^\n]", linha);
	tam = strlen(linha) + 1;
	novalinha = (char*) malloc(tam * sizeof(char));
	strcpy(novalinha, linha);
	return novalinha;
}
