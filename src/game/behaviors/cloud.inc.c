
/**
 * Behavior for bhvCloud and bhvCloudPart.
 * bhvCloud includes the cloud that lakitu rides (both nice and
 * evil).
 * bhvCloudPart is spawned by bhvCloud and is either a "chunk" of cloud.
 * It is purely visual.
 * If spawned by a lakitu, its parent will be the lakitu.
 * Processing order is lakitu -> cloud -> its cloud parts.
 */

/**
 * The relative heights of each cloud part.
 */
static s8 sCloudPartHeights[] = { 11, 8, 12, 8, 9, 9 };

/**
 * Spawn the visual parts of the cloud.
 */
static void cloud_act_spawn_parts(void) {
    struct Object *cloudPart;
    s32 i;

    // Spawn the pieces of the cloud itself
    for (i = 0; i < 5; i++) {
        cloudPart = spawn_object_relative(i, 0, 0, 0, o, MODEL_MIST, bhvCloudPart);

        if (cloudPart != NULL) {
            obj_set_billboard(cloudPart);
        }
    }

    o->oAction = CLOUD_ACT_MAIN;
}

/**
 * Main update function for bhvCloud. This controls the cloud's movement, when it
 * unloads.
 */
static void cloud_act_main(void) {
    s16 localOffsetPhase;
    f32 localOffset;

    localOffsetPhase = 0x800 * gGlobalTimer;

    if (o->parentObj != o) {
        // Despawn if the parent lakitu does
        if (o->parentObj->activeFlags == ACTIVE_FLAG_DEACTIVATED) {
            //o->oAction = CLOUD_ACT_UNLOAD;
        } else {
            o->oCloudCenterX = o->parentObj->oPosX;
            o->oCloudCenterY = o->parentObj->oPosY;
            o->oPosZ = o->parentObj->oPosZ;

            o->oMoveAngleYaw = o->parentObj->oFaceAngleYaw;
        }
    }

    localOffset = 2 * coss(localOffsetPhase) * o->header.gfx.scale[0];

    o->oPosX = o->oCloudCenterX + localOffset;
    o->oPosY = o->oCloudCenterY + localOffset + 12.0f * o->header.gfx.scale[0];
}

/**
 * Update function for bhvCloud.
 */
void bhv_cloud_update(void) {
    switch (o->oAction) {
        case CLOUD_ACT_SPAWN_PARTS:
            cloud_act_spawn_parts();
            break;
        case CLOUD_ACT_MAIN:
            cloud_act_main();
            break;
        /*case CLOUD_ACT_UNLOAD:
            cloud_act_unload();
            break;*/
    }
}

/**
 * Update function for bhvCloudPart. Follow the parent cloud with some oscillation.
 */
void bhv_cloud_part_update(void) {
    /*if (o->parentObj->oAction == CLOUD_ACT_UNLOAD) {
        obj_mark_for_deletion(o);
    } else {*/
        f32 size = 2.0f / 3.0f * o->parentObj->header.gfx.scale[0];
        s16 angleFromCenter = o->parentObj->oFaceAngleYaw + 0x10000 / 5 * o->oBehParams2ndByte;

        // Takes 32 frames to cycle
        s16 localOffsetPhase = 0x800 * gGlobalTimer + 0x4000 * o->oBehParams2ndByte;
        f32 localOffset;

        f32 cloudRadius;

        cur_obj_scale(size);

        if (o->oBehParams2ndByte == 5 && size > 2.0f) {
            size = o->header.gfx.scale[1] = 2.0f;
        }

        // Move back and forth along (1, 1, 1)
        localOffset = 2 * coss(localOffsetPhase) * size;

        cloudRadius = 25.0f * size;

        o->oPosX = o->parentObj->oCloudCenterX + cloudRadius * sins(angleFromCenter) + localOffset;

        o->oPosY =
            o->parentObj->oCloudCenterY + localOffset + size * sCloudPartHeights[o->oBehParams2ndByte];

        o->oPosZ = o->parentObj->oPosZ + cloudRadius * coss(angleFromCenter) + localOffset;

        o->oFaceAngleYaw = o->parentObj->oFaceAngleYaw;
    //}
}
