#include <iostream>
#include <string>
using namespace std;

class People {
    private: // what even is the purpose of this

    string name;
    int age;
    public: 
    void setName(string n, int a) {
        name = n;
        age = a;
    }
    void getName() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    People p1, p2, p3;
    p1.setName("Kiryu Kazuma", 37);
    p2.setName("Goro Majima", 41);
    p3.setName("Akira Nishikiyama", 37);

    p1.getName();
    cout << endl;
    p2.getName();
    cout << endl;
    p3.getName();
    return 0;  
}