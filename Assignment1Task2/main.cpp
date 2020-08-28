#include <iostream>
#include "unsortedtype.h"
#include "studentinfo.h"
using namespace std;
template <class T>
void Print(UnsortedType<T> u){

    int length = u.LengthIs();
    T value;
    for(int i=0; i<length; i++){
        u.GetNextItem(value);
        cout << value;
    }
}
template <class T>
void Retrieve(UnsortedType<T> u, T value){
    bool b;
    u.RetrieveItem(value,b);
    if(b)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

}
void checkFull(bool b){
    if(b)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;
}

int main(){

    studentInfo s1(191191,"Proma",3.50),
                s2(191172,"Shaishab",3.93),
                s3(182664,"Ork",2.43),
                s4(192192,"Eraz",1.98),
                s5(201220,"Sami",3.00);

    UnsortedType<studentInfo> ut;
    ut.InsertItem(s1);
    ut.InsertItem(s2);
    ut.InsertItem(s3);
    ut.InsertItem(s4);
    ut.InsertItem(s5);

    studentInfo temp = 182664;
    ut.DeleteItem(temp);
    temp = 201220;
    Retrieve(ut,temp);
    Print(ut);

    return 0;
}

