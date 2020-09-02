// ex7_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class document {
public:
    friend std::ostream& operator<<(std::ostream& os, document const& d) {
        return d.print(os);
    }
private:
    virtual std::ostream& print(std::ostream&)const = 0;
};

class brief : public document {
public:
    brief(std::string a, std::string g) : afzender(a), geadresseerde(g) {}
private:
    std::string afzender, geadresseerde;
    std::ostream& print(std::ostream& os)const {
        return os << afzender << " " << geadresseerde;
    }
};

class boek : public document {
public:
    boek(std::string u, std::string s) : uitgever(u), schrijver(s) {}
private:
    std::string uitgever, schrijver;
    std::ostream& print(std::ostream& os)const {
        return os << uitgever << " " << schrijver;
    }
};

int main() {
    std::cout << brief("Ruud", "Claire") << std::endl;
    std::cout << boek("OUP", "Koot") << std::endl;
}
