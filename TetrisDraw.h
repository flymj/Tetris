#ifndef _TETRIS_DRAW_H
#define _TETRIS_DRAW_H
#include <TetrisMap.h>
class TetrisDraw
{
public:
    TetrisDraw(TetrisMap *map);
    ~TetrisDraw();
    bool refresh();
private:
    TetrisMap *_map;
    int frameCount;
};
#endif
