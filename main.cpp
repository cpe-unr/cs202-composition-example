#include <iostream>

class Stomach {
    bool functioning = true;
public:
    Stomach() {
        std::cout << "stomach constructor" << std::endl;
    }

    ~Stomach() {
        std::cout << "stomach destructor" << std::endl;
    }

    bool statusCheck() {
        return functioning;
    }

    void gotHit(){
        functioning = false;
    }

};

class Person {
    std::string name;
public:
    Person(const std::string &name) : name(name) {
        std::cout << "person constructor" << std::endl;
    }

    virtual ~Person() {
        std::cout << "person destructor" << std::endl;
    }

    const std::string &getName() const {
        return name;
    }

    void setName(const std::string &name) {
        Person::name = name;
    }

private:
    Stomach stomach;

public:
    bool isHealthy(){
        return stomach.statusCheck();
    }

    void punch() {
        stomach.gotHit();
    }
};



int main() {
    Person bountyGuy("Greef Karga");
    std::cout << bountyGuy.getName() << " is " << (bountyGuy.isHealthy() ? "ok" : "not doing well") << std::endl;
    bountyGuy.punch();
    std::cout << bountyGuy.getName() << " is " << (bountyGuy.isHealthy() ? "ok" : "not doing well") << std::endl;
    return 0;
}
