#ifndef _STARTGAME_H_
#define _STARTGAME_H_

#include "cocos2d.h"

USING_NS_CC;

using namespace cocos2d::ui;

class StartGame : public cocos2d::Layer {
private:

public:
	static cocos2d::Scene* createScene();
	virtual bool init();

	void menuCloseCallback(Ref* pSender);
	void menuClassicalBtnCallBack(Ref* pSender);
	void menuInfinityBtnCallBack(Ref* psSender);
	CREATE_FUNC(StartGame);
};


#endif


