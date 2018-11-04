#include "TestSuite.h"

TestSuite::TestSuite(int size): Test(size)
{
}

void TestSuite::run()
{
  cerr << endl;
  cerr << "=========================" << endl;
	cerr << "   RUNNING TEST SUITE    " << endl;
	cerr << "=========================" << endl;

  vector<int> failed;
  int m_correct = 0;

  if (test1())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(1);
  }

  if (test2())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(2);
  }

  if (test3())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(3);
  }

  if (test4())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(4);
  }
  if (test5())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(5);
  }

  if (test6())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(6);
  }

  if (test7())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(7);
  }

  if (test8())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(8);
  }

  if (test9())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(9);
  }

  if (test10())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(10);
  }

  if (test11())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(11);
  }

  if (test12())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(12);
  }

  if (test13())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(13);
  }

  if (test14())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(14);
  }

  if (test15())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(15);
  }

  if (test16())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(16);
  }

  if (test17())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(17);
  }

  if (test18())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(18);
  }

  if (test19())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(19);
  }

  if (test20())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(20);
  }

  if (test21())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(21);
  }

  if (test22())
  {
    m_correct++;
  }
  else
  {
    failed.push_back(22);
  }

  cerr << endl;
  cerr << "=========================" << endl;
  cerr << "      END TEST SUITE     " << endl;
  cerr << "=========================" << endl;

  cerr << endl;
  cerr << "=======TEST REPORT======="   << endl;
  cerr << m_correct << "/22 tests passed." << endl;
  cerr << "Tests that failed: ";
  printVector(failed);
  cerr << endl;
  cerr << endl;

}

void TestSuite:: loadList(const vector<int>& vec, LinkedListOfInts& list) const
{
  for (size_t i = 0; i < vec.size(); i++)
  {
    list.addBack(vec[i]);
  }
}

bool TestSuite:: test1()
{
  bool isPassed = false;
  LinkedListOfInts list;

  if (list.size() == 0)
  {
    isPassed = true;
  }

  printTestMessage("size of an empty list is 0");
  printPass(isPassed);
  if (!isPassed)
  {
    printExpectedSize(0,list.size());
  }

  return (isPassed);
}

bool TestSuite:: test2()
{
  bool isPassed = false;
  LinkedListOfInts list;

  if (list.isEmpty())
  {
    isPassed = true;
  }

  printTestMessage("isEmpty returns true on an empty list");
  printPass(isPassed);

  return (isPassed);
}

bool TestSuite:: test3()
{
  bool isPassed = false;
  LinkedListOfInts list;

  list.addFront(1);

  if (!list.isEmpty())
  {
    isPassed = true;
  }

  printTestMessage("isEmpty returns false after one add");
  printPass(isPassed);

  return (isPassed);

}

bool TestSuite:: test4()
{
  bool isPassed = false;
  LinkedListOfInts list;
  list.addFront(1);

  if (list.size() == 1)
  {
    isPassed = true;
  }

  printTestMessage("size returns correct value after 1 addFront");
  printPass(isPassed);
  if (!isPassed)
  {
    printExpectedSize(1,list.size());
  }

  return (isPassed);
}

bool TestSuite:: test5()
{
  bool isPassed = false;
  LinkedListOfInts list;
  list.addBack(7);

  if (list.size() == 1)
  {
    isPassed = true;
  }

  printTestMessage("size returns correct value after 1 addBack");
  printPass(isPassed);
  if (!isPassed)
  {
    printExpectedSize(1,list.size());
  }

  return (isPassed);
}

bool TestSuite:: test6()
{
  bool isPassed = false;
  LinkedListOfInts list;

  isPassed = !list.removeBack();

  printTestMessage("removeBack returns false on empty list");
  printPass(isPassed);

  return (isPassed);
}

bool TestSuite:: test7()
{
  bool isPassed = false;
  LinkedListOfInts list;

  isPassed = !list.removeFront();

  printTestMessage("removeFront returns false on empty list");
  printPass(isPassed);

  return (isPassed);
}

