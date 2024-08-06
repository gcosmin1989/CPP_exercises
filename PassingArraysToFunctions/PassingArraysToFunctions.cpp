#include<functional>
#include <iostream>

using namespace std;

void print_array(int array[], size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(int array[], size_t size) {
    for (size_t i{ 0 }; i < size; i++)
        cout << array[i] << endl;
}

void set_array(int arr[], size_t size, int value) {
    for (size_t i{ 0 }; i < size; i++)
        arr[i] = value;
    
}

int main()
{
    int my_scores[]{ 100, 98, 70, 89, 77 };

    print_array(my_scores, 5);
    set_array(my_scores, 5, 90);
    print_array(my_scores, 5);
    cout << endl;
}

