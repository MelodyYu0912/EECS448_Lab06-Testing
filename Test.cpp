#include "Test.h"

Test:: Test(int size)
{
  m_size = size;
  m_num = 0;
}

void Test::randomFill(vector<int>& vec, size_t size)
{
  size_t count = 0;
  int random = 0;
  srand((unsigned int)(time(NULL)));

  while (count < size)
  {
    random = (rand() % (100));
    vec.push_back(random);
    count++;
  }
}

void Test::printPass(bool isPassed) const
{
  if (isPassed)
  {
    cerr << "PASSED √" << endl;
  }
  else
  {
    cerr << "FAILED ×" << endl;
  }
}

void Test::printTestMessage(string testDescription)
{
  cerr << endl;
    m_num++;
  cerr << "--------------------" << "TEST " << m_num << "--------------------" << endl;
  cerr << "TEST DESCRIPTION: " << testDescription << ". " << endl;
  cerr << "TEST RESULT: ";
}

void Test::printVector(const vector<int>& vec) const
{
  cerr << "[";
	for(std::size_t i=0; i<vec.size(); i++)
	{
		cerr << vec[i];
		if(i != vec.size()-1)
		{
			cerr << ",";
		}
	}
	cerr << "]";
}

void Test::printExpectedVec(const vector<int>& expected, const vector<int>& given) const
{
  cerr << endl;
  cerr << "------------------------------" << endl;
  cerr << "EXPECTED: " << endl;
  printVector(expected);
  cerr << endl;
  cerr << "GIVEN: " << endl;
  printVector(given);
  cerr << endl;
  cerr << "------------------------------" << endl;
}

void Test::printExpectedSize(const int& expected, const int& given) const
{
  cerr << endl;
  cerr << "------------------------------" << endl;
  cerr << "Expected: " << expected << endl;
  cerr << "Given: " << given << endl;
  cerr << "------------------------------" << endl;
}

bool Test::isSortedAscending(const std::vector<int>& vec) const
{
  bool isSorted = true;

  for(size_t i=0; i<vec.size()-1; i++)
  {
    if(vec[i] > vec[i+1])
    {
      isSorted = false;
    }
  }

  return(isSorted);
}

bool Test::isSortedDescending(const std::vector<int>& vec) const
{
  bool isSorted = true;

  for(size_t i=0; i<vec.size()-1; i++)
  {
    if(vec[i] < vec[i+1])
    {
      isSorted = false;
    }
  }

  return(isSorted);
}
