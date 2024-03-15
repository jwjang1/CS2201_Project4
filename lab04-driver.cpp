// File name: lab04.h
// Author: Jungwon Jang
// VUnetid: jangj1
// Email: jungwon.jang@vanderbilt.edu
// Class: CS-2201-03
// Assignment Number: 4
// Honor statement: I have not given or received unauthorized aid on this assignment.
// Description: This program tests lab04.cpp file
// Last Changed: Oct.15

// Recursive programming lab

#include <iostream>
#include <string>
#include <cstdlib>
#include <cassert>
#include <cmath>
#include "lab04.h"


void printList(NodePtr head);


int main ()
{

    std::cout << "\nStarting tests...\n" << std::endl;


    // INSTRUCTIONS:
    // Uncomment segments of test code below as you implement the corresponding functions.
    // To uncomment a segment of code, highlight it with your mouse and hit Ctrl-/.
    // You should add tests of your own to fully test the functions.

    //************************************************************************
    std::cout << "Testing sumArray:\n";
    int test[5] = {1, 2, 3, 4, 5};
    if (sumArray(test,5) == 15)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    int test1[1] = {};
    if (sumArray(test1,0) == 0)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    int test2[1] = {5};
    if (sumArray(test2,1) == 5)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    //************************************************************************
    std::cout << "Testing member:\n";
    int tmp[10] = {12, 13, 21, 30, 2, 55, 1000, 5, 201, 789};
    if (member(55, tmp, 10))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    int tmp1[8] = {12, 13, 21, 30, 2, 55, 1000, 5};
    if (!member(1, tmp1, 10))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    int tmp2[1] = {};
    if (!member(55, tmp2, 0))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    //************************************************************************
    std::cout << "Testing isPalindrome:\n";
    std::string my_str("abcdeedcba");
    if (isPalindrome(my_str))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::string my_str1("abcde");
    if (!isPalindrome(my_str1))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::string my_str2("abcdeEDCBA");
    if (isPalindrome(my_str2))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::string my_str3("");
    if (isPalindrome(my_str3))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::string my_str4("a");
    if (isPalindrome(my_str2))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::string my_str5("a bccb a");
    if (isPalindrome(my_str5))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    std::string my_str6("a bccba");
    if (!isPalindrome(my_str6))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    //************************************************************************
    std::cout << "Testing harmonicSum: ";
    std::cout << "the first 4 Harmonic sums are:" << std::endl;
    for (size_t i=1; i<5; i++) {
        std::cout << harmonicSum(i) << std::endl;
    }

    std::cout << "Testing harmonicSum:\n";
    double epsilon = 0.000000001;
    if (std::abs(harmonicSum(20) - double(55835135)/double(15519504)) < epsilon)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (harmonicSum(0) == 0)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    //************************************************************************
    std::cout << "Testing addStar:\n";
    if (addStar("abc")=="a*b*c")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (addStar("")=="")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (addStar("ab")=="a*b")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;


    //************************************************************************
    std::cout << "Testing replace:\n";
    int rep[5] = {1,3,4,5,2};
    size_t k3 = replace(2, 3, rep, 5);
    if (k3 == 1 && rep[4] == 3)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    int rep1[5] = {1,2,4,5,2};
    size_t k1 = replace(2, 3, rep1, 5);
    if (k1 == 2 && rep1[4] == 3 && rep1[1] == 3)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    int rep2[5] = {1,2};
    size_t k2 = replace(7, 2, rep2, 2);
    if (k2 == 0 && rep2[0] == 1 && rep2[1] == 2)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    int rep4[1] = {};
    size_t k4 = replace(7, 2, rep4, 0);
    if (k4 == 0)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    //************************************************************************
    std::cout << "Testing gcd:\n";
    if (gcd(24,30) == 6)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (gcd(0,30) == 30)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (gcd(24,0) == 24)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (gcd(24,24) == 24)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (gcd(30,24) == 6)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (gcd(24,1) == 1)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    //************************************************************************
    std::cout << "Testing helloWorldRepeat:\n";
    if (helloWorldRepeat(3) == "Hello Hello Hello World World World")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (helloWorldRepeat(0) == "")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;


    //************************************************************************
    std::cout << "Testing convert2Binary:\n";
    std::cout << "The first ten binary numbers are: " << std::endl;
    for (size_t j=0; j<10; j++)
    {
        std::cout << j << " = " << convert2Binary(j) << std::endl;
    }
    std::cout << std::endl;

    if (convert2Binary(25) == "11001")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (convert2Binary(0) == "0")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    //************************************************************************
    std::cout << "Testing printPattern: ";
    std::cout << "A size 4 pattern: " << std::endl;
    printPattern(4);
    std::cout << std::endl;

    std::cout << "A size 7 pattern: " << std::endl;
    printPattern(7);
    std::cout << std::endl;


    //************************************************************************
    std::cout << "Testing pattern2:\n";
    if (pattern2(4) == "{++}")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (pattern2(5) == "[[*]]")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (pattern2(1) == "*")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (pattern2(8) == "{{{++}}}")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    //************************************************************************
    std::cout << "Testing reverseArray:\n";
    int tmp0[10] = {789, 201, 5, 1000, 55, 2, 30, 21, 13, 12};
    int tmp3[10] = {12, 13, 21, 30, 2, 55, 1000, 5, 201, 789};
    reverseArray(tmp0, 0, 9);
    bool okay = true;
    for (int k=0; k<10; k++)
    {
        if (tmp0[k] != tmp3[k])
            okay = false;
    }
    if (okay)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    int ar[10] = {789, 201, 5, 1000, 55, 2, 30, 21, 13, 12};
    int arr[10] = {789, 201, 5, 1000, 55, 12, 13, 21, 30, 2};
    reverseArray(ar, 5, 9);
    bool fine = true;
    for (int k=0; k<10; k++)
    {
        if (ar[k] != arr[k])
            fine = false;
    }
    if (fine)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    //************************************************************************
    std::cout << "Testing arrayInitialize:\n";
    int testI[100];
    for (int k=0; k<100; k++)
        testI[k] = 0;
    arrayInitialize(testI, 5, 20, 80);
    bool OK = true;
    for (int k=0; k<20; k++)
        if (testI[k]!=0)
            OK = false;
    for (int k=20; k<=80; k++)
        if (testI[k]!=5)
            OK = false;
    for (int k=81; k<100; k++)
        if (testI[k]!=0)
            OK = false;
    if (OK)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    //************************************************************************
    std::cout << "Testing binomialCoeff:\n";
    if (binomialCoeff(4,2)==6)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (binomialCoeff(4,0)==1)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (binomialCoeff(4,4)==1)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    //************************************************************************
    std::cout << "Testing count2:\n";
    if (count2(212)==2)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (count2(2)==1)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (count2(0)==0)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (count2(2292)==4)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (count2(222212)==8)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;


    //************************************************************************
    std::cout << "Testing relatedSquares:\n";
    int arr1[4] = {3, 9, 81, 6561};
    if (relatedSquares(arr1, 4)) {
        std::cout << "Pass" << std::endl;
    } else {
        std::cout << "Fail" << std::endl;
    }

    int arr2[5] = {2, 4, 16, 256, 65536};
    if (relatedSquares(arr2, 5)) {
        std::cout << "Pass" << std::endl;
    } else {
        std::cout << "Fail" << std::endl;
    }

    int arr3[1] = {2};
    if (!relatedSquares(arr3, 1)) {
        std::cout << "Pass" << std::endl;
    } else {
        std::cout << "Fail" << std::endl;
    }

    //************************************************************************
    std::cout << "Testing countSubs:\n";
    if (countSubs("catcowcat","cat")==2)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (countSubs("catcowcat","cow")==1)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (countSubs("catcowcat","dog")==0)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;


    //************************************************************************
    std::cout << "Testing moveXs:\n";
    if (moveXs("xxre")=="rexx")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (moveXs("xxhixx")=="hixxxx")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (moveXs("xmyxtox")=="mytoxxx")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;


    //************************************************************************
    std::cout << "Testing newton:\n";
    if (std::abs(newton(33333, 10) - std::sqrt(33333)) < 0.00001)
        // test that Newton's approximate is within 0.00001 of actual
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (std::abs(newton(22222, 10) - std::sqrt(22222)) < 0.00001)
        // test that Newton's approximate is within 0.00001 of actual
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;


    //************************************************************************
    std::cout << "Testing uniqueSteps:\n";
    if (uniqueSteps(4) == 5)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << uniqueSteps(4) << std::endl;

    if (uniqueSteps(3) == 3)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (uniqueSteps(1) == 1)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    //************************************************************************
    std::cout << "Testing palindrome_able: ";
    if (palindrome_able("carrace"))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (!palindrome_able("daily"))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << palindrome_able("daily") << std::endl;

    if (palindrome_able("slelse"))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    if (palindrome_able("ecarrac"))
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;

    //************************************************************************
    // create a linked list
    NodePtr head = nullptr;
    NodePtr tmpPtr;
    size_t cnt = 0;
    for (int k=0; k<20; k++)
    {
        tmpPtr = new Node;
        assert(tmpPtr);
        tmpPtr->value = ((k%3)==0) ? 0 : k%10;
        if (tmpPtr->value != 0) cnt++;
        tmpPtr->next = head;
        head = tmpPtr;
    }


    //************************************************************************
    std::cout << "Testing numOfTerms: ";
    if (numOfTerms(head) == cnt)
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;


    //************************************************************************
    // add some zeros at the end
    for (tmpPtr = head; tmpPtr->next!=nullptr; tmpPtr=tmpPtr->next)
    {} // nothing to do
    for (size_t i=0; i<6; i++) {
        NodePtr newPtr = new Node;
        newPtr->value = 0;
        newPtr->next = tmpPtr->next;
        tmpPtr->next = newPtr;
    }

    //************************************************************************
    std::cout << "Testing normalizeBigNum: ";
    std::cout << "These two lists should be identical except for zeros at the end" << std::endl;
    printList(head);
    normalizeBigNum(head);
    printList(head);


    // free the linked list
    while (head != nullptr)
    {
        NodePtr tmp7 = head;
        head = head->next;
        delete tmp7;
    }


    //************************************************************************
    // create a new linked list
    NodePtr head2 = nullptr;
    NodePtr tmpPtr2;
    for (int k=3; k>0; k--)
    {
        tmpPtr2 = new Node;
        assert(tmpPtr2);
        tmpPtr2->value = k;
        tmpPtr2->next = head2;
        head2 = tmpPtr2;
    }

    //************************************************************************
    std::cout << "Testing echo2: ";
    if (echo2(head2) == "1 2 3 3 2 1 ")
        std::cout << "Pass" << std::endl;
    else
        std::cout << "Fail" << std::endl;


    // free the linked list
    while (head2 != nullptr) {
        NodePtr tmp7 = head;
        head2 = head2->next;
        delete tmp7;
    }




#if CHALLENGE==1

//    std::cout << "Challenge Test: These two lists should be the reverse of each other:" << std::endl;
//    // free the linked list
//    while (head != nullptr)
//    {
//        NodePtr tmp = head;
//        head = head->next;
//        delete tmp;
//    }
//    // give the list new data
//    for (int k = 0; k<20; k++)
//    {
//        tmpPtr = new Node;
//        tmpPtr->value = ((k % 2) == 0) ? -k : k;
//        if (tmpPtr->value != 0) cnt++;
//        tmpPtr->next = head;
//        head = tmpPtr;
//    }
//
//    printList(head);
//    head=reverseList(head);
//    printList(head);
//    std::cout << std::endl;
//
//    // free the linked list
//    while (head != nullptr)
//    {
//        NodePtr tmp = head;
//        head = head->next;
//        delete tmp;
//    }

#endif


    std::cout << "\n\nDone testing" << std::endl;

//  std::cout << "press enter to exit";
//  std::cin.get();



    return 0;
}


// print a space-separated list of numbers from a linked-list
void printList(NodePtr head)
{

    std::cout << "contents of list: ";
    for (NodePtr cur = head; cur != nullptr; cur = cur->next) {
        std::cout << cur->value << " ";
    }
    std::cout << " Done" << std::endl;

}