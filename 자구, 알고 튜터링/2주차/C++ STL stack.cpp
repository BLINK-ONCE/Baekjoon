#include <iostream>
#include <stack>

using namespace std;

int main(){
	//make stack
	stack<int> s;
	
	//push
	s.push(3);
	s.push(2);
	s.push(1);
	
	//top
	cout << "top element: " << s.top() << "\n";
	
	cout << "stack size: " << s.size() << "\n";
	
	//pop
	s.pop();
	s.pop();
	
	//size
	cout << "stack size: " << s.size() << "\n";
	
	//empty
	cout << "is it empty?: " << (s.empty() ? "Yes":"No") << "\n";
	
	return 0;
}
