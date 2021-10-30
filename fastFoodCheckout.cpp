//NAME: Donald McLaughlin
//Assignment: Project 1
//COURSE: CSCI 1010
//SUMMARY: Fastfood checkout system.

#include<iostream>
#include<iomanip> //setprecision() and fixed
using namespace std;

//displays bar
void formatter(void){
    
    int i;

    for(i = 0; i < 3; i++){

        cout <<"---------";    
    
    }
    cout << endl;
}//ENDFUNC

//adds newlines
void spacer(void){

    int i;

    for(i = 0; i <1; i ++){
        
         cout << endl;

    }
}//ENDFUNC

//displays menu of items with prices
void DisplayMenu(void){

    cout <<"MENU" << endl;    
    cout <<"Number 1 : Soda : $1.99" << endl;
    cout <<"Number 2 : Cheeseburger : $3.00" << endl;
    cout <<"Number 3:  Fries : $1.00" << endl; 
    cout <<"Enter an item number 1, 2, 3. [ENTER 0 TO CHECKOUT]" << endl;
     
}//ENDFUNC



//MAIN 
int main(void)
{

    //VAR
    double price = 0;
    int item, numItem;

    
    while(true){

        while(true){
    
            //clearscr();
            formatter();
        
            //MENU DISPLAY
            DisplayMenu();

            spacer();

            //INPUT DISPLAY
            cout <<"--->>> ";    
            cin >> item;
        
            //Get num of items 
            if (item != 0){ 
                cout <<"Enter the number of items:" << endl;
                cout <<"--->>> ";
                cin >> numItem;
            }
        
            if(item == 1){
        
                price = numItem * (price + 1.99);
            
            }else if(item == 2){


                price = numItem * (price + 3.00);


            }else if(item == 3){


                price = numItem * (price + 1.00);

            }else if (item == 0){
                break;

            }else{
            
                cout << "ERROR: Enter a valid input. MUST BE 1,2,3 or 0" << endl;
            }

    
        }//ENDWHILE

    spacer();
    
    //DISPLAY PRICE 
    cout <<"Total price is: [ $" << setprecision(2) << fixed << price << " ]" << endl;
    cout <<"Thank you!!!" << endl;
    spacer();

    
    
    price = 0;    
}//ENDWHILE 2

return 0;

}//END MAIN
