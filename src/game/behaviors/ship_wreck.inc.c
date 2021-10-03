
// ship_wreck.inc.c

extern f32 numberOfStarsCollected;

void bhv_ship_wreck_loop() {

    if (numberOfStarsCollected > 1) {
        obj_mark_for_deletion(o);
    }

}
