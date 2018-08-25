 #include "maths.h"



 Maths::Maths()
 {
intChars = 24;
 intTable = 15;
 Lecture = "Mr Davids";
 chalk = 2;
Room = "ALES-GO1";
 }
 Maths::Maths(int intC , int intT , string L ,int Clk,string roo)
 {
  intChars = intC;
 intTable =intT;
 Lecture = L;
 chalk = Clk;
Room = roo;

 }
 Maths::Maths(Maths &oldMaths)
 {

intChars = oldMaths.getChairs();
 intTable = oldMaths.getTable();
 Lecture = oldMaths.getLecture();
 chalk = oldMaths.getChalk();
Room = oldMaths.getRoom();
 }

//accessers
int Maths::getChairs()
{
 return intChars;

}
int Maths::getTable()
{

   return intTable;
}
string Maths::getLecture()
{
    return Lecture;
}
string Maths::getRoom()
{
    return Room;
}
int Maths::getChalk()
{
    return chalk;
}

//mutator
void Maths::setChairs(int chair)
{
    intChars = chair;
}
void Maths::setTable(int Table)
{
  intTable = Table;

}
void Maths::setLecture(string Lectur)
{
    Lecture = Lectur;
}

void Maths::setRoom(string Roomm)
{
    Room = Roomm;
}
void Maths::setChalk(int chal)
{

    chalk = chal;
}
void Maths::printClass()
{
 system("cls");
cout<<"Maths class :"<<Room<<endl;
cout<<"Chairs :"<<intChars<<endl;
cout<<"Tables :"<<intTable<<endl;
cout<<"Lecture :"<<Lecture<<endl;
cout<<"Room :"<<Room<<endl;
cout<<endl;
system("pause");
}
