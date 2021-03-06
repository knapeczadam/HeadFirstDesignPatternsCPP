#pragma once

#include "ICommand.h"
#include "Stereo.h"

#include <memory>

namespace command::remote
{
    class StereoOnWithCDCommand : public ICommand
    {
        std::shared_ptr<Stereo> stereo = nullptr;

    public:
        explicit StereoOnWithCDCommand(std::shared_ptr<Stereo> newStereo);

        void execute() override;
    };
}
