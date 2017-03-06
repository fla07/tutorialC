/******************************************************************************

                         REVISANDO ALGUNS CONCEITOS

*******************************************************************************
- Quais sao os elementos que compoem um computador?

DISPOSITIVOS DE ENTRADA: representa o grupo de componentes que podem ser ligados
(ou conectados) ao computador para permitir a comunicacao do mundo externo 
(mundo real) com ele.  Por exemplo o teclado, que permite ao usuario se 
comunicar com o computador, fornecendo dados a serem usados no processamento de
alguma informacao;

PROCESSADOR: componente do computador que executa as instrucoes de um programa,
estando elas escritas em linguagem de maquina.  Ele interpreta a instrucao 
corrente, executa-a e determina qual a próxima instrucao a ser executada.  Este
componente tambem e' chamado de CPU (Central Processing Unit) ou UCP (Unidade 
Central de Processamento);
 
MEMORIA: componente que armazena programas e dados a serem executados e 
manipulados pelo computador, de acordo com o desejo do usuario.  Ela tambem e'
chamada de memoria principal (Random Access Memory - RAM), consistindo de uma 
sequencia finita de unidades de armazenamento de dados identificadas por um 
endereco unico, descrito por um numero inteiro nao negativo;
 
DISPOSITIVOS DE SAIDA: representa o grupo de componentes que podem ser ligados 
(ou conectados) ao computador, permitindo a comunicacao dele com o mundo externo
(mundo real).  Por exemplo o monitor, tambem conhecido como vídeo, que permite 
ao computador comunicar o resultado de uma operacao ao usuario que precisa de 
tal informacao.

- O que e' processamento de dados?

O processamento de dados, realizado pelo computador, consiste na execucao de 
varias operacoes sobre os dados (comparacao, calculo, copia, alteracao, etc.), 
que posteriormente serao interpretados pelo usuario.  Ele, o usuario, deseja 
obter-los de forma compreensivel e util para atingir os seus objetivos, e 
tornar-los realmente informacoes (dado(s) que transmite(m) conhecimento) que 
possam ser usadas ou aplicados na solucao dos problemas existentes no mundo 
real.

- O que e' um programa e sua relacao com a linguagem de programacao?

Os programas sao sequencias de instrucoes, escritas em uma linguagem de 
programacao, a serem realizadas por um computador que visa atingir um objetivo 
(resolver um problema). As linguagens de programacao sao codificacoes 
padronizadas que permitem a efetivacao da comunicacao desejada de forma 
eficiente entre o ser humano e o computador. Porem, antes dessa comunicacao ser
efetivada, o ser humano deve encontrar a solucao para o problema existente.

- Como se resolve um problema utilizando o computador como ferramenta?

A primeira situacao e' conhecer muito bem o problema, pois assim sera' possivel 
raciocinar sobre ele, de forma a encontrar uma solucao segura e eficaz 

A segunda situacao e' o conhecimento de todos os detalhes possiveis que 
envolverao o computador e o programa que sera' desenvolvido e disponibilizado, 
por meio dele, aos seus respectivos usuarios. Portanto, quanto mais informacoes
do problema forem obtidas, menores serao as chances de nao se obter a solucao 
do problema.

A terceira situacao e´formar um raciocinio completo do problema. Isso pode
envolver muitas operacoes e informacoes relacionadas ao problema que nao sao 
faceis de serem elaboradas. Para facilitar o trabalho de organizar os dados e
obter a melhor solucao do problema deve-se buscar uma "logica" coerente e suas 
formas de representacao(algoritmos). O "raciocinio logico" e' importantissimo 
para se buscar a solucao do problema. E' ele que mostra os diversos caminhos 
para se encontrar a melhor solucao. A representacao das diversas solucoes no 
formato de "algoritmos" permite analisar cada uma delas antes de transforma-las
em um programa.

- como se transforma um algoritmo em programa para computador?

O 1. passo e' traduzir o algoritmo para a linguagem de programacao escolhida, em
outras palavras escrever o programa obedecendo as regras de "gramatica"(sintaxe)
da linguagem.

O 2. passo e' traduzir este programa, tambem conhecido como "codigo fonte" num
formato que a CPU do computador entenda, ou seja em linguagem de maquina. Todos
os programas, nao importa a linguagem em que e' escrito vai no final se 
transformar num programa em linguagem de maquina. 

Porem este 2. passo e' dividido em varias etapas a saber:
- apos o codigo fonte estar pronto, ele passa pela etapa de "pre compilacao" 
onde a sintaxe e' verificada.

- a sintaxe estando correta, o codigo fonte passa pelo "compilador" onde este 
codigo se transforma em "codigo objeto" gerando um arquivo chamado ".obj" ou 
".o". Este ainda nao e' um programa executavel. 

"Arquivos objeto" sao criados por montadores e ligadores e contem o codigo 
binario e os dados resultantes da compilacao de um arquivo fonte. Sao eles: 
cabecalho, codigo objeto, informacao de relocacao de memoria, simbolos e 
informacao para depuracao ou debug.

- com o codigo fonte convertido para codigo objeto, passa-se pelo "ligador" ou
"linkeditor" ou "link" que junta o codigo objeto com outras funcoes de 
biblioteca e/ou outros modulos de programa resultando num "arquivo executavel".
Este arquivo contem a "linguagem de maquina" que a CPU entende. Este arquivo e'
chamado ".exe" ou ."com".

*******************************************************************************

                            LNGUAGUEM C
                            -----------

*******************************************************************************
- Historia do C

O C nasceu na decada de 70. Seu inventor, Dennis Ritchie, implementou-o pela 
primeira vez usando um DEC PDP-11 rodando o sistema operacional UNIX. O C e' 
derivado de uma outra linguagem: o B, criado por Ken Thompson. O B, por sua vez,
veio da linguagem BCPL, inventada por Martin Richards. 

- Caracteristicas do C

O C e' uma linguagem de programacao generica que e' utilizada para a criacao de 
programas diversos como processadores de texto, planilhas eletronicas, sistemas 
operacionais, programas de comunicacao, programas para a automacao industrial, 
gerenciadores de bancos de dados, programas de projeto assistido por computador,
programas para a solucao de problemas da Engenharia, Fisica, Quimica e outras 
Ciencias, etc ...  

- Estrutura de um programa em C

Vamos apresentar aqui os elementos que compoem um programa na linguagem C. 
Porem nao vamos entrar em detalhes destes elementos pois eles serao estudados 
durante o transcorrer do curso.

Para comecar vamos ver os elementos minimos para se escrever um programa em C.

Um programa simples em C tem as seguintes declaracoes:

main()	   funcao de inicio de programa em C. So' pode existe uma no prog.

{	   chave de abertura indicando inicio da funcao

	funcoes;

}	   chave de fechamento encerrando a funcao

A funcao main() deve existir em algum lugar do seu programa. Ela marca o ponto 
de inicio da execucao do programa. Se um programa em C for construido com uma 
unica funcao esta sera' a funcao main().

Os pararenteses apos o nome_da_funcao, no caso main(), indica que ela e' uma 
funcao.

O corpo de funcao em C e' sempre definido entre um abre chave "{" e um fecha 
chave "}". Portanto a funcao main(), por exemplo, tem um abre chave "{" e um 
fecha chave "}" que definem o inicio e final da funcao.

Cada linha de programa na linguagem C e' denominada de "declaracao".

Outro elemento que compoem um programa em C e' o das chamadas funcoes de 
biblioteca. No exemplo abaixo vamos utilizar a funcao de biblioteca printf().
Ela coloca uma mensagem na tela do seu computador.

Exemplo:
*/
#define ex1	/* estas duas declaracoes com o simbolo "cerquinha" # na frente 
                   sao declaracoes de pre'-processamento */
