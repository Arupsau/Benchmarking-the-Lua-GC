#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

int main() {
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);

    // Load and run the testbench Lua file
    if (luaL_dofile(L, "testbench.lua")) {
        lua_close(L);
        return -1;
    }

    // Set Lua to incremental GC mode
    lua_gc(L, LUA_GCSTEP, 0);

    lua_close(L);
    return 0;
}
