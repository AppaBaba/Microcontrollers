#include<iostream>
using namespace std;
enum attr {rst, bld, dim, so, us, blnk};
enum fg {fgblk=30,fgred=31, fggrn=32, fgylw=33, fgblu=34, fgmgt=35, fgcyn=36, fgwht=37};
enum bg {bgblk=40,bgred=41, bggrn=42, bgylw=43, bgblu=44, bgmgt=45, bgcyn=46, bgwht=47};
string sometext = "This is what it looks like";
class dsptxt
{
    private:
    int a,c,b,rw,cm; //four private data members
    public:
// A constructor with default values
    dsptxt(int attr=1, int fgc=31) { a=attr; c=fgc; }
// function to change background color
    void setbgc(int bgc=0) { b=bgc; }
// A function to make changes to data members
    void actxt(int attr, int fgc) {
	a=attr;
	c=fgc;
	cout<<"\033["<<a<<";"<<c<<";"<<b<<"m"; }
    void clrscn() {cout<<"\033[2J";}
    void poscur(int row, int col) {
	rw=row;
	cm=col;
	cout<<"\033["<<rw<<";"<<cm<<"H"; }
// A function to output the object data
    void sndtxt() { 
	cout<<sometext; }
    void reset() {
	cout<<"\033[0m\n"; }
};
int main()
{
        dsptxt oop;
	oop.clrscn();
	oop.poscur(10,30);
        cout<<"----Colortxt C++ OOP APP---";
	oop.poscur(11,32);
	oop.actxt(bld,fgred);
        oop.sndtxt();
	oop.poscur(12,34);
        oop.actxt(bld,fggrn);
        oop.sndtxt();
	oop.poscur(13,36);
        oop.actxt(bld,fgylw);
        oop.sndtxt();
	oop.poscur(14,38);
	oop.setbgc(bgwht);
        oop.actxt(bld,fgblu);
        oop.sndtxt();
	oop.poscur(15,40);
        oop.actxt(bld,fgmgt);
        oop.sndtxt();
	oop.reset();
	oop.poscur(16,42);
	cout << "Terminal text back to normal";
	cout << "\n";
        return 0;
}