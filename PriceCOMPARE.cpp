#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //Program 1 requests to calculate the store's selling price (in addition with sales tax)

    //Establish supplied constants
    double OG_price = 99.00;
    double MARKUP_perc = 60.0;
    double SALES_tax = 5.25;

    //Calculate the original price with the percentage of the mark-up to get the STORE'S PRICE
    double MARKUP_total = (MARKUP_perc / 100.0) * OG_price;
    double SELLING_PRICE = MARKUP_total + OG_price;

    //Calculate the selling price with the sales tax
    double SALES_total = (SALES_tax / 100) * SELLING_PRICE;

    //Calculate the final price by adding the selling price with the sales total
    double FINAL_price = SELLING_PRICE + SALES_total;

    //Display the needed results for this program
    cout << fixed << setprecision(2);
    cout << "Original price of the item: $" << OG_price << endl;
    cout << "Markup percentage: " << MARKUP_perc << "%" << endl;
    cout << "Store's selling price of the item: $" << SELLING_PRICE << endl;
    cout << "The amount of sales tax: $" << SALES_total << endl;
    cout << "The final price of the item with tax: $" << FINAL_price << endl;

    return 0;
}