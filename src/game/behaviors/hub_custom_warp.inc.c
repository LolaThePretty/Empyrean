// hub_custom_warp.inc.inc.c

#include <PR/ultratypes.h>
#include "object_fields.h"
#include "game/mario.h"
#include "include/types.h"
#include "game/interaction.h"
#include "object_constants.h"
#include "game/save_file.h"



f32 SpawnCavernWarp = 0.0f;

extern f32 numberOfStarsCollected; //float i created, it is equal to the number of stars in the file

void bhv_custom_warp_loop(void) {

    //if i have more than 1 stars and my warp didn't spawn yet, tell the game to spawn it
    if ((numberOfStarsCollected > 1) && (SpawnCavernWarp == 0.0f)) {
        SpawnCavernWarp = 1.0f;
    }

    //! warp to area 2 (CAVERN)
    if ((numberOfStarsCollected >= 2) && (SpawnCavernWarp == 1.0f)) {
        spawn_object_relative(33, 0, 0, 0, o, MODEL_RAINBOW_MAGIC_ORB, bhvWarp);
        SpawnCavernWarp = 2.0f;
    }

}

//! /////////////////////////
//! /////////////////////////
//! UNUSED STILL, MAYBE NEVER
//! /////////////////////////
//! /////////////////////////

//f32 currentUpgrade = 0.0f; //don't mind the name it's just a test

/* in fast64 place an object with MODEL_NONE (or a model if you want the player to
   to see the warp) and select a behavior that uses this void in a loop */
/* void bhv_custom_warp_loop(void) {

    //if i have more than 0 stars and my warp didn't spawn yet, tell the game to spawn it
    if ((numberOfStarsCollected > 0) && (currentUpgrade == 0.0f)) {
        currentUpgrade = 1.0f;
    }

    /* if i have more than 0 stars and i'm told to spawn it, spawn the warp at these coordinates relative
       to the original object and tell the game the warp spawned so it doesn't spawn it every frame
       until the game crashes */

    //! warp to area 2 (hull)
    //if ((numberOfStarsCollected == 2) && (currentUpgrade == 1.0f)) {
        //I set "4" as the behavior parameter down here because i want my spawned warp to have the ID 0x04
        //i'm pretty sure that if i want my warp to be "0x0A" i will need to set the behparam to "10"
        //but I didn't try since i don't need to have it 0x0A
    //    spawn_object_relative(4, 0, 0, 0, o, MODEL_RAINBOW_MAGIC_ORB, bhvWarp);
    //    currentUpgrade = 2.0f;
    //}

    // warp to area 3 (masts)
    /*if ((numberOfStarsCollected == 3) && (currentUpgrade == 2.0f)) {
        spawn_object_relative(4, 0, 0, 0, o, MODEL_RAINBOW_MAGIC_ORB, bhvWarp);
        currentUpgrade = 3.0f;
    }*/

    //! warp to area 4 (oars)
    /*if ((numberOfStarsCollected == 3) && (currentUpgrade == 3.0f)) {
        spawn_object_relative(4, 0, 0, 0, o, MODEL_RAINBOW_MAGIC_ORB, bhvWarp);
        currentUpgrade = 4.0f;
    }*/

    // warp to area 5 (cannons)
    /*if ((numberOfStarsCollected == 3) && (currentUpgrade == 4.0f)) {
        spawn_object_relative(4, 0, 0, 0, o, MODEL_RAINBOW_MAGIC_ORB, bhvWarp);
        currentUpgrade = 5.0f;
    }*/

    //! warp to area 6 (sails)
    /*if ((numberOfStarsCollected == 3) && (currentUpgrade == 5.0f)) {
        spawn_object_relative(4, 0, 0, 0, o, MODEL_RAINBOW_MAGIC_ORB, bhvWarp);
        currentUpgrade = 6.0f;
    }*/

//}

