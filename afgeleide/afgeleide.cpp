// afgeleide.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class gebouw {
protected:
    float groppervl;
public:
    gebouw(float opp = 500.0) : groppervl(opp) {
        cout << "Constructor van 'gebouw' aangeroepen." << endl;
    }
    ~gebouw() {
        cout << "Destructor van 'gebouw' aangeroepen." << endl;
    }
    void printgebouw()const {
        cout << "Gebouw, " << groppervl << " m2 grondopp." << endl;
    }
};

class huis : public gebouw {
public:
    huis(int kamers = 3, float opp = 100.0) : gebouw(opp), nslkam(kamers) {
        cout << "Constructor van 'huis' aangeroepen." << endl;
    }
    ~huis() {
        cout << "Destructor van 'huis' aangeroepen." << endl;
    }
    void printhuis()const {
        cout << "Huis met " << nslkam << " slaapkamers en " << groppervl << " m2 grondopp." << endl;
    }
private:
    int nslkam;
};

int main() {
    gebouw G1;
    gebouw G2(1000);
    huis H1;
    huis H2(5, 400);
    cout << "G1: ";  G1.printgebouw(); cout << endl;
    cout << "G2: "; G2.printgebouw(); cout << endl;
    cout << "H1: "; H1.printgebouw(); H1.printhuis(); cout << endl;
    cout << "H2: "; H2.printgebouw(); H2.printhuis();  cout << endl;
    return 0;
}