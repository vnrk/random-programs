#include<iostream>
#include<stdlib.h>

using namespace std;

class Stack
{
private:
    static const long long max = 100000;
    long long arr[max];
    long long top;
public:
    Stack() { top = -1; }
    bool isEmpty();
    bool isFull();
    long long pop();
    void push(long long x);
};

/* Stack's member method to check if the stack is iempty */
bool Stack::isEmpty()
{
    if(top == -1)
        return true;
    return false;
}

/* Stack's member method to check if the stack is full */
bool Stack::isFull()
{
    if(top == max - 1)
        return true;
    return false;
}

/* Stack's member method to remove an element from it */
long long Stack::pop()
{
    if(isEmpty())
    {
        cout<<"Stack Underflow";
        abort();
    }
    long long x = arr[top];
    top--;
    return x;
}

void Stack::push(long long x)
{
    if(isFull())
    {
        cout<<"Stack Overflow";
        abort();
    }
    top++;
    arr[top] = x;
}

class SpecialStack: public Stack
{
    Stack max;
public:
    long long pop();
    void push(long long x);
    long long getMax();
};


void SpecialStack::push(long long x)
{
    if(isEmpty()==true)
    {
        Stack::push(x);
        max.push(x);
    }
    else
    {
        Stack::push(x);
        long long y = max.pop();
        max.push(y);
        if( x > y )
          max.push(x);
        else
          max.push(y);
    }
}


long long SpecialStack::pop()
{
    long long x = Stack::pop();
    max.pop();
    return x;
}


long long SpecialStack::getMax()
{
    long long x = max.pop();
    max.push(x);
    return x;
}

/* Driver program to test SpecialStack methods */
int main()
{
    SpecialStack s;
    int flag = 0;
    long long x, y, ele, size;
    int T;

    cin >> T;
    while(T--) {
    	cin >> size;
    	while(size--) {
    		cin >> ele;
    		s.push(ele);
    	}
    	while(!s.isEmpty()) {
    		x = s.getMax();
    		y = s.pop();
    		while ((!s.isEmpty() && (x != y))) {
    			//cout << "Not highest" << endl;
    			x = s.getMax();
    			y = s.pop();
    		}
    		flag = !flag;
    		//cout << "Chance Finished " << flag << endl;
    		//if(!s.isEmpty())
    		//	s.pop();
    	}
    	if(flag == 0)
    		cout << "ANDY" << endl;
    	else
    		cout << "BOB" << endl;
    	flag = 0;
    }
    return 0;
}
