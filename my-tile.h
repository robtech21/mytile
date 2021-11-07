
// My Tile Use

static int32_t MyTile_use(__attribute__((unused)) unsigned char *tile, __attribute__((unused)) unsigned char *level, int32_t x, int32_t y, int32_t z, __attribute__((unused)) unsigned char *player) {

    INFO("%i %i %i", x, y, z);

    return 1;

}

