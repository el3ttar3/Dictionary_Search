#include<iostream>
#include<fstream>
#include"Vector.h"
#include"LinkedList.h"

int main(){

  LinkedList list;
  Vector answer;
  std::string wordtosearch {""} , firstanswer{""};
  char keychar {''};
    
  ifstream file("testcase.txt");
    if (file.is_open()) {
        string word;
        while (getline(file, word)) { list.insert(word); }
        file.close();
    } 

  //First Required  
  std::cout<<"Enter The Word You Want To Search For : ";
  std::cin>>wordtosearch;
  firstanswer=(list.search(wordtosearch)) ? "Founded" : "Not Founded" ;
  std::cout<<"Given Word "<<wordtosearch<<" is -> "<<firstanswer<<std::endl;
    
  //Second Required 
  std::cout<<"Enter the char you want to search for : ";
  std::cin>>keychar;
  answer=list.start_with(keychar);
  answer.printVector();

}
