//
// Created by hubery on 18年2月11日.
//


#include "tools.h"

void loop_subrequest(struct sub_request * sub){
    struct sub_request * req = sub;
    while(req){
        printf("lpn = %u\t", req->lpn);
        req = req->next_node;
    }
    printf("\n");
}