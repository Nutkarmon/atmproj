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
struct drink_stock{
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
    printf("\n***************4.exit************");
    printf("\n***************************");
    printf("\n Please Select Menu [1-4]:");
    scanf("%d",&ch);
    return ch;
}

//Snacks section
int snacks(){
    int opt, chance;
    struct snacks_stock st[10] = {{10, "Lay's Nori Seaweed (Small)"},{15, "Lay's Nori Seaweed (Large)"}};

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
<<<<<<< HEAD
    struct foods_stock fst[10] = {{45, "Pork Fried Rice"},{55, "Shrimp Fried Rice"}};
    
    printf("FOOD SECTION\n--------------------------------\n");
    printf("Food List :\n");
    
    for(i=0;i<size;i++){
        printf("Product name :\t\t\t\tPrice:\n%s\t\t\t%d",fst[i].name,fst[i].price);
=======
    struct foods_stock fst[size] = {{45, "Pork Fried Rice"}, {55, "Shrimp Fried Rice"}, {69, "Rice with Red Curry"}, {45, "Minced Pork Pad Ka Prao with Fried Egg"}, {40, "Minced Pork Pad Ka Prao"}};
    for(i=0;i<size;i++){
        printf("%s %d\n",fst[i].name,fst[i].price);
>>>>>>> 3f3eb34650f2af0ffd4c65964cfd3376e7849af6
    }
    
    printf("\nPlease Select your option (press 0 for exit): ");
    scanf("%d",&foodChoice);
    
    do{
    	switch(foodChoice){
    		case 1 : printf("You selected %s (%d baht)",fst[0].name,fst[0].price);
    		case 2 : printf("You selected %s (%d baht)",fst[1].name,fst[1].price);
		}
		printf("\nPlease Select your option (Press 0 for exit): ");
    	scanf("%d",&foodChoice);
	}while(foodChoice!=0);
	
	return 0;
}

//drink section
int drinks(){
	int drinksChioce;
	struct drinks_stock dst[10] = {{15,"Cola"},{20,"Oishi"}};
	
	printf("DRINKS SECTION\n-------------------------------\n");
	printf("Drink List :\n");
	
	for(i=0;i<size;i++){
		printf("Product name :\t\t\t\tPrice:\n%s\t\t\t%d",dst[i].name,dst[i].price);
	}
	
	printf("\nPlease Select your option (press 0 for exit): ");
    scanf("%d",&drinksChoice);
    
    do{
    	switch(drinksChioce){
    		case 1 :printf("You selected %s (%d baht)",dst[0].name,dst[0].price);
    		case 2 :printf("You selected %s (%d baht)",dst[1].name,dst[1].price);
		}
		printf("\nPlease Select your option (Press 0 for exit): ");
    	scanf("%d",&drinksChioce);
	}while(drinksChioce!=0);
	
	return 0;
}