#ifdef ex1
/* inicio do programa */
main()
{
printf("imprime uma serie de caracteres ou mensagem na tela do computador\n");

/* imprime uma mensagem na tela */
}
#endif

/*
Outro detalhe importante a observar no programa acima e' que a declaracao, no
caso a funcao de biblioteca printf(), termina com um ponto e virgula ";". Em C,
o ponto e virgula ";" e' terminador da declaracao e toda declaracao deve 
terminar com este.

Para se documentar um programa em C deve-se escrever os comentarios entre
"barra normal asterisco" e "asterisco barra normal". Um exemplo disto e' o 
proprio texto que voce esta' lendo. Isto e' um programa executavel em C. No
exemplo acima foram colocados 3 comentarios para auxiliar o entendimento do 
programa. Os comentarios podem ser colocados em qualquer local no programa.

Existe um tratamento diferenciados dado as letras maiusculas e minusculas na 
linguagem C quando usados como label ou rotulos. Uma mesma palavra ou label 
escrita de diferentes modos sao interpretadas como palavras ou labels 
diferentes. O exemplo seguinte mostra isso.

Exemplo:
 loop, Loop, LOop, LOOP 

Apesar da palavra ou label ser a mesma (loop), para a linguaguem C elas sao 
interpretadas como 4 palavras ou labels diferentes.

Usualmente se escreve tudo em letras minusculas num programa em C, pois as 
palavras-reservadas e os nomes das funcoes de biblioteca sao todas escritas em 
letras minusculas. Ja'as constantes, nomes de variaveis e nome das funcoes 
escritas pelo programador podem ser escritas em letras maiusculas ou mesclar 
letras maiusculas com minusculas.

Observe ainda no programa acima, que aparecem declaracoes precedidas do caracter
"cerquinha" "#". Este caracter indica ao compilador que estas declaracoes devem
ser interpretadas pelo pre' compilador. A declaracao "#define ex1" seleciona o 
exemplo 1. Para selecionar os demais exemplos troca-se o label "ex1" pelo label
"ex2" e assim sucessivamente. 

Agora vamos olhar um programa completo em C. Ele tem as seguintes declaracoes:

#declaracao de pre'-processamento ou diretivas de pre'- compilacao
variaveis;
*/

