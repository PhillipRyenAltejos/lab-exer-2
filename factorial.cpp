#include <iostream>
using namespace std;

int factorial (int number){

  int factor = number-1;
  int answer = number;

  for(int i = number; i > 1; --i)
    {
        answer = answer * factor;
        --factor;
    }

  return answer;

}

int main(){

  int input=0;
  char cont='Y';

  do{
    cout << "WELCOME TO FACTORIAL CALCULATOR!" << endl;
    cout << "Enter number: ";
    cin >> input;
    cout << "the answer is " << factorial(input) << endl;
    cout << "Do you want to continue? (Y/N)  ";
    cin  >> cont;
    cout << endl << endl << endl;
  }while(cont == 'Y' || cont == 'y');

  return 0;
}
