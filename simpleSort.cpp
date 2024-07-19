#include <iostream>
#include <cstdlib>
#define MAX 100
using namespace std;

int main()
{
    int n;
    int array[MAX];
    cout << "Enter a number N: " << endl;
    cin>>n;

    //inputting values in an array
    for (int i = 0; i < n; i++) {
        array[i] = rand();
    }

    //inputting the unsorted array
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    //sorting an array
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++){ 
            if (array[j] < array[i]) { //sorts in ascending order :((array[j] > array[i]) sorts in descending order)
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;

            }
        }
    }

    //display the sorted array
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}