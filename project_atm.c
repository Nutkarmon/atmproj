#include <stdio.h>
#include <string.h>
#define size 10

//Prototype
int snacks();
int menu();

//Data Structure Variables
struct snacks_stock{
    int price;
    char name[50];
};

//Declaring global variables
int total, amount, m_in, i=0;

int main(){
    snacks();
    int choice;
    choice = menu();
    do{
        switch(choice){
             case 1 : sancks(); break;
             case 2 : drinks();break;
             case 3 : food(); break;
             case 0 : break;
             default : printf("Invalid Menu");break;      
        }
        choice = menu();
                   
    }while(choice!=0);
    return 0;
}


int menu(){
    //MENU CODE
int ch;
    printf("\n***************Menu************");
    printf("\n***************1.Sancks************");
    printf("\n***************2.Drinks************");
    printf("\n***************3.Foods************");
    printf("\n***************4.exit************");
    printf("\n***************************");
    printf("\n Please Select Menu [1-4]:");
    scanf("%d",&ch);
    return ch;
}

//Snacks section
int snacks(){
    int opt, chance;
    struct snacks_stock st[10];
    struct snacks_stock st[0] = {10, "Lay's Nori Seaweed (Small)"}, st[1] = {15, "Lay's Nori Seaweed (Large)"};

    printf("SNACKS SECTION\n---------------------------------\n");
    printf("Snacks List :\n");

    for(i=0;i<size;i++){
        printf("Product name :\t\t\t\tPrice:\n%s\t\t\t%d",st[i].name,st[i].price);
    }

    printf("\nPlease Select your option (Press 0 for exit): ");
    scanf("%d",&opt);

    do{
    	switch(opt){
            case 1: printf("You selected %s (%d baht)",st[0].name,st[0].price); break;
            case 2: printf("You selected %s (%d baht)",st[1].name,st[1].price); break;
    	}
    	printf("\nPlease Select your option (Press 0 for exit): ");
    	scanf("%d",&opt);
	}while(opt!=0);
	
    return 0;
}
