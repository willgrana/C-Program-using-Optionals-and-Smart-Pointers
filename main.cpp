#include <iostream>
#include <memory>
#include <string>
#include <vector>

#if __cplusplus < 201700
#include <experimental/optional>
using std::experimental::optional;
using std::experimental::nullopt;
using std::experimental::make_optional;
#else
#include <optional>
#endif

using namespace std;

    typedef optional<int> optInt;
int main() {
    /* 0. Create the following optional integers:
     *      ?__
     *      |  |
     *      |__|
     *      ?__
     *      |42|
     *      |__|
     *      ?__?__?__?__?__?__?__?__
     *      |  |90|44|  |79|  |-5|17|
     *      |__|__|__|__|__|__|__|__|
     */
    optInt int1 = nullopt;
    optInt int2 = 42;
    vector<optInt> optIntVector(8);
    optIntVector[0] = nullopt;
    optIntVector[1] = 90;
    optIntVector[2] = 44;
    optIntVector[3] = nullopt;
    optIntVector[4] = 79;
    optIntVector[5] = nullopt;
    optIntVector[6] = -5;
    optIntVector[7] = 17;


    /* 1. Create the following smart pointers,
     *    where each one points to a different data type:
     *      Stack           Heap
     *       __              __
     *      |  | ---------> |11|
     *      |__|            |__|
     *       __
     *      |  | --->|
     *      |__|
     *       __              __
     *      |  | ---------> |d |
     *      |__|            |__|
     *       __
     *      |  | --->|
     *      |__|
     *       __              ____
     *      |  | ---------> |true|
     *      |__|            |____|
     *       __
     *      |  | --->|
     *      |__|
     */
    unique_ptr<int> ptr = make_unique<int>(11);
    unique_ptr<int> ptr2 = nullptr;
    unique_ptr<char> ptr3 = make_unique<char>('d');
    unique_ptr<int> ptr4 = nullptr;
    unique_ptr<bool> ptr5 = make_unique<bool>(true);
    unique_ptr<int> ptr6 = nullptr;




    /* 2. Create the following smart pointers,
     *    where each one points to a different data type:
     *      Stack           Heap
     *       __
     *      |  | --->|
     *      |__|
     *       __              ___
     *      |  | ---------> |0.3|
     *      |__|            |___|
     *       __
     *      |  | --->|
     *      |__|
     *       __              __
     *      |  | ---------> |yo|
     *      |__|            |__|
     *       __
     *      |  | --->|
     *      |__|
     *       __              _________
     *      |  | ---------> |123456789|
     *      |__|            |_________|
     */
    unique_ptr<int> ptr7 = nullptr;
    unique_ptr<double> ptr8 = make_unique<double>(0.3);
    unique_ptr<int> ptr9 = nullptr;
    unique_ptr<string> ptr10 = make_unique<string>("yo");
    unique_ptr<int> ptr11 = nullptr;
    unique_ptr<int> ptr12 = make_unique<int>(123456789);


    /* 3. Create the following smart pointers:
     *            __ __ __ __ __ __ __ __ __
     *  Stack    |  |  |  |  |  |  |  |  |  |
     *           |__|__|__|__|__|__|__|__|__|
     *            |   |    |   |    |     |
     *            v   v    v   v    v     v
     *            __  __   __  __   __    __
     *  Heap     |w ||- | |* ||? | |L |  |; |
     *           |__||__| |__||__| |__|  |__|
     */
    unique_ptr<char> ptr13 = make_unique<char>('w');
    unique_ptr<char> ptr14 = make_unique<char>('-');
    unique_ptr<char> ptr15 = nullptr;
    unique_ptr<char> ptr16 = make_unique<char>('*');
    unique_ptr<char> ptr17 = make_unique<char>('?');
    unique_ptr<char> ptr18 = nullptr;
    unique_ptr<char> ptr19 = make_unique<char>('L');
    unique_ptr<char> ptr20 = nullptr;
    unique_ptr<char> ptr21 = make_unique<char>(';');
    vector<unique_ptr<char>> ptrVector;
    ptrVector.push_back(move(ptr13));
    ptrVector.push_back(move(ptr14));
    ptrVector.push_back(move(ptr15));
    ptrVector.push_back(move(ptr16));
    ptrVector.push_back(move(ptr17));
    ptrVector.push_back(move(ptr18));
    ptrVector.push_back(move(ptr19));
    ptrVector.push_back(move(ptr20));
    ptrVector.push_back(move(ptr21));



    /* 4. Create the following smart pointer:
     *      Stack           Heap
     *       __              __ __ __ __ __ __ __ __
     *      |  | ---------> |11|22|33|44|55|66|77|88|
     *      |__|            |__|__|__|__|__|__|__|__|
     */
    vector<int> Vector(8);
    Vector[0]=11;
    Vector[0]=11;
    Vector[1]=22;
    Vector[2]=33;
    Vector[3]=44;
    Vector[4]=55;
    Vector[5]=66;
    Vector[6]=77;
    Vector[7]=88;
    unique_ptr<vector<int>> ptr22 = make_unique<vector<int>>(Vector);
    /* 5. Create the following smart pointers to your choice of data type:
     *      Stack      Heap
     *       __         __
     *      |  | ----> |  |
     *      |__|       |__|
     *                  |
     *                  v
     *                  __
     *                 |  |
     *                 |__|
     */
    unique_ptr<int> ptr23 = make_unique<int>(8);
    unique_ptr<unique_ptr<int>> ptr24 = make_unique<unique_ptr<int>>(ptr23);




    /* 6. Create the following smart pointers to your choice of data type:
     *      Stack      Heap
     *       __         __
     *      |  | ----> |  |
     *      |__|    >  |__|
     *             /
     *       __   /
     *      |  | /
     *      |__|
     */
    shared_ptr<double> ptr25 = make_shared<double>(159.68496);
    auto ptr26 = ptr25;



    /* 7. Create the following optional smart pointers:
     *      Stack      Heap
     *      ?__         __
     *      |  | ----> |98|
     *      |__|       |__|
     *
     *      ?__
     *      |  |
     *      |__|
     */



    /* 8. Create the following smart pointers to optionals:
     *      Stack      Heap
     *       __        ?__
     *      |  | ----> |hi|
     *      |__|       |__|
     *
     *       __        ?__
     *      |  | ----> |  |
     *      |__|       |__|
     */




    /* 9. Write a nontrivial function that takes at least one
     *    smart pointer parameter. Its effects and return value
     *    are up to you.
     */




    /* 10. Write a function that takes a pointer to a vector of
     *     optionals and an unsigned integer index. Return the
     *     value at that index in the vector. If the index is
     *     out of range, return nullopt.
     */
    optional<int> myDick (unique_ptr<vector<optInt>> n, int index) {
        if (*n->size()< index) {
            return nullopt;
        }
        else {
            return *n[index];
        }
    }


    return 0;
}