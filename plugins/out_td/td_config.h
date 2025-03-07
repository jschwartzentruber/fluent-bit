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

#ifndef FLB_TD_CONFIG_H
#define FLB_TD_CONFIG_H

#include <fluent-bit/flb_output_plugin.h>

#define FLB_TD_REGION_US    0
#define FLB_TD_REGION_JP    1

struct flb_td {
    int fd;           /* Socket to destination/backend */
    int region;       /* TD Region end-point */
    const char *api;
    const char *db_name;
    const char *db_table;
    struct flb_upstream *u;
    struct flb_output_instance *ins;
};

struct flb_td *td_config_init(struct flb_output_instance *ins);

#endif
