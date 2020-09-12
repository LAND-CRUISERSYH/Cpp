#ifndef _SCREEN_H_
#define _SCREEN_H_
#include<iostream>
#include<string>


using namespace std;

class Screen {
public:
	typedef string::size_type pos;
	Screen() = default;            //因为Screen有另一个构造函数，所以此函数是必须的
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht*wd, c) {}//cursor被其类内初始值初始化为0
	Screen(pos ht, pos wd) :height(ht), width(wd), contents(ht*wd, ' ') {}
	char get()const { return contents[cursor]; } //读取光标处的字符(隐式内联)
	inline char get(pos ht, pos wd)const;                     //显式内联
	Screen &move(pos r, pos c);                    //能在之后被设为内联
	Screen &set(char c);
	Screen &set(pos ht, pos wd, char c);
	Screen &display(ostream &os) { do_display(os); return *this; }
	const Screen &display(ostream &os)const { do_display(os); return *this; }
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	void do_display(ostream &os)const { os << contents; }
};

inline Screen &Screen::move(pos r, pos c)              //可以在函数的定义处指定inline
{
	pos row = r * width;               //计算行的位置
	cursor = row + c;                //在行内将光标移动到指定的列
	return *this;                    //以左值的形式返回对象
}

char Screen::get(pos ht, pos wd)const              //在类的内部声明成inline
{
	pos row = ht * width;								//计算行的位置
	return contents[row + wd];                                 //返回给定列的字符
}

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;                              //设置当前光标所在位置的新值
	return *this;									//将this对象作为左值返回
}

inline Screen &Screen::set(pos ht, pos wd, char c)
{
	contents[ht*width + wd] = c;            //设置给定位置的新值
	return *this;							//将this对象作为左值返回
}

#endif // !_SCREEN_H_

