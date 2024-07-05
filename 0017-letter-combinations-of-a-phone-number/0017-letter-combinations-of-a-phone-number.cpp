#include <iostream>
#include <map>
#include <vector>
#include <string>


class Solution {
    private: 
    void generateCombinations(const std::vector<std::string>& values, std::string& current, int index, std::vector<std::string>& results) {
    if (index == values.size()) {
        results.push_back(current);
        return;
    }

    for (char ch : values[index]) {
        current.push_back(ch);
        generateCombinations(values, current, index + 1, results);
        current.pop_back();  // Backtrack
    }
    }
public:
    vector<string> letterCombinations(string digits) {
         std::map<int, std::string> phonebook;

    phonebook[2] = "abc";
    phonebook[3] = "def";
    phonebook[4] = "ghi";
     phonebook[5] = "jkl";
      phonebook[6] = "mno";
       phonebook[7] = "pqrs";
        phonebook[8] = "tuv";
         phonebook[9] = "wxyz";

    std::vector<int> keys;  
        for (char ch : digits) {
        if (isdigit(ch)) {
            keys.push_back(ch - '0');  // Convert char to int
        }
    }
    std::vector<std::string> values;

    for (int key : keys) {
        values.push_back(phonebook[key]);
    }

    std::vector<std::string> results;
    std::string current;
    
    if(digits.length() ==0)
  {
    return {};
  }
    generateCombinations(values, current, 0, results);
     return results;
    
    }
};