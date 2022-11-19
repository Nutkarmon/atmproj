#include <stdio.h>
#include <string.h>
#define size 10

//Prototype
int snacks(int total);
int menu();
int food(int total);
int drinks(int total);
int checkout();
void payment(int total);

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
             case 1 : snacks(total); break;
             case 2 : drinks(total);break;
             case 3 : food(total); break;
             case 4 : payment(total); break;
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
int snacks(int total){
    int opt, chance;
    struct snacks_stock st[10] = {{10, "Lay's Nori Seaweed (Small)"},{15, "Lay's Nori Seaweed (Large)"},{17, "Choco Stick"},{10, "Potato Snack"},{20,"KitKat"},{5, "OK"},{7, "Euro Cake"},{10, "Snack Jack"},{20, "Carada"},{10, "Cronae"}};

    printf("SNACKS SECTION\n---------------------------------\n");
    printf("Snacks List :\n");

    for(i=0;i<size;i++){
        printf("Product name :\t\t\t\tPrice:\n%s\t\t\t%d",st[i].name,st[i].price);
    }


    do{
    	switch(opt){
            case 1: printf("You selected %s (%d baht)",st[0].name,st[0].price); break;
            case 2: printf("You selected %s (%d baht)",st[1].name,st[1].price); break;
            case 3: printf("You selected %s (%d baht)",st[2].name,st[2].price); break;
            case 4: printf("You selected %s (%d baht)",st[3].name,st[3].price); break;
            case 5: printf("You selected %s (%d baht)",st[4].name,st[4].price); break;
            case 6: printf("You selected %s (%d baht)",st[5].name,st[5].price); break;
            case 7: printf("You selected %s (%d baht)",st[6].name,st[6].price); break;
            case 8: printf("You selected %s (%d baht)",st[7].name,st[7].price); break;
            case 9: printf("You selected %s (%d baht)",st[8].name,st[8].price); break; 
			case 10: printf("You selected %s (%d baht)",st[9].name,st[9].price); break;   
			case 0 : break;
            default : printf("Invalid selection, please try again..."); break;    
    	}
    	printf("\nPlease Select your option (Press 0 for exit): ");
    	scanf("%d",&opt);
	}while(opt!=0);
	
    return total;
}

//food section
int food(int total){
    int foodChoice;
    struct foods_stock fst[size] = {{45, "Pork Fried Rice"}, {55, "Shrimp Fried Rice"}, {60, "Pad Thai"}, {55, "Rice Burger with Larb Moo"}, {80, "Parma Ham Pizza"}, {25, "Instant Noodles (Tom Yum Goong flavour)"}, {25, "Instant Noodles (Minced Pork flavour)"}, {25, "Instant Noodles (Pad Ki Mao flavour)"}, {25, "Instant Noodles (Ramyeon)"}, {25, "Ham & Cheese Sandwich"}};
    
    printf("FOOD SECTION\n--------------------------------\n");
    printf("Food List :\n");
    printf("Product name :\t\t\t\tPrice:\n");

    for(i=0;i<size;i++){
        printf("%s\t\t\t%d\n",fst[i].name,fst[i].price);
    }
    
    
    do{
    	switch(foodChoice){
    		case 1 : printf("You selected %s (%d baht)",fst[0].name,fst[0].price); total += fst[0].price; break;
    		case 2 : printf("You selected %s (%d baht)",fst[1].name,fst[1].price); total += fst[1].price; break;
            case 3 : printf("You selected %s (%d baht)",fst[2].name,fst[2].price); total += fst[2].price; break; 
    		case 4 : printf("You selected %s (%d baht)",fst[3].name,fst[3].price); total += fst[3].price; break; 
            case 5 : printf("You selected %s (%d baht)",fst[4].name,fst[4].price); total += fst[4].price; break; 
    		case 6 : printf("You selected %s (%d baht)",fst[5].name,fst[5].price); total += fst[5].price; break; 
            case 7 : printf("You selected %s (%d baht)",fst[6].name,fst[6].price); total += fst[6].price; break; 
    		case 8 : printf("You selected %s (%d baht)",fst[7].name,fst[7].price); total += fst[7].price; break; 
            case 9 : printf("You selected %s (%d baht)",fst[8].name,fst[8].price); total += fst[8].price; break; 
    		case 10 : printf("You selected %s (%d baht)",fst[9].name,fst[9].price); total += fst[9].price; break;
            case 0 : break;
            default : printf("Invalid selection, please try again...");
		}
		printf("\nPlease Select your option (Press 0 for exit): ");
    	scanf("%d",&foodChoice);
	}while(foodChoice!=0);
	
	return total;
}

//drink section
int drinks(int total){
	int drinksChoice;
	struct drinks_stock ds[10] = {{15,"Cola"}, {20,"Oishi"},{45,"Apple"},{30,"Orenge"},{45,"Soda"},{65,"perrier Water"},{35,"Peach Soda"},{55,"Kiwi"},{55,"Strawberry"},{55,"Sprite"}};
	
	printf("DRINKS SECTION\n-------------------------------\n");
	printf("Drink List :\n");
	
	printf("\t\t\t\t\t\tPrice",ds[i].price);
	
	for(i=0;i<size;i++){
		printf("\nProduct name [%d] :%s\t\t\t\t %d",i+1,ds[i].name,ds[i].price);
	}
	
    
    do{
    	switch(drinksChoice){
    		case 1 :printf("You selected %s (%d baht)",ds[0].name,ds[0].price); total += ds[0].price; break;
    		case 2 :printf("You selected %s (%d baht)",ds[1].name,ds[1].price); total += ds[1].price; break;
    		case 3 :printf("You selected %s (%d baht)",ds[2].name,ds[2].price); total += ds[2].price; break;
    		case 4 :printf("You selected %s (%d baht)",ds[3].name,ds[3].price); total += ds[3].price; break;
    		case 5 :printf("You selected %s (%d baht)",ds[4].name,ds[4].price); total += ds[4].price; break;
    		case 6 :printf("You selected %s (%d baht)",ds[5].name,ds[5].price); total += ds[5].price; break;
    		case 7 :printf("You selected %s (%d baht)",ds[6].name,ds[6].price); total += ds[6].price; break;
    		case 8 :printf("You selected %s (%d baht)",ds[7].name,ds[7].price); total += ds[7].price; break;
    		case 9 :printf("You selected %s (%d baht)",ds[8].name,ds[8].price); total += ds[8].price; break;
    		case 10 :printf("You selected %s (%d baht)",ds[9].name,ds[9].price); total += ds[9].price; break;
    		case 0 : break;
    		default : printf("Invalid selection, please try again...");
		}
		printf("\nPlease Select your option (Press 0 for exit): ");
    	scanf("%d",&drinksChoice);
	}while(drinksChoice!=0);
	
	return total;
}

void payment(int total){
	int pay;
    pay = snacks(total)+food(total)+drinks(total);
	
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
