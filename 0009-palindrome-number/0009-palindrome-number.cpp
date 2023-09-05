class Solution {
public:
    bool isPalindrome(int x) {
      string y=to_string(x);
       //const char y=c.c_str();
       string z="";
       string p;
       int r;
        for (int i=(y.length()-1);i>=0;i--)
        {
            p+=y[i];
            cout<<y[i]<<"  "<<p<<" \n";
            }
            //cout<<p.length();
            if (p==y)
            {
                return true;
            }
            else return false;

}

    
};