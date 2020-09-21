#pragma once

#include "ICommand.h"
#include "Stereo.h"

#include <memory>

namespace command::party
{
    class StereoOffCommand : public ICommand
    {
        std::shared_ptr<Stereo> stereo = nullptr;

    public:
        explicit StereoOffCommand(std::shared_ptr<Stereo> newStereo);

        void execute() override;

        void undo() override;
    };
}
