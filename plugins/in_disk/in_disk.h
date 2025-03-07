/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Fluent Bit
 *  ==========
 *  Copyright (C) 2015-2022 The Fluent Bit Authors
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
#ifndef FLB_IN_DISK_H
#define FLB_IN_DISK_H

#include <stdint.h>
#include <fluent-bit/flb_config.h>
#include <fluent-bit/flb_input.h>

#define DEFAULT_INTERVAL_SEC  1
#define DEFAULT_INTERVAL_NSEC 0

#define STR_KEY_WRITE "write_size"
#define STR_KEY_READ  "read_size"

struct flb_in_disk_config {
    uint64_t *read_total;
    uint64_t *write_total;
    uint64_t *prev_read_total;
    uint64_t *prev_write_total;
    char     *dev_name;
    int      entry;
    int      interval_sec;
    int      interval_nsec;
    int      first_snapshot;   /* a feild to indicate whethor or not this is the first collect*/
};

extern struct flb_input_plugin in_disk_plugin;

#endif /* FLB_IN_DISK_H */
