
const GeoLayout ship_masts_geo[] = {
	GEO_CULLING_RADIUS(10000),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ship_masts_MastRoot_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, ship_masts_MastRoot_mesh_layer_4),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ship_masts_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ship_masts_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
