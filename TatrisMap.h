#ifndef _TATRIS_MAP_H
#define _TATRIS_MAP_H
#include <common.h>
class TatrisMap
{
public:
    TatrisMap(int width, int height);
    ~TatrisMap();
    bool updateMap(Coord *before, Coord *after, int count);
    bool clear();
public:
    Coord **_array;
};
#endif
