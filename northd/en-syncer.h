#ifndef EN_SYNCER_H
#define EN_SYNCER_H 1

#include "lib/inc-proc-eng.h"

struct syncer_data{};

enum engine_node_state en_syncer_run(struct engine_node *node, void *data);
void *en_syncer_init(struct engine_node *node, struct engine_arg *arg);
void en_syncer_cleanup(void *data);
enum engine_input_handler_result
syncer_handler(struct engine_node *something OVS_UNUSED, void *data OVS_UNUSED);
#endif /* EN_SYCNER_H */
