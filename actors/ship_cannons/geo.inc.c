
const GeoLayout ship_cannons_geo[] = {
	GEO_CULLING_RADIUS(10000),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, ship_cannons_CannonsRoot_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, ship_cannons_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
