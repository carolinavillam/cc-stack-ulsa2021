#pragma once
#include "Node.hh"
#include "School.hh"

class Stack
{
private:
  Node* head{nullptr};
public:
  Stack();
  ~Stack();
  Node* GetTop() const;
  void Pop(); 
  void Push(School*& school);
  bool IsEmpty() const;
  void Print();
};
