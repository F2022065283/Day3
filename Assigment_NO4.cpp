// Chaudhary Shoaib Hamza
// Ahmad Khan
// Ali Hamza
// marfowa kainaat
// Assignment No 4
#include <iostream>
using namespace std;
class Account {
protected:
    string firstName;
    string lastName;
    double currBalance;
public:
    Account(string fname, string lname, double curbalance):firstName(fname), lastName(lname), currBalance(curbalance) {}
    virtual string getAcctType(){
        return "Account";
    }
    virtual double debitTransaction(double debitamount) {
        currBalance -= debitamount;
        return currBalance;
    }
    virtual double creditTransaction(double creditamount) {
        currBalance += creditamount;
        return currBalance;
    }
    void print() {
        cout << firstName << ", " << lastName << " " << getAcctType() << " " << currBalance << endl;
    }
};
class CheckingAccount : public Account {
public:
    CheckingAccount(string fname, string lname, double curbalance): Account(fname, lname, curbalance) {}
    string getAcctType(){
        return "CheckingAccount";
    }
    double debitTransaction(double debitamount){
        double newBalance = Account::debitTransaction(debitamount);
        chargeFee();
        return newBalance;
    }
    double creditTransaction(double creditamount){
        double newBalance = Account::creditTransaction(creditamount);
        chargeFee();
        return newBalance;
    }
private:
    void chargeFee() {
        if (currBalance < 100.0)
            currBalance -= 10.0;
    }
};
class SavingsAccount : public Account {
private:
    int count;
public:
    SavingsAccount(string fname, string lname, double curbalance)
        : Account(fname, lname, curbalance), count(0) {}
    string getAcctType(){
        return "SavingsAccount";
    }
    double debitTransaction(double debitamount){
        if (count < 2) {
            count++;
            payInterest();
        }
        return Account::debitTransaction(debitamount);
    }
    double creditTransaction(double creditamount){
        if (count < 2) {
            count++;
            payInterest();
        }
        return Account::creditTransaction(creditamount);
    }
private:
    void payInterest() {
        currBalance *= 1.02; // Add 2% interest
    }
};
int main() {
    Account* c = new CheckingAccount("Ahmad", "Khan", 200.0);
    Account* s = new SavingsAccount("Shoaib", "Hamza", 1000.0);
    cout<<endl;
    c->print();
    s->print();
    cout<<endl;
    cout << "=== Test for CheckingAccount ===" << endl;
    cout << "(1) Debitting 150.00 -- The balance is " << c->debitTransaction(150.0) << endl;
    cout << "(2) Debitting 5.00 -- The balance is " << c->debitTransaction(5.0) << endl;
    cout << "(3) Crediting 200.00 -- The balance is " << c->creditTransaction(200.0) << endl;
    cout << "=== Final account information ===" << endl;
    c->print();
    cout<<endl<<endl;
    cout << "=== Test for SavingsAccount ===" << endl;
    cout << "(1) Debitting 150.00 -- The balance is " << s->debitTransaction(150.0) << endl;
    cout << "(2) Crediting 200.00 -- The balance is " << s->creditTransaction(200.0) << endl;
    cout << "(3) Debitting 5.00 -- The balance is " << s->debitTransaction(5.0) << endl;
    cout << "=== Final account information ===" << endl;
    s->print();
}