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
public:
    std::string name;
    bool permission = false;

    President(std::string name) {
        this->name = name;
    }
};

class Vice_president {
public:
    std::string name;
    bool permission = false;

    Vice_president(std::string name) {
        this->name = name;
    }
};

class General_secretary {
public:
    std::string name;
    Society type;
    bool permission = false;

    General_secretary(std::string name, Society type) {
        this->name = name;
        this->type = type;
    }
};

class Secretary {
public:
    std::string name;
    Society Societyname;
    bool permission = false;

    Secretary(std::string name, Society Societyname) {
        this->name = name;
        this->Societyname = Societyname;
    }
};