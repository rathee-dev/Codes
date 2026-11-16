#include <iostream>
#include <vector>
#include <algorithm>
// used for sort,..
using namespace std;

struct Item{
    int value;
    int weight;
};
// used to sort the items as per their ratio
bool compare(Item a , Item b){
    return ((double)a.value/a.weight) > ((double)b.value/b.weight);
}
 
double knapFrac(int W, vector<Item> &items){
    sort(items.begin(),items.end(),compare);
    double totatlValue=0.0;
    /*auto is storage classes
    vector is dynamic array*/
    for(auto item: items){
        if(W==0)
            break;
        if(item.weight<=W){
            W-=item.weight;//subtracting weight
            totatlValue+=item.value;//adding profit
        }
        else{
            double fraction = (double)W/item.weight;
            totatlValue+=item.value * fraction;
            W=0;//bag filled
        }
    }
    return totatlValue;
}

int main(){
    int n, W;
    cout<<"Enter no. of items: \n";
    cin>>n;
    vector<Item> items(n);
    cout<<"Enter value and weight of each item: \n";
    for(int i=0; i<n; i++){
        cin>>items[i].value>>items[i].weight;
    }
    cout<<"Enter Capactity of Knapsack: ";
    cin>>W;

    double maxValue=knapFrac(W,items);
    cout<<"Maximum profit is: "<<maxValue<<endl;
    return 0;
}
