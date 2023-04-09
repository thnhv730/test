#include <iostream>
#include <vector>
using namespace std;
std::vector<int> vectorErase(std::vector<int>& v, int k) 
    {     vector<int>:: iterator it = v.begin();
                         advance(it,v.size()-k);
                         v.erase(it,v.end()); 
     return v; }
int main ()
{
  vector<int> v;
  for(int i=1; i<=7; i++){
  	v.push_back(i);
  }
  vectorErase(v,3);
  for(int i=0; i<v.size();i++){
  	cout<< v[i] << " ";
  }

  return 0;
}
