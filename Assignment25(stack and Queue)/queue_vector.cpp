#include <bits/stdc++.h>
using namespace std;

//complete the functions
class Queue{
	vector<int> A;
	int start;
	int end;
	
	public:
	//constructor is called whenever an object of the class is declared
	Queue(){
        start = 0;
        end = 0;
		cout<<"constructor is Called\n";
	}
	
	//push the value at the back
	void push(int val){
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
        A.push_back(val);
        end++;
	}
	
	int front(){
		cout<<"returning the value at front\n";
		return A[start];
	}
	
	void pop(){
		cout<<"removing the first element\n";
        if(end>0) {
            A.erase(A.begin());
            end--;
        }
	}
	
	int size(){
		cout<<"return the size of the queue\n";
		return end;
	}
	
	bool isEmpty(){
		cout<<"returning if the queue is empty\n";
        if(end==start) return true;
        else return false;
	}
};

int main() {
	Queue q; //constructor is called on this line
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	return 0;
}