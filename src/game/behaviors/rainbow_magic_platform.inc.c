// rainbow_magic_platform.inc.inc.c

#include <PR/ultratypes.h>
#include "object_fields.h"
#include "game/mario.h"
#include "include/types.h"

void bhv_rainbow_magic_platform_loop(void) {

    load_object_collision_model();

}

void bhv_rainbow_magic_platform_end(void) {

    obj_mark_for_deletion(o);

}
