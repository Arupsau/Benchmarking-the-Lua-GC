# Benchmarking-the-Lua-GC
<h2>Introduction :</h2>
Lua is a lightweight, high-level scripting language known for its simple syntax and
efficient memory management. Understanding Lua’s garbage collection (GC) is crucial
for optimizing Lua applications and ensuring efficient memory usage. This report
examines Lua’s GC mechanisms, focusing on three configurations: Full GC,
Incremental GC, and Generational GC.
<h2>C Files for Different GC Configurations:</h2>
Three C programs were written to test Lua’s GC under different configurations. Each
program initializes Lua, runs a testbench script, and measures the time taken for GC
operations.
