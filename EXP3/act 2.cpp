#include<iostream>

using namespace std;

int main()
{
int size, a;
char character[10];
cout<< "Array Size: "; cin>> size;

cout<< "Enter "<<size<< " characters: ";

for (a=0; a<size; a++)
{

cin >> character[a];
}
cout<< "The array size is "<<size<<endl;
cout<< "reverse: ";

for (a = size; a>0; a--)
{
cout << character[a-1]<<" ";
}


return 0;
}

