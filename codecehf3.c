#include <iostream>
#include <algorithm> // sort, set_intersection
using namespace std;
string::size_type matching_characters(string s1, string s2) {
  sort(begin(s1), end(s1));
  sort(begin(s2), end(s2));
  string intersection;
  set_intersection(begin(s1), end(s1), begin(s2), end(s2),
                        back_inserter(intersection));
  return intersection.size();
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
	cout << matching_characters(str1,str2) << '\n'; 
   }
return 0;
}
