#include <stdio.h>
#include <string.h>
#define size 10

//Prototype
int snacks();
int menu();
int food();
int drinks();
int payment();

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
int total=0, amount=0, i=0, foodCount=0;

int main(){
    int choice;
    choice = menu();
    do{
        switch(choice){
             case 1 : snacks(); break;
             case 2 : drinks(); break;
             case 3 : food(); break;
             case 4 : payment(); break;
             case 0 : printf("\n\n\nTHANK YOU! :)"); break;
             default : printf("\nInvalid Menu"); break;      
        }
        choice = menu();            
    }while(choice!=0);
    return 0;
}


int menu(){
    int ch;
    printf("\n\t\t\t ______________________________________");
    printf("\n\t\t\t|                  Menu               |");
    printf("\n\t\t\t|_____________________________________|");
    printf("\n\t\t\t|               1.Snacks              |");
    printf("\n\t\t\t|               2.Drinks              |");
    printf("\n\t\t\t|               3.Foods               |");
    printf("\n\t\t\t|               4.Payment             |");
    printf("\n\t\t\t|_____________________________________|");
    printf("\n\t\t\t|                0.exit               |");
    printf("\n\t\t\t|_____________________________________|");
    printf("\n\n Please Select Menu [0-4]:");
    scanf("%d",&ch);
    return ch; 
}

//Snacks section
int snacks(){
    int opt, chance;
    struct snacks_stock st[size] = {{10, "Lay's Nori Seaweed (Small)"},{15, "Lay's Nori Seaweed (Large)"},{17, "Choco Stick"},{10, "Potato Snack"},{20,"KitKat"},{5, "OK"},{7, "Euro Cake"},{10, "Snack Jack"},{20, "Carada"},{10, "Cornae\'"}};

    printf("\nSNACKS SECTION\n---------------------------------\n");
    printf("Snacks List :\n");

    for(i=0;i<size;i++){
        printf("\nProduct [%d]: %s\nPrice : %d\n",i+1,st[i].name,st[i].price);
    }


    do{
    	switch(opt){
            case 1: printf("\nYou selected %s (%d baht)",st[0].name,st[0].price); total += st[0].price; break;
            case 2: printf("\nYou selected %s (%d baht)",st[1].name,st[1].price); total += st[1].price; break;
            case 3: printf("\nYou selected %s (%d baht)",st[2].name,st[2].price); total += st[2].price; break;
            case 4: printf("\nYou selected %s (%d baht)",st[3].name,st[3].price); total += st[3].price; break;
            case 5: printf("\nYou selected %s (%d baht)",st[4].name,st[4].price); total += st[4].price; break;
            case 6: printf("\nYou selected %s (%d baht)",st[5].name,st[5].price); total += st[5].price; break;
            case 7: printf("\nYou selected %s (%d baht)",st[6].name,st[6].price); total += st[6].price; break;
            case 8: printf("\nYou selected %s (%d baht)",st[7].name,st[7].price); total += st[7].price; break;
            case 9: printf("\nYou selected %s (%d baht)",st[8].name,st[8].price); total += st[8].price; break; 
			case 10: printf("\nYou selected %s (%d baht)",st[9].name,st[9].price); total += st[9].price; break;   
			case 0 : break;
            default : printf("\nInvalid selection, please try again..."); break;    
    	}
    	printf("\nPlease Select your option (Press 0 for exit): ");
    	scanf("%d",&opt);
	}while(opt!=0);
	
    return total;
}

