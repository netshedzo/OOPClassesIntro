#ifndef MATHS_H_INCLUDED
#define MATHS_H_INCLUDED
#include <iostream>
#include <cstdlib>
using namespace std;

class Maths  //maths class
{
private:
int intChars;
int intTable;
string Lecture;
int chalk;
string Room;
public:
 //constructor
 Maths();
 Maths(int intC , int intT , string L ,int Clk,string roo);
 Maths(Maths &oldMaths);
//accessers
int getChairs();
int getTable();
string getLecture();
string getRoom();
int getChalk();

//mutator
void setChairs(int chair);
void setTable(int Table);
void setLecture(string Lecture);
void setRoom(string Roomm);
void setChalk(int chalk);
void printClass();



};


#endif // MATHS_H_INCLUDED
