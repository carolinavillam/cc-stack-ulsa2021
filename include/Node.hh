#pragma once
#include "School.hh"

class Node
{
private:
  School* school{nullptr};
public:
  Node* next{nullptr};
  Node(School*& school);
  ~Node();

  School* GetSchool() const;
};
