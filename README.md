### Learning from:
    - Gray Hat Hacking The Ethical Hacker's Handbook, Fourth Edition 4th Edition by Daniel Regalado (Author), Shon Harris (Author), Allen Harper (Author), Chris Eagle (Author), & 4 more

### Public Docker Image:
    - docker pull mikewazowski415/grayhat-workspace1:latest

Docker is needed for a 32bit system ( Used in book ) + writing nasm assembly.


#### MAC OS ISSUES:
1. **GDB**
    - GDB has issues on MacOS ( MacOS security causing pre-mature SIGTRAP ), use in built debugger "lldb" instead.
    - lldb, supports same/similar command set as GDB.
    ##### Command hang-ups:
    - **Disassemble Commands**
        - lldb, disassemble --name <f(n) name>   - Note: Works, output doesn't look as nice as GDB
        - gdb, disassemble <f(n) name>           - Note: Works just fine, and has better looking outPut

