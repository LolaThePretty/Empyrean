void scroll_rainbow_magic_platform_RainbowMagicPlatformRoot_mesh_layer_4_vtx_0() {
	int i = 0;
	int count = 8;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(rainbow_magic_platform_RainbowMagicPlatformRoot_mesh_layer_4_vtx_0);

	deltaY = (int)(0.30000001192092896 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_actor_geo_rainbow_magic_platform() {
	scroll_rainbow_magic_platform_RainbowMagicPlatformRoot_mesh_layer_4_vtx_0();
}
