# 📱 Mini-Terminal v0.1-prealpha

A simple educational terminal written in C++.

---

## ✨ What's new

- First push to GitHub
- Linux support added

---

## ⚙️ Features

- Structured and readable code  
- Event System inspired by game engine architecture 😏  
- Fully open architecture with no hidden systems  
- Easy to extend and modify  
- Simple and clear command execution logic  

---

## 📁 Project structure

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

## 🧩 Requirements

- Windows: MINGW64 + g++ package
- Linux: g++ package

## 🚀 Build

- Windows: **Start a "build.bat"**
- Linux: **./build.sh in terminal**

## 💡 Notes

- This project is in an early stage (pre-alpha).
Architecture may change as the system evolves.

# ⚠️ DISCLAIMER ⚠️

- **The author is not responsible for any issues on your device.
For safety, test in a virtual machine or isolated environment before running on your main system.**
