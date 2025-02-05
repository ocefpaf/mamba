// Copyright (c) 2019, QuantStack and Mamba Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#ifndef MAMBA_API_SHELL_HPP
#define MAMBA_API_SHELL_HPP

#include <string>
#include <string_view>

namespace mamba
{
    void shell_init(const std::string& shell_type, std::string_view prefix);
    void shell_deinit(const std::string& shell_type, std::string_view prefix);
    void shell_reinit(std::string_view prefix);
    void shell_hook(const std::string& shell_type);
    void shell_activate(std::string_view prefix, const std::string& shell_type, bool stack);
    void shell_reactivate(const std::string& shell_type);
    void shell_deactivate(const std::string& shell_type);
    void shell_enable_long_path_support();
}

#endif
