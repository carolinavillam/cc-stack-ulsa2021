#include "Node.hh"

Node::Node(School*& school)
{
  this->school = school;
}

Node::~Node()
{
}

School* Node::GetSchool() const
{
  return school;
}