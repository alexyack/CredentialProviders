
struct s0 {
    struct s0* f0;
    int64_t f1;
    int32_t f8;
    signed char[3] pad16;
    struct s0* f16;
    signed char[7] pad24;
    struct s0* f24;
    signed char[7] pad32;
    struct s0* f32;
    signed char[7] pad40;
    struct s0* f40;
    signed char[7] pad48;
    struct s0* f48;
    signed char[7] pad56;
    struct s0* f56;
    signed char[7] pad64;
    int32_t f64;
    int32_t f68;
    int32_t f72;
    signed char[180] pad256;
    uint64_t f256;
    uint64_t f264;
    int32_t f272;
    signed char f276;
};

struct s0* fun_18000240c(int64_t* rcx);

struct s0* fun_180001c10(int64_t* rcx, int64_t rdx, struct s0* r8, struct s0* r9) {
    struct s0* rax5;

    rax5 = fun_18000240c(rcx);
    return rax5;
}

int64_t _amsg_exit = 0xacf4;

void fun_180001c3b(int64_t rcx) {
    goto _amsg_exit;
}

int64_t _initterm = 0xad14;

void fun_180001df0(int64_t rcx, int64_t rdx) {
    goto _initterm;
}

struct s1 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f60;
};

uint32_t fun_180001cf0(struct s1* rcx);

struct s2 {
    signed char[8] pad8;
    int32_t f8;
    int32_t f12;
    signed char[20] pad36;
    uint32_t f36;
};

struct s3 {
    signed char[60] pad60;
    int32_t f60;
};

struct s2* fun_180001c50(struct s3* rcx, uint64_t rdx);

uint32_t fun_180001ca0(int64_t rcx, int64_t rdx) {
    struct s2* rax3;

    *reinterpret_cast<uint32_t*>(&rax3) = fun_180001cf0(0x180000000);
    if (*reinterpret_cast<uint32_t*>(&rax3) && (rax3 = fun_180001c50(0x180000000, rcx - 0x180000000), !!rax3)) {
        *reinterpret_cast<uint32_t*>(&rax3) = ~(rax3->f36 >> 31) & 1;
    }
    return *reinterpret_cast<uint32_t*>(&rax3);
}

uint64_t g18000c0e8 = 0x2b992ddfa232;

int64_t GetSystemTimeAsFileTime = 0xadd8;

int64_t GetCurrentProcessId = 0xadac;

int64_t GetCurrentThreadId = 0xadc2;

int64_t GetTickCount = 0xadf2;

int64_t QueryPerformanceCounter = 0xad92;

int64_t g18000c0f0 = 0xffffd466d2205dcd;

void fun_180001d20() {
    void* rbp1;
    uint64_t rax2;
    void* rcx3;
    int32_t eax4;
    uint64_t rax5;
    int32_t eax6;
    uint64_t rax7;
    int32_t eax8;
    uint64_t rax9;
    int32_t eax10;
    uint64_t rax11;
    uint64_t rax12;
    int32_t v13;
    uint64_t v14;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rax2 = g18000c0e8;
    if (rax2 == 0x2b992ddfa232) {
        rcx3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp1) + 24);
        GetSystemTimeAsFileTime(rcx3);
        eax4 = reinterpret_cast<int32_t>(GetCurrentProcessId(rcx3));
        *reinterpret_cast<int32_t*>(&rax5) = eax4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
        eax6 = reinterpret_cast<int32_t>(GetCurrentThreadId(rcx3));
        *reinterpret_cast<int32_t*>(&rax7) = eax6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
        eax8 = reinterpret_cast<int32_t>(GetTickCount(rcx3));
        *reinterpret_cast<int32_t*>(&rax9) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
        eax10 = reinterpret_cast<int32_t>(GetTickCount(rcx3));
        *reinterpret_cast<int32_t*>(&rax11) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
        QueryPerformanceCounter(reinterpret_cast<int64_t>(rbp1) + 32);
        *reinterpret_cast<int32_t*>(&rax12) = v13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
        rax2 = (rax12 << 32 ^ v14 ^ (rax11 ^ (rax5 ^ rax7 ^ rax9 << 24) ^ reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbp1) + 16))) & 0xffffffffffff;
        if (rax2 == 0x2b992ddfa232) {
            rax2 = 0x2b992ddfa233;
        }
        g18000c0e8 = rax2;
    }
    g18000c0f0 = reinterpret_cast<int64_t>(~rax2);
    return;
}

struct s4 {
    signed char[8] pad8;
    void** f8;
};

struct s4* g30;

void** g18000c700;

int64_t Sleep = 0xad8a;

uint32_t g18000c110 = 0;

int32_t g18000c708;

int64_t g180008160 = 0x180002fd0;

void** g18000c710;

void** g18000c6f8;

void** g18000c6f0;

int64_t free = 0xad02;

uint32_t fun_180001704(void** rcx, uint32_t edx, int64_t r8) {
    int64_t rdx2;
    int64_t r14_4;
    void** r15_5;
    uint32_t eax6;
    struct s4* rax7;
    int32_t ebp8;
    void** rsi9;
    int1_t zf10;
    void** tmp64_11;
    uint32_t eax12;
    int32_t r14d13;
    struct s4* rax14;
    void** rsi15;
    int1_t zf16;
    void** tmp64_17;
    int32_t eax18;
    void*** rsi19;
    int32_t eax20;
    int1_t zf21;
    uint32_t eax22;
    int32_t eax23;
    void** rbp24;
    void** rsi25;
    void** r12_26;
    void** r15_27;
    void** rax28;

    *reinterpret_cast<uint32_t*>(&rdx2) = edx;
    r14_4 = r8;
    r15_5 = rcx;
    if (*reinterpret_cast<uint32_t*>(&rdx2)) {
        if (*reinterpret_cast<uint32_t*>(&rdx2) != 1) {
            addr_18000191e_3:
            eax6 = 1;
        } else {
            rax7 = g30;
            ebp8 = 0;
            rsi9 = rax7->f8;
            while (1) {
                zf10 = g18000c700 == rsi9;
                if (zf10) {
                    tmp64_11 = g18000c700;
                    g18000c700 = rsi9;
                    rsi9 = tmp64_11;
                }
                if (zf10) 
                    goto addr_18000185d_8;
                if (!rsi9) 
                    goto addr_18000185f_10;
                *reinterpret_cast<int32_t*>(&rcx) = 0x3e8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx) + 4) = 0;
                Sleep(0x3e8);
            }
        }
    } else {
        eax12 = g18000c110;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax12) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax12 == 0)) 
            goto addr_18000181f_13;
        r14d13 = 0;
        g18000c110 = eax12 - 1;
        rax14 = g30;
        rsi15 = rax14->f8;
        while (1) {
            zf16 = g18000c700 == rsi15;
            if (zf16) {
                tmp64_17 = g18000c700;
                g18000c700 = rsi15;
                rsi15 = tmp64_17;
            }
            if (zf16) 
                goto addr_180001772_18;
            if (!rsi15) 
                goto addr_180001774_20;
            *reinterpret_cast<int32_t*>(&rcx) = 0x3e8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx) + 4) = 0;
            Sleep(0x3e8);
        }
    }
    addr_180001923_22:
    return eax6;
    addr_18000185d_8:
    addr_180001864_23:
    eax18 = g18000c708;
    if (!eax18) {
        rsi19 = reinterpret_cast<void***>(0x1800081a0);
        g18000c708 = 1;
        eax20 = 0;
        if (0) 
            goto addr_1800018bc_25;
        do {
            if (eax20) 
                goto addr_18000181f_13;
            if (*rsi19) {
                eax20 = reinterpret_cast<int32_t>(g180008160(rcx));
            }
            ++rsi19;
        } while (reinterpret_cast<uint64_t>(rsi19) < 0x1800081b0);
        if (eax20) {
            addr_18000181f_13:
            eax6 = 0;
            goto addr_180001923_22;
        } else {
            addr_1800018bc_25:
            rdx2 = 0x180008198;
            fun_180001df0(0x180008168, 0x180008198);
            g18000c708 = 2;
        }
    } else {
        fun_180001c3b(31);
    }
    if (!ebp8) {
        g18000c700 = reinterpret_cast<void**>(0);
    }
    zf21 = g18000c710 == 0;
    if (!zf21 && (eax22 = fun_180001ca0(0x18000c710, rdx2), !!eax22)) {
        g180008160(r15_5, 2, r14_4);
    }
    ++g18000c110;
    goto addr_18000191e_3;
    addr_18000185f_10:
    ebp8 = 1;
    goto addr_180001864_23;
    addr_180001772_18:
    addr_18000177a_37:
    eax23 = g18000c708;
    if (eax23 == 2) {
        rbp24 = g18000c6f8;
        if (rbp24) {
            rsi25 = g18000c6f0;
            r12_26 = rbp24;
            r15_27 = rsi25;
            while (--rsi25, reinterpret_cast<uint64_t>(rsi25) >= reinterpret_cast<uint64_t>(rbp24)) {
                if (!*reinterpret_cast<void***>(rsi25)) 
                    continue;
                *reinterpret_cast<void***>(rsi25) = reinterpret_cast<void**>(0);
                g180008160(rcx);
                rcx = g18000c6f8;
                rax28 = g18000c6f0;
                if (r12_26 != rcx) 
                    goto addr_1800017df_43;
                if (r15_27 == rax28) 
                    continue;
                addr_1800017df_43:
                r12_26 = rcx;
                rbp24 = rcx;
                r15_27 = rax28;
                rsi25 = rax28;
            }
            free(rbp24);
            g18000c6f0 = reinterpret_cast<void**>(0);
            g18000c6f8 = reinterpret_cast<void**>(0);
        }
        g18000c708 = 0;
        if (!r14d13) {
            g18000c700 = reinterpret_cast<void**>(0);
            goto addr_18000191e_3;
        }
    } else {
        fun_180001c3b(31);
        goto addr_18000191e_3;
    }
    addr_180001774_20:
    r14d13 = 1;
    goto addr_18000177a_37;
}

void fun_180001550();

void fun_1800015b0();

struct s5 {
    struct s5* f0;
    int64_t f8;
    struct s5* f16;
    signed char[4] pad28;
    unsigned char f28;
    signed char[3] pad32;
    int64_t f32;
    signed char[8] pad48;
    struct s0* f48;
    signed char[7] pad56;
    uint32_t f56;
    signed char[4] pad64;
    int32_t f64;
    unsigned char f68;
    signed char[6] pad75;
    signed char f75;
};

struct s5* g18000c018 = reinterpret_cast<struct s5*>(0x18000c018);

int64_t g18000c728;

void fun_1800014c0();

int64_t DisableThreadLibraryCalls = 0xad6e;

void** g18000c720;

uint32_t fun_180002ec8(void** rcx, uint32_t edx, ...) {
    if (!edx) {
        fun_180001550();
    } else {
        if (edx == 1) {
            fun_1800015b0();
            g18000c018 = reinterpret_cast<struct s5*>(0x18000c730);
            g18000c728 = 0x180009138;
            fun_1800014c0();
            DisableThreadLibraryCalls(rcx);
        }
    }
    g18000c720 = rcx;
    return 1;
}

/*
 * ??3@YAXPEAX@Z
 * void __cdecl operator delete(void * __ptr64)
 */
int64_t _3_YAXPEAX_Z = 0xacc0;

struct s0* fun_180001bcc(struct s0* rcx, struct s0* rdx, struct s0* r8) {
    goto _3_YAXPEAX_Z;
}

struct s6 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f20;
};

struct s2* fun_180001c50(struct s3* rcx, uint64_t rdx) {
    uint32_t r9d3;
    struct s6* r8_4;
    uint64_t r10_5;
    int64_t rax6;
    uint32_t r11d7;
    struct s2* rax8;
    uint64_t rdx9;
    uint64_t rcx10;

    r9d3 = 0;
    r8_4 = reinterpret_cast<struct s6*>(rcx->f60 + reinterpret_cast<int64_t>(rcx));
    r10_5 = rdx;
    *reinterpret_cast<uint32_t*>(&rax6) = r8_4->f20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    r11d7 = r8_4->f6;
    rax8 = reinterpret_cast<struct s2*>(rax6 + 24 + reinterpret_cast<int64_t>(r8_4));
    if (!r11d7) {
        addr_180001c91_2:
        *reinterpret_cast<int32_t*>(&rax8) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    } else {
        do {
            *reinterpret_cast<int32_t*>(&rdx9) = rax8->f12;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
            if (r10_5 < rdx9) 
                continue;
            *reinterpret_cast<int32_t*>(&rcx10) = rax8->f8 + *reinterpret_cast<int32_t*>(&rdx9);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
            if (r10_5 < rcx10) 
                break;
            ++r9d3;
            ++rax8;
        } while (r9d3 < r11d7);
        goto addr_180001c91_2;
    }
    return rax8;
}

int64_t malloc = 0xad0a;

int32_t fun_180002d21();

struct s0* fun_180002704();

void fun_180002d48();

struct s0* fun_18000240c(int64_t* rcx) {
    int64_t* rbx2;
    struct s0* rax3;
    int32_t eax4;
    int64_t v5;

    rbx2 = rcx;
    while (rax3 = reinterpret_cast<struct s0*>(malloc(rcx)), rax3 == 0) {
        eax4 = fun_180002d21();
        if (!eax4) 
            goto addr_180002437_4;
        rcx = rbx2;
    }
    return rax3;
    addr_180002437_4:
    fun_180002704();
    fun_180002d48();
    *rbx2 = reinterpret_cast<int64_t>("@%");
    goto v5;
}

int64_t* fun_180002464(int64_t* rcx);

void fun_180002d66();

void fun_180002738(struct s0* rcx, struct s0* rdx, struct s0* r8, struct s0* r9);

int64_t* fun_1800024c0(int64_t* rcx, struct s0* rdx);

void fun_18000275c(struct s0* rcx);

struct s0* g18000a350 = reinterpret_cast<struct s0*>(0);

void fun_180002780();

void fun_180002724(struct s0* rcx, struct s0* rdx, struct s0* r8, struct s0* r9);

struct s0* fun_180002c48(struct s0* ecx);

struct s0* g18000a340 = reinterpret_cast<struct s0*>(0);

int64_t g18000a348 = 0xa36000000000;

struct s0* g180008548 = reinterpret_cast<struct s0*>(0x73);

struct s0* g180008530 = reinterpret_cast<struct s0*>(0x69);

struct s0* g180008540 = reinterpret_cast<struct s0*>(0x6f);

struct s0* fun_1800025b0(struct s0* rcx, struct s0* rdx, struct s0* r8);

struct s0* fun_180002d6c(struct s0* rcx, struct s0* rdx, struct s0* r8, ...);

struct s0* fun_180002794(struct s0* rcx, struct s0* rdx, struct s0* r8, struct s0* r9);

uint64_t g18000a358 = 0;

struct s0* fun_180002a4c(struct s0* rcx, struct s0* rdx, struct s0* r8, struct s0* r9);

struct s0* fun_180002704() {
    void* rsp1;
    struct s0* r8_2;
    struct s0* r9_3;
    void* rsp4;
    void* rsp5;
    struct s0* rcx6;
    struct s0* rdi7;
    struct s0* rsi8;
    struct s0* r8_9;
    uint64_t r8_10;
    struct s0* r9_11;
    struct s0* r9_12;
    struct s0* r8_13;
    struct s0* r9_14;
    struct s0* r8_15;
    struct s0* r8_16;
    struct s0* r9_17;
    struct s0* r8d18;
    struct s0* rax19;
    struct s0* r8d20;
    int64_t rax21;
    int64_t v22;
    int1_t cf23;
    struct s0* rax24;
    int1_t cf25;
    int1_t cf26;
    struct s0* rax27;
    struct s0* r8_28;
    int1_t cf29;
    struct s0* rcx30;
    int64_t v31;
    int1_t cf32;
    struct s0* rax33;
    int1_t cf34;
    struct s0* tmp64_35;
    int1_t cf36;
    struct s0* rax37;
    int1_t cf38;
    int1_t cf39;
    struct s0* rax40;
    struct s0* r8_41;
    int64_t v42;
    int1_t cf43;
    int1_t cf44;
    struct s0* rcx45;
    void* r8_46;
    int1_t cf47;
    struct s0* rax48;
    struct s0* rax49;
    void* r8_50;
    int1_t cf51;
    int1_t cf52;
    struct s0* r8_53;
    struct s0* r9_54;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 72);
    fun_180002464(reinterpret_cast<int64_t>(rsp1) + 32);
    fun_180002d66();
    fun_180002738("string too long", 0x18000a228, r8_2, r9_3);
    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp1) - 8 + 8 - 8 + 8 - 40 - 8 + 8 - 72);
    fun_1800024c0(reinterpret_cast<int64_t>(rsp4) + 32, "string too long");
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    fun_180002d66();
    fun_1800024c0(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - 72 + 32, reinterpret_cast<int64_t>(rsp5) + 32);
    fun_180002d66();
    rcx6 = reinterpret_cast<struct s0*>("invalid string position");
    fun_18000275c("invalid string position");
    rdi7 = g18000a350;
    rsi8 = reinterpret_cast<struct s0*>(0x18000a340);
    if (reinterpret_cast<unsigned char>(rdi7) < reinterpret_cast<unsigned char>(r8_9)) {
        fun_180002780();
    } else {
        rdi7 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdi7) - r8_10);
        if (reinterpret_cast<unsigned char>(r9_11) < reinterpret_cast<unsigned char>(rdi7)) {
            rdi7 = r9_12;
        }
        if (1) 
            goto addr_1800027f9_11; else 
            goto addr_1800027cd_12;
    }
    fun_180002780();
    fun_180002724("invalid string position", 0x18000a340, r8_13, r9_14);
    if (0) {
        addr_18000290d_16:
        if (reinterpret_cast<unsigned char>(r8_15) > reinterpret_cast<unsigned char>(0xfffffffffffffffe)) {
            fun_180002724("invalid string position", 0x18000a340, r8_16, r9_17);
            rax19 = fun_180002c48(r8d18);
            g18000a340 = r8d20;
            rax21 = 0x18000c000;
            if (!rax19) {
                rax21 = 0x18000c010;
            }
            g18000a348 = rax21;
            goto v22;
        }
    } else {
        cf23 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf23) {
            rax24 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rax24 = g180008530;
        }
        if (reinterpret_cast<unsigned char>(0x18000a340) < reinterpret_cast<unsigned char>(rax24)) 
            goto addr_18000290d_16; else 
            goto addr_1800028d5_24;
    }
    cf25 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(r8_15);
    if (!cf25) {
        if (r8_15) 
            goto addr_18000294e_27;
        g180008540 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(g180008540) & reinterpret_cast<unsigned char>(r8_15));
        cf26 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf26) {
            rax27 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rax27 = g180008530;
        }
        *reinterpret_cast<struct s0**>(&rax27->f0) = reinterpret_cast<struct s0*>(0);
    } else {
        r8_28 = g180008540;
        fun_1800025b0("invalid string position", r8_15, r8_28);
    }
    if (!r8_15) {
        addr_180002984_34:
    } else {
        addr_18000294e_27:
        cf29 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf29) {
            rcx30 = reinterpret_cast<struct s0*>("invalid string position");
            goto addr_18000295d_36;
        } else {
            rcx30 = g180008530;
            goto addr_18000295d_36;
        }
    }
    addr_180002987_38:
    goto v31;
    addr_18000295d_36:
    if (r8_15) {
        fun_180002d6c(rcx30, 0x18000a340, r8_15);
    }
    cf32 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
    g180008540 = r8_15;
    if (cf32) {
        rax33 = reinterpret_cast<struct s0*>("invalid string position");
    } else {
        rax33 = g180008530;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax33) + reinterpret_cast<unsigned char>(r8_15)) = 0;
    goto addr_180002984_34;
    addr_1800028d5_24:
    cf34 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
    if (!cf34) {
        rcx6 = g180008530;
    }
    tmp64_35 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rcx6) + reinterpret_cast<unsigned char>(g180008540));
    if (reinterpret_cast<unsigned char>(tmp64_35) <= reinterpret_cast<unsigned char>(0x18000a340)) 
        goto addr_18000290d_16;
    cf36 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
    if (cf36) {
        rax37 = reinterpret_cast<struct s0*>("invalid string position");
    } else {
        rax37 = g180008530;
    }
    fun_180002794("invalid string position", "invalid string position", reinterpret_cast<unsigned char>(0x18000a340) - reinterpret_cast<unsigned char>(rax37), r8_15);
    goto addr_180002987_38;
    addr_1800027f9_11:
    if (reinterpret_cast<unsigned char>(rdi7) <= reinterpret_cast<unsigned char>(0xfffffffffffffffe)) {
        cf38 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(rdi7);
        if (!cf38) {
            if (rdi7) 
                goto addr_180002837_52;
            g180008540 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(g180008540) & reinterpret_cast<unsigned char>(rdi7));
            cf39 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
            if (cf39) {
                rax40 = reinterpret_cast<struct s0*>("invalid string position");
            } else {
                rax40 = g180008530;
            }
            *reinterpret_cast<struct s0**>(&rax40->f0) = reinterpret_cast<struct s0*>(0);
        } else {
            r8_41 = g180008540;
            fun_1800025b0("invalid string position", rdi7, r8_41);
        }
        if (!rdi7) {
            addr_180002878_59:
            goto v42;
        } else {
            addr_180002837_52:
            cf43 = g18000a358 < 16;
            if (!cf43) {
                rsi8 = g18000a340;
            }
        }
        cf44 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf44) {
            rcx45 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rcx45 = g180008530;
        }
        if (rdi7) {
            fun_180002d6c(rcx45, reinterpret_cast<unsigned char>(rsi8) + reinterpret_cast<uint64_t>(r8_46), rdi7);
        }
        cf47 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        g180008540 = rdi7;
        if (cf47) {
            rax48 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rax48 = g180008530;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax48) + reinterpret_cast<unsigned char>(rdi7)) = 0;
        goto addr_180002878_59;
    }
    addr_1800027cd_12:
    rax49 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdi7) + reinterpret_cast<uint64_t>(r8_50));
    cf51 = reinterpret_cast<unsigned char>(g180008540) < reinterpret_cast<unsigned char>(rax49);
    if (!cf51) {
        cf52 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        g180008540 = rax49;
        if (!cf52) {
            rcx6 = g180008530;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx6) + reinterpret_cast<unsigned char>(rax49)) = 0;
        fun_180002a4c("invalid string position", 0, r8_53, r9_54);
        goto addr_180002878_59;
    }
}

int64_t memcpy = 0xb4e8;

struct s0* fun_180002d6c(struct s0* rcx, struct s0* rdx, struct s0* r8, ...) {
    goto memcpy;
}

struct s0* fun_1800026ac(struct s0* rcx, signed char dl, struct s0* r8) {
    struct s0* rdx2;
    struct s0* rsi4;
    struct s0* rax5;

    *reinterpret_cast<signed char*>(&rdx2) = dl;
    if (*reinterpret_cast<signed char*>(&rdx2) && reinterpret_cast<unsigned char>(rcx->f24) >= reinterpret_cast<unsigned char>(16)) {
        rsi4 = *reinterpret_cast<struct s0**>(&rcx->f0);
        if (r8) {
            rdx2 = rsi4;
            fun_180002d6c(rcx, rdx2, r8);
        }
        rax5 = fun_180001bcc(rsi4, rdx2, r8);
    }
    rcx->f24 = reinterpret_cast<struct s0*>(15);
    rcx->f16 = r8;
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(r8) + reinterpret_cast<unsigned char>(rcx)) = 0;
    return rax5;
}

struct s0* fun_1800025b0(struct s0* rcx, struct s0* rdx, struct s0* r8) {
    struct s0* rax4;
    struct s0* rsi5;
    struct s0* rbx6;
    struct s0* rdi7;
    struct s0* rcx8;
    int64_t* rcx9;
    struct s0* r14_10;
    struct s0* rcx11;

    rax4 = reinterpret_cast<struct s0*>(__zero_stack_offset());
    rsi5 = r8;
    rbx6 = rcx;
    rdi7 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdx) | 15);
    if (reinterpret_cast<unsigned char>(rdi7) <= reinterpret_cast<unsigned char>(0xfffffffffffffffe)) {
        r8 = rcx->f24;
        rcx8 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r8) >> 1);
        rax4 = reinterpret_cast<struct s0*>(0xaaaaaaaaaaaaaaab * reinterpret_cast<unsigned char>(rdi7));
        rdx = reinterpret_cast<struct s0*>(__intrinsic() >> 1);
        if (reinterpret_cast<unsigned char>(rcx8) > reinterpret_cast<unsigned char>(rdx) && (rax4 = reinterpret_cast<struct s0*>(-2 - reinterpret_cast<unsigned char>(rcx8)), rdi7 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rcx8) + reinterpret_cast<unsigned char>(r8)), reinterpret_cast<unsigned char>(r8) > reinterpret_cast<unsigned char>(rax4))) {
            rdi7 = reinterpret_cast<struct s0*>(0xfffffffffffffffe);
        }
    } else {
        rdi7 = rdx;
    }
    rcx9 = &rdi7->f1;
    *reinterpret_cast<int32_t*>(&r14_10) = 0;
    *reinterpret_cast<int32_t*>(&r14_10 + 4) = 0;
    if (rcx9 && (rax4 = fun_18000240c(rcx9), r14_10 = rax4, !rax4)) {
        rax4 = fun_180002704();
    }
    if (rsi5) {
        if (reinterpret_cast<unsigned char>(rbx6->f24) < reinterpret_cast<unsigned char>(16)) {
            rdx = rbx6;
        } else {
            rdx = *reinterpret_cast<struct s0**>(&rbx6->f0);
        }
        if (rsi5) {
            r8 = rsi5;
            rax4 = fun_180002d6c(r14_10, rdx, r8, r14_10, rdx, r8);
        }
    }
    if (reinterpret_cast<unsigned char>(rbx6->f24) >= reinterpret_cast<unsigned char>(16)) {
        rcx11 = *reinterpret_cast<struct s0**>(&rbx6->f0);
        rax4 = fun_180001bcc(rcx11, rdx, r8);
    }
    *reinterpret_cast<struct s0**>(&rbx6->f0) = reinterpret_cast<struct s0*>(0);
    *reinterpret_cast<struct s0**>(&rbx6->f0) = r14_10;
    rbx6->f24 = rdi7;
    rbx6->f16 = rsi5;
    if (reinterpret_cast<unsigned char>(rdi7) >= reinterpret_cast<unsigned char>(16)) {
        rbx6 = r14_10;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rbx6) + reinterpret_cast<unsigned char>(rsi5)) = 0;
    return rax4;
}

int64_t memmove = 0xb434;

void fun_180002d36() {
    goto memmove;
}

int64_t _errno = 0xb50a;

int32_t* fun_180002d72() {
    goto _errno;
}

int64_t RtlCaptureContext = 0xae02;

int64_t RtlLookupFunctionEntry = 0xae16;

int64_t RtlVirtualUnwind = 0xae30;

int64_t OutputDebugStringA = 0xb576;

uint32_t fun_180001bf0(uint64_t rcx, struct s0* rdx, struct s0* r8, ...);

uint32_t fun_180002d78() {
    void* rsp1;
    uint64_t rax2;
    void* rsp3;
    struct s0* rdx4;
    struct s0* r8_5;
    struct s0* v6;
    int64_t rax7;
    void* rsp8;
    struct s0* v9;
    int64_t r9_10;
    uint64_t rcx11;
    uint32_t eax12;

    rsp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 0x540);
    rax2 = g18000c0e8;
    RtlCaptureContext(reinterpret_cast<uint64_t>(rsp1) + 96);
    rsp3 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp1) - 8 + 8);
    rdx4 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp3) + 64);
    *reinterpret_cast<int32_t*>(&r8_5) = 0;
    *reinterpret_cast<int32_t*>(&r8_5 + 4) = 0;
    rax7 = reinterpret_cast<int64_t>(RtlLookupFunctionEntry(v6, rdx4));
    rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp3) - 8 + 8);
    if (rax7) {
        rdx4 = v9;
        r9_10 = rax7;
        r8_5 = v6;
        RtlVirtualUnwind();
        rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp8) - 8 + 8);
    }
    OutputDebugStringA("Invalid parameter passed to C runtime function.\n", rdx4, r8_5, r9_10);
    rcx11 = rax2 ^ reinterpret_cast<uint64_t>(rsp1) ^ reinterpret_cast<uint64_t>(rsp8) - 8 + 8;
    eax12 = fun_180001bf0(rcx11, rdx4, r8_5, rcx11, rdx4, r8_5);
    return eax12;
}

int64_t g18000c748;

int64_t g18000c740;

int64_t g18000c730;

void fun_1800015b0() {
    g18000c748 = 1;
    g18000c740 = 0;
    g18000c730 = 0;
    return;
}

int64_t EtwRegisterTraceGuidsW = 0xb390;

struct s7 {
    signed char[16] pad16;
    struct s7* f16;
    signed char[1] pad25;
    signed char f25;
    unsigned char f26;
    signed char[1] pad28;
    int32_t f28;
};

int64_t fun_180003760(int32_t ecx, struct s7* rdx, int32_t* r8, int64_t r9);

void fun_1800014c0() {
    struct s5* rbx1;
    int64_t* rdi2;
    int64_t r8_3;

    rbx1 = g18000c018;
    rdi2 = reinterpret_cast<int64_t*>(0x18000c728);
    if (rbx1) {
        do {
            r8_3 = *rdi2;
            ++rdi2;
            rbx1->f32 = r8_3;
            EtwRegisterTraceGuidsW(fun_180003760, rbx1);
            rbx1 = rbx1->f0;
        } while (rbx1);
    }
    return;
}

struct s8 {
    signed char[4] pad4;
    int32_t f4;
};

struct s10 {
    signed char[8] pad8;
    int32_t f8;
};

struct s11 {
    signed char[4] pad4;
    unsigned char f4;
};

struct s9 {
    signed char[8] pad8;
    int64_t f8;
    struct s10* f16;
    signed char[32] pad56;
    struct s11* f56;
};

int64_t __CxxFrameHandler3 = 0xacd0;

void fun_180001bd2(struct s8* rcx, uint64_t rdx, int64_t r8, struct s9* r9) {
    goto __CxxFrameHandler3;
}

int64_t _XcptFilter = 0xace6;

int32_t fun_180001c35(int64_t rcx, int32_t** rdx) {
    goto _XcptFilter;
}

struct s13 {
    int64_t f0;
    int64_t f8;
    struct s0* f16;
    signed char[3] pad20;
    struct s0* f20;
};

struct s12 {
    struct s0** f0;
    struct s0* f8;
    signed char[7] pad16;
    struct s0** f16;
    struct s0* f24;
    signed char[7] pad32;
    int64_t* f32;
    struct s0* f40;
    signed char[7] pad48;
    struct s13* f48;
    uint32_t f56;
    int32_t f60;
    int32_t f64;
    unsigned char f68;
    signed char[3] pad72;
    signed char f72;
    signed char f73;
    signed char f74;
    signed char f75;
};

int64_t RaiseException = 0xafa2;

int32_t gc0000094;

int32_t gc0000098;

struct s0** gc000008c;

uint128_t g0;

int64_t g180007af8 = 0x180002cd0;

struct s0** fun_1800037dc(struct s12* rcx, struct s0* edx, struct s0* r8, struct s0* r9, int64_t a5) {
    int32_t edi6;
    int64_t rax7;
    int64_t rax8;
    struct s0** rcx9;
    struct s0** r8_10;
    struct s0* rcx11;
    int64_t v12;
    int32_t edi13;
    struct s0** rcx14;
    struct s0** rax15;

    if (reinterpret_cast<signed char>(edx) >= reinterpret_cast<signed char>(0) && reinterpret_cast<signed char>(edx) < reinterpret_cast<signed char>(rcx->f8)) {
        return rcx->f0 + reinterpret_cast<int32_t>(edx) * 8;
    }
    RaiseException();
    edi6 = gc0000094;
    *reinterpret_cast<int32_t*>(&rax7) = gc0000098;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    if (edi6 == *reinterpret_cast<int32_t*>(&rax7)) 
        goto addr_180003835_5;
    addr_18000386e_6:
    rax8 = gc0000094;
    rcx9 = gc000008c;
    r8_10 = rcx9 + rax8 * 8;
    if (r8_10) {
        rcx11 = *reinterpret_cast<struct s0**>(reinterpret_cast<int64_t>(&g0) + 1);
        *r8_10 = rcx11;
    }
    ++gc0000094;
    addr_180003895_9:
    goto v12;
    addr_180003835_5:
    if (*reinterpret_cast<int32_t*>(&rax7)) {
        edi13 = edi6 + edi6;
        if (edi13 < 0) 
            goto addr_18000386a_11;
    } else {
        edi13 = static_cast<int32_t>(rax7 + 1);
    }
    if (reinterpret_cast<uint64_t>(static_cast<int64_t>(edi13)) > 0xfffffff || (rcx14 = gc000008c, rax15 = reinterpret_cast<struct s0**>(g180007af8(rcx14)), rax15 == 0)) {
        addr_18000386a_11:
        goto addr_180003895_9;
    } else {
        gc0000098 = edi13;
        gc000008c = rax15;
        goto addr_18000386e_6;
    }
}

uint64_t fun_180002ff0();

struct s14 {
    int64_t f0;
    signed char[24] pad32;
    struct s0* f32;
    signed char[7] pad40;
    void* f40;
    struct s0* f48;
    signed char[7] pad56;
    struct s0* f56;
    signed char[7] pad64;
    signed char f64;
    signed char[15] pad80;
    struct s0* f80;
    signed char[7] pad88;
    struct s0* f88;
    signed char[7] pad96;
    struct s0* f96;
    signed char[7] pad104;
    struct s0* f104;
    signed char[7] pad112;
    struct s0* f112;
    signed char[7] pad120;
    int64_t f120;
    signed char[4712] pad4840;
    int64_t f4840;
    int64_t f4848;
    int64_t f4856;
};

struct s15 {
    int64_t f0;
    int64_t f8;
};

void fun_1800047f4(struct s5* rcx, int16_t dx, struct s0* r8, struct s0* r9);

