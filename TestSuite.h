#ifndef TESTFORLIST_H
#define TESTFORLIST_H

#include <iostream>
#include <string>
#include "Test.h"
#include <vector>
#include "LinkedListOfInts.h"

using namespace std;

class TestSuite: public Test
{
public:
  TestSuite(int size);
  void run();

  // a:Functions to test:
  // 1.isEmpty;
  // 2.size;
  // 3.search;
  // 4.toVector
  // 5.add Front/Back; Remove Front/Back;

  // b:Different situations to test:
  // 1.empty list;
  // 2.fixed size of list; [the size of list is picked when code]
  // 3.random-picked size of list; [the size of list and the content in the list is picked by calling random function]

  // c:Ways of verification:
  // 1.one function tested at a time;
  // 2.multiple funtcion tested at a time;

  // Test for size():
  bool test1(); // size returns 0 on an empty list;

  // Test for isEmpty():
  bool test2(); // isEmpty returns true on an empty list;
  bool test3(); // isEmpty returns false after one add;

  // Tests for addFront, addBack, removeFront, removeBack:
  bool test4(); // size returns correst after 1 addFront;
  bool test5(); // size returns correct after 1 addBack;
  bool test6(); // removeback returns false on empty list;
  bool test7(); // removeFront returns false on empty list;
  bool test8(); // size returns correct after multiple addFront;
  bool test9(); // size returns correct after multiple addBack;
  bool test10(); // size returns correct after adds and removeFront;
  bool test11(); // size returns correct after adds and removeBack;
  bool test12(); // size returns 0 after remove everything in the list with removeBack;
  bool test13(); // size returns 0 after remove everything in the list with removeFront;
  bool test14(); // order preserved after addFront;
  bool test15(); // order preserved after addBack;
  bool test16(); // order preserved after removeFront
  bool test17(); // order preserved after removeBack;

  // Test for search():
  bool test18(); // search returns false on an empty list;
  bool test19(); // search returns false when value is not in the list;
  bool test20(); // serach return true for a large list

  // Tests for toVector():
  bool test21(); // toVector return empty vector on an empty list;
  bool test22(); // toVector creates vector with the content of large list;



private:
  void loadList(const vector<int>& vec, LinkedListOfInts& list) const;
};
#endif
