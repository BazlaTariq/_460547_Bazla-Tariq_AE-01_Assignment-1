#include <iostream>
using namespace std;
int main ()
{
    int array[8] = {34, 44, 33, 23, 45, 322, 54, -56};
    int temp;
    cout << "Descending Order" << endl;
    for(int i=0;i<7;i++)
    {
        for (int j =i+1; j<8; j++)
        {
        if (array[i]<array[j])
        {
            temp = array[i];
            array[i]=array[j];
            array[j]=temp;
        }
        }
    }
    for (int l=0; l<8; l++)
    {
        cout << array[l] << endl;
    }
    cout << "Ascending order" << endl;
        for(int i=0;i<7;i++)
    {
        for (int j =i+1; j<8; j++)
        {
        if (array[i]>array[j])
        {
            temp = array[i];
            array[i]=array[j];
            array[j]=temp;
        }
        }
    }
    for (int l=0; l<8; l++)
    {
        cout << array[l] << endl;
    }
    return 0;
}

