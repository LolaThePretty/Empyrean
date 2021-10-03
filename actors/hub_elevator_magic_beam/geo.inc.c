
const GeoLayout hub_elevator_magic_beam_geo[] = {
	GEO_CULLING_RADIUS(10000),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, hub_elevator_magic_beam_ElevatorRayBeamRoot_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, hub_elevator_magic_beam_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
