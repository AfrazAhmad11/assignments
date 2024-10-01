#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    cout << "\033[32m"  //roof color green
    <<setw(14)<<"="<<setw(20)<<setfill('=')<<"="<<endl //[line1]setw(15) allocates 14 spaces and 1 stng'=' eql15, setfill(14) allocates 15 spaces bcs ending stng '=' is included
    <<setfill(' ')<<setw(13)<<")"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<"("<<endl//[line2] setfill(' ') is used at start bcs if not use '=' is shown in outout so it used to fill spaces
	<<setw(12)<<")"<<setw(2)<<setfill(' ')<<"V"<<setw(2)/*<<setfill(' ')*/<<"V"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<setfill(' ')<<"^"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<setfill(' ')<<"V"<<setw(2)<<"("<</*<<"("<<"\033[0m"*/endl
	<<setw(11)<<")"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<"/"<<setw(5)<<"\\V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"("<<endl    
	<<setw(10)<<")"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(3)<<"V/"<<setw(3)<<"_"<<setw(4)<<"\\V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<setw(2)<<"V"<<setw(2)<<"("<<endl   
	<<setw(9)<<")"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(3)<<"V|"<<setw(5)<<"|#|"<<setw(4)<<"|V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"("<<endl    
	<<setw(8)<<")"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"|"<<setw(8)<<"|"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"V"<<setw(2)<<"("<<endl
	<<setw(8)<<'~'<<setw(32)<<setfill('~')<<"~"<<"\033[0m"<<endl 
	<<setw(8)<<setfill(' ')<<" "<<setw(32)<<setfill(' ')<<endl
	<<setw(8)<<":"<<setw(2)<<":"<<setw(2)<<":"<<setw(5)<<"\033[33m"<<"####"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<"\033[33m"<<setw(6)<<"#####"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<"\033[33m"<<setw(2)<<"####"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<setw(2)<<":"<<endl
	<<setw(8)<<":"<<setw(2)<<":"<<setw(2)<<":"<<setw(5)<<"\033[33m"<<"####"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<"\033[33m"<<setw(6)<<"#####"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<"\033[33m"<<setw(2)<<"####"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<setw(2)<<":"<<endl
	<<setw(8)<<":"<<setw(2)<<":"<<setw(2)<<":"<<setw(5)<<"\033[33m"<<"####"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<"\033[33m"<<setw(6)<<"#####"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<"\033[33m"<<setw(2)<<"####"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<setw(2)<<":"<<endl
	<<setw(8)<<":"<<setw(33)<<setfill(':')<<":"<<endl
	<<setw(8)<<setfill(' ')<<":"<<setw(2)<<":"<<setw(2)<<":"<<setw(5)<<"\033[33m"<<"####"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<"\033[33m"<<setw(6)<<"I```I"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<"\033[33m"<<setw(2)<<"####"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<setw(2)<<":"<<endl
	<<setw(8)<<setfill(' ')<<":"<<setw(2)<<":"<<setw(2)<<":"<<setw(5)<<"\033[33m"<<"####"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<"\033[33m"<<setw(2)<<"I"<<setw(4)<<"I"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<"\033[33m"<<setw(2)<<"####"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<setw(2)<<":"<<endl
	<<setw(8)<<setfill(' ')<<":"<<setw(2)<<":"<<setw(2)<<":"<<setw(5)<<"\033[33m"<<"####"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<"\033[33m"<<setw(3)<<"I'"<<setw(3)<<"I"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<"\033[33m"<<setw(2)<<"####"<<"\033[0m"<<setw(2)<<":"<<setw(2)<<":"<<setw(2)<<":"<<endl 
	<<setw(8)<<":"<<setw(13)<<setfill(':')<<":"<<"\033[33m"<<setw(5)<<"I___I"<<"\033[0m"<<setw(13)<<":"<<setfill(':')<<":"<<endl /*FINALLY my 1st artWORK DONE*/ ;
return 0;







}
