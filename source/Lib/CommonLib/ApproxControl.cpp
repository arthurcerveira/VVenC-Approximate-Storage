#include "ApproxControl.h"

namespace vvenc
{
    double ApproxControl::m_transformReadBER;
    double ApproxControl::m_transformWriteBER;
    int ApproxControl::m_inputBitDepth;

    void ApproxControl::init()
    {
        m_transformReadBER = 0.0;
        m_transformWriteBER = 0.0;
        m_inputBitDepth = 8;
    }

}