/* OLEAUT32.dll:6 */
int64_t OLEAUT32_dll_6 = 0x8000000000000006;

int64_t CertOpenStore = 0xaf54;

int64_t CertEnumCertificatesInStore = 0xaf64;

struct s16 {
    int64_t* f0;
    int32_t f8;
    int32_t f12;
};

int64_t GetLastError = 0xaf38;

void fun_18000481c(struct s5* rcx, int16_t dx, struct s0* r8, uint32_t r9d, ...);

struct s0* fun_180004a70(struct s0* rcx, int64_t rdx, struct s0* r8, struct s0* r9);

void fun_1800039b0(struct s0* rcx, int16_t* rdx, int32_t r8d, struct s0* r9);

uint32_t fun_180003c74(struct s12* rcx, struct s0* rdx, struct s0* r8, struct s0* r9);

uint32_t fun_180003e40(struct s12* rcx, struct s0* rdx, struct s0* r8, struct s0* r9);

uint32_t fun_1800056f4(struct s0* rcx, struct s0* rdx, struct s0* r8, struct s0* r9);

struct s17 {
    struct s0** f0;
    int32_t f8;
    int32_t f12;
};

int64_t fun_180003810(struct s17* rcx, struct s0** rdx, struct s0* r8, ...);

int64_t CertCloseStore = 0xaf90;

int64_t CertFreeCertificateContext = 0xaed4;

int64_t LoadStringW = 0xaf82;

int64_t fun_180004108(struct s12* rcx, struct s0* rdx, struct s0* r8, struct s0* r9) {
    void* rsp5;
    void* rbp6;
    uint64_t rax7;
    struct s14* rsp8;
    int64_t rbx9;
    int64_t rsi10;
    int64_t rdi11;
    uint64_t rax12;
    uint64_t v13;
    struct s12* rsi14;
    struct s0* r12_15;
    struct s13* rax16;
    int64_t rcx17;
    struct s5* rcx18;
    struct s5* rcx19;
    struct s15* rsp20;
    struct s0* rcx21;
    struct s15* rsp22;
    struct s15* rsp23;
    struct s14* rsp24;
    uint64_t rcx25;
    struct s15* rsp26;
    struct s0* ebx27;
    struct s0* ecx28;
    struct s15* rsp29;
    int64_t rax30;
    struct s14* rsp31;
    int64_t r13_32;
    struct s15* rsp33;
    int64_t rax34;
    struct s14* rsp35;
    int64_t r15_36;
    struct s16* rbx37;
    int64_t rax38;
    int32_t edi39;
    int64_t* rcx40;
    struct s15* rsp41;
    int64_t* rax42;
    struct s15* rsp43;
    int64_t rax44;
    int64_t rax45;
    int64_t* rdx46;
    struct s0* eax47;
    struct s15* rsp48;
    uint32_t eax49;
    uint32_t ebx50;
    struct s5* rcx51;
    struct s5* rcx52;
    struct s15* rsp53;
    struct s0* r14d54;
    struct s15* rsp55;
    struct s0* rax56;
    struct s0* rbx57;
    struct s15* rsp58;
    struct s0* rax59;
    struct s15* rsp60;
    struct s0** rax61;
    int16_t* rdx62;
    struct s0* rcx63;
    struct s15* rsp64;
    struct s14* rsp65;
    struct s0* rcx66;
    struct s15* rsp67;
    struct s14* rsp68;
    struct s12* rcx69;
    struct s15* rsp70;
    struct s0** rax71;
    struct s14* rsp72;
    struct s0* rdx73;
    struct s15* rsp74;
    uint32_t eax75;
    struct s0* rcx76;
    struct s15* rsp77;
    struct s14* rsp78;
    struct s12* rcx79;
    struct s15* rsp80;
    struct s0** rax81;
    struct s14* rsp82;
    struct s0* rdx83;
    struct s15* rsp84;
    uint32_t eax85;
    struct s0* eax86;
    struct s0* rdx87;
    struct s15* rsp88;
    struct s0** rax89;
    struct s14* rsp90;
    struct s15* rsp91;
    uint32_t eax92;
    struct s14* rsp93;
    struct s5* rcx94;
    struct s5* rcx95;
    struct s15* rsp96;
    struct s15* rsp97;
    struct s17* rcx98;
    struct s0** rdx99;
    struct s15* rsp100;
    struct s5* rcx101;
    struct s5* rcx102;
    struct s15* rsp103;
    struct s5* rcx104;
    struct s5* rcx105;
    struct s15* rsp106;
    struct s15* rsp107;
    struct s15* rsp108;
    struct s5* rcx109;
    struct s5* rcx110;
    struct s15* rsp111;
    struct s15* rsp112;
    struct s0* rax113;
    struct s0* r14_114;
    struct s15* rsp115;
    struct s0* rax116;
    void** rcx117;
    struct s15* rsp118;
    void** rcx119;
    struct s15* rsp120;
    struct s0* rdx121;
    void** rcx122;
    struct s15* rsp123;
    struct s14* rsp124;
    struct s15* rsp125;
    uint32_t eax126;
    struct s14* rsp127;
    struct s5* rcx128;
    struct s5* rcx129;
    struct s15* rsp130;
    struct s15* rsp131;
    struct s15* rsp132;
    struct s5* rcx133;
    int32_t edx134;
    struct s5* rcx135;
    struct s15* rsp136;
    struct s5* rcx137;
    struct s5* rcx138;
    struct s15* rsp139;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8);
    rbp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 0x11b0);
    rax7 = fun_180002ff0();
    rsp8 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - rax7);
    rsp8->f4840 = rbx9;
    rsp8->f4848 = rsi10;
    rsp8->f4856 = rdi11;
    rax12 = g18000c0e8;
    v13 = rax12 ^ reinterpret_cast<uint64_t>(rsp8);
    rsi14 = rcx;
    *reinterpret_cast<struct s0**>(&rsp8->f112) = reinterpret_cast<struct s0*>(0);
    rsp8->f120 = 0;
    *reinterpret_cast<struct s0**>(&rsp8->f96) = reinterpret_cast<struct s0*>(0);
    r12_15 = reinterpret_cast<struct s0*>(0);
    *reinterpret_cast<int32_t*>(&r12_15 + 4) = 0;
    *reinterpret_cast<struct s0**>(&rsp8->f88) = reinterpret_cast<struct s0*>(0);
    rax16 = rcx->f48;
    if (rax16) {
        if (rcx->f56 >= 24) {
            rcx17 = rax16->f0 - 0x410c0ed2ab9b9648;
            if (!rcx17) {
                rcx17 = rax16->f8 - 0x6cb61247e762f6a3;
            }
            if (!rcx17) 
                goto addr_18000422c_7; else 
                goto addr_1800041f3_8;
        } else {
            rcx18 = g18000c018;
            if (rcx18 != 0x18000c018 && rcx18->f28 & 1) {
                *reinterpret_cast<int32_t*>(&rdx) = 11;
                *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                rcx19 = rcx18->f16;
                rsp20 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp8) - 8);
                rsp20->f0 = 0x1800041bc;
                fun_1800047f4(rcx19, 11, r8, r9);
                rsp8 = reinterpret_cast<struct s14*>(&rsp20->f8);
            }
        }
    }
    addr_180004739_11:
    rcx21 = *reinterpret_cast<struct s0**>(&rsp8->f96);
    rsp22 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp8) - 8);
    rsp22->f0 = 0x180004744;
    OLEAUT32_dll_6(rcx21, rdx, r8, r9);
    rsp23 = reinterpret_cast<struct s15*>(&rsp22->f8 - 1);
    rsp23->f0 = 0x18000474d;
    OLEAUT32_dll_6(r12_15, rdx, r8, r9);
    rsp24 = reinterpret_cast<struct s14*>(&rsp23->f8);
    rcx25 = v13 ^ reinterpret_cast<uint64_t>(rsp24);
    rsp26 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp24) - 8);
    rsp26->f0 = 0x18000475e;
    fun_180001bf0(rcx25, rdx, r8, rcx25, rdx, r8);
    goto (&rsp26->f8 + 0x256 + 1 + 1 + 1 + 1)[1];
    addr_18000422c_7:
    ebx27 = rax16->f16;
    rsp8->f80 = ebx27;
    ecx28 = rax16->f20;
    rsp8->f120 = reinterpret_cast<int64_t>(rax16) + 24;
    *reinterpret_cast<struct s0**>(&rsp8->f112) = ecx28;
    rsp8->f32 = reinterpret_cast<struct s0*>(&rsp8->f112);
    *reinterpret_cast<uint32_t*>(&r9) = 0x200;
    *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8) = 0;
    *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdx) = 0;
    *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
    rsp29 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp8) - 8);
    rsp29->f0 = 0x180004261;
    rax30 = reinterpret_cast<int64_t>(CertOpenStore(6));
    rsp31 = reinterpret_cast<struct s14*>(&rsp29->f8);
    r13_32 = rax30;
    if (rax30) {
        rsp33 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp31) - 8);
        rsp33->f0 = 0x1800042c7;
        rax34 = reinterpret_cast<int64_t>(CertEnumCertificatesInStore(r13_32));
        rsp35 = reinterpret_cast<struct s14*>(&rsp33->f8);
        r15_36 = rax34;
        if (rax34) {
            rbx37 = reinterpret_cast<struct s16*>(&rsi14->f32);
            while (1) {
                *reinterpret_cast<int32_t*>(&rax38) = rbx37->f12;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = 0;
                if (rbx37->f8 == *reinterpret_cast<int32_t*>(&rax38)) {
                    if (*reinterpret_cast<int32_t*>(&rax38)) {
                        edi39 = rbx37->f8 + rbx37->f8;
                        if (edi39 < 0) 
                            goto addr_180004339_17;
                    } else {
                        edi39 = static_cast<int32_t>(rax38 + 1);
                    }
                    if (reinterpret_cast<uint64_t>(static_cast<int64_t>(edi39)) > 0xfffffff || (*reinterpret_cast<int32_t*>(&r8) = 8, *reinterpret_cast<int32_t*>(&r8 + 4) = 0, rcx40 = rbx37->f0, rsp41 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp35) - 8), rsp41->f0 = 0x18000430d, rax42 = reinterpret_cast<int64_t*>(g180007af8(rcx40)), rsp35 = reinterpret_cast<struct s14*>(&rsp41->f8), rax42 == 0)) {
                        addr_180004339_17:
                        rsp43 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp35) - 8);
                        rsp43->f0 = 0x180004345;
                        rax44 = reinterpret_cast<int64_t>(CertEnumCertificatesInStore(r13_32, r15_36, r8, 0x200));
                        rsp35 = reinterpret_cast<struct s14*>(&rsp43->f8);
                        r15_36 = rax44;
                        if (rax44) 
                            continue; else 
                            break;
                    } else {
                        rbx37->f12 = edi39;
                        rbx37->f0 = rax42;
                    }
                }
                rax45 = rbx37->f8;
                rsp35->f104 = *reinterpret_cast<struct s0**>(&rax45);
                rdx46 = rbx37->f0 + rax45;
                if (rdx46) {
                    *rdx46 = r15_36;
                }
                rbx37->f8 = rbx37->f8 + 1;
                goto addr_180004339_17;
            }
            ebx27 = rsp35->f80;
        }
        eax47 = rsi14->f40;
        if (eax47) 
            goto addr_1800044e0_26;
        if (rsi14->f75 != *reinterpret_cast<signed char*>(&eax47)) 
            goto addr_180004367_28;
    } else {
        rsp48 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp31) - 8);
        rsp48->f0 = 0x18000426f;
        eax49 = reinterpret_cast<uint32_t>(GetLastError(6));
        rsp8 = reinterpret_cast<struct s14*>(&rsp48->f8);
        ebx50 = eax49;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax49) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax49 == 0))) {
            ebx50 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax49)) | 0x80070000;
        }
        rcx51 = g18000c018;
        if (rcx51 != 0x18000c018 && rcx51->f28 & 1) {
            *reinterpret_cast<int32_t*>(&rdx) = 13;
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            *reinterpret_cast<uint32_t*>(&r9) = ebx50;
            *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
            r8 = reinterpret_cast<struct s0*>(0x1800091d8);
            rcx52 = rcx51->f16;
            rsp53 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp8) - 8);
            rsp53->f0 = 0x1800042b7;
            fun_18000481c(rcx52, 13, 0x1800091d8, *reinterpret_cast<uint32_t*>(&r9));
            rsp8 = reinterpret_cast<struct s14*>(&rsp53->f8);
            goto addr_180004739_11;
        }
    }
    addr_1800044e0_26:
    r14d54 = reinterpret_cast<struct s0*>(0);
    if (!eax47) {
        addr_180004717_33:
    } else {
        do {
            rsp55 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp35) - 8);
            rsp55->f0 = 0x180004503;
            rax56 = fun_180001c10(0x118, 0x180008390, r8, r9);
            rsp35 = reinterpret_cast<struct s14*>(&rsp55->f8);
            if (!rax56) {
                rbx57 = rax56;
            } else {
                rsp58 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp35) - 8);
                rsp58->f0 = 0x180004514;
                rax59 = fun_180004a70(rax56, 0x180008390, r8, r9);
                rsp35 = reinterpret_cast<struct s14*>(&rsp58->f8);
                rbx57 = rax59;
            }
            rsp35->f104 = rbx57;
            if (!rbx57) 
                goto addr_1800046f0_39;
            rsp60 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp35) - 8);
            rsp60->f0 = 0x18000453c;
            rax61 = fun_1800037dc(&rsi14->f32, r14d54, r8, r9, rsp60->f8);
            rdx62 = reinterpret_cast<int16_t*>(reinterpret_cast<int64_t>(rbp6) - 96);
            rcx63 = *rax61;
            rsp64 = reinterpret_cast<struct s15*>(&rsp60->f8 - 1);
            rsp64->f0 = 0x180004548;
            fun_1800039b0(rcx63, rdx62, *reinterpret_cast<int32_t*>(&r8), r9);
            rsp65 = reinterpret_cast<struct s14*>(&rsp64->f8);
            rcx66 = *reinterpret_cast<struct s0**>(&rsp65->f96);
            rsp67 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp65) - 8);
            rsp67->f0 = 0x180004553;
            OLEAUT32_dll_6(rcx66, rdx62, r8, r9);
            rsp68 = reinterpret_cast<struct s14*>(&rsp67->f8);
            *reinterpret_cast<struct s0**>(&rsp68->f96) = reinterpret_cast<struct s0*>(0);
            rcx69 = reinterpret_cast<struct s12*>(&rsi14->f32);
            rsp70 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp68) - 8);
            rsp70->f0 = 0x180004568;
            rax71 = fun_1800037dc(rcx69, r14d54, r8, r9, rsp70->f8);
            rsp72 = reinterpret_cast<struct s14*>(&rsp70->f8);
            r8 = reinterpret_cast<struct s0*>(&rsp72->f96);
            rdx73 = *rax71;
            rsp74 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp72) - 8);
            rsp74->f0 = 0x180004575;
            eax75 = fun_180003c74(rcx69, rdx73, r8, r9);
            rsp35 = reinterpret_cast<struct s14*>(&rsp74->f8);
            *reinterpret_cast<struct s0**>(&rsp35->f96) = *reinterpret_cast<struct s0**>(&rsp35->f96);
            if (!eax75) {
                rcx76 = *reinterpret_cast<struct s0**>(&rsp35->f88);
                rsp77 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp35) - 8);
                rsp77->f0 = 0x1800045c5;
                OLEAUT32_dll_6(rcx76, rdx73, r8, r9);
                rsp78 = reinterpret_cast<struct s14*>(&rsp77->f8);
                *reinterpret_cast<struct s0**>(&rsp78->f88) = reinterpret_cast<struct s0*>(0);
                rcx79 = reinterpret_cast<struct s12*>(&rsi14->f32);
                rsp80 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp78) - 8);
                rsp80->f0 = 0x1800045da;
                rax81 = fun_1800037dc(rcx79, r14d54, r8, r9, rsp80->f8);
                rsp82 = reinterpret_cast<struct s14*>(&rsp80->f8);
                r8 = reinterpret_cast<struct s0*>(&rsp82->f88);
                rdx83 = *rax81;
                rsp84 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp82) - 8);
                rsp84->f0 = 0x1800045e7;
                eax85 = fun_180003e40(rcx79, rdx83, r8, r9);
                rsp35 = reinterpret_cast<struct s14*>(&rsp84->f8);
                if (!eax85) {
                    eax86 = reinterpret_cast<struct s0*>(0);
                    if (!(rsi14->f68 & 0x1000)) {
                        eax86 = rsp35->f80;
                    }
                    rsp35->f80 = eax86;
                    rdx87 = r14d54;
                    *reinterpret_cast<int32_t*>(&rdx87 + 4) = 0;
                    rsp88 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp35) - 8);
                    rsp88->f0 = 0x180004645;
                    rax89 = fun_1800037dc(&rsi14->f32, rdx87, r8, r9, rsp88->f8);
                    rsp90 = reinterpret_cast<struct s14*>(&rsp88->f8);
                    rsp90->f64 = 0;
                    r12_15 = *reinterpret_cast<struct s0**>(&rsp90->f88);
                    *reinterpret_cast<struct s0**>(&rsp90->f88) = r12_15;
                    rsp90->f56 = r12_15;
                    rsp90->f48 = *reinterpret_cast<struct s0**>(&rsp90->f96);
                    rsp90->f40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp6) - 96);
                    rsp90->f32 = rsp90->f80;
                    r9 = *rax89;
                    rsp91 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp90) - 8);
                    rsp91->f0 = 0x18000467f;
                    eax92 = fun_1800056f4(rbx57, rdx87, r8, r9);
                    rsp93 = reinterpret_cast<struct s14*>(&rsp91->f8);
                    if (reinterpret_cast<int32_t>(eax92) < reinterpret_cast<int32_t>(0)) {
                        rcx94 = g18000c018;
                        if (rcx94 != 0x18000c018 && rcx94->f28 & 1) {
                            rdx87 = reinterpret_cast<struct s0*>(19);
                            *reinterpret_cast<int32_t*>(&rdx87 + 4) = 0;
                            *reinterpret_cast<uint32_t*>(&r9) = eax92;
                            *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                            r8 = reinterpret_cast<struct s0*>(0x1800091d8);
                            rcx95 = rcx94->f16;
                            rsp96 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp93) - 8);
                            rsp96->f0 = 0x1800046c0;
                            fun_18000481c(rcx95, 19, 0x1800091d8, *reinterpret_cast<uint32_t*>(&r9));
                            rsp93 = reinterpret_cast<struct s14*>(&rsp96->f8);
                        }
                        rsp97 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp93) - 8);
                        rsp97->f0 = 0x1800046d0;
                        g180008160(rbx57, rdx87, r8, r9);
                        rsp35 = reinterpret_cast<struct s14*>(&rsp97->f8);
                        rsp35->f80 = rsp35->f80;
                    } else {
                        rcx98 = reinterpret_cast<struct s17*>(&rsi14->f16);
                        rdx99 = &rsp93->f104;
                        rsp100 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp93) - 8);
                        rsp100->f0 = 0x180004691;
                        fun_180003810(rcx98, rdx99, r8, rcx98, rdx99, r8);
                        rsp35 = reinterpret_cast<struct s14*>(&rsp100->f8);
                        rsi14->f60 = rsi14->f60 + 1;
                    }
                } else {
                    rcx101 = g18000c018;
                    if (rcx101 != 0x18000c018 && rcx101->f28 & 1) {
                        *reinterpret_cast<uint32_t*>(&r9) = eax85;
                        *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                        r8 = reinterpret_cast<struct s0*>(0x1800091d8);
                        rcx102 = rcx101->f16;
                        rsp103 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp35) - 8);
                        rsp103->f0 = 0x180004615;
                        fun_18000481c(rcx102, 18, 0x1800091d8, *reinterpret_cast<uint32_t*>(&r9));
                        rsp35 = reinterpret_cast<struct s14*>(&rsp103->f8);
                    }
                    r12_15 = *reinterpret_cast<struct s0**>(&rsp35->f88);
                    *reinterpret_cast<struct s0**>(&rsp35->f88) = r12_15;
                }
            } else {
                rcx104 = g18000c018;
                if (rcx104 != 0x18000c018 && rcx104->f28 & 1) {
                    *reinterpret_cast<uint32_t*>(&r9) = eax75;
                    *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                    r8 = reinterpret_cast<struct s0*>(0x1800091d8);
                    rcx105 = rcx104->f16;
                    rsp106 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp35) - 8);
                    rsp106->f0 = 0x1800045b5;
                    fun_18000481c(rcx105, 17, 0x1800091d8, *reinterpret_cast<uint32_t*>(&r9));
                    rsp35 = reinterpret_cast<struct s14*>(&rsp106->f8);
                }
                r12_15 = *reinterpret_cast<struct s0**>(&rsp35->f88);
            }
            r14d54 = reinterpret_cast<struct s0*>(&r14d54->f1);
        } while (reinterpret_cast<unsigned char>(r14d54) < reinterpret_cast<unsigned char>(rsi14->f40));
        goto addr_1800046ec_56;
    }
    addr_180004719_57:
    *reinterpret_cast<int32_t*>(&rdx) = 0;
    *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
    rsp107 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp35) - 8);
    rsp107->f0 = 0x180004724;
    CertCloseStore(r13_32);
    rsp8 = reinterpret_cast<struct s14*>(&rsp107->f8);
    if (r15_36) {
        rsp108 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp8) - 8);
        rsp108->f0 = 0x180004732;
        CertFreeCertificateContext(r15_36);
        rsp8 = reinterpret_cast<struct s14*>(&rsp108->f8);
        goto addr_180004739_11;
    }
    addr_1800046f0_39:
    rcx109 = g18000c018;
    if (rcx109 != 0x18000c018 && rcx109->f28 & 1) {
        rcx110 = rcx109->f16;
        rsp111 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp35) - 8);
        rsp111->f0 = 0x180004715;
        fun_1800047f4(rcx110, 16, r8, r9);
        rsp35 = reinterpret_cast<struct s14*>(&rsp111->f8);
        goto addr_180004719_57;
    }
    addr_1800046ec_56:
    goto addr_180004717_33;
    addr_180004367_28:
    rsp112 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp35) - 8);
    rsp112->f0 = 0x180004378;
    rax113 = fun_180001c10(0x118, 0x180008390, r8, 0x200);
    rsp35 = reinterpret_cast<struct s14*>(&rsp112->f8);
    if (!rax113) {
        r14_114 = reinterpret_cast<struct s0*>(0);
    } else {
        rsp115 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp35) - 8);
        rsp115->f0 = 0x180004389;
        rax116 = fun_180004a70(rax113, 0x180008390, r8, 0x200);
        rsp35 = reinterpret_cast<struct s14*>(&rsp115->f8);
        r14_114 = rax116;
    }
    rsp35->f104 = r14_114;
    if (!r14_114) 
        goto addr_18000439b_63;
    rcx117 = g18000c720;
    rsp118 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp35) - 8);
    rsp118->f0 = 0x1800043f3;
    LoadStringW(rcx117, 0x195, reinterpret_cast<int64_t>(rbp6) - 96, 0x300);
    rcx119 = g18000c720;
    rsp120 = reinterpret_cast<struct s15*>(&rsp118->f8 - 1);
    rsp120->f0 = 0x180004419;
    LoadStringW(rcx119, 0x196, reinterpret_cast<int64_t>(rbp6) + 0xba0, 0x300);
    r8 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbp6) + 0x5a0);
    *reinterpret_cast<int32_t*>(&rdx121) = 0x197;
    *reinterpret_cast<int32_t*>(&rdx121 + 4) = 0;
    rcx122 = g18000c720;
    rsp123 = reinterpret_cast<struct s15*>(&rsp120->f8 - 1);
    rsp123->f0 = 0x18000443f;
    LoadStringW(rcx122, 0x197, r8, 0x300);
    rsp124 = reinterpret_cast<struct s14*>(&rsp123->f8);
    if (rsi14->f68 & 0x1000) {
        ebx27 = reinterpret_cast<struct s0*>(0);
    }
    rsp124->f64 = 1;
    rsp124->f56 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbp6) + 0x5a0);
    rsp124->f48 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbp6) + 0xba0);
    rsp124->f40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp6) - 96);
    rsp124->f32 = ebx27;
    *reinterpret_cast<uint32_t*>(&r9) = 0;
    *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
    rsp125 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp124) - 8);
    rsp125->f0 = 0x18000447e;
    eax126 = fun_1800056f4(r14_114, 0x197, r8, 0);
    rsp127 = reinterpret_cast<struct s14*>(&rsp125->f8);
    if (reinterpret_cast<int32_t>(eax126) >= reinterpret_cast<int32_t>(0)) 
        goto addr_180004484_67;
    rcx128 = g18000c018;
    if (rcx128 != 0x18000c018 && rcx128->f28 & 1) {
        *reinterpret_cast<int32_t*>(&rdx121) = 15;
        *reinterpret_cast<int32_t*>(&rdx121 + 4) = 0;
        *reinterpret_cast<uint32_t*>(&r9) = eax126;
        *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
        r8 = reinterpret_cast<struct s0*>(0x1800091d8);
        rcx129 = rcx128->f16;
        rsp130 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp127) - 8);
        rsp130->f0 = 0x1800044cb;
        fun_18000481c(rcx129, 15, 0x1800091d8, *reinterpret_cast<uint32_t*>(&r9));
        rsp127 = reinterpret_cast<struct s14*>(&rsp130->f8);
    }
    rsp131 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp127) - 8);
    rsp131->f0 = 0x1800044db;
    g180008160(r14_114, rdx121, r8, r9);
    rsp35 = reinterpret_cast<struct s14*>(&rsp131->f8);
    goto addr_180004719_57;
    addr_180004484_67:
    rsp132 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp127) - 8);
    rsp132->f0 = 0x180004492;
    fun_180003810(&rsi14->f16, &rsp127->f104, r8);
    rsp35 = reinterpret_cast<struct s14*>(&rsp132->f8);
    rsi14->f60 = rsi14->f60 + 1;
    goto addr_180004717_33;
    addr_18000439b_63:
    rcx133 = g18000c018;
    if (rcx133 != 0x18000c018 && rcx133->f28 & 1) {
        edx134 = static_cast<int32_t>(reinterpret_cast<unsigned char>(r14_114) + 14);
        rcx135 = rcx133->f16;
        rsp136 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp35) - 8);
        rsp136->f0 = 0x1800043ce;
        fun_1800047f4(rcx135, *reinterpret_cast<int16_t*>(&edx134), r8, 0x200);
        rsp35 = reinterpret_cast<struct s14*>(&rsp136->f8);
        goto addr_180004719_57;
    }
    addr_1800041f3_8:
    rcx137 = g18000c018;
    if (rcx137 != 0x18000c018 && rcx137->f28 & 1) {
        *reinterpret_cast<int32_t*>(&rdx) = 12;
        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
        rcx138 = rcx137->f16;
        rsp139 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(rsp8) - 8);
        rsp139->f0 = 0x180004227;
        fun_1800047f4(rcx138, 12, r8, r9);
        rsp8 = reinterpret_cast<struct s14*>(&rsp139->f8);
        goto addr_180004739_11;
    }
}

struct s18 {
    int32_t f0;
    int32_t f4;
    int64_t f8;
};

struct s19 {
    int32_t f0;
    int32_t f4;
    struct s19* f8;
};

int64_t g18000e010 = 0x180002080;

int64_t g18000e020 = 0x18000211d;

int64_t g18000e000 = 0x180002105;

int64_t fun_180004858(struct s18* rcx, struct s19** rdx) {
    struct s19** rsi3;
    struct s19* rax4;
    int32_t edi5;
    int32_t eax6;
    int64_t rax7;

    rsi3 = rdx;
    rax4 = reinterpret_cast<struct s19*>(g18000e010(32));
    if (!rax4) {
        edi5 = 0x8007000e;
        goto addr_1800048bd_3;
    }
    rax4->f0 = rcx->f0;
    rax4->f4 = rcx->f4;
    if (!rcx->f8) {
        rax4->f8 = reinterpret_cast<struct s19*>(0);
        edi5 = 0;
    } else {
        rdx = &rax4->f8;
        eax6 = reinterpret_cast<int32_t>(g18000e020());
        edi5 = eax6;
        if (eax6 < 0) {
            addr_1800048bd_3:
            g18000e000(rax4, rdx);
            *rsi3 = reinterpret_cast<struct s19*>(0);
            goto addr_1800048cd_7;
        }
    }
    *rsi3 = rax4;
    addr_1800048cd_7:
    *reinterpret_cast<int32_t*>(&rax7) = edi5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    return rax7;
}

int64_t TraceMessage = 0xaea6;

void fun_1800047f4(struct s5* rcx, int16_t dx, struct s0* r8, struct s0* r9) {
    TraceMessage();
    return;
}

int64_t fun_180003c24(struct s0* rcx, struct s0* rdx) {
    int32_t r8d3;
    int64_t rax4;
    void* r10_5;
    void* r9_6;
    uint32_t r9d7;
    int64_t rax8;

    r8d3 = 0;
    if (!rdx) 
        goto addr_180003c62_2;
    *reinterpret_cast<int32_t*>(&rax4) = 0x7ffffffe;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    r10_5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r9_6) - reinterpret_cast<unsigned char>(rcx));
    do {
        if (!rax4) 
            break;
        r9d7 = *reinterpret_cast<uint16_t*>(reinterpret_cast<uint64_t>(r10_5) + reinterpret_cast<unsigned char>(rcx));
        if (!*reinterpret_cast<struct s0**>(&r9d7)) 
            break;
        *reinterpret_cast<struct s0**>(&rcx->f0) = *reinterpret_cast<struct s0**>(&r9d7);
        --rax4;
        rcx = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rcx) + 2);
        rdx = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdx) - 1);
    } while (rdx);
    goto addr_180003c5b_7;
    if (rdx) {
        addr_180003c6c_9:
        *reinterpret_cast<struct s0**>(&rcx->f0) = reinterpret_cast<struct s0*>(0);
        *reinterpret_cast<int32_t*>(&rax8) = r8d3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        return rax8;
    } else {
        addr_180003c62_2:
        rcx = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rcx) - 2);
        r8d3 = 0x8007007a;
        goto addr_180003c6c_9;
    }
    addr_180003c5b_7:
    goto addr_180003c62_2;
}

int64_t CertGetNameStringW = 0xaf22;

/* OLEAUT32.dll:4 */
int64_t OLEAUT32_dll_4 = 0x8000000000000004;

int32_t fun_180003be4(struct s0* rcx, struct s0* rdx, struct s0* r8, struct s0* r9);

int64_t fun_180003b74(struct s0* rcx, struct s0* rdx, struct s0* r8, struct s0* r9);

uint32_t fun_180003c74(struct s12* rcx, struct s0* rdx, struct s0* r8, struct s0* r9) {
    void* rsp5;
    uint64_t rax6;
    uint64_t v7;
    struct s0* r14_8;
    struct s0* rdi9;
    void** rcx10;
    int32_t eax11;
    void* rsp12;
    uint64_t rcx13;
    uint64_t rax14;
    int16_t* rdx15;
    struct s0* rsi16;
    struct s0* rax17;
    uint32_t eax18;
    uint32_t ebx19;
    struct s5* rcx20;
    struct s5* rcx21;
    uint64_t rcx22;
    uint32_t eax23;
    int32_t eax24;
    int64_t rax25;
    struct s5* rcx26;
    struct s5* rcx27;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 0xc40);
    rax6 = g18000c0e8;
    v7 = rax6 ^ reinterpret_cast<uint64_t>(rsp5);
    r14_8 = r8;
    *reinterpret_cast<int32_t*>(&rdi9) = 0;
    *reinterpret_cast<int32_t*>(&rdi9 + 4) = 0;
    if (!(!rdx || !r14_8)) {
        rcx10 = g18000c720;
        *reinterpret_cast<struct s0**>(&r8->f0) = reinterpret_cast<struct s0*>(0);
        LoadStringW(rcx10, 0x190, reinterpret_cast<uint64_t>(rsp5) + 0x630, 0x300);
        *reinterpret_cast<uint32_t*>(&r9) = 0;
        *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx) = 4;
        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
        *reinterpret_cast<int32_t*>(&r8) = 1;
        *reinterpret_cast<int32_t*>(&r8 + 4) = 0;
        eax11 = reinterpret_cast<int32_t>(CertGetNameStringW());
        rsp12 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8 - 8 + 8);
        if (eax11) {
            rcx13 = 0xffffffffffffffff;
            rax14 = 0xffffffffffffffff;
            rdx15 = reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsp12) + 0x630);
            do {
                ++rax14;
            } while (rdx15[rax14]);
            do {
                ++rcx13;
            } while (0);
            rsi16 = reinterpret_cast<struct s0*>((rax14 + rcx13) * 2 + 2);
            *reinterpret_cast<int32_t*>(&rdx) = *reinterpret_cast<int32_t*>(&rsi16);
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            rax17 = reinterpret_cast<struct s0*>(OLEAUT32_dll_4());
            rsp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp12) - 8 + 8);
            rdi9 = rax17;
            if (rax17) 
                goto addr_180003dd0_9; else 
                goto addr_180003da4_10;
        } else {
            eax18 = reinterpret_cast<uint32_t>(GetLastError());
            rsp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp12) - 8 + 8);
            ebx19 = eax18;
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax18) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax18 == 0))) {
                ebx19 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax18)) | 0x80070000;
            }
            rcx20 = g18000c018;
            if (rcx20 != 0x18000c018 && rcx20->f28 & 1) {
                rcx21 = rcx20->f16;
                r8 = reinterpret_cast<struct s0*>(0x1800091d8);
                *reinterpret_cast<int32_t*>(&rdx) = 20;
                *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                *reinterpret_cast<uint32_t*>(&r9) = ebx19;
                *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
                fun_18000481c(rcx21, 20, 0x1800091d8, *reinterpret_cast<uint32_t*>(&r9), rcx21, 20, 0x1800091d8, *reinterpret_cast<uint32_t*>(&r9));
                rsp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
            }
        }
    }
    addr_180003e0f_15:
    OLEAUT32_dll_6(rdi9, rdx, r8, r9);
    rcx22 = v7 ^ reinterpret_cast<uint64_t>(rsp5) - 8 + 8;
    eax23 = fun_180001bf0(rcx22, rdx, r8, rcx22, rdx, r8);
    return eax23;
    addr_180003dd0_9:
    r8 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp5) + 0x630);
    rdx = rsi16;
    eax24 = fun_180003be4(rdi9, rdx, r8, 0);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
    if (!eax24 && (r8 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp5) + 48), rdx = rsi16, rax25 = fun_180003b74(rdi9, rdx, r8, 0), rsp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8), !*reinterpret_cast<int32_t*>(&rax25))) {
        *reinterpret_cast<struct s0**>(&r14_8->f0) = rdi9;
        rdi9 = reinterpret_cast<struct s0*>(0);
    }
    addr_180003e07_17:
    goto addr_180003e0f_15;
    addr_180003da4_10:
    rcx26 = g18000c018;
    if (rcx26 != 0x18000c018 && rcx26->f28 & 1) {
        rcx27 = rcx26->f16;
        *reinterpret_cast<int32_t*>(&rdx) = static_cast<int32_t>(reinterpret_cast<unsigned char>(rdi9) + 21);
        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
        fun_1800047f4(rcx27, *reinterpret_cast<int16_t*>(&rdx), 1, 0);
        rsp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
        goto addr_180003e07_17;
    }
}

