// This file is generated by ./ci/rebuild-libwit-bindgen-cabi.sh

#include <stdlib.h>

static void *WASIP3_TASK = NULL;

__attribute__((__weak__))
void *wasip3_task_set(void *ptr) {
  void *ret = WASIP3_TASK;
  WASIP3_TASK = ptr;
  return ret;
}
