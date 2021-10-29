//NOTE: Must continue loop for next customer after total is displayed.
//algorithm design
//user manual to instruct customers on how to use the system to order meals.
//team collaboration

#include<iostream>

using namespace std;


void formatter(void){
    
    int i;

    for(i = 0; i < 3; i++){

        cout <<"---------";    
    
    }
    cout << endl;
}//ENDFUNC

void spacer(void){

    int i;

    for(i = 0; i <1; i ++){
        
         cout << endl;

    }
}//ENDFUNC

void clearscr(void){


    int i;

    for(i = 0; i < 30; i++){

        cout << endl;    

    }

}//ENDFUNC

void DisplayMenu(void){

    cout <<"MENU" << endl;    
    cout <<"Number 1 : Soda : $1.99" << endl;
    cout <<"Number 2 : Cheeseburger : $3.00" << endl;
    cout <<"Number 3:  Fries : $1.00" << endl; 
    cout <<"Enter an item number 1, 2, 3. [ENTER 0 TO CHECKOUT]" << endl; 
}//ENDFUNC

/*int checkout(checkprice){
    double checkprice;
    spacer();
    cout <<"Total price is: [ $" << price << " ]" << endl;
    spacer();
}
*/

//MAIN 
int main(void)
{

    //VAR
    double price = 0;
    int item;

    
while(true){

    while(true){
    
       // clearscr();
        formatter();
        
        //MENU DISPLAY
        DisplayMenu();

        spacer();

        //INPUT DISPLAY
        cout <<"--->>> ";    
        cin >> item;
        
        
        if(item == 1){
        
            price = price + 1.99;
            
        }else if(item == 2){


            price = price + 3.00;


        }else if(item == 3){


            price = price + 1.00;

        }else if (item == 0){
        
            break;

        }else{
            
            cout << "ERROR: Enter a valid input. MUST BE 1,2,3 or 0" << endl;
        }

    
    }//ENDWHILE

    spacer();

    cout <<"Total price is: [ $" << price << " ]" << endl;

    spacer();

    //checkout(price);
    
    price = 0;    
}//ENDWHILE 2

return 0;

}//END MAIN
