# include <bits/stdc++.h>
# include <iostream>
# include <utility>
# include <vector>
# include <string>
using namespace std;

typedef long long int lli;
typedef std::vector<int> vi;

struct Stack{
	queue <int> q;
	void Push(int x){
		int s = q.size();
		q.push(x);
		for (int i=0;i<s;i++){
			q.push(q.front());
			q.pop();
		}
	}

	int Pop(){
		int x = q.front();
		q.pop();
		return x;
	}
};

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	Stack s;
	s.Push(5);
	s.Push(9);
	s.Push(7);
	s.Push(0);
	s.Push(1);
	s.Push(8);
	s.Push(6);
	s.Push(2);

	cout << s.Pop() << endl;
	cout << s.Pop() << endl;
	cout << s.Pop() << endl;
	cout << s.Pop() << endl;
	cout << s.Pop() << endl;
	cout << s.Pop() << endl;
	cout << s.Pop() << endl;
	cout << s.Pop() << endl;
	return 0;
}