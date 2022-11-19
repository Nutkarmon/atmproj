#include <stdio.h>
#include <string.h>
#define size 10

//Prototype
int snacks();
int menu();
int food();
int drinks();
int checkout();
void payment();

//Data Structure Variables
struct snacks_stock{
    int price;
    char name[50];
};
struct foods_stock{
    int price;
    char name[50];
};
struct drinks_stock{
	int price;
	char name[50];
};

//Declaring global variables
int total, amount, m_in, i=0;

int main(){
    int choice;
    choice = menu();
    do{
        switch(choice){
             case 1 : snacks(); break;
             case 2 : drinks();break;
             case 3 : food(); break;
             case 4 : payment(); break;
             case 0 : break;
             default : printf("Invalid Menu");break;      
        }
        choice = menu();            
    }while(choice!=0);
    return 0;
}


int menu(){
    int ch;
    printf("\n***************Menu************");
    printf("\n***************1.Sancks************");
    printf("\n***************2.Drinks************");
    printf("\n***************3.Foods************");
    printf("\n***************4.Payment************");
    printf("\n***************5.exit************");
    printf("\n***************************");
    printf("\n Please Select Menu [1-4]:");
    scanf("%d",&ch);
    return ch;
}

//Snacks section
int snacks(){
    int opt, chance;
    struct snacks_stock st[10] = {{10, "Lay's Nori Seaweed (Small)"}, {15, "Lay's Nori Seaweed (Large)"}};

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

//food section
int food(){
    int foodChoice;
    struct foods_stock fst[size] = {{45, "Pork Fried Rice"}, {55, "Shrimp Fried Rice"}, {60, "Pad Thai"}, {55, "Rice Burger with Larb Moo"}, };
    
    printf("FOOD SECTION\n--------------------------------\n");
    printf("Food List :\n");
    printf("Product name :\t\t\t\tPrice:\n");

    for(i=0;i<size;i++){
        printf("%s\t\t\t%d\n",fst[i].name,fst[i].price);
    }
    
    printf("\nPlease Select your option (press 0 for exit): ");
    scanf("%d",&foodChoice);
    
    do{
    	switch(foodChoice){
    		case 1 : printf("You selected %s (%d baht)",fst[0].name,fst[0].price); break;
    		case 2 : printf("You selected %s (%d baht)",fst[1].name,fst[1].price); break;
            case 3 : printf("You selected %s (%d baht)",fst[2].name,fst[2].price); break; 
    		case 4 : printf("You selected %s (%d baht)",fst[3].name,fst[3].price); break; 
            case 5 : printf("You selected %s (%d baht)",fst[4].name,fst[4].price); break; 
    		case 6 : printf("You selected %s (%d baht)",fst[5].name,fst[5].price); break; 
            case 7 : printf("You selected %s (%d baht)",fst[6].name,fst[6].price); break; 
    		case 8 : printf("You selected %s (%d baht)",fst[7].name,fst[7].price); break; 
            case 9 : printf("You selected %s (%d baht)",fst[8].name,fst[8].price); break; 
    		case 10 : printf("You selected %s (%d baht)",fst[9].name,fst[9].price); break;
            case 0 : break;
            default : printf("Invalid selection, please try again...");
		}
		printf("\nPlease Select your option (Press 0 for exit): ");
    	scanf("%d",&foodChoice);
	}while(foodChoice!=0);
	
	return 0;
}

//drink section
int drinks(){
	int drinksChoice;
	struct drinks_stock ds[10] = {{15,"Cola"}, {20,"Oishi"}};
	
	printf("DRINKS SECTION\n-------------------------------\n");
	printf("Drink List :\n");
	
	for(i=0;i<size;i++){
		printf("Product name :\t\t\t\tPrice:\n%s\t\t\t%d",ds[i].name,ds[i].price);
	}
	
	printf("\nPlease Select your option (press 0 for exit): ");
    scanf("%d",&drinksChoice);
    
    do{
    	switch(drinksChoice){
    		case 1 :printf("You selected %s (%d baht)",ds[0].name,ds[0].price);
    		case 2 :printf("You selected %s (%d baht)",ds[1].name,ds[1].price);
		}
		printf("\nPlease Select your option (Press 0 for exit): ");
    	scanf("%d",&drinksChoice);
	}while(drinksChoice!=0);
	
	return 0;
}

void payment(){
	int pay;
	
	printf("\nPlease Select your payment");
	printf("\n 1.cash");
	printf("\n 2.qr promptpay");
	
	do{
		switch(pay){
			case 1 :printf("cash"); break;
			case 2 :printf("qr promptpay"); break;
		}
		printf("\nPlease Select your option (Press 0 for exit): ");
    	scanf("%d",&pay);
	}while(pay!=0);	
	
}