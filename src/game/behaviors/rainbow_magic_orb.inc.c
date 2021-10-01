// rainbow_magic_orb_.inc.inc.c

#include <PR/ultratypes.h>
#include "object_fields.h"
#include "game/mario.h"
#include "include/types.h"
#include "game/interaction.h"
#include "object_constants.h"
#include "game/save_file.h"

extern f32 RainbowMagicBool;
extern f32 RainbowMagic;

f32 RainbowMagicOrbInteracted = 0.0f;
f32 RainbowMagicOrbCoolDown = 300.0f;

void bhv_rainbow_magic_orb_loop(void) {

    if (RainbowMagicOrbInteracted == 0.0f) {
        if (obj_check_if_collided_with_object(o, gMarioObject) == 1) {
        RainbowMagicBool = 1.0f;
        RainbowMagic = 51.0f;
        RainbowMagicOrbInteracted = 1.0f;
        //obj_mark_for_deletion(o);
        }
    } else {
        RainbowMagicOrbCoolDown -= 1.0f;
    }

    if (RainbowMagicOrbCoolDown <= 0.0f)
    {
        RainbowMagicOrbInteracted = 0.0f;
        RainbowMagicOrbCoolDown = 300.0f;
    }

    if (RainbowMagicOrbCoolDown == 300.0f) {
        o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_RAINBOW_MAGIC_ORB];
    } else {
        o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_RAINBOW_MAGIC_PLATFORM];
    }
    
    
    

}
