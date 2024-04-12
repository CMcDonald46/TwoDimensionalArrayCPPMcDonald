// Student Name: Carson McDonald
// Teacher : Dr. Tyson McMillan
// Date: 4/11/2024
// A program to practice working with multidimensional arrays.
// In this program I used two single dimension arrays to store weather for two
// different cities for 7 days. Then fed it to a multidimensional array that was
// used to ouput the data collected.
#include <iostream>
using namespace std;

int main() {
  const int CITY = 2;          // There are 2 cities.
  const int WEEK = 7;          // There are 7 days in a week.
  int temperature[CITY][WEEK]; // This is the array that will be used to present
                               // the temperature.
  int cityOne[7]; // This is the array that will be used to hold the temperature
                  // for city one.
  int cityTwo[7]; // This is the array that will be used to hold the temperature
                  // for city two.
  string City_One = "Dallas"; // This is the name of the first city.
  string City_Two = "Austin"; // This is the name of the second city.
  cout << "Welcome to the Weather Program! " << endl;
  // Part 1.
  // These are the the Cities that I looked up Austin and Dallas. And the
  // temperatuers for each day of the week.
  cout << "Temperatures for " << City_One << ":" << endl;
  int cityOneActualTemp[] = {79, 81, 83, 80, 86, 88, 84};
  for (int i = 0; i < 7; i++) {
    cout << City_One << ", Day " << i + 1 << ": " << cityOneActualTemp[i]
         << endl;
  }
  cout << "Temperatures for " << City_Two << ":" << endl;
  int cityTwoActualTemp[] = {83, 83, 83, 85, 86, 87, 88};
  for (int i = 0; i < 7; i++) {
    cout << City_Two << ", Day " << i + 1 << ": " << cityTwoActualTemp[i]
         << endl;
  }
  // Part 2.
  // Prompt user for input of temperatues for two different cities.
  // Input temperatures for City One (Dallas).
  cout << "Enter temperatures for " << City_One << ": " << endl;
  for (int j = 0; j < WEEK;
       ++j) { // Setting the loop to start at 0 and increment by 1 til it
              // reaches the value of WEEK.
    cout << City_One << ", Day " << j + 1 << ": ";
    cin >> cityOne[j];
  }

  // Input temperatures for City Two(Austin.
  cout << "Enter temperatures for " << City_Two << ":" << endl;
  for (int j = 0; j < WEEK;
       ++j) { // Setting the loop to start at 0 and increment by 1 til it
              // reaches the value of WEEK.
    cout << City_Two << ", Day " << j + 1 << ": ";
    cin >> cityTwo[j];
  }

  // Assigning the data to the temperature array.
  for (int j = 0; j < WEEK; ++j) {
    temperature[0][j] = cityOne[j];
    temperature[1][j] = cityTwo[j];
  }

  cout << "\n\nDisplaying Values:\n";

  // Accessing the values from the temperature array.
  for (int i = 0; i < 1; ++i) { // Setting the loop to start at 0 and increment
                                // by 1 til it reaches the value of CITY.
    cout << "City: " << City_One << endl
         << "Temperatures for the week:" << endl;
    for (int j = 0; j < WEEK;
         ++j) { // Setting the loop to start at 0 and increment by 1 til it
                // reaches the value of WEEK.
      cout << City_One << ", Day " << j + 1 << " : " << temperature[i][j]
           << endl;
    }
  }
  for (int i = 1; i < 2; ++i) { // Setting the loop to start at 0 and increment
                                // by 1 til it reaches the value of CITY.
    cout << "City: " << City_Two << endl
         << "Temperatures for the week:" << endl;
    for (int j = 0; j < WEEK;
         ++j) { // Setting the loop to start at 0 and increment by 1 til it
                // reaches the value of WEEK.
      cout << City_Two << ", Day " << j + 1 << " : " << temperature[i][j]
           << endl;
    }
  }
  cout << "Thank you for using the Weather Program! " << endl;
  return 0;
}