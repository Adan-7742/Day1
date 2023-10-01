
//getting age and name of user.

#include <iostream>
using namespace std;
int main() {
	string name;
	int age;
	cout << "Enter your Name and Age"<<endl;
	cin >> name;
	
	cin >> age;
	cout << endl;
	cout << "Hello " << name << " you are " << age << " year old.";
	system("pause>0");

}

/*


//program to use key words

#include <iostream>
using namespace std;
int main() {

	//different keywords are used in c++ 
	// 
	//cout  : to print value on console
	//cin   : to get value or to store value
	//clog  :to print msg on console
	//cerr  : to print error on console

	int a, b;
	cout << "Enter a number  " << endl;
	cin >> a;
	cout << "Enter 2nd number  " << endl;
	cin >> b;
	if (a != b) {
		cerr << "Error : 405";

	}
	else
	{
		clog << "Msg: the values you enter are equal.";
	}
	system("pause>0");
}

*/

/*

//using statements and function 


#include <iostream>
using namespace std;
int addition(int a, int b){     //Function
    int sum = a + b;
    return sum;

}
//A function can be used for multiple times.

//multiply function

int mul(int c, int d) {
    int multi = c * d;
    return multi;
}

int main()
{
    int x, y;
    x = 20;                  //Statement
    y = 40;
    int sum = x + y;
    int add = addition(10, 20);
    //can also used without assigning to another variable
    cout << "The sum in statement is " << sum << endl;
    cout << "the sum in function is  " << add << endl;
    cout << "sum :  " << addition(4, 8)<<endl;
    //calling of multiply function
    cout << "multiply =  "<<mul(6,6);
    system("pause>0");
}
*/

