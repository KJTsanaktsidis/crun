/*
 * crun - OCI runtime written in C
 *
 * Copyright (C) 2017 Giuseppe Scrivano <giuseppe@scrivano.org>
 * libocispec is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * libocispec is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with crun.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LINUX_H
# define LINUX_H
# include <config.h>
# include <stdio.h>
# include <stdlib.h>
# include <error.h>
# include <errno.h>
# include <argp.h>
# include <oci_runtime_spec.h>
# include "container.h"

int libcrun_set_namespaces (crun_container *container, char **err);
int libcrun_set_mounts (crun_container *container, const char *rootfs, char **err);
int libcrun_set_usernamespace (crun_container *container, char **err);
int libcrun_set_caps (crun_container *container, char **err);
int libcrun_set_rlimits (crun_container *container, char **err);

#endif
