// Stack_I.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>

using namespace std;

template <typename T> class stack
{
public:
	stack(int size)
	{
		stack = new T[size];
	    array_size_ = -1;
	}

	size_t count() const
	{
		return count_;
	}

	bool push(const T &value)
	{
		if(array_size_ == value - 1)
			return false;
		else
			stackPtr[top++] = value;
			return true; 
	}

	bool pop()
	{
		if(array_size_ == value - 1)
			return false;
		else
			stackPtr[top] = 0;
			top--;
			return true;
		
	}
private:
	T * array_;
	size_t array_size_;
	size_t count_;
};

int main()
{

	return 0;
}

