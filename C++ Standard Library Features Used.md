## C++ Standard Library Features Used for Coding 


### 1. Limits

  - `INT_MAX` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1590.%20Make%20Sum%20Divisible%20by%20P/00_Naive.cpp) 

  - `INT_MIN` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3755.%20Find%20Maximum%20Balanced%20XOR%20Subarray%20Length/00_Naive.cpp)

  - `LLONG_MIN` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3381.%20Maximum%20Subarray%20Sum%20With%20Length%20Divisible%20by%20K/03_Most_Optimal_Prefix_Sum_and_Hash_Map_Approach.cpp) 

  - `LLONG_MAX` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3381.%20Maximum%20Subarray%20Sum%20With%20Length%20Divisible%20by%20K/03_Most_Optimal_Prefix_Sum_and_Hash_Map_Approach.cpp)

### 2. Type Casting & Conversions

  - `static_cast<data_type>` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3381.%20Maximum%20Subarray%20Sum%20With%20Length%20Divisible%20by%20K/00_Naive.cpp)

  - `to_string()` | [Example Code](http://github.com/aryan04-t/LeetCode-Sprint/blob/master/3751.%20Total%20Waviness%20of%20Numbers%20in%20Range%20I/00_Optimal.cpp)

  - `stoi()` 
  
    - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3754.%20Concatenate%20Non-Zero%20Digits%20and%20Multiply%20by%20Sum%20I/00_Optimal.cpp)  

    - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3783.%20Mirror%20Distance%20of%20an%20Integer/00_Optimal_String_Approach.cpp) 

    - Throws **Error** if String is Empty

