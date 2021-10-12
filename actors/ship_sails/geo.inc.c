
const GeoLayout ship_sails_geo[] = {
	GEO_CULLING_RADIUS(10000),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_ALPHA, 0, 0, 0, ship_sails_SailRoot_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_ALPHA, ship_sails_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
