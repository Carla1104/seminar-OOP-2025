//
// Created by user on 3/6/2025.
//
#include <iostream>

class Dog {
  public:
    bool eat() {
      std::cout<<"Dog is eating";
      return true;
    }

    int set_age(int new_age) {
      age = new_age;
      return age;
    }

    int get_age() {
      return age;
    }
  private:
    int age;
};
int main(){
  Dog dog1 = Dog();
  dog1.eat();
  dog1.set_age(10);
  dog1.get_age();
  //dog1.age = 3;
  //dog1.get_age();
  std::cout<<dog1.get_age();
  return 0;
}
