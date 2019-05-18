#include <iostream>
using namespace std;

class counter
{
	private:
	 int count;
	public:
	counter(): count(0)
	       { cout<<"Constructor is working"<<endl;    }
    void addition()
    {
    	count+=1;
    }
    int show()
    {
    	return count;
    }
};

int main()
{
	counter a,b;
	
	cout<<"first counter is " <<a.show()<<endl;
	cout<<"second Counter is "  <<b.show()<<endl;
	
	a.addition();
	b.addition();
	b.addition();
	b.addition();
	a.addition();
	
	cout<<"first counter is " <<a.show()<<endl;
	cout<<"second Counter is "  <<b.show()<<endl;
	
	 
	
	return 0 ;
}