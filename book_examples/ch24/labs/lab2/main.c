/*
    SPDX-FileCopyrightText: 2021 Daniel Fernandez Kuehr <daniel.kuehr@tacitosecurity.com>
    SPDX-License-Identifier: GPL-3.0-or-later
*/
#include "protocol.h"
#include "common.h"

void kmain() {
    setup_serial();
    OOB_PRINT("kmain at 0x%016lx", UInt64, &kmain);
    __asm__ __volatile__("hlt");
}
