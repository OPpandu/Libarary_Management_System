#pragma once
#include<iostream>
#include<string>
#include "book.h"
#include "transaction.h"
using namespace std;
class account {
public:
    string password;
    int history_size;
    queue<transaction> history;
    vector<pair<book*, time_t>> curr_borrowed;
public:
    string type;
    int total_fine;
    string username;
    int max_book, duedays, finerate;
    
    bool authenticate(string pass) const;
    void addtransaction(transaction t);
    void calculatefine(time_t due_time);
    void viewtransactions();
    vector<string> account_to_csv();
};