void fun_18000481c(struct s5* rcx, int16_t dx, struct s0* r8, uint32_t r9d, ...) {
    TraceMessage();
    return;
}

int64_t fun_180003b74(struct s0* rcx, struct s0* rdx, struct s0* r8, struct s0* r9) {
    void* r9_5;
    int32_t r10d6;
    struct s0* r11_7;
    int64_t rax8;
    struct s0* rax9;
    int1_t zf10;

    *reinterpret_cast<int32_t*>(&r9_5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_5) + 4) = 0;
    r10d6 = 0;
    r11_7 = rcx;
    if (reinterpret_cast<unsigned char>(rdx) + 0xffffffffffffffff > 0x7ffffffe) {
        r10d6 = 0x80070057;
    }
    if (r10d6 < 0) {
        addr_180003bdb_4:
        *reinterpret_cast<int32_t*>(&rax8) = r10d6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    } else {
        rax9 = rdx;
        if (rdx) {
            do {
                if (!*reinterpret_cast<struct s0**>(&rcx->f0)) 
                    break;
                rcx = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rcx) + 2);
                rax9 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rax9) - 1);
            } while (rax9);
        }
        zf10 = rax9 == 0;
        r10d6 = 0x80070057;
        if (!zf10) {
            r10d6 = 0;
        }
        if (!zf10) {
            r9_5 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdx) - reinterpret_cast<unsigned char>(rax9));
        }
        if (r10d6 < 0) 
            goto addr_180003bdb_4; else 
            goto addr_180003bca_13;
    }
    addr_180003bde_14:
    return rax8;
    addr_180003bca_13:
    rax8 = fun_180003c24(reinterpret_cast<unsigned char>(r11_7) + reinterpret_cast<uint64_t>(r9_5) * 2, reinterpret_cast<unsigned char>(rdx) - reinterpret_cast<uint64_t>(r9_5));
    goto addr_180003bde_14;
}

int64_t FileTimeToLocalFileTime = 0xafb4;

int64_t FileTimeToSystemTime = 0xafce;

int64_t GetDateFormatEx = 0xaff8;

int64_t GetTimeFormatEx = 0xafe6;

uint32_t fun_1800048e0(struct s0** rcx, int32_t rdx, struct s0* r8, struct s0* r9) {
    void* rsp5;
    uint64_t rax6;
    struct s0* rdx7;
    int32_t eax8;
    void* rsp9;
    int32_t eax10;
    int32_t eax11;
    void* rsp12;
    struct s0* rax13;
    uint64_t rcx14;
    uint32_t eax15;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 0x80);
    rax6 = g18000c0e8;
    rdx7 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp5) + 72);
    eax8 = reinterpret_cast<int32_t>(FileTimeToLocalFileTime(reinterpret_cast<uint64_t>(rsp5) + 64, rdx7));
    rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
    if (!(!eax8 || (eax10 = reinterpret_cast<int32_t>(FileTimeToSystemTime(reinterpret_cast<uint64_t>(rsp9) + 72, reinterpret_cast<uint64_t>(rsp9) + 80)), rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8), !eax10) && (rdx7 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp9) + 80), eax11 = reinterpret_cast<int32_t>(FileTimeToSystemTime(reinterpret_cast<uint64_t>(rsp9) + 64, rdx7)), rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8), eax11 == 0))) {
        GetDateFormatEx();
        rsp12 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8);
        r8 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp12) + 80);
        *reinterpret_cast<int32_t*>(&rdx7) = 0;
        *reinterpret_cast<int32_t*>(&rdx7 + 4) = 0;
        GetTimeFormatEx();
        rax13 = reinterpret_cast<struct s0*>(malloc());
        rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp12) - 8 + 8 - 8 + 8);
        if (rax13) {
            r8 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp9) + 80);
            *reinterpret_cast<struct s0**>(&rax13->f0) = reinterpret_cast<struct s0*>(0);
            *reinterpret_cast<int32_t*>(&rdx7) = 64;
            *reinterpret_cast<int32_t*>(&rdx7 + 4) = 0;
            GetDateFormatEx();
            rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8);
            *rcx = rax13;
        }
    }
    rcx14 = rax6 ^ reinterpret_cast<uint64_t>(rsp5) ^ reinterpret_cast<uint64_t>(rsp9);
    eax15 = fun_180001bf0(rcx14, rdx7, r8, rcx14, rdx7, r8);
    return eax15;
}

int32_t g18000c7a0;

void fun_180002fb0(struct s0** rcx);

struct s0* fun_180004a70(struct s0* rcx, int64_t rdx, struct s0* r8, struct s0* r9) {
    rcx->f256 = 0;
    rcx->f264 = 0;
    *reinterpret_cast<struct s0**>(&rcx->f0) = reinterpret_cast<struct s0*>(0x180007ca8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rcx) + 8) = 1;
    ++g18000c7a0;
    fun_180002fb0(&rcx->f16);
    return rcx;
}

int64_t CertDuplicateCertificateContext = 0xb00a;

uint32_t fun_1800056f4(struct s0* rcx, struct s0* rdx, struct s0* r8, struct s0* r9) {
    void* rsp5;
    uint64_t rax6;
    uint64_t v7;
    int32_t ebx8;
    int64_t r15_9;
    int64_t v10;
    struct s0* rdi11;
    int64_t r12_12;
    int64_t v13;
    int64_t rsi14;
    struct s0* r13_15;
    int64_t v16;
    int64_t v17;
    int64_t r14_18;
    int64_t rcx19;
    int32_t eax20;
    int32_t v21;
    uint64_t rax22;
    void* rsp23;
    int32_t eax24;
    int32_t eax25;
    int32_t eax26;
    void** rcx27;
    int32_t eax28;
    uint32_t eax29;
    unsigned char v30;
    uint64_t rcx31;
    uint32_t eax32;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 0x670);
    rax6 = g18000c0e8;
    v7 = rax6 ^ reinterpret_cast<uint64_t>(rsp5);
    ebx8 = 0;
    r15_9 = v10;
    rdi11 = rcx;
    r12_12 = v13;
    *reinterpret_cast<uint32_t*>(&rsi14) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = 0;
    r13_15 = r9;
    v16 = v17;
    while (*reinterpret_cast<uint32_t*>(&rsi14) < 5) {
        *reinterpret_cast<int64_t*>(reinterpret_cast<unsigned char>(rdi11) + reinterpret_cast<uint64_t>(rsi14 * 8) + 0xb0) = *reinterpret_cast<int64_t*>(0x180000000 + rsi14 * 8 + 0x9148);
        *reinterpret_cast<uint32_t*>(&r14_18) = *reinterpret_cast<uint32_t*>(&rsi14);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_18) + 4) = 0;
        rcx19 = *reinterpret_cast<int64_t*>((r14_18 << 5) + 0x180000000 + 0x7d68);
        if (!rcx19) {
            ebx8 = 0;
        } else {
            rdx = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp5) + 48);
            eax20 = reinterpret_cast<int32_t>(g18000e020());
            rsp5 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
            ebx8 = eax20;
            if (eax20 < 0) {
                addr_1800057c6_6:
                *reinterpret_cast<uint32_t*>(&rsi14) = *reinterpret_cast<uint32_t*>(&rsi14) + 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = 0;
                if (ebx8 >= 0) 
                    continue; else 
                    break;
            }
        }
        __asm__("movups xmm0, [rsp+0x28]");
        __asm__("movups xmm1, [rsp+0x38]");
        __asm__("movups [r14+rdi+0x10], xmm0");
        __asm__("movups [r14+rdi+0x20], xmm1");
        goto addr_1800057c6_6;
    }
    rdi11->f272 = v21;
    rax22 = reinterpret_cast<uint64_t>(CertDuplicateCertificateContext(r13_15, rdx));
    rsp23 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp5) - 8 + 8);
    rdi11->f264 = rax22;
    if (ebx8 >= 0 && ((rdx = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdi11) + 0xe0), eax24 = reinterpret_cast<int32_t>(g18000e020(r15_9, rdx)), rsp23 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp23) - 8 + 8), eax24 >= 0) && ((rdx = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdi11) + 0xe8), eax25 = reinterpret_cast<int32_t>(g18000e020(r12_12, rdx)), rsp23 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp23) - 8 + 8), eax25 >= 0) && ((rdx = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdi11) + 0xf0), eax26 = reinterpret_cast<int32_t>(g18000e020(v16, rdx)), rsp23 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp23) - 8 + 8), eax26 >= 0) && (rcx27 = g18000c720, r8 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp23) + 80), *reinterpret_cast<int32_t*>(&rdx) = 0x193, *reinterpret_cast<int32_t*>(&rdx + 4) = 0, eax28 = reinterpret_cast<int32_t>(LoadStringW(rcx27, 0x193, r8, 0x300)), rsp23 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp23) - 8 + 8), !!eax28))))) {
        rdx = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdi11) + 0xf8);
        g18000e020(reinterpret_cast<uint64_t>(rsp23) + 80, rdx, r8, 0x300);
        rsp23 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp23) - 8 + 8);
    }
    eax29 = v30;
    rdi11->f276 = *reinterpret_cast<signed char*>(&eax29);
    rcx31 = v7 ^ reinterpret_cast<uint64_t>(rsp23);
    eax32 = fun_180001bf0(rcx31, rdx, r8, rcx31, rdx, r8);
    return eax32;
}

int64_t fun_180003810(struct s17* rcx, struct s0** rdx, struct s0* r8, ...) {
    int64_t rax4;
    int64_t rax5;
    struct s0** r8_6;
    int32_t edi7;
    struct s0** rcx8;
    struct s0** rax9;
    int64_t rax10;

    *reinterpret_cast<int32_t*>(&rax4) = rcx->f12;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    if (rcx->f8 != *reinterpret_cast<int32_t*>(&rax4)) {
        addr_18000386e_2:
        rax5 = rcx->f8;
        r8_6 = rcx->f0 + rax5 * 8;
        if (r8_6) {
            *r8_6 = *rdx;
        }
    } else {
        if (*reinterpret_cast<int32_t*>(&rax4)) {
            edi7 = rcx->f8 + rcx->f8;
            if (edi7 < 0) 
                goto addr_18000386a_6;
        } else {
            edi7 = static_cast<int32_t>(rax4 + 1);
        }
        if (reinterpret_cast<uint64_t>(static_cast<int64_t>(edi7)) > 0xfffffff || (rcx8 = rcx->f0, rax9 = reinterpret_cast<struct s0**>(g180007af8(rcx8)), rax9 == 0)) {
            addr_18000386a_6:
            *reinterpret_cast<int32_t*>(&rax10) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
            goto addr_180003895_9;
        } else {
            rcx->f12 = edi7;
            rcx->f0 = rax9;
            goto addr_18000386e_2;
        }
    }
    rcx->f8 = rcx->f8 + 1;
    *reinterpret_cast<int32_t*>(&rax10) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    addr_180003895_9:
    return rax10;
}

int64_t CertGetCertificateContextProperty = 0xaefe;

void fun_1800039b0(struct s0* rcx, int16_t* rdx, int32_t r8d, struct s0* r9) {
    int64_t rbx5;
    struct s0* rbp6;
    int32_t eax7;
    int32_t* rdi8;
    int64_t rdx9;
    uint32_t eax10;

    *reinterpret_cast<uint32_t*>(&rbx5) = 0;
    *rdx = 0;
    rbp6 = rcx;
    eax7 = reinterpret_cast<int32_t>(CertGetCertificateContextProperty());
    if (!eax7) {
        rdi8 = reinterpret_cast<int32_t*>(0x180009118);
        do {
            *reinterpret_cast<int32_t*>(&rdx9) = *rdi8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
            eax10 = reinterpret_cast<uint32_t>(CertGetNameStringW(rbp6, rdx9));
            if (eax10 > 1) 
                break;
            *reinterpret_cast<uint32_t*>(&rbx5) = *reinterpret_cast<uint32_t*>(&rbx5) + 1;
            ++rdi8;
        } while (*reinterpret_cast<uint32_t*>(&rbx5) < 4);
    }
    return;
}

int32_t g18000c100 = -1;

int64_t GetCurrentProcess = 0xae7e;

int64_t OpenProcessToken = 0xb096;

int64_t GetTokenInformation = 0xb0aa;

int64_t LocalAlloc = 0xb02c;

int64_t IsWellKnownSid = 0xb0c0;

int64_t CloseHandle = 0xb070;

int64_t LocalFree = 0xaf48;

unsigned char fun_1800058b0(struct s0** rcx) {
    int32_t eax2;
    int64_t* rbx3;
    int64_t rax4;
    int64_t* r8_5;
    int64_t rdx6;
    int32_t eax7;
    int64_t r9_8;
    int32_t eax9;
    int32_t eax10;
    int32_t v11;
    int64_t* rax12;
    int32_t v13;
    int32_t eax14;
    int64_t rcx15;
    int32_t eax16;
    int32_t ecx17;
    int1_t zf18;

    eax2 = g18000c100;
    if (eax2 == -1) {
        *reinterpret_cast<int32_t*>(&rbx3) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx3) + 4) = 0;
        g18000c100 = 0;
        rax4 = reinterpret_cast<int64_t>(GetCurrentProcess());
        r8_5 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 56 - 8 + 8 + 72);
        *reinterpret_cast<int32_t*>(&rdx6) = 24;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
        eax7 = reinterpret_cast<int32_t>(OpenProcessToken(rax4, 24, r8_5));
        if (eax7 && ((*reinterpret_cast<int32_t*>(&r9_8) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = 0, *reinterpret_cast<int32_t*>(&r8_5) = 0, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_5) + 4) = 0, *reinterpret_cast<int32_t*>(&rdx6) = 25, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0, eax9 = reinterpret_cast<int32_t>(GetTokenInformation(0, 25)), !eax9) && ((eax10 = reinterpret_cast<int32_t>(GetLastError(0, 25)), eax10 == 0x7a) && ((*reinterpret_cast<int32_t*>(&rdx6) = v11, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0, rax12 = reinterpret_cast<int64_t*>(LocalAlloc()), rbx3 = rax12, !!rax12) && (*reinterpret_cast<int32_t*>(&r9_8) = v13, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = 0, r8_5 = rbx3, *reinterpret_cast<int32_t*>(&rdx6) = 25, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0, eax14 = reinterpret_cast<int32_t>(GetTokenInformation(0, 25, r8_5, r9_8)), !!eax14))))) {
            rcx15 = *rbx3;
            eax16 = reinterpret_cast<int32_t>(IsWellKnownSid(rcx15, 69, r8_5, r9_8));
            ecx17 = g18000c100;
            *reinterpret_cast<int32_t*>(&rdx6) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
            if (eax16) {
                ecx17 = 1;
            }
            g18000c100 = ecx17;
        }
        if (!1) {
            CloseHandle();
        }
        if (rbx3) {
            LocalFree(rbx3, rdx6, r8_5, r9_8);
        }
        zf18 = g18000c100 == 0;
    } else {
        zf18 = eax2 == 0;
    }
    return static_cast<unsigned char>(reinterpret_cast<uint1_t>(!zf18));
}

uint32_t fun_180005058(int64_t rcx, int64_t* rdx) {
    void* rsp3;
    int64_t r8_4;
    void* r9_5;
    int32_t eax6;
    int64_t rax7;
    int32_t eax8;
    uint32_t eax9;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32);
    *reinterpret_cast<int32_t*>(&r8_4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_4) + 4) = 0;
    *rdx = 0;
    r9_5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) + 56);
    eax6 = reinterpret_cast<int32_t>(CertGetCertificateContextProperty());
    if (!eax6) 
        goto addr_18000508d_2;
    rax7 = reinterpret_cast<int64_t>(LocalAlloc());
    *rdx = rax7;
    if (rax7) {
        r9_5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8 - 8 + 8 + 56);
        r8_4 = rax7;
        rcx = rcx;
        eax8 = reinterpret_cast<int32_t>(CertGetCertificateContextProperty(rcx, 0x65, r8_4, r9_5));
        if (!eax8) {
            addr_18000508d_2:
            eax9 = reinterpret_cast<uint32_t>(GetLastError(rcx, 0x65, r8_4, r9_5));
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax9) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax9 == 0))) {
                eax9 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax9)) | 0x80070000;
            }
        } else {
            eax9 = 0;
        }
    } else {
        eax9 = 0x8007000e;
    }
    return eax9;
}

struct s20 {
    int64_t f0;
    int64_t f8;
    int32_t f16;
};

uint32_t fun_1800059b4(struct s0* rcx);

int64_t g18000e060 = 0x180002331;

int64_t g18000e078 = 0x1800023ce;

struct s20* fun_180004a08(struct s20* rcx, struct s0* rdx);

int64_t g18000e090 = 0x1800023f2;

int64_t g18000e098 = 0x1800023fe;

uint32_t fun_180005120(struct s0* rcx, int64_t* rdx) {
    void* rsp3;
    uint64_t rax4;
    struct s0* rdx5;
    struct s0* r8_6;
    void* rsp7;
    struct s20* rdi8;
    void* r9_9;
    uint32_t eax10;
    void* rsp11;
    int32_t eax12;
    struct s20* rax13;
    struct s20* rax14;
    int64_t rcx15;
    int32_t eax16;
    uint64_t rcx17;
    uint32_t eax18;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 0x270);
    rax4 = g18000c0e8;
    *reinterpret_cast<int32_t*>(&rdx5) = 0;
    *reinterpret_cast<int32_t*>(&rdx5 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_6) = 0x20a;
    *reinterpret_cast<int32_t*>(&r8_6 + 4) = 0;
    fun_180002fb0(reinterpret_cast<uint64_t>(rsp3) + 80);
    rsp7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp3) - 8 + 8);
    *reinterpret_cast<int32_t*>(&rdi8) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = 0;
    r9_9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) + 80);
    eax10 = fun_1800059b4(rcx);
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp7) - 8 + 8);
    if (reinterpret_cast<int32_t>(eax10) >= reinterpret_cast<int32_t>(0)) {
        *reinterpret_cast<int32_t*>(&r8_6) = 0;
        *reinterpret_cast<int32_t*>(&r8_6 + 4) = 0;
        rdx5 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp11) + 40);
        eax12 = reinterpret_cast<int32_t>(g18000e060(reinterpret_cast<uint64_t>(rsp11) + 32, rdx5));
        rsp11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp11) - 8 + 8);
        if (!eax12) {
            rax13 = reinterpret_cast<struct s20*>(g18000e078(24, rdx5));
            rsp11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp11) - 8 + 8);
            if (rax13) {
                rdx5 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp11) + 80);
                rax14 = fun_180004a08(rax13, rdx5);
                rsp11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp11) - 8 + 8);
                rdi8 = rax14;
            }
            if (rdi8) {
                *reinterpret_cast<int32_t*>(&r8_6) = 0xffffff;
                *reinterpret_cast<int32_t*>(&r8_6 + 4) = 0;
                rcx15 = rdi8->f8;
                eax16 = reinterpret_cast<int32_t>(g18000e090(rcx15, rdx, 0xffffff, r9_9));
                if (eax16) {
                    rdi8->f16 = eax16;
                }
                *reinterpret_cast<int32_t*>(&rdx5) = 1;
                *reinterpret_cast<int32_t*>(&rdx5 + 4) = 0;
                g180008160(rdi8, 1, 0xffffff, r9_9);
                rsp11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp11) - 8 + 8 - 8 + 8);
            }
        }
    }
    if (!1) {
        g18000e098();
        rsp11 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp11) - 8 + 8);
    }
    rcx17 = rax4 ^ reinterpret_cast<uint64_t>(rsp3) ^ reinterpret_cast<uint64_t>(rsp11);
    eax18 = fun_180001bf0(rcx17, rdx5, r8_6, rcx17, rdx5, r8_6);
    return eax18;
}

uint32_t fun_180005da4(int64_t rcx, int64_t* rdx, void* r8);

/* OLEAUT32.dll:2 */
int64_t OLEAUT32_dll_2 = 0x8000000000000002;

int64_t CompareStringOrdinal = 0xb07e;

int64_t g18000e008 = 0x180002111;

uint64_t g10;

uint32_t fun_18000524c(int64_t rcx, unsigned char* rdx, struct s0* r8, unsigned char* r9) {
    uint32_t ebx5;
    int64_t* rsi6;
    uint32_t r14d7;
    struct s0* bpl8;
    uint32_t r15d9;
    signed char r13b10;
    void* r9_11;
    void* r8_12;
    int64_t* rdx13;
    int32_t eax14;
    void* rsp15;
    uint32_t eax16;
    int64_t rcx17;
    int64_t* rax18;
    int32_t eax19;
    int32_t eax20;
    uint32_t eax21;
    uint32_t eax22;
    uint32_t eax23;
    uint32_t eax24;
    signed char* v25;

    ebx5 = 0;
    *reinterpret_cast<uint32_t*>(&rsi6) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&r14d7) = 0;
    bpl8 = reinterpret_cast<struct s0*>(0);
    *reinterpret_cast<unsigned char*>(&r15d9) = 0;
    r13b10 = 0;
    r9_11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 100);
    r8_12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 96);
    *reinterpret_cast<int32_t*>(&rdx13) = 0x78;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
    eax14 = reinterpret_cast<int32_t>(CertGetCertificateContextProperty());
    rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 96 - 8 + 8);
    if (!eax14 || 1) {
        rdx13 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) + 72);
        eax16 = fun_180005da4(rcx, rdx13, r8_12);
        rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
        ebx5 = eax16;
        if (!eax16) {
            rcx17 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(&g0) + 8);
            rax18 = reinterpret_cast<int64_t*>(OLEAUT32_dll_2(rcx17));
            rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8);
            rsi6 = rax18;
            if (rax18) {
                eax19 = reinterpret_cast<int32_t>(CompareStringOrdinal(rsi6));
                r14d7 = 0;
                if (eax19 == 2) {
                    r14d7 = 1;
                }
                eax20 = reinterpret_cast<int32_t>(CompareStringOrdinal(rsi6));
                r15d9 = 0;
                if (eax20 == 2) {
                    r15d9 = 1;
                }
                r9_11 = reinterpret_cast<void*>(0x180008ee0);
                *reinterpret_cast<int32_t*>(&rdx13) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
                *reinterpret_cast<int32_t*>(&r8_12) = 23;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_12) + 4) = 0;
                eax21 = reinterpret_cast<uint32_t>(g18000e008(0x180008ef0));
                rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8 - 8 + 8 - 8 + 8);
                ebx5 = eax21;
                if (!eax21 && ((r8_12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) + 80), rdx13 = reinterpret_cast<int64_t*>(0x1800092e8), eax22 = reinterpret_cast<uint32_t>(g180008160()), rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8), ebx5 = eax22, !eax22) && ((*reinterpret_cast<int32_t*>(&r8_12) = *reinterpret_cast<int32_t*>(&g10), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_12) + 4) = 0, rdx13 = rsi6, eax23 = reinterpret_cast<uint32_t>(g180008160()), rsp15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp15) - 8 + 8), ebx5 = eax23, !eax23) && (rdx13 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) + 48), eax24 = reinterpret_cast<uint32_t>(g180008160()), ebx5 = eax24, !eax24)))) {
                    bpl8 = reinterpret_cast<struct s0*>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!*reinterpret_cast<int16_t*>(&eax24))));
                }
            } else {
                ebx5 = 0x8007000e;
            }
        }
    } else {
        if (0) {
            *reinterpret_cast<unsigned char*>(&r14d7) = 1;
        } else {
            if (0) {
                bpl8 = reinterpret_cast<struct s0*>(1);
            } else {
                if (0) 
                    goto addr_1800052ef_16;
                if (0) 
                    goto addr_1800052e7_18; else 
                    goto addr_1800052dd_19;
            }
        }
    }
    addr_18000542c_20:
    *reinterpret_cast<struct s0**>(&r8->f0) = bpl8;
    *rdx = *reinterpret_cast<unsigned char*>(&r14d7);
    *r9 = *reinterpret_cast<unsigned char*>(&r15d9);
    *v25 = r13b10;
    OLEAUT32_dll_6(rsi6, rdx13, r8_12, r9_11);
    if (!1) {
        LocalFree(0, rdx13, r8_12, r9_11);
    }
    if (!1) {
        g180008160();
    }
    if (!1) {
        g180008160();
    }
    return ebx5;
    addr_1800052e7_18:
    r13b10 = 1;
    goto addr_18000542c_20;
    addr_1800052dd_19:
    if (0) {
        addr_1800052ef_16:
        *reinterpret_cast<unsigned char*>(&r15d9) = 1;
        goto addr_18000542c_20;
    } else {
        goto addr_18000542c_20;
    }
}

int64_t g18000e068 = 0x1800023b6;

struct s20* fun_180004a08(struct s20* rcx, struct s0* rdx) {
    int32_t eax3;

    rcx->f0 = reinterpret_cast<int64_t>("0L");
    rcx->f0 = 0x180007c98;
    eax3 = reinterpret_cast<int32_t>(g18000e068(rdx, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 48 + 88));
    rcx->f16 = eax3;
    rcx->f8 = 0;
    return rcx;
}

int64_t g18000c2b8;

int64_t* g18000c258;

int64_t g18000c130 = 0;

uint64_t g18000c240;

int32_t g18000c120 = 0;

int32_t g18000c124 = 0;

int32_t g18000c138 = 0;

int64_t g18000c140 = 0;

uint64_t g18000c148 = 0;

int64_t g18000c150 = 0;

uint32_t fun_180001eb4(int64_t rcx);

uint32_t fun_180001bf0(uint64_t rcx, struct s0* rdx, struct s0* r8, ...) {
    int1_t zf4;
    uint32_t eax5;
    int64_t rax6;
    int64_t rax7;
    int64_t* rax8;
    int64_t* rax9;
    int64_t rax10;
    uint64_t rdx11;
    int64_t rdx12;
    uint32_t eax13;

    zf4 = rcx == g18000c0e8;
    if (zf4) {
        __asm__("rol rcx, 0x10");
        if (*reinterpret_cast<uint16_t*>(&rcx) & 0xffff) {
            __asm__("ror rcx, 0x10");
        } else {
            return eax5;
        }
    }
    RtlCaptureContext(0x18000c1c0);
    rax6 = g18000c2b8;
    rax7 = reinterpret_cast<int64_t>(RtlLookupFunctionEntry(rax6, reinterpret_cast<int64_t>(__zero_stack_offset()) - 0x88 - 8 + 8 + 80));
    if (!rax7) {
        rax8 = g18000c258;
        g18000c2b8 = *rax8;
        rax9 = g18000c258;
        g18000c258 = rax9 + 1;
    } else {
        RtlVirtualUnwind();
    }
    rax10 = g18000c2b8;
    g18000c130 = rax10;
    g18000c240 = rcx;
    g18000c120 = 0xc0000409;
    g18000c124 = 1;
    g18000c138 = 3;
    g18000c140 = 2;
    rdx11 = g18000c0e8;
    g18000c148 = rdx11;
    rdx12 = g18000c0f0;
    g18000c150 = rdx12;
    eax13 = fun_180001eb4(0x180007058);
    return eax13;
}

int32_t fun_180003be4(struct s0* rcx, struct s0* rdx, struct s0* r8, struct s0* r9) {
    int32_t r9d5;
    int64_t rax6;

    r9d5 = 0;
    if (reinterpret_cast<unsigned char>(rdx) + 0xffffffffffffffff > 0x7ffffffe) {
        r9d5 = 0x80070057;
    }
    if (r9d5 < 0) {
        *reinterpret_cast<int32_t*>(&rax6) = r9d5;
        if (rdx) {
            *reinterpret_cast<struct s0**>(&rcx->f0) = reinterpret_cast<struct s0*>(0);
        }
    } else {
        rax6 = fun_180003c24(rcx, rdx);
    }
    return *reinterpret_cast<int32_t*>(&rax6);
}

struct s21 {
    signed char[256] pad256;
    int64_t f256;
    signed char[12] pad276;
    signed char f276;
};

int64_t g18000e040 = 0x1800022ac;

signed char fun_180005e30(struct s21* rcx) {
    int64_t rcx2;
    uint32_t eax3;
    int32_t eax4;
    int64_t rcx5;
    int32_t v6;
    uint32_t eax7;
    struct s5* rcx8;
    struct s5* rcx9;

    rcx2 = rcx->f256;
    if (!rcx2) 
        goto addr_180005e94_2;
    eax3 = reinterpret_cast<uint32_t>(g180008160());
    if (!eax3) {
        eax4 = reinterpret_cast<int32_t>(g18000e040(0, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32 - 8 + 8 + 48));
        if (!eax4 || (*reinterpret_cast<int32_t*>(&rcx5) = v6, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0, static_cast<uint32_t>(rcx5 - 1) <= 1)) {
            addr_180005e94_2:
            eax7 = 0;
        } else {
            eax7 = 0;
            if (*reinterpret_cast<int32_t*>(&rcx5) != 16) {
                eax7 = 1;
            }
        }
        return *reinterpret_cast<signed char*>(&eax7);
    } else {
        rcx8 = g18000c018;
        if (rcx8 != 0x18000c018 && rcx8->f28 & 1) {
            rcx9 = rcx8->f16;
            fun_18000481c(rcx9, 10, 0x1800092f8, eax3);
            goto addr_180005e94_2;
        }
    }
}

void fun_180002061(int64_t rcx);

int64_t fun_18000206d(int64_t rcx, void* rdx, void* r8);

void fun_180002067(int64_t rcx);

int64_t fun_180001dfc(int64_t rcx) {
    void** rax2;
    void* rsp3;
    void** rax4;
    void** rax5;
    int64_t rax6;
    int64_t rax7;

    rax2 = g18000c6f8;
    if (!reinterpret_cast<int1_t>(rax2 == 0xffffffffffffffff)) {
        fun_180002061(8);
        rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32 - 8 + 8);
        rax4 = g18000c6f8;
        rax5 = g18000c6f0;
        rax6 = fun_18000206d(rcx, reinterpret_cast<int64_t>(rsp3) + 56, reinterpret_cast<int64_t>(rsp3) + 64);
        g18000c6f8 = rax4;
        g18000c6f0 = rax5;
        fun_180002067(8);
        rax7 = rax6;
    } else {
        rax7 = reinterpret_cast<int64_t>(g180008160());
    }
    return rax7;
}

struct s22 {
    int32_t f0;
    signed char[20] pad24;
    int16_t f24;
};

uint32_t fun_180001cf0(struct s1* rcx) {
    struct s22* rcx2;
    uint32_t eax3;

    if (rcx->f0 == 0x5a4d) {
        rcx2 = reinterpret_cast<struct s22*>(rcx->f60 + reinterpret_cast<int64_t>(rcx));
        eax3 = 0;
        if (rcx2->f0 == 0x4550) {
            *reinterpret_cast<unsigned char*>(&eax3) = reinterpret_cast<uint1_t>(rcx2->f24 == 0x20b);
        }
        return eax3;
    } else {
        return 0;
    }
}

int64_t _lock = 0xad44;

void fun_180002061(int64_t rcx) {
    goto _lock;
}

int64_t __dllonexit = 0xad56;

int64_t fun_18000206d(int64_t rcx, void* rdx, void* r8) {
    goto __dllonexit;
}

int64_t _unlock = 0xad4c;

void fun_180002067(int64_t rcx) {
    goto _unlock;
}

int64_t SetUnhandledExceptionFilter = 0xae60;

int64_t UnhandledExceptionFilter = 0xae44;

int64_t TerminateProcess = 0xae92;

uint32_t fun_180001eb4(int64_t rcx) {
    SetUnhandledExceptionFilter();
    UnhandledExceptionFilter(rcx);
    GetCurrentProcess(rcx);
    goto TerminateProcess;
}

int64_t _callnewh = 0xb41c;

int32_t fun_180002d21() {
    goto _callnewh;
}

/*
 * ??0exception@@QEAA@AEBV0@@Z
 * public: __cdecl exception::exception(class exception const & __ptr64) __ptr64
 */
int64_t _0exception_QEAA_AEBV0_Z = 0xb47e;

void fun_180002d48() {
    goto _0exception_QEAA_AEBV0_Z;
}

/*
 * ??1exception@@UEAA@XZ
 * public: virtual __cdecl exception::~exception(void) __ptr64
 */
int64_t _1exception_UEAA_XZ = 0xb49c;

void fun_180002d4e() {
    goto _1exception_UEAA_XZ;
}

void fun_180002d42();

int64_t* fun_180002464(int64_t* rcx) {
    fun_180002d42();
    *rcx = reinterpret_cast<int64_t>("@%");
    return rcx;
}

int64_t _CxxThrowException = 0xb4d2;

void fun_180002d66() {
    goto _CxxThrowException;
}

