Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"

IMPLEMENTATION

string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";
        
        string prefix = strs[0];
        
        for(int i = 1; i< strs.size(); i++) {
            while(strs[i].find(prefix) != 0) { 
			// keep shrinking the prefix string until it matches from 0th character
                prefix = prefix.substr(0, prefix.size()-1);
            }
        }
        return prefix;
        
    }
    
    |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
    
    LCP (“geeksforgeeks”, “geeks”, “geek”)
    =  LCP (LCP (“geeksforgeeks”, “geeks”), “geek”)
    =  LCP (“geeks”, “geek”) = “geek”

So we can make use of the above associative property to find the LCP of the given strings
    string commonPrefixUtil(string str1, string str2) 
{ 
    string result; 
    int n1 = str1.length(), n2 = str2.length(); 
  
    // Compare str1 and str2 
    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++) 
    { 
        if (str1[i] != str2[j]) 
            break; 
        result.push_back(str1[i]); 
    } 
  
    return (result); 
} 
  
// A Function that returns the longest common prefix 
// from the array of strings 
string commonPrefix (string arr[], int n) 
{ 
    string prefix =  arr[0]; 
  
    for (int i=1; i<=n-1; i++) 
        prefix = commonPrefixUtil(prefix, arr[i]); 
  
    return (prefix); 
} 
  


