/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*
#include <iostream>
using namespace std;
int main(){
  string str_inr=getline(cin,str);
  int len_str= str_inr.length();
  char char_arr[len_str];
  for(int i=0;i<len_str;i++){
    char pop_ele;
    pop_ele=str_inr.pop_back();
    char_arr.
  }

}
*/

#include <iostream>

using namespace std;

int main()
{
    int i;
    char name[8] = "abhiram";
    int size=sizeof(name)/sizeof(name[0]);
    for (i = 0;i+1< sizeof(name)/sizeof(name[0]);i++)
    {
        if (name[i] == name[i+1])
        {
            cout<<"common elemnts found"<<endl;
            return 10;

        }

    }
    cout<<"every elemnt is different"<<endl;
    return 0;

    //return 0;
}

}
