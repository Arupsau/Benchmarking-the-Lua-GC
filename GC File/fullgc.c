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

    // Force full garbage collection
    lua_gc(L, LUA_GCCOLLECT, 0);

    lua_close(L);
    return 0;
}