void fun_180002738(struct s0* rcx, struct s0* rdx, struct s0* r8, struct s0* r9) {
    void* rsp5;
    void* rsp6;
    struct s0* rcx7;
    struct s0* rdi8;
    struct s0* rsi9;
    struct s0* rax10;
    int64_t rax11;
    int64_t v12;
    int1_t cf13;
    struct s0* rax14;
    int1_t cf15;
    int1_t cf16;
    struct s0* rax17;
    struct s0* r8_18;
    int1_t cf19;
    struct s0* rcx20;
    int64_t v21;
    int1_t cf22;
    struct s0* rax23;
    int1_t cf24;
    struct s0* tmp64_25;
    int1_t cf26;
    struct s0* rax27;
    int1_t cf28;
    int1_t cf29;
    struct s0* rax30;
    struct s0* r8_31;
    int64_t v32;
    int1_t cf33;
    int1_t cf34;
    struct s0* rcx35;
    int1_t cf36;
    struct s0* rax37;
    struct s0* rax38;
    int1_t cf39;
    int1_t cf40;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 72);
    fun_1800024c0(reinterpret_cast<int64_t>(rsp5) + 32, rcx);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    fun_180002d66();
    fun_1800024c0(reinterpret_cast<int64_t>(rsp6) - 8 + 8 - 72 + 32, reinterpret_cast<int64_t>(rsp6) + 32);
    fun_180002d66();
    rcx7 = reinterpret_cast<struct s0*>("invalid string position");
    fun_18000275c("invalid string position");
    rdi8 = g18000a350;
    rsi9 = reinterpret_cast<struct s0*>(0x18000a340);
    if (reinterpret_cast<unsigned char>(rdi8) < reinterpret_cast<unsigned char>(r8)) {
        fun_180002780();
    } else {
        rdi8 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdi8) - reinterpret_cast<unsigned char>(r8));
        if (reinterpret_cast<unsigned char>(r9) < reinterpret_cast<unsigned char>(rdi8)) {
            rdi8 = r9;
        }
        if (1) 
            goto addr_1800027f9_9; else 
            goto addr_1800027cd_10;
    }
    fun_180002780();
    fun_180002724("invalid string position", 0x18000a340, r8, r9);
    if (0) {
        addr_18000290d_14:
        if (reinterpret_cast<unsigned char>(r8) > reinterpret_cast<unsigned char>(0xfffffffffffffffe)) {
            fun_180002724("invalid string position", 0x18000a340, r8, r9);
            rax10 = fun_180002c48(r8);
            g18000a340 = r8;
            rax11 = 0x18000c000;
            if (!rax10) {
                rax11 = 0x18000c010;
            }
            g18000a348 = rax11;
            goto v12;
        }
    } else {
        cf13 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf13) {
            rax14 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rax14 = g180008530;
        }
        if (reinterpret_cast<unsigned char>(0x18000a340) < reinterpret_cast<unsigned char>(rax14)) 
            goto addr_18000290d_14; else 
            goto addr_1800028d5_22;
    }
    cf15 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(r8);
    if (!cf15) {
        if (r8) 
            goto addr_18000294e_25;
        g180008540 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(g180008540) & reinterpret_cast<unsigned char>(r8));
        cf16 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf16) {
            rax17 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rax17 = g180008530;
        }
        *reinterpret_cast<struct s0**>(&rax17->f0) = reinterpret_cast<struct s0*>(0);
    } else {
        r8_18 = g180008540;
        fun_1800025b0("invalid string position", r8, r8_18);
    }
    if (!r8) {
        addr_180002984_32:
    } else {
        addr_18000294e_25:
        cf19 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf19) {
            rcx20 = reinterpret_cast<struct s0*>("invalid string position");
            goto addr_18000295d_34;
        } else {
            rcx20 = g180008530;
            goto addr_18000295d_34;
        }
    }
    addr_180002987_36:
    goto v21;
    addr_18000295d_34:
    if (r8) {
        fun_180002d6c(rcx20, 0x18000a340, r8);
    }
    cf22 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
    g180008540 = r8;
    if (cf22) {
        rax23 = reinterpret_cast<struct s0*>("invalid string position");
    } else {
        rax23 = g180008530;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax23) + reinterpret_cast<unsigned char>(r8)) = 0;
    goto addr_180002984_32;
    addr_1800028d5_22:
    cf24 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
    if (!cf24) {
        rcx7 = g180008530;
    }
    tmp64_25 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rcx7) + reinterpret_cast<unsigned char>(g180008540));
    if (reinterpret_cast<unsigned char>(tmp64_25) <= reinterpret_cast<unsigned char>(0x18000a340)) 
        goto addr_18000290d_14;
    cf26 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
    if (cf26) {
        rax27 = reinterpret_cast<struct s0*>("invalid string position");
    } else {
        rax27 = g180008530;
    }
    fun_180002794("invalid string position", "invalid string position", reinterpret_cast<unsigned char>(0x18000a340) - reinterpret_cast<unsigned char>(rax27), r8);
    goto addr_180002987_36;
    addr_1800027f9_9:
    if (reinterpret_cast<unsigned char>(rdi8) <= reinterpret_cast<unsigned char>(0xfffffffffffffffe)) {
        cf28 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(rdi8);
        if (!cf28) {
            if (rdi8) 
                goto addr_180002837_50;
            g180008540 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(g180008540) & reinterpret_cast<unsigned char>(rdi8));
            cf29 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
            if (cf29) {
                rax30 = reinterpret_cast<struct s0*>("invalid string position");
            } else {
                rax30 = g180008530;
            }
            *reinterpret_cast<struct s0**>(&rax30->f0) = reinterpret_cast<struct s0*>(0);
        } else {
            r8_31 = g180008540;
            fun_1800025b0("invalid string position", rdi8, r8_31);
        }
        if (!rdi8) {
            addr_180002878_57:
            goto v32;
        } else {
            addr_180002837_50:
            cf33 = g18000a358 < 16;
            if (!cf33) {
                rsi9 = g18000a340;
            }
        }
        cf34 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf34) {
            rcx35 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rcx35 = g180008530;
        }
        if (rdi8) {
            fun_180002d6c(rcx35, reinterpret_cast<unsigned char>(rsi9) + reinterpret_cast<unsigned char>(r8), rdi8);
        }
        cf36 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        g180008540 = rdi8;
        if (cf36) {
            rax37 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rax37 = g180008530;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax37) + reinterpret_cast<unsigned char>(rdi8)) = 0;
        goto addr_180002878_57;
    }
    addr_1800027cd_10:
    rax38 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdi8) + reinterpret_cast<unsigned char>(r8));
    cf39 = reinterpret_cast<unsigned char>(g180008540) < reinterpret_cast<unsigned char>(rax38);
    if (!cf39) {
        cf40 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        g180008540 = rax38;
        if (!cf40) {
            rcx7 = g180008530;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx7) + reinterpret_cast<unsigned char>(rax38)) = 0;
        fun_180002a4c("invalid string position", 0, r8, r9);
        goto addr_180002878_57;
    }
}

struct s23 {
    struct s23* f0;
    signed char[16] pad24;
    uint64_t f24;
};

struct s24 {
    signed char[16] pad16;
    struct s0* f16;
};

struct s25 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
};

void fun_180002780() {
    struct s0* rcx1;
    struct s23* rsi2;
    struct s23* rdx3;
    struct s24* rdx4;
    struct s0* r8_5;
    struct s0* rdi6;
    uint64_t r8_7;
    struct s0* r9_8;
    struct s0* r9_9;
    struct s0* rdx10;
    struct s0* rdx11;
    struct s0* r8_12;
    struct s0* r9_13;
    int64_t rdx14;
    struct s0* r8_15;
    struct s0* rdx16;
    struct s0* r8_17;
    struct s0* r9_18;
    struct s0* r8d19;
    struct s0* rax20;
    struct s25* rdx21;
    int32_t r8d22;
    int64_t rax23;
    int64_t v24;
    int1_t cf25;
    struct s0* rax26;
    struct s0* rdx27;
    int1_t cf28;
    int1_t cf29;
    struct s0* rax30;
    struct s0* r8_31;
    int1_t cf32;
    struct s0* rcx33;
    int64_t v34;
    int1_t cf35;
    struct s0* rax36;
    int1_t cf37;
    struct s0* tmp64_38;
    int1_t cf39;
    struct s0* rax40;
    int1_t cf41;
    int1_t cf42;
    struct s0* rax43;
    struct s0* r8_44;
    int64_t v45;
    int1_t cf46;
    struct s0* rcx47;
    void* r8_48;
    int1_t cf49;
    struct s0* rax50;
    struct s0* rax51;
    void* r8_52;
    int1_t cf53;
    int1_t cf54;
    struct s0* r8_55;
    struct s0* r9_56;

    rcx1 = reinterpret_cast<struct s0*>("invalid string position");
    fun_18000275c("invalid string position");
    rsi2 = rdx3;
    if (reinterpret_cast<unsigned char>(rdx4->f16) < reinterpret_cast<unsigned char>(r8_5)) {
        fun_180002780();
    } else {
        rdi6 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdx4->f16) - r8_7);
        if (reinterpret_cast<unsigned char>(r9_8) < reinterpret_cast<unsigned char>(rdi6)) {
            rdi6 = r9_9;
        }
        if (!reinterpret_cast<int1_t>("invalid string position" == rdx10)) 
            goto addr_1800027f9_7; else 
            goto addr_1800027cd_8;
    }
    fun_180002780();
    fun_180002724("invalid string position", rdx11, r8_12, r9_13);
    if (!rdx14) {
        addr_18000290d_12:
        if (reinterpret_cast<unsigned char>(r8_15) > reinterpret_cast<unsigned char>(0xfffffffffffffffe)) {
            fun_180002724("invalid string position", rdx16, r8_17, r9_18);
            rax20 = fun_180002c48(r8d19);
            rdx21->f0 = r8d22;
            rax23 = 0x18000c000;
            if (!rax20) {
                rax23 = 0x18000c010;
            }
            rdx21->f8 = rax23;
            goto v24;
        }
    } else {
        cf25 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf25) {
            rax26 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rax26 = g180008530;
        }
        if (reinterpret_cast<unsigned char>(rdx27) < reinterpret_cast<unsigned char>(rax26)) 
            goto addr_18000290d_12; else 
            goto addr_1800028d5_20;
    }
    cf28 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(r8_15);
    if (!cf28) {
        if (r8_15) 
            goto addr_18000294e_23;
        g180008540 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(g180008540) & reinterpret_cast<unsigned char>(r8_15));
        cf29 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf29) {
            rax30 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rax30 = g180008530;
        }
        *reinterpret_cast<struct s0**>(&rax30->f0) = reinterpret_cast<struct s0*>(0);
    } else {
        r8_31 = g180008540;
        fun_1800025b0("invalid string position", r8_15, r8_31);
    }
    if (!r8_15) {
        addr_180002984_30:
    } else {
        addr_18000294e_23:
        cf32 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf32) {
            rcx33 = reinterpret_cast<struct s0*>("invalid string position");
            goto addr_18000295d_32;
        } else {
            rcx33 = g180008530;
            goto addr_18000295d_32;
        }
    }
    addr_180002987_34:
    goto v34;
    addr_18000295d_32:
    if (r8_15) {
        fun_180002d6c(rcx33, rdx27, r8_15);
    }
    cf35 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
    g180008540 = r8_15;
    if (cf35) {
        rax36 = reinterpret_cast<struct s0*>("invalid string position");
    } else {
        rax36 = g180008530;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax36) + reinterpret_cast<unsigned char>(r8_15)) = 0;
    goto addr_180002984_30;
    addr_1800028d5_20:
    cf37 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
    if (!cf37) {
        rcx1 = g180008530;
    }
    tmp64_38 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rcx1) + reinterpret_cast<unsigned char>(g180008540));
    if (reinterpret_cast<unsigned char>(tmp64_38) <= reinterpret_cast<unsigned char>(rdx27)) 
        goto addr_18000290d_12;
    cf39 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
    if (cf39) {
        rax40 = reinterpret_cast<struct s0*>("invalid string position");
    } else {
        rax40 = g180008530;
    }
    fun_180002794("invalid string position", "invalid string position", reinterpret_cast<unsigned char>(rdx27) - reinterpret_cast<unsigned char>(rax40), r8_15);
    goto addr_180002987_34;
    addr_1800027f9_7:
    if (reinterpret_cast<unsigned char>(rdi6) <= reinterpret_cast<unsigned char>(0xfffffffffffffffe)) {
        cf41 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(rdi6);
        if (!cf41) {
            if (rdi6) 
                goto addr_180002837_48;
            g180008540 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(g180008540) & reinterpret_cast<unsigned char>(rdi6));
            cf42 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
            if (cf42) {
                rax43 = reinterpret_cast<struct s0*>("invalid string position");
            } else {
                rax43 = g180008530;
            }
            *reinterpret_cast<struct s0**>(&rax43->f0) = reinterpret_cast<struct s0*>(0);
        } else {
            r8_44 = g180008540;
            fun_1800025b0("invalid string position", rdi6, r8_44);
        }
        if (!rdi6) {
            addr_180002878_55:
            goto v45;
        } else {
            addr_180002837_48:
            if (rsi2->f24 >= 16) {
                rsi2 = rsi2->f0;
            }
        }
        cf46 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf46) {
            rcx47 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rcx47 = g180008530;
        }
        if (rdi6) {
            fun_180002d6c(rcx47, reinterpret_cast<int64_t>(rsi2) + reinterpret_cast<uint64_t>(r8_48), rdi6);
        }
        cf49 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        g180008540 = rdi6;
        if (cf49) {
            rax50 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rax50 = g180008530;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax50) + reinterpret_cast<unsigned char>(rdi6)) = 0;
        goto addr_180002878_55;
    }
    addr_1800027cd_8:
    rax51 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdi6) + reinterpret_cast<uint64_t>(r8_52));
    cf53 = reinterpret_cast<unsigned char>(g180008540) < reinterpret_cast<unsigned char>(rax51);
    if (!cf53) {
        cf54 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        g180008540 = rax51;
        if (!cf54) {
            rcx1 = g180008530;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx1) + reinterpret_cast<unsigned char>(rax51)) = 0;
        fun_180002a4c("invalid string position", 0, r8_55, r9_56);
        goto addr_180002878_55;
    }
}

struct s0* fun_1800028a4(struct s0* rcx, struct s0* rdx, struct s0* r8, struct s0* r9);

struct s0* fun_180002a4c(struct s0* rcx, struct s0* rdx, struct s0* r8, struct s0* r9) {
    struct s0* rbx5;
    struct s0* rax6;
    struct s0* r8_7;
    struct s0* rdx8;
    struct s0* rax9;
    int64_t v10;
    struct s0* rdi11;
    int1_t cf12;
    struct s0* rax13;
    int1_t cf14;
    struct s0* rax15;

    if (reinterpret_cast<unsigned char>(rcx->f16) < reinterpret_cast<unsigned char>(rdx)) {
        fun_180002780();
        rbx5 = rdx;
        rax6 = fun_180002c48(r8);
        *reinterpret_cast<int32_t*>(&r8_7) = 0;
        *reinterpret_cast<int32_t*>(&r8_7 + 4) = 0;
        rbx5->f24 = reinterpret_cast<struct s0*>(15);
        rbx5->f16 = reinterpret_cast<struct s0*>(0);
        rdx8 = reinterpret_cast<struct s0*>("unknown error");
        *reinterpret_cast<struct s0**>(&rbx5->f0) = reinterpret_cast<struct s0*>(0);
        if (rax6) {
            rdx8 = rax6;
        }
        if (*reinterpret_cast<struct s0**>(&rdx8->f0)) {
            rax9 = reinterpret_cast<struct s0*>(0xffffffffffffffff);
            do {
                rax9 = reinterpret_cast<struct s0*>(&rax9->f1);
            } while (*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rdx8) + reinterpret_cast<unsigned char>(rax9)));
            r8_7 = rax9;
        }
        fun_1800028a4(rbx5, rdx8, r8_7, r9);
        goto v10;
    } else {
        if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rcx->f16) - reinterpret_cast<unsigned char>(rdx)) > reinterpret_cast<unsigned char>(r8)) {
            if (r8) {
                if (reinterpret_cast<unsigned char>(rcx->f24) < reinterpret_cast<unsigned char>(16)) {
                }
                rdi11 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rcx->f16) - reinterpret_cast<unsigned char>(r8));
                if (reinterpret_cast<unsigned char>(rdi11) - reinterpret_cast<unsigned char>(rdx)) {
                    fun_180002d36();
                }
                cf12 = reinterpret_cast<unsigned char>(rcx->f24) < reinterpret_cast<unsigned char>(16);
                rcx->f16 = rdi11;
                if (cf12) {
                    rax13 = rcx;
                } else {
                    rax13 = *reinterpret_cast<struct s0**>(&rcx->f0);
                }
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax13) + reinterpret_cast<unsigned char>(rdi11)) = 0;
            }
        } else {
            cf14 = reinterpret_cast<unsigned char>(rcx->f24) < reinterpret_cast<unsigned char>(16);
            rcx->f16 = rdx;
            if (cf14) {
                rax15 = rcx;
            } else {
                rax15 = *reinterpret_cast<struct s0**>(&rcx->f0);
            }
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax15) + reinterpret_cast<unsigned char>(rdx)) = 0;
        }
        return rcx;
    }
}

struct s0* fun_180002794(struct s0* rcx, struct s0* rdx, struct s0* r8, struct s0* r9) {
    struct s0* rsi5;
    struct s0* rbx6;
    struct s0* rdi7;
    struct s0* rbx8;
    struct s0* rax9;
    int32_t rax10;
    int64_t v11;
    struct s0* rax12;
    struct s0* rax13;
    struct s0* r8_14;
    struct s0* rcx15;
    int64_t v16;
    int1_t cf17;
    struct s0* rax18;
    struct s0* rax19;
    struct s0* rax20;
    struct s0* r8_21;
    struct s0* rcx22;
    int1_t cf23;
    struct s0* rax24;
    struct s0* rax25;
    int1_t cf26;

    rsi5 = rdx;
    rbx6 = rcx;
    if (reinterpret_cast<unsigned char>(rdx->f16) < reinterpret_cast<unsigned char>(r8)) {
        fun_180002780();
    } else {
        rdi7 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdx->f16) - reinterpret_cast<unsigned char>(r8));
        if (reinterpret_cast<unsigned char>(r9) < reinterpret_cast<unsigned char>(rdi7)) {
            rdi7 = r9;
        }
        if (rcx != rdx) 
            goto addr_1800027f9_6; else 
            goto addr_1800027cd_7;
    }
    fun_180002780();
    fun_180002724(rcx, rdx, r8, r9);
    rbx8 = rcx;
    if (!rdx) {
        addr_18000290d_11:
        if (reinterpret_cast<unsigned char>(r8) > reinterpret_cast<unsigned char>(0xfffffffffffffffe)) {
            fun_180002724(rbx8, rdx, r8, r9);
            rax9 = fun_180002c48(r8);
            *reinterpret_cast<struct s0**>(&rdx->f0) = r8;
            rax10 = reinterpret_cast<int32_t>(0x18000c000);
            if (!rax9) {
                rax10 = reinterpret_cast<int32_t>(0x18000c010);
            }
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rdx) + 8) = rax10;
            goto v11;
        }
    } else {
        if (reinterpret_cast<unsigned char>(rcx->f24) < reinterpret_cast<unsigned char>(16)) {
            rax12 = rbx8;
        } else {
            rax12 = *reinterpret_cast<struct s0**>(&rcx->f0);
        }
        if (reinterpret_cast<unsigned char>(rdx) < reinterpret_cast<unsigned char>(rax12)) 
            goto addr_18000290d_11; else 
            goto addr_1800028d5_19;
    }
    if (reinterpret_cast<unsigned char>(rbx8->f24) >= reinterpret_cast<unsigned char>(r8)) {
        if (r8) 
            goto addr_18000294e_22;
        rbx8->f16 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rbx8->f16) & reinterpret_cast<unsigned char>(r8));
        if (reinterpret_cast<unsigned char>(rbx8->f24) < reinterpret_cast<unsigned char>(16)) {
            rax13 = rbx8;
        } else {
            rax13 = *reinterpret_cast<struct s0**>(&rbx8->f0);
        }
        *reinterpret_cast<struct s0**>(&rax13->f0) = reinterpret_cast<struct s0*>(0);
    } else {
        r8_14 = rbx8->f16;
        fun_1800025b0(rbx8, r8, r8_14);
    }
    if (!r8) {
        addr_180002984_29:
    } else {
        addr_18000294e_22:
        if (reinterpret_cast<unsigned char>(rbx8->f24) < reinterpret_cast<unsigned char>(16)) {
            rcx15 = rbx8;
            goto addr_18000295d_31;
        } else {
            rcx15 = *reinterpret_cast<struct s0**>(&rbx8->f0);
            goto addr_18000295d_31;
        }
    }
    addr_180002987_33:
    goto v16;
    addr_18000295d_31:
    if (r8) {
        fun_180002d6c(rcx15, rdx, r8);
    }
    cf17 = reinterpret_cast<unsigned char>(rbx8->f24) < reinterpret_cast<unsigned char>(16);
    rbx8->f16 = r8;
    if (cf17) {
        rax18 = rbx8;
    } else {
        rax18 = *reinterpret_cast<struct s0**>(&rbx8->f0);
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax18) + reinterpret_cast<unsigned char>(r8)) = 0;
    goto addr_180002984_29;
    addr_1800028d5_19:
    if (reinterpret_cast<unsigned char>(rcx->f24) >= reinterpret_cast<unsigned char>(16)) {
        rcx = *reinterpret_cast<struct s0**>(&rcx->f0);
    }
    if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbx8->f16)) <= reinterpret_cast<unsigned char>(rdx)) 
        goto addr_18000290d_11;
    if (reinterpret_cast<unsigned char>(rbx8->f24) < reinterpret_cast<unsigned char>(16)) {
        rax19 = rbx8;
    } else {
        rax19 = *reinterpret_cast<struct s0**>(&rbx8->f0);
    }
    fun_180002794(rbx8, rbx8, reinterpret_cast<unsigned char>(rdx) - reinterpret_cast<unsigned char>(rax19), r8);
    goto addr_180002987_33;
    addr_1800027f9_6:
    if (reinterpret_cast<unsigned char>(rdi7) <= reinterpret_cast<unsigned char>(0xfffffffffffffffe)) {
        if (reinterpret_cast<unsigned char>(rcx->f24) >= reinterpret_cast<unsigned char>(rdi7)) {
            if (rdi7) 
                goto addr_180002837_47;
            rcx->f16 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rcx->f16) & reinterpret_cast<unsigned char>(rdi7));
            if (reinterpret_cast<unsigned char>(rcx->f24) < reinterpret_cast<unsigned char>(16)) {
                rax20 = rbx6;
            } else {
                rax20 = *reinterpret_cast<struct s0**>(&rcx->f0);
            }
            *reinterpret_cast<struct s0**>(&rax20->f0) = reinterpret_cast<struct s0*>(0);
        } else {
            r8_21 = rcx->f16;
            fun_1800025b0(rcx, rdi7, r8_21);
        }
        if (!rdi7) {
            addr_180002878_54:
            return rbx6;
        } else {
            addr_180002837_47:
            if (reinterpret_cast<unsigned char>(rsi5->f24) >= reinterpret_cast<unsigned char>(16)) {
                rsi5 = *reinterpret_cast<struct s0**>(&rsi5->f0);
            }
        }
        if (reinterpret_cast<unsigned char>(rbx6->f24) < reinterpret_cast<unsigned char>(16)) {
            rcx22 = rbx6;
        } else {
            rcx22 = *reinterpret_cast<struct s0**>(&rbx6->f0);
        }
        if (rdi7) {
            fun_180002d6c(rcx22, reinterpret_cast<unsigned char>(rsi5) + reinterpret_cast<unsigned char>(r8), rdi7);
        }
        cf23 = reinterpret_cast<unsigned char>(rbx6->f24) < reinterpret_cast<unsigned char>(16);
        rbx6->f16 = rdi7;
        if (cf23) {
            rax24 = rbx6;
        } else {
            rax24 = *reinterpret_cast<struct s0**>(&rbx6->f0);
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax24) + reinterpret_cast<unsigned char>(rdi7)) = 0;
        goto addr_180002878_54;
    }
    addr_1800027cd_7:
    rax25 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdi7) + reinterpret_cast<unsigned char>(r8));
    if (reinterpret_cast<unsigned char>(rcx->f16) >= reinterpret_cast<unsigned char>(rax25)) {
        cf26 = reinterpret_cast<unsigned char>(rcx->f24) < reinterpret_cast<unsigned char>(16);
        rcx->f16 = rax25;
        if (!cf26) {
            rcx = *reinterpret_cast<struct s0**>(&rcx->f0);
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rax25)) = 0;
        fun_180002a4c(rbx6, 0, r8, r9);
        goto addr_180002878_54;
    }
}

/*
 * ??0exception@@QEAA@AEBQEBD@Z
 * public: __cdecl exception::exception(char const * __ptr64 const & __ptr64) __ptr64
 */
int64_t _0exception_QEAA_AEBQEBD_Z = 0xb43e;

void fun_180002d3c() {
    goto _0exception_QEAA_AEBQEBD_Z;
}

struct s0* fun_1800028a4(struct s0* rcx, struct s0* rdx, struct s0* r8, struct s0* r9) {
    struct s0* rbx5;
    struct s0* rax6;
    int32_t rax7;
    int64_t v8;
    struct s0* rax9;
    struct s0* rax10;
    struct s0* r8_11;
    struct s0* rax12;
    struct s0* rcx13;
    int1_t cf14;
    struct s0* rax15;
    struct s0* rax16;

    rbx5 = rcx;
    if (!rdx) {
        addr_18000290d_2:
        if (reinterpret_cast<unsigned char>(r8) > reinterpret_cast<unsigned char>(0xfffffffffffffffe)) {
            fun_180002724(rbx5, rdx, r8, r9);
            rax6 = fun_180002c48(r8);
            *reinterpret_cast<struct s0**>(&rdx->f0) = r8;
            rax7 = reinterpret_cast<int32_t>(0x18000c000);
            if (!rax6) {
                rax7 = reinterpret_cast<int32_t>(0x18000c010);
            }
            *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rdx) + 8) = rax7;
            goto v8;
        }
    } else {
        if (reinterpret_cast<unsigned char>(rcx->f24) < reinterpret_cast<unsigned char>(16)) {
            rax9 = rbx5;
        } else {
            rax9 = *reinterpret_cast<struct s0**>(&rcx->f0);
        }
        if (reinterpret_cast<unsigned char>(rdx) < reinterpret_cast<unsigned char>(rax9)) 
            goto addr_18000290d_2; else 
            goto addr_1800028d5_10;
    }
    if (reinterpret_cast<unsigned char>(rbx5->f24) >= reinterpret_cast<unsigned char>(r8)) {
        if (r8) 
            goto addr_18000294e_13;
        rbx5->f16 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rbx5->f16) & reinterpret_cast<unsigned char>(r8));
        if (reinterpret_cast<unsigned char>(rbx5->f24) < reinterpret_cast<unsigned char>(16)) {
            rax10 = rbx5;
        } else {
            rax10 = *reinterpret_cast<struct s0**>(&rbx5->f0);
        }
        *reinterpret_cast<struct s0**>(&rax10->f0) = reinterpret_cast<struct s0*>(0);
    } else {
        r8_11 = rbx5->f16;
        fun_1800025b0(rbx5, r8, r8_11);
    }
    if (!r8) {
        addr_180002984_20:
        rax12 = rbx5;
    } else {
        addr_18000294e_13:
        if (reinterpret_cast<unsigned char>(rbx5->f24) < reinterpret_cast<unsigned char>(16)) {
            rcx13 = rbx5;
            goto addr_18000295d_22;
        } else {
            rcx13 = *reinterpret_cast<struct s0**>(&rbx5->f0);
            goto addr_18000295d_22;
        }
    }
    addr_180002987_24:
    return rax12;
    addr_18000295d_22:
    if (r8) {
        fun_180002d6c(rcx13, rdx, r8);
    }
    cf14 = reinterpret_cast<unsigned char>(rbx5->f24) < reinterpret_cast<unsigned char>(16);
    rbx5->f16 = r8;
    if (cf14) {
        rax15 = rbx5;
    } else {
        rax15 = *reinterpret_cast<struct s0**>(&rbx5->f0);
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax15) + reinterpret_cast<unsigned char>(r8)) = 0;
    goto addr_180002984_20;
    addr_1800028d5_10:
    if (reinterpret_cast<unsigned char>(rcx->f24) >= reinterpret_cast<unsigned char>(16)) {
        rcx = *reinterpret_cast<struct s0**>(&rcx->f0);
    }
    if (reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(rcx) + reinterpret_cast<unsigned char>(rbx5->f16)) <= reinterpret_cast<unsigned char>(rdx)) 
        goto addr_18000290d_2;
    if (reinterpret_cast<unsigned char>(rbx5->f24) < reinterpret_cast<unsigned char>(16)) {
        rax16 = rbx5;
    } else {
        rax16 = *reinterpret_cast<struct s0**>(&rbx5->f0);
    }
    rax12 = fun_180002794(rbx5, rbx5, reinterpret_cast<unsigned char>(rdx) - reinterpret_cast<unsigned char>(rax16), r8);
    goto addr_180002987_24;
}

int64_t g180007158 = 0x1800088d8;

struct s26 {
    struct s0* f0;
    signed char[7] pad8;
    struct s0* f8;
};

struct s0* fun_180002c48(struct s0* ecx) {
    int1_t zf2;
    struct s26* rax3;

    zf2 = g180007158 == 0;
    rax3 = reinterpret_cast<struct s26*>("f");
    if (zf2) {
        addr_180002c68_2:
        return 0;
    } else {
        do {
            if (rax3->f0 == ecx) 
                break;
            rax3 = reinterpret_cast<struct s26*>(reinterpret_cast<int64_t>(rax3) + 16);
        } while (rax3->f8);
        goto addr_180002c68_2;
    }
    return rax3->f8;
}

int64_t g180007648 = 0x180008de8;

struct s27 {
    int32_t f0;
    signed char[4] pad8;
    struct s0* f8;
};

struct s0* fun_180002c70(int32_t ecx) {
    int1_t zf2;
    struct s27* rax3;

    zf2 = g180007648 == 0;
    rax3 = reinterpret_cast<struct s27*>(0x180007640);
    if (zf2) {
        addr_180002c90_2:
        return 0;
    } else {
        do {
            if (rax3->f0 == ecx) 
                break;
            rax3 = reinterpret_cast<struct s27*>(reinterpret_cast<int64_t>(rax3) + 16);
        } while (rax3->f8);
        goto addr_180002c90_2;
    }
    return rax3->f8;
}

int64_t EtwUnregisterTraceGuids = 0xb3f8;

void fun_180001550() {
    struct s5* rbx1;

    rbx1 = g18000c018;
    if (rbx1 != 0x18000c018) {
        if (rbx1) {
            do {
                if (rbx1->f8) {
                    EtwUnregisterTraceGuids();
                    rbx1->f8 = 0;
                }
                rbx1 = rbx1->f0;
            } while (rbx1);
        }
        g18000c018 = reinterpret_cast<struct s5*>(0x18000c018);
    }
    return;
}

void fun_180001c30(int64_t rcx, int64_t rdx) {
    goto _3_YAXPEAX_Z;
}

uint64_t fun_180002ff0() {
    void* r10_1;
    uint64_t r10_2;
    int64_t rax3;
    void* rax4;
    uint64_t r11_5;
    uint64_t rax6;

    r10_1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 16 + 24);
    r10_2 = reinterpret_cast<uint64_t>(r10_1) - rax3;
    if (reinterpret_cast<uint64_t>(r10_1) < reinterpret_cast<uint64_t>(rax4)) {
        r10_2 = 0;
    }
    r11_5 = g10;
    if (r10_2 < r11_5) {
        *reinterpret_cast<uint16_t*>(&r10_2) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_2) & 0xf000);
        do {
            r11_5 = r11_5 - 0x1000;
        } while (r10_2 != r11_5);
    }
    return rax6;
}

void fun_180001eb0(int64_t rcx) {
    return;
}

int64_t memset = 0xb5fa;

void fun_180002fb0(struct s0** rcx) {
    goto memset;
}

struct s28 {
    signed char[32] pad32;
    struct s0* f32;
    signed char[7] pad40;
    struct s0* f40;
    signed char[7] pad48;
    struct s0* f48;
    signed char[1535] pad1584;
    struct s0* f1584;
    signed char[1535] pad3120;
    struct s0* f3120;
    signed char[1535] pad4656;
    uint64_t f4656;
    signed char[56] pad4720;
    int64_t f4720;
    signed char[16] pad4744;
    int64_t f4744;
};

struct s29 {
    signed char[1] pad1;
    struct s0* f1;
};

