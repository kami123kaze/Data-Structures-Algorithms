//?Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have the same key values.

#include<iostream>
#include<map>
#include<unordered_map>
#include<string>
#include<set>
#include<unordered_set>

void PrintMap(std::map<int,std::string> Mp){
    for(auto it:Mp){
        std::cout << it.first << " . " << it.second <<std::endl;  
    }
}
void PrintMap2(std::unordered_map<int,std::string> Mp){
    for(auto it:Mp){
        std::cout << it.first << " . " << it.second <<std::endl;  
    }
}
void PrintSet1(std::set<std::string>s1){
    for(auto i:s1){
        std::cout << i << " ";
    }
}
int main(){
   std::map<int,std::string> Mp;
   Mp[1] = "My";
   Mp[2] = "Name";
   Mp[3] = "is";
   Mp[5] = "maybe";
   Mp[4] = "daksh";

  // PrintMap(Mp);

   std::unordered_map<int,std::string> Mp1;
   Mp1[1] = "My";
   Mp1[2] = "Name";
   Mp1[3] = "is";
   Mp1[5] = "maybe";
   Mp1[4] = "daksh";

 // PrintMap2(Mp1);

 std::set<std::string> S1;
 S1.insert("Hello");
 S1.insert("There");
 S1.insert("kanobi");

 //PrintSet1(S1);

 std::unordered_set<std::string> S2;
 S2.insert("Hello");
 S2.insert("There");
 S2.insert("kanobi");

 //PrintSet1(S2);
}