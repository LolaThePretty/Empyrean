
// hub_elevator_magic_beam.inc.c

extern f32 numberOfStarsCollected;

void bhv_hub_elevator_magic_beam_loop() {

    if (numberOfStarsCollected < 3) {
        obj_mark_for_deletion(o);
    }

}
