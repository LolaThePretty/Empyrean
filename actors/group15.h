#ifndef GROUP15_H
#define GROUP15_H

#include "types.h"

// boo_castle
extern const GeoLayout boo_castle_geo[];
extern const Gfx boo_castle_seg6_dl_06017A10[];
extern const Gfx boo_castle_seg6_dl_06017A78[];
extern const Gfx boo_castle_seg6_dl_06017AD0[];
extern const Gfx boo_castle_seg6_dl_06017CE0[];

// lakitu_cameraman
extern const GeoLayout lakitu_geo[];
extern const Gfx lakitu_seg6_dl_06003C80[];
extern const Gfx lakitu_seg6_dl_06003DB0[];
extern const Gfx lakitu_seg6_dl_06003E30[];
extern const Gfx lakitu_seg6_dl_06004410[];
extern const Gfx lakitu_seg6_dl_06004680[];
extern const Gfx lakitu_seg6_dl_060047E8[];
extern const Gfx lakitu_seg6_dl_060049E0[];
extern const Gfx lakitu_seg6_dl_06004BA8[];
extern const Gfx lakitu_seg6_dl_06004BE8[];
extern const Gfx lakitu_seg6_dl_06004C30[];
extern const Gfx lakitu_seg6_dl_06004C60[];
extern const Gfx lakitu_seg6_dl_06004C88[];
extern const Gfx lakitu_seg6_dl_060051D0[];
extern const Gfx lakitu_seg6_dl_06005218[];
extern const Gfx lakitu_seg6_dl_06005360[];
extern const Gfx lakitu_seg6_dl_06005598[];
extern const Gfx lakitu_seg6_dl_060055E8[];
extern const Gfx lakitu_seg6_dl_06005610[];
extern const struct Animation *const lakitu_seg6_anims_060058F8[];

// mips
extern const GeoLayout mips_geo[];
extern const Gfx mips_seg6_dl_06010600[];
extern const Gfx mips_seg6_dl_06010748[];
extern const Gfx mips_seg6_dl_060107B8[];
extern const Gfx mips_seg6_dl_06010A98[];
extern const Gfx mips_seg6_dl_06010C40[];
extern const Gfx mips_seg6_dl_06010DB0[];
extern const Gfx mips_seg6_dl_06010E60[];
extern const Gfx mips_seg6_dl_06010FF8[];
extern const Gfx mips_seg6_dl_060110B0[];
extern const Gfx mips_seg6_dl_06011240[];
extern const Gfx mips_seg6_dl_06011310[];
extern const Gfx mips_seg6_dl_06011470[];
extern const Gfx mips_seg6_dl_06011520[];
extern const Gfx mips_seg6_dl_060116B0[];
extern const Gfx mips_seg6_dl_06011780[];
extern const Gfx mips_seg6_dl_060118E0[];
extern const Gfx mips_seg6_dl_06011990[];
extern const Gfx mips_seg6_dl_06011B00[];
extern const Gfx mips_seg6_dl_06011BB0[];
extern const Gfx mips_seg6_dl_06011D10[];
extern const Gfx mips_seg6_dl_06011DB0[];
extern const Gfx mips_seg6_dl_06011E88[];
extern const Gfx mips_seg6_dl_06011ED8[];
extern const Gfx mips_seg6_dl_06011F70[];
extern const Gfx mips_seg6_dl_06011FC0[];
extern const struct Animation *const mips_seg6_anims_06015634[];

// toad
extern const GeoLayout toad_geo_000114[];
extern const GeoLayout toad_geo_00027C[];
extern const GeoLayout toad_geo[];
extern const Gfx toad_seg6_dl_06007300[];
extern const Gfx toad_seg6_dl_06007498[];
extern const Gfx toad_seg6_dl_060076C0[];
extern const Gfx toad_seg6_dl_06007710[];
extern const Gfx toad_seg6_us_dl_06007788[];
extern const Gfx toad_seg6_dl_06007960[];
extern const Gfx toad_seg6_dl_06007A48[];
extern const Gfx toad_seg6_us_dl_06007B00[];
extern const Gfx toad_seg6_dl_06007D10[];
extern const Gfx toad_seg6_dl_06007EB0[];
extern const Gfx toad_seg6_dl_060080C0[];
extern const Gfx toad_seg6_dl_060081F8[];
extern const Gfx toad_seg6_dl_060083E8[];
extern const Gfx toad_seg6_dl_06008520[];
extern const Gfx toad_seg6_us_dl_06008608[];
extern const Gfx toad_seg6_dl_06008748[];
extern const Gfx toad_seg6_dl_06008890[];
extern const Gfx toad_seg6_dl_06008A90[];
extern const Gfx toad_seg6_dl_06008BD8[];
extern const struct Animation *const toad_seg6_anims_0600FB58[];

