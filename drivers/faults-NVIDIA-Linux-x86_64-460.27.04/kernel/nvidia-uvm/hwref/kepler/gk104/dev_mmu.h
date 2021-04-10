/*******************************************************************************
    Copyright (c) 2003-2016 NVIDIA Corporation

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to
    deal in the Software without restriction, including without limitation the
    rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
    sell copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.

*******************************************************************************/


#ifndef __gk104_dev_mmu_h__
#define __gk104_dev_mmu_h__
/* This file is autogenerated.  Do not edit */
#define NV_MMU_PDE                                                      /* ----G */
#define NV_MMU_PDE_APERTURE_BIG                       (0*32+1):(0*32+0) /* RWXVF */
#define NV_MMU_PDE_APERTURE_BIG_INVALID                      0x00000000 /* RW--V */
#define NV_MMU_PDE_APERTURE_BIG_VIDEO_MEMORY                 0x00000001 /* RW--V */
#define NV_MMU_PDE_APERTURE_BIG_SYSTEM_COHERENT_MEMORY       0x00000002 /* RW--V */
#define NV_MMU_PDE_APERTURE_BIG_SYSTEM_NON_COHERENT_MEMORY   0x00000003 /* RW--V */
#define NV_MMU_PDE_SIZE                               (0*32+3):(0*32+2) /* RWXVF */
#define NV_MMU_PDE_SIZE_FULL                                 0x00000000 /* RW--V */
#define NV_MMU_PDE_SIZE_HALF                                 0x00000001 /* RW--V */
#define NV_MMU_PDE_SIZE_QUARTER                              0x00000002 /* RW--V */
#define NV_MMU_PDE_SIZE_EIGHTH                               0x00000003 /* RW--V */
#define NV_MMU_PDE_ADDRESS_BIG_SYS                   (0*32+31):(0*32+4) /* RWXVF */
#define NV_MMU_PDE_ADDRESS_BIG_VID                   (0*32+31-3):(0*32+4) /* RWXVF */
#define NV_MMU_PDE_ADDRESS_BIG_VID_PEER             (0*32+31):(0*32+32-3) /* RWXVF */
#define NV_MMU_PDE_ADDRESS_BIG_VID_PEER_0                    0x00000000 /* RW--V */
#define NV_MMU_PDE_APERTURE_SMALL                     (1*32+1):(1*32+0) /* RWXVF */
#define NV_MMU_PDE_APERTURE_SMALL_INVALID                    0x00000000 /* RW--V */
#define NV_MMU_PDE_APERTURE_SMALL_VIDEO_MEMORY               0x00000001 /* RW--V */
#define NV_MMU_PDE_APERTURE_SMALL_SYSTEM_COHERENT_MEMORY     0x00000002 /* RW--V */
#define NV_MMU_PDE_APERTURE_SMALL_SYSTEM_NON_COHERENT_MEMORY 0x00000003 /* RW--V */
#define NV_MMU_PDE_VOL_SMALL                          (1*32+2):(1*32+2) /* RWXVF */
#define NV_MMU_PDE_VOL_SMALL_TRUE                            0x00000001 /* RW--V */
#define NV_MMU_PDE_VOL_SMALL_FALSE                           0x00000000 /* RW--V */
#define NV_MMU_PDE_VOL_BIG                            (1*32+3):(1*32+3) /* RWXVF */
#define NV_MMU_PDE_VOL_BIG_TRUE                              0x00000001 /* RW--V */
#define NV_MMU_PDE_VOL_BIG_FALSE                             0x00000000 /* RW--V */
#define NV_MMU_PDE_ADDRESS_SMALL_SYS                 (1*32+31):(1*32+4) /* RWXVF */
#define NV_MMU_PDE_ADDRESS_SMALL_VID                 (1*32+31-3):(1*32+4) /* RWXVF */
#define NV_MMU_PDE_ADDRESS_SMALL_VID_PEER           (1*32+31):(1*32+32-3) /* RWXVF */
#define NV_MMU_PDE_ADDRESS_SMALL_VID_PEER_0                  0x00000000 /* RW--V */
#define NV_MMU_PDE_ADDRESS_SHIFT                             0x0000000c /*       */
#define NV_MMU_PDE__SIZE                                              8
#define NV_MMU_PTE                                                      /* ----G */
#define NV_MMU_PTE_VALID                              (0*32+0):(0*32+0) /* RWXVF */
#define NV_MMU_PTE_VALID_TRUE                                       0x1 /* RW--V */
#define NV_MMU_PTE_VALID_FALSE                                      0x0 /* RW--V */
#define NV_MMU_PTE_PRIVILEGE                          (0*32+1):(0*32+1) /* RWXVF */
#define NV_MMU_PTE_PRIVILEGE_TRUE                                   0x1 /* RW--V */
#define NV_MMU_PTE_PRIVILEGE_FALSE                                  0x0 /* RW--V */
#define NV_MMU_PTE_READ_ONLY                          (0*32+2):(0*32+2) /* RWXVF */
#define NV_MMU_PTE_READ_ONLY_TRUE                                  0x1  /* RW--V */
#define NV_MMU_PTE_READ_ONLY_FALSE                                 0x0  /* RW--V */
#define NV_MMU_PTE_ENCRYPTED                          (0*32+3):(0*32+3) /* RWXVF */
#define NV_MMU_PTE_ENCRYPTED_TRUE                            0x00000001 /* R---V */
#define NV_MMU_PTE_ENCRYPTED_FALSE                           0x00000000 /* R---V */
#define NV_MMU_PTE_ADDRESS_SYS                      (0*32+31):(0*32+4) /* RWXVF */
#define NV_MMU_PTE_ADDRESS_VID                      (0*32+31-3):(0*32+4) /* RWXVF */
#define NV_MMU_PTE_ADDRESS_VID_PEER                (0*32+31):(0*32+32-3) /* RWXVF */
#define NV_MMU_PTE_ADDRESS_VID_PEER_0                       0x00000000 /* RW--V */
#define NV_MMU_PTE_ADDRESS_VID_PEER_1                       0x00000001 /* RW--V */
#define NV_MMU_PTE_ADDRESS_VID_PEER_2                       0x00000002 /* RW--V */
#define NV_MMU_PTE_ADDRESS_VID_PEER_3                       0x00000003 /* RW--V */
#define NV_MMU_PTE_ADDRESS_VID_PEER_4                       0x00000004 /* RW--V */
#define NV_MMU_PTE_ADDRESS_VID_PEER_5                       0x00000005 /* RW--V */
#define NV_MMU_PTE_ADDRESS_VID_PEER_6                       0x00000006 /* RW--V */
#define NV_MMU_PTE_ADDRESS_VID_PEER_7                       0x00000007 /* RW--V */
#define NV_MMU_PTE_VOL                                (1*32+0):(1*32+0) /* RWXVF */
#define NV_MMU_PTE_VOL_TRUE                                  0x00000001 /* RW--V */
#define NV_MMU_PTE_VOL_FALSE                                 0x00000000 /* RW--V */
#define NV_MMU_PTE_APERTURE                           (1*32+2):(1*32+1) /* RWXVF */
#define NV_MMU_PTE_APERTURE_VIDEO_MEMORY                     0x00000000 /* RW--V */
#define NV_MMU_PTE_APERTURE_PEER_MEMORY                      0x00000001 /* RW--V */
#define NV_MMU_PTE_APERTURE_SYSTEM_COHERENT_MEMORY           0x00000002 /* RW--V */
#define NV_MMU_PTE_APERTURE_SYSTEM_NON_COHERENT_MEMORY       0x00000003 /* RW--V */
#define NV_MMU_PTE_LOCK                               (1*32+3):(1*32+3) /* RWXVF */
#define NV_MMU_PTE_LOCK_TRUE                                        0x1 /* RW--V */
#define NV_MMU_PTE_LOCK_FALSE                                       0x0 /* RW--V */
#define NV_MMU_PTE_COMPTAGLINE                      (1*32+28):(1*32+12) /* RWXVF */
#define NV_MMU_PTE_READ_DISABLE                     (1*32+30):(1*32+30) /* RWXVF */
#define NV_MMU_PTE_READ_DISABLE_TRUE                               0x1  /* RW--V */
#define NV_MMU_PTE_READ_DISABLE_FALSE                              0x0  /* RW--V */
#define NV_MMU_PTE_WRITE_DISABLE                    (1*32+31):(1*32+31) /* RWXVF */
#define NV_MMU_PTE_WRITE_DISABLE_TRUE                              0x1  /* RW--V */
#define NV_MMU_PTE_WRITE_DISABLE_FALSE                             0x0  /* RW--V */
#define NV_MMU_PTE_ADDRESS_SHIFT                             0x0000000c /*       */
#define NV_MMU_PTE__SIZE                                             8
#define NV_MMU_PTE_COMPTAGS_NONE                                    0x0 /*       */
#define NV_MMU_PTE_COMPTAGS_1                                       0x1 /*       */
#define NV_MMU_PTE_COMPTAGS_2                                       0x2 /*       */
#define NV_MMU_PTE_KIND                              (1*32+11):(1*32+4) /* RWXVF */
#define NV_MMU_PTE_KIND_INVALID                       0xff /* R---V */
#define NV_MMU_PTE_KIND_PITCH                         0x00 /* R---V */
#define NV_MMU_PTE_KIND_Z16                           0x01 /* R---V */
#define NV_MMU_PTE_KIND_Z16_2C                        0x02 /* R---V */
#define NV_MMU_PTE_KIND_Z16_MS2_2C                    0x03 /* R---V */
#define NV_MMU_PTE_KIND_Z16_MS4_2C                    0x04 /* R---V */
#define NV_MMU_PTE_KIND_Z16_MS8_2C                    0x05 /* R---V */
#define NV_MMU_PTE_KIND_Z16_MS16_2C                   0x06 /* R---V */
#define NV_MMU_PTE_KIND_Z16_2Z                        0x07 /* R---V */
#define NV_MMU_PTE_KIND_Z16_MS2_2Z                    0x08 /* R---V */
#define NV_MMU_PTE_KIND_Z16_MS4_2Z                    0x09 /* R---V */
#define NV_MMU_PTE_KIND_Z16_MS8_2Z                    0x0a /* R---V */
#define NV_MMU_PTE_KIND_Z16_MS16_2Z                   0x0b /* R---V */
#define NV_MMU_PTE_KIND_Z16_4CZ                       0x0c /* R---V */
#define NV_MMU_PTE_KIND_Z16_MS2_4CZ                   0x0d /* R---V */
#define NV_MMU_PTE_KIND_Z16_MS4_4CZ                   0x0e /* R---V */
#define NV_MMU_PTE_KIND_Z16_MS8_4CZ                   0x0f /* R---V */
#define NV_MMU_PTE_KIND_Z16_MS16_4CZ                  0x10 /* R---V */
#define NV_MMU_PTE_KIND_S8Z24                         0x11 /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_1Z                      0x12 /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_MS2_1Z                  0x13 /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_MS4_1Z                  0x14 /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_MS8_1Z                  0x15 /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_MS16_1Z                 0x16 /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_2CZ                     0x17 /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_MS2_2CZ                 0x18 /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_MS4_2CZ                 0x19 /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_MS8_2CZ                 0x1a /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_MS16_2CZ                0x1b /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_2CS                     0x1c /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_MS2_2CS                 0x1d /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_MS4_2CS                 0x1e /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_MS8_2CS                 0x1f /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_MS16_2CS                0x20 /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_4CSZV                   0x21 /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_MS2_4CSZV               0x22 /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_MS4_4CSZV               0x23 /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_MS8_4CSZV               0x24 /* R---V */
#define NV_MMU_PTE_KIND_S8Z24_MS16_4CSZV              0x25 /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS4_VC12                0x26 /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS4_VC4                 0x27 /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS8_VC8                 0x28 /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS8_VC24                0x29 /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS4_VC12_1ZV            0x2e /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS4_VC4_1ZV             0x2f /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS8_VC8_1ZV             0x30 /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS8_VC24_1ZV            0x31 /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS4_VC12_2CS            0x32 /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS4_VC4_2CS             0x33 /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS8_VC8_2CS             0x34 /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS8_VC24_2CS            0x35 /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS4_VC12_2CZV           0x3a /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS4_VC4_2CZV            0x3b /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS8_VC8_2CZV            0x3c /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS8_VC24_2CZV           0x3d /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS4_VC12_2ZV            0x3e /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS4_VC4_2ZV             0x3f /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS8_VC8_2ZV             0x40 /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS8_VC24_2ZV            0x41 /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS4_VC12_4CSZV          0x42 /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS4_VC4_4CSZV           0x43 /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS8_VC8_4CSZV           0x44 /* R---V */
#define NV_MMU_PTE_KIND_V8Z24_MS8_VC24_4CSZV          0x45 /* R---V */
#define NV_MMU_PTE_KIND_Z24S8                         0x46 /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_1Z                      0x47 /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_MS2_1Z                  0x48 /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_MS4_1Z                  0x49 /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_MS8_1Z                  0x4a /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_MS16_1Z                 0x4b /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_2CS                     0x4c /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_MS2_2CS                 0x4d /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_MS4_2CS                 0x4e /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_MS8_2CS                 0x4f /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_MS16_2CS                0x50 /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_2CZ                     0x51 /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_MS2_2CZ                 0x52 /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_MS4_2CZ                 0x53 /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_MS8_2CZ                 0x54 /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_MS16_2CZ                0x55 /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_4CSZV                   0x56 /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_MS2_4CSZV               0x57 /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_MS4_4CSZV               0x58 /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_MS8_4CSZV               0x59 /* R---V */
#define NV_MMU_PTE_KIND_Z24S8_MS16_4CSZV              0x5a /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS4_VC12                0x5b /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS4_VC4                 0x5c /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS8_VC8                 0x5d /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS8_VC24                0x5e /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS4_VC12_1ZV            0x63 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS4_VC4_1ZV             0x64 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS8_VC8_1ZV             0x65 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS8_VC24_1ZV            0x66 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS4_VC12_2CS            0x67 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS4_VC4_2CS             0x68 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS8_VC8_2CS             0x69 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS8_VC24_2CS            0x6a /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS4_VC12_2CZV           0x6f /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS4_VC4_2CZV            0x70 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS8_VC8_2CZV            0x71 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS8_VC24_2CZV           0x72 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS4_VC12_2ZV            0x73 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS4_VC4_2ZV             0x74 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS8_VC8_2ZV             0x75 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS8_VC24_2ZV            0x76 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS4_VC12_4CSZV          0x77 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS4_VC4_4CSZV           0x78 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS8_VC8_4CSZV           0x79 /* R---V */
#define NV_MMU_PTE_KIND_Z24V8_MS8_VC24_4CSZV          0x7a /* R---V */
#define NV_MMU_PTE_KIND_ZF32                          0x7b /* R---V */
#define NV_MMU_PTE_KIND_ZF32_1Z                       0x7c /* R---V */
#define NV_MMU_PTE_KIND_ZF32_MS2_1Z                   0x7d /* R---V */
#define NV_MMU_PTE_KIND_ZF32_MS4_1Z                   0x7e /* R---V */
#define NV_MMU_PTE_KIND_ZF32_MS8_1Z                   0x7f /* R---V */
#define NV_MMU_PTE_KIND_ZF32_MS16_1Z                  0x80 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_2CS                      0x81 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_MS2_2CS                  0x82 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_MS4_2CS                  0x83 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_MS8_2CS                  0x84 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_MS16_2CS                 0x85 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_2CZ                      0x86 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_MS2_2CZ                  0x87 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_MS4_2CZ                  0x88 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_MS8_2CZ                  0x89 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_MS16_2CZ                 0x8a /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS4_VC12        0x8b /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS4_VC4         0x8c /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS8_VC8         0x8d /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS8_VC24        0x8e /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS4_VC12_1CS    0x8f /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS4_VC4_1CS     0x90 /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS8_VC8_1CS     0x91 /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS8_VC24_1CS    0x92 /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS4_VC12_1ZV    0x97 /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS4_VC4_1ZV     0x98 /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS8_VC8_1ZV     0x99 /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS8_VC24_1ZV    0x9a /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS4_VC12_1CZV   0x9b /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS4_VC4_1CZV    0x9c /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS8_VC8_1CZV    0x9d /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS8_VC24_1CZV   0x9e /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS4_VC12_2CS    0x9f /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS4_VC4_2CS     0xa0 /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS8_VC8_2CS     0xa1 /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS8_VC24_2CS    0xa2 /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS4_VC12_2CSZV  0xa3 /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS4_VC4_2CSZV   0xa4 /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS8_VC8_2CSZV   0xa5 /* R---V */
#define NV_MMU_PTE_KIND_X8Z24_X16V8S8_MS8_VC24_2CSZV  0xa6 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS4_VC12         0xa7 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS4_VC4          0xa8 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS8_VC8          0xa9 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS8_VC24         0xaa /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS4_VC12_1CS     0xab /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS4_VC4_1CS      0xac /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS8_VC8_1CS      0xad /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS8_VC24_1CS     0xae /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS4_VC12_1ZV     0xb3 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS4_VC4_1ZV      0xb4 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS8_VC8_1ZV      0xb5 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS8_VC24_1ZV     0xb6 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS4_VC12_1CZV    0xb7 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS4_VC4_1CZV     0xb8 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS8_VC8_1CZV     0xb9 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS8_VC24_1CZV    0xba /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS4_VC12_2CS     0xbb /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS4_VC4_2CS      0xbc /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS8_VC8_2CS      0xbd /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS8_VC24_2CS     0xbe /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS4_VC12_2CSZV   0xbf /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS4_VC4_2CSZV    0xc0 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS8_VC8_2CSZV    0xc1 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X16V8S8_MS8_VC24_2CSZV   0xc2 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X24S8                    0xc3 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X24S8_1CS                0xc4 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X24S8_MS2_1CS            0xc5 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X24S8_MS4_1CS            0xc6 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X24S8_MS8_1CS            0xc7 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X24S8_MS16_1CS           0xc8 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X24S8_2CSZV              0xce /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X24S8_MS2_2CSZV          0xcf /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X24S8_MS4_2CSZV          0xd0 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X24S8_MS8_2CSZV          0xd1 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X24S8_MS16_2CSZV         0xd2 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X24S8_2CS                0xd3 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X24S8_MS2_2CS            0xd4 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X24S8_MS4_2CS            0xd5 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X24S8_MS8_2CS            0xd6 /* R---V */
#define NV_MMU_PTE_KIND_ZF32_X24S8_MS16_2CS           0xd7 /* R---V */
#define NV_MMU_PTE_KIND_GENERIC_16BX2                 0xfe /* R---V */
#define NV_MMU_PTE_KIND_C32_2C                        0xd8 /* R---V */
#define NV_MMU_PTE_KIND_C32_2CBR                      0xd9 /* R---V */
#define NV_MMU_PTE_KIND_C32_2CBA                      0xda /* R---V */
#define NV_MMU_PTE_KIND_C32_2CRA                      0xdb /* R---V */
#define NV_MMU_PTE_KIND_C32_2BRA                      0xdc /* R---V */
#define NV_MMU_PTE_KIND_C32_MS2_2C                    0xdd /* R---V */
#define NV_MMU_PTE_KIND_C32_MS2_2CBR                  0xde /* R---V */
#define NV_MMU_PTE_KIND_C32_MS2_2CRA                  0xcc /* R---V */
#define NV_MMU_PTE_KIND_C32_MS4_2C                    0xdf /* R---V */
#define NV_MMU_PTE_KIND_C32_MS4_2CBR                  0xe0 /* R---V */
#define NV_MMU_PTE_KIND_C32_MS4_2CBA                  0xe1 /* R---V */
#define NV_MMU_PTE_KIND_C32_MS4_2CRA                  0xe2 /* R---V */
#define NV_MMU_PTE_KIND_C32_MS4_2BRA                  0xe3 /* R---V */
#define NV_MMU_PTE_KIND_C32_MS8_MS16_2C               0xe4 /* R---V */
#define NV_MMU_PTE_KIND_C32_MS8_MS16_2CRA             0xe5 /* R---V */
#define NV_MMU_PTE_KIND_C64_2C                        0xe6 /* R---V */
#define NV_MMU_PTE_KIND_C64_2CBR                      0xe7 /* R---V */
#define NV_MMU_PTE_KIND_C64_2CBA                      0xe8 /* R---V */
#define NV_MMU_PTE_KIND_C64_2CRA                      0xe9 /* R---V */
#define NV_MMU_PTE_KIND_C64_2BRA                      0xea /* R---V */
#define NV_MMU_PTE_KIND_C64_MS2_2C                    0xeb /* R---V */
#define NV_MMU_PTE_KIND_C64_MS2_2CBR                  0xec /* R---V */
#define NV_MMU_PTE_KIND_C64_MS2_2CRA                  0xcd /* R---V */
#define NV_MMU_PTE_KIND_C64_MS4_2C                    0xed /* R---V */
#define NV_MMU_PTE_KIND_C64_MS4_2CBR                  0xee /* R---V */
#define NV_MMU_PTE_KIND_C64_MS4_2CBA                  0xef /* R---V */
#define NV_MMU_PTE_KIND_C64_MS4_2CRA                  0xf0 /* R---V */
#define NV_MMU_PTE_KIND_C64_MS4_2BRA                  0xf1 /* R---V */
#define NV_MMU_PTE_KIND_C64_MS8_MS16_2C               0xf2 /* R---V */
#define NV_MMU_PTE_KIND_C64_MS8_MS16_2CRA             0xf3 /* R---V */
#define NV_MMU_PTE_KIND_C128_2C                       0xf4 /* R---V */
#define NV_MMU_PTE_KIND_C128_2CR                      0xf5 /* R---V */
#define NV_MMU_PTE_KIND_C128_MS2_2C                   0xf6 /* R---V */
#define NV_MMU_PTE_KIND_C128_MS2_2CR                  0xf7 /* R---V */
#define NV_MMU_PTE_KIND_C128_MS4_2C                   0xf8 /* R---V */
#define NV_MMU_PTE_KIND_C128_MS4_2CR                  0xf9 /* R---V */
#define NV_MMU_PTE_KIND_C128_MS8_MS16_2C              0xfa /* R---V */
#define NV_MMU_PTE_KIND_C128_MS8_MS16_2CR             0xfb /* R---V */
#define NV_MMU_PTE_KIND_X8C24                         0xfc /* R---V */
#define NV_MMU_PTE_KIND_PITCH_NO_SWIZZLE              0xfd /* R---V */
#define NV_MMU_PTE_KIND_SMSKED_MESSAGE                0xca /* R---V */
#define NV_MMU_PTE_KIND_SMHOST_MESSAGE                0xcb /* R---V */
#endif // __gk104_dev_mmu_h__