uint32_t fun_180003e40(struct s12* rcx, struct s0* rdx, struct s0* r8, struct s0* r9) {
    uint64_t rax5;
    struct s28* rsp6;
    uint64_t rax7;
    struct s0* r15_8;
    struct s0* r14_9;
    struct s0* rdi10;
    void** rcx11;
    int64_t rbp12;
    int64_t rsi13;
    int64_t* rsp14;
    struct s28* rsp15;
    void** rcx16;
    int64_t* rsp17;
    struct s28* rsp18;
    struct s0* rdx19;
    int32_t rdx20;
    int64_t* rsp21;
    uint32_t eax22;
    struct s28* rsp23;
    struct s29* rbp24;
    struct s0* rsi25;
    void** rcx26;
    int64_t* rsp27;
    struct s28* rsp28;
    struct s0* rax29;
    struct s29* rbx30;
    struct s0* rbx31;
    int64_t* rsp32;
    struct s0* rax33;
    int64_t* rsp34;
    struct s28* rsp35;
    uint64_t rcx36;
    int64_t* rsp37;
    int32_t rdx38;
    int64_t* rsp39;
    uint32_t eax40;
    struct s28* rsp41;
    struct s0* r14_42;
    void** rcx43;
    int64_t* rsp44;
    struct s28* rsp45;
    struct s0* rax46;
    struct s29* rbx47;
    struct s0* rbx48;
    int64_t* rsp49;
    struct s0* rax50;
    struct s29* rax51;
    struct s29* rcx52;
    void* rax53;
    struct s0* rdx54;
    struct s29* rcx55;
    void* rax56;
    struct s0* rcx57;
    struct s0* rbp58;
    int64_t* rsp59;
    struct s0* rax60;
    int64_t* rsp61;
    int32_t eax62;
    int64_t* rsp63;
    int64_t rax64;
    int64_t* rsp65;
    int64_t rax66;
    int64_t* rsp67;
    int64_t rax68;
    int64_t* rsp69;
    int64_t* rsp70;
    int64_t* rsp71;
    int64_t* rsp72;

    rax5 = fun_180002ff0();
    rsp6 = reinterpret_cast<struct s28*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 + 8 - rax5);
    rax7 = g18000c0e8;
    rsp6->f4656 = rax7 ^ reinterpret_cast<uint64_t>(rsp6);
    r15_8 = r8;
    rsp6->f40 = reinterpret_cast<struct s0*>(0);
    r14_9 = rdx;
    rsp6->f32 = reinterpret_cast<struct s0*>(0);
    *reinterpret_cast<int32_t*>(&rdi10) = 0;
    *reinterpret_cast<int32_t*>(&rdi10 + 4) = 0;
    if (!(!rdx || !r15_8)) {
        rcx11 = g18000c720;
        *reinterpret_cast<struct s0**>(&r8->f0) = reinterpret_cast<struct s0*>(0);
        rsp6->f4720 = rbp12;
        rsp6->f4744 = rsi13;
        rsp14 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp6) - 8);
        *rsp14 = 0x180003ec5;
        LoadStringW(rcx11, 0x191, &rsp6->f1584, 0x300);
        rsp15 = reinterpret_cast<struct s28*>(rsp14 + 1);
        rcx16 = g18000c720;
        r8 = reinterpret_cast<struct s0*>(&rsp15->f3120);
        *reinterpret_cast<int32_t*>(&r9) = 0x300;
        *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
        rsp17 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp15) - 8);
        *rsp17 = 0x180003ee5;
        LoadStringW(rcx16, 0x192, r8, 0x300);
        rsp18 = reinterpret_cast<struct s28*>(rsp17 + 1);
        rdx19 = r14_9->f24;
        *reinterpret_cast<struct s0**>(&rsp18->f48) = reinterpret_cast<struct s0*>(0);
        rdx20 = rdx19->f64;
        rsp21 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp18) - 8);
        *rsp21 = 0x180003efd;
        eax22 = fun_1800048e0(&rsp18->f32, rdx20, r8, 0x300);
        rsp23 = reinterpret_cast<struct s28*>(rsp21 + 1);
        rbp24 = reinterpret_cast<struct s29*>(0xffffffffffffffff);
        if (eax22) {
            rsi25 = rsp23->f32;
            goto addr_180003f69_5;
        } else {
            rcx26 = g18000c720;
            r8 = reinterpret_cast<struct s0*>(&rsp23->f48);
            *reinterpret_cast<int32_t*>(&r9) = 0x300;
            *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
            *reinterpret_cast<int32_t*>(&rdx) = 0x194;
            *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
            rsp27 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp23) - 8);
            *rsp27 = 0x180003f22;
            LoadStringW(rcx26, 0x194, r8, 0x300);
            rsp28 = reinterpret_cast<struct s28*>(rsp27 + 1);
            rax29 = reinterpret_cast<struct s0*>(&rsp28->f48);
            rbx30 = reinterpret_cast<struct s29*>(0xffffffffffffffff);
            do {
                rbx30 = reinterpret_cast<struct s29*>(&rbx30->f1);
            } while (*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax29) + reinterpret_cast<uint64_t>(rbx30) * 2));
            rbx31 = reinterpret_cast<struct s0*>(&rbx30->f1);
            rsp32 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp28) - 8);
            *rsp32 = 0x180003f40;
            rax33 = reinterpret_cast<struct s0*>(malloc(reinterpret_cast<unsigned char>(rbx31) + reinterpret_cast<unsigned char>(rbx31), 0x194, r8, 0x300));
            rsp6 = reinterpret_cast<struct s28*>(rsp32 + 1);
            rsi25 = rax33;
            if (rax33) 
                goto addr_180003f52_9; else 
                goto addr_180003f48_10;
        }
    }
    addr_1800040da_11:
    rsp34 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp6) - 8);
    *rsp34 = 0x1800040e3;
    OLEAUT32_dll_6(rdi10, rdx, r8, r9);
    rsp35 = reinterpret_cast<struct s28*>(rsp34 + 1);
    rcx36 = rsp35->f4656 ^ reinterpret_cast<uint64_t>(rsp35);
    rsp37 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp35) - 8);
    *rsp37 = 0x1800040f5;
    fun_180001bf0(rcx36, rdx, r8, rcx36, rdx, r8);
    goto (rsp37 + 1 + 0x248 + 1 + 1 + 1 + 1)[1];
    addr_180003f69_5:
    rdx38 = r14_9->f24->f72;
    rsp39 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp23) - 8);
    *rsp39 = 0x180003f7b;
    eax40 = fun_1800048e0(&rsp23->f40, rdx38, r8, 0x300);
    rsp41 = reinterpret_cast<struct s28*>(rsp39 + 1);
    if (eax40) {
        r14_42 = rsp41->f40;
    } else {
        rcx43 = g18000c720;
        r8 = reinterpret_cast<struct s0*>(&rsp41->f48);
        *reinterpret_cast<int32_t*>(&r9) = 0x300;
        *reinterpret_cast<int32_t*>(&r9 + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx) = 0x194;
        *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
        rsp44 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp41) - 8);
        *rsp44 = 0x180003f9c;
        LoadStringW(rcx43, 0x194, r8, 0x300);
        rsp45 = reinterpret_cast<struct s28*>(rsp44 + 1);
        rax46 = reinterpret_cast<struct s0*>(&rsp45->f48);
        rbx47 = reinterpret_cast<struct s29*>(0xffffffffffffffff);
        do {
            rbx47 = reinterpret_cast<struct s29*>(&rbx47->f1);
        } while (*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rax46) + reinterpret_cast<uint64_t>(rbx47) * 2));
        rbx48 = reinterpret_cast<struct s0*>(&rbx47->f1);
        rsp49 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp45) - 8);
        *rsp49 = 0x180003fba;
        rax50 = reinterpret_cast<struct s0*>(malloc(reinterpret_cast<unsigned char>(rbx48) + reinterpret_cast<unsigned char>(rbx48), 0x194, r8, 0x300));
        rsp6 = reinterpret_cast<struct s28*>(rsp49 + 1);
        r14_42 = rax50;
        if (rsi25) 
            goto addr_180003fcc_16; else 
            goto addr_180003fc2_17;
    }
    addr_180003fe3_18:
    rax51 = reinterpret_cast<struct s29*>(0xffffffffffffffff);
    do {
        rax51 = reinterpret_cast<struct s29*>(&rax51->f1);
    } while (*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rsi25) + reinterpret_cast<uint64_t>(rax51) * 2));
    rcx52 = reinterpret_cast<struct s29*>(0xffffffffffffffff);
    do {
        rcx52 = reinterpret_cast<struct s29*>(&rcx52->f1);
    } while (*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(r14_42) + reinterpret_cast<uint64_t>(rcx52) * 2));
    rax53 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax51) + reinterpret_cast<uint64_t>(rcx52));
    rdx54 = reinterpret_cast<struct s0*>(&rsp41->f3120);
    rcx55 = reinterpret_cast<struct s29*>(0xffffffffffffffff);
    do {
        rcx55 = reinterpret_cast<struct s29*>(&rcx55->f1);
    } while (*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rdx54) + reinterpret_cast<uint64_t>(rcx55) * 2));
    rax56 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax53) + reinterpret_cast<uint64_t>(rcx55));
    rcx57 = reinterpret_cast<struct s0*>(&rsp41->f1584);
    do {
        rbp24 = reinterpret_cast<struct s29*>(&rbp24->f1);
    } while (*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rcx57) + reinterpret_cast<uint64_t>(rbp24) * 2));
    rbp58 = reinterpret_cast<struct s0*>((reinterpret_cast<uint64_t>(rax56) + reinterpret_cast<uint64_t>(rbp24)) * 2 + 4);
    *reinterpret_cast<int32_t*>(&rdx) = *reinterpret_cast<int32_t*>(&rbp58);
    *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
    rsp59 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp41) - 8);
    *rsp59 = 0x18000403c;
    rax60 = reinterpret_cast<struct s0*>(OLEAUT32_dll_4());
    rsp6 = reinterpret_cast<struct s28*>(rsp59 + 1);
    rdi10 = rax60;
    if (rax60) {
        r8 = reinterpret_cast<struct s0*>(&rsp6->f1584);
        rdx = rbp58;
        rsp61 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp6) - 8);
        *rsp61 = 0x18000405e;
        eax62 = fun_180003be4(rdi10, rdx, r8, 0x300);
        rsp6 = reinterpret_cast<struct s28*>(rsp61 + 1);
        if (!eax62 && ((r8 = rsi25, rdx = rbp58, rsp63 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp6) - 8), *rsp63 = 0x180004072, rax64 = fun_180003b74(rdi10, rdx, r8, 0x300), rsp6 = reinterpret_cast<struct s28*>(rsp63 + 1), !*reinterpret_cast<int32_t*>(&rax64)) && ((r8 = reinterpret_cast<struct s0*>(&rsp6->f3120), rdx = rbp58, rsp65 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp6) - 8), *rsp65 = 0x18000408b, rax66 = fun_180003b74(rdi10, rdx, r8, 0x300), rsp6 = reinterpret_cast<struct s28*>(rsp65 + 1), !*reinterpret_cast<int32_t*>(&rax66)) && (r8 = r14_42, rdx = rbp58, rsp67 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp6) - 8), *rsp67 = 0x18000409f, rax68 = fun_180003b74(rdi10, rdx, r8, 0x300), rsp6 = reinterpret_cast<struct s28*>(rsp67 + 1), !*reinterpret_cast<int32_t*>(&rax68))))) {
            *reinterpret_cast<struct s0**>(&r15_8->f0) = rdi10;
            rdi10 = reinterpret_cast<struct s0*>(0);
        }
    }
    if (rsi25) {
        rsp69 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp6) - 8);
        *rsp69 = 0x1800040bc;
        free(rsi25, rdx, r8, 0x300);
        rsp6 = reinterpret_cast<struct s28*>(rsp69 + 1);
    }
    addr_1800040bc_32:
    if (r14_42) {
        rsp70 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp6) - 8);
        *rsp70 = 0x1800040ca;
        free(r14_42, rdx, r8, 0x300);
        rsp6 = reinterpret_cast<struct s28*>(rsp70 + 1);
    }
    addr_1800040ca_34:
    goto addr_1800040da_11;
    addr_180003fcc_16:
    r8 = reinterpret_cast<struct s0*>(&rsp6->f48);
    rsp71 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp6) - 8);
    *rsp71 = 0x180003fdc;
    fun_180003be4(rax50, rbx48, r8, 0x300);
    rsp41 = reinterpret_cast<struct s28*>(rsp71 + 1);
    goto addr_180003fe3_18;
    addr_180003fc2_17:
    goto addr_1800040bc_32;
    addr_180003f52_9:
    r8 = reinterpret_cast<struct s0*>(&rsp6->f48);
    rsp72 = reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(rsp6) - 8);
    *rsp72 = 0x180003f62;
    fun_180003be4(rax33, rbx31, r8, 0x300);
    rsp23 = reinterpret_cast<struct s28*>(rsp72 + 1);
    goto addr_180003f69_5;
    addr_180003f48_10:
    goto addr_1800040ca_34;
}

int64_t GetEnvironmentVariableW = 0xb03a;

int64_t CreateFileW = 0xb054;

int64_t GetFileSize = 0xb062;

uint32_t fun_1800059b4(struct s0* rcx) {
    void* rsp2;
    uint64_t rax3;
    uint64_t v4;
    struct s0* rbx5;
    struct s0* rsi6;
    struct s0* r9_7;
    void* rsp8;
    void* rsp9;
    struct s0* r8_10;
    struct s0* rdx11;
    int32_t eax12;
    void* rsp13;
    struct s0* r9_14;
    int32_t eax15;
    uint64_t rcx16;
    uint32_t eax17;
    uint64_t rax18;
    int16_t v19;
    int1_t zf20;
    struct s0* r9_21;
    int64_t rax22;
    int64_t rax23;
    int64_t rdi24;
    uint32_t eax25;
    void* rsp26;
    void* rax27;
    uint64_t r8_28;
    int16_t* rax29;
    void* rcx30;
    uint32_t r10d31;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 0x470);
    rax3 = g18000c0e8;
    v4 = rax3 ^ reinterpret_cast<uint64_t>(rsp2);
    rbx5 = rcx;
    rsi6 = r9_7;
    fun_180002fb0(reinterpret_cast<uint64_t>(rsp2) + 64);
    rsp8 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp2) - 8 + 8);
    fun_180002fb0(reinterpret_cast<uint64_t>(rsp8) + 0x250);
    rsp9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp8) - 8 + 8);
    *reinterpret_cast<int32_t*>(&r8_10) = 0x105;
    *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
    rdx11 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp9) + 0x250);
    eax12 = reinterpret_cast<int32_t>(GetEnvironmentVariableW("A", rdx11, 0x105));
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp9) - 8 + 8);
    if (reinterpret_cast<uint32_t>(eax12 - 1) > 0x104) {
        goto addr_180005b4a_3;
    }
    r8_10 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp13) + 0x250);
    *reinterpret_cast<int32_t*>(&rdx11) = 0x105;
    *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0;
    eax15 = fun_180003be4(reinterpret_cast<uint64_t>(rsp13) + 64, 0x105, r8_10, r9_14);
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp13) - 8 + 8);
    if (eax15) {
        addr_180005b4a_3:
        rcx16 = v4 ^ reinterpret_cast<uint64_t>(rsp13);
        eax17 = fun_180001bf0(rcx16, rdx11, r8_10, rcx16, rdx11, r8_10);
        return eax17;
    } else {
        *reinterpret_cast<int32_t*>(&rax18) = 0x105;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0;
        do {
            if (!v19) 
                break;
            --rax18;
        } while (rax18);
        *reinterpret_cast<int32_t*>(&rdx11) = 0x80070057;
        *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0;
        zf20 = rax18 == 0;
        if (zf20) 
            goto addr_180005a76_9;
    }
    *reinterpret_cast<int32_t*>(&rdx11) = 0;
    *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0;
    addr_180005a76_9:
    if (zf20) {
        r8_10 = reinterpret_cast<struct s0*>(0);
    } else {
        r8_10 = reinterpret_cast<struct s0*>(0x105 - rax18);
    }
    if (!rax18) {
        addr_180005ae8_14:
        if (!*reinterpret_cast<int32_t*>(&rdx11)) {
            r8_10 = rbx5;
            *reinterpret_cast<int32_t*>(&rdx11) = 0x105;
            *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0;
            rax22 = fun_180003b74(reinterpret_cast<uint64_t>(rsp13) + 64, 0x105, r8_10, r9_21);
            rsp13 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp13) - 8 + 8);
            if (!*reinterpret_cast<int32_t*>(&rax22)) {
                *reinterpret_cast<int32_t*>(&r8_10) = static_cast<int32_t>(rax22 + 1);
                *reinterpret_cast<int32_t*>(&r8_10 + 4) = 0;
                *reinterpret_cast<int32_t*>(&rdx11) = 0x80000000;
                *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0;
                rax23 = reinterpret_cast<int64_t>(CreateFileW(reinterpret_cast<uint64_t>(rsp13) + 64, 0x80000000));
                rsp13 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp13) - 8 + 8);
                rdi24 = rax23;
                if (rax23 != -1) {
                    *reinterpret_cast<int32_t*>(&rdx11) = 0;
                    *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0;
                    eax25 = reinterpret_cast<uint32_t>(GetFileSize(rdi24));
                    rsp26 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp13) - 8 + 8);
                    if (eax25 < 0xf4240) {
                        if (rsi6) {
                            rax27 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp26) + 64);
                            r8_28 = 0xffffffffffffffff;
                            do {
                                ++r8_28;
                            } while (*reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rax27) + r8_28 * 2 + 2));
                            r8_10 = reinterpret_cast<struct s0*>(r8_28 * 2 + 2);
                            rdx11 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsp26) + 64);
                            fun_180002d6c(rsi6, rdx11, r8_10, rsi6, rdx11, r8_10);
                            rsp26 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp26) - 8 + 8);
                        }
                    }
                    CloseHandle(rdi24, rdx11, r8_10);
                    rsp13 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsp26) - 8 + 8);
                }
            }
        }
    } else {
        rax29 = reinterpret_cast<int16_t*>(reinterpret_cast<uint64_t>(rsp13) + 64 + reinterpret_cast<unsigned char>(r8_10) * 2);
        *reinterpret_cast<int32_t*>(&rdx11) = 0;
        *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0;
        rcx30 = reinterpret_cast<void*>(0x105 - reinterpret_cast<unsigned char>(r8_10));
        if (!rcx30) 
            goto addr_180005adc_27;
        r9_21 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r8_10) + 0x7ffffef9 + reinterpret_cast<uint64_t>(rcx30));
        r8_10 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>("\\") - reinterpret_cast<uint64_t>(rax29));
        do {
            if (!r9_21) 
                goto addr_180005ad7_30;
            r10d31 = *reinterpret_cast<uint16_t*>(reinterpret_cast<unsigned char>(r8_10) + reinterpret_cast<uint64_t>(rax29));
            if (!*reinterpret_cast<int16_t*>(&r10d31)) 
                goto addr_180005ad7_30;
            *rax29 = *reinterpret_cast<int16_t*>(&r10d31);
            r9_21 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(r9_21) - 1);
            ++rax29;
            rcx30 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx30) - 1);
        } while (rcx30);
        goto addr_180005ad5_33;
    }
    goto addr_180005b4a_3;
    addr_180005ad7_30:
    if (rcx30) {
        addr_180005ae5_35:
        *rax29 = 0;
        goto addr_180005ae8_14;
    } else {
        addr_180005adc_27:
        --rax29;
        *reinterpret_cast<int32_t*>(&rdx11) = 0x8007007a;
        *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0;
        goto addr_180005ae5_35;
    }
    addr_180005ad5_33:
    goto addr_180005adc_27;
}

uint32_t fun_180005da4(int64_t rcx, int64_t* rdx, void* r8) {
    void* rsp4;
    int64_t r8_5;
    void* r9_6;
    int32_t eax7;
    int64_t rax8;
    int32_t eax9;
    uint32_t eax10;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32);
    *reinterpret_cast<int32_t*>(&r8_5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_5) + 4) = 0;
    *rdx = 0;
    r9_6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) + 56);
    eax7 = reinterpret_cast<int32_t>(CertGetCertificateContextProperty());
    if (!eax7) 
        goto addr_180005dd9_2;
    rax8 = reinterpret_cast<int64_t>(LocalAlloc());
    *rdx = rax8;
    if (rax8) {
        r9_6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - 8 + 8 + 56);
        r8_5 = rax8;
        rcx = rcx;
        eax9 = reinterpret_cast<int32_t>(CertGetCertificateContextProperty(rcx, 2, r8_5, r9_6));
        if (!eax9) {
            addr_180005dd9_2:
            eax10 = reinterpret_cast<uint32_t>(GetLastError(rcx, 2, r8_5, r9_6));
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax10) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax10 == 0))) {
                eax10 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax10)) | 0x80070000;
            }
        } else {
            eax10 = 0;
        }
    } else {
        eax10 = 0x8007000e;
    }
    return eax10;
}

struct s30 {
    int64_t f0;
    int64_t f8;
    signed char f16;
};

int64_t HeapDestroy = 0xb568;

void fun_1800016a4(struct s30* rcx) {
    int1_t zf2;

    zf2 = rcx->f16 == 0;
    rcx->f0 = 0x180007b40;
    if (zf2 || !rcx->f8) {
        return;
    } else {
        goto HeapDestroy;
    }
}

/*
 * ??0exception@@QEAA@AEBQEBDH@Z
 * public: __cdecl exception::exception(char const * __ptr64 const & __ptr64,int) __ptr64
 */
int64_t _0exception_QEAA_AEBQEBDH_Z = 0xb45e;

void fun_180002d42() {
    goto _0exception_QEAA_AEBQEBDH_Z;
}

int64_t* fun_1800024c0(int64_t* rcx, struct s0* rdx) {
    fun_180002d3c();
    *rcx = 0x180007078;
    return rcx;
}

void fun_180002724(struct s0* rcx, struct s0* rdx, struct s0* r8, struct s0* r9) {
    void* rsp5;
    void* rsp6;
    struct s0* rcx7;
    struct s0* rdi8;
    struct s0* rsi9;
    struct s0* rax10;
    int64_t rax11;
    int64_t v12;
    int1_t cf13;
    struct s0* rax14;
    int1_t cf15;
    int1_t cf16;
    struct s0* rax17;
    struct s0* r8_18;
    int1_t cf19;
    struct s0* rcx20;
    int64_t v21;
    int1_t cf22;
    struct s0* rax23;
    int1_t cf24;
    struct s0* tmp64_25;
    int1_t cf26;
    struct s0* rax27;
    int1_t cf28;
    int1_t cf29;
    struct s0* rax30;
    struct s0* r8_31;
    int64_t v32;
    int1_t cf33;
    int1_t cf34;
    struct s0* rcx35;
    int1_t cf36;
    struct s0* rax37;
    struct s0* rax38;
    int1_t cf39;
    int1_t cf40;

    fun_180002738("string too long", rdx, r8, r9);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 40 - 8 + 8 - 72);
    fun_1800024c0(reinterpret_cast<int64_t>(rsp5) + 32, "string too long");
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    fun_180002d66();
    fun_1800024c0(reinterpret_cast<int64_t>(rsp6) - 8 + 8 - 72 + 32, reinterpret_cast<int64_t>(rsp6) + 32);
    fun_180002d66();
    rcx7 = reinterpret_cast<struct s0*>("invalid string position");
    fun_18000275c("invalid string position");
    rdi8 = g18000a350;
    rsi9 = reinterpret_cast<struct s0*>(0x18000a340);
    if (reinterpret_cast<unsigned char>(rdi8) < reinterpret_cast<unsigned char>(r8)) {
        fun_180002780();
    } else {
        rdi8 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdi8) - reinterpret_cast<unsigned char>(r8));
        if (reinterpret_cast<unsigned char>(r9) < reinterpret_cast<unsigned char>(rdi8)) {
            rdi8 = r9;
        }
        if (1) 
            goto addr_1800027f9_10; else 
            goto addr_1800027cd_11;
    }
    fun_180002780();
    fun_180002724("invalid string position", 0x18000a340, r8, r9);
    if (0) {
        addr_18000290d_15:
        if (reinterpret_cast<unsigned char>(r8) > reinterpret_cast<unsigned char>(0xfffffffffffffffe)) {
            fun_180002724("invalid string position", 0x18000a340, r8, r9);
            rax10 = fun_180002c48(r8);
            g18000a340 = r8;
            rax11 = 0x18000c000;
            if (!rax10) {
                rax11 = 0x18000c010;
            }
            g18000a348 = rax11;
            goto v12;
        }
    } else {
        cf13 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf13) {
            rax14 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rax14 = g180008530;
        }
        if (reinterpret_cast<unsigned char>(0x18000a340) < reinterpret_cast<unsigned char>(rax14)) 
            goto addr_18000290d_15; else 
            goto addr_1800028d5_23;
    }
    cf15 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(r8);
    if (!cf15) {
        if (r8) 
            goto addr_18000294e_26;
        g180008540 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(g180008540) & reinterpret_cast<unsigned char>(r8));
        cf16 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf16) {
            rax17 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rax17 = g180008530;
        }
        *reinterpret_cast<struct s0**>(&rax17->f0) = reinterpret_cast<struct s0*>(0);
    } else {
        r8_18 = g180008540;
        fun_1800025b0("invalid string position", r8, r8_18);
    }
    if (!r8) {
        addr_180002984_33:
    } else {
        addr_18000294e_26:
        cf19 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf19) {
            rcx20 = reinterpret_cast<struct s0*>("invalid string position");
            goto addr_18000295d_35;
        } else {
            rcx20 = g180008530;
            goto addr_18000295d_35;
        }
    }
    addr_180002987_37:
    goto v21;
    addr_18000295d_35:
    if (r8) {
        fun_180002d6c(rcx20, 0x18000a340, r8);
    }
    cf22 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
    g180008540 = r8;
    if (cf22) {
        rax23 = reinterpret_cast<struct s0*>("invalid string position");
    } else {
        rax23 = g180008530;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax23) + reinterpret_cast<unsigned char>(r8)) = 0;
    goto addr_180002984_33;
    addr_1800028d5_23:
    cf24 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
    if (!cf24) {
        rcx7 = g180008530;
    }
    tmp64_25 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rcx7) + reinterpret_cast<unsigned char>(g180008540));
    if (reinterpret_cast<unsigned char>(tmp64_25) <= reinterpret_cast<unsigned char>(0x18000a340)) 
        goto addr_18000290d_15;
    cf26 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
    if (cf26) {
        rax27 = reinterpret_cast<struct s0*>("invalid string position");
    } else {
        rax27 = g180008530;
    }
    fun_180002794("invalid string position", "invalid string position", reinterpret_cast<unsigned char>(0x18000a340) - reinterpret_cast<unsigned char>(rax27), r8);
    goto addr_180002987_37;
    addr_1800027f9_10:
    if (reinterpret_cast<unsigned char>(rdi8) <= reinterpret_cast<unsigned char>(0xfffffffffffffffe)) {
        cf28 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(rdi8);
        if (!cf28) {
            if (rdi8) 
                goto addr_180002837_51;
            g180008540 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(g180008540) & reinterpret_cast<unsigned char>(rdi8));
            cf29 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
            if (cf29) {
                rax30 = reinterpret_cast<struct s0*>("invalid string position");
            } else {
                rax30 = g180008530;
            }
            *reinterpret_cast<struct s0**>(&rax30->f0) = reinterpret_cast<struct s0*>(0);
        } else {
            r8_31 = g180008540;
            fun_1800025b0("invalid string position", rdi8, r8_31);
        }
        if (!rdi8) {
            addr_180002878_58:
            goto v32;
        } else {
            addr_180002837_51:
            cf33 = g18000a358 < 16;
            if (!cf33) {
                rsi9 = g18000a340;
            }
        }
        cf34 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf34) {
            rcx35 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rcx35 = g180008530;
        }
        if (rdi8) {
            fun_180002d6c(rcx35, reinterpret_cast<unsigned char>(rsi9) + reinterpret_cast<unsigned char>(r8), rdi8);
        }
        cf36 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        g180008540 = rdi8;
        if (cf36) {
            rax37 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rax37 = g180008530;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax37) + reinterpret_cast<unsigned char>(rdi8)) = 0;
        goto addr_180002878_58;
    }
    addr_1800027cd_11:
    rax38 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdi8) + reinterpret_cast<unsigned char>(r8));
    cf39 = reinterpret_cast<unsigned char>(g180008540) < reinterpret_cast<unsigned char>(rax38);
    if (!cf39) {
        cf40 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        g180008540 = rax38;
        if (!cf40) {
            rcx7 = g180008530;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx7) + reinterpret_cast<unsigned char>(rax38)) = 0;
        fun_180002a4c("invalid string position", 0, r8, r9);
        goto addr_180002878_58;
    }
}

void fun_18000275c(struct s0* rcx) {
    struct s0* rcx2;
    struct s0* rdi3;
    struct s0* rsi4;
    struct s0* r8_5;
    uint64_t r8_6;
    struct s0* r9_7;
    struct s0* r9_8;
    struct s0* r8_9;
    struct s0* r9_10;
    struct s0* r8_11;
    struct s0* r8_12;
    struct s0* r9_13;
    struct s0* r8d14;
    struct s0* rax15;
    struct s0* r8d16;
    int64_t rax17;
    int64_t v18;
    int1_t cf19;
    struct s0* rax20;
    int1_t cf21;
    int1_t cf22;
    struct s0* rax23;
    struct s0* r8_24;
    int1_t cf25;
    struct s0* rcx26;
    int64_t v27;
    int1_t cf28;
    struct s0* rax29;
    int1_t cf30;
    struct s0* tmp64_31;
    int1_t cf32;
    struct s0* rax33;
    int1_t cf34;
    int1_t cf35;
    struct s0* rax36;
    struct s0* r8_37;
    int64_t v38;
    int1_t cf39;
    int1_t cf40;
    struct s0* rcx41;
    void* r8_42;
    int1_t cf43;
    struct s0* rax44;
    struct s0* rax45;
    void* r8_46;
    int1_t cf47;
    int1_t cf48;
    struct s0* r8_49;
    struct s0* r9_50;

    fun_1800024c0(reinterpret_cast<int64_t>(__zero_stack_offset()) - 72 + 32, rcx);
    fun_180002d66();
    rcx2 = reinterpret_cast<struct s0*>("invalid string position");
    fun_18000275c("invalid string position");
    rdi3 = g18000a350;
    rsi4 = reinterpret_cast<struct s0*>(0x18000a340);
    if (reinterpret_cast<unsigned char>(rdi3) < reinterpret_cast<unsigned char>(r8_5)) {
        fun_180002780();
    } else {
        rdi3 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdi3) - r8_6);
        if (reinterpret_cast<unsigned char>(r9_7) < reinterpret_cast<unsigned char>(rdi3)) {
            rdi3 = r9_8;
        }
        if (1) 
            goto addr_1800027f9_8; else 
            goto addr_1800027cd_9;
    }
    fun_180002780();
    fun_180002724("invalid string position", 0x18000a340, r8_9, r9_10);
    if (0) {
        addr_18000290d_13:
        if (reinterpret_cast<unsigned char>(r8_11) > reinterpret_cast<unsigned char>(0xfffffffffffffffe)) {
            fun_180002724("invalid string position", 0x18000a340, r8_12, r9_13);
            rax15 = fun_180002c48(r8d14);
            g18000a340 = r8d16;
            rax17 = 0x18000c000;
            if (!rax15) {
                rax17 = 0x18000c010;
            }
            g18000a348 = rax17;
            goto v18;
        }
    } else {
        cf19 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf19) {
            rax20 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rax20 = g180008530;
        }
        if (reinterpret_cast<unsigned char>(0x18000a340) < reinterpret_cast<unsigned char>(rax20)) 
            goto addr_18000290d_13; else 
            goto addr_1800028d5_21;
    }
    cf21 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(r8_11);
    if (!cf21) {
        if (r8_11) 
            goto addr_18000294e_24;
        g180008540 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(g180008540) & reinterpret_cast<unsigned char>(r8_11));
        cf22 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf22) {
            rax23 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rax23 = g180008530;
        }
        *reinterpret_cast<struct s0**>(&rax23->f0) = reinterpret_cast<struct s0*>(0);
    } else {
        r8_24 = g180008540;
        fun_1800025b0("invalid string position", r8_11, r8_24);
    }
    if (!r8_11) {
        addr_180002984_31:
    } else {
        addr_18000294e_24:
        cf25 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf25) {
            rcx26 = reinterpret_cast<struct s0*>("invalid string position");
            goto addr_18000295d_33;
        } else {
            rcx26 = g180008530;
            goto addr_18000295d_33;
        }
    }
    addr_180002987_35:
    goto v27;
    addr_18000295d_33:
    if (r8_11) {
        fun_180002d6c(rcx26, 0x18000a340, r8_11);
    }
    cf28 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
    g180008540 = r8_11;
    if (cf28) {
        rax29 = reinterpret_cast<struct s0*>("invalid string position");
    } else {
        rax29 = g180008530;
    }
    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax29) + reinterpret_cast<unsigned char>(r8_11)) = 0;
    goto addr_180002984_31;
    addr_1800028d5_21:
    cf30 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
    if (!cf30) {
        rcx2 = g180008530;
    }
    tmp64_31 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rcx2) + reinterpret_cast<unsigned char>(g180008540));
    if (reinterpret_cast<unsigned char>(tmp64_31) <= reinterpret_cast<unsigned char>(0x18000a340)) 
        goto addr_18000290d_13;
    cf32 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
    if (cf32) {
        rax33 = reinterpret_cast<struct s0*>("invalid string position");
    } else {
        rax33 = g180008530;
    }
    fun_180002794("invalid string position", "invalid string position", reinterpret_cast<unsigned char>(0x18000a340) - reinterpret_cast<unsigned char>(rax33), r8_11);
    goto addr_180002987_35;
    addr_1800027f9_8:
    if (reinterpret_cast<unsigned char>(rdi3) <= reinterpret_cast<unsigned char>(0xfffffffffffffffe)) {
        cf34 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(rdi3);
        if (!cf34) {
            if (rdi3) 
                goto addr_180002837_49;
            g180008540 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(g180008540) & reinterpret_cast<unsigned char>(rdi3));
            cf35 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
            if (cf35) {
                rax36 = reinterpret_cast<struct s0*>("invalid string position");
            } else {
                rax36 = g180008530;
            }
            *reinterpret_cast<struct s0**>(&rax36->f0) = reinterpret_cast<struct s0*>(0);
        } else {
            r8_37 = g180008540;
            fun_1800025b0("invalid string position", rdi3, r8_37);
        }
        if (!rdi3) {
            addr_180002878_56:
            goto v38;
        } else {
            addr_180002837_49:
            cf39 = g18000a358 < 16;
            if (!cf39) {
                rsi4 = g18000a340;
            }
        }
        cf40 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        if (cf40) {
            rcx41 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rcx41 = g180008530;
        }
        if (rdi3) {
            fun_180002d6c(rcx41, reinterpret_cast<unsigned char>(rsi4) + reinterpret_cast<uint64_t>(r8_42), rdi3);
        }
        cf43 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        g180008540 = rdi3;
        if (cf43) {
            rax44 = reinterpret_cast<struct s0*>("invalid string position");
        } else {
            rax44 = g180008530;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rax44) + reinterpret_cast<unsigned char>(rdi3)) = 0;
        goto addr_180002878_56;
    }
    addr_1800027cd_9:
    rax45 = reinterpret_cast<struct s0*>(reinterpret_cast<unsigned char>(rdi3) + reinterpret_cast<uint64_t>(r8_46));
    cf47 = reinterpret_cast<unsigned char>(g180008540) < reinterpret_cast<unsigned char>(rax45);
    if (!cf47) {
        cf48 = reinterpret_cast<unsigned char>(g180008548) < reinterpret_cast<unsigned char>(16);
        g180008540 = rax45;
        if (!cf48) {
            rcx2 = g180008530;
        }
        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(rcx2) + reinterpret_cast<unsigned char>(rax45)) = 0;
        fun_180002a4c("invalid string position", 0, r8_49, r9_50);
        goto addr_180002878_56;
    }
}

