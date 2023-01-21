#include <iostream>
using namespace std;
class A{
	private:
		
	int value;
public:
	A():value(6){
	}
	void operator --(){
		--value;
	
	
	void display()
	{
		cout<<"the value is="<<value; 
	}};

int main() {
	A b;
	--b;
	b.display();
	return 0;}