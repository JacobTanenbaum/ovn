#ifndef EN_DP_GROUP_RESOLVED_H
#define EN_DP_GROUP_RESOLVED_H 1

#include "lib/inc-proc-eng.h"

void *en_dp_group_resolved_init(struct engine_node *node,
                                struct engine_arg *arg);
enum engine_node_state en_dp_group_resolved_run(struct engine_node *node,
                                                void *data);
void en_dp_group_resolved_cleanup(void *data);
enum engine_input_handler_result
dp_group_resolved_lflow_handler(struct engine_node *node, void *data);

#endif /* EN_DP_GROUP_RESOLVED_H */
