/* -*- Mode: C; c-basic-offset:4 ; -*- */
/*
 *  (C) 2008 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 */

#ifndef PERSIST_H_INCLUDED
#define PERSIST_H_INCLUDED

#include "hydra_base.h"

HYD_status HYDT_bscd_persist_launch_procs(
    char **args, struct HYD_node *node_list, void *userp,
    HYD_status(*stdin_cb) (int fd, HYD_event_t events, void *userp),
    HYD_status(*stdout_cb) (int fd, HYD_event_t events, void *userp),
    HYD_status(*stderr_cb) (int fd, HYD_event_t events, void *userp));

#endif /* PERSIST_H_INCLUDED */
