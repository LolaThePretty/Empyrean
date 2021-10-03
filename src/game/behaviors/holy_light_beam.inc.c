
// holy_light_beam.inc.c

extern f32 numberOfStarsCollected;

f32 HolyLightBeamTimer = 1.0f;

void bhv_holy_light_beam_loop() {

    HolyLightBeamTimer -= 0.02f;

    o->header.gfx.scale[0] = HolyLightBeamTimer;
    o->header.gfx.scale[2] = HolyLightBeamTimer;

    if (HolyLightBeamTimer <= 0.0f) {
        HolyLightBeamTimer = 1.0f;
        obj_mark_for_deletion(o);
    }

}
