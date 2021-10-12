#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/castle_inside/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _inside_yay0SegmentRomStart, _inside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0xa, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP, castle_geo_000F18), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND, castle_geo_001530), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND, castle_geo_001548), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM, castle_geo_001518), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_3_stars_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_inside_area_1),
		WARP_NODE(0x04, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x12, LEVEL_CASTLE, 0x01, 0xF0, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_CASTLE, 0x01, 0xF1, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1F, LEVEL_CASTLE, 0x01, 0x1F, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x13, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_CASTLE, 0x01, 0x13, WARP_NO_CHECKPOINT),
		WARP_NODE(0x06, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x07, LEVEL_CASTLE, 0x01, 0xF1, WARP_NO_CHECKPOINT),
		WARP_NODE(0x14, LEVEL_CASTLE, 0x01, 0xF0, WARP_NO_CHECKPOINT),
		WARP_NODE(0x15, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x16, LEVEL_CASTLE, 0x01, 0xF1, WARP_NO_CHECKPOINT),
		WARP_NODE(0x17, LEVEL_CASTLE, 0x01, 0xF0, WARP_NO_CHECKPOINT),
		WARP_NODE(0x18, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x19, LEVEL_CASTLE, 0x01, 0xF1, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1A, LEVEL_CASTLE, 0x01, 0xF0, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1B, LEVEL_SSL, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1C, LEVEL_CASTLE, 0x01, 0xF1, WARP_NO_CHECKPOINT),
		WARP_NODE(0x1D, LEVEL_CASTLE, 0xF0, 0x1D, WARP_NO_CHECKPOINT),
		WARP_NODE(0x20, LEVEL_CASTLE, 0x01, 0x20, WARP_NO_CHECKPOINT),
		WARP_NODE(0x21, LEVEL_CASTLE, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 3693, 5360, 3431, 0, 0, 0, 0x00000000, bhv1Up),
		OBJECT(MODEL_HOLY_LIGHT_BEAM, 0, 10675, 0, 0, 0, 0, 0x006B0000, bhvHolyLightBeam),
		OBJECT(MODEL_HUB_ELEVATOR, 3693, 650, 3431, 0, 0, 0, 0x00670000, bhvHubElevator),
		OBJECT(MODEL_HUB_ELEVATOR_MAGIC_BEAM, 3693, 6910, 3431, 0, 0, 0, 0x006C0000, bhvHubElevatorMagicBeam),
		OBJECT(MODEL_NONE, -10151, 856, -2603, 0, 0, 0, 0x00000000, bhvLevel4Barrier),
		OBJECT(MODEL_RAINBOW_MAGIC_ORB, -1731, 750, 2317, 0, 0, 0, 0x00690000, bhvRainbowMagicOrb),
		OBJECT(MODEL_SHIP_WRECK, -4423, 1010, -722, 0, 0, 0, 0x00680000, bhvShipWreck),
		OBJECT(MODEL_NONE, 0, 750, 0, 0, 0, 0, 0x001F0000, bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, 0, 1000, 0, 0, 0, 0, 0x00130000, bhvDeathWarp),
		OBJECT(MODEL_NONE, 0, 1000, 0, 0, 0, 0, 0x000A0000, bhvAirborneWarp),
		OBJECT(MODEL_NONE, -3047, 700, 1682, 0, 0, 0, 0x00200000, bhvInstantActiveWarp),
		OBJECT(MODEL_1UP, -3312, 700, 2100, 0, 0, 0, 0x00210000, bhvHubCustomWarp),
		OBJECT(MODEL_NONE, 3723, 757, 2792, 0, 0, 0, 0x00040000, bhvWarp),
		OBJECT(MODEL_NONE, 3715, 939, 2594, 0, 3, 0, 0x00050000, bhvLaunchDeathWarp),
		OBJECT(MODEL_NONE, 3715, 939, 2594, 0, 3, 0, 0x00120000, bhvLaunchStarCollectWarp),
		OBJECT(MODEL_NONE, 8023, 1346, -1902, 0, 0, 0, 0x00060000, bhvWarp),
		OBJECT(MODEL_NONE, 8023, 1496, -1902, 0, 3, 0, 0x00070000, bhvLaunchDeathWarp),
		OBJECT(MODEL_NONE, 8023, 1496, -1902, 0, 3, 0, 0x00140000, bhvLaunchStarCollectWarp),
		OBJECT(MODEL_NONE, 4759, 6794, -5346, 0, 0, 0, 0x00150000, bhvWarp),
		OBJECT(MODEL_NONE, 4759, 6944, -5346, 0, 3, 0, 0x00160000, bhvLaunchDeathWarp),
		OBJECT(MODEL_NONE, 4759, 6944, -5346, 0, 3, 0, 0x00170000, bhvLaunchStarCollectWarp),
		OBJECT(MODEL_NONE, -10914, 1251, -2618, 0, 0, 0, 0x00180000, bhvWarp),
		OBJECT(MODEL_NONE, -10914, 1401, -2618, 0, 3, 0, 0x00190000, bhvLaunchDeathWarp),
		OBJECT(MODEL_NONE, -10914, 1401, -2618, 0, 3, 0, 0x001A0000, bhvLaunchStarCollectWarp),
		OBJECT(MODEL_NONE, -3663, 1468, -5541, 0, 0, 0, 0x001B0000, bhvWarp),
		OBJECT(MODEL_NONE, -3663, 1618, -5541, 0, 3, 0, 0x001C0000, bhvLaunchDeathWarp),
		OBJECT(MODEL_NONE, -3663, 1618, -5541, 0, 3, 0, 0x001D0000, bhvLaunchStarCollectWarp),
		TERRAIN(castle_inside_area_1_collision),
		MACRO_OBJECTS(castle_inside_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SNOW),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, castle_inside_area_2),
		WARP_NODE(0x06, LEVEL_CASTLE, 0x01, 0x20, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_CASTLE, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x02, 0x13, WARP_NO_CHECKPOINT),
		WARP_NODE(0x13, LEVEL_CASTLE, 0x02, 0x13, WARP_NO_CHECKPOINT),
		WARP_NODE(0x21, LEVEL_CASTLE, 0x02, 0x21, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -989, 1475, -1922, 0, 0, 0, 0x006E0000, bhvLoadHubShipMasts),
		OBJECT(MODEL_NONE, -989, 1475, -1922, 0, 0, 0, 0x006F0000, bhvLoadHubShipOars),
		OBJECT(MODEL_NONE, -989, 1475, -1922, 0, 0, 0, 0x00700000, bhvLoadHubShipCannons),
		OBJECT(MODEL_NONE, -989, 1475, -1922, 0, 0, 0, 0x00710000, bhvLoadHubShipSails),
		OBJECT(MODEL_NONE, 0, 1000, -8000, 0, 0, 0, 0x00130000, bhvDeathWarp),
		OBJECT(MODEL_NONE, 0, 1000, -8000, 0, 0, 0, 0x000A0000, bhvAirborneWarp),
		OBJECT(MODEL_RAINBOW_MAGIC_ORB, 0, 600, -8500, 0, 0, 0, 0x00060000, bhvWarp),
		TERRAIN(castle_inside_area_2_collision),
		MACRO_OBJECTS(castle_inside_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SNOW),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
