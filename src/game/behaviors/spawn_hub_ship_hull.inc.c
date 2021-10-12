
// spawn_hub_ship_hull.inc.c

extern f32 numberOfStarsCollected;

//! acces Hub ONLY after finishing tutorial level, so you start the game with 1 star already

void bhv_load_ship_hull_loop() {

    if (numberOfStarsCollected > 1) { //LvL1 Done
        o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_SHIP_HULL];
        load_object_collision_model();
    }

}
