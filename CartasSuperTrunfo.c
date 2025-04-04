#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n SUPER TRUNFO \n");

    char jogador;//declara o jogador
    char sigla_pais[11]; //declara o pais da carta
    char id[21]; //declara o id do pais e cidade pelo codigo telefonico ex (br-55-31)
    char sigla_estado[4];//declara a sigla do estado com minas gerais = MG
    char cidade[51]; // declara a cidade
    int populacao;//declara a quantidade da população
    float pib;//declara o pib da cidade
    int pontos_turisticos;//declara a quantidade de pontos turisticos


    char jogador2; // declara o segundo jogador
    char sigla_pais2[11]; 
    char id2[21]; 
    char sigla_estado2[4];
    char cidade2[51]; 
    int populacao2;
    float pib2;
    int pontos_turisticos2;

    /*
INSTRUÇÕES PARA PREENCHER:
 De forma alguma deve ser usada a tecla SPACE do seu teclado, pois isso pode causar erros no código e interrupções.

A primeira coisa que você deve fazer ao iniciar o programa é escolher UM único caractere para se identificar, podendo ser uma letra, um número ou até mesmo um caractere especial. Mas, lembre-se: deve ser apenas UM caractere. Exemplo: 👍🏻 CERTO – $ 👎🏻 ERRADO – R$
Ao escolher o país, deve-se inserir somente as siglas em letra maiúscula, e em seguida enviar com a tecla ENTER.
Em seguida, você irá gerar o código da carta, chamado de ID. As siglas do país também devem ser usadas em caixa alta, e os caracteres devem ser separados por hífen "-". Mais uma vez: NÃO USE A TECLA SPACE. Exemplo: 👍🏻 CERTO – BR-55-31 👎🏻 ERRADO – Br-55 31
Após escolher o país e gerar o ID, você irá escolher o estado da sua carta Super Trunfo, que também deve conter somente as siglas em caixa alta do estado escolhido.
Chegou a hora de escolher a cidade. Escolha bem para que seja o vencedor! Caso sua cidade tenha nome composto, como Belo Horizonte, deve-se separá-los por underline "_", ficando assim: 👍🏻 Belo_Horizonte 👍🏻 São_Paulo
Mais uma vez, para reforçar: EM MOMENTO ALGUM SE DEVE USAR A TECLA SPACE para separar as palavras.
Ao preencher a população e o PIB, deve-se utilizar o formato de casa de milhar, como 123.321. E, lembrando mais uma vez: em linguagem de programação NÃO usamos vírgula para separar números, mas SIM o ponto ".".
Ao preencher a quantidade de pontos turísticos, deve ser informado um número inteiro, considerando somente a quantidade de pontos turísticos da cidade escolhida. Então, pense bem para que possa ganhar a partida, uma boa decisão pode fazer de você um vencedor.

🎉 BOA PARTIDA!
    */

    printf("\n Jogador 1 \n");

    printf("Escolha UM caracter para te diferenciar do seu rival:  ");// declara um caracter para cada jogador, sendo usado para diferencia-los, podendo ser letras numero ou caracteres especiais 
        scanf("%c", &jogador);
        getchar();

    printf("Escolha um pais, escreva somente a sigla:  \n"); //declare somente a sigla em letras maiusculas. Ex BR, UK, USA..
        scanf("%s", sigla_pais);// recebe os dados do printf e especifica qual o tipo de dado
        getchar();

    printf("digite a sigla do pais o codigo telefonico do pais e o codigo regional da cidade escolhida separa por - :   \n"); //cria o ID da carta em um formato mais especifico. deve ser criado da seginte maira ex(BR-55-31)ou (uk-44-121) 
        scanf("%s", id);
        getchar();//Limpa o BUFFER do teclado apos a digitação causando erros na execução do programa 
    
    printf("declare o seu estado somente pela sigla:  \n");// declare o estado escolhido somente pela sigla igual ao pais MG, RS...
        scanf("%s", sigla_estado);
        getchar();
    
    printf("escolha a sua cidade:  \n");//escolha a sua cidade se caso houver dois nomes ou mais devem ser separadas por _ underline ex Belo_horizonte ou Porto_Alegre
        scanf("%s", cidade);
        getchar();
    
    printf("declare a população da cidade:  \n"); //declare a população da cidade, e deve ser separa por . pontos não com  , virgula
        scanf("%d", &populacao);

    printf("declare o PIB(Produto Interno Bruto) da população:  \n"); //declara o Produto Interno Bruto de forma decimal e não porcentagem
        scanf("%f", &pib2);
        getchar();
        
    
    printf("declare a quantidade de pontos turisticos:  \n");//declare a quantidade de pontos turisticos da sua cidade 
        scanf("%d", &pontos_turisticos);
        getchar();

    printf("\n Jogador 2 \n");// mostra quando o segundo jogador deve começar 

    printf("Escolha UM caracter para te diferenciar do seu rival:  ");
        scanf("%c", &jogador2);
        getchar();

    printf("Escolha um pais, escreva somente a sigla:  \n"); 
        scanf("%s", sigla_pais2);
        getchar();

    printf("digite a sigla do pais o codigo telefonico do ais e o codigo regional da cidade escolhida separa por - :   \n"); 
        scanf("%s", id2);
        getchar(); 
    
    printf("declare o seu estado somente pela sigla:  \n");
        scanf("%s", sigla_estado2);
        getchar();
    
    printf("escolha a sua cidade:  \n");
        scanf("%s", cidade2);
        getchar();
    
    printf("declare a população da cidade:  \n");
        scanf("%d", &populacao2);
        getchar();
    
    printf("declare o PIB(Produto Interno Bruto) da população:  \n");
        scanf("%f", &pib2);
        getchar();
    
    printf("declare a quantidade de pontos turisticos:  \n");
        scanf("%d", &pontos_turisticos2);
        getchar();

    printf("\n Jogador-  %c \n", jogador);
    printf("\n`````Card Super Trunfo`````\n");//somente cria um título na hora da exibição
    printf("PAIS-  %s | ID-  %s \n", sigla_pais, id);//imprime a sigla do pais escolhido
    printf("ESTADO-  %s | CIDADE-  %s \n", sigla_estado, cidade);//imprime o estado e cidade separados por um pip "" | ""
    printf("POPULAÇÃO-  %d \n", populacao); //imprime a população
    printf("PRODUTO INTERNO BRUTO-   %f \n", pib); // imprime o PIB
    printf("PONTOS TURISTICOS-  %d \n", pontos_turisticos); // imprime a quantidade de pontos turisticos
    printf("################################\n"); // cria uma linha de jogo da velha so para ficar bonitinho

    printf("\n Jogador- %c \n", jogador2);
    printf("\n`````Card Super Trunfo`````\n");
    printf("PAIS-  %s |ID-  %s \n", sigla_pais2, id2);
    printf("ESTADO-  %s | CIDADE-  %s \n", sigla_estado2, cidade2);
    printf("POPULAÇÃO-  %d \n", populacao2); 
    printf("PRODUTO INTERNO BRUTO-  %f \n", pib2); 
    printf("PONTOS TURISTICOS-  %d \n", pontos_turisticos2); 
    printf("################################\n"); 
    return 0;
}

/*
Conforme a descrição da atividade, foi cumprida cada solicitação. Porém, tomei a liberdade de usar minha criatividade e fiz pequenas alterações, mas sempre seguindo as regras, como por exemplo:
-Quando se pede para criar um char em que vale somente um caractere, eu o usei para especificar o jogador, dando liberdade para que ele escolha entre caracteres alfanuméricos e especiais.
-Na parte de fazer o código da carta, criei um modo em que o jogador usará o país e os códigos telefônicos para não correr o risco de criar códigos de mesmo valor repetidamente.
-Em estado e país, coloquei para inserir somente a sigla, evitando riscos de digitação por parte de futuras pessoas que não possuam tanta familiaridade com a linguagem como eu, já que muitos estados e países possuem nomes compostos.
Agradeço a atenção.
DATA 04/04/2025
*/

