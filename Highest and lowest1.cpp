#include <iostream>
using namespace std;

void max()
{
	int x = 0;
	int y = 0;
	int answer;
	cout << "X =";
	cin >> x;
	cout << "Y =";
	cin >> y;
	
	if (x>y)
{
cout << "max :  " << x;
}

else 
{ 
cout << "max : " << y;
}
return ;

}

int main()
{
	max ();
	return 0;
}

