// ex5_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

template<typename T>
struct node {
    node<T>* next;
    T value;
};

template<typename T>
class linkedlist {
public:
    linkedlist() : head(NULL) {};
    ~linkedlist() {
        destruct(head);
    }
    void push_front(T x) {
        node<T>* front = new node<T>;
        front->next = head;
        front->value = x;
        head = front;
    }
    friend ostream& operator<<(ostream& os, const linkedlist& l) {
        os << "[";
        print(os, l.head);
        os << "]";
        return os;
    }
private:
    node<T>* head;
    void destruct(node<T>* n) {
        if (n) {
            destruct(n->next);
            delete n;
        }
    }
    static ostream& print(ostream& os, node<T>* n) {
        if (n) {
            os << n->value;
            if (n->next) cout << ",";
            print(os, n->next);
        }
        return os;
    }
};

int main()
{
    linkedlist<string> L;
    L.push_front("mies");
    L.push_front("noot");
    L.push_front("aap");
    cout << L << endl;
}