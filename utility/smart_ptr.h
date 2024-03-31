# pragma once

namespace yu {
  namespace utility {
    template <typename T>
    class SmartPtr {
    public:
      SmartPtr() : m_data(nullptr) {}
      explicit SmartPtr(T * data) : m_data(data) {}

      ~SmartPtr() {     // 析构函数 自动delete
          if (m_data != nullptr) {
              delete m_data;
              m_data = nullptr;
          }
      }

      T * operator -> () {  // 运算符重载 ->
          return m_data;
      }

      T * operator * () {   // 运算符重载 *
          return *m_data;
      }

    private:
      T * m_data;
    };
  }
}