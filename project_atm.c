#include <stdio.h>
#include <string.h>
#define size 10

//Prototype
int snacks();
int menu();
int food();
int checkout();
void payment();

//Data Structure Variables
struct snacks_stock{
    int price;
    char name[50];
};

//Declaring global variables
int total, amount, m_in, i=0;

int main(){
    snacks();
    return 0;
}

int menu(){
    //MENU CODE
printf("lov hee");
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