#ifdef exx   /* declaracao de pre processamento */
main()	/*funcao de inicio de programa em C. So' pode existe um no prog.*/

{	/*chave de abertura indicando inicio da funcao*/

	variaveis;
	comandos;
	funcoes;

}	/*chave de fechamento encerrando a funcao*/

/*funcao escrita pelo programador */

<tipo_de_retorno>   <nome_da_funcao> (parametros ou informacoes)
tipos dos parametros ou informacoes;

{
	variaveis;
	comandos;
	funcoes;
}
#endif    /* declaracao de pre processamento */

/*
Observe que no programa acima temos, a funcao main() e uma funcao escrita pelo 
programador. Como programadores tambem podemos desenvolver nossa proprias 
funcoes. Acima e' mostrado o formato desta funcao que e' o formato generico de 
uma funcao em C. Estudaremos no nosso curso os detalhes de como construir nossas
proprias funcoes.

Os compiladores normalmente vem com um conjunto de funcoes prontas. Estas 
funcoes sao chamadas de funcoes de biblioteca e estao prontas para serem usadas
nos nossos programas. Estas funcoes foram devenvolvida pelo fabricante do 
compilador. Para usar estas funcoes no programa precisamos saber como ela 
funciona. Para isso podemos consultar o "help" do compilador ou seu manual.

Segue alguns exemplos de programas em C.

Exemplos:*/

#ifdef ex2
main()
{
clrscr();    /* funcao de biblioteca para limpar a tela */

printf("\nVoce esta' na funcao main()\n");
printf("Este exemplo simula como e' chamada uma funcao.\n\n");

funcao1(); 	/* a chamada de uma funcao e' atraves do "nome_da_funcao" mais
		   os "parametros" que sao passados. Neste exemplo nao existe
		   "parametros" sendo passado para a funcao.*/

printf("Voce esta' de volta a funcao main()\n");
printf("Fim do programa\n");
}

/* funcao escrita pelo programador */
funcao1()
{
printf("\t Voce esta' na funcao 1\n");
printf("\t Bem vindo a funcao 1\n\n");
}
#endif

#ifdef ex3
main()
{
char c;      /* declaracao de variavel */

clrscr();
printf("digite um caracter : ");
c = getchar();  /* funcao de biblioteca */
printf("o caracter ‚ %c",c);

getchar();
getchar();
}
#endif

#ifdef ex4
main()
{
char c[255];

clrscr();
printf("digite um string via teclado :");
gets(c);    /* funcao de biblioteca */
printf("a string digitada e': %s",c);

getchar();
getchar();

}
#endif

#ifdef ex5
int a = 2;   /* declaracao de variavel */
int b = 2;

main()
{

clrscr();
printf("A soma de a e b e' %d\n", a+b);

getchar();
}
#endif

#ifdef ex6
main()
{
int a,b,c;

clrscr();
printf("digite o 1. numero: ");
scanf("%d",&a);    /* funcao de biblioteca */
printf("digite o 2. numero: ");
scanf("%d",&b);

c = soma(a,b);

printf("A soma dos numeros digitados e' %d\n", c);

getchar();
getchar();
}

/* funcao escrita pelo programador */
soma(x,y)
int x,y;
{
int z;

printf("\nfuncao soma escrita pelo programador \n\n");
z = x + y;
return(z);
}
#endif

