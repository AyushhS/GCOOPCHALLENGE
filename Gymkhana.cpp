#include <iostream>
#include <string>
#include "society_classes.cpp"

class Gymkhana;
class President;
class Vice_president;
class General_secretary;
class Secretary;
class Student;

class President {
private:
    bool permission = false;

public:
    std::string name;
    President(std::string name) {
        this->name = name;
    }
};

class Vice_president {
private:
    bool permission = false;

public:
    std::string name;

    Vice_president(std::string name) {
        this->name = name;
    }
};

class General_secretary {
private:
    bool permission = false;

public:
    std::string name;
    std::string type;

    General_secretary(std::string name, std::string type) {
        this->name = name;
        this->type = type;
    }

};

class Secretary {
private:
    bool permission = false;

public:
    std::string name;
    std::string Societyname;

    Secretary(std::string name, std::string Societyname) {
        this->name = name;
        this->Societyname = Societyname;
    }


};

class Student {
    public:
        std::string name;
        int year;
        std::string branch;

        Student(std::string name, int year, std::string branch) {
            this->name = name;
            this->year = year;
            this->branch = branch;
        }
};