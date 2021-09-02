#include<iostream>
#include "Stack.hh"

Stack::Stack()
{
}

Stack::~Stack()
{
}

Node* Stack::GetTop() const
{
  return head;
}

void Stack::Pop()
{
  if(IsEmpty())
  {
    std::cout << "Stack is empty" << std::endl;
  }
  else
  {
    Node* current{head};
    head = head->next;
    delete current;
  }
}

bool Stack::IsEmpty() const
{
  return head == nullptr;
}

void Stack::Push(School*& school)
{
  if(IsEmpty())
  {
    head = new Node(school);
  }
  else
  {
    Node* back{head};
    head = new Node(school);
    head->next = back;
  }
}

void Stack::Print()
{
  if(IsEmpty())
  {
    std::cout << "Stack is empty" << std::endl;
  }
  else
  {
    Node* current{head};

    std::cout << "Schools list:"<< std::endl;
    std::cout << std::endl;
    while (current)
    {
      std::cout << "School name: " << current->GetSchool()->GetName() << std::endl;
      std::cout << "Rector name: " << current->GetSchool()->GetRector() << std::endl;
      std::cout << "School students: " << current->GetSchool()->GetStudentsCount() << std::endl;
      std::cout << std::endl;
      current = current->next;
    }
  }
}