# include <bits/stdc++.h>
# include <iostream>
# include <utility>
# include <vector>
# include <string>
using namespace std;

typedef long long int lli;
typedef std::vector<int> vi;

struct Queue{
	stack<int> s1,s2;
	void enQueue(int x){
		s1.push(x);
	}
	int deQueue(){
		if (s1.empty() && s2.empty()){
			cout << "Queue is empty" << endl;
			exit(0);
		}
		if (s2.empty()){
			while (!s1.empty()){
				s2.push(s1.top());
				s1.pop();
			}
		}
		int x = s2.top();
		s2.pop();
		return x;
	}
};

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,i=0;
	cin >> t;
	Queue q;
	while (i<t){
		cout << "Please enter numbers into the queue" << endl;
		cin >> n;
		q.enQueue(n);
		i++;
	}
	cout << endl;
	while (t){
		cout << "The elements of the Queue:" << endl;
		cout << q.deQueue() << endl;
		t--;
	}

	return 0;
}