// hub elevator platform
extern const GeoLayout hub_elevator_geo[];
extern Lights1 hub_elevator_ElevatorSides_lights;
extern Lights1 hub_elevator_ElevatorFloor_lights;
extern Lights1 hub_elevator_ElevatorBorders_lights;
extern u8 hub_elevator_Tile3_rgba16[];
extern u8 hub_elevator_Tile1_rgba16[];
extern u8 hub_elevator_Tile2_rgba16[];
extern Vtx hub_elevator_HubElevatorRootBone_mesh_layer_1_vtx_0[128];
extern Gfx hub_elevator_HubElevatorRootBone_mesh_layer_1_tri_0[];
extern Vtx hub_elevator_HubElevatorRootBone_mesh_layer_1_vtx_1[40];
extern Gfx hub_elevator_HubElevatorRootBone_mesh_layer_1_tri_1[];
extern Vtx hub_elevator_HubElevatorRootBone_mesh_layer_1_vtx_2[64];
extern Gfx hub_elevator_HubElevatorRootBone_mesh_layer_1_tri_2[];
extern Gfx mat_hub_elevator_ElevatorSides[];
extern Gfx mat_hub_elevator_ElevatorFloor[];
extern Gfx mat_hub_elevator_ElevatorBorders[];
extern Gfx hub_elevator_HubElevatorRootBone_mesh_layer_1[];
extern Gfx hub_elevator_material_revert_render_settings[];

extern const Collision hub_elevator_collision[];

// ship wreck
extern const GeoLayout ship_wreck_geo[];
extern Lights1 ship_wreck_BodyPlanks2_lights;
extern Lights1 ship_wreck_BodyPlanks1_lights;
extern Lights1 ship_wreck_Black_lights;
extern Lights1 ship_wreck_BridgeFences_layer4_lights;
extern u8 ship_wreck_Planks_rgba16[];
extern u8 ship_wreck_WoodenFence_rgba16[];
extern Vtx ship_wreck_ShipWreckRoot_mesh_layer_1_vtx_0[223];
extern Gfx ship_wreck_ShipWreckRoot_mesh_layer_1_tri_0[];
extern Vtx ship_wreck_ShipWreckRoot_mesh_layer_1_vtx_1[688];
extern Gfx ship_wreck_ShipWreckRoot_mesh_layer_1_tri_1[];
extern Vtx ship_wreck_ShipWreckRoot_mesh_layer_1_vtx_2[23];
extern Gfx ship_wreck_ShipWreckRoot_mesh_layer_1_tri_2[];
extern Vtx ship_wreck_ShipWreckRoot_mesh_layer_4_vtx_0[48];
extern Gfx ship_wreck_ShipWreckRoot_mesh_layer_4_tri_0[];
extern Gfx mat_ship_wreck_BodyPlanks2[];
extern Gfx mat_ship_wreck_BodyPlanks1[];
extern Gfx mat_ship_wreck_Black[];
extern Gfx mat_ship_wreck_BridgeFences_layer4[];
extern Gfx mat_revert_ship_wreck_BridgeFences_layer4[];
extern Gfx ship_wreck_ShipWreckRoot_mesh_layer_1[];
extern Gfx ship_wreck_ShipWreckRoot_mesh_layer_4[];
extern Gfx ship_wreck_material_revert_render_settings[];

extern const Collision ship_wreck_collision[];

// rainbow magic orb
extern const GeoLayout rainbow_magic_orb_geo[];
extern Lights1 rainbow_magic_orb_MagicCore_lights;
extern Lights1 rainbow_magic_orb_RainbowMagicRings_layer1_lights;
extern u8 rainbow_magic_orb_Rainbow_rgba16[];
extern Vtx rainbow_magic_orb_RainbowMagicRoot_mesh_layer_1_vtx_0[28];
extern Gfx rainbow_magic_orb_RainbowMagicRoot_mesh_layer_1_tri_0[];
extern Vtx rainbow_magic_orb_RainbowMagicRoot_mesh_layer_1_vtx_1[256];
extern Gfx rainbow_magic_orb_RainbowMagicRoot_mesh_layer_1_tri_1[];
extern Gfx mat_rainbow_magic_orb_MagicCore[];
extern Gfx mat_rainbow_magic_orb_RainbowMagicRings_layer1[];
extern Gfx mat_revert_rainbow_magic_orb_RainbowMagicRings_layer1[];
extern Gfx rainbow_magic_orb_RainbowMagicRoot_mesh_layer_1[];
extern Gfx rainbow_magic_orb_material_revert_render_settings[];

