#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
   vector<char> vowels {'a', 'e', 'i', 'o', 'u'};

   cout << vowels[0] << endl;
   cout << vowels[4] << endl;

   vector<int> test_sctores {100, 98, 98};
   cout << test_sctores[0] << endl;
   cout << test_sctores[1] << endl;
   cout << test_sctores[2] << endl;

   cout<< test_sctores.at(0) << endl;
   cout<< test_sctores.at(1) << endl;
   cout<< test_sctores.at(2) << endl;

   cout << "There are " << test_sctores.size() << " scores in the vector." << endl;

   cin >> test_sctores.at(0);
   cin >> test_sctores.at(1);
   cin >> test_sctores.at(2);

   cout << "New scores are" << endl;
   cout<< test_sctores.at(0) << endl;
   cout<< test_sctores.at(1) << endl;
   cout<< test_sctores.at(2) << endl;

   cout << "2D vector" << endl;

   vector<vector<int>> movie_ratings{
      {1,2,3,4},
      {1,2,4,4},
      {1,3,4,5}
   };

   cout << movie_ratings[0][0] << endl;
   cout << movie_ratings[0][1] << endl;
   cout << movie_ratings[0][2] << endl;


   cout << movie_ratings.at(0).at(0) << endl;
   cout << movie_ratings.at(0).at(1) << endl;
   cout << movie_ratings.at(0).at(2) << endl;
}