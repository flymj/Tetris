#ifndef _TATRIS_OBJECT_
#define _TATRIS_OBJECT_
#include <TatrisManager.h>
#include <common.h>

typedef enum _tagObjectStatus
{
    OBJECT_ROTATE_NORMAL = 0,
    OBJECT_ROTATE_90     = 1,
    OBJECT_ROTATE_180    = 2,
    OBJECT_ROTATE_270    = 3,
}ObjectStatus;

class TatrisObject
{
public:
    TatrisObject(TatrisManager *mgr) : _mgr(mgr)
    {

    }
    ~TatrisObject()
    {
        
    }
    virtual bool move() = 0;
    virtual bool rotate() = 0;
private:
    Coord _location[4];
    TatrisManager *_mgr;
    ObjectStatus _current;
};

#endif
