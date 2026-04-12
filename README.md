# 📱 Mini-Terminal v0.2-alpha

A simple educational terminal written in C++.

---

## ✨ What's new: GLOBAL UPDATE!

- NEW COMMANDS SYSTEM!
- BEST EXPERIENCE FOR OTHER PROGRAMMERS WITH SUGARCODE!
- BETTER BUILD FILE!
- NEW PROJECT ARCHITECTURE!
- THE BEST VERSION EVER!

## 🥀 Deleted Features

**Example: Feature - Issue**

- Event System - Spaghetti code & hard to use system.
- Some customization -

---

## 📁 (OLD)Project structure

```txt
source/
    core/
        events.cpp     <- core event system
        variables.cpp  <- buffer and state handling
        compare.cpp    <- comparison utilities

    include/
        colors.hpp     <- ANSI text colors
        compare.hpp    <- comparison functions
        events.hpp     <- event system interface
        linemngr.hpp   <- output manager (clear, render)
        variables.hpp  <- project variables

main.cpp            <- entry point, system initialization
build.bat           <- Windows build script
build.sh            <- Linux build script
```

## 📁 (NEW)Project structure

```txt
source/
    core/
        launcher/
            App.hpp
            App.cpp
        CommandManager.cpp
    include/
        other/
            Color.hpp
        CommandManager.hpp
    launcher.cpp
build.bat
build.sh
```

## 🧩 Requirements

- Windows: MINGW64 + g++ package
- Linux: g++ package

## 🚀 Build

- Windows: **Start a "build.bat"**
- Linux: **./build.sh in terminal**

## 💡 Notes

- This project is in an early stage (alpha).
Architecture may change as the system evolves.

# ⚠️ DISCLAIMER ⚠️

- **The author is not responsible for any issues on your device.
For safety, test in a virtual machine or isolated environment before running on your main system.**


8,384 kb
