#include <iostream>
#include <ctime>
#include <chrono>
#include "graph.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    string usr1 = "Олег";
    string usr2 = "Саня";
    string usr3 = "Оля";
    string usr4 = "Ваня";
    string usr5 = "Женёк";
    string usr6 = "Олеся";

    Graph users;

    users.addUser(usr1);
    users.addUser(usr2);
    users.addUser(usr3);
    users.addUser(usr4);
    users.addUser(usr5);
    users.addUser(usr6);

    users.addEdge(usr1, usr2, 1);
    users.addEdge(usr2, usr3, 1);
    users.addEdge(usr3, usr4, 1);
    users.addEdge(usr4, usr5, 1);
    users.addEdge(usr5, usr6, 1);

    auto start = chrono::high_resolution_clock::now(); 
    users.showFriends(3);
    auto finish = chrono::high_resolution_clock::now(); 
    chrono::duration<double> elapsed = finish - start;
    cout << "Elapsed time: " << elapsed.count() << " sec" << endl; 

    return 0;
}
