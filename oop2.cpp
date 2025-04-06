#include <iostream>
#include <string>
using namespace std;

class Pizza {
    private:
    string name;
    string size;
    double price;
    double discount;

    public:
    double discountedPrice(){
        double discounted_price = price - (discount * price);
        return discounted_price;
    }
    void setData(string n, string s, double p, double d){
        name = n;
        size = s;
        price = p;
        discount = d; // a little confusing but you might get it
    }
    void displayInfo(){
        cout << "Pizza Information" << endl;
        cout << "Name: " << name << endl;
        cout << "Size: " << size << endl;
        cout << "Original Price: " << price << endl;
        cout << "Discounted Price: " << discountedPrice() << endl;
    }
    void displaySize() {
        string size;
        if (size == "Small" || size == "small") {
            cout << "Pizza Size: Small" << endl;
        }
        else if (size == "Medium" || size == "medium") {
            cout << "Pizza Size: Medium" << endl;
        }
        else {
            cout << "Pizza Size: Large" << endl;
        }
    }
};

int main() { 
    Pizza pizza_1, pizza_2, pizza_3, pizza_4, pizza_5, pizza_6;
    pizza_1.setData("Pepperoni", "Small", 500, 0.1);
    pizza_2.setData("Dip Spinach", "Medium", 600, 0.2);
    pizza_3.setData("BBQ Chicken", "Large", 700, 0.15);
    pizza_4.setData("Overload", "Small", 400, 0.05);
    pizza_5.setData("Hawaiian", "Medium", 650, 0.25);
    pizza_6.setData("4-Cheese", "Large", 800, 0.3);

    pizza_2.displayInfo(); //only outputs pizza_2
    return 0;
}