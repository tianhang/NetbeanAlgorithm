#include<queue>
#include<iostream>
using namespace std;
void functionC()
{
  priority_queue <int, vector<int>, greater<int> > pq;   //pq is a priority queue of integers that uses
                                                         //a vector of integers for storage and uses >
                                                         //to determine priority. This means that if a > b,
                                                         //a has *lower* priority than b.

  pq.push(2);                      //put 2, 5, 3, 2 into the queue
  pq.push(5);
  pq.push(3);
  pq.push(1);
  cout<<"pq contains " << pq.size() << " elements.\n";

  while (!pq.empty()) {
    cout << pq.top() << endl;      //print out the highest priority element in the queue
    pq.pop();                      //remove the highest priority element
  }
}
//int main(){
//    functionC();
//    return 0;
//}