#include <iostream>
//show menu function
void showMenu(){
 std::cout << "**********MENU**********" << std::endl;
 std::cout << "1. Check balance" << std::endl;
 std::cout << "2. Deposit" << std::endl;
 std::cout << "3. Withdraw" << std::endl;
 std::cout << "4. Exit" << std::endl;
 std::cout << "************************" << std::endl;
}

int main(){

    //check balance, deposit, withdraw, show menu
    int option; //integer variable
    float balance = 50000;
    do{
    showMenu(); //call showMenu function
    std::cout << "option: "; //print option for user to choose an option
    std::cin >> option; //caption user input as an option
    system("clear");
    //create a switch condition for the option variable
    switch(option){
        case 1:std::cout << "Balance is: " << balance << " NGN" << std::endl; break ;
        case 2:std::cout << "Deposit amount: ";
        double depositAmount;
        std::cin >> depositAmount;
        balance += depositAmount;
        std::cout << "New Balance is: " << balance << " NGN" << std::endl;
        break;

        case 3:std::cout << "Withdraw amount: ";
        double withdrawAmount;
        std::cin >> withdrawAmount;
        if (withdrawAmount <= balance)
            balance -=withdrawAmount;
        else
            std::cout << "Not enough money" << std::endl;
         std::cout << "New Balance is: " << balance << " NGN" << std::endl;
       
        break;
    
    
    
    }
    } while(option != 4);
    system ("pause>0");
}