### 3. Basic Utilities

  - `min()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1590.%20Make%20Sum%20Divisible%20by%20P/00_Naive.cpp)

  - `max()` 
  
    - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3381.%20Maximum%20Subarray%20Sum%20With%20Length%20Divisible%20by%20K/00_Naive.cpp)

    - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3828.%20Final%20Element%20After%20Subarray%20Deletions/00_Optimal_Approach.cpp) 

  - `pair<data_type, data_type>` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3318.%20Find%20X-Sum%20of%20All%20K-Long%20Subarrays%20I/00_Naive_Hash_Map_and_Sorting_Approach.cpp)

### 4. Strings 

  - `string` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3228.%20Maximum%20Number%20of%20Operations%20to%20Move%20Ones%20to%20the%20End/00_Optimal.cpp) 

    - Member Functions:

      - `empty()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3775.%20Reverse%20Words%20With%20Same%20Vowel%20Count/01_Optimal.cpp) 

      - `length()` 

      - `size()` 

      - `substr()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3760.%20Maximum%20Substrings%20With%20Distinct%20Start/02_Naive_Optimal_Simulation_Approach.cpp) 

      - `push_back()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3838.%20Weighted%20Word%20Mapping/00_Optimal_Approach.cpp) 

      - `pop_back()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3775.%20Reverse%20Words%20With%20Same%20Vowel%20Count/00_Naive_Optimal.cpp) 

      - `reserve()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3775.%20Reverse%20Words%20With%20Same%20Vowel%20Count/02_Most_Optimal.cpp) 

    - String Iterators: 

      - `normal iterators`: 

        - `begin() iterator` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3775.%20Reverse%20Words%20With%20Same%20Vowel%20Count/02_Most_Optimal.cpp) 

        - `end() iterator` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3775.%20Reverse%20Words%20With%20Same%20Vowel%20Count/02_Most_Optimal.cpp) 
  
      - `reverse iterators`: 

        - `rbegin() iterator` | [Example Code - EMPTY LINK](EMPTY_LINK) 

        - `rend() iterator` | [Example Code - EMPTY LINK](EMPTY_LINK) 

  - `stringstream` | [Notes](https://github.com/aryan04-t/LeetCode-Jog/tree/master/00_Maths%20and%20Coding%20-%20Fundamentals%20and%20Tricks%20for%20Revision/00_stringstream%20Notes) | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3775.%20Reverse%20Words%20With%20Same%20Vowel%20Count/02_Most_Optimal.cpp) 

  - `isalpha()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3813.%20Vowel-Consonant%20Score/01_Another_Optimal_Approach.cpp) 

    - Only returns true for 52 alphabet characters (a to z) and (A to Z), else false 

### 5. Data Structures 

  - `vector<data_type>` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3318.%20Find%20X-Sum%20of%20All%20K-Long%20Subarrays%20I/00_Naive_Hash_Map_and_Sorting_Approach.cpp) 

    - Member Functions:

      - `empty()` | [Example Code](http://github.com/aryan04-t/LeetCode-Sprint/blob/master/3834.%20Merge%20Adjacent%20Equal%20Elements/02_Optimal_Vector_Approach.cpp) 

      - `size()` | [Example Code](http://github.com/aryan04-t/LeetCode-Sprint/blob/master/3834.%20Merge%20Adjacent%20Equal%20Elements/02_Optimal_Vector_Approach.cpp) 

      - `back()` | [Example Code](http://github.com/aryan04-t/LeetCode-Sprint/blob/master/3834.%20Merge%20Adjacent%20Equal%20Elements/02_Optimal_Vector_Approach.cpp) 

      - `push_back()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3834.%20Merge%20Adjacent%20Equal%20Elements/00_Naive_Simulation_Approach.cpp) 

      - `pop_back()` | [Example Code](http://github.com/aryan04-t/LeetCode-Sprint/blob/master/3834.%20Merge%20Adjacent%20Equal%20Elements/02_Optimal_Vector_Approach.cpp) 

      - `insert()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/66.%20Plus%20One/01_Another_Optimal_Approach.cpp) 

      - `erase()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3507.%20Minimum%20Pair%20Removal%20to%20Sort%20Array%20I/01_Most_Optimal_STL_Approach.cpp) 
      
      - `reserve()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3782.%20Last%20Remaining%20Integer%20After%20Alternating%20Deletion%20Operations/00_Naive_Simulation_Approach.cpp)

    - Vector Iterators:

      - Vector iterators are called `Random Access Iterator`, they can **jump to any position in constant time**, and they're **bidirectional** in nature, that means they can move forward and backward both. (Note: `deque` and `array` STL containers also have **random access iterator**) 

      - `normal iterators`: 
      
        - `begin() iterator` 

          - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3759.%20Count%20Elements%20With%20at%20Least%20K%20Greater%20Values/01_Another_Optimal_Sorting_Approach.cpp) 

          - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3774.%20Absolute%20Difference%20Between%20Maximum%20and%20Minimum%20K%20Elements/02_Optimal_Sorting_STL_Approach.cpp) 

          - [Example Code-3](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/189.%20Rotate%20Array/03_Most_Optimal_Reversing_Approach.cpp) 

        - `end() iterator` 
        
          - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3759.%20Count%20Elements%20With%20at%20Least%20K%20Greater%20Values/01_Another_Optimal_Sorting_Approach.cpp) 

          - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/189.%20Rotate%20Array/03_Most_Optimal_Reversing_Approach.cpp) 

          - [Example Code-3](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3834.%20Merge%20Adjacent%20Equal%20Elements/00_Naive_Simulation_Approach.cpp) 

      - `reverse iterators`:

        - `rbegin() iterator` 

          - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3774.%20Absolute%20Difference%20Between%20Maximum%20and%20Minimum%20K%20Elements/01_Naive_Optimal_Sorting_STL_Approach.cpp) 

          - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3774.%20Absolute%20Difference%20Between%20Maximum%20and%20Minimum%20K%20Elements/02_Optimal_Sorting_STL_Approach.cpp) 

          - [Example Code-3](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/189.%20Rotate%20Array/03_Most_Optimal_Reversing_Approach.cpp) 

        - `rend() iterator` 
        
          - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3774.%20Absolute%20Difference%20Between%20Maximum%20and%20Minimum%20K%20Elements/01_Naive_Optimal_Sorting_STL_Approach.cpp) 

          - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/189.%20Rotate%20Array/03_Most_Optimal_Reversing_Approach.cpp) 

  - `unordered_map<data_type, data_type> mp` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/560.%20Subarray%20Sum%20Equals%20K/01_Optimal_Prefix_Sum_and_Hash_Map_Approach.cpp) 

    - `pair<data_type, data_type>` **cannot be a key** of **unordered_map** by default, because default hash function is not present for pair data_type in C++, you have to write a custom hash functor to make the pair work as a key of unordered_map 

    - Member Functions: 

      - `empty()` 

      - `size()` 

      - `mp[key] = value` | [Example Code-1](http://github.com/aryan04-t/LeetCode-Sprint/blob/master/560.%20Subarray%20Sum%20Equals%20K/01_Optimal_Prefix_Sum_and_Hash_Map_Approach.cpp) | [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3829.%20Design%20Ride%20Sharing%20System/01_Most_Optimal_Queue_and_Hash_Map_Approach.cpp)
      
      - `erase()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3829.%20Design%20Ride%20Sharing%20System/01_Most_Optimal_Queue_and_Hash_Map_Approach.cpp) 

      - `count()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3829.%20Design%20Ride%20Sharing%20System/01_Most_Optimal_Queue_and_Hash_Map_Approach.cpp) 


      - `find()` | [Example Code - EMPTY LINK](EMPTY_LINK) 

      - `How to loop on unordered_map` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3318.%20Find%20X-Sum%20of%20All%20K-Long%20Subarrays%20I/00_Naive_Hash_Map_and_Sorting_Approach.cpp) 
      
    - Unordered Map Iterators: 

      - `normal iterators`: 

        - `begin() iterator` | [Example Code - EMPTY LINK](EMPTY_LINK) 
        
        - `end() iterator` | [Example Code - EMPTY LINK](EMPTY_LINK) 

      - `No reverse iterators`
    
  - `unordered_set<data_type>` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1930.%20Unique%20Length-3%20Palindromic%20Subsequences/00_Naive_Recursive_Approach.cpp) 

    - `pair<data_type, data_type>` **cannot be a key** of **unordered_set** by default, because default hash function is not present for pair data_type in C++, you have to write a custom hash functor to make the pair work as a key of unordered_set 

    - Member Functions:

      - `insert()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3829.%20Design%20Ride%20Sharing%20System/02_Most_Optimal_Queue_and_Hash_Set_Approach.cpp) 

      - `erase()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3829.%20Design%20Ride%20Sharing%20System/02_Most_Optimal_Queue_and_Hash_Set_Approach.cpp) 

      - `find()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3775.%20Reverse%20Words%20With%20Same%20Vowel%20Count/00_Naive_Optimal.cpp)

      - `count()` | [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3775.%20Reverse%20Words%20With%20Same%20Vowel%20Count/01_Optimal.cpp) | [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3829.%20Design%20Ride%20Sharing%20System/02_Most_Optimal_Queue_and_Hash_Set_Approach.cpp) 

    - Unordered Set Iterators: 

      - `normal iterators`: 

        - `begin() iterator` | [Example Code - EMPTY LINK](EMPTY_LINK) 

        - `end() iterator` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3775.%20Reverse%20Words%20With%20Same%20Vowel%20Count/00_Naive_Optimal.cpp)

      - `No reverse iterators` 

  - `set<data_type>` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3815.%20Design%20Auction%20System/00_My_Naive_Optimal_Approach.cpp) 

    - This is an `ordered set`, which is a tree based set, this set in C++ under the hood uses Red-Black Trees to store the values 

    - **Red-Black Trees** are `self-balancing binary search trees`

    - Member Functions: 

      - `empty()` | [Example Code - EMPTY LINK](EMPTY_LINK) 

      - `insert()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3815.%20Design%20Auction%20System/00_My_Naive_Optimal_Approach.cpp)

      - `erase()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3815.%20Design%20Auction%20System/00_My_Naive_Optimal_Approach.cpp)

    - Ordered Set Iterators: 

      - `normal iterators`: 

        - `begin() iterator` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3815.%20Design%20Auction%20System/02_Naive_Optimal_Ordered_Set_and_Hash_Map_and_Hash_Set_Approach.cpp) 

        - `end() iterator` | [Example Code - EMPTY LINK](EMPTY_LINK) 

      - `reverse iterators`: 

        - `rbegin() iterator` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3815.%20Design%20Auction%20System/02_Naive_Optimal_Ordered_Set_and_Hash_Map_and_Hash_Set_Approach.cpp) 

        - `rend() iterator` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3815.%20Design%20Auction%20System/02_Naive_Optimal_Ordered_Set_and_Hash_Map_and_Hash_Set_Approach.cpp) 
  
  - `stack<data_type>` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3834.%20Merge%20Adjacent%20Equal%20Elements/01_Naive_Optimal_Stack_Approach.cpp) 

    - Member Functions: 

      - `empty()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3834.%20Merge%20Adjacent%20Equal%20Elements/01_Naive_Optimal_Stack_Approach.cpp) 

      - `size()`  | [Example Code - EMPTY LINK](EMPTY_LINK) 

      - `top()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3834.%20Merge%20Adjacent%20Equal%20Elements/01_Naive_Optimal_Stack_Approach.cpp) 

      - `push()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3834.%20Merge%20Adjacent%20Equal%20Elements/01_Naive_Optimal_Stack_Approach.cpp) 

      - `pop()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3834.%20Merge%20Adjacent%20Equal%20Elements/01_Naive_Optimal_Stack_Approach.cpp) 

  - `queue<data_type>` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3795.%20Minimum%20Subarray%20Length%20With%20Distinct%20Sum%20At%20Least%20K/02_Optimal_Sliding_Window_Queue_Approach.cpp) 

    - Member Functions: 

      - `empty()` | [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1161.%20Maximum%20Level%20Sum%20of%20a%20Binary%20Tree/02_Optimal_BFS_Level_Order_Traversal_Approach.cpp) | [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3829.%20Design%20Ride%20Sharing%20System/00_Optimal_Only_Queue_Approach.cpp)

      - `size()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1161.%20Maximum%20Level%20Sum%20of%20a%20Binary%20Tree/02_Optimal_BFS_Level_Order_Traversal_Approach.cpp) 

      - `push()` | [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3795.%20Minimum%20Subarray%20Length%20With%20Distinct%20Sum%20At%20Least%20K/02_Optimal_Sliding_Window_Queue_Approach.cpp) | [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3829.%20Design%20Ride%20Sharing%20System/01_Most_Optimal_Queue_and_Hash_Map_Approach.cpp) 

      - `pop()` | [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3795.%20Minimum%20Subarray%20Length%20With%20Distinct%20Sum%20At%20Least%20K/02_Optimal_Sliding_Window_Queue_Approach.cpp) | [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3829.%20Design%20Ride%20Sharing%20System/01_Most_Optimal_Queue_and_Hash_Map_Approach.cpp) 

      - `front()` | [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3795.%20Minimum%20Subarray%20Length%20With%20Distinct%20Sum%20At%20Least%20K/02_Optimal_Sliding_Window_Queue_Approach.cpp) | [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3829.%20Design%20Ride%20Sharing%20System/01_Most_Optimal_Queue_and_Hash_Map_Approach.cpp) 

  - `priority_queue<data_type>` 

    - Min Heap | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3318.%20Find%20X-Sum%20of%20All%20K-Long%20Subarrays%20I/03_Naive_Heap_Approach.cpp) 

    - Min Heap & Max Heap | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3774.%20Absolute%20Difference%20Between%20Maximum%20and%20Minimum%20K%20Elements/03_Most_Optimal_Heap_Approach.cpp) 

    - **By Default** `priority_queue<data_type>` behaves like **Max Heap** 

    - Member Functions: 

      - `empty()` 

      - `size()` 

      - `push()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3774.%20Absolute%20Difference%20Between%20Maximum%20and%20Minimum%20K%20Elements/03_Most_Optimal_Heap_Approach.cpp)

      - `pop()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3774.%20Absolute%20Difference%20Between%20Maximum%20and%20Minimum%20K%20Elements/03_Most_Optimal_Heap_Approach.cpp)

  - `forward_list<data_type>`
    
    - A STL container for `Singly-linked list` data structure 

    - The pointers in `forward_list` are managed internally and you cannot access them directly. 

    - Member Functions: 

      - `empty()` 

      - `size()` ✗ NOT THERE

      - `front()` 

      - `clear()` 

      - `push_front()` | [Example Code - EMPTY LINK](EMPTY_LINK) 

      - `pop_front()` | [Example Code - EMPTY LINK](EMPTY_LINK) 

      - `insert_after()` | [Example Code - EMPTY LINK](EMPTY_LINK) 

      - `erase_after()` | [Example Code - EMPTY LINK](EMPTY_LINK) 

    - Forward List Iterators: 

      - `forward_list` iterators are `forward iterators` - they only support the increment operator, **because** in a **singly-linked list** each **node only points to the next node, not the previous one.**

        ```cpp
          ++it or it++ (increment)     ✓ supported
          --it or it-- (decrement)     ✗ NOT supported
        ```
        
      - `forward_list` iterators don't support random access operations like `vector` iterators

        ```cpp
          it + n or it - n (arithmetic)  ✗ NOT supported
          it += n or it -= n             ✗ NOT supported
          it[n] (subscript operator)     ✗ NOT supported
        ```      

      - `begin() iterator` | [Example Code - EMPTY LINK](EMPTY_LINK) 
      
      - `end() iterator` | [Example Code - EMPTY LINK](EMPTY_LINK) 

      - `before_begin() iterator` | [Example Code - EMPTY LINK](EMPTY_LINK) 
        
        - Iterator to position before first element (unique to forward_list) 

  - `list<data_type>` 
  
    - A STL container for `Doubly-linked list` data structure 

    - The pointers in `list` are managed internally and you cannot access them directly. 

    - Member Functions: 

      - `empty()` 
      
      - `size()` 

      - `clear()` 

      - `front()` | [Example Code - EMPTY LINK](EMPTY_LINK) 
      
      - `back()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/189.%20Rotate%20Array/02_Optimal_Doubly_Linked_List_Approach.cpp) 

      - `push_front()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/189.%20Rotate%20Array/02_Optimal_Doubly_Linked_List_Approach.cpp) 
      
      - `push_back()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/189.%20Rotate%20Array/02_Optimal_Doubly_Linked_List_Approach.cpp) 

      - `pop_front()` | [Example Code - EMPTY LINK](EMPTY_LINK) 

      - `pop_back()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/189.%20Rotate%20Array/02_Optimal_Doubly_Linked_List_Approach.cpp) 

      - `insert()` | [Example Code - EMPTY LINK](EMPTY_LINK) 
      
      - `erase()` | [Example Code - EMPTY LINK](EMPTY_LINK) 

      - `sort()` 
      
        - Member function of list, not std::sort 

        - List has its own **sort()** because the general **std::sort()** needs random access iterators for working, and list doesn't have them. 

        - List's **sort()** uses `merge sort` which is perfect for linked structures. (typically bottom-up iterative version of merge sort is used) 

        - **Time Complexity:** O(n log n) guaranteed 
        
          - No worst case of O(n^2) like quicksort 

        - **Space Complexity:** O(1) 
        
          - Sorts in-place by rewiring pointers (no extra arrays needed!) 

      - `reverse()`

        - List member function, **not std::reverse** 

        - **std::reverse()** does work with list, But it's inefficient for lists, because **std::reverse()** swaps elements by VALUE - O(n) swaps, each swap copies data 

        - List's member function **reverse()** just rewires pointers - much faster! 

    - List Iterators: 

      - `list` iterators are `bidirectional iterators` - they support increment and decrement operators both, **because** in a **doubly-linked list** each **node points to the next and previous nodes both**

      - `list` iterators also don't support random access operations like `vector` iterators

        ```cpp
          it + n or it - n (arithmetic)  ✗ NOT supported
          it += n or it -= n             ✗ NOT supported
          it[n] (subscript operator)     ✗ NOT supported
        ```

      - `normal iterators`: 
        
        - Supports increment and decrement operators both, as these are `bidirectional`
        
          ```cpp
            ++it or it++ (increment)     ✓ supported 
            --it or it-- (decrement)     ✓ supported 
          ```

        - `begin() iterator` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/189.%20Rotate%20Array/02_Optimal_Doubly_Linked_List_Approach.cpp) 

        - `end() iterator` | [Example Code - EMPTY LINK](EMPTY_LINK)

      - `reverse iterators`: 
        
        - There iterators help you traverse in reverse, and these iterators also support increment and decrement operators both, as these are also `bidirectional`  
        
          ```cpp
            ++it or it++ (increment)     ✓ supported 
            --it or it-- (decrement)     ✓ supported 
          ```

        - `rbegin() iterator` | [Example Code - EMPTY LINK](EMPTY_LINK)
        
        - `rend() iterator` | [Example Code - EMPTY LINK](EMPTY_LINK)

### 6. Iterators 

  - `Iterator Arithmetic of vector<data_type>::iterator it`

    - The type of iterators vector has are called `Random Access Iterator`, they can **jump to any position in constant time**, and they're **bidirectional** in nature, that means they can move forward and backward both. 

    - `it - nums.begin();` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3759.%20Count%20Elements%20With%20at%20Least%20K%20Greater%20Values/02_Most_Optimal_Sorting_and_Binary_Search_Approach.cpp) 
  
      - Gives index at which the "it" iterator points in the vector<data_type> 

    - `it += k;` 
    
      - Here k is an **int**, this makes the pointer move forward by k steps

      - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3774.%20Absolute%20Difference%20Between%20Maximum%20and%20Minimum%20K%20Elements/02_Optimal_Sorting_STL_Approach.cpp) 

      - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3794.%20Reverse%20String%20Prefix/01_Most_Optimal_Approach.cpp)

      - [Example Code-3](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/189.%20Rotate%20Array/03_Most_Optimal_Reversing_Approach.cpp) 

    - `it -= k;` 

      - Here k is an **int**, this makes the pointer move backward by k steps 

  - `iterator behaves as a pointer`   

    - You can dereference it like this to get the data: *it | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3766.%20Minimum%20Operations%20to%20Make%20Binary%20Palindrome/01_Optimal_Precomputation_And_Binary_Search_Approach.cpp) 

    - In case iterator is pointing at an object like pair<int, int> you can also access the object like this: (*it).first `or` it->first | [Example Code - EMPTY LINK](EMPTY_LINK) 

### 7. Algorithms

  - `accumulate()` 

    - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3512.%20Minimum%20Operations%20to%20Make%20Array%20Sum%20Divisible%20by%20K/00_Optimal_STL.cpp)

    - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3774.%20Absolute%20Difference%20Between%20Maximum%20and%20Minimum%20K%20Elements/01_Naive_Optimal_Sorting_STL_Approach.cpp) 

    - [Example Code-3](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3774.%20Absolute%20Difference%20Between%20Maximum%20and%20Minimum%20K%20Elements/02_Optimal_Sorting_STL_Approach.cpp) 

  - `count_if()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3775.%20Reverse%20Words%20With%20Same%20Vowel%20Count/02_Most_Optimal.cpp) 

  - `sort()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3759.%20Count%20Elements%20With%20at%20Least%20K%20Greater%20Values/00_Optimal_Sorting_Approach.cpp) 

    - **Default:** Non-Decreasing Sort

    - Algo used under the hood **intro-sort**

    - `std::sort()` requires random access iterators for working, that's why `std::sort()` works with `vector`, but it doesn't works with `list`, because list only provides bidirectional iterators. 

  - `is_sorted()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3507.%20Minimum%20Pair%20Removal%20to%20Sort%20Array%20I/01_Most_Optimal_STL_Approach.cpp) 

  - `greater<data_type>()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3759.%20Count%20Elements%20With%20at%20Least%20K%20Greater%20Values/00_Optimal_Sorting_Approach.cpp) 

  - `Custom Sort` | [Notes](https://github.com/aryan04-t/LeetCode-Jog/blob/master/00_Maths%20and%20Coding%20-%20Fundamentals%20and%20Tricks%20for%20Revision/33_Custom%20Sorting%20in%20C%2B%2B.md) | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3769.%20Sort%20Integers%20by%20Binary%20Reflection/00_Optimal_Custom_Sort_Approach.cpp)

  - `reverse()` 

    - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3750.%20Minimum%20Number%20of%20Flips%20to%20Reverse%20Binary%20String/00_Optimal.cpp) 

    - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3775.%20Reverse%20Words%20With%20Same%20Vowel%20Count/00_Naive_Optimal.cpp) 

    - [Example Code-3](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/189.%20Rotate%20Array/03_Most_Optimal_Reversing_Approach.cpp) 

  - `lower_bound()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3759.%20Count%20Elements%20With%20at%20Least%20K%20Greater%20Values/02_Most_Optimal_Sorting_and_Binary_Search_Approach.cpp) 

    - Under the hood implemented using **binary search** 

    - Only works on sorted arrays 

  - `swap()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3781.%20Maximum%20Score%20After%20Binary%20Swaps/00_Naive_Approach.cpp) 

### 8. Mathematics

  - `abs()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3761.%20Minimum%20Absolute%20Distance%20Between%20Mirror%20Pairs/00_Naive.cpp) 

  - `llabs()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3776.%20Minimum%20Moves%20to%20Balance%20Circular%20Array/00_Naive_Greedy_Approach.cpp) 

  - `floor()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3813.%20Vowel-Consonant%20Score/00_Optimal_Approach.cpp) 

  - `ceil()` 

    - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3779.%20Minimum%20Number%20of%20Operations%20to%20Have%20Distinct%20Elements/02_Most_Optimal.cpp)

    - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3782.%20Last%20Remaining%20Integer%20After%20Alternating%20Deletion%20Operations/00_Naive_Simulation_Approach.cpp) 

  - `sqrt()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1390.%20Four%20Divisors/01_Optimal_Approach.cpp) 

  - `log2()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3827.%20Count%20Monobit%20Integers/02_Most_Optimal_STL_Approach.cpp) 

  - `bit_width()` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3827.%20Count%20Monobit%20Integers/03_Another_Most_Optimal_STL_Approach.cpp) 
    
    - This function calculates the **smallest number of bits** required to represent a given **unsigned integer** value. 

    - And this function only works with unsigned integer types **(e.g. unsigned int, unsigned long long, etc.).**  