bool TestSuite:: test8()
{
  bool isPassed = false;
  LinkedListOfInts list;

  srand((unsigned int)(time(NULL)));
  int random = (rand() % (100));

  for (int i = 0; i < random; i++)
  {
    list.addFront(i);
  }

  if (list.size() == random)
  {
    isPassed = true;
  }

  printTestMessage("size returns correct after multiple addFront");
  printPass(isPassed);
  if (!isPassed)
  {
    printExpectedSize(random,list.size());
  }

  return (isPassed);
}

bool TestSuite:: test9()
{
  bool isPassed = false;
  LinkedListOfInts list;

  srand((unsigned int)(time(NULL)));
  int random = (rand() % (100));

  for (int i=0; i < random; i++)
  {
    list.addBack(i);
    //flush()?
  }

  if (list.size() == random)
  {
    isPassed = true;
  }

  printTestMessage("size returns correct after multiple addBack");
  printPass(isPassed);
  if (!isPassed)
  {
    printExpectedSize(random,list.size());
  }

  return (isPassed);
}

bool TestSuite:: test10()
{
  bool isPassed = false;
  LinkedListOfInts list;
  int count = 0;

  srand((unsigned int)(time(NULL)));
  int random = (rand() % (100));

  for (int i = 0; i < random; i++)
  {
    if (i%2 == 0)
    {
      list.addFront(i);
      count++;
    }
    else if (i%3 == 0)
    {
      list.addBack(i);
      count++;
    }
    else
    {
      list.removeFront();
      count--;
    }
  }

  if (list.size() == count)
  {
    isPassed = true;
  }

  printTestMessage("size returns correct after adds and removeFront");
  printPass(isPassed);
  if (!isPassed)
  {
    printExpectedSize(count,list.size());
  }

  return (isPassed);
}

bool TestSuite:: test11()
{
  bool isPassed = false;
  LinkedListOfInts list;
  int count = 0;

  srand((unsigned int)(time(NULL)));
  int random = (rand() % (100));

  for (int i = 0; i < random; i++)
  {
    if (i%2 == 0)
    {
      list.addBack(i);
      count++;
    }
    else if (i%3 == 0)
    {
      list.addFront(i);
      count++;
    }
    else
    {
      list.removeBack();
      count--;
    }
  }

  if (list.size() == count)
  {
    isPassed = true;
  }

  printTestMessage("size returns correct after adds and removeBack");
  printPass(isPassed);
  if (!isPassed)
  {
    printExpectedSize(count,list.size());
  }

  return (isPassed);
}

bool TestSuite:: test12()
{
  bool isPassed = false;
  LinkedListOfInts list;
  vector<int> vec;

  randomFill(vec,m_size);
  loadList(vec,list);

  for (int i = 0; i < m_size; i++)
  {
    list.removeBack();
  }

  if (list.size() == 0)
  {
    isPassed = true;
  }

  printTestMessage("size returns 0 after remove everything in the list with removeBack");
  printPass(isPassed);
  if (!isPassed)
  {
    printExpectedSize(0,list.size());
  }

  return (isPassed);
}

bool TestSuite:: test13()
{
  bool isPassed = false;
  LinkedListOfInts list;
  vector<int> vec;

  randomFill(vec,m_size);
  loadList(vec,list);

  for (int i = 0; i < m_size; i++)
  {
    list.removeFront();
  }

  if (list.size() == 0)
  {
    isPassed = true;
  }

  printTestMessage("size returns 0 after remove everything in the list with removeFront");
  printPass(isPassed);
  if (!isPassed)
  {
    printExpectedSize(0,list.size());
  }

  return (isPassed);
}

bool TestSuite:: test14()
{
  bool isPassed = false;
  LinkedListOfInts list;
  vector<int> test;
  vector<int> vec;

  for (int i = 0; i < m_size; i++)
  {
    list.addFront(i);
    vec.push_back(m_size-1-i);
  }

  test = list.toVector();
  isPassed = isSortedDescending(test);

  printTestMessage("order preserved after addFront");
  printPass(isPassed);
  if (!isPassed)
  {
    printExpectedVec(vec,test);
  }

  return(isPassed);
}

