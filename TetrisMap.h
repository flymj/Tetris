#ifndef _TETRIS_MAP_H
#define _TETRIS_MAP_H
#include <common.h>
class TetrisMap
{
public:
    TetrisMap(int width, int height);
    ~TetrisMap();
    bool updateMap(Coord *before, Coord *after, int count);
    bool clear();
public:
    Coord **_array;
};
#endif
