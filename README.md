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
<h2>Profiling with Callgrind:</h2>
The executables (fullgc.c, incrementalgc.c, and generationalgc.c) were profiled using
Callgrind (part of Valgrind) to analyze their performance. The generated profiling data
analyze using tools like kcachegrind to generate call graphs and further study the GC
behavior.

</p>
<h3> Call Graph of FULL-GC </h3>
<br>
<p align="center">
<img src = "https://github.com/Arupsau/CCTV-surveillance-for-traffic-dense-environments/blob/main/Images/YOLO.jpg](https://github.com/Arupsau/Benchmarking-the-Lua-GC/blob/main/Images/fullgc_compact.png">
</p>
</p>
<h3> Call Graph of Generational-GC </h3>
<br>
<p align="center">
<img src = "https://github.com/Arupsau/Benchmarking-the-Lua-GC/blob/main/Images/generationalgc_compact.png">
</p>
</p>
<h3> Call Graph of Incremental-GC </h3>
<br>
<p align="center">
<img src = "https://github.com/Arupsau/Benchmarking-the-Lua-GC/blob/main/Images/incrementalgc_compact.png">
</p>
