#ifndef _TATRIS_MANAGER_H
#define _TATRIS_MANAGER_H
#include <TatrisEvent.h>

class TatrisObject;

class TatrisManager
{
public:
    TatrisManager(int width, int height);
    ~TatrisManager();
    bool updateMap();
    bool eventHandler(TatrisEventInfo *task);
    bool pause();
    bool restart();
    bool start();
    void printRecord();
private:
    bool commitChange();
    int _elapseTime;
    int _level;
    int _speed;
    char *_username;
    TatrisObject *_current;
    TatrisObject *_next;
    TatrisEvent *_event;
};
#endif
