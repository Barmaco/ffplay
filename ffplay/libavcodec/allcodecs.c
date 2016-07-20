#include "avcodec.h"

extern AVCodec truespeech_decoder;
extern AVCodec msrle_decoder;

void avcodec_register_all(void)
{
    static int inited = 0;

    if (inited != 0)
        return ;

    inited = 1;

    register_avcodec(&msrle_decoder);//简单的视频解码器

    register_avcodec(&truespeech_decoder);//简单的音频解码器
}
