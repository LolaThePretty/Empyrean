
// level_4_barrier.inc.c

extern f32 numberOfStarsCollected;

void bhv_level_4_barrier_loop() {

    if (numberOfStarsCollected > 3) {
        obj_mark_for_deletion(o);
    }

}
