#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <string>
#include <random>
#include <math.h>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Test
{
protected:
  int m_size;
  int m_num;

  void randomFill(vector<int>& vec, size_t size);
  void printPass(bool isPasses) const;
  void printTestMessage(string testDescription);
  void printVector(const vector<int>& vec) const;
  void printExpectedVec(const vector<int>& expected, const vector<int>& given) const;
  void printExpectedSize(const int& expected, const int& given) const;
  bool isSortedAscending(const vector<int>& vec) const;
  bool isSortedDescending(const vector<int>& vec) const;

public:
  Test(int size);
  virtual void run() = 0;
};
#endif
