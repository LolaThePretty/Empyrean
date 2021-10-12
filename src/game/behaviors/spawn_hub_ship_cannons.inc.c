
// spawn_hub_ship_cannons.inc.c

extern f32 numberOfStarsCollected;

//! acces Hub ONLY after finishing tutorial level, so you start the game with 1 star already

void bhv_load_ship_cannons_loop() {

    if (numberOfStarsCollected > 4) { //LvL4 Done
        o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_SHIP_CANNONS];
        //load_object_collision_model();
    }

}
