#include <config.h>

#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>

#include "en-syncer.h"

#include "lib/inc-proc-eng.h"
#include "northd.h"
#include "openvswitch/vlog.h"

VLOG_DEFINE_THIS_MODULE(en_syncer);

enum engine_node_state
en_syncer_run(struct engine_node *node OVS_UNUSED, void *data OVS_UNUSED)
{
    VLOG_ERR("KEYWORD: EN_SYCNER_RUN");

    return EN_UPDATED;
}


void *en_syncer_init(struct engine_node *node OVS_UNUSED,
                     struct engine_arg *arg OVS_UNUSED)
{
    VLOG_ERR("KEYWORD: EN_SYNCER_INIT");
  
    return NULL;
}

void en_syncer_cleanup(void *data_ OVS_UNUSED)
{

}

enum engine_input_handler_result
syncer_handler(struct engine_node *something OVS_UNUSED,
               void *data OVS_UNUSED)
{

    VLOG_ERR("KEYWORD: WHY DOES THIS HANDLER WORK?");
    return EN_HANDLED_UNCHANGED;
}
