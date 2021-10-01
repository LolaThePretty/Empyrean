
// hub_elevator.inc.c

f32 HUBelevatorIsUp = 0.0f;
f32 HUBelevatorGoesUp = 0.0f;

f32 HUBelevatorIsDown = 1.0f;
f32 HUBelevatorGoesDown = 0.0f;

f32 HUBelevatorMove = 0.0f;

f32 HUBelevatorReset = 0.0f;

extern f32 ZinputCheck;

//f32 shouldDisplayHUBelevatorArrows = 0.0f;

void bhv_hub_elevator_loop() {

    if ((o->oDistanceToMario < 1500.0f) && (HUBelevatorReset == 0.0f)) {
        bhv_hub_elevator_can_move();
    }
    
    if (o->oDistanceToMario > 1500.0f) {
        HUBelevatorReset = 1.0f;
        HUBelevatorGoesUp = 0.0f;
        HUBelevatorGoesDown = 1.0f;
        HUBelevatorIsUp = 0.0f;
        HUBelevatorIsDown = 0.0f;
    }

    bhv_hub_elevator_reset();

}

void bhv_hub_elevator_can_move() {
    if((HUBelevatorIsDown == 1.0f) && (gMarioObject->platform == o) && (ZinputCheck == 1.0f)) {
        HUBelevatorMove = 1.0f;
    }

    if (HUBelevatorMove == 1.0f) {
        if (HUBelevatorGoesUp == 1.0f) {
            cur_obj_play_sound_2(SOUND_GENERAL_MOVING_PLATFORM_SWITCH);
            if (o->oPosY < 4560.0f) {
                o->oPosY += 20.0f;
            }
            if (o->oPosY > 4560.0f) {
                o->oPosY = 4560.0f;
                HUBelevatorIsUp = 1.0f;
                HUBelevatorIsDown = 0.0f;
                HUBelevatorGoesUp = 0.0f;
                HUBelevatorMove = 0.0f;
            }
        }
    }
    
    if ((HUBelevatorIsUp == 1.0f) && (gMarioObject->platform == o)) {
        HUBelevatorMove = 1.0f;
    }

    if (HUBelevatorMove == 1.0f) {
        if (HUBelevatorGoesDown == 1.0f) {
            cur_obj_play_sound_2(SOUND_GENERAL_MOVING_PLATFORM_SWITCH);
                if (o->oPosY > -150.0f) {
                    o->oPosY -= 20.0f;
                }
                if (o->oPosY < -150.0f) {
                    o->oPosY = -150.0f;
                    HUBelevatorIsUp = 0.0f;
                    HUBelevatorIsDown = 1.0f;
                    HUBelevatorGoesDown = 0.0f;
                    HUBelevatorMove = 0.0f;
                }
        }
    }
}

void bhv_hub_elevator_reset() {
    if (HUBelevatorReset == 1.0f) {
        if (o->oPosY > -150.0f) {
            o->oPosY -= 20.0f;
        }

        if (o->oPosY <= -150.0f) {
            o->oPosY = -150.0f;

            HUBelevatorIsUp = 0.0f;
            HUBelevatorGoesUp = 0.0f;

            HUBelevatorIsDown = 1.0f;
            HUBelevatorGoesDown = 0.0f;

            HUBelevatorMove = 0.0f;

            HUBelevatorReset = 0.0f;

        }
    }
}