// rainbow magic platform
extern const GeoLayout rainbow_magic_platform_geo[];
extern Lights1 rainbow_magic_platform_RainbowMagicPlatform_lights;
extern Lights1 rainbow_magic_platform_Magic_layer4_lights;
extern u8 rainbow_magic_platform_RainbowMagicPlatform_TR60_rgba32[];
extern u8 rainbow_magic_platform_Magic_rgba16[];
extern Vtx rainbow_magic_platform_RainbowMagicPlatformRoot_mesh_layer_5_vtx_0[24];
extern Gfx rainbow_magic_platform_RainbowMagicPlatformRoot_mesh_layer_5_tri_0[];
extern Vtx rainbow_magic_platform_RainbowMagicPlatformRoot_mesh_layer_4_vtx_0[8];
extern Gfx rainbow_magic_platform_RainbowMagicPlatformRoot_mesh_layer_4_tri_0[];
extern Gfx mat_rainbow_magic_platform_RainbowMagicPlatform[];
extern Gfx mat_revert_rainbow_magic_platform_RainbowMagicPlatform[];
extern Gfx mat_rainbow_magic_platform_Magic_layer4[];
extern Gfx mat_revert_rainbow_magic_platform_Magic_layer4[];
extern Gfx rainbow_magic_platform_RainbowMagicPlatformRoot_mesh_layer_5[];
extern Gfx rainbow_magic_platform_RainbowMagicPlatformRoot_mesh_layer_4[];
extern Gfx rainbow_magic_platform_material_revert_render_settings[];

extern const Collision rainbow_magic_platform_collision[];

// level 4 barrier

extern const Collision level_4_barrier_collision[];

// holy light beam

extern const GeoLayout holy_light_beam_geo[];
extern Lights1 holy_light_beam_YellowLight_lights;
extern u8 holy_light_beam_YellowPixel_TR20_rgba32[];
extern Vtx holy_light_beam_HolyLightBeamRoot_mesh_layer_5_vtx_0[72];
extern Gfx holy_light_beam_HolyLightBeamRoot_mesh_layer_5_tri_0[];
extern Gfx mat_holy_light_beam_YellowLight[];
extern Gfx mat_revert_holy_light_beam_YellowLight[];
extern Gfx holy_light_beam_HolyLightBeamRoot_mesh_layer_5[];
extern Gfx holy_light_beam_material_revert_render_settings[];

// hub elevator magic beam
extern const GeoLayout hub_elevator_magic_beam_geo[];
extern Lights1 hub_elevator_magic_beam_ElevatorRayBeam_lights;
extern u8 hub_elevator_magic_beam_Beam_rgba32[];
extern Vtx hub_elevator_magic_beam_ElevatorRayBeamRoot_mesh_layer_5_vtx_0[165];
extern Gfx hub_elevator_magic_beam_ElevatorRayBeamRoot_mesh_layer_5_tri_0[];
extern Gfx mat_hub_elevator_magic_beam_ElevatorRayBeam[];
extern Gfx mat_revert_hub_elevator_magic_beam_ElevatorRayBeam[];
extern Gfx hub_elevator_magic_beam_ElevatorRayBeamRoot_mesh_layer_5[];
extern Gfx hub_elevator_magic_beam_material_revert_render_settings[];

