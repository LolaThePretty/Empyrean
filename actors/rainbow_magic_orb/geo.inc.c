
const GeoLayout rainbow_magic_orb_geo[] = {
	GEO_CULLING_RADIUS(10000),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, rainbow_magic_orb_RainbowMagicRoot_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_SHADOW(1, 255, 100),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, rainbow_magic_orb_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
