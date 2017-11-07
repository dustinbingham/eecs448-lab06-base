#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
using namespace std;
#include <vector>
#include "List.h"
#include "Node.h"
#include "LinkedListOfInts.h"

class TestClass
{
public:
  void TestFunction()
  {
    //Test is empty
    if(LinkedListOfInts.isEmpty()==true)
    {
      cout<<"Return Vale is True List is empty: test passed/n";
    }
    else
    {
      cout<<"Return Value is False and List is empty: test failed/n";
    }
    //Test addFront and finish testing is empty
    LinkedListOfInts.addFront(5);
    //test if something got added 1
    if(LinkedListOfInts.isEmpty()==false)
    {
      cout<<"Return Vale is false List is not empty: test passed/n";
    }
    else
    {
      cout<<"Return Value is true and List is not empty: test failed/n";
    }
    //test to see if something got added 2
    if(LinkedListOfInts.size()==1)
    {
      cout<<"Size = 1: Test Passed/n";
    }
    else
    {
      cout<<"Size !=1: test failed/n";
    }
    //Test to see if my value got entered
    if(LinkedListOfInts.search(5)==true)
    {
      cout<<"Int 5 was found in list: test passed/n";
    }
    else
    {
      cout<<"Int 5 not found in list: test failed/n";
    }
    //Test addBack, removeBack, and removeFront together
    LinkedListOfInts.addBack(6);
    if(LinkedListOfInts.size()==2)
    {
      cout<<"Size = 2: Test Passed/n";
    }
    else
    {
      cout<<"Size !=2: test failed/n";
    }
    if(LinkedListOfInts.search(6)==true)
    {
      cout<<"Int 6 was found in list: test passed/n";
    }
    else
    {
      cout<<"Int 6 not found in list: test failed/n";
    }
    LinkedListOfInts.removeBack();
    if(LinkedListOfInts.size()==1)
    {
      cout<<"Size = 1: Test Passed/n";
    }
    else
    {
      cout<<"Size !=1: test failed/n";
    }
    //Test to see if my value got entered
    if(LinkedListOfInts.search(5)==true)
    {
      cout<<"Int 5 was found in list: test passed/n";
    }
    else
    {
      cout<<"Int 5 not found in list: test failed/n";
    }
    LinkedListOfInts.removeFront();
    if(LinkedListOfInts.size()==0)
    {
      cout<<"Size = 0: Test Passed/n";
    }
    else
    {
      cout<<"Size !=0: test failed/n";
    }
    if(LinkedListOfInts.isEmpty()==true)
    {
      cout<<"Return Vale is True List is empty: test passed/n";
    }
    else
    {
      cout<<"Return Value is False and List is empty: test failed/n";
    }

  }
}
