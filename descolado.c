///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Gestão Escolar                      ///
///                Developed by  @flgorgonio - Sep, 2020                    ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void menuSobre(void);
void menuAluno(void);
void menuProfessor(void);
void menuTurma(void);

int main(void) {
	menuSobre();
  getchar();
  menuAluno();
	return 0;
}


void menuSobre(void) {
	printf("\n");
	printf("///////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                         ///\n");
	printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
	printf("///                   Centro de Ensino Superior do Seridó                   ///\n");
	printf("///                 Departamento de Computação e Tecnologia                 ///\n");
	printf("///                    Disciplina DCT1106 -- Programação                    ///\n");
	printf("///                    Projeto Sistema de Gestão Escolar                    ///\n");
	printf("///                  Developed by  @flgorgonio - Sep, 2020                  ///\n");
	printf("///                                                                         ///\n");
	printf("///////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                         ///\n");
  printf("///           ===================================================           ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = = = =           ///\n");
	printf("///           = = = =    Escola de Idiomas Língua Solta   = = = =           ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = = = =           ///\n");
  printf("///           ===================================================           ///\n");
	printf("///                                                                         ///\n");
	printf("///  Programa exemplo utilizado na disciplina DCT1106 - Programação, para   ///\n");
	printf("///  fins didáticos de ilustração. O programa contém os principais módulos  ///\n");
	printf("///  e funcionalidades que serão exigidos na avaliação dos projetos a serem ///\n");
	printf("///  desenvolvidos pelos alunos ao longo da disciplina. Serve como um guia  ///\n");
	printf("///  de consulta e referência para o desenvolvidos dos demais projetos. Os  ///\n");
  printf("///  dados e informações utilizados neste projeto são todos fictícios.      ///\n");
	printf("///                                                                         ///\n");
	printf("///////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
}


void menuAluno(void) {
	printf("\n");
	printf("///////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                         ///\n");
  printf("///           ===================================================           ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = = = =           ///\n");
	printf("///           = = = =   Escola de Idiomas Língua Solta    = = = =           ///\n");
  printf("///           = = = = = = = = = = = = = = = = = = = = = = = = = =           ///\n");
  printf("///           ===================================================           ///\n");
	printf("///                 Developed by  @flgorgonio - Sep, 2020                   ///\n");
	printf("///                                                                         ///\n");
	printf("///////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                         ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
	printf("///            = = = = = = = = =  Menu Aluno = = = = = = = = =              ///\n");
  printf("///            = = = = = = = = = = = = = = = = = = = = = = = =              ///\n");
	printf("///                                                                         ///\n");
	printf("///            1. Cadastrar um novo aluno                                   ///\n");
	printf("///            2. Pesquisar os dados de um aluno                            ///\n");
	printf("///            3. Atualizar o cadastro de um aluno                          ///\n");
	printf("///            4. Excluir um aluno do sistema                               ///\n");
	printf("///            5. Voltar ao menu anterior                                   ///\n");
	printf("///                                                                         ///\n");
  printf("///            Escolha a opção desejada:                                    ///\n");
  printf("///                                                                         ///\n");
  printf("///                                                                         ///\n");
	printf("///////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
}


void menuProfessor(void) {

}


void menuTurma(void) {

}