// ship hull
extern const GeoLayout ship_hull_geo[];
extern Lights1 ship_hull_BodySides_layer1_lights;
extern Lights1 ship_hull_BodyPlanks2Big_layer1_lights;
extern Lights1 ship_hull_BodyPlanks1Big_lights;
extern Lights1 ship_hull_Gold_lights;
extern Lights1 ship_hull_CannonsFender_lights;
extern Lights1 ship_hull_ShipBayGrill_lights;
extern Lights1 ship_hull_Black_lights;
extern Lights1 ship_hull_BodyPlanks1_lights;
extern Lights1 ship_hull_OarsHoles_layer4_lights;
extern Lights1 ship_hull_Net_layer4_lights;
extern Lights1 ship_hull_Wheel_layer4_lights;
extern u8 ship_hull_Bubba_Tongue_rgba16[];
extern u8 ship_hull_Light_Beam_rgba16[];
extern u8 ship_hull_Planks_2_V_rgba16[];
extern u8 ship_hull_Planks_32x32_rgba16[];
extern u8 ship_hull_Planks_2_rgba16[];
extern u8 ship_hull_Rock3_rgba16[];
extern u8 ship_hull_Ship_Grill_Black_i8[];
extern u8 ship_hull_Planks_rgba16[];
extern u8 ship_hull_Hole_rgba16[];
extern u8 ship_hull_Net_rgba16[];
extern u8 ship_hull_Wheel2_rgba16[];
extern Vtx ship_hull_HullRoot_mesh_layer_1_vtx_0[140];
extern Gfx ship_hull_HullRoot_mesh_layer_1_tri_0[];
extern Vtx ship_hull_HullRoot_mesh_layer_1_vtx_1[282];
extern Gfx ship_hull_HullRoot_mesh_layer_1_tri_1[];
extern Vtx ship_hull_HullRoot_mesh_layer_1_vtx_2[254];
extern Gfx ship_hull_HullRoot_mesh_layer_1_tri_2[];
extern Vtx ship_hull_HullRoot_mesh_layer_1_vtx_3[56];
extern Gfx ship_hull_HullRoot_mesh_layer_1_tri_3[];
extern Vtx ship_hull_HullRoot_mesh_layer_1_vtx_4[468];
extern Gfx ship_hull_HullRoot_mesh_layer_1_tri_4[];
extern Vtx ship_hull_HullRoot_mesh_layer_1_vtx_5[10];
extern Gfx ship_hull_HullRoot_mesh_layer_1_tri_5[];
extern Vtx ship_hull_HullRoot_mesh_layer_1_vtx_6[20];
extern Gfx ship_hull_HullRoot_mesh_layer_1_tri_6[];
extern Vtx ship_hull_HullRoot_mesh_layer_1_vtx_7[36];
extern Gfx ship_hull_HullRoot_mesh_layer_1_tri_7[];
extern Vtx ship_hull_HullRoot_mesh_layer_4_vtx_0[24];
extern Gfx ship_hull_HullRoot_mesh_layer_4_tri_0[];
extern Vtx ship_hull_HullRoot_mesh_layer_4_vtx_1[4];
extern Gfx ship_hull_HullRoot_mesh_layer_4_tri_1[];
extern Vtx ship_hull_HullRoot_mesh_layer_4_vtx_2[6];
extern Gfx ship_hull_HullRoot_mesh_layer_4_tri_2[];
extern Gfx mat_ship_hull_BodySides_layer1[];
extern Gfx mat_revert_ship_hull_BodySides_layer1[];
extern Gfx mat_ship_hull_BodyPlanks2Big_layer1[];
extern Gfx mat_revert_ship_hull_BodyPlanks2Big_layer1[];
extern Gfx mat_ship_hull_BodyPlanks1Big[];
extern Gfx mat_ship_hull_Gold[];
extern Gfx mat_ship_hull_CannonsFender[];
extern Gfx mat_ship_hull_ShipBayGrill[];
extern Gfx mat_ship_hull_Black[];
extern Gfx mat_ship_hull_BodyPlanks1[];
extern Gfx mat_ship_hull_OarsHoles_layer4[];
extern Gfx mat_revert_ship_hull_OarsHoles_layer4[];
extern Gfx mat_ship_hull_Net_layer4[];
extern Gfx mat_revert_ship_hull_Net_layer4[];
extern Gfx mat_ship_hull_Wheel_layer4[];
extern Gfx mat_revert_ship_hull_Wheel_layer4[];
extern Gfx ship_hull_HullRoot_mesh_layer_1[];
extern Gfx ship_hull_HullRoot_mesh_layer_4[];
extern Gfx ship_hull_material_revert_render_settings[];

extern const Collision ship_hull_collision[];

