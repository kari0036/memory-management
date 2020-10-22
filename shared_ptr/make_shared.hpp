#pragma once

#include <utility>

#include "shared_ptr.hpp"

namespace sh{

template <typename T, typename... Args>
shared_ptr<T> make_shared(Args&&... args) {
    return sh::shared_ptr<T>(new SharedControlBlockObj<T>(std::forward<decltype(args)>(args)...));
}

}