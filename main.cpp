// CPSC 301: STL container examples provided by Chary Vielma
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

// passed by VALUE, original queue is not modified
void printQueue(queue<int> aQueue) {
    while(!aQueue.empty()) {
        cout << "Front: " << aQueue.front() << " Back: " << aQueue.back() << endl;
        aQueue.pop();
    }
    cout << '\n';
}

// passed by REFERENCE, original queue is modified
void printAndClearQueue(queue<int> & aQueue) {
    while(!aQueue.empty()) {
        cout << "Front: " << aQueue.front() << " Back: " << aQueue.back() << endl;
        aQueue.pop();
    }
    cout << '\n';
}

// passed by VALUE, original stack is not modified
void printStack(stack<int> aStack) {
    while(!aStack.empty()) {
        cout << "Top: " << aStack.top() << endl;
        aStack.pop();
    }
    cout << '\n';
}

// passed by REFERENCE, original stack is modified
void printAndClearStack(stack<int> & aStack) {
    while(!aStack.empty()) {
        cout << "Top: " << aStack.top() << endl;
        aStack.pop();
    }
    cout << '\n';
}

void printList(list<int> aList) {
    list<int>::iterator it;
    for(it = aList.begin(); it != aList.end(); it++) {
        cout << *it << " ";
    }
    cout << '\n';
}

void printVector(vector<int> aVector) {
    // can also use myVector.at(i) to access and print elements
    vector<int>::iterator it;
    for(it = aVector.begin(); it != aVector.end(); it++) {
        cout << *it << " ";
    }
    cout << '\n';
}

