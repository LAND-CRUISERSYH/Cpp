#ifndef _SCREEN_H_
#define _SCREEN_H_
#include<iostream>
#include<string>


using namespace std;

class Screen {
public:
	typedef string::size_type pos;
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
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	void do_display(ostream &os)const { os << contents; }
};

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

#endif // !_SCREEN_H_

