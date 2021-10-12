
// spawn_hub_ship_sails.inc.c

extern f32 numberOfStarsCollected;

//! acces Hub ONLY after finishing tutorial level, so you start the game with 1 star already

void bhv_load_ship_sails_loop() {

    if (numberOfStarsCollected > 5) { //LvL5 Done
        o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_SHIP_SAILS];
    }

}

//! I ♥ u Jacob
