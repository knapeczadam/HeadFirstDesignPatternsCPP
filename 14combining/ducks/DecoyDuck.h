#pragma once

#include "IQuackable.h"

namespace combining::ducks
{
    class DecoyDuck : public IQuackable
    {
    public:
        void quack() override;
    };
}
