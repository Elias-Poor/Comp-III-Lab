//
// Created by elias on 9/11/2024.
//


#include <iostream>




int get_user_inputs();

int calculate_values();

void display_calculated_values(double annual_interest, double total_loan_amount, int months, double monthly_payment);



int main() {

    double annual_interest_rate;
    int loan_amount;
    int loan_period;


    int loan_amount_output;
    int monthly_payment;


    display_calculated_values(15, 1176.47, 12, 98.04);

    return 0;


}


void display_calculated_values(double annual_interest, double total_loan_amount, int months, double monthly_payment) {

    std::cout << "The total amount of your loan (including interest at " << annual_interest << "% per annum) is $" << total_loan_amount << "." << std::endl;
    std::cout << "Your monthly payment for " << months << "months will be $" << monthly_payment << "." << std::endl;
}






