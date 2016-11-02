/*
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "kernel/environment.h"

namespace lean {
/** \brief Eliminate recursor applications */
expr elim_recursors(environment & env, name const & prefix, expr const & e, buffer<pair<name, expr>> & new_decls);
}
