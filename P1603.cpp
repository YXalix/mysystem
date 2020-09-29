#include <bits/stdc++.h>
using namespace std;

map <string,int> a;
map <string,int>::iterator iter;
vector<int> num;
void initmap()
{
    a["one"] = 1;
    a["two"] = 2;
    a["three"] = 3;
    a["four"] = 4;
    a["five"] = 5;
    a["six"] = 6;
    a["seven"] = 7;
    a["eight"] = 8;
    a["nine"] = 9;
    a["ten"] = 10;
    a["eleven"] = 11;
    a["twelve"] = 12;
    a["thirteen"] = 13;
    a["fourteen"] = 14;
    a["fifteen"] = 15;
    a["sixteen"] = 16;
    a["seventeen"] = 17;
    a["eighteen"] = 18;
    a["nineteen"] = 19;
    a["twenty"] = 20;
    a["a"] = 1;
    a["both"] = 2;
    a["another"] = 1;
    a["first"] = 1;
    a["second"] = 2;
    a["third"] = 3;
}

int main()
{
    initmap();
    //freopen("1.txt","r",stdin);
    string word;
    for(int i = 0;i<6;i++)
    {
        cin>>word;
        for(int i = 0;i<word.size();i++)
        {
            word[i] = tolower(word[i]);
        }
        iter = a.find(word);
        if(iter != a.end())
        {
            int temp = iter->second;
            temp = (temp * temp) % 100;
            num.push_back(temp);
        }
    }
    sort(num.begin(),num.end());
    long long int ans = 0;
    for(int i = 0;i<num.size();i++)
    {
        ans = ans * 100 + num[i];
    }
    cout<<ans<<endl;
}