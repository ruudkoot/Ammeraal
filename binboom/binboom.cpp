// binboom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct node {
    node(const string& s = "", int n = 0) {
        naam = s; nummer = n;
        pLinks = pRechts = NULL;
    }
    string naam;
    int nummer;
    node* pLinks, * pRechts;
};

class boom {
public:
    boom() : wortel(NULL) {}
    ~boom() { ruimop(wortel); }
    void print()const { pr(wortel); }
    void voegtoe(const string& s, int nr);
    node* zoek(const string& s)const;
private:
    node* wortel;
    void ruimop(node* p) {
        if (p != NULL) {
            ruimop(p->pLinks);
            ruimop(p->pRechts);
            delete p;
        }
    }
    void pr(const node* p)const;
};

void boom::voegtoe(const string& s, int nr) {
    if (wortel == NULL)
        wortel = new node(s, nr);
    else {
        node* p = wortel;
        while (true) {
            if (s < p->naam) {
                if (p->pLinks != NULL)
                    p = p->pLinks;
                else {
                    p->pLinks = new node(s, nr);
                    break;
                }
            }
            else if (s > p->naam) {
                if (p->pRechts != NULL)
                    p = p->pRechts;
                else {
                    p->pRechts = new node(s, nr);
                    break;
                }
            }
        }
    }
}

void boom::pr(const node* p)const {
    if (p) {
        pr(p->pLinks);
        cout << p->nummer << " " << p->naam << endl;
        pr(p->pRechts);
    }
}

node* boom::zoek(const string& s)const {
    node* p = wortel;
    while (p != NULL) {
        if (s < p->naam)p = p->pLinks;
        else if (s > p->naam)p = p->pRechts;
        else break;
    }
    return p;
}

int main()
{
    boom t;
    t.voegtoe("Hendrikse", 8375);
    t.voegtoe("Karelse", 7732);
    t.voegtoe("Jansen", 4632);
    t.voegtoe("Gerritsen", 9922);
    t.voegtoe("Pietersen", 6229);
    t.voegtoe("Anthonissen", 7997);
    node* p = t.zoek("Jansen");
    if (p == NULL)
        cout << "Jansen niet gevonden";
    else
        cout << "Jansen heeft nummer " << p->nummer << endl;
    cout << "Het volledige telefoonboek (binaire zoekboom):" << endl;
    t.print();
    return 0;
}
