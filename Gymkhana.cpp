#include <iostream>
#include <string>

class Gymkhana;
class President;
class Vice_president;
class General_secretary;
class Secretary;
class Student;

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

    bool approval() {
        std::cout << "Secretary approval = ";
        std::cin >> permission;
        return permission;
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

    bool approval(Secretary secretary) {
        if (secretary.approval() == true) {
            std::cout << "General_Secretary approval = ";
            std::cin >> permission;
            return permission;
        }
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

    bool approval(General_secretary general_secretary, Secretary secretary) {
        if (general_secretary.approval(secretary) == true) {
            std::cout << "Vice_president approval = ";
            std::cin >> permission;
            return permission;
        }
    }
};

class President {
private:
    bool permission = false;

public:
    std::string name;
    President(std::string name) {
        this->name = name;
    }

    bool approval(Vice_president vice_president, General_secretary general_secretary, Secretary secretary) {
        if (vice_president.approval(general_secretary, secretary) == true) {
            std::cout << "president approval = ";
            std::cin >> permission;
            return permission;
        }
    }
};