struct s31 {
    unsigned char f0;
    signed char[3] pad4;
    int32_t f4;
    int32_t f8;
};

uint32_t fun_180002e6c(uint64_t rcx, struct s9* rdx, struct s31* r8) {
    uint64_t r9_4;
    uint64_t r10_5;
    void* rcx6;
    int64_t rax7;
    uint64_t rcx8;
    int1_t zf9;
    int64_t rax10;
    int64_t rax11;
    int64_t* rax12;
    int64_t* rax13;
    int64_t rax14;
    uint64_t rdx15;
    int64_t rdx16;
    uint32_t eax17;

    r9_4 = rcx;
    r10_5 = rcx;
    if (r8->f0 & 4) {
        r10_5 = r8->f4 + rcx & reinterpret_cast<uint64_t>(static_cast<int64_t>(-r8->f8));
    }
    *reinterpret_cast<int32_t*>(&rcx6) = rdx->f16->f8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
    rax7 = rdx->f8;
    if (*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rcx6) + rax7 + 3) & 15) {
        *reinterpret_cast<uint32_t*>(&rax7) = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rcx6) + rax7 + 3)) & 0xfffffff0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
        r9_4 = r9_4 + rax7;
    }
    rcx8 = r9_4 ^ *reinterpret_cast<uint64_t*>((r8->f0 & 0xfffffff8) + r10_5);
    zf9 = rcx8 == g18000c0e8;
    if (zf9) {
        __asm__("rol rcx, 0x10");
        if (*reinterpret_cast<uint16_t*>(&rcx8) & 0xffff) {
            __asm__("ror rcx, 0x10");
        } else {
            return *reinterpret_cast<uint32_t*>(&rax7);
        }
    }
    RtlCaptureContext(0x18000c1c0);
    rax10 = g18000c2b8;
    rax11 = reinterpret_cast<int64_t>(RtlLookupFunctionEntry(rax10, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 - 0x88 - 8 + 8 + 80));
    if (!rax11) {
        rax12 = g18000c258;
        g18000c2b8 = *rax12;
        rax13 = g18000c258;
        g18000c258 = rax13 + 1;
    } else {
        RtlVirtualUnwind();
    }
    rax14 = g18000c2b8;
    g18000c130 = rax14;
    g18000c240 = rcx8;
    g18000c120 = 0xc0000409;
    g18000c124 = 1;
    g18000c138 = 3;
    g18000c140 = 2;
    rdx15 = g18000c0e8;
    g18000c148 = rdx15;
    rdx16 = g18000c0f0;
    g18000c150 = rdx16;
    eax17 = fun_180001eb4(0x180007058);
    return eax17;
}

struct s32 {
    int64_t f0;
    signed char[16] pad24;
    int64_t f24;
    signed char[184] pad216;
    int64_t f216;
};

void fun_180004b14(struct s32* rcx) {
    uint32_t ebx2;
    int64_t* rdi3;
    int64_t* rsi4;
    int64_t rcx5;
    int64_t rcx6;

    ebx2 = 0;
    rcx->f0 = 0x180007ca8;
    rdi3 = &rcx->f24;
    rsi4 = &rcx->f216;
    do {
        rcx5 = *rsi4;
        g18000e000(rcx5);
        rcx6 = *rdi3;
        g18000e000(rcx6);
        ++ebx2;
        ++rsi4;
        rdi3 = rdi3 + 4;
    } while (ebx2 < 5);
    --g18000c7a0;
    return;
}

int32_t g18000c790;

int64_t g18000c770;

int64_t g18000c778;

int64_t g18000c788;

int32_t g18000c798;

int64_t g18000c780;

void fun_180001660() {
    g18000c790 = 2;
    g18000c770 = reinterpret_cast<int64_t>("p_");
    g18000c778 = 0x18000c758;
    g18000c788 = 0;
    g18000c798 = 0;
    g18000c780 = 0x18000c770;
    return;
}

int64_t DelayLoadFailureHook = 0xb536;

int64_t g180009320 = 0;

int64_t ResolveDelayLoadedAPI = 0xb51e;

int64_t fun_180005ed0(int64_t rcx, int64_t rdx) {
    int64_t r9_3;
    int64_t r8_4;
    int64_t rax5;

    r9_3 = DelayLoadFailureHook;
    r8_4 = g180009320;
    rax5 = reinterpret_cast<int64_t>(ResolveDelayLoadedAPI(0x180000000, rcx, r8_4, r9_3));
    return rax5;
}

int64_t fun_180001000() {
    int64_t rax1;
    int64_t rax2;
    int64_t rax3;

    rax1 = fun_180001dfc(0x180003480);
    rax2 = -rax1;
    *reinterpret_cast<int32_t*>(&rax3) = reinterpret_cast<int32_t>(-(*reinterpret_cast<uint32_t*>(&rax2) - (*reinterpret_cast<uint32_t*>(&rax2) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax2) < *reinterpret_cast<uint32_t*>(&rax2) + reinterpret_cast<uint1_t>(!!rax1))))) - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    return rax3;
}

void fun_180001010() {
    goto 0x180001e8c;
}

int64_t fun_180001290(struct s12* rcx, struct s0* rdx, struct s0* r8, struct s0* r9) {
    struct s0* rsi5;
    struct s0* r14_6;
    struct s0* rdi7;
    struct s12* rbx8;
    int64_t rax9;
    struct s0* ebp10;
    int64_t v11;
    struct s0** rax12;
    int64_t v13;
    struct s0* ebp14;
    int64_t v15;
    struct s0** rax16;
    int64_t rdx17;
    int64_t v18;
    struct s0** rax19;
    struct s0* rcx20;
    int64_t v21;
    struct s0** rax22;
    int1_t zf23;
    struct s0* ecx24;
    struct s0* ecx25;
    uint32_t edx26;
    uint32_t edx27;

    rsi5 = r9;
    r14_6 = r8;
    rdi7 = rdx;
    rbx8 = rcx;
    *reinterpret_cast<struct s0**>(&rax9) = reinterpret_cast<struct s0*>(0x80004005);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    if (rcx->f72) {
        ebp10 = reinterpret_cast<struct s0*>(0);
        if (reinterpret_cast<signed char>(rcx->f24) > reinterpret_cast<signed char>(0)) {
            do {
                rdx = ebp10;
                *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                rax12 = fun_1800037dc(&rbx8->f16, rdx, r8, r9, v11);
                if (*rax12) {
                    rdx = ebp10;
                    *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                    fun_1800037dc(&rbx8->f16, rdx, r8, r9, v13);
                    g180008160();
                }
                ebp10 = reinterpret_cast<struct s0*>(&ebp10->f1);
            } while (reinterpret_cast<signed char>(ebp10) < reinterpret_cast<signed char>(rbx8->f24));
        }
        ebp14 = reinterpret_cast<struct s0*>(0);
        if (reinterpret_cast<signed char>(rbx8->f40) > reinterpret_cast<signed char>(0)) {
            do {
                rdx = ebp14;
                *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                rax16 = fun_1800037dc(&rbx8->f32, rdx, r8, r9, v15);
                if (*rax16) {
                    *reinterpret_cast<struct s0**>(&rdx17) = ebp14;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = 0;
                    rax19 = fun_1800037dc(&rbx8->f32, *reinterpret_cast<struct s0**>(&rdx17), r8, r9, v18);
                    rcx20 = *rax19;
                    CertFreeCertificateContext(rcx20, rdx17);
                    rdx = ebp14;
                    *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                    rax22 = fun_1800037dc(&rbx8->f32, rdx, r8, r9, v21);
                    *rax22 = reinterpret_cast<struct s0*>(0);
                }
                ebp14 = reinterpret_cast<struct s0*>(&ebp14->f1);
            } while (reinterpret_cast<signed char>(ebp14) < reinterpret_cast<signed char>(rbx8->f40));
        }
        *reinterpret_cast<struct s0**>(&rax9) = reinterpret_cast<struct s0*>(0x80070057);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
        if (rbx8->f64 == 4 && (zf23 = (rbx8->f68 & 32) == 0, rbx8->f74 = 1, zf23)) {
            rax9 = fun_180004108(rbx8, rdx, r8, r9);
        }
        rbx8->f72 = 0;
    }
    *reinterpret_cast<struct s0**>(&rdi7->f0) = reinterpret_cast<struct s0*>(0);
    if (!rbx8->f74 || reinterpret_cast<signed char>(rbx8->f24) <= reinterpret_cast<signed char>(0)) {
        ecx24 = reinterpret_cast<struct s0*>(0xffffffff);
    } else {
        ecx24 = reinterpret_cast<struct s0*>(0);
    }
    *reinterpret_cast<struct s0**>(&r14_6->f0) = ecx24;
    *reinterpret_cast<struct s0**>(&rsi5->f0) = reinterpret_cast<struct s0*>(0);
    if (reinterpret_cast<signed char>(*reinterpret_cast<struct s0**>(&rax9)) >= reinterpret_cast<signed char>(0)) {
        ecx25 = rbx8->f40;
        if (!ecx25 && rbx8->f75) {
            ecx25 = reinterpret_cast<struct s0*>(1);
        }
        edx26 = rbx8->f64 - reinterpret_cast<unsigned char>(1);
        if (edx26) 
            goto addr_180003662_22;
    } else {
        addr_180001320_23:
        return rax9;
    }
    if (!rbx8->f73) {
        addr_180003684_25:
        *reinterpret_cast<struct s0**>(&rdi7->f0) = ecx25;
    } else {
        *reinterpret_cast<struct s0**>(&rdi7->f0) = reinterpret_cast<struct s0*>(1);
        *reinterpret_cast<struct s0**>(&rsi5->f0) = reinterpret_cast<struct s0*>(1);
    }
    *reinterpret_cast<struct s0**>(&rax9) = reinterpret_cast<struct s0*>(0);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    goto addr_180001320_23;
    addr_180003662_22:
    edx27 = edx26 - reinterpret_cast<unsigned char>(1);
    if (!edx27) 
        goto addr_180003684_25;
    if (edx27 == 2) 
        goto addr_180003684_25;
    *reinterpret_cast<struct s0**>(&rax9) = reinterpret_cast<struct s0*>(0x80070057);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    goto addr_180001320_23;
}

struct s33 {
    signed char[64] pad64;
    int32_t f64;
    int32_t f68;
    signed char f72;
};

int64_t fun_180001330(struct s33* rcx, int32_t edx, int32_t r8d) {
    int32_t edx4;
    int32_t edx5;

    rcx->f64 = edx;
    if (edx == 4) {
        rcx->f68 = r8d;
    }
    rcx->f72 = 1;
    if (edx != 1 && (edx4 = edx - 2, !!edx4)) {
        edx5 = edx4 - 1;
        if (!edx5) {
            return 0x80004001;
        } else {
            if (edx5 != 1) {
                return 0x80070057;
            }
        }
    }
    return 0;
}

struct s34 {
    signed char[8] pad8;
    int32_t f8;
};

int64_t fun_180001600(struct s34* rcx) {
    int64_t rax2;

    rcx->f8 = rcx->f8 + 1;
    *reinterpret_cast<int32_t*>(&rax2) = rcx->f8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    return rax2;
}

uint32_t g18000c0e0 = 0xffffffff;

int64_t g18000c718;

uint32_t g18000c114 = 0;

int64_t fun_18000197d(void** rcx, int64_t rdx, int64_t r8) {
    uint32_t ebx4;
    int1_t zf5;
    int64_t r9_6;
    uint32_t eax7;
    uint32_t eax8;
    uint32_t eax9;
    uint32_t eax10;
    uint32_t eax11;
    int64_t rax12;
    int1_t zf13;
    int64_t rdx14;
    uint32_t eax15;
    int64_t rax16;
    int64_t rax17;

    ebx4 = 1;
    if (*reinterpret_cast<uint32_t*>(&rdx) <= 1) {
        g18000c0e0 = *reinterpret_cast<uint32_t*>(&rdx);
    }
    if (!*reinterpret_cast<uint32_t*>(&rdx) && (zf5 = g18000c110 == *reinterpret_cast<uint32_t*>(&rdx), zf5)) {
        ebx4 = 0;
        goto addr_180001ba8_6;
    }
    if (static_cast<uint32_t>(rdx - 1) <= 1) {
        r9_6 = g18000c718;
        if (r9_6) {
            eax7 = g18000c114;
            if (*reinterpret_cast<uint32_t*>(&rdx) == 1) {
                eax7 = 1;
            }
            g18000c114 = eax7;
            eax8 = reinterpret_cast<uint32_t>(g180008160());
            ebx4 = eax8;
        }
        if (!ebx4) 
            goto addr_180001ba8_6;
        eax9 = fun_180001704(rcx, *reinterpret_cast<uint32_t*>(&rdx), r8);
        ebx4 = eax9;
        if (!ebx4) 
            goto addr_180001ba8_6;
    }
    eax10 = fun_180002ec8(rcx, *reinterpret_cast<uint32_t*>(&rdx), rcx, *reinterpret_cast<uint32_t*>(&rdx));
    ebx4 = eax10;
    if (*reinterpret_cast<uint32_t*>(&rdx) != 1) 
        goto addr_180001b2d_17;
    if (!ebx4) 
        goto addr_180001aab_19;
    addr_180001b2d_17:
    if (!*reinterpret_cast<uint32_t*>(&rdx) || *reinterpret_cast<uint32_t*>(&rdx) == 3) {
        eax11 = fun_180001704(rcx, *reinterpret_cast<uint32_t*>(&rdx), r8);
        ebx4 = eax11;
        rax12 = g18000c718;
        if (!rax12) 
            goto addr_180001ba8_6;
        zf13 = g18000c114 == 0;
        if (zf13) 
            goto addr_180001ba8_6;
    } else {
        addr_180001ba8_6:
        if (*reinterpret_cast<uint32_t*>(&rdx) <= 1) {
            g18000c0e0 = 0xffffffff;
            goto addr_180001bb6_24;
        }
    }
    *reinterpret_cast<uint32_t*>(&rdx14) = *reinterpret_cast<uint32_t*>(&rdx);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = 0;
    eax15 = reinterpret_cast<uint32_t>(g180008160(rcx, rdx14, r8));
    ebx4 = eax15;
    goto addr_180001ba8_6;
    addr_180001bb6_24:
    *reinterpret_cast<uint32_t*>(&rax16) = ebx4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
    return rax16;
    addr_180001aab_19:
    fun_180002ec8(rcx, 0);
    fun_180001704(rcx, 0, 0);
    rax17 = g18000c718;
    if (!rax17) 
        goto addr_180001b2d_17;
    g180008160(rcx);
    goto addr_180001b2d_17;
}

void fun_180001a0f() {
}

void fun_180001a49() {
}

void fun_180001a83() {
}

void fun_180001aba() {
}

void fun_180001b15() {
}

void fun_180001b50() {
}

void fun_180001b98() {
}

void fun_180001ce0() {
}

struct s0* fun_180002540(struct s0* rcx, struct s0* rdx, struct s0* r8) {
    int32_t ebx4;

    ebx4 = *reinterpret_cast<int32_t*>(&rdx);
    *reinterpret_cast<struct s0**>(&rcx->f0) = reinterpret_cast<struct s0*>("@%");
    fun_180002d4e();
    if (*reinterpret_cast<unsigned char*>(&ebx4) & 1) {
        fun_180001bcc(rcx, rdx, r8);
    }
    return rcx;
}

struct s0* fun_180002580(struct s0* rcx, struct s0* rdx, struct s0* r8) {
    int32_t ebx4;

    ebx4 = *reinterpret_cast<int32_t*>(&rdx);
    fun_180002d4e();
    if (*reinterpret_cast<unsigned char*>(&ebx4) & 1) {
        fun_180001bcc(rcx, rdx, r8);
    }
    return rcx;
}

struct s35 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
};

struct s35* fun_1800029e0(int64_t rcx, struct s35* rdx, int32_t r8d) {
    rdx->f0 = r8d;
    rdx->f8 = rcx;
    return rdx;
}

int64_t realloc = 0xb514;

int64_t fun_180002cd0() {
    int64_t rdx1;
    int64_t rdx2;
    uint64_t r8_3;
    int32_t* rax4;

    if (!rdx1 || -32 / reinterpret_cast<uint64_t>(rdx2) >= r8_3) {
        goto realloc;
    } else {
        rax4 = fun_180002d72();
        *rax4 = 12;
        fun_180002d78();
        return 0;
    }
}

struct s36 {
    signed char[88] pad88;
    int64_t f88;
};

void fun_180003040() {
    int64_t rcx1;
    struct s36* rdx2;

    rcx1 = rdx2->f88;
    fun_180001c30(rcx1, 0x180008390);
    return;
}

struct s37 {
    signed char[80] pad80;
    uint64_t f80;
};

void fun_180001c25();

int64_t fun_1800033af() {
    struct s37* rdx1;

    rdx1->f80 = 0;
    return fun_180001c25;
}

int64_t GetProcessHeap = 0xaec2;

int64_t HeapFree = 0xaeb6;

struct s38 {
    signed char[48] pad48;
    int64_t f48;
};

struct s39 {
    signed char[24] pad24;
    int32_t f24;
};

struct s40 {
    signed char[16] pad16;
    struct s0** f16;
};

struct s41 {
    signed char[16] pad16;
    struct s0** f16;
};

struct s42 {
    signed char[24] pad24;
    struct s0* f24;
};

struct s43 {
    signed char[40] pad40;
    int32_t f40;
};

struct s44 {
    signed char[32] pad32;
    struct s0** f32;
};

struct s45 {
    signed char[32] pad32;
    struct s0** f32;
};

struct s46 {
    signed char[32] pad32;
    struct s0** f32;
};

struct s47 {
    signed char[40] pad40;
    struct s0* f40;
};

struct s48 {
    signed char[32] pad32;
    int64_t f32;
};

struct s49 {
    signed char[32] pad32;
    int64_t f32;
};

struct s50 {
    signed char[40] pad40;
    int64_t f40;
};

struct s51 {
    signed char[16] pad16;
    int64_t f16;
};

struct s52 {
    signed char[16] pad16;
    int64_t f16;
};

struct s53 {
    signed char[24] pad24;
    int64_t f24;
};

void fun_1800034f1() {
    int64_t v1;
    int64_t rax2;
    struct s0* r8_3;
    struct s0* rsi4;
    int64_t rdx5;
    struct s38* rdi6;
    int64_t r14_7;
    struct s0* esi8;
    struct s0* r14d9;
    struct s39* rdi10;
    int32_t r14d11;
    struct s40* rdi12;
    struct s0* r9_13;
    struct s0** rax14;
    struct s0* r14_15;
    struct s41* rdi16;
    struct s0* r9_17;
    struct s42* rdi18;
    struct s0* esi19;
    struct s0* r14d20;
    struct s43* rdi21;
    int32_t r14d22;
    struct s44* rdi23;
    struct s0* r9_24;
    struct s0** rax25;
    struct s0* r14_26;
    int64_t rdx27;
    struct s45* rdi28;
    struct s0* r9_29;
    struct s0** rax30;
    struct s0* rcx31;
    struct s46* rdi32;
    struct s0* r9_33;
    struct s0** rax34;
    struct s0* r14_35;
    struct s47* rdi36;
    struct s48* rdi37;
    struct s49* rdi38;
    int64_t r14_39;
    struct s50* rdi40;
    int64_t r14_41;
    struct s51* rdi42;
    struct s52* rdi43;
    int64_t r14_44;
    struct s53* rdi45;
    int64_t r14_46;
    int64_t rdi47;
    int64_t v48;

    v1 = reinterpret_cast<int64_t>(__return_address());
    rax2 = reinterpret_cast<int64_t>(GetProcessHeap());
    r8_3 = rsi4;
    *reinterpret_cast<struct s0**>(&rdx5) = reinterpret_cast<struct s0*>(0);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
    HeapFree(rax2);
    rdi6->f48 = r14_7;
    esi8 = r14d9;
    if (rdi10->f24 > r14d11) {
        do {
            *reinterpret_cast<struct s0**>(&rdx5) = esi8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
            rax14 = fun_1800037dc(&rdi12->f16, *reinterpret_cast<struct s0**>(&rdx5), r8_3, r9_13, v1);
            if (*rax14 != r14_15) {
                *reinterpret_cast<struct s0**>(&rdx5) = esi8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
                fun_1800037dc(&rdi16->f16, *reinterpret_cast<struct s0**>(&rdx5), r8_3, r9_17, v1);
                g180008160();
            }
            esi8 = reinterpret_cast<struct s0*>(&esi8->f1);
        } while (reinterpret_cast<signed char>(esi8) < reinterpret_cast<signed char>(rdi18->f24));
    }
    esi19 = r14d20;
    if (rdi21->f40 > r14d22) {
        do {
            *reinterpret_cast<struct s0**>(&rdx5) = esi19;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
            rax25 = fun_1800037dc(&rdi23->f32, *reinterpret_cast<struct s0**>(&rdx5), r8_3, r9_24, v1);
            if (*rax25 != r14_26) {
                *reinterpret_cast<struct s0**>(&rdx27) = esi19;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = 0;
                rax30 = fun_1800037dc(&rdi28->f32, *reinterpret_cast<struct s0**>(&rdx27), r8_3, r9_29, v1);
                rcx31 = *rax30;
                CertFreeCertificateContext(rcx31, rdx27, r8_3);
                *reinterpret_cast<struct s0**>(&rdx5) = esi19;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
                rax34 = fun_1800037dc(&rdi32->f32, *reinterpret_cast<struct s0**>(&rdx5), r8_3, r9_33, v1);
                *rax34 = r14_35;
            }
            esi19 = reinterpret_cast<struct s0*>(&esi19->f1);
        } while (reinterpret_cast<signed char>(esi19) < reinterpret_cast<signed char>(rdi36->f40));
    }
    --g18000c7a0;
    if (rdi37->f32) {
        free();
        rdi38->f32 = r14_39;
    }
    rdi40->f40 = r14_41;
    if (rdi42->f16) {
        free();
        rdi43->f16 = r14_44;
    }
    rdi45->f24 = r14_46;
    _3_YAXPEAX_Z(rdi47, rdx5, r8_3);
    goto v48;
}

struct s54 {
    int64_t f0;
    int64_t f8;
};

void fun_180003711(struct s54* rcx) {
    if (rcx->f0) {
        free();
        rcx->f0 = 0;
    }
    rcx->f8 = 0;
    return;
}

struct s55 {
    signed char[104] pad104;
    int64_t f104;
};

void fun_18000389d() {
    int64_t rcx1;
    struct s55* rdx2;

    rcx1 = rdx2->f104;
    fun_180001eb0(rcx1);
    return;
}

struct s56 {
    int32_t f0;
    int64_t f4;
    int64_t f12;
    uint32_t f20;
    struct s0* f24;
};

int64_t g180008350 = 0x44d56c6de74e57b0;

int64_t g180008358 = 0x3574edf52dfbda9c;

int64_t HeapAlloc = 0xaef2;

int64_t fun_180003a50(struct s5* rcx, struct s56* rdx, struct s0* r8, struct s0* r9) {
    int64_t rax5;
    struct s56* rsi6;
    struct s5* rbp7;
    int64_t rdi8;
    int64_t rax9;
    int64_t rax10;
    int32_t eax11;
    int64_t rax12;
    int64_t rax13;
    struct s0* rax14;
    struct s0* r8_15;
    struct s0* rdx16;
    int64_t rax17;

    rax5 = g180008350;
    rsi6 = rdx;
    rbp7 = rcx;
    *reinterpret_cast<int32_t*>(&rdi8) = 0x80070057;
    rax9 = rax5 - rdx->f4;
    if (!rax9) {
        rax10 = g180008358;
        rax9 = rax10 - rdx->f12;
    }
    if (!rax9) {
        if (rcx->f64 != 4) 
            goto addr_180003ad3_5;
    } else {
        if (rcx->f64 != 4) 
            goto addr_180003a8d_7;
    }
    if (!(rcx->f68 & 16)) {
        addr_180003ad3_5:
        eax11 = rsi6->f0;
        if (eax11 == 0xfffffe03) 
            goto addr_180003ae0_9;
        if (eax11) 
            goto addr_180003a8d_7; else 
            goto addr_180003ae0_9;
    } else {
        eax11 = rdx->f0;
        if (eax11 == 0xfffffe03) {
            addr_180003ae0_9:
            if (rsi6->f20 <= 0 || !rsi6->f24) {
                addr_180003a8d_7:
                *reinterpret_cast<int32_t*>(&rax12) = *reinterpret_cast<int32_t*>(&rdi8);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
            } else {
                if (!eax11) {
                    rbp7->f75 = *reinterpret_cast<signed char*>(&eax11);
                }
                if (rsi6->f20 < 24) 
                    goto addr_180003a8d_7; else 
                    goto addr_180003afc_15;
            }
        } else {
            *reinterpret_cast<int32_t*>(&rdi8) = 1;
            rcx = g18000c018;
            if (rcx != 0x18000c018 && rcx->f28 & 1) {
                rcx = rcx->f16;
                *reinterpret_cast<int32_t*>(&rdx) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = 0;
                fun_1800047f4(rcx, 10, r8, r9);
                goto addr_180003ad3_5;
            }
        }
    }
    addr_180003b61_18:
    return rax12;
    addr_180003afc_15:
    rax13 = reinterpret_cast<int64_t>(GetProcessHeap(rcx, rdx));
    rax14 = reinterpret_cast<struct s0*>(HeapAlloc(rax13));
    if (!rax14) {
        *reinterpret_cast<int32_t*>(&rax12) = *reinterpret_cast<int32_t*>(&rdi8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&r8_15) = rsi6->f20;
        *reinterpret_cast<int32_t*>(&r8_15 + 4) = 0;
        rdx16 = rsi6->f24;
        fun_180002d6c(rax14, rdx16, r8_15);
        if (rbp7->f48) {
            rax17 = reinterpret_cast<int64_t>(GetProcessHeap(rax14, rdx16, r8_15));
            HeapFree(rax17);
        }
        rbp7->f48 = rax14;
        rbp7->f56 = rsi6->f20;
        *reinterpret_cast<int32_t*>(&rax12) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
    }
    goto addr_180003b61_18;
}

int64_t g18000e088 = 0x1800023e6;

void fun_180004b72(int64_t* rcx) {
    *rcx = reinterpret_cast<int64_t>("0L");
    goto g18000e088;
}

void fun_180004bed() {
    goto 0x180004b74;
}

struct s57 {
    int64_t f0;
    int64_t f8;
};

int64_t g18000e070 = 0x1800023c2;

struct s57* fun_180004c30(struct s57* rcx, int32_t edx) {
    int32_t ebx3;
    int64_t rcx4;

    rcx->f0 = reinterpret_cast<int64_t>("0L");
    ebx3 = edx;
    rcx4 = rcx->f8;
    g18000e088(rcx4);
    if (*reinterpret_cast<unsigned char*>(&ebx3) & 1) {
        g18000e070(rcx);
    }
    return rcx;
}

struct s58 {
    signed char[256] pad256;
    int64_t f256;
};

int64_t fun_180004c70(struct s58* rcx, int64_t rdx) {
    if (rcx->f256) {
        g180008160();
    }
    rcx->f256 = rdx;
    g180008160(rdx);
    return 0;
}

struct s59 {
    int64_t f0;
    int64_t f8;
    int32_t f16;
};

struct s60 {
    signed char[8] pad8;
    int64_t f8;
    int32_t f16;
};

int64_t g18000e080 = 0x1800023da;

struct s59* fun_180004cc0(struct s60* rcx) {
    void* rdx2;
    int64_t rcx3;
    int32_t eax4;
    struct s59* rax5;
    int32_t edx6;

    rdx2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 48 + 64);
    rcx3 = rcx->f8;
    eax4 = reinterpret_cast<int32_t>(g18000e080(rcx3, rdx2));
    if (eax4) {
        rcx->f16 = eax4;
    }
    rax5 = reinterpret_cast<struct s59*>(g18000e078(24, rdx2));
    if (!rax5) {
        *reinterpret_cast<int32_t*>(&rax5) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    } else {
        edx6 = rcx->f16;
        rax5->f0 = reinterpret_cast<int64_t>("0L");
        rax5->f8 = 0;
        rax5->f16 = edx6;
    }
    return rax5;
}

void fun_18000523f() {
    goto g18000e070;
}

struct s61 {
    signed char[64] pad64;
    int64_t f64;
};

void fun_1800054b9() {
    struct s61* rdx1;

    if (!rdx1->f64) {
        return;
    } else {
        goto g180008160;
    }
}

struct s30* fun_180005f40(struct s30* rcx, int32_t edx) {
    int32_t ebx3;

    ebx3 = edx;
    fun_1800016a4(rcx);
    if (*reinterpret_cast<unsigned char*>(&ebx3) & 1) {
        _3_YAXPEAX_Z(rcx);
    }
    return rcx;
}

struct s62 {
    int64_t f0;
    int32_t f8;
    int32_t f12;
    int32_t f16;
};

struct s62* fun_180005f70(int64_t rcx, int32_t edx, int32_t r8d) {
    struct s62* rax4;
    int64_t rdx5;
    int64_t rbx6;
    uint64_t r8_7;
    int64_t rcx8;
    struct s62* rax9;

    if (~edx >= 0 || 0x7fffffff - edx < 1) {
        *reinterpret_cast<int32_t*>(&rax4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rdx5) = edx + 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rbx6) = static_cast<uint32_t>(rdx5 + 7) & 0xfffffff8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx6) + 4) = 0;
        if (*reinterpret_cast<int32_t*>(&rdx5) > *reinterpret_cast<int32_t*>(&rbx6)) 
            goto addr_180006003_4;
        r8_7 = reinterpret_cast<uint64_t>(static_cast<int64_t>(r8d));
        rcx8 = *reinterpret_cast<int32_t*>(&rbx6);
        if (*reinterpret_cast<uint32_t*>(&rbx6)) 
            goto addr_180005fb3_6; else 
            goto addr_180005faf_7;
    }
    addr_18000600a_8:
    return rax4;
    addr_180005fb3_6:
    if (-1 / reinterpret_cast<uint64_t>(rcx8) < r8_7) 
        goto addr_180006003_4;
    if (rcx8 * r8_7 > 0xffffffffffffffe7) 
        goto addr_180006003_4;
    addr_180005fcb_10:
    rax9 = reinterpret_cast<struct s62*>(g180008160());
    if (!rax9) {
        addr_180006003_4:
        *reinterpret_cast<int32_t*>(&rax4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } else {
        rax9->f0 = rcx;
        rax9->f16 = 1;
        rax9->f12 = static_cast<int32_t>(rbx6 - 1);
        rax4 = rax9;
        rax9->f8 = 0;
    }
    goto addr_18000600a_8;
    addr_180005faf_7:
    goto addr_180005fcb_10;
}

void fun_180001020() {
    goto 0x180001e8c;
}

void fun_180001c25() {
}

struct s63 {
    int64_t f0;
    int64_t f8;
};

int64_t g180008370 = 0;

int64_t g180008378 = 0x46000000000000c0;

int64_t g180008360 = 0x45b25a1cd27c3481;

int64_t g180008368 = 0x9e22e8bb0ec2aa8a;

int64_t fun_180001160(int64_t rcx, struct s63* rdx, int64_t* r8) {
    int64_t rax4;
    int64_t rax5;
    int64_t rax6;
    int64_t rax7;
    int64_t rax8;
    int64_t rax9;
    int64_t rax10;

    rax4 = g180008370;
    rax5 = rax4 - rdx->f0;
    if (!rax5) {
        rax6 = g180008378;
        rax5 = rax6 - rdx->f8;
    }
    if (!rax5) {
        addr_1800011ad_4:
        *r8 = rcx;
        g180008160();
        *reinterpret_cast<int32_t*>(&rax7) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    } else {
        rax8 = g180008360;
        rax9 = rax8 - rdx->f0;
        if (!rax9) {
            rax10 = g180008368;
            rax9 = rax10 - rdx->f8;
        }
        if (!rax9) 
            goto addr_1800011ad_4; else 
            goto addr_18000119c_8;
    }
    addr_1800011a8_9:
    return rax7;
    addr_18000119c_8:
    *r8 = 0;
    *reinterpret_cast<int32_t*>(&rax7) = 0x80004002;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    goto addr_1800011a8_9;
}

struct s64 {
    int64_t f0;
    signed char[40] pad48;
    int64_t f48;
};

void fun_1800011d0(struct s64* rcx) {
    __asm__("lock xadd [rcx+0x8], ebx");
    if (!0) 
        goto "???";
    if (!rcx) 
        goto 0x1800011fc;
    rcx->f0 = 0x180007000;
    if (rcx->f48) 
        goto 0x1800034f2; else 
        goto "???";
}

int64_t fun_180001350(int64_t* rcx) {
    __asm__("lock xadd [rcx+0x8], ebx");
    if (!1 && rcx) {
        *rcx = 0x180007c70;
        --g18000c7a0;
        _3_YAXPEAX_Z();
    }
    return 0xfffffffe;
}

