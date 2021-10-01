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
extern Vtx rainbow_magic_orb_RainbowMagicRoot_mesh_layer_1_vtx_1[128];
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

#include "hub_elevator/geo_header.h"

#include "hub_elevator/collision_header.h"

#endif
