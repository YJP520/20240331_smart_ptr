#include <iostream>
#include <string>

#include "utility/smart_ptr.h"
using namespace yu::utility;
using namespace std;


class Test {
public:
  // Test() = default;
  Test() {
      std::cout << "[Test()] - New a Test()" << std::endl;
  }

  ~Test() {
      std::cout << "[~Test()] - Test() is deleted" << std::endl;
  }

  void name(const string & name) {
      m_name = name;
  }

  string name() const {
      return m_name;
  }

private:
  string m_name;
};


int main() {
    std::cout << "Hello, World!" << std::endl;

    auto p = new Test();
    // delete p;

    SmartPtr<Test> sp(p);

    sp->name("jack");
    cout << sp->name() << endl;

    return 0;
}
