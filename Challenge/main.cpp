#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    try {
        Checking_Account acc_larry {"Larry", 100.0};
        std::cout << "Created account successfully" << std::endl;
    } catch (const std::exception &ex) {
        std::cout << "Caught std::exception: " << ex.what() << std::endl;
    }
    
    try {
        Checking_Account acc_moe {"Moe", -100.0};
        std::cout << "Created account successfully" << std::endl;
    } catch (const std::exception &ex) {
        std::cout << "Caught std::exception: " << ex.what() << std::endl;
    }
    
    Checking_Account acc_curly {"Curly", 100.0};
    
    try {
        acc_curly.withdraw(50.0);
        std::cout << "Withdraw successful" << std::endl;
    } catch (const std::exception &ex) {
        std::cout << "Withdraw failed: " << ex.what() << std::endl;
    }
    
    try {
        acc_curly.withdraw(200.0);
        std::cout << "Withdraw successful" << std::endl;
    } catch (const std::exception &ex) {
        std::cout << "Withdraw failed: " << ex.what() << std::endl;
    }
        
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

