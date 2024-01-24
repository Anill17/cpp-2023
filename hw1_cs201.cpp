#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    double gross_income, expenses, profit, net_profit, vat;
    int share_holders,rate;
    cout << "This accounting program calculates the state taxes and dividends for the company shareholders." << endl;
    cout << "Please enter the name of the company: ";
    cin >> name;
    cout << "Please enter the gross income of " << name << ": ";
    cin >> gross_income;
    if (gross_income <= 0){
        cout << "Invalid input for gross income (Gross Income must be greater than 0)." << endl << "Stopping calculations...";
        return 0;
        
    }
    
    cout << "Please enter expenses of " << name << ": ";
    cin >> expenses;
    if (expenses < 0){
        cout << "Invalid input for expenses (Expenses must be greater than or equal 0)." << endl << "Stopping calculations...";
        return 0;
        
    }
    cout << "Please enter the number of shareholders: ";
    cin >> share_holders;
    if (share_holders < 1){
        cout << "Invalid input for number of shareholders (Number of shareholders must be greater than or equal to 1)." << endl << "Stopping calculations..." << endl;
        return 0;
    }
    else{
        cout << endl;
    }
    cout << "*********** " << name << " Financial Report **********" << endl << endl;
    
    vat = (gross_income * 18) / 100;
    profit = gross_income - (vat + expenses);
    
    if (profit == 0){
        cout << "Net Profit: " << profit << " TL. " << "(Break Even)"<< endl;
        cout << "VAT: " << vat << " TL." << endl;
        cout << "Corporate Tax: " << 0 << " TL." << endl << endl;
        cout << "Capital Increase: " << 0 << " TL." << endl;
        cout << share_holders << " shareholders will have a share of: " << 0 << " TL." << endl;
        
    }
    else if (profit < 0){
        cout << "Net Loss: " << profit << " TL. "<< endl;
        cout << "VAT: " << vat << " TL." << endl;
        cout << "Corporate Tax: " << 0 << " TL." << endl << endl;
        cout << "Capital Increase: " << 0 << " TL." << endl;
        cout << share_holders << " shareholders will have a share of: " << 0 << " TL." << endl;
        
    }
    else {
        if (profit > 50000){
             rate = 25;
        }
        else if (profit <= 50000 && profit > 25000){
             rate = 20;
        }
        else if (profit <= 25000 && profit > 10000){
             rate = 15;
        }
        else {
             rate = 10;
        }
        
        double corporate_tax = (profit * rate) / 100;
        net_profit = profit - corporate_tax;
        cout << "Net Profit: " << net_profit << " TL. " << endl;
        cout << "VAT: " << vat << " TL." << endl;
        cout << "Corporate Tax: " << corporate_tax << " TL." << endl << endl;
        cout << "Capital Increase: " << net_profit / 2 << " TL." << endl;
        cout << share_holders << " shareholders will have a share of: " << (((net_profit / 2) / share_holders) * 85) / 100 << " TL." << endl;
        
        
    }
        
        
    
    
        
    
    
    
    
    
    return 0;
}
