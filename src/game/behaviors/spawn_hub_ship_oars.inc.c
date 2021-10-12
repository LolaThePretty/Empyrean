
// spawn_hub_ship_oars.inc.c

extern f32 numberOfStarsCollected;

//! acces Hub ONLY after finishing tutorial level, so you start the game with 1 star already

void bhv_load_ship_oars_loop() {

    if (numberOfStarsCollected > 3) { //LvL3 Done
        o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_SHIP_OARS];
        load_object_collision_model();
    }

}