int main() {
    cout << "-------------------------DYNAMIC ARRAYS-------------------------\n";
    int sizeOfArray = 10;
    int * arr;
    arr = new int[sizeOfArray];
    cout << "Dynamic array of size " << sizeOfArray << " allocated.\n";
    cout << "Filling array with multiples of 10...\n\n";
    
    cout << "Array contents: ";
    for(int i =0; i < sizeOfArray; i++) {
        arr[i] = i * 10;
        cout << arr[i] << " ";
    }
    
    delete [] arr; // called new, therefore need to call delete when no longer needed
    cout << "\n\nDynamic memory returned to the heap.\n\n";
    
    cout << "-------------------------STACKS-------------------------\n";
    /*
    Stack example
    OPERATIONS: top(), empty(), push(), swap(), emplace()
    */
    stack<int> myStack;
    cout << "Stack declaration\n";
    cout << "Check if stack is empty (1 = True, 0 = False): " << myStack.empty() << endl << endl;

    cout << "Pushing ints: 1 2 3 4 5\n";
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);
    cout << "Check if stack is empty (1 = True, 0 = False): " << myStack.empty() << endl << endl;

    cout<< "printStack:\n";
    printStack(myStack);
    cout << "Stack size after printStack pass by value: " << myStack.size() << endl << endl;

    cout<< "printAndClearStack:\n";
    printAndClearStack(myStack);
    cout << "Stack size after printAndClearStack pass by reference: " << myStack.size() << endl << endl;

    cout << "Check if stack is empty (1 = True, 0 = False): " << myStack.empty() << endl << endl;

    cout << "-------------------------QUEUES-------------------------\n";
    /*
    Queue example
    OPERATIONS: front(), back(), push(num), pop(), empty(), size(), swap(), emplace()
    */
    queue<int> myQueue;
    cout << "Queue declaration\n";
    cout << "Check if queue is empty (1 = True, 0 = False): " << myQueue.empty() << endl << endl;

    cout << "Pushing ints: 1 2 3 4 5\n";
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    myQueue.push(4);
    myQueue.push(5);
    cout << "Check if queue is empty (1 = True, 0 = False): " << myQueue.empty() << endl << endl;

    cout << "printQueue:\n";
    printQueue(myQueue);
    cout << "Queue size after printQueue pass by value: " << myQueue.size() << endl << endl;

    cout << "printAndClearQueue:\n";
    printAndClearQueue(myQueue);
    cout << "Queue size after printAndClearQueue pass by reference: " << myQueue.size() << endl << endl;

    cout << "Check if queue is empty (1 = True, 0 = False): " << myQueue.empty() << endl << endl;

    cout << "-------------------------LISTS-------------------------\n";
    /*
    List example
    Visit http://www.cplusplus.com/reference/list/list/ for a list of all operations
    */
    list<int> myList;
    cout << "List declaration\n";
    cout << "Check if list is empty (1 = True, 0 = False): " << myList.empty() << endl << endl;

    cout << "Pushing ints 1-5 in varied order\n";
    myList.push_front(1);
    myList.push_back(2);
    myList.push_front(3);
    myList.push_back(4);
    myList.push_front(3);
    myList.push_back(2);
    myList.push_front(5);
    myList.push_back(3);
    myList.push_back(4);

    cout << "Check if list is empty (1 = True, 0 = False): " << myList.empty() << endl << endl;

    cout << "Size of list: " << myList.size() << endl;
    cout << "printList: ";
    printList(myList);
    cout << '\n';

    myList.reverse();
    cout << "After reverse list call: ";
    printList(myList);
    cout << '\n';

    myList.unique(); // removes consecutive duplicates
    cout << "After unique call: ";
    printList(myList);
    cout << '\n';

    myList.sort();
    cout << "After sort list call: ";
    printList(myList);
    cout << '\n';

    myList.pop_front();
    cout << "After pop front call: ";
    printList(myList);
    cout << '\n';

    myList.pop_back();
    cout << "After pop back call: ";
    printList(myList);
    cout << '\n';

    myList.push_back(3);
    cout << "After push_back(3) call: ";
    printList(myList);
    cout << '\n';

    myList.remove(3); // removes all occurences of parameter
    cout << "After remove(3) call: ";
    printList(myList);
    cout << '\n';

    myList.unique(); // removes consecutive duplicates
    cout << "After unique call: ";
    printList(myList);
    cout << '\n';

    myList.clear();
    cout << "Size of list after clear list call: " << myList.size() << endl << endl;


    cout << "-------------------------VECTORS-------------------------\n";
    /*
    Vector example
    OPERATIONS: Visit http://www.cplusplus.com/reference/vector/vector/ for a list of all operations
    */
    vector<int> myVector;
    cout << "Vector declaration\n";
    cout << "Check if vector is empty (1 = True, 0 = False): " << myVector.empty() << endl << endl;

    cout << "Assign value 0 to first 5 elements\n";
    myVector.assign(5, 0);
    printVector(myVector);
    cout << '\n';

    cout << "Update first 5 elements to ints 1-5\n";
    for(int i = 0; i < 5; i++) {
        myVector.at(i) = i + 1;
    }
    printVector(myVector);
    cout << '\n';

    myVector.push_back(6);
    myVector.push_back(7);
    vector<int>::iterator it = myVector.begin();
    myVector.insert(it, 8); // insert at front
    cout << "Push back 6, 7, then insert 8 at iterator (begin)\n";
    printVector(myVector);
    cout << '\n';

    cout << "Insert 9 two times at iterator (begin)\n";
    myVector.insert(it, 2, 9); // insert number 9 two times at iterator position
    printVector(myVector);
    cout << '\n';

    advance(it, myVector.size()/2); // advance iterator to point to middle of vector
    myVector.insert(it, 10); // use iterator to insert value 10
    cout << "Advance iterator to midvector to insert 10\n";
    printVector(myVector);
    cout << '\n';

    cout << "Advance iterator to midvector to erase midvalue:\n";
    myVector.erase(myVector.begin() + myVector.size()/2); // remove mid element, takes iterator argument
    printVector(myVector);
    cout << '\n';

    myVector.erase(myVector.begin(), myVector.begin() + myVector.size()/2); // remove first half of vector, takes iterator argument
    cout << "Erase first half of vector:\n";
    printVector(myVector);
    cout << '\n';

    myVector.pop_back();
    myVector.pop_back();
    cout << "Call to pop back 2 times:\n";
    printVector(myVector);
    cout << '\n';

    myVector.assign(2, 10);
    cout << "Assign value 10 for first 2 elements (deletes everything else)\n";
    printVector(myVector);
    cout << '\n';

    myVector.clear();
    cout << "Size of vector after clear list call: " << myVector.size() << endl << endl;

    cout << "-------------------------MAPS-------------------------\n";
    map<string, int> uniqueNames;
    
    vector<string> names;
    names.push_back("Boeing");
    names.push_back("Tesla");
    names.push_back("Amazon");
    names.push_back("Amazon");
    names.push_back("Raytheon");
    names.push_back("Boeing");
    names.push_back("Boeing");
    names.push_back("Intel");
    names.push_back("Intel");
    names.push_back("Facebook");
    names.push_back("Raytheon");
    
    for(int i = 0; i < names.size(); i++) {
        if(uniqueNames.insert(pair<string, int>(names.at(i), 1)).second == false) { // failed to add
            map<string, int>::iterator iter = uniqueNames.find(names.at(i));
            iter->second += 1;
        }
    }
    
    cout << "Ordered names and frequency:\n";
    map<string, int>::iterator iter = uniqueNames.begin();
    while(iter != uniqueNames.end()) {
        cout << iter->first << " : " << iter->second << endl;
        iter++;
    }
    
    cout << '\n';
    
    cout << "------------------------- UNORDERED MAPS-------------------------\n";
    unordered_map<string, int> unsortedNames;
    
    for(int i = 0; i < names.size(); i++) {
        if(unsortedNames.insert(pair<string, int>(names.at(i), 1)).second == false) { // failed to add
            unordered_map<string, int>::iterator iter2 = unsortedNames.find(names.at(i));
            iter2->second += 1;
        }
    }
    
    cout << "Unordered names and frequency:\n";
    unordered_map<string, int>::iterator iter2 = unsortedNames.begin();
    while(iter2 != unsortedNames.end()) {
        cout << iter2->first << " : " << iter2->second << endl;
        iter2++;
    }
    return 0;
}
