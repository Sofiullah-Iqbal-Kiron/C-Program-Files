#include <bits/stdc++.h>
#include <queue> //"priority_queue" is defined in "queue" header file.
using namespace std;

void showpq(priority_queue<int> pq)
{
    while (!pq.empty())
    {
        cout << '\t' << pq.top();
        pq.pop();
    }
    cout << endl;
}

void showpq2(priority_queue<int> pq2)
{
    while (!pq2.empty())
    {
        cout << '\t' << -1 * pq2.top();
        pq2.pop();
    }
    cout << endl;
}

void showpq3(priority_queue<int, vector<int>, greater<int> > pq3)
{
    while (!pq3.empty())
    {
        cout << '\t' << pq3.top();
        pq3.pop();
    }
    cout << endl;
}

void showpqp(priority_queue<pair<int, int> > pqp)
{
    while (!pqp.empty())
    {
        cout << pqp.top().first << " and " << pqp.top().second << endl;
        pqp.pop();
    }
}

typedef pair<int, int> pd;

struct mycomp
{
    bool operator()(pd a, pd b)
    {
        return a.second < b.second;
    }
};

showg(priority_queue<pd, vector<pd>, mycomp> g)
{
    while(!g.empty())
    {
        cout << g.top().first << " " << g.top().second << endl;
        g.pop();
    }
    cout << endl;
}

int main()
{
    /*
        Priority queues are a type of container adapters,
        specifically designed such that the first element of the queue
        is the greatest elements of all elements in the queue
        and elements are in non-increasing (Simple decreasing order) order (hence we can see that each element of the queue has a priority).
        -> Adapters are one kind of function that modify the elements of container
                   while inserting or deleting. By the language of electronics, an adapter is a device
                   that converts attributes of one device of system to those of an otherwise incompatible
                   device or system.
                   (hence - otopor)
    */

    //Note that, C++ creates a max-heap for priority queue by default.
    priority_queue<int> pq; //priority_queue is almost same as stack container.

    //Initially priority queue has no element. So, it will print nothing.
    showpq(pq);

    //Insert element by push()
    pq.push(1);
    pq.push(3);
    pq.push(2);
    pq.push(344);

    showpq(pq);

    //Remove element from top to bottom by pop();
    pq.pop();
    showpq(pq);

    //Return size by size()
    cout << pq.size() << endl;

    //Return bool for check that the queue is empty or not by empty()
    cout << (pq.empty() == false ? "Not empty\n" : "Empty") << endl;

    /*
        What if we wanna create a priority queue in increasing order, it can done in 2 ways.
        First one, in case of numeric values, while inserting element, multiply with -1,
        again multiply with -1 when need to get back the element.
    */
    priority_queue<int> pq2;
    pq2.push(-1 * 3);
    pq2.push(-1 * 4);
    pq2.push(-1 * 1);

    showpq2(pq2);

    /*
        C++ provides below syntax for creating min-heap of priority_queue.
    */
    priority_queue<int, vector<int>, greater<int> > pq3;
    /*
        This syntax will initialize the queue as a vector and adapter formats elements increasing order due to greater() formatter function.
    */

    pq3.push(2);
    pq3.push(4);
    pq3.push(1);

    showpq3(pq3);

    /*
        priority_queue::emplace().
        ->To insert a new element into the queue and the element will added
          to the top of the queue but at next, priority_queue will form elements
          in descending order automatically.
        ->Syntax: priority_queue_name.emplace(value);
        When we insert an element by push(), we create an object and then
        insert it into the queue.
        With emplace(), the object is constructed in-place and saves an unnecessary copy.
    */

    //We can directly insert pair in a paired queue by emplace.
    /*
    priority_queue<pair<int, int> > pqp;
    pqp.emplace(2, 3);
    pqp.emplace(4, 2);
    pqp.emplace(1, 5);

    showpqp(pqp);
    */
    //But nowdays, there is no member function named emplace() for priority_queue.

    /*
    Queue will arrange pairs by the order of first element.
    or if some first element are same then pairs will arrange based on
    second element.
    */
    priority_queue<pair<int, int> > pqp2;
    pqp2.push({1, 0});
    pqp2.push({3, 3});
    pqp2.push({0, 1});
    pqp2.push({1, 4});

    showpqp(pqp2);

    priority_queue<pd, vector<pd>, mycomp> g;
    g.push({1, 4});
    g.push({5, 2});
    g.push({3, 2});
    g.push({4, 7});

    showg(g);
}
