// system templte library

#include<iostream>
#include<vector>

using namespace std;


int main(){

  vector<int> v = {1,2,3,4,5,6,7,8,9,10};

  v.push_back(12);

  v.insert(v.begin() + 4, 66); // insert value at index 4

  // for (int i = 0;i<v.size();i++){
  //   cout << v[i] << endl;
  // }

  for(int x : v){
    cout << x << endl;
  }

  v.resize(5, 99);

  for(int x : v){
    cout << x << endl;
  }

  v.assign(4, 500);

  for(int x : v){
    cout << x << endl;
  }

  // v.pop_back();

  // for (int i = 0;i<v.size();i++){
  //   cout << v[i] << endl;
  // }

  /*

    #include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};  // Declare and initialize a vector

    // 1. size() - Returns the number of elements in the vector
    cout << "Size: " << vec.size() << endl;

    // 2. push_back() - Adds an element to the end of the vector
    vec.push_back(6);
    cout << "Added 6 to the vector. New size: " << vec.size() << endl;

    // 3. pop_back() - Removes the last element of the vector
    vec.pop_back();
    cout << "Removed last element. New size: " << vec.size() << endl;

    // 4. front() - Returns the first element
    cout << "First element: " << vec.front() << endl;

    // 5. back() - Returns the last element
    cout << "Last element: " << vec.back() << endl;

    // 6. at() - Accesses element at a specific index
    cout << "Element at index 2: " << vec.at(2) << endl;

    // 7. empty() - Checks if the vector is empty
    cout << "Is the vector empty? " << (vec.empty() ? "Yes" : "No") << endl;

    // 8. clear() - Removes all elements from the vector
    vec.clear();
    cout << "After clearing, is the vector empty? " << (vec.empty() ? "Yes" : "No") << endl;

    return 0;
}

2. Advanced Vector Functions

cpp

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    // 1. insert() - Inserts elements at a specified position
    vec.insert(vec.begin() + 2, 25); // Inserts 25 at index 2
    cout << "After insert: ";
    for (int val : vec) cout << val << " ";
    cout << endl;

    // 2. erase() - Removes elements at a specified position or range
    vec.erase(vec.begin() + 2);  // Removes the element at index 2
    cout << "After erase: ";
    for (int val : vec) cout << val << " ";
    cout << endl;

    // 3. emplace_back() - Constructs an element in-place at the end
    vec.emplace_back(60);
    cout << "After emplace_back: ";
    for (int val : vec) cout << val << " ";
    cout << endl;

    // 4. swap() - Swaps the contents of two vectors
    vector<int> vec2 = {100, 200, 300};
    vec.swap(vec2);
    cout << "After swap, vec: ";
    for (int val : vec) cout << val << " ";
    cout << endl;

    // 5. resize() - Resizes the vector to contain a specific number of elements
    vec.resize(5, 99);  // Resize to 5 elements, new elements initialized with 99
    cout << "After resize: ";
    for (int val : vec) cout << val << " ";
    cout << endl;

    // 6. assign() - Assigns new values to the vector by replacing its current contents
    vec.assign(4, 500);  // Assign 4 elements, each with the value 500
    cout << "After assign: ";
    for (int val : vec) cout << val << " ";
    cout << endl;

    return 0;
}

3. Useful Iterator Functions

cpp

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    // 1. begin() - Returns an iterator pointing to the first element
    vector<int>::iterator it = vec.begin();
    cout << "First element using begin(): " << *it << endl;

    // 2. end() - Returns an iterator pointing to the past-the-end element
    cout << "Elements using iterators: ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 3. rbegin() - Returns a reverse iterator to the last element
    cout << "Elements in reverse: ";
    for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 4. rend() - Returns a reverse iterator to the past-the-beginning element
    return 0;
}

4. Capacity Functions

cpp

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    // 1. capacity() - Returns the current allocated capacity of the vector
    cout << "Initial capacity: " << vec.capacity() << endl;

    // 2. reserve() - Requests that the vector capacity be at least enough to contain n elements
    vec.reserve(10);  // Reserve capacity for 10 elements
    cout << "Capacity after reserve: " << vec.capacity() << endl;

    // 3. shrink_to_fit() - Reduces capacity to fit the current size
    vec.push_back(1);
    vec.shrink_to_fit();  // Shrinks capacity to size
    cout << "Capacity after shrink_to_fit: " << vec.capacity() << endl;

    return 0;
}


  */

  return 0;
}
