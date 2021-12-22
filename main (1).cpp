#include <iostream> 
#include <map> 
#include <string> 
using namespace std; 
 
int main() { 
    map<int, int> scores; 
    int sz, temp, query = 0;
    int max = -1; 
    int rank = 1; 

   cin >> sz; 
    for (int i = 0; i < sz; ++i) { //create ordered map that records frequency of each score 
        cin >> temp; 
        if (temp > max) { 
            max = temp; //keep reference to top score 
        }
        if (scores[temp]) { 
            ++scores[temp]; 
        } else { 
            scores[temp] = 1;    
        }    
        
    } 
 
    cin >> sz; 
    for (unsigned int i = 0; i < sz; ++i) {  //read queries and output
        cin >> query;
      if (query != max) {    //if score is not top score, iterate till end to find rank by summing frequencies 
        for (auto i = scores.find(query); i != scores.end(); ++i) { 
            if (query != i->first) { 
                rank += i->second; 
            }    
        }
      } 
      cout << rank;
      rank = 1;
      if (i != sz-1) { //ensures m lines of output  
        cout << endl;    
      }      
        
    }    
    
    return 0; 
}