//food section
int food(){
    int foodChoice;
    struct foods_stock fst[size] = {{45, "Pork Fried Rice"}, {55, "Shrimp Fried Rice"}, {60, "Pad Thai"}, {55, "Rice Burger with Larb Moo"}, {80, "Parma Ham Pizza"}, {25, "Instant Noodles (Tom Yum Goong flavour)"}, {25, "Instant Noodles (Minced Pork flavour)"}, {25, "Instant Noodles (Pad Ki Mao flavour)"}, {25, "Instant Noodles (Ramyeon)"}, {25, "Ham & Cheese Sandwich"}};
    
    printf("\nFOOD SECTION\n--------------------------------\n");
    printf("Food List :\n");

    for(i=0;i<size;i++){
        printf("\nProduct [%d]: %s\nPrice : %d\n",i+1,fst[i].name,fst[i].price);
    }
    
    do{
    	switch(foodChoice){
    		case 1 : printf("\nYou selected %s (%d baht)",fst[0].name,fst[0].price); total += fst[0].price; foodCount+=1; break;
    		case 2 : printf("\nYou selected %s (%d baht)",fst[1].name,fst[1].price); total += fst[1].price; foodCount+=1; break;
            case 3 : printf("\nYou selected %s (%d baht)",fst[2].name,fst[2].price); total += fst[2].price; foodCount+=1; break; 
    		case 4 : printf("\nYou selected %s (%d baht)",fst[3].name,fst[3].price); total += fst[3].price; foodCount+=1; break; 
            case 5 : printf("\nYou selected %s (%d baht)",fst[4].name,fst[4].price); total += fst[4].price; foodCount+=1; break; 
    		case 6 : printf("\nYou selected %s (%d baht)",fst[5].name,fst[5].price); total += fst[5].price; foodCount+=1; break; 
            case 7 : printf("\nYou selected %s (%d baht)",fst[6].name,fst[6].price); total += fst[6].price; foodCount+=1; break; 
    		case 8 : printf("\nYou selected %s (%d baht)",fst[7].name,fst[7].price); total += fst[7].price; foodCount+=1; break; 
            case 9 : printf("\nYou selected %s (%d baht)",fst[8].name,fst[8].price); total += fst[8].price; foodCount+=1; break; 
    		case 10 : printf("\nYou selected %s (%d baht)",fst[9].name,fst[9].price); total += fst[9].price; foodCount+=1; break;
            case 0 : break;
            default : printf("\nInvalid selection, please try again..."); break;
		}
		printf("\nPlease Select your option (Press 0 for exit): ");
    	scanf("%d",&foodChoice);
	}while(foodChoice!=0);
	return total;
	return foodCount;
}

