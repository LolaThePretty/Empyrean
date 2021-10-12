
// spawn_hub_ship_masts.inc.c

extern f32 numberOfStarsCollected;

//! acces Hub ONLY after finishing tutorial level, so you start the game with 1 star already

void bhv_load_ship_masts_loop() {

    if (numberOfStarsCollected > 2) { //LvL2 Done
        o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_SHIP_MASTS];
        load_object_collision_model();
    }

}
