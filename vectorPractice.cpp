// vectorPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<string> split(const string& input, char delimiter) {
    vector<string> result;
    stringstream ss(input);
    string item;
    while (getline(ss, item, delimiter)) {
        result.push_back(item);
    }
    return result;
}
vector<vector<string>> splitIntoWordGroups(const string& input)
{
    // Split the input by commas to get groups
    vector<string> groups = split(input, ',');
    vector<vector<string>> wordGroups;

    // For each group, split it into words and store it in the vector of vectors
    for (const auto& group : groups) {
        wordGroups.push_back(split(group, ' '));
    }
    return wordGroups;
}
int main() {
    string sampleInput = "4 year old female hyena, born in spring, tan color,70 pounds, from Friguia Park, Tunisia";
    vector<vector<string>> result =
        splitIntoWordGroups(sampleInput);

    // Output the groups and their words
    for (size_t i = 0; i < result.size(); ++i) 
    {
        cout << "Group " << (i + 1) << ": ";
        for (const auto& word : result[i]) 
        {
            if (i == 0) {
                // We are in the first group
                cout << "\n in this first group and word is: " << word;
            }
            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}