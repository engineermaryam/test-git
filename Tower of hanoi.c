// c++ programming - tower of hanoi

#include <iostream>// i am running the iostream liberary

using namespace std;

void move (int,int,int,int); // a function contains 4 integers one for count and rest 3 for needles

int main() // this the main function

{

int num;

cout << "Enter the number of disks: "; // displaying the output so that user can enter his/her desire number

cin >> num; // input would be number type

cout << endl;

move (num,1,3,2);

system ("PAUSE");

return 0;

}

void move (int count, int n1, int n3, int n2)

{

if(count > 0) // we call the function to move if count is greater then zero

{

move(count-1,n1,n2,n3); // we are going or moving from needle one to needle 3

cout << "Move disk" << "from" << n1 << "to" << n3 << "," << endl;

move(count-1,n2,n3,n1); // we call the function again from needle 2 to 3 and back up 1 to 2

}

}