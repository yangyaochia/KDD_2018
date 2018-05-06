#include<iostream>
#include<vector>

using namespace std;

int main()
{
   vector< vector<int> > grid_map(10, vector<int>(20));

   int a = 0;

   for(int i = 0; i < grid_map.size(); i++)
   {
       for(int j = 0; j < grid_map[0].size(); j++)
       {
          a += 1;
          cout << grid_map[i][j] << " " ;
       }
       a += 2;
       cout << endl;
   }
   cout << "hello world" << endl;
   return 0;
}
