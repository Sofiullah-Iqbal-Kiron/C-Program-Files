#include<iostream>
#include<stack>
using namespace std;

/*
 Stacks are a type of container adaptors with LIFO(Last IN First Out). So we can say, stack is Stup.
*/

int main()
{
    /*Let's create a stack of int type.*/
    stack<int> s;

    /*Member function push() will add the new element at the top of the stack. Time complexity O(1)*/
    s.push(10);
    s.push(9); /*9 stored above of 10*/
    s.push(8);
    s.push(1); /*Now 1 is the top most element.*/

    /*Algorithmic function size() returns current size of this stack.*/
    cout << s.size() << endl;

    /*Member function top() will return topper element or that element we entered last.
    For this example, it is 1*/
    cout << s.top() << endl;

    /*Member function pop() will delete the topmost element.*/
    s.pop();
    cout << s.top() << endl; /*After removing topmost element, present topmost element is 8*/
    cout << s.size() << endl; /*After removing one element, current size of stack is 3*/

    /*Algorithmic function empty() will return true if there is no element at the stack.*/
    if(!s.empty())
    {
        cout << "Stack is not empty" << endl;
    }

    /*Given a stack of integers, cout the summation of all elements.*/
    stack<int> mys;
    mys.push(3);
    mys.push(4);
    mys.push(5);
    mys.push(6);

    int sum = 0;

    while(!mys.empty())
    {
        sum+=mys.top();
        mys.pop();
    }

    /*Sum may be 18*/
    cout << sum << endl;

    /*Now mys has no element, then the code will terminate at
    infinity time.*/
    ///cout << mys.top() << endl;

    /*Stack emplace()*, IN stack, emplace is same as push().
    It adds a new element at top of the stack.*/
    /*mys.emplace(3);
    mys.emplace(4);
    cout << mys.top << endl;*/
    ///Now, emplace is undefined for C++ 14.

    /*Let's sort a stack using another temp stack*/
    stack<int> ss, temp;
    ss.push(1);
    ss.push(5);
    ss.push(3);
    ss.push(2);

    return 0;
}