// ship masts
extern const GeoLayout ship_masts_geo[];
extern Lights1 ship_masts_BodyPlanks1_lights;
extern Lights1 ship_masts_BodyPlanks2_lights;
extern Lights1 ship_masts_Fence_layer4_lights;
extern Lights1 ship_masts_Net_layer4_lights;
extern Lights1 ship_masts_BlackRopes_layer4_lights;
extern u8 ship_masts_Planks_rgba16[];
extern u8 ship_masts_Fence_rgba16[];
extern u8 ship_masts_Net_rgba16[];
extern u8 ship_masts_Black_rgba16[];
extern Vtx ship_masts_MastRoot_mesh_layer_1_vtx_0[827];
extern Gfx ship_masts_MastRoot_mesh_layer_1_tri_0[];
extern Vtx ship_masts_MastRoot_mesh_layer_1_vtx_1[58];
extern Gfx ship_masts_MastRoot_mesh_layer_1_tri_1[];
extern Vtx ship_masts_MastRoot_mesh_layer_4_vtx_0[24];
extern Gfx ship_masts_MastRoot_mesh_layer_4_tri_0[];
extern Vtx ship_masts_MastRoot_mesh_layer_4_vtx_1[8];
extern Gfx ship_masts_MastRoot_mesh_layer_4_tri_1[];
extern Vtx ship_masts_MastRoot_mesh_layer_4_vtx_2[37];
extern Gfx ship_masts_MastRoot_mesh_layer_4_tri_2[];
extern Gfx mat_ship_masts_BodyPlanks1[];
extern Gfx mat_ship_masts_BodyPlanks2[];
extern Gfx mat_ship_masts_Fence_layer4[];
extern Gfx mat_revert_ship_masts_Fence_layer4[];
extern Gfx mat_ship_masts_Net_layer4[];
extern Gfx mat_revert_ship_masts_Net_layer4[];
extern Gfx mat_ship_masts_BlackRopes_layer4[];
extern Gfx mat_revert_ship_masts_BlackRopes_layer4[];
extern Gfx ship_masts_MastRoot_mesh_layer_1[];
extern Gfx ship_masts_MastRoot_mesh_layer_4[];
extern Gfx ship_masts_material_revert_render_settings[];

extern const Collision ship_masts_collision[];

// ship oars
extern const GeoLayout ship_oars_geo[];
extern Lights1 ship_oars_OarsSeeThroughPlank2_lights;
extern Lights1 ship_oars_Sails_layer4_lights;
extern u8 ship_oars_Planks_rgba16[];
extern u8 ship_oars_Sail_rgba16[];
extern Vtx ship_oars_OarsRoot_mesh_layer_1_vtx_0[690];
extern Gfx ship_oars_OarsRoot_mesh_layer_1_tri_0[];
extern Vtx ship_oars_OarsRoot_mesh_layer_4_vtx_0[72];
extern Gfx ship_oars_OarsRoot_mesh_layer_4_tri_0[];
extern Gfx mat_ship_oars_OarsSeeThroughPlank2[];
extern Gfx mat_ship_oars_Sails_layer4[];
extern Gfx mat_revert_ship_oars_Sails_layer4[];
extern Gfx ship_oars_OarsRoot_mesh_layer_1[];
extern Gfx ship_oars_OarsRoot_mesh_layer_4[];
extern Gfx ship_oars_material_revert_render_settings[];

extern const Collision ship_oars_collision[];

// ship cannons
extern const GeoLayout ship_cannons_geo[];
extern Lights1 ship_cannons_Cannon_lights;
extern Lights1 ship_cannons_CannonBody_lights;
extern u8 ship_cannons_Canon_rgba16[];
extern u8 ship_cannons_CanonBody_rgba16[];
extern Vtx ship_cannons_CannonsRoot_mesh_layer_1_vtx_0[480];
extern Gfx ship_cannons_CannonsRoot_mesh_layer_1_tri_0[];
extern Vtx ship_cannons_CannonsRoot_mesh_layer_1_vtx_1[960];
extern Gfx ship_cannons_CannonsRoot_mesh_layer_1_tri_1[];
extern Gfx mat_ship_cannons_Cannon[];
extern Gfx mat_ship_cannons_CannonBody[];
extern Gfx ship_cannons_CannonsRoot_mesh_layer_1[];
extern Gfx ship_cannons_material_revert_render_settings[];

extern const Collision ship_cannons_collision[];

// ship sails
extern const GeoLayout ship_sails_geo[];
extern Lights1 ship_sails_Sails_layer4_lights;
extern Lights1 ship_sails_BlackRopes_layer4_lights;
extern u8 ship_sails_Sail_rgba16[];
extern u8 ship_sails_Black_rgba16[];
extern Vtx ship_sails_SailRoot_mesh_layer_4_vtx_0[84];
extern Gfx ship_sails_SailRoot_mesh_layer_4_tri_0[];
extern Vtx ship_sails_SailRoot_mesh_layer_4_vtx_1[10];
extern Gfx ship_sails_SailRoot_mesh_layer_4_tri_1[];
extern Gfx mat_ship_sails_Sails_layer4[];
extern Gfx mat_revert_ship_sails_Sails_layer4[];
extern Gfx mat_ship_sails_BlackRopes_layer4[];
extern Gfx mat_revert_ship_sails_BlackRopes_layer4[];
extern Gfx ship_sails_SailRoot_mesh_layer_4[];
extern Gfx ship_sails_material_revert_render_settings[];

extern const Collision ship_sails_collision[];

#include "hub_elevator/geo_header.h"

#include "hub_elevator/collision_header.h"

#endif
