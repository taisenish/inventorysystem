

#include<stdio.h> 

#include<conio.h> 

#include<stdlib.h> 
  

struct { 

             

char custname[30]; 

 int time; 

int quantity; 

int total; 

           } cust[100]; 

  

  

int main_menu(); // declaration of main menu function which shows items available and lets user choose one 

int payment_screen(); // declaration of payment screen function which accepts customer's preferred payment method 

int confirmation_screen(int select); // declaration of function to finalize customer's order 

int order_display(); //declaration of function to allow user to view their final order 

void write_to_file(); //declaration of function to write contents of the cust struct into a file
  

int main(){ 

  

int option; 

int customercharge; 

int price; 

int i; 

  

    printf ("Welcome to Timothee's Burger Shack!\n\t where there's quality in every bite\n\n\n\n"); 

                                     
    system("pause"); 
    system ("cls"); 

                                     
   option=main_menu(); 


return 0; } 

  


int main_menu(){ 

                         
int option; 

  

   while(option!=6){ 

 printf("\n\nPlease select your meal type:"); 
 printf("\n\n1.Crispy Chicken Sandwich....$850 "); 

 printf("\n\n2.Timmy's Special Beef Burger....$840 "); 

 printf("\n\n3.Timmy's Catch Deluxe....$930 "); 
 
 printf("\n\n4.Black Bean Burger....$960"); 

 printf("\n\n5.Kid's Meal Chicken Nuggets....$450"); 

 printf("\n\n6.Exit"); 

 printf("\n\nPlease select an option:"); 

 scanf("%d", &option); 

              system("cls"); 

              switch(option) 

                       { 

  

case 1:{ 

            
confirmation_screen(option);//passing the option variable to the  confirmation screen function  

break;} 

  

 

case 2:{ 

confirmation_screen(option)  ; 
                                                                          
break;} 

  

case 3:{ 

confirmation_screen(option)  ; 
                                        
break; 

} 

  
case 4:{ 

confirmation_screen(option)  ; 

break;} 

  
case 5:{ 

  confirmation_screen(option) ; 

   break;} 

  
case 6: 

printf("\n\n Your order has been cancelled.Thank you for visiting!"); //exits the program after selection 

break; 

                                     
default: //used for situations where the user selects an option outside of 1 to 6 

printf("\n\nInvalid option. Please select options 1 to 6");  

  

system ("pause"); 

system ("cls"); 

 break; 


}//end of default and case 6 

}//end of while loop 

             return 0;} 

  

  

  

int confirmation_screen(int select){  //function that assigns price to each option and confirms if the user's order is complete  

             

int price; 

int opt=0; 

int quantity; 

int temp; 

int count; 

char foodname; 

   

if(select==1){ 

        price=850; 

              }           


  else 
  if(select==2) { 

         price=840; 

                 } 

 else 
 if(select==3)   { 

           price=930; 

                  } 

  else 
 if(select==4){ 

 price=960; 

               } 

else 
if(select==5){ 

price=450; 

                } 

  
           printf("\nPlease enter the quantity:"); 
           scanf("%d", &cust[100].quantity); 

           system("cls"); 

             

            printf("\n\nWould you like to alter your order?"); 

            printf("\n\n 1. No my order is complete"); 

            printf("\n\n 2. Yes, I would like to alter it."); 

            printf("\n\n 3.Cancel my order"); 

            printf("\n\nPlease select an option:"); 
            scanf("%d", &opt); 

                        system("cls"); 
          

            if (opt==1){ 

            cust[100].total=cust[100].quantity*price;       

        
		    printf("The price of your meal is %d\n",cust[100].total ); 

                        system("pause");
						system(" cls"); 

             order_display(); 

                        } 

                                                            
                                                            
            if(opt==2){ 


            main_menu(); //Goes back to screen that shows available options 

                       } 

                                                                        
             if(opt==3){ 
                                                                    
            printf("\nYour order has been cancelled. Thank you for visiting. Come again");            
				       
					   } 

                                                 
    
system("cls");
                       

                        return 0;} 

                                                             

                                                             

            int payment_screen(){ //function that accepts users preferred payment method  

                                   

int temp; 

char name; 

int ordernum; 

             

                         

                                                 
write_to_file();
                                                 

            printf("\n1.Pay with Credit Card"); 

            printf("\n2.Pay at the register"); 

            printf("\n3.Cancel Order"); 

            printf("\nPlease select your preferred payment method:"); 

            scanf("%d", &temp); 

                                                             

                                                             

     if(temp==1){ 

                                                                         

            printf("\nYour order is now being prepared,please join line 2 to proceed with the transaction..\nThank you for visiting come again soon %s ", &cust[100].custname); 

                                                 

                                                            } 

                                                             

                                                             

       if(temp==2){ 

                                                                         

            printf("\nPlease join line 1 to complete the payment of your order...\nThank you for visiting come again soon %s ", &cust[100].custname); 

                                                                     } 

                                                             

  

       if(temp==3){ 

                                                             

            printf("\nYour order has been cancelled. Thank you for visiting. Come again");                                         

                                                            
		}
		
		system("pause");
		system("cls");
                                                            return 0; } 

  

  

             

int order_display()      { //function that allows the user to view their final order 

                         

int finalopt; 

  

  

       printf("\nPlease enter your first name :"); 

       scanf("%s",&cust[100].custname);    

                         

                                    system("pause"); 

                                    system("cls"); 

                                                 

                         

                                     

              printf("1. View Final Order\n\n"); 

              printf("2.Cancel my order\n\n"); 

              printf("\n\nPlease select an option:"); 

              scanf("%d", &finalopt); 

                         

                         

            if(finalopt==1){ 

                             

                cust[100].time=30; 

                                     

    printf("\nHere is your final order %s", &cust[100].custname); //program should print items in the cust struct in the next line  

    printf("\n Number of Items:%d \nTotal of your order:%d \nYour order will take about %d minutes\n" ,cust[100].quantity,cust[100].total,cust[100].time); 

             

            system("pause"); 

             system("cls"); 

                                                  

                                     

            payment_screen();} //goes to payment screen function 

                         

                                     

            if(finalopt==2){ 

                                                                                                 

               printf("\nYour order has been cancelled. Thank you for visiting. Come again\n");  

            } 

  

                        return 0;} 
                        
  void write_to_file(){
                        
FILE*fpointer;
 fpointer=fopen("customer.data", "w"); //opening of the customer data file in write mode
                        
 fprintf(fpointer, "\n Amount of items:%d \nMinutes till order will be served:%d \nTotal of your order:%d\nName of customer:%s", cust[100].quantity, cust[100].time, cust[100].total, cust[100].custname);   //prints items in the struct declared to the file customer orders
						fclose(fpointer);
						
					}
