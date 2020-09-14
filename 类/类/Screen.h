#ifndef _SCREEN_H_
#define _SCREEN_H_
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Screen;

class Window_mgr
{
public:
	using ScreenIndex = vector<Screen>::size_type;
	void clear(ScreenIndex i);
	ScreenIndex addScreen(const Screen &s);         //�򴰿����һ��Screen���������ı��
private:
	vector<Screen> screens;
};

class Screen {
public:
	typedef string::size_type pos;
	friend void Window_mgr::clear(ScreenIndex i);
	Screen() = default;            //��ΪScreen����һ�����캯�������Դ˺����Ǳ����
	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht*wd, c) {}//cursor�������ڳ�ʼֵ��ʼ��Ϊ0
	Screen(pos ht, pos wd) :height(ht), width(wd), contents(ht*wd, ' ') {}
	char get()const { return contents[cursor]; } //��ȡ��괦���ַ�(��ʽ����)
	inline char get(pos ht, pos wd)const;                     //��ʽ����
	Screen &move(pos r, pos c);                    //����֮����Ϊ����
	Screen &set(char c);
	Screen &set(pos ht, pos wd, char c);
	Screen &display(ostream &os) { do_display(os); return *this; }
	const Screen &display(ostream &os)const { do_display(os); return *this; }
	pos size() const;
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	void do_display(ostream &os)const { os << contents; }
};

void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.contents = string(s.height*s.width, ' ');
}

Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen &s)
{
	screens.push_back(s);
	return screens.size() - 1;
}

inline Screen &Screen::move(pos r, pos c)              //�����ں����Ķ��崦ָ��inline
{
	pos row = r * width;               //�����е�λ��
	cursor = row + c;                //�����ڽ�����ƶ���ָ������
	return *this;                    //����ֵ����ʽ���ض���
}

char Screen::get(pos ht, pos wd)const              //������ڲ�������inline
{
	pos row = ht * width;								//�����е�λ��
	return contents[row + wd];                                 //���ظ����е��ַ�
}

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;                              //���õ�ǰ�������λ�õ���ֵ
	return *this;									//��this������Ϊ��ֵ����
}

inline Screen &Screen::set(pos ht, pos wd, char c)
{
	contents[ht*width + wd] = c;            //���ø���λ�õ���ֵ
	return *this;							//��this������Ϊ��ֵ����
}

Screen::pos Screen::size() const
{
	return height * width;
}

#endif // !_SCREEN_H_

