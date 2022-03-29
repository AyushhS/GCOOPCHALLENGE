#include <iostream>
#include <string>
#include "Gymkhana.cpp"

class Gymkhana_functions {
    public:
        void budget_approval(President president, Vice_president vice_president, General_secretary general_secretary, Secretary secretary) {
            bool approval = president.approval(vice_president, general_secretary, secretary);
            if (approval == true) {
                std::cout << "Budget approved";
            }
            else {
                std::cout << "Budget not approved";
            }
        }
};