#ifndef _TATRIS_MANAGER_H
#define _TATRIS_MANAGER_H
#include <TatrisObject.h>
#include <EventObject.h>

class TatrisManager
{
public:
    TatrisManager(int width, int height);
    ~TatrisManager();
    bool updateMap();
    bool eventHandler(EventTask *task);
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
    EventObject *_event;
};
#endif