//drink section
int drinks(){
	int drinksChoice,drinkcount,ac,result,totaldrinks,sum=0;

	struct drinks_stock ds[size] = {{15,"Cola"}, {20,"Oishi"},{45,"Apple"},{30,"Orange"},{45,"Soda"},{65,"Purra Water"},{35,"Peach Soda"},{55,"Kiwi"},{55,"Strawberry"},{55,"Sprite"}};
	
	printf("\nDRINKS SECTION\n-------------------------------\n");
	printf("Drink List :\n");
	
	for(i=0;i<size;i++){
		printf("\nProduct [%d]: %s\nPrice : %d\n",i+1,ds[i].name,ds[i].price);
	}
    
    do{
    	switch(drinksChoice){
    		case 1 :printf("\nYou selected %s (%d baht)",ds[0].name,ds[0].price);totaldrinks = ds[0].price; 
			     	printf("\n[Please select your drink size]");
					printf("\n[1] S 10 Baht");
					printf("\n[2] M 15 Baht");
					printf("\n[3] L 20 Baht");
					printf("\nSelect size of your drinks : ");
					scanf("%d",&ac);
					if(ac==1){
						result = totaldrinks + 10;
					}else if(ac==2){
						result = totaldrinks + 15;
					}else if(ac==3){
						result = totaldrinks + 20;
					}
					printf("Total = %d",result);
					sum+=result;
					break;
						
						
    		case 2 :printf("\nYou selected %s (%d baht)",ds[1].name,ds[1].price);totaldrinks = ds[1].price; 
					printf("\n[Please select your drink size]");
					printf("\n[1] S 10 Baht");
					printf("\n[2] M 15 Baht");
					printf("\n[3] L 20 Baht");
					printf("\nSelect size of your drinks : ");
					scanf("%d",&ac);
					if(ac==1){
						result = totaldrinks + 10;
					}else if(ac==2){
						result = totaldrinks + 15;
					}else if(ac==3){
						result = totaldrinks + 20;
					}
					printf("Total = %d",result);
					sum+=result;
					break;
					
    		case 3 :printf("\nYou selected %s (%d baht)",ds[2].name,ds[2].price);totaldrinks =  ds[2].price; 
					printf("\n[Please select your drink size]");
					printf("\n[1] S 10 Baht");
					printf("\n[2] M 15 Baht");
					printf("\n[3] L 20 Baht");
					printf("\nSelect size of your drinks : ");
					scanf("%d",&ac);
					if(ac==1){
						result = totaldrinks + 10;
					}else if(ac==2){
						result = totaldrinks + 15;
					}else if(ac==3){
						result = totaldrinks + 20;
					}
					printf("Total = %d",result);
					sum+=result;
					break;
					
    		case 4 :printf("\nYou selected %s (%d baht)",ds[3].name,ds[3].price); totaldrinks = ds[3].price; 
			printf("\n[Please select size]");
					printf("\n[Please select your drink size]");
					printf("\n[1] S 10 Baht");
					printf("\n[2] M 15 Baht");
					printf("\n[3] L 20 Baht");
					printf("\nSelect size of your drinks : ");
					scanf("%d",&ac);
					if(ac==1){
						result = totaldrinks + 10;
					}else if(ac==2){
						result = totaldrinks + 15;
					}else if(ac==3){
						result = totaldrinks + 20;
					}
					printf("Total = %d",result);
					sum+=result;
					break;
					
    		case 5 :printf("\nYou selected %s (%d baht)",ds[4].name,ds[4].price); totaldrinks = ds[4].price; 
					printf("\n[Please select your drink size]");
					printf("\n[1] S 10 Baht");
					printf("\n[2] M 15 Baht");
					printf("\n[3] L 20 Baht");
					printf("\nSelect size of your drinks : ");
					scanf("%d",&ac);
					if(ac==1){
						result = totaldrinks + 10;
					}else if(ac==2){
						result = totaldrinks + 15;
					}else if(ac==3){
						result = totaldrinks + 20;
					}
					printf("Total = %d",result);
					sum+=result;
					break;
					
    		case 6 :printf("\nYou selected %s (%d baht)",ds[5].name,ds[5].price); totaldrinks = ds[5].price; 
					printf("\n[Please select your drink size]");
					printf("\n[1] S 10 Baht");
					printf("\n[2] M 15 Baht");
					printf("\n[3] L 20 Baht");
					printf("\nSelect size of your drinks : ");
					scanf("%d",&ac);
					if(ac==1){
						result = totaldrinks + 10;
					}else if(ac==2){
						result = totaldrinks + 15;
					}else if(ac==3){
						result = totaldrinks + 20;
					}
					printf("Total = %d",result);
					sum+=result;
					break;
					
    		case 7 :printf("\nYou selected %s (%d baht)",ds[6].name,ds[6].price); totaldrinks = ds[6].price; 
					printf("\n[Please select your drink size]");
					printf("\n[1] S 10 Baht");
					printf("\n[2] M 15 Baht");
					printf("\n[3] L 20 Baht");
					printf("\nSelect size of your drinks : ");
					scanf("%d",&ac);
					if(ac==1){
						result = totaldrinks + 10;
					}else if(ac==2){
						result = totaldrinks + 15;
					}else if(ac==3){
						result = totaldrinks + 20;
					}
					printf("Total = %d",result);
					sum+=result;
					break;
					
    		case 8 :printf("\nYou selected %s (%d baht)",ds[7].name,ds[7].price); totaldrinks = ds[7].price; 
					printf("\n[Please select your drink size]");
					printf("\n[1] S 10 Baht");
					printf("\n[2] M 15 Baht");
					printf("\n[3] L 20 Baht");
					printf("\nSelect size of your drinks : ");
					scanf("%d",&ac);
					if(ac==1){
						result = totaldrinks + 10;
					}else if(ac==2){
						result = totaldrinks + 15;
					}else if(ac==3){
						result = totaldrinks + 20;
					}
					printf("Total = %d",result);
					sum+=result;
					break;
					
    		case 9 :printf("\nYou selected %s (%d baht)",ds[8].name,ds[8].price); totaldrinks = ds[8].price; 
					printf("\n[Please select your drink size]");
					printf("\n[1] S 10 Baht");
					printf("\n[2] M 15 Baht");
					printf("\n[3] L 20 Baht");
					printf("\nSelect size of your drinks : ");
					scanf("%d",&ac);
					if(ac==1){
						result = totaldrinks + 10;
					}else if(ac==2){
						result = totaldrinks + 15;
					}else if(ac==3){
						result = totaldrinks + 20;
					}
					printf("Total = %d",result);
					sum+=result;
					break;
					
    		case 10 :printf("\nYou selected %s (%d baht)",ds[9].name,ds[9].price); totaldrinks = ds[9].price; 
					printf("\n[Please select your drink size]");
					printf("\n[1] S 10 Baht");
					printf("\n[2] M 15 Baht");
					printf("\n[3] L 20 Baht");
					printf("\nSelect size of your drinks : ");
					scanf("%d",&ac);
					if(ac==1){
						result = totaldrinks + 10;
					}else if(ac==2){
						result = totaldrinks + 15;
					}else if(ac==3){
						result = totaldrinks + 20;
					}
					printf("Total = %d",result);
					sum+=result;
					break;
					
    		case 0 : break;
    		default : printf("\nInvalid selection, please try again..."); break;
    		
		}
		printf("\nPlease select your drink option (Press 0 for exit) : ");
    	scanf("%d",&drinksChoice);
    	}while(drinksChoice!=0);
    	total=sum;
        printf("Total of your drink(s) = %d",sum);
		return sum;
}

