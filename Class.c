#include<iostream> // i am running an iostream library
using namespace std;
int main()// this is main function
{
string input;
int a = 0;
int cat = 0;

getline(cin, input, '\n'); //that is used to read a string from an input stream

for(a = input.find("cat", 0); a != string::npos; a = input.find("cat", a))
{
    cat++;
    a++;

}
cout<<cat;
return 0;
}
