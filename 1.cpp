#include<bits/stdc++.h>

using namespace std;


class bucket{
    public:
    int ld;
    int capacity;
    vector<int> v;

    int getsize(){
        return v.size();
    }

    void insert(int x){
        v.push_back(x);
    }

};



class hashmap{
    public:
    int gd;
    int capacity;
    vector<pair<int, bucket*>> list;


    
    void insert(int x){

    }

    void extend(){
        
        for (int i = 0; i < (1<<gd); i++)
        {
            //bucket* b=new bucket();
            list.push_back(make_pair((1<<gd)+i,(list)[i].second));

        }
        
    }


};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}


