#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // Set up some numbers
    std::vector< int > v;
    v.reserve( 10 );
    for ( int i = 0; i < 10; i++ ) v.push_back( i );

    // Set the first half all equal to zero
    v[ 1 ] = v[ 2 ] = v[ 3 ] = v[ 4 ] = 0;
    cout << "Size = " << v.size() << endl;
   /* for(int i = 0;i < 10;++i)
    cout<<v[i]<<" ";
    cout<<endl;
    remove(v.begin(),v.end(),0);
    for(int i = 0;i < 10;++i)
    cout<<v[i]<<" ";
    cout<<endl;
    v.erase(v.begin(),v.end());
    for(int i = 0;i < 10;++i)
    cout<<v[i]<<" ";
    cout<<endl;*/

    // Physically remove all elements equal to zero
    v.erase(remove(v.begin(),v.end(),0),v.end());

    // Display size once again - minus removed elements
    cout << "Size = " << v.size() << endl;
    for(int i = 0;i < 10;++i)
    cout<<v[i]<<" ";
    cout<<endl;
    for(vector<int>::iterator it = v.begin();it!=v.end();++it)
    cout<<*it<<" ";
    cout<<endl;
    //vector<int>::iterator it = v.begin();
    cout<<v.size()<<endl;
    vector<int>::iterator iti = v.end()+v.size();
    cout<<*iti<<endl;
    return 0;
}