bool TestSuite:: test15()
{
  bool isPassed = false;
  LinkedListOfInts list;
  vector<int> test;
  vector<int> vec;

  for (int i = 0; i < m_size; i++)
  {
    list.addBack(i);
    vec.push_back(i);
  }

  test = list.toVector();
  isPassed = isSortedAscending(test);

  printTestMessage("order preserved after addBack");
  printPass(isPassed);
  if (!isPassed)
  {
    printExpectedVec(vec,test);
  }

  return(isPassed);
}

bool TestSuite:: test16()
{
  bool isPassed = false;
  LinkedListOfInts list;
  vector<int> vec;
  vector<int> test;

  randomFill(vec,m_size);
  loadList(vec,list);

  srand((unsigned int)(time(NULL)));
  int random = (rand() % (m_size));

  for (int i = 0; i < random; i++)
  {
    list.removeFront();
    vec.erase(vec.begin());
  }

  test = list.toVector();

  if (test == vec)
  {
    isPassed = true;
  }

  printTestMessage("Order preserved after removeFront");
  printPass(isPassed);
  if (!isPassed)
  {
    printExpectedVec(vec,test);
  }

  return(isPassed);
}

bool TestSuite:: test17()
{
  bool isPassed = false;
  LinkedListOfInts list;
  vector<int> vec;
  vector<int> test;

  randomFill(vec,m_size);
  loadList(vec,list);

  srand((unsigned int)(time(NULL)));
  int random = (rand() % (m_size));

  for (int i = 0; i < random; i++)
  {
    list.removeBack();
    vec.pop_back();
  }

  test = list.toVector();

  if (test == vec)
  {
    isPassed = true;
  }

  printTestMessage("Order preserved after removeBack");
  printPass(isPassed);
  if (!isPassed)
  {
    printExpectedVec(vec,test);
  }

  return(isPassed);
}

bool TestSuite:: test18()
{
  bool isPassed = false;
  LinkedListOfInts list;

  isPassed = !list.search(7);
  printTestMessage("search returns false on an empty list");
  printPass(isPassed);

  return (isPassed);
}

bool TestSuite:: test19()
{
  bool isPassed = false;
  LinkedListOfInts list;

  for (int i = 0; i < m_size; i++)
  {
    list.addBack(i);
  }

  isPassed = !list.search(-1);
  printTestMessage("search returns false when value is not in the list");
  printPass(isPassed);

  return (isPassed);
}

bool TestSuite:: test20()
{
  bool isPassed = false;
  LinkedListOfInts list;
  srand((unsigned int)(time(NULL)));
  int t = (rand() % (m_size));
  int mark = 0;


  for (int i = 0; i < m_size; i++)
  {
    srand((unsigned int)(time(NULL)));
    int random = rand();
    list.addBack(random);

    if (i == t)
    {
      mark = random;
    }
  }

  isPassed = list.search(mark);

  printTestMessage("search returns true when value is in a large list");
  printPass(isPassed);

  return (isPassed);
}

bool TestSuite:: test21()
{
  bool isPassed = false;
  LinkedListOfInts list;
  vector<int> vec;

  vec = list.toVector();
  isPassed = vec.empty();

  printTestMessage("toVector returns empty vector for an empty list");
  printPass(isPassed);

  return (isPassed);
}

bool TestSuite:: test22()
{
  bool isPassed = false;
  LinkedListOfInts list;
  vector<int> vec;
  vector<int> test;

  randomFill(vec, m_size);
  loadList(vec,list);

  test = list.toVector();

  if (test == vec)
  {
    isPassed = true;
  }

  printTestMessage("toVector creates vector with the content of large list");
  printPass(isPassed);
  if (!isPassed)
  {
    printExpectedVec(vec,test);
  }

  return(isPassed);


  return (isPassed);
}
