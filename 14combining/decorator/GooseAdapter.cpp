#include "GooseAdapter.h"

#include <utility>

namespace combining::decorator
{
    GooseAdapter::GooseAdapter(std::shared_ptr<Goose> newGoose) : goose{std::move(newGoose)}
    {

    }

    void GooseAdapter::quack()
    {
        goose->honk();
    }

    std::ostream& operator<<(std::ostream& os, const GooseAdapter& gooseAdapter)
    {
        os << "Goose pretending to be a DucK" << '\n';
        return os;
    }
}
