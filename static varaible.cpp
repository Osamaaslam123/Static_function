#include <iostream>
using namespace std;
class love{
	protected:
		int a;
			int b;
				int sum1;
				int sum2;
	public:				
	love(){
	a=2;
	b=3;
	cout<<"hot water"<<endl;
	sum1=a+a;
	sum2=a+b;
	cout<<"sum"<<sum1<<endl;
	cout<<"sum"<<sum2<<endl;
	}
	
	
	static int age;
};
int love :: age=10;
int main() {
	love*l1=new love ;
	return 0;
}