int64_t fun_180001390() {
    int64_t rdx1;
    int32_t esi2;
    struct s0* r8_3;
    struct s0* r9_4;
    struct s0* rax5;
    struct s0* rbx6;
    int64_t r8_7;
    struct s0** r9_8;
    int32_t eax9;
    int64_t rax10;

    if (rdx1) {
        esi2 = 0x80040110;
        goto addr_1800036cf_3;
    }
    rax5 = fun_180001c10(80, 0x180008390, r8_3, r9_4);
    rbx6 = rax5;
    if (!rax5) {
        rbx6 = reinterpret_cast<struct s0*>(0);
    } else {
        *reinterpret_cast<struct s0**>(&rbx6->f0) = reinterpret_cast<struct s0*>(0x180007000);
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx6) + 8) = 1;
        rbx6->f16 = reinterpret_cast<struct s0*>(0);
        rbx6->f24 = reinterpret_cast<struct s0*>(0);
        rbx6->f32 = reinterpret_cast<struct s0*>(0);
        rbx6->f40 = reinterpret_cast<struct s0*>(0);
        rbx6->f48 = reinterpret_cast<struct s0*>(0);
        rbx6->f56 = reinterpret_cast<struct s0*>(0);
        rbx6->f68 = 0;
        rbx6->f72 = 0x1000001;
        ++g18000c7a0;
    }
    if (rbx6) 
        goto addr_180001424_8;
    esi2 = 0x8007000e;
    goto addr_1800036b7_10;
    addr_180001424_8:
    eax9 = reinterpret_cast<int32_t>(g180008160(rbx6, r8_7, r9_8));
    esi2 = eax9;
    g180008160(rbx6, r8_7, r9_8);
    if (esi2 < 0) {
        addr_1800036b7_10:
        if (r9_8) {
            *r9_8 = reinterpret_cast<struct s0*>(0);
        }
    } else {
        addr_180001453_12:
        *reinterpret_cast<int32_t*>(&rax10) = esi2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
        return rax10;
    }
    if (esi2 < 0) {
        addr_1800036cf_3:
        if (r9_8) {
            *r9_8 = reinterpret_cast<struct s0*>(0);
            goto addr_180001453_12;
        }
    } else {
        goto addr_180001453_12;
    }
}

struct s65 {
    int64_t f0;
    int64_t f8;
};

int64_t g180008380 = 1;

int64_t g180008388 = 0x46000000000000c0;

int64_t fun_180001470(int64_t rcx, struct s65* rdx, int64_t* r8) {
    int64_t rax4;
    int64_t rax5;
    int64_t rax6;
    int64_t rax7;
    int64_t rax8;
    int64_t rax9;
    int64_t rax10;

    if (!r8) {
        *reinterpret_cast<int32_t*>(&rax4) = 0x80070057;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } else {
        rax5 = g180008380;
        rax6 = rax5 - rdx->f0;
        if (!rax6) {
            rax7 = g180008388;
            rax6 = rax7 - rdx->f8;
        }
        if (rax6) 
            goto addr_1800036e0_6; else 
            goto addr_180001499_7;
    }
    addr_1800014ab_8:
    return rax4;
    addr_1800036e0_6:
    rax8 = g180008370;
    rax9 = rax8 - rdx->f0;
    if (!rax9) {
        rax10 = g180008378;
        rax9 = rax10 - rdx->f8;
    }
    if (rax9) 
        goto addr_180003700_11;
    addr_180001499_7:
    *r8 = rcx;
    g180008160();
    *reinterpret_cast<int32_t*>(&rax4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    goto addr_1800014ab_8;
    addr_180003700_11:
    *r8 = 0;
    *reinterpret_cast<int32_t*>(&rax4) = 0x80004002;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    goto addr_1800014ab_8;
}

int64_t fun_180001610() {
    return 0x80004001;
}

int64_t fun_1800016d0() {
    void** rax1;
    int64_t rax2;

    rax1 = reinterpret_cast<void**>(malloc(0x100));
    g18000c6f8 = rax1;
    g18000c6f0 = rax1;
    if (rax1) {
        *reinterpret_cast<void***>(rax1) = reinterpret_cast<void**>(0);
        *reinterpret_cast<int32_t*>(&rax2) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    } else {
        *reinterpret_cast<int32_t*>(&rax2) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    }
    return rax2;
}

int64_t __C_specific_handler = 0xad20;

void fun_180001df6() {
    goto __C_specific_handler;
}

void fun_180001ae1() {
}

void fun_180002640() {
}

struct s66 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
};

int64_t fun_1800029f0(int64_t rcx, struct s66* rdx, int32_t r8d) {
    int64_t rax4;

    if (rcx != rdx->f8 || rdx->f0 != r8d) {
        return 0;
    } else {
        *reinterpret_cast<signed char*>(&rax4) = 1;
        return rax4;
    }
}

struct s67 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
};

struct s68 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
};

struct s67* fun_180002a10(int64_t rcx, int32_t edx, struct s68* r8) {
    struct s67* rax4;

    rax4 = reinterpret_cast<struct s67*>(g180008160());
    if (rax4->f8 != r8->f8 || rax4->f0 != r8->f0) {
        *reinterpret_cast<int32_t*>(&rax4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } else {
        *reinterpret_cast<signed char*>(&rax4) = 1;
    }
    return rax4;
}

struct s69 {
    signed char[24] pad24;
    int64_t f24;
};

struct s70 {
    signed char[16] pad16;
    int64_t f16;
};

struct s0* fun_180002b40() {
    struct s0* rbx1;
    struct s0* rdx2;
    int32_t r8d3;
    struct s0* r8d4;
    struct s0* rax5;
    struct s0* r8_6;
    struct s0* rdx7;
    struct s0* rax8;
    struct s69* rdx9;
    struct s70* rdx10;
    signed char* rdx11;
    struct s0* r9_12;

    rbx1 = rdx2;
    if (r8d3 != 1) {
        rax5 = fun_180002c48(r8d4);
        *reinterpret_cast<int32_t*>(&r8_6) = 0;
        *reinterpret_cast<int32_t*>(&r8_6 + 4) = 0;
        rbx1->f24 = reinterpret_cast<struct s0*>(15);
        rbx1->f16 = reinterpret_cast<struct s0*>(0);
        rdx7 = reinterpret_cast<struct s0*>("unknown error");
        *reinterpret_cast<struct s0**>(&rbx1->f0) = reinterpret_cast<struct s0*>(0);
        if (rax5) {
            rdx7 = rax5;
        }
        if (*reinterpret_cast<struct s0**>(&rdx7->f0)) {
            rax8 = reinterpret_cast<struct s0*>(0xffffffffffffffff);
            do {
                rax8 = reinterpret_cast<struct s0*>(&rax8->f1);
            } while (*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rdx7) + reinterpret_cast<unsigned char>(rax8)));
            r8_6 = rax8;
        }
    } else {
        rdx9->f24 = 15;
        rdx10->f16 = 0;
        *rdx11 = 0;
        *reinterpret_cast<int32_t*>(&r8_6) = 21;
        *reinterpret_cast<int32_t*>(&r8_6 + 4) = 0;
        rdx7 = reinterpret_cast<struct s0*>("iostream stream error");
    }
    fun_1800028a4(rbx1, rdx7, r8_6, r9_12);
    return rbx1;
}

struct s0* fun_180002bc0() {
    struct s0* rbx1;
    struct s0* rdx2;
    int32_t r8d3;
    struct s0* rax4;
    struct s0* r8_5;
    struct s0* rdx6;
    struct s0* rax7;
    struct s0* r9_8;

    rbx1 = rdx2;
    rax4 = fun_180002c70(r8d3);
    *reinterpret_cast<int32_t*>(&r8_5) = 0;
    *reinterpret_cast<int32_t*>(&r8_5 + 4) = 0;
    rbx1->f24 = reinterpret_cast<struct s0*>(15);
    rbx1->f16 = reinterpret_cast<struct s0*>(0);
    rdx6 = reinterpret_cast<struct s0*>("unknown error");
    *reinterpret_cast<struct s0**>(&rbx1->f0) = reinterpret_cast<struct s0*>(0);
    if (rax4) {
        rdx6 = rax4;
    }
    if (*reinterpret_cast<struct s0**>(&rdx6->f0)) {
        rax7 = reinterpret_cast<struct s0*>(0xffffffffffffffff);
        do {
            rax7 = reinterpret_cast<struct s0*>(&rax7->f1);
        } while (*reinterpret_cast<struct s0**>(reinterpret_cast<unsigned char>(rdx6) + reinterpret_cast<unsigned char>(rax7)));
        r8_5 = rax7;
    }
    fun_1800028a4(rbx1, rdx6, r8_5, r9_8);
    return rbx1;
}

int64_t fun_180002c20() {
    return "generic";
}

/*
 * ??1type_info@@UEAA@XZ
 * public: virtual __cdecl type_info::~type_info(void) __ptr64
 */
int64_t _1type_info_UEAA_XZ = 0xb4f2;

struct s0* fun_180002ca0(struct s0* rcx, struct s0* rdx, struct s0* r8) {
    int32_t ebx4;

    ebx4 = *reinterpret_cast<int32_t*>(&rdx);
    _1type_info_UEAA_XZ();
    if (*reinterpret_cast<unsigned char*>(&ebx4) & 1) {
        fun_180001bcc(rcx, rdx, r8);
    }
    return rcx;
}

void fun_180002f24(struct s8* rcx, uint64_t rdx, int64_t r8, struct s9* r9) {
    struct s11* rbx5;
    struct s31* r8_6;
    int32_t eax7;

    rbx5 = r9->f56;
    r8_6 = reinterpret_cast<struct s31*>(&rbx5->f4);
    fun_180002e6c(rdx, r9, r8_6);
    eax7 = rcx->f4;
    if (rbx5->f4 & -(*reinterpret_cast<uint32_t*>(&r8_6) - (*reinterpret_cast<uint32_t*>(&r8_6) + (*reinterpret_cast<uint32_t*>(&r8_6) < *reinterpret_cast<uint32_t*>(&r8_6) + reinterpret_cast<uint1_t>(!!(*reinterpret_cast<unsigned char*>(&eax7) & 0x66))))) + 1) {
        fun_180001bd2(rcx, rdx, r8, r9);
    }
    return;
}

int64_t DllCanUnloadNow() {
    int64_t rax1;
    int1_t less_or_equal2;

    *reinterpret_cast<int32_t*>(&rax1) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    less_or_equal2 = g18000c7a0 <= 0;
    if (!less_or_equal2) {
        *reinterpret_cast<int32_t*>(&rax1) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = 0;
    }
    return rax1;
}

void fun_180002fd0() {
    int64_t rax1;

    goto rax1;
}

void fun_180003060() {
    goto 0x180003714;
}

struct s71 {
    signed char[56] pad56;
    int32_t f56;
    signed char[4] pad64;
    int32_t f64;
    signed char[100] pad168;
    int32_t f168;
    signed char[36] pad208;
    int32_t** f208;
    signed char[56] pad272;
    int32_t** f272;
};

int64_t fun_180003113(int32_t** rcx, struct s71* rdx) {
    int32_t edx3;
    int32_t** rdx4;
    int64_t rcx5;
    int32_t eax6;
    int64_t rax7;

    rdx->f272 = rcx;
    edx3 = **rcx;
    rdx->f168 = edx3;
    rdx->f208 = rcx;
    rdx->f56 = edx3;
    if (rdx->f56 != 0xe06d7363) {
        rdx->f64 = 0;
    } else {
        rdx4 = rdx->f208;
        *reinterpret_cast<int32_t*>(&rcx5) = rdx->f56;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        eax6 = fun_180001c35(rcx5, rdx4);
        rdx->f64 = eax6;
    }
    *reinterpret_cast<int32_t*>(&rax7) = rdx->f64;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    return rax7;
}

struct s72 {
    signed char[72] pad72;
    int32_t f72;
    signed char[4] pad80;
    int32_t f80;
    signed char[88] pad172;
    int32_t f172;
    signed char[40] pad216;
    int32_t** f216;
    signed char[56] pad280;
    int32_t** f280;
};

int64_t fun_180003167(int32_t** rcx, struct s72* rdx) {
    int32_t edx3;
    int32_t** rdx4;
    int64_t rcx5;
    int32_t eax6;
    int64_t rax7;

    rdx->f280 = rcx;
    edx3 = **rcx;
    rdx->f172 = edx3;
    rdx->f216 = rcx;
    rdx->f72 = edx3;
    if (rdx->f72 != 0xe06d7363) {
        rdx->f80 = 0;
    } else {
        rdx4 = rdx->f216;
        *reinterpret_cast<int32_t*>(&rcx5) = rdx->f72;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        eax6 = fun_180001c35(rcx5, rdx4);
        rdx->f80 = eax6;
    }
    *reinterpret_cast<int32_t*>(&rax7) = rdx->f80;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    return rax7;
}

struct s73 {
    signed char[88] pad88;
    int32_t f88;
    signed char[4] pad96;
    int32_t f96;
    signed char[76] pad176;
    int32_t f176;
    signed char[44] pad224;
    int32_t** f224;
    signed char[56] pad288;
    int32_t** f288;
};

int64_t fun_1800031bb(int32_t** rcx, struct s73* rdx) {
    int32_t edx3;
    int32_t** rdx4;
    int64_t rcx5;
    int32_t eax6;
    int64_t rax7;

    rdx->f288 = rcx;
    edx3 = **rcx;
    rdx->f176 = edx3;
    rdx->f224 = rcx;
    rdx->f88 = edx3;
    if (rdx->f88 != 0xe06d7363) {
        rdx->f96 = 0;
    } else {
        rdx4 = rdx->f224;
        *reinterpret_cast<int32_t*>(&rcx5) = rdx->f88;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        eax6 = fun_180001c35(rcx5, rdx4);
        rdx->f96 = eax6;
    }
    *reinterpret_cast<int32_t*>(&rax7) = rdx->f96;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    return rax7;
}

struct s74 {
    signed char[104] pad104;
    int32_t f104;
    signed char[4] pad112;
    int32_t f112;
    signed char[64] pad180;
    int32_t f180;
    signed char[48] pad232;
    int32_t** f232;
    signed char[56] pad296;
    int32_t** f296;
};

int64_t fun_18000320f(int32_t** rcx, struct s74* rdx) {
    int32_t edx3;
    int32_t** rdx4;
    int64_t rcx5;
    int32_t eax6;
    int64_t rax7;

    rdx->f296 = rcx;
    edx3 = **rcx;
    rdx->f180 = edx3;
    rdx->f232 = rcx;
    rdx->f104 = edx3;
    if (rdx->f104 != 0xe06d7363) {
        rdx->f112 = 0;
    } else {
        rdx4 = rdx->f232;
        *reinterpret_cast<int32_t*>(&rcx5) = rdx->f104;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        eax6 = fun_180001c35(rcx5, rdx4);
        rdx->f112 = eax6;
    }
    *reinterpret_cast<int32_t*>(&rax7) = rdx->f112;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    return rax7;
}

struct s75 {
    signed char[120] pad120;
    int32_t f120;
    signed char[4] pad128;
    int32_t f128;
    signed char[52] pad184;
    int32_t f184;
    signed char[52] pad240;
    int32_t** f240;
    signed char[56] pad304;
    int32_t** f304;
};

int64_t fun_180003263(int32_t** rcx, struct s75* rdx) {
    int32_t edx3;
    int32_t** rdx4;
    int64_t rcx5;
    int32_t eax6;
    int64_t rax7;

    rdx->f304 = rcx;
    edx3 = **rcx;
    rdx->f184 = edx3;
    rdx->f240 = rcx;
    rdx->f120 = edx3;
    if (rdx->f120 != 0xe06d7363) {
        rdx->f128 = 0;
    } else {
        rdx4 = rdx->f240;
        *reinterpret_cast<int32_t*>(&rcx5) = rdx->f120;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        eax6 = fun_180001c35(rcx5, rdx4);
        rdx->f128 = eax6;
    }
    *reinterpret_cast<int32_t*>(&rax7) = rdx->f128;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    return rax7;
}

struct s76 {
    signed char[136] pad136;
    int32_t f136;
    signed char[4] pad144;
    int32_t f144;
    signed char[40] pad188;
    int32_t f188;
    signed char[56] pad248;
    int32_t** f248;
    signed char[56] pad312;
    int32_t** f312;
};

int64_t fun_1800032c0(int32_t** rcx, struct s76* rdx) {
    int32_t edx3;
    int32_t** rdx4;
    int64_t rcx5;
    int32_t eax6;
    int64_t rax7;

    rdx->f312 = rcx;
    edx3 = **rcx;
    rdx->f188 = edx3;
    rdx->f248 = rcx;
    rdx->f136 = edx3;
    if (rdx->f136 != 0xe06d7363) {
        rdx->f144 = 0;
    } else {
        rdx4 = rdx->f248;
        *reinterpret_cast<int32_t*>(&rcx5) = rdx->f136;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        eax6 = fun_180001c35(rcx5, rdx4);
        rdx->f144 = eax6;
    }
    *reinterpret_cast<int32_t*>(&rax7) = rdx->f144;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    return rax7;
}

struct s77 {
    signed char[152] pad152;
    int32_t f152;
    signed char[4] pad160;
    int32_t f160;
    signed char[28] pad192;
    int32_t f192;
    signed char[60] pad256;
    int32_t** f256;
    signed char[56] pad320;
    int32_t** f320;
};

int64_t fun_180003326(int32_t** rcx, struct s77* rdx) {
    int32_t edx3;
    int32_t** rdx4;
    int64_t rcx5;
    int32_t eax6;
    int64_t rax7;

    rdx->f320 = rcx;
    edx3 = **rcx;
    rdx->f192 = edx3;
    rdx->f256 = rcx;
    rdx->f152 = edx3;
    if (rdx->f152 != 0xe06d7363) {
        rdx->f160 = 0;
    } else {
        rdx4 = rdx->f256;
        *reinterpret_cast<int32_t*>(&rcx5) = rdx->f152;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        eax6 = fun_180001c35(rcx5, rdx4);
        rdx->f160 = eax6;
    }
    *reinterpret_cast<int32_t*>(&rax7) = rdx->f160;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    return rax7;
}

struct s78 {
    signed char[376] pad376;
    uint32_t f376;
};

void fun_18000338c() {
    struct s78* rdx1;

    if (rdx1->f376 <= 1) {
        g18000c0e0 = 0xffffffff;
    }
    return;
}

int64_t fun_1800033d0(int32_t** rcx, int64_t rdx) {
    int32_t ecx3;
    int64_t rax4;

    ecx3 = 0;
    *reinterpret_cast<unsigned char*>(&ecx3) = reinterpret_cast<uint1_t>(**rcx == 0xc0000005);
    *reinterpret_cast<int32_t*>(&rax4) = ecx3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    return rax4;
}

struct s79 {
    signed char[96] pad96;
    struct s0* f96;
};

int64_t g18000c000 = 0x1800070b8;

void fun_18000344c() {
    struct s0* rcx1;
    struct s79* rdx2;
    int64_t v3;

    rcx1 = rdx2->f96;
    fun_1800026ac(rcx1, 1, 0);
    fun_180002d66();
    g18000c000 = 0x180007088;
    goto v3;
}

int64_t fun_180003740() {
    int32_t edx1;

    if (!edx1) {
        --g18000c7a0;
    } else {
        ++g18000c7a0;
    }
    return 0;
}

int64_t EtwGetTraceLoggerHandle = 0xb3c4;

int64_t EtwGetTraceEnableLevel = 0xb3aa;

int64_t EtwGetTraceEnableFlags = 0xb3de;

int64_t fun_180003760(int32_t ecx, struct s7* rdx, int32_t* r8, int64_t r9) {
    struct s7* rdi5;
    struct s7* rbx6;
    int32_t ecx7;
    struct s7* rax8;
    unsigned char al9;
    uint32_t esi10;
    int32_t eax11;
    int64_t rax12;

    *reinterpret_cast<int32_t*>(&rdi5) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = 0;
    rbx6 = rdx;
    *r8 = 0;
    ecx7 = ecx - 4;
    if (!ecx7) {
        rax8 = reinterpret_cast<struct s7*>(EtwGetTraceLoggerHandle(r9));
        rdi5 = rax8;
        al9 = reinterpret_cast<unsigned char>(EtwGetTraceEnableLevel(rax8));
        esi10 = al9;
        eax11 = reinterpret_cast<int32_t>(EtwGetTraceEnableFlags(rdi5));
    } else {
        if (ecx7 == 1) {
            eax11 = 0;
            *reinterpret_cast<signed char*>(&esi10) = 0;
        } else {
            *reinterpret_cast<int32_t*>(&rax12) = 87;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
            goto addr_1800037cc_6;
        }
    }
    if (rbx6->f26 & 2 && rbx6->f16) {
        rbx6 = rbx6->f16;
    }
    rbx6->f16 = rdi5;
    rbx6->f25 = *reinterpret_cast<signed char*>(&esi10);
    rbx6->f28 = eax11;
    *reinterpret_cast<int32_t*>(&rax12) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
    addr_1800037cc_6:
    return rax12;
}

struct s80 {
    signed char[16] pad16;
    struct s0** f16;
    struct s0* f24;
};

int64_t fun_1800038d0(struct s80* rcx, struct s0* edx, struct s0* r8, struct s0* r9) {
    struct s12* rsi5;
    int64_t v6;
    struct s0** rax7;
    int64_t rax8;
    int64_t v9;

    if (reinterpret_cast<unsigned char>(edx) >= reinterpret_cast<unsigned char>(rcx->f24) || ((rsi5 = reinterpret_cast<struct s12*>(&rcx->f16), rax7 = fun_1800037dc(rsi5, edx, r8, r9, v6), *rax7 == 0) || !r8)) {
        *reinterpret_cast<int32_t*>(&rax8) = 0x80070057;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    } else {
        fun_1800037dc(rsi5, edx, r8, r9, v9);
        rax8 = reinterpret_cast<int64_t>(g180008160());
    }
    return rax8;
}

struct s81 {
    signed char[40] pad40;
    int32_t f40;
    signed char[31] pad75;
    signed char f75;
};

int64_t fun_180003940(struct s81* rcx, uint32_t edx, struct s19** r8) {
    uint32_t eax4;
    int64_t rax5;
    int64_t rcx6;

    if (rcx->f40 || (eax4 = 4, !rcx->f75)) {
        eax4 = 5;
    }
    if (edx >= eax4 || !r8) {
        *reinterpret_cast<int32_t*>(&rax5) = 0x80070057;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx6) = edx;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = 0;
        rax5 = fun_180004858((rcx6 << 5) + 0x180007d60, r8);
    }
    return rax5;
}

struct s82 {
    signed char[40] pad40;
    int32_t f40;
    signed char[31] pad75;
    signed char f75;
};

int64_t fun_180003990(struct s82* rcx, int32_t* rdx) {
    if (rcx->f40 || !rcx->f75) {
        *rdx = 5;
    } else {
        *rdx = 4;
    }
    return 0;
}

struct s83 {
    signed char[144] pad144;
    int64_t f144;
};

void fun_18000477f() {
    int64_t rcx1;
    struct s83* rdx2;

    rcx1 = rdx2->f144;
    fun_180001eb0(rcx1);
    return;
}

void fun_180004abb(int64_t* rcx) {
    if (!*rcx) {
        return;
    } else {
        goto g180008160;
    }
}

void fun_180004aed() {
    goto 0x180004afc;
}

struct s32* fun_180004c00(struct s32* rcx, int32_t edx) {
    int32_t ebx3;

    ebx3 = edx;
    fun_180004b14(rcx);
    if (*reinterpret_cast<unsigned char*>(&ebx3) & 1) {
        _3_YAXPEAX_Z(rcx);
    }
    return rcx;
}

void fun_180004d29() {
    goto 0x180004b8c;
}

struct s84 {
    signed char[264] pad264;
    int64_t f264;
};

int64_t g18000e030 = 0x180002227;

int64_t fun_180004e70(struct s84* rcx, int32_t edx, struct s0* r8) {
    int64_t* rdx2;
    struct s0* v4;
    void* rbp5;
    int64_t rdi6;
    int64_t rax7;
    int64_t rcx8;
    uint32_t eax9;
    uint32_t eax10;
    struct s0* rax11;
    int64_t rcx12;
    unsigned char* r9_13;
    uint32_t eax14;
    void** rcx15;
    int64_t rdx16;
    struct s5* rcx17;
    int64_t rdx18;
    uint32_t eax19;
    uint32_t ebx20;
    struct s5* rcx21;
    struct s5* rcx22;
    void** rcx23;

    *reinterpret_cast<int32_t*>(&rdx2) = edx;
    v4 = r8;
    rbp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8);
    *reinterpret_cast<uint32_t*>(&rdi6) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rdx2) || !r8) {
        *reinterpret_cast<uint32_t*>(&rax7) = 0x80070057;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    } else {
        rcx8 = rcx->f264;
        if (rcx8 && (rdx2 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp5) - 16), eax9 = fun_180005058(rcx8, rdx2), *reinterpret_cast<uint32_t*>(&rdi6) = eax9, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0, !eax9)) {
            rdx2 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbp5) - 24);
            eax10 = fun_180005120(0, rdx2);
            *reinterpret_cast<uint32_t*>(&rdi6) = eax10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0;
        }
        LocalFree(0, rdx2);
        rax11 = reinterpret_cast<struct s0*>(0);
        if (*reinterpret_cast<uint32_t*>(&rdi6)) 
            goto addr_180004f15_6;
        if (0) 
            goto addr_180005045_8;
        addr_180004f15_6:
        rcx12 = rcx->f264;
        if (rcx12) {
            r9_13 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rbp5) - 32);
            r8 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbp5) + 72);
            eax14 = fun_18000524c(rcx12, reinterpret_cast<int64_t>(rbp5) + 88, r8, r9_13);
            *reinterpret_cast<uint32_t*>(&rdi6) = eax14;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = 0;
            rax11 = reinterpret_cast<struct s0*>(0);
        }
        if (*reinterpret_cast<uint32_t*>(&rdi6)) 
            goto addr_180004f95_11;
        if (1) 
            goto addr_180004f62_13; else 
            goto addr_180004f5d_14;
    }
    addr_180005035_15:
    return rax7;
    addr_180004f62_13:
    if (1) {
        if (1) {
            if (1) {
                addr_180004f95_11:
                if (rax11) {
                    addr_180005045_8:
                    *reinterpret_cast<struct s0**>(&v4->f0) = rax11;
                    *reinterpret_cast<uint32_t*>(&rax7) = 0;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
                } else {
                    rcx15 = g18000c720;
                    *reinterpret_cast<int32_t*>(&rdx16) = static_cast<int32_t>(reinterpret_cast<unsigned char>(rax11) + 0x65);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
                    rax11 = reinterpret_cast<struct s0*>(g18000e030(rcx15, rdx16, r8, r9_13));
                    rcx17 = g18000c018;
                    if (rcx17 != 0x18000c018 && rcx17->f28 & 1) {
                        rcx17 = rcx17->f16;
                        r8 = reinterpret_cast<struct s0*>(0x1800092f8);
                        *reinterpret_cast<int32_t*>(&rdx16) = 12;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&r9_13) = *reinterpret_cast<uint32_t*>(&rdi6);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_13) + 4) = 0;
                        fun_18000481c(rcx17, 12, 0x1800092f8, *reinterpret_cast<uint32_t*>(&r9_13), rcx17, 12, 0x1800092f8, *reinterpret_cast<uint32_t*>(&r9_13));
                        rax11 = rax11;
                    }
                    if (rax11) 
                        goto addr_180005045_8; else 
                        goto addr_180004fec_21;
                }
            } else {
                *reinterpret_cast<int32_t*>(&rdx18) = 0x67;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0;
                goto addr_180004f84_23;
            }
        } else {
            *reinterpret_cast<int32_t*>(&rdx18) = 0x68;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0;
            goto addr_180004f84_23;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rdx18) = 0x69;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0;
        goto addr_180004f84_23;
    }
    addr_18000502d_26:
    goto addr_180005035_15;
    addr_180004fec_21:
    eax19 = reinterpret_cast<uint32_t>(GetLastError(rcx17, rdx16, r8, r9_13));
    ebx20 = eax19;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax19) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax19 == 0))) {
        ebx20 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax19)) | 0x80070000;
    }
    rcx21 = g18000c018;
    if (rcx21 != 0x18000c018 && rcx21->f28 & 1) {
        rcx22 = rcx21->f16;
        fun_18000481c(rcx22, 13, 0x1800092f8, ebx20, rcx22, 13, 0x1800092f8, ebx20);
    }
    *reinterpret_cast<uint32_t*>(&rax7) = ebx20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    goto addr_18000502d_26;
    addr_180004f84_23:
    rcx23 = g18000c720;
    rax11 = reinterpret_cast<struct s0*>(g18000e030(rcx23, rdx18, r8, r9_13));
    goto addr_180004f95_11;
    addr_180004f5d_14:
    *reinterpret_cast<int32_t*>(&rdx18) = static_cast<int32_t>(rdi6 + 0x6a);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = 0;
    goto addr_180004f84_23;
}

int64_t fun_1800050f0(void* rcx, uint32_t edx, int32_t* r8, int32_t* r9) {
    int64_t rdx5;

    if (edx >= 5 || (!r8 || !r9)) {
        return 0x80070057;
    } else {
        *reinterpret_cast<uint32_t*>(&rdx5) = edx;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0;
        *r8 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx) + rdx5 * 8 + 0xb0);
        *r9 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx) + rdx5 * 8 + 0xb4);
        return 0;
    }
}

void fun_180004a61() {
    goto 0x180004b74;
}

void fun_1800054c5() {
    goto 0x180004abc;
}

int64_t fun_180005690(void* rcx, uint32_t edx, int64_t r8) {
    struct s5* rcx4;
    struct s5* rcx5;
    int64_t rax6;
    int64_t rcx7;
    int64_t rcx8;

    if (edx >= 5 || !r8) {
        rcx4 = g18000c018;
        if (rcx4 != 0x18000c018 && rcx4->f28 & 1) {
            rcx5 = rcx4->f16;
            fun_18000481c(rcx5, 11, 0x1800092f8, 0x80070057);
        }
        *reinterpret_cast<int32_t*>(&rax6) = 0x80070057;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx7) = edx;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
        rcx8 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rcx) + rcx7 * 8 + 0xd8);
        rax6 = reinterpret_cast<int64_t>(g18000e020(rcx8, r8));
    }
    return rax6;
}

int64_t fun_180005c70(int64_t rcx) {
    __asm__("lock xadd [rcx+0x8], ebx");
    if (!1 && rcx) {
        g180008160();
    }
    return 0xfffffffe;
}

int64_t fun_180005cb0(struct s21* rcx, int32_t* rdx) {
    signed char al3;

    *rdx = 0;
    if (rcx->f256 && ((al3 = fun_180005e30(rcx), !al3) && rcx->f276 == al3)) {
        g180008160();
    }
    return 0;
}

struct s85 {
    signed char[216] pad216;
    int64_t f216;
};

int64_t fun_180005d10(void* rcx, uint32_t edx, int64_t r8) {
    int64_t rax4;
    int64_t r9_5;
    int64_t rax6;
    struct s85* rbx7;
    int64_t rcx8;

    if (edx >= 5 || (*reinterpret_cast<uint32_t*>(&rax4) = edx, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0, *reinterpret_cast<uint32_t*>(&r9_5) = edx, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_5) + 4) = 0, reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>((rax4 << 5) + reinterpret_cast<int64_t>(rcx) + 20) - 4) > 1)) {
        *reinterpret_cast<int32_t*>(&rax6) = 0x80070057;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    } else {
        rbx7 = reinterpret_cast<struct s85*>(reinterpret_cast<int64_t>(rcx) + r9_5 * 8);
        rcx8 = rbx7->f216;
        g18000e000(rcx8);
        rax6 = reinterpret_cast<int64_t>(g18000e020(r8, &rbx7->f216));
    }
    return rax6;
}

struct s86 {
    signed char[256] pad256;
    int64_t f256;
};

void fun_180005d70(struct s86* rcx) {
    if (rcx->f256) {
        g180008160();
    }
    rcx->f256 = 0;
    return;
}

int64_t* fun_180005f10(int64_t* rcx, unsigned char dl) {
    *rcx = reinterpret_cast<int64_t>("p_");
    if (dl & 1) {
        _3_YAXPEAX_Z();
    }
    return rcx;
}

void fun_180006010(int64_t rcx, int64_t rdx) {
    goto HeapAlloc;
}

int64_t HeapSize = 0xb54e;

void fun_180006060(int64_t rcx, int64_t rdx) {
    goto HeapSize;
}

int64_t HeapReAlloc = 0xb55a;

int64_t fun_180006100(int64_t rcx, int64_t rdx, int64_t r8) {
    int64_t rax4;

    if (rdx) {
        if (r8) {
            goto HeapReAlloc;
        } else {
            g180008160();
            *reinterpret_cast<int32_t*>(&rax4) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
        }
    } else {
        rax4 = reinterpret_cast<int64_t>(g180008160());
    }
    return rax4;
}

