#include<iostream>
#include "School.hh"
#include "Stack.hh"

int main()
{
  School* school1{new School("Instituto Tecnologico de Sonora", "Dr. Jesus Hector Hernandez Lopez", 1600)};
  School* school2{new School("Instituto Tecnologico y de Estudios Superiores de Monterrey", "David Garza", 1800)};
  School* school3{new School("Universidad La Salle Noroeste", "Dr. Salvador Valle Gamez", 1300)};
  School* school4{new School("Universidad Nacional Autonoma de Mexico", "Enrique Graue Wiechers", 4300)};

  Stack* stack{new Stack()};
  stack->Push(school1);
  stack->Push(school2);
  stack->Push(school3);
  stack->Push(school4);
  stack->Print();

  stack->Pop();
  //stack->Pop();
  //stack->Pop();
  //stack->Pop();

  stack->Print();

  std::cout << "School top name: " << stack->GetTop()->GetSchool()->GetName() << std::endl;

  std::cin.get();

  delete stack;
  return EXIT_SUCCESS;//es igual que poner return 0, esto es de c++
}