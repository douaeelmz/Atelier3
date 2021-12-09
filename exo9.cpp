#include <iostream>
using namespace std;
class Test {
public:

static int count;
Test()
{
count++;
}
void call()
{
cout<<count<<endl;
count++;
}
};
int Test::count=0;
int main() {
	Test A;
	A.call();
	A.call();
	A.call();
	A.call();
	A.call();
}
