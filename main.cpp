#include <iostream>

#include "listas_enlazadas/list.h"
#include "listas_enlazadas/list.cpp"

using namespace std;

int main()
{
    List list;
    int ele;
    int dat;
    int dat1;

    cout << "Digite un número " << endl;
    cin >> ele;
    switch(ele)
    {
        case 1:
            cout << "Agrega un elemento por la cabeza: " << endl;
            cin>>dat;
            list.add_head(dat);
            cout << "Agrega un elemento por la cabeza: " << endl;
            cin>>dat;
            list.add_head(dat);
            cout << "Agrega un elemento por la cabeza: " << endl;
            cin>>dat;
            list.add_head(dat);
            cout << "Agrega un elemento por la cabeza: " << endl;
            cin>>dat;
            list.add_head(dat);
            cout << "ingrese para obtener: " << endl;
            cin>>dat1;
            list.obt_by_position(dat1);
            list.print();
            break;
        case 2:
            break;
        case 3:
            break;
        default:

            ;
    }


    return 0;
}

