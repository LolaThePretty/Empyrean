
// ship_wreck.inc.c

void bhv_ship_wreck_loop() {

    if (gHudDisplay.stars > 0) {
        obj_mark_for_deletion(o);
    }

}
