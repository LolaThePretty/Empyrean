
const GeoLayout rainbow_magic_platform_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, rainbow_magic_platform_RainbowMagicPlatformRoot_mesh_layer_5),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, rainbow_magic_platform_RainbowMagicPlatformRoot_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, rainbow_magic_platform_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, rainbow_magic_platform_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