int payment(){
	int pay=0, payMethod,n,ppin=0,m, countFood, chF; //m=change,tang torn n=m_in,tang tee input 
	int a,b,c,d,e,f,g,h;
    i = total; //i=pay
	countFood = foodCount;

    printf("\nTotal = %d\n",i);

	do{
        printf("\nYou have %d food(s) that can warm. Do you want to warm food(s)?\nPress 1 : Yes\nPress 2 : No\nSelect Option [1/2] : ",foodCount);
        scanf("%d",&chF);
        if(chF==1){
            printf("You selected to warm foods.\n");
        }else if(chF==2){
            printf("You selected to not warm foods.\n");
        }else{
            printf("Invalid decision, please try again...\n");
        }
    }while(chF!=1&&chF!=2);
	
	do{
		printf("\nPlease Select your payment");
	    printf("\n\t1.Cash");
	    printf("\n\t2.QR PromptPay");
        printf("\nPlease Select your option (Press 0 to cancel): ");
        scanf("%d",&payMethod);
    	}while(payMethod!=0&&payMethod!=1&&payMethod!=2);
    	
    	if(payMethod==1){
        	do{
                printf("\nTotal = %d\n",i);
				printf("Insert money : ");
        		scanf("%d",&n);
        		if(n>i){
					m = n-i;
					printf("\nChange = %d Baht\n\n",m);
					a=m/1000;

           printf("\n1,000 Baht banknote = %d ",a);
            b=m%1000;
            c=b/100;
      if (c>=5){
      printf("\n500 Baht banknote = %d ",1);
            c=c-5;
      }else{
      }
      printf("\n100 Baht banknote = %d ",c);

           d=m%100;

           e=d/10;

      if (e>=5){
      printf("\n50 Baht banknote = %d ",1);
           e=e-5;
      }else{
      }
           f=e/2;
      printf("\n20 Baht banknote = %d ",f);
           g=e%2;
      printf("\n10 Baht coin = %d ",g);
           h=m%10;
      if (h>=5){
      printf("\n5 Baht coin = %d ",1);
           h=h-5;
      }else{
      }
      printf("\n1 Baht coin = %d ",h);
					printf("\nPayment Successful!");					
	  }else if(n<i){
					printf("Insufficient money, please input your money again...");
				}else{
					printf("Payment Successful!");
				}
			}while((n!=i)&&(n<i));
    	}
		if(payMethod==2){
			do{
				printf(" ||.|||.||||.|||||.||||.|||.||\n");
				printf("Your amount to pay = %d\n",i);
				printf("Input your money : ");
        		scanf("%d",&ppin);
				if(ppin>i){
					printf("You pay more than your amount to pay that is not allowed, please try again...");
				}else if(ppin==i){
					printf("Payment Successful");
				}else{
					printf("You pay less than your amount to pay that is not allowed, please try again...");
				}
			}while(ppin!=i);
		}
	return total;
}
