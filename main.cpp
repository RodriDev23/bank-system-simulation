#include <iostream>
#include <ostream>

void checkUser(std::string userName, std::string password) {
    if (userName == "jumpman23" && password == "123456") {
        std::cout << "Welcome User, what do you need to do?" << std::endl;
    } else {
        std::cout << "Incorrect UserName or password" << std::endl;
        exit(1); // Exit the program if login fails
    }
}

void displayOptions() {
    std::cout << "Options:" << std::endl;
    std::cout << "1. Withdraw" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Check Account" << std::endl;
    std::cout << "4. Exit" << std::endl;
}

void processOption(int option) {
    switch (option) {
        case 1:
            std::cout << "You selected option 1: Withdraw" << std::endl;
            break;
        case 2:
            std::cout << "You selected option 2: Deposit" << std::endl;
            break;
        case 3:
            std::cout << "You selected option 3: Check Account" << std::endl;
            break;
        case 4:
            std::cout << "Exiting the program." << std::endl;
            break;
        default:
            std::cout << "Invalid option. Please try again." << std::endl;
            break;
    }
}


int optionsToTheUser(int option) {
    if (option == 1) {
        int withdrawMoney;
        std::cout << "How much money do you want to withdraw? ";
        std::cin >> withdrawMoney;
        std::cout << "Success! You withdrew " << withdrawMoney << "$." << std::endl;
        return withdrawMoney;
    } else if(option == 2){
       int deposit;
        std::cout << "How much money do you want to deposit? ";
        std::cin >> deposit;
        std::cout << "Success! You deposit " << deposit << "$." << std::endl;
       return deposit;
  } else if(option == 3){
       int moneyAccount = 3000;
       std::cout << "Your Account Have " << moneyAccount << "$" << std::endl;
      return moneyAccount; 
    } else if(option == 4){
    std::cout << "You exit the program with succes!";
      return 0;
   }
  return 0;
}

int main() {
    std::string userName;
    std::string password;
    std::cout << "Enter Your userName: ";
    std::cin >> userName;
    std::cout << "Enter Your password: ";
    std::cin >> password;
    checkUser(userName, password);
    int option;
    do {
        displayOptions();
        std::cout << "Enter your choice (1-4): ";
        std::cin >> option;
        processOption(option);
        optionsToTheUser(option);
    } while (option != 4);

    return 0;
}

