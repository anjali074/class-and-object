//2nd

#include <iostream>
#include <string>

class Staff {
 public:
  Staff(const std::string &name) : name_(name) {}
  virtual void display() const {
    std::cout << "Staff: " << name_ << std::endl;
  }
  virtual ~Staff() {}

 private:
  std::string name_;
};

class Technical : public Staff {
 public:
  Technical(const std::string &name) : Staff(name) {}
};

class Department : public Technical {
 public:
  Department(const std::string &name, const std::string &field)
      : Technical(name), field_(field) {}
  virtual void display() const {
    std::cout << "Technical Staff - Field: " << field_ << " ";
    Technical::display();
  }

 protected:
  std::string field_;
};

class CSE : public Department {
 public:
  CSE(const std::string &name) : Department(name, "CSE") {}
};

class Civil : public Department {
 public:
  Civil(const std::string &name) : Department(name, "Civil") {}
};

class EEE : public Department {
 public:
  EEE(const std::string &name) : Department(name, "EEE") {}
};

class Mechanical : public Department {
 public:
  Mechanical(const std::string &name) : Department(name, "Mechanical") {}
};

class NonTechnical : public Staff {
 public:
  NonTechnical(const std::string &name) : Staff(name) {}
};

class SecurityGuard : public NonTechnical {
 public:
  SecurityGuard(const std::string &name) : NonTechnical(name) {}
};

class LabAssistant : public NonTechnical {
 public:
  LabAssistant(const std::string &name) : NonTechnical(name) {}
};

int main() {
  Staff *ptr[8];
  ptr[0] = new CSE("John");
  ptr[1] = new Civil("Mike");
  ptr[2] = new EEE("Steve");
  ptr[3] = new Mechanical("Bob");
  ptr[4] = new SecurityGuard("Jane");
  ptr[5] = new LabAssistant("Emily");
  ptr[6] = new NonTechnical("Anna");
  ptr[7] = new Staff("David");

  for (int i = 0; i < 8; i++) {
    ptr[i]->display();
  }

  return 0;
}



