#include <bits/stdc++.h>
using namespace std;
#define M 26
 
/* Utility function to count frequencies and checking
    whether letter can make a palindrome or not */
bool isPalin(string str, int* freq)
{
    /* Initialising frequency array with all zeros */
    memset(freq, 0, M * sizeof(int));
    int l = str.length();
 
    /* Updating frequency according to given string */
    for (int i = 0; i < l; i++)
        freq[str[i] - 'a']++;
 
    int odd = 0;
 
    /* Loop to count total letter with odd frequency */
    for (int i = 0; i < M; i++)
        if (freq[i] % 2 == 1)
            odd++;
 
    /* Palindrome condition :
    if length is odd then only one letter's frequency must be odd
    if length is even no letter should have odd frequency */
    if ((l % 2 == 1 && odd == 1 ) || (l %2 == 0 && odd == 0))
        return true;
    else
        return false;
}
 
/* Utility function to reverse a string */
string reverse(string str)
{
    string rev = str;
    reverse(rev.begin(), rev.end());
    return rev;
}
 
/* Function to print all possible palindromes by letter of
    given string */
void printAllPossiblePalindromes(string str,string str1)
{
    int freq[M];
 
    // checking whether letter can make palindrome or not
    if (!isPalin(str, freq))
        return;
 
    int l = str.length();
 
    // half will contain half part of all palindromes,
    // that is why pushing half freq of each letter
    string half = "";
    char oddC;
    for (int i = 0; i < M; i++)
    {
        /* This condition will be true at most once */
        if(freq[i] % 2 == 1)
            oddC = i + 'a';
 
        half += string(freq[i] / 2, i + 'a');
    }
 
    /* palin will store the possible palindromes one by one */
    string palin;
 
 long long int ct=0;
    // Now looping through all permutation of half, and adding
    // reverse part at end.
    // if length is odd, then pushing oddCharacter also in mid
    do
    {
        palin = half;
        if (l % 2 == 1)
            palin += oddC;
        palin += reverse(half);
        
        long long int len1=palin.length();
           ct=1;
            for(long long int i=0;i<len1;i++)
            {
                for(long long int j=0;j<len1;j++)
                {
                    if(palin[i]==str1[j])
                    {
                        cout<<j+1<<" ";
                        str1[j]=0;
                        break;
                    }
                }
            }
           cout<<endl;
              
        
    }
    while (next_permutation(half.begin(), half.end()));
if(ct==0)
cout<<"-1"<<endl;
    
}
 
// Driver Program to test above function
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
    string str1,str;
    cin>>str;
    str1=str;
    printAllPossiblePalindromes(str,str1);
    }
    return 0;
}
