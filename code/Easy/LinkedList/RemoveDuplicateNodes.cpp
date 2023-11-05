// uses a while loop to traverse the nodes and remove duplicates with pointer rearrangement
using namespace std;
// This is an input struct. Do not edit.
class LinkedList{
 public:
  int value;
  LinkedList* next = nullptr;

  LinkedList(int value){ this->value = value; }
};

LinkedList* removeDuplicatesFromLinkedList(LinkedList* linkedList){
  LinkedList* curr = linkedList;
  
  while(curr && curr->next){
    
    if(curr->value == curr->next->value){
      LinkedList* nodeToDel = curr->next;
      curr->next = curr->next->next;
      delete nodeToDel;
      
    }else{
    curr = curr->next;
    }
  }

  return linkedList;
}