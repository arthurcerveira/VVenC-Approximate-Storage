#include "ApproxControl.h"

namespace vvenc {
    double ApproxControl::m_deblockingFilterReadBER;
    double ApproxControl::m_deblockingFilterWriteBER;

    void ApproxControl::init() {
        m_deblockingFilterReadBER = 0.0;
        m_deblockingFilterWriteBER = 0.0;
    }

}