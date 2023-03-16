//Aluna: Joice Carolina da Silva Toledo
//RA: 22101741-5
//CURSO: BACHARELADO EM ENGENHARIA DE SOFTWARE
//Matéria: ALGORITMOS E LÓGICA DE PROGRAMAÇÃO II , Módulo 52

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 50

struct cad{
	
	int code;
    char name[50];
    char adress[50];
    char request[50];
    float price;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
	struct cad cad_order;
    int option, i, op, search, located, quantity_orders;

		
	menu://menu de opçoes
    fflush(stdin);
	system("cls");
	printf("\nMENU PRINCIPAL\n");
    printf("\n1 - Cadastrar novo pedido\n");
    printf("\n2 - Consultar pedido\n");
    printf("\n3 - Emitir relatório\n");
    printf("\n4 - Sair\n");
    printf("\nDigite o número correspondente a opção desejada: \n");
    scanf("%d", &option);
        
    switch (option){

    	case 1: {
    		
        system("cls");
        	fflush(stdin);
            printf("CADASTRAR NOVO PEDIDO\n");
            printf("Informe quantos pedidos deseja cadastrar:");
            scanf("%d", &quantity_orders);
            
            struct cad cad_order[quantity_orders];

			
			for(i=0;i<quantity_orders; i++)
			{
  	          printf("\nPedido: %d");
			scanf("%i", &cad_order[i].code);
            fflush(stdin);
            printf("\nDigite seu nome: ");
            scanf("%50[^\n]s", &cad_order[i].name);
            fflush(stdin);
            printf("\nInforme o endereço para entrega: ");
            scanf("%50[^\n]s", &cad_order[i].adress);
            fflush(stdin);
            printf("\nInforme seu pedido: ");
            scanf("%50[^\n]s", &cad_order[i].request);
            fflush(stdin);
            printf("\nValor: R$ ");
            scanf("%i", &cad_order[i].price);
            fflush(stdin);
			
            printf("\nPedido Realizado com sucesso!\n");
			system("pause");
		}
					
			system("cls");
            printf("\nVOCÊ CONCLUI O REGISTRO DE %d PEDIDOS!!\n", quantity_orders);
			system("pause");
            goto menu;

            break;
    }    

    	case 2: {
        system("cls");
        	printf("CONSULTAR PEDIDO \n");
        	printf("\nDigite o número do pedido:\n ");
        	scanf ("%d", &search);
        	
        /*	int i=0;
			located = 0;
			
        	while((i == TAM) && (located == 0)) 
			{
  	 		
			(cad_order[i].code == search) 
				located = 1;
				
			else
				i++;
			}
			
			if (located == 1){
			
			system("cls");
			printf("\nO pedido foi localizado\n");
			printf("\nPedido: %i", cad_order[i].code);
            printf("\nNome: %d", cad_order[i].name);
            printf("\nEndereço para entrega: %d", cad_order[i].adress);
            printf("\nPedido: %d", cad_order[i].request);
            printf("\nValor: R$ %i", cad_order[i].price);
        	}
		    
		    else 
			system("cls");
  	 		printf("O pedido não foi localizado.");
  	 		
			} */
					
				system("pause");
       			 goto menu;
        		break;
    		}

    case 3: {
    	fflush(stdin);
        system("cls");
        printf("RELATÓRIO DE PEDIDOS \n");
        
       /* for (i=0; i<quantity_orders; i++)
			
			{
        	
			printf("\nPedido: %i", cad_order[i].code);
            printf("\nNome: %d", cad_order[i].name);
            printf("\nEndereço para entrega: %d", cad_order[i].adress);
            printf("\nPedido: %d", cad_order[i].request);
            printf("\nValor: R$ %i", cad_order[i].price);
			
			}
 		} */
 
        break;
        goto menu;
    }

    case 4:{
        system("cls");
        printf("\nTEM CERTEZA QUE DESEJA FINALIZAR O SISTEMA?\n");
        printf("\nDigite 1 para sim e qualquer tecla para retornar ao menu.\n");
		scanf("%d", &op);
		
		if (op==1)
		system("exit");
		
		else 
		goto menu;
		
		break;
    }


    default: {
        system("cls");
        printf("\nOpção inválida.\n");
        system("pause");
        goto menu;
        break;
		}
        
    }

    return 0;
}
