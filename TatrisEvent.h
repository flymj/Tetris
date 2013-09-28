#ifndef _TATRIS_EVENT_H
#define _TATRIS_EVENT_H
typedef struct
{
    int op;
    void *data;
}TatrisEventInfo;

class TatrisEvent
{
public:
    TatrisEvent();
    ~TatrisEvent();
};
#endif
