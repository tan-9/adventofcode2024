#include <iostream>
// #include <string>
// #include <regex>
// using namespace std;

// #define ll long long

// int main() {
//     // Prompt user for input
//     cout << "Enter the string: ";
//     string input;
//     getline(cin, input); // Read the entire input line from the user

//     // Regex to match only valid "mul(X,Y)" where X and Y are 1-3 digit numbers
//     regex pattern(R"(mul\((\d{1,3}),(\d{1,3})\))");

//     // Iterate through all matches in the input string
//     auto begin = sregex_iterator(input.begin(), input.end(), pattern);
//     auto end = sregex_iterator();

//     cout << "Valid mul(X,Y) instructions and their anss:" << endl;

//     bool found = false; // Flag to track if any valid patterns were found

//     ll ans=0;

//     for (auto it = begin; it != end; ++it) {
//         found = true;
//         smatch match = *it;
//         int x = stoi(match[1].str()); // Extract X
//         int y = stoi(match[2].str()); // Extract Y
//         ans += x * y;           // Calculate the product
//     }

//     cout<<ans;

//     return 0;
// }

