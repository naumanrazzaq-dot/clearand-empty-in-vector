#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5};
                                //clear use to remove all values from  vector
    
    vec.clear();
    //but capacity will never decrease

    cout<<"size is"<<" :"<<vec.size()<<endl;
    cout<<"capacity is"<<": "<<vec.capacity()<<endl;


    //now another method to check that the vec is emepty or not is 
    //it will show 1 if it is empty and 0 if not

    cout<<"is empty "<<vec.empty();

};