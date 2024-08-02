
#include <iostream>
using namespace std;


int main()
{
    char vowels[]{ 'a', 'e','i','o','u' };

    cout << "The first vowel is: " << vowels[0] << endl;
    cout << "The las vowel is: " << vowels[4] << endl;
    
    //cin >> vowels[5]; out of bounds - DON'T!!!


    double hi_temps[]{ 25.4, 35.2, 45.9, 23.1 };

    cout << "The first high temperature is: " << hi_temps[0] << endl;
    hi_temps[0] = 33.3;
    cout << "The fist high temperature is now: " << hi_temps[0] << endl;


    int test_scores[]{100, 90, 80, 70, 60};
    cout << "The  score at index 0 is: " << test_scores[0] << endl;
    cout << "The  score at index 1 is: " << test_scores[1] << endl;
    cout << "The  score at index 2 is: " << test_scores[2] << endl;
    cout << "The  score at index 3 is: " << test_scores[3] << endl;
    cout << "The  score at index 4 is: " << test_scores[4] << endl;

    cout << "Enter 5 test scores: " << endl;
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout << "The  score at index 0 is: " << test_scores[0] << endl;
    cout << "The  score at index 1 is: " << test_scores[1] << endl;
    cout << "The  score at index 2 is: " << test_scores[2] << endl;
    cout << "The  score at index 3 is: " << test_scores[3] << endl;
    cout << "The  score at index 4 is: " << test_scores[4] << endl;

    cout << "The name of the arrays is : " << test_scores << endl;

    return 0;

}

