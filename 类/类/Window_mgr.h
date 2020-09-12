#ifndef _WINDOW_MGR_H_
#define _WINDOW_MGR_H_
#include<vector>
#include"Screen.h"

using namespace std;

class Window_mgr
{
private:
	vector<Screen> screens{ Screen(24,80,' ') };
};

#endif // !_WINDOW_MGR_H_

