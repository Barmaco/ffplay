#include "avformat.h"

extern URLProtocol file_protocol;

void av_register_all(void)
{
    static int inited = 0;

    if (inited != 0)
        return ;
    inited = 1;

    avcodec_init(); //ÂÒÆß°ËÔã

    avcodec_register_all();  //×¢²á½âÂëÆ÷

    avidec_init(); //×¢²á½â¸´ÓÃÆ÷

    register_protocol(&file_protocol);  //×¢²áĞ­Òé
} 
