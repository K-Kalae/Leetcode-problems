class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> soln;
    if (numRows == 0)
    {return soln;}
     soln.push_back({1});
      for (int i=1; i<numRows; ++i)
      {  
        std::vector<int> row(i + 1, 1);
        for(int j=1; j<i; j++)
        {  
           row[j] = soln[i-1][j-1] + soln[i-1][j];
           
        }
        soln.push_back(row);
      }
      return soln; 
    }
};