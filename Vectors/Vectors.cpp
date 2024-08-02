#include <iostream>
#include <vector>
using namespace std;




int main()
{
	vector <char> vowls{ 'a','e','i','o','u' };
	cout << vowls[0] << endl;
	cout << vowls[4] << endl;


	vector <int> test_scores{ 100, 99, 98 };
	cout << "Test scores ussing arrays syntax: " << endl;
	cout << test_scores[0] << endl;
	cout << test_scores[1] << endl;
	cout << test_scores[2] << endl;


	cout << "Test scores ussing vectors syntax: " << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << test_scores.size() << " <- The size of the vector" << endl;

	cout << "Update the scores: " << endl;
	cin >> test_scores.at(0);
	cin >> test_scores.at(1);
	cin >> test_scores.at(2);

	cout << "Updated test scores: " << endl;
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;

	cout << "Enter a test score to add to the vector: ";
	int score_add{};
	cin >> score_add;
	test_scores.push_back(score_add);
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << test_scores.at(3) << endl;

	cout << "Enter another test score to add to the vector: ";
	cin >> score_add;
	test_scores.push_back(score_add);
	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;
	cout << test_scores.at(3) << endl;
	cout << test_scores.at(4) << endl;

	cout << "The size of the vector is now: " << test_scores.size();


	vector<vector<int>> movie_ratings
	{
		{1,2,3,4},
		{4,3,3,4},
		{1,4,2,2}
	};

	cout << "\nHere are the movies rating for reviewer 1 using vector syntax: " << endl;
	cout << movie_ratings.at(0).at(0) << endl;
	cout << movie_ratings.at(0).at(1) << endl;
	cout << movie_ratings.at(0).at(2) << endl;
	cout << movie_ratings.at(0).at(3) << endl;

	cout << "\nHere are the movies rating for reviewer 2 using array syntax: " << endl;
	cout << movie_ratings[1][0] << endl;
	cout << movie_ratings[1][1] << endl;
	cout << movie_ratings[1][2] << endl;
	cout << movie_ratings[1][3] << endl;








	return 0;

	  




}

