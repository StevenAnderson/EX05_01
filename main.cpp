#include <iostream>
using namespace std;
//making the template function
template <typename T>
int LinearSearch(T list[], T key, int arraySize)
{   // for loop to cycle through list[]
    for (int i=0; i<arraySize; i++)
        /// if statement for matching key with list[]
    {   if (key == list[i]){
        cout << key << " matches list["<< i<<"]"<< endl;
        
        return i;}
    }
    return -1;
    
    
}



int main (){
    //variable for array size
    const int arraySize=6;
    //variables for int test
    int listint[arraySize]={1,2,3,4,5,6};
    int keyint=4;
    //variables for double test
    double listduo[arraySize]={1.2,3.4,5.6,7.8,9.01};
    double keyduo=9.01;
    
    //variables for string test
    string liststr[arraySize]={"dog", "cat", "bird", "fish", "bear"};
    string keystr="fish";
    
    
    
    
    //calling function for testing search
    LinearSearch(listint, keyint, arraySize);
    LinearSearch(listduo, keyduo, arraySize);
    LinearSearch(liststr, keystr, arraySize);

    
    
    
    return 0;
    
}