void fun_18000614c() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    signed char* rax10;
    signed char* rax11;
    signed char al12;
    signed char* rax13;
    signed char* rax14;
    signed char al15;
    signed char* rax16;
    signed char* rax17;
    signed char al18;
    signed char* rax19;
    signed char* rax20;
    signed char al21;
    signed char* rax22;
    signed char* rax23;
    signed char al24;
    signed char* rax25;
    signed char* rax26;
    signed char al27;
    signed char* rax28;
    signed char* rax29;
    signed char al30;
    signed char* rax31;
    signed char* rax32;
    signed char al33;
    signed char* rax34;
    signed char* rax35;
    signed char al36;
    signed char* rax37;
    signed char* rax38;
    signed char al39;
    signed char* rax40;
    signed char* rax41;
    signed char al42;
    signed char* rax43;
    signed char* rax44;
    signed char al45;
    signed char* rax46;
    signed char* rax47;
    signed char al48;
    signed char* rax49;
    signed char* rax50;
    signed char al51;
    signed char* rax52;
    signed char* rax53;
    signed char al54;
    signed char* rax55;
    signed char* rax56;
    signed char al57;
    signed char* rax58;
    signed char* rax59;
    signed char al60;
    signed char* rax61;
    signed char* rax62;
    signed char al63;
    signed char* rax64;
    signed char* rax65;
    signed char al66;
    signed char* rax67;
    signed char* rax68;
    signed char al69;
    signed char* rax70;
    signed char* rax71;
    signed char al72;
    signed char* rax73;
    signed char* rax74;
    signed char al75;
    signed char* rax76;
    signed char* rax77;
    signed char al78;
    signed char* rax79;
    signed char* rax80;
    signed char al81;
    signed char* rax82;
    signed char* rax83;
    signed char al84;
    signed char* rax85;
    signed char* rax86;
    signed char al87;
    signed char* rax88;
    signed char* rax89;
    signed char al90;
    signed char* rax91;
    signed char* rax92;
    signed char al93;
    signed char* rax94;
    signed char* rax95;
    signed char al96;
    signed char* rax97;
    signed char* rax98;
    signed char al99;
    signed char* rax100;
    signed char* rax101;
    signed char al102;
    signed char* rax103;
    signed char* rax104;
    signed char al105;
    signed char* rax106;
    signed char* rax107;
    signed char al108;
    signed char* rax109;
    signed char* rax110;
    signed char al111;
    signed char* rax112;
    signed char* rax113;
    signed char al114;
    signed char* rax115;
    signed char* rax116;
    signed char al117;
    signed char* rax118;
    signed char* rax119;
    signed char al120;
    signed char* rax121;
    signed char* rax122;
    signed char al123;
    signed char* rax124;
    signed char* rax125;
    signed char al126;
    signed char* rax127;
    signed char* rax128;
    signed char al129;
    signed char* rax130;
    signed char* rax131;
    signed char al132;
    signed char* rax133;
    signed char* rax134;
    signed char al135;
    signed char* rax136;
    signed char* rax137;
    signed char al138;
    signed char* rax139;
    signed char* rax140;
    signed char al141;
    signed char* rax142;
    signed char* rax143;
    signed char al144;
    signed char* rax145;
    signed char* rax146;
    signed char al147;
    signed char* rax148;
    signed char* rax149;
    signed char al150;
    signed char* rax151;
    signed char* rax152;
    signed char al153;
    signed char* rax154;
    signed char* rax155;
    signed char al156;
    signed char* rax157;
    signed char* rax158;
    signed char al159;
    signed char* rax160;
    signed char* rax161;
    signed char al162;
    signed char* rax163;
    signed char* rax164;
    signed char al165;
    signed char* rax166;
    signed char* rax167;
    signed char al168;
    signed char* rax169;
    signed char* rax170;
    signed char al171;
    signed char* rax172;
    signed char* rax173;
    signed char al174;
    signed char* rax175;
    signed char* rax176;
    signed char al177;
    signed char* rax178;
    signed char* rax179;
    signed char al180;
    signed char* rax181;
    signed char* rax182;
    signed char al183;
    signed char* rax184;
    signed char* rax185;
    signed char al186;
    signed char* rax187;
    signed char* rax188;
    signed char al189;
    signed char* rax190;
    signed char* rax191;
    signed char al192;
    signed char* rax193;
    signed char* rax194;
    signed char al195;
    signed char* rax196;
    signed char* rax197;
    signed char al198;
    signed char* rax199;
    signed char* rax200;
    signed char al201;
    signed char* rax202;
    signed char* rax203;
    signed char al204;
    signed char* rax205;
    signed char* rax206;
    signed char al207;
    signed char* rax208;
    signed char* rax209;
    signed char al210;
    signed char* rax211;
    signed char* rax212;
    signed char al213;
    signed char* rax214;
    signed char* rax215;
    signed char al216;
    signed char* rax217;
    signed char* rax218;
    signed char al219;
    signed char* rax220;
    signed char* rax221;
    signed char al222;
    signed char* rax223;
    signed char* rax224;
    signed char al225;
    signed char* rax226;
    signed char* rax227;
    signed char al228;
    signed char* rax229;
    signed char* rax230;
    signed char al231;
    signed char* rax232;
    signed char* rax233;
    signed char al234;
    signed char* rax235;
    signed char* rax236;
    signed char al237;
    signed char* rax238;
    signed char* rax239;
    signed char al240;
    signed char* rax241;
    signed char* rax242;
    signed char al243;
    signed char* rax244;
    signed char* rax245;
    signed char al246;
    signed char* rax247;
    signed char* rax248;
    signed char al249;
    signed char* rax250;
    signed char* rax251;
    signed char al252;
    signed char* rax253;
    signed char* rax254;
    signed char al255;
    signed char* rax256;
    signed char* rax257;
    signed char al258;
    signed char* rax259;
    signed char* rax260;
    signed char al261;
    signed char* rax262;
    signed char* rax263;
    signed char al264;
    signed char* rax265;
    signed char* rax266;
    signed char al267;
    signed char* rax268;
    signed char* rax269;
    signed char al270;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = reinterpret_cast<signed char>(*rax11 + al12);
    *rax13 = reinterpret_cast<signed char>(*rax14 + al15);
    *rax16 = reinterpret_cast<signed char>(*rax17 + al18);
    *rax19 = reinterpret_cast<signed char>(*rax20 + al21);
    *rax22 = reinterpret_cast<signed char>(*rax23 + al24);
    *rax25 = reinterpret_cast<signed char>(*rax26 + al27);
    *rax28 = reinterpret_cast<signed char>(*rax29 + al30);
    *rax31 = reinterpret_cast<signed char>(*rax32 + al33);
    *rax34 = reinterpret_cast<signed char>(*rax35 + al36);
    *rax37 = reinterpret_cast<signed char>(*rax38 + al39);
    *rax40 = reinterpret_cast<signed char>(*rax41 + al42);
    *rax43 = reinterpret_cast<signed char>(*rax44 + al45);
    *rax46 = reinterpret_cast<signed char>(*rax47 + al48);
    *rax49 = reinterpret_cast<signed char>(*rax50 + al51);
    *rax52 = reinterpret_cast<signed char>(*rax53 + al54);
    *rax55 = reinterpret_cast<signed char>(*rax56 + al57);
    *rax58 = reinterpret_cast<signed char>(*rax59 + al60);
    *rax61 = reinterpret_cast<signed char>(*rax62 + al63);
    *rax64 = reinterpret_cast<signed char>(*rax65 + al66);
    *rax67 = reinterpret_cast<signed char>(*rax68 + al69);
    *rax70 = reinterpret_cast<signed char>(*rax71 + al72);
    *rax73 = reinterpret_cast<signed char>(*rax74 + al75);
    *rax76 = reinterpret_cast<signed char>(*rax77 + al78);
    *rax79 = reinterpret_cast<signed char>(*rax80 + al81);
    *rax82 = reinterpret_cast<signed char>(*rax83 + al84);
    *rax85 = reinterpret_cast<signed char>(*rax86 + al87);
    *rax88 = reinterpret_cast<signed char>(*rax89 + al90);
    *rax91 = reinterpret_cast<signed char>(*rax92 + al93);
    *rax94 = reinterpret_cast<signed char>(*rax95 + al96);
    *rax97 = reinterpret_cast<signed char>(*rax98 + al99);
    *rax100 = reinterpret_cast<signed char>(*rax101 + al102);
    *rax103 = reinterpret_cast<signed char>(*rax104 + al105);
    *rax106 = reinterpret_cast<signed char>(*rax107 + al108);
    *rax109 = reinterpret_cast<signed char>(*rax110 + al111);
    *rax112 = reinterpret_cast<signed char>(*rax113 + al114);
    *rax115 = reinterpret_cast<signed char>(*rax116 + al117);
    *rax118 = reinterpret_cast<signed char>(*rax119 + al120);
    *rax121 = reinterpret_cast<signed char>(*rax122 + al123);
    *rax124 = reinterpret_cast<signed char>(*rax125 + al126);
    *rax127 = reinterpret_cast<signed char>(*rax128 + al129);
    *rax130 = reinterpret_cast<signed char>(*rax131 + al132);
    *rax133 = reinterpret_cast<signed char>(*rax134 + al135);
    *rax136 = reinterpret_cast<signed char>(*rax137 + al138);
    *rax139 = reinterpret_cast<signed char>(*rax140 + al141);
    *rax142 = reinterpret_cast<signed char>(*rax143 + al144);
    *rax145 = reinterpret_cast<signed char>(*rax146 + al147);
    *rax148 = reinterpret_cast<signed char>(*rax149 + al150);
    *rax151 = reinterpret_cast<signed char>(*rax152 + al153);
    *rax154 = reinterpret_cast<signed char>(*rax155 + al156);
    *rax157 = reinterpret_cast<signed char>(*rax158 + al159);
    *rax160 = reinterpret_cast<signed char>(*rax161 + al162);
    *rax163 = reinterpret_cast<signed char>(*rax164 + al165);
    *rax166 = reinterpret_cast<signed char>(*rax167 + al168);
    *rax169 = reinterpret_cast<signed char>(*rax170 + al171);
    *rax172 = reinterpret_cast<signed char>(*rax173 + al174);
    *rax175 = reinterpret_cast<signed char>(*rax176 + al177);
    *rax178 = reinterpret_cast<signed char>(*rax179 + al180);
    *rax181 = reinterpret_cast<signed char>(*rax182 + al183);
    *rax184 = reinterpret_cast<signed char>(*rax185 + al186);
    *rax187 = reinterpret_cast<signed char>(*rax188 + al189);
    *rax190 = reinterpret_cast<signed char>(*rax191 + al192);
    *rax193 = reinterpret_cast<signed char>(*rax194 + al195);
    *rax196 = reinterpret_cast<signed char>(*rax197 + al198);
    *rax199 = reinterpret_cast<signed char>(*rax200 + al201);
    *rax202 = reinterpret_cast<signed char>(*rax203 + al204);
    *rax205 = reinterpret_cast<signed char>(*rax206 + al207);
    *rax208 = reinterpret_cast<signed char>(*rax209 + al210);
    *rax211 = reinterpret_cast<signed char>(*rax212 + al213);
    *rax214 = reinterpret_cast<signed char>(*rax215 + al216);
    *rax217 = reinterpret_cast<signed char>(*rax218 + al219);
    *rax220 = reinterpret_cast<signed char>(*rax221 + al222);
    *rax223 = reinterpret_cast<signed char>(*rax224 + al225);
    *rax226 = reinterpret_cast<signed char>(*rax227 + al228);
    *rax229 = reinterpret_cast<signed char>(*rax230 + al231);
    *rax232 = reinterpret_cast<signed char>(*rax233 + al234);
    *rax235 = reinterpret_cast<signed char>(*rax236 + al237);
    *rax238 = reinterpret_cast<signed char>(*rax239 + al240);
    *rax241 = reinterpret_cast<signed char>(*rax242 + al243);
    *rax244 = reinterpret_cast<signed char>(*rax245 + al246);
    *rax247 = reinterpret_cast<signed char>(*rax248 + al249);
    *rax250 = reinterpret_cast<signed char>(*rax251 + al252);
    *rax253 = reinterpret_cast<signed char>(*rax254 + al255);
    *rax256 = reinterpret_cast<signed char>(*rax257 + al258);
    *rax259 = reinterpret_cast<signed char>(*rax260 + al261);
    *rax262 = reinterpret_cast<signed char>(*rax263 + al264);
    *rax265 = reinterpret_cast<signed char>(*rax266 + al267);
    *rax268 = reinterpret_cast<signed char>(*rax269 + al270);
}

signed char g18000c768;

int64_t g18000c758;

int64_t g18000c760;

void fun_180001030() {
    int64_t rax1;

    rax1 = reinterpret_cast<int64_t>(GetProcessHeap());
    g18000c768 = 0;
    g18000c758 = 0x180007b40;
    g18000c760 = rax1;
    goto 0x180001e8c;
}

int64_t fun_180001620() {
    uint64_t* rdx1;

    *rdx1 = 0;
    return 0x80004001;
}

void fun_180001940(int64_t rcx, int32_t edx, int64_t r8) {
    if (edx == 1) {
        fun_180001d20();
    }
    goto 0x180001980;
}

void fun_180002080(int64_t rcx, int64_t rdx, int64_t r8, int64_t r9) {
    int64_t rax5;

    __asm__("movdqa [rsp+0x20], xmm0");
    __asm__("movdqa [rsp+0x30], xmm1");
    __asm__("movdqa [rsp+0x40], xmm2");
    __asm__("movdqa [rsp+0x50], xmm3");
    rax5 = fun_180005ed0(0x18000a3a8, 0x18000e010);
    __asm__("movdqa xmm0, [rsp+0x20]");
    __asm__("movdqa xmm1, [rsp+0x30]");
    __asm__("movdqa xmm2, [rsp+0x40]");
    __asm__("movdqa xmm3, [rsp+0x50]");
    goto rax5;
}

int64_t _purecall = 0xb428;

void fun_180002d30() {
    goto _purecall;
}

/*
 * ?what@exception@@UEBAPEBDXZ
 * public: virtual char const * __ptr64 __cdecl exception::what(void)const __ptr64
 */
int64_t what_exception_UEBAPEBDXZ = 0xb4b4;

void fun_180002d60() {
    goto what_exception_UEBAPEBDXZ;
}

int64_t* fun_18000249c(int64_t* rcx) {
    fun_180002d48();
    *rcx = 0x180007078;
    return rcx;
}

int64_t fun_180002c30() {
    return "iostream";
}

struct s87 {
    signed char[56] pad56;
    struct s31* f56;
};

int64_t fun_180002e4c() {
    struct s31* r8_1;
    struct s87* r9_2;
    uint64_t rdx3;
    struct s9* r9_4;

    r8_1 = r9_2->f56;
    fun_180002e6c(rdx3, r9_4, r8_1);
    return 1;
}

void fun_180003070() {
    goto 0x180003714;
}

void fun_1800033f0() {
    fun_180002067(8);
    return;
}

int64_t g18000c008 = 0x1800070e8;

void fun_180003490() {
    g18000c008 = 0x180007088;
    return;
}

struct s88 {
    signed char[144] pad144;
    int64_t f144;
};

void fun_1800047af() {
    int64_t rcx1;
    struct s88* rdx2;

    rcx1 = rdx2->f144;
    fun_180001c30(rcx1, 0x180008390);
    return;
}

struct s89 {
    signed char[256] pad256;
    int64_t f256;
    signed char[8] pad272;
    uint32_t f272;
};

int64_t g18000e050 = 0x1800021a2;

int64_t fun_180004d40(struct s89* rcx) {
    void* rsp2;
    int64_t rbx3;
    struct s0** rcx4;
    void* rsp5;
    unsigned char al6;
    int64_t rcx7;
    uint32_t eax8;
    struct s5* rcx9;
    struct s5* rcx10;
    void* rcx11;
    int32_t eax12;
    uint32_t eax13;
    struct s5* rcx14;
    struct s5* rcx15;
    int64_t rax16;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 0xa0);
    *reinterpret_cast<uint32_t*>(&rbx3) = 0;
    rcx4 = reinterpret_cast<struct s0**>(reinterpret_cast<int64_t>(rsp2) + 32);
    fun_180002fb0(rcx4);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    if (!rcx->f272 || (al6 = fun_1800058b0(rcx4), rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8), !!al6)) {
    }
    rcx7 = rcx->f256;
    if (rcx7 && ((eax8 = reinterpret_cast<uint32_t>(g180008160()), rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8), *reinterpret_cast<uint32_t*>(&rbx3) = eax8, !!eax8) && ((rcx9 = g18000c018, rcx9 != 0x18000c018) && rcx9->f28 & 1))) {
        rcx10 = rcx9->f16;
        fun_18000481c(rcx10, 14, 0x1800092f8, eax8, rcx10, 14, 0x1800092f8, eax8);
        rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
    }
    rcx11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) + 32);
    eax12 = reinterpret_cast<int32_t>(g18000e050(rcx11));
    if (!eax12) {
        eax13 = reinterpret_cast<uint32_t>(GetLastError(rcx11));
        *reinterpret_cast<uint32_t*>(&rbx3) = eax13;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax13) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax13 == 0))) {
            *reinterpret_cast<uint32_t*>(&rbx3) = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax13)) | 0x80070000;
        }
        rcx14 = g18000c018;
        if (rcx14 != 0x18000c018 && rcx14->f28 & 1) {
            rcx15 = rcx14->f16;
            fun_18000481c(rcx15, 15, 0x1800092f8, *reinterpret_cast<uint32_t*>(&rbx3), rcx15, 15, 0x1800092f8, *reinterpret_cast<uint32_t*>(&rbx3));
        }
    }
    *reinterpret_cast<uint32_t*>(&rax16) = *reinterpret_cast<uint32_t*>(&rbx3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
    return rax16;
}

struct s90 {
    int64_t f0;
    int64_t f8;
};

struct s90* fun_180004ba0(struct s90* rcx, int32_t edx) {
    int32_t ebx3;
    int64_t rcx4;

    ebx3 = edx;
    rcx->f0 = reinterpret_cast<int64_t>("0L");
    rcx4 = rcx->f8;
    g18000e088(rcx4);
    if (*reinterpret_cast<unsigned char*>(&ebx3) & 1) {
        g18000e070(rcx);
    }
    return rcx;
}

void fun_1800054d1() {
    goto 0x180004afc;
}

struct s91 {
    int64_t f0;
    int64_t f8;
};

int64_t g180009308 = 0x481a40c163913a93;

int64_t g180009310 = 0xcc708cff72408d81;

int64_t g1800092d8 = 0x41f8436364a5010e;

int64_t g1800092e0 = 0xbcda205c04193897;

int64_t fun_180005be0(int64_t rcx, struct s91* rdx, int64_t* r8) {
    int64_t rax4;
    int64_t rax5;
    int64_t rax6;
    int64_t rax7;
    int64_t rax8;
    int64_t rax9;
    int64_t rax10;
    int64_t rax11;
    int64_t rax12;
    int64_t rax13;

    if (!r8) {
        *reinterpret_cast<int32_t*>(&rax4) = 0x80070057;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } else {
        rax5 = g180008370;
        rax6 = rax5 - rdx->f0;
        if (!rax6) {
            rax7 = g180008378;
            rax6 = rax7 - rdx->f8;
        }
        if (!rax6) 
            goto addr_180005c4b_6; else 
            goto addr_180005c05_7;
    }
    addr_180005c64_8:
    return rax4;
    addr_180005c4b_6:
    *r8 = rcx;
    g180008160();
    *reinterpret_cast<int32_t*>(&rax4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    goto addr_180005c64_8;
    addr_180005c05_7:
    rax8 = g180009308;
    rax9 = rax8 - rdx->f0;
    if (!rax9) {
        rax10 = g180009310;
        rax9 = rax10 - rdx->f8;
    }
    if (!rax9) 
        goto addr_180005c4b_6;
    rax11 = g1800092d8;
    rax12 = rax11 - rdx->f0;
    if (!rax12) {
        rax13 = g1800092e0;
        rax12 = rax13 - rdx->f8;
    }
    if (!rax12) 
        goto addr_180005c4b_6;
    *r8 = 0;
    *reinterpret_cast<int32_t*>(&rax4) = 0x80004002;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    goto addr_180005c64_8;
}

void fun_180006020(int64_t rcx) {
    goto g180008160;
}

struct s92 {
    signed char[12] pad12;
    int32_t f12;
};

struct s92* fun_180006070(int64_t rcx) {
    int32_t r8d2;
    int32_t r8d3;
    struct s92* rax4;
    int64_t r8_5;
    int32_t r8d6;
    int64_t rbx7;
    int64_t rax8;
    int32_t r9d9;
    int64_t rcx10;
    uint64_t rcx11;
    struct s92* rax12;

    if (~r8d2 >= 0 || 0x7fffffff - r8d3 < 1) {
        *reinterpret_cast<int32_t*>(&rax4) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&r8_5) = r8d6 + 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_5) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rbx7) = static_cast<uint32_t>(r8_5 + 7) & 0xfffffff8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = 0;
        if (*reinterpret_cast<int32_t*>(&r8_5) > *reinterpret_cast<int32_t*>(&rbx7) || ((*reinterpret_cast<int32_t*>(&rax8) = r9d9, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0, *reinterpret_cast<uint32_t*>(&rcx10) = *reinterpret_cast<uint32_t*>(&rbx7), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0, rcx11 = reinterpret_cast<uint64_t>(rcx10 * rax8), rcx11 > 0xffffffff) || (*reinterpret_cast<uint32_t*>(&rcx11) > 0xffffffe7 || (rax12 = reinterpret_cast<struct s92*>(g180008160()), rax12 == 0)))) {
            *reinterpret_cast<int32_t*>(&rax4) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
        } else {
            rax12->f12 = static_cast<int32_t>(rbx7 - 1);
            rax4 = rax12;
        }
    }
    return rax4;
}

void fun_180001070() {
    fun_180001660();
    goto 0x180001e8c;
}

int64_t fun_180001630() {
    return 0;
}

void fun_1800024f0(int64_t* rcx) {
    *rcx = reinterpret_cast<int64_t>("@%");
    goto fun_180002d4e;
}

int64_t fun_180002c40() {
    return "system";
}

struct s93 {
    signed char[72] pad72;
    int64_t f72;
};

void fun_180003080() {
    int64_t rcx1;
    struct s93* rdx2;

    rcx1 = rdx2->f72;
    fun_180001c30(rcx1, 0x180008390);
    return;
}

struct s94 {
    signed char[1] pad1;
    int64_t f1;
};

struct s95 {
    signed char[104] pad104;
    struct s94* f104;
    signed char[8] pad120;
    struct s0* f120;
};

int64_t fun_18000340b() {
    struct s94* rax1;
    struct s95* rdx2;
    int64_t* rcx3;
    struct s0* rax4;

    rax1 = rdx2->f104;
    rdx2->f104 = rax1;
    rcx3 = &rax1->f1;
    *reinterpret_cast<int32_t*>(&rax4) = 0;
    *reinterpret_cast<int32_t*>(&rax4 + 4) = 0;
    if (rcx3 && (rax4 = fun_18000240c(rcx3), !rax4)) {
        rax4 = fun_180002704();
    }
    rdx2->f120 = rax4;
    return fun_180002640;
}

int64_t g18000c010 = 0x180007118;

void fun_1800034a0() {
    g18000c010 = 0x180007088;
    return;
}

struct s96 {
    signed char[144] pad144;
    int64_t f144;
};

void fun_1800047d1() {
    int64_t rcx1;
    struct s96* rdx2;

    rcx1 = rdx2->f144;
    fun_180001c30(rcx1, 0x180008390);
    return;
}

void fun_1800054dd() {
    goto 0x180004abc;
}

void fun_180006040(int64_t rcx, int64_t rdx) {
    if (!rdx) {
        return;
    } else {
        goto HeapFree;
    }
}

struct s97 {
    int64_t f0;
    int64_t f8;
};

int64_t DllGetClassObject(struct s97* rcx, int64_t rdx, struct s0* r8, struct s0* r9) {
    int64_t rax5;
    int64_t rax6;
    int64_t rax7;
    int32_t esi8;
    int64_t* rcx9;
    struct s0* rax10;
    struct s0* rbx11;
    int32_t eax12;
    int64_t rax13;

    rax5 = g180008350;
    rax6 = rax5 - rcx->f0;
    if (!rax6) {
        rax7 = g180008358;
        rax6 = rax7 - rcx->f8;
    }
    if (rax6) {
        esi8 = 0x80040111;
        goto addr_1800034dc_5;
    }
    *reinterpret_cast<int32_t*>(&rcx9) = static_cast<int32_t>(rax6 + 16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
    rax10 = fun_180001c10(rcx9, 0x180008390, r8, r9);
    rbx11 = rax10;
    if (!rax10) {
        *reinterpret_cast<int32_t*>(&rbx11) = 0;
        *reinterpret_cast<int32_t*>(&rbx11 + 4) = 0;
    } else {
        *reinterpret_cast<struct s0**>(&rbx11->f0) = reinterpret_cast<struct s0*>(0x180007c70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx11) + 8) = 1;
        ++g18000c7a0;
    }
    if (rbx11) 
        goto addr_18000110c_10;
    esi8 = 0x8007000e;
    goto addr_1800034dc_5;
    addr_18000110c_10:
    eax12 = reinterpret_cast<int32_t>(g180008160(rbx11, rdx, r8));
    esi8 = eax12;
    g180008160(rbx11);
    if (esi8 < 0) {
        addr_1800034dc_5:
        if (r8) {
            *reinterpret_cast<struct s0**>(&r8->f0) = reinterpret_cast<struct s0*>(0);
            goto addr_18000113b_13;
        }
    } else {
        addr_18000113b_13:
        *reinterpret_cast<int32_t*>(&rax13) = esi8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
        return rax13;
    }
}

int64_t fun_180001640(int64_t rcx) {
    return rcx;
}

void fun_180002500() {
    goto fun_180002d4e;
}

void fun_18000309f() {
    goto 0x180003714;
}

void fun_1800034b0() {
    goto fun_1800016a4;
}

void fun_1800054e9() {
    goto 0x180004afc;
}

struct s98 {
    signed char[32] pad32;
    int32_t f32;
};

int64_t fun_180001650(struct s98* rcx) {
    rcx->f32 = rcx->f32 + 1;
    return reinterpret_cast<int64_t>(rcx) + 16;
}

void fun_180002105() {
    goto 0x18000208c;
}

struct s0* fun_180002510(struct s0* rcx, struct s0* rdx, struct s0* r8) {
    *reinterpret_cast<struct s0**>(&rcx->f0) = reinterpret_cast<struct s0*>(0x180007088);
    if (*reinterpret_cast<unsigned char*>(&rdx) & 1) {
        fun_180001bcc(rcx, rdx, r8);
    }
    return rcx;
}

void fun_1800030af() {
    goto 0x180003714;
}

void fun_1800034c0() {
    g18000c770 = reinterpret_cast<int64_t>("p_");
    return;
}

void fun_1800054f5() {
    goto 0x180004afc;
}

void fun_180002111() {
    goto 0x18000208c;
}

struct s99 {
    signed char[40] pad40;
    int32_t f40;
    signed char[4] pad48;
    int32_t f48;
    signed char[112] pad164;
    int32_t f164;
    signed char[32] pad200;
    int32_t** f200;
    signed char[56] pad264;
    int32_t** f264;
};

int64_t fun_1800030bf(int32_t** rcx, struct s99* rdx) {
    int32_t edx3;
    int32_t** rdx4;
    int64_t rcx5;
    int32_t eax6;
    int64_t rax7;

    rdx->f264 = rcx;
    edx3 = **rcx;
    rdx->f164 = edx3;
    rdx->f200 = rcx;
    rdx->f40 = edx3;
    if (rdx->f40 != 0xe06d7363) {
        rdx->f48 = 0;
    } else {
        rdx4 = rdx->f200;
        *reinterpret_cast<int32_t*>(&rcx5) = rdx->f40;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
        eax6 = fun_180001c35(rcx5, rdx4);
        rdx->f48 = eax6;
    }
    *reinterpret_cast<int32_t*>(&rax7) = rdx->f48;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
    return rax7;
}

struct s100 {
    signed char[264] pad264;
    int64_t f264;
    signed char[4] pad276;
    signed char f276;
};

struct s101 {
    int32_t f0;
    signed char[16] pad20;
    int32_t f20;
    struct s0* f24;
};

int64_t CertSerializeCertificateStoreElement = 0xb0d2;

int64_t fun_180005510(struct s100* rcx, int32_t* rdx, struct s101* r8) {
    int64_t rcx4;
    int32_t eax5;
    struct s0* rax6;
    int64_t rcx7;
    void* r9_8;
    struct s0* r8_9;
    int64_t rdx10;
    int32_t eax11;
    uint32_t eax12;
    uint32_t ebx13;
    struct s5* rcx14;
    struct s5* rcx15;
    int64_t rax16;
    uint32_t eax17;
    uint32_t ebx18;
    struct s5* rcx19;
    struct s5* rcx20;

    __asm__("movups xmm0, [rip+0x2e24]");
    r8->f0 = 0xfffffe03;
    __asm__("movups [r8+0x4], xmm0");
    if (!rcx->f276) {
        rcx4 = rcx->f264;
        eax5 = reinterpret_cast<int32_t>(CertSerializeCertificateStoreElement(rcx4));
        if (eax5) {
            rax6 = reinterpret_cast<struct s0*>(g18000e010(0));
            if (rax6) {
                rcx7 = rcx->f264;
                r9_8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32 - 8 + 8 - 8 + 8 + 48);
                r8_9 = rax6;
                *reinterpret_cast<int32_t*>(&rdx10) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
                eax11 = reinterpret_cast<int32_t>(CertSerializeCertificateStoreElement(rcx7));
                if (eax11) {
                    r8->f20 = 0;
                    r8->f24 = rax6;
                } else {
                    eax12 = reinterpret_cast<uint32_t>(GetLastError(rcx7));
                    ebx13 = eax12;
                    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax12) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax12 == 0))) {
                        ebx13 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax12)) | 0x80070000;
                    }
                    rcx14 = g18000c018;
                    if (rcx14 != 0x18000c018 && rcx14->f28 & 1) {
                        rcx15 = rcx14->f16;
                        r8_9 = reinterpret_cast<struct s0*>(0x1800092f8);
                        *reinterpret_cast<int32_t*>(&rdx10) = 17;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = 0;
                        *reinterpret_cast<uint32_t*>(&r9_8) = ebx13;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = 0;
                        fun_18000481c(rcx15, 17, 0x1800092f8, *reinterpret_cast<uint32_t*>(&r9_8));
                    }
                    g18000e000(rax6, rdx10, r8_9, r9_8);
                    *reinterpret_cast<uint32_t*>(&rax16) = ebx13;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
                    goto addr_18000566d_11;
                }
            } else {
                *reinterpret_cast<uint32_t*>(&rax16) = 0x8007000e;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
                goto addr_18000566d_11;
            }
        } else {
            eax17 = reinterpret_cast<uint32_t>(GetLastError(rcx4));
            ebx18 = eax17;
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax17) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax17 == 0))) {
                ebx18 = static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax17)) | 0x80070000;
            }
            rcx19 = g18000c018;
            if (rcx19 != 0x18000c018 && rcx19->f28 & 1) {
                rcx20 = rcx19->f16;
                fun_18000481c(rcx20, 16, 0x1800092f8, ebx18);
            }
            *reinterpret_cast<uint32_t*>(&rax16) = ebx18;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
            goto addr_18000566d_11;
        }
    } else {
        r8->f20 = 0;
        r8->f24 = reinterpret_cast<struct s0*>(0);
    }
    *rdx = 2;
    *reinterpret_cast<uint32_t*>(&rax16) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
    addr_18000566d_11:
    return rax16;
}

void fun_18000211d(int64_t rcx, int64_t rdx, int64_t r8, int64_t r9) {
    int64_t rax5;

    __asm__("movdqa [rsp+0x20], xmm0");
    __asm__("movdqa [rsp+0x30], xmm1");
    __asm__("movdqa [rsp+0x40], xmm2");
    __asm__("movdqa [rsp+0x50], xmm3");
    rax5 = fun_180005ed0(0x18000a3c8, 0x18000e020);
    __asm__("movdqa xmm0, [rsp+0x20]");
    __asm__("movdqa xmm1, [rsp+0x30]");
    __asm__("movdqa xmm2, [rsp+0x40]");
    __asm__("movdqa xmm3, [rsp+0x50]");
    goto rax5;
}

void fun_1800021a2(int64_t rcx, int64_t rdx, int64_t r8, int64_t r9) {
    int64_t rax5;

    __asm__("movdqa [rsp+0x20], xmm0");
    __asm__("movdqa [rsp+0x30], xmm1");
    __asm__("movdqa [rsp+0x40], xmm2");
    __asm__("movdqa [rsp+0x50], xmm3");
    rax5 = fun_180005ed0(0x18000a3e8, 0x18000e050);
    __asm__("movdqa xmm0, [rsp+0x20]");
    __asm__("movdqa xmm1, [rsp+0x30]");
    __asm__("movdqa xmm2, [rsp+0x40]");
    __asm__("movdqa xmm3, [rsp+0x50]");
    goto rax5;
}

void fun_180002227(int64_t rcx, int64_t rdx, int64_t r8, int64_t r9) {
    int64_t rax5;

    __asm__("movdqa [rsp+0x20], xmm0");
    __asm__("movdqa [rsp+0x30], xmm1");
    __asm__("movdqa [rsp+0x40], xmm2");
    __asm__("movdqa [rsp+0x50], xmm3");
    rax5 = fun_180005ed0(0x18000a408, "'\"");
    __asm__("movdqa xmm0, [rsp+0x20]");
    __asm__("movdqa xmm1, [rsp+0x30]");
    __asm__("movdqa xmm2, [rsp+0x40]");
    __asm__("movdqa xmm3, [rsp+0x50]");
    goto rax5;
}

void fun_1800022ac(int64_t rcx, int64_t rdx, int64_t r8, int64_t r9) {
    int64_t rax5;

    __asm__("movdqa [rsp+0x20], xmm0");
    __asm__("movdqa [rsp+0x30], xmm1");
    __asm__("movdqa [rsp+0x40], xmm2");
    __asm__("movdqa [rsp+0x50], xmm3");
    rax5 = fun_180005ed0(0x18000a428, 0x18000e040);
    __asm__("movdqa xmm0, [rsp+0x20]");
    __asm__("movdqa xmm1, [rsp+0x30]");
    __asm__("movdqa xmm2, [rsp+0x40]");
    __asm__("movdqa xmm3, [rsp+0x50]");
    goto rax5;
}

void fun_180002331(int64_t rcx, int64_t rdx, int64_t r8, int64_t r9) {
    int64_t rax5;

    __asm__("movdqa [rsp+0x20], xmm0");
    __asm__("movdqa [rsp+0x30], xmm1");
    __asm__("movdqa [rsp+0x40], xmm2");
    __asm__("movdqa [rsp+0x50], xmm3");
    rax5 = fun_180005ed0(0x18000a448, "1#");
    __asm__("movdqa xmm0, [rsp+0x20]");
    __asm__("movdqa xmm1, [rsp+0x30]");
    __asm__("movdqa xmm2, [rsp+0x40]");
    __asm__("movdqa xmm3, [rsp+0x50]");
    goto rax5;
}

void fun_1800023b6() {
    goto 0x18000233d;
}

void fun_1800023c2() {
    goto 0x18000233d;
}

void fun_1800023ce() {
    goto 0x18000233d;
}

void fun_1800023da() {
    goto 0x18000233d;
}

void fun_1800023e6() {
    goto 0x18000233d;
}

void fun_1800023f2() {
    goto 0x18000233d;
}

void fun_1800023fe() {
    goto 0x18000233d;
}
