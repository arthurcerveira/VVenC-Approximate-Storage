#ifndef _APPROXCONTROL_H_
#define _APPROXCONTROL_H_

namespace vvenc
{

    class ApproxControl
    {
    public:
        static double m_transformReadBER;
        static double m_transformWriteBER;
        static int m_inputBitDepth;

        static void init();
    };

}

#endif /*_APPROXCONTROL_H_*/