### 9. Data Types

  - `long long` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3754.%20Concatenate%20Non-Zero%20Digits%20and%20Multiply%20by%20Sum%20I/00_Optimal.cpp)

  - `double` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3779.%20Minimum%20Number%20of%20Operations%20to%20Have%20Distinct%20Elements/02_Most_Optimal.cpp) 

### 10. Advanced Features

  - `Lambda Expression` 

    - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3190.%20Find%20Minimum%20Operations%20to%20Make%20All%20Elements%20Divisible%20by%20Three/01_Optimal_STL.cpp) 

    - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3769.%20Sort%20Integers%20by%20Binary%20Reflection/00_Optimal_Custom_Sort_Approach.cpp) 

    - [Example Code-3](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3774.%20Absolute%20Difference%20Between%20Maximum%20and%20Minimum%20K%20Elements/01_Naive_Optimal_Sorting_STL_Approach.cpp) 

    - [Example Code-4](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3775.%20Reverse%20Words%20With%20Same%20Vowel%20Count/02_Most_Optimal.cpp) 

  - `using` keyword 

    - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3754.%20Concatenate%20Non-Zero%20Digits%20and%20Multiply%20by%20Sum%20I/01_Most_Optimal.cpp) 

    - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3774.%20Absolute%20Difference%20Between%20Maximum%20and%20Minimum%20K%20Elements/03_Most_Optimal_Heap_Approach.cpp) 

  - `Custom Hashing Functor` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3755.%20Find%20Maximum%20Balanced%20XOR%20Subarray%20Length/02_Most_Optimal_Prefix_Sum_and_Hash_Map_Approach.cpp) 

    - **Functor** - A object which is callable like a function - creator by defining **size_t operator()** in a **C++ class** 

    - In a Custom Hash Functor `operator()` definition should always have **const specified in front** of it, and the operator's definition should be **public** 
    
    - The const gives surety that no static or non-static data members of class are manipulated by the operator() definition 

    - **Custom Hash Functor** has to be defined in cases like, when `pair<int, int>` is a key of an `unordered_map` or `unordered_set`, Ex: `unordered_map<pair<int, int>, int, PairHash> mp;` 

    - A class should always have **public, private and protected** modifiers as per need (By default everything is private)

    - A class always end with a **semicolon ;** 

    - Also, always use bitwise operators to create hash, they create a 

  - `hash<data_type>` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3755.%20Find%20Maximum%20Balanced%20XOR%20Subarray%20Length/02_Most_Optimal_Prefix_Sum_and_Hash_Map_Approach.cpp) 

  - `inline static` Keywords | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3766.%20Minimum%20Operations%20to%20Make%20Binary%20Palindrome/01_Optimal_Precomputation_And_Binary_Search_Approach.cpp) 

    - **inline** keyword initializes a static variable in-place  

  - `move()` 

    - Helps in data ownership transfer of a vector in O(1) 
  
    - [Example Code-1](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3782.%20Last%20Remaining%20Integer%20After%20Alternating%20Deletion%20Operations/00_Naive_Simulation_Approach.cpp) 

    - [Example Code-2](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3507.%20Minimum%20Pair%20Removal%20to%20Sort%20Array%20I/00_Optimal_Approach.cpp) 

    - [Example Code-3](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3829.%20Design%20Ride%20Sharing%20System/00_Optimal_Only_Queue_Approach.cpp) 

    - [Example Code-4](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3834.%20Merge%20Adjacent%20Equal%20Elements/00_Naive_Simulation_Approach.cpp) 

  - `nullptr` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1161.%20Maximum%20Level%20Sum%20of%20a%20Binary%20Tree/00_Naive_Optimal_BFS_and_Hash_Map_Approach.cpp) 
  
  - `auto` keyword | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1161.%20Maximum%20Level%20Sum%20of%20a%20Binary%20Tree/00_Naive_Optimal_BFS_and_Hash_Map_Approach.cpp) 

  - `auto` keyword based `destructuring containers` | [Notes](https://github.com/aryan04-t/LeetCode-Jog/blob/master/10_Trees/019_987.%20Vertical%20Order%20Traversal%20of%20a%20Binary%20Tree/02_Destructuring_of_Structured_Datatypes_in_C%2B%2B.md) | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/1161.%20Maximum%20Level%20Sum%20of%20a%20Binary%20Tree/00_Naive_Optimal_BFS_and_Hash_Map_Approach.cpp) 

    - also known as `auto keyword` and `Structured Binding Functionality` of C++ for Destructuring STL Containers

### 11. Headers

  - `#include<bits/stdc++.h>` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3755.%20Find%20Maximum%20Balanced%20XOR%20Subarray%20Length/01_Naive_Optimal_Prefix_Sum_and_Hash_Map_Approach.cpp)

    - A special **Header**

### 12. Complexity Analysis

  - `Geometric Progression (GP) Based Time Complexity Analysis` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3782.%20Last%20Remaining%20Integer%20After%20Alternating%20Deletion%20Operations/00_Naive_Simulation_Approach.cpp) 

  - `Exponential Recursion Time Complexity Analysis` | [Example Code](https://github.com/aryan04-t/LeetCode-Sprint/blob/master/3746.%20Minimum%20String%20Length%20After%20Balanced%20Removals/00_Naive_Simulation_Approach.cpp) 


### FILL IN ALL THE `EMPTY_LINK` IF THERE ARE ANY