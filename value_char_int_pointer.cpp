#include<iostream>
using namespace std;

int main(){
    int i[] = {65,66};
    char * p = (char*)&i;

    cout << sizeof(p) << endl;


    cout << p << endl; //Thwe thing with the character pointer is that when the pointer itself is printed then it doesnot show the address of the value but the value itself!
    cout << *p << endl; //This will also give the same answer as the above as this derefencing is not necessary for charater pointer.
    cout << *(p+4) << endl; // A character pointer reads only the first bit out of the original four bit of integer, as it looks it from a character perspective... LOL. So the next 3 bits after the pointer P is empty considering the Little Endian rule
    return 0;
}