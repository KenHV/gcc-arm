/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define WCGR0 96
#define DOM_CC_X_AND_Y 0
#define WCGR1 97
#define SP_REGNUM 13
#define APSRGE_REGNUM 105
#define VFPCC_REGNUM 101
#define CMP_CMN 2
#define CMP_CMP 0
#define NUM_OF_COND_CMP 4
#define R0_REGNUM 0
#define VPR_REGNUM 106
#define RA_AUTH_CODE 107
#define DOM_CC_X_OR_Y 2
#define APSRQ_REGNUM 104
#define CMN_CMN 3
#define CMN_CMP 1
#define FDPIC_REGNUM 9
#define CC_REGNUM 100
#define LAST_ARM_REGNUM 15
#define PC_REGNUM 15
#define R4_REGNUM 4
#define LR_REGNUM 14
#define R1_REGNUM 1
#define DOM_CC_NX_OR_Y 1
#define IP_REGNUM 12
#define WCGR2 98
#define WCGR3 99

enum unspec {
  UNSPEC_PUSH_MULT = 0,
  UNSPEC_PIC_SYM = 1,
  UNSPEC_PIC_BASE = 2,
  UNSPEC_PRLG_STK = 3,
  UNSPEC_REGISTER_USE = 4,
  UNSPEC_CHECK_ARCH = 5,
  UNSPEC_WSHUFH = 6,
  UNSPEC_WACC = 7,
  UNSPEC_TMOVMSK = 8,
  UNSPEC_WSAD = 9,
  UNSPEC_WSADZ = 10,
  UNSPEC_WMACS = 11,
  UNSPEC_WMACU = 12,
  UNSPEC_WMACSZ = 13,
  UNSPEC_WMACUZ = 14,
  UNSPEC_CLRDI = 15,
  UNSPEC_WALIGNI = 16,
  UNSPEC_TLS = 17,
  UNSPEC_PIC_LABEL = 18,
  UNSPEC_PIC_OFFSET = 19,
  UNSPEC_GOTSYM_OFF = 20,
  UNSPEC_THUMB1_CASESI = 21,
  UNSPEC_RBIT = 22,
  UNSPEC_SYMBOL_OFFSET = 23,
  UNSPEC_MEMORY_BARRIER = 24,
  UNSPEC_UNALIGNED_LOAD = 25,
  UNSPEC_UNALIGNED_STORE = 26,
  UNSPEC_PIC_UNIFIED = 27,
  UNSPEC_Q_SET = 28,
  UNSPEC_GE_SET = 29,
  UNSPEC_APSR_READ = 30,
  UNSPEC_LL = 31,
  UNSPEC_VRINTZ = 32,
  UNSPEC_VRINTP = 33,
  UNSPEC_VRINTM = 34,
  UNSPEC_VRINTR = 35,
  UNSPEC_VRINTX = 36,
  UNSPEC_VRINTA = 37,
  UNSPEC_PROBE_STACK = 38,
  UNSPEC_NONSECURE_MEM = 39,
  UNSPEC_SP_SET = 40,
  UNSPEC_SP_TEST = 41,
  UNSPEC_PIC_RESTORE = 42,
  UNSPEC_SXTAB16 = 43,
  UNSPEC_UXTAB16 = 44,
  UNSPEC_SXTB16 = 45,
  UNSPEC_UXTB16 = 46,
  UNSPEC_QADD8 = 47,
  UNSPEC_QSUB8 = 48,
  UNSPEC_SHADD8 = 49,
  UNSPEC_SHSUB8 = 50,
  UNSPEC_UHADD8 = 51,
  UNSPEC_UHSUB8 = 52,
  UNSPEC_UQADD8 = 53,
  UNSPEC_UQSUB8 = 54,
  UNSPEC_QADD16 = 55,
  UNSPEC_QASX = 56,
  UNSPEC_QSAX = 57,
  UNSPEC_QSUB16 = 58,
  UNSPEC_SHADD16 = 59,
  UNSPEC_SHASX = 60,
  UNSPEC_SHSAX = 61,
  UNSPEC_SHSUB16 = 62,
  UNSPEC_UHADD16 = 63,
  UNSPEC_UHASX = 64,
  UNSPEC_UHSAX = 65,
  UNSPEC_UHSUB16 = 66,
  UNSPEC_UQADD16 = 67,
  UNSPEC_UQASX = 68,
  UNSPEC_UQSAX = 69,
  UNSPEC_UQSUB16 = 70,
  UNSPEC_SMUSD = 71,
  UNSPEC_SMUSDX = 72,
  UNSPEC_USAD8 = 73,
  UNSPEC_USADA8 = 74,
  UNSPEC_SMLALD = 75,
  UNSPEC_SMLALDX = 76,
  UNSPEC_SMLSLD = 77,
  UNSPEC_SMLSLDX = 78,
  UNSPEC_SMLAWB = 79,
  UNSPEC_SMLAWT = 80,
  UNSPEC_SEL = 81,
  UNSPEC_SADD8 = 82,
  UNSPEC_SSUB8 = 83,
  UNSPEC_UADD8 = 84,
  UNSPEC_USUB8 = 85,
  UNSPEC_SADD16 = 86,
  UNSPEC_SASX = 87,
  UNSPEC_SSAX = 88,
  UNSPEC_SSUB16 = 89,
  UNSPEC_UADD16 = 90,
  UNSPEC_UASX = 91,
  UNSPEC_USAX = 92,
  UNSPEC_USUB16 = 93,
  UNSPEC_SMLAD = 94,
  UNSPEC_SMLADX = 95,
  UNSPEC_SMLSD = 96,
  UNSPEC_SMLSDX = 97,
  UNSPEC_SMUAD = 98,
  UNSPEC_SMUADX = 99,
  UNSPEC_SSAT16 = 100,
  UNSPEC_USAT16 = 101,
  UNSPEC_CDE = 102,
  UNSPEC_CDEA = 103,
  UNSPEC_VCDE = 104,
  UNSPEC_VCDEA = 105,
  UNSPEC_DLS = 106,
  UNSPEC_PAC_NOP = 107,
  UNSPEC_WADDC = 108,
  UNSPEC_WABS = 109,
  UNSPEC_WQMULWMR = 110,
  UNSPEC_WQMULMR = 111,
  UNSPEC_WQMULWM = 112,
  UNSPEC_WQMULM = 113,
  UNSPEC_WQMIAxyn = 114,
  UNSPEC_WQMIAxy = 115,
  UNSPEC_TANDC = 116,
  UNSPEC_TORC = 117,
  UNSPEC_TORVSC = 118,
  UNSPEC_TEXTRC = 119,
  UNSPEC_GET_FPSCR_NZCVQC = 120,
  UNSPEC_ASHIFT_SIGNED = 121,
  UNSPEC_ASHIFT_UNSIGNED = 122,
  UNSPEC_CRC32B = 123,
  UNSPEC_CRC32H = 124,
  UNSPEC_CRC32W = 125,
  UNSPEC_CRC32CB = 126,
  UNSPEC_CRC32CH = 127,
  UNSPEC_CRC32CW = 128,
  UNSPEC_AESD = 129,
  UNSPEC_AESE = 130,
  UNSPEC_AESIMC = 131,
  UNSPEC_AESMC = 132,
  UNSPEC_AES_PROTECT = 133,
  UNSPEC_SHA1C = 134,
  UNSPEC_SHA1M = 135,
  UNSPEC_SHA1P = 136,
  UNSPEC_SHA1H = 137,
  UNSPEC_SHA1SU0 = 138,
  UNSPEC_SHA1SU1 = 139,
  UNSPEC_SHA256H = 140,
  UNSPEC_SHA256H2 = 141,
  UNSPEC_SHA256SU0 = 142,
  UNSPEC_SHA256SU1 = 143,
  UNSPEC_VMULLP64 = 144,
  UNSPEC_LOAD_COUNT = 145,
  UNSPEC_VABAL_S = 146,
  UNSPEC_VABAL_U = 147,
  UNSPEC_VABD_F = 148,
  UNSPEC_VABD_S = 149,
  UNSPEC_VABD_U = 150,
  UNSPEC_VABDL_S = 151,
  UNSPEC_VABDL_U = 152,
  UNSPEC_VADD = 153,
  UNSPEC_VADDHN = 154,
  UNSPEC_VRADDHN = 155,
  UNSPEC_VADDL_S = 156,
  UNSPEC_VADDL_U = 157,
  UNSPEC_VADDW_S = 158,
  UNSPEC_VADDW_U = 159,
  UNSPEC_VBSL = 160,
  UNSPEC_VCAGE = 161,
  UNSPEC_VCAGT = 162,
  UNSPEC_VCALE = 163,
  UNSPEC_VCALT = 164,
  UNSPEC_VCEQ = 165,
  UNSPEC_VCGE = 166,
  UNSPEC_VCGEU = 167,
  UNSPEC_VCGT = 168,
  UNSPEC_VCGTU = 169,
  UNSPEC_VCLS = 170,
  UNSPEC_VCONCAT = 171,
  UNSPEC_VCVT = 172,
  UNSPEC_VCVT_S = 173,
  UNSPEC_VCVT_U = 174,
  UNSPEC_VCVT_S_N = 175,
  UNSPEC_VCVT_U_N = 176,
  UNSPEC_VCVT_HF_S_N = 177,
  UNSPEC_VCVT_HF_U_N = 178,
  UNSPEC_VCVT_SI_S_N = 179,
  UNSPEC_VCVT_SI_U_N = 180,
  UNSPEC_VCVTH_S = 181,
  UNSPEC_VCVTH_U = 182,
  UNSPEC_VCVTA_S = 183,
  UNSPEC_VCVTA_U = 184,
  UNSPEC_VCVTM_S = 185,
  UNSPEC_VCVTM_U = 186,
  UNSPEC_VCVTN_S = 187,
  UNSPEC_VCVTN_U = 188,
  UNSPEC_VCVTP_S = 189,
  UNSPEC_VCVTP_U = 190,
  UNSPEC_VEXT = 191,
  UNSPEC_VHADD_S = 192,
  UNSPEC_VHADD_U = 193,
  UNSPEC_VRHADD_S = 194,
  UNSPEC_VRHADD_U = 195,
  UNSPEC_VHSUB_S = 196,
  UNSPEC_VHSUB_U = 197,
  UNSPEC_VLD1 = 198,
  UNSPEC_VLD1X3A = 199,
  UNSPEC_VLD1X3B = 200,
  UNSPEC_VLD1X4A = 201,
  UNSPEC_VLD1X4B = 202,
  UNSPEC_VLD1_LANE = 203,
  UNSPEC_VLD2 = 204,
  UNSPEC_VLD2_DUP = 205,
  UNSPEC_VLD2_LANE = 206,
  UNSPEC_VLD3 = 207,
  UNSPEC_VLD3A = 208,
  UNSPEC_VLD3B = 209,
  UNSPEC_VLD3_DUP = 210,
  UNSPEC_VLD3_LANE = 211,
  UNSPEC_VLD4 = 212,
  UNSPEC_VLD4A = 213,
  UNSPEC_VLD4B = 214,
  UNSPEC_VLD4_DUP = 215,
  UNSPEC_VLD4_LANE = 216,
  UNSPEC_VMAX = 217,
  UNSPEC_VMAX_U = 218,
  UNSPEC_VMAXNM = 219,
  UNSPEC_VMIN = 220,
  UNSPEC_VMIN_U = 221,
  UNSPEC_VMINNM = 222,
  UNSPEC_VMLA = 223,
  UNSPEC_VMLA_LANE = 224,
  UNSPEC_VMLAL_S = 225,
  UNSPEC_VMLAL_U = 226,
  UNSPEC_VMLAL_S_LANE = 227,
  UNSPEC_VMLAL_U_LANE = 228,
  UNSPEC_VMLS = 229,
  UNSPEC_VMLS_LANE = 230,
  UNSPEC_VMLSL_S = 231,
  UNSPEC_VMLSL_U = 232,
  UNSPEC_VMLSL_S_LANE = 233,
  UNSPEC_VMLSL_U_LANE = 234,
  UNSPEC_VMLSL_LANE = 235,
  UNSPEC_VFMA_LANE = 236,
  UNSPEC_VFMS_LANE = 237,
  UNSPEC_VMOVL_S = 238,
  UNSPEC_VMOVL_U = 239,
  UNSPEC_VMOVN = 240,
  UNSPEC_VMUL = 241,
  UNSPEC_VMULL_P = 242,
  UNSPEC_VMULL_S = 243,
  UNSPEC_VMULL_U = 244,
  UNSPEC_VMUL_LANE = 245,
  UNSPEC_VMULL_S_LANE = 246,
  UNSPEC_VMULL_U_LANE = 247,
  UNSPEC_VPADAL_S = 248,
  UNSPEC_VPADAL_U = 249,
  UNSPEC_VPADD = 250,
  UNSPEC_VPADDL_S = 251,
  UNSPEC_VPADDL_U = 252,
  UNSPEC_VPMAX = 253,
  UNSPEC_VPMAX_U = 254,
  UNSPEC_VPMIN = 255,
  UNSPEC_VPMIN_U = 256,
  UNSPEC_VPSMAX = 257,
  UNSPEC_VPSMIN = 258,
  UNSPEC_VPUMAX = 259,
  UNSPEC_VPUMIN = 260,
  UNSPEC_VQABS = 261,
  UNSPEC_VQADD_S = 262,
  UNSPEC_VQADD_U = 263,
  UNSPEC_VQDMLAL = 264,
  UNSPEC_VQDMLAL_LANE = 265,
  UNSPEC_VQDMLSL = 266,
  UNSPEC_VQDMLSL_LANE = 267,
  UNSPEC_VQDMULH = 268,
  UNSPEC_VQDMULH_LANE = 269,
  UNSPEC_VQRDMULH = 270,
  UNSPEC_VQRDMULH_LANE = 271,
  UNSPEC_VQDMULL = 272,
  UNSPEC_VQDMULL_LANE = 273,
  UNSPEC_VQMOVN_S = 274,
  UNSPEC_VQMOVN_U = 275,
  UNSPEC_VQMOVUN = 276,
  UNSPEC_VQNEG = 277,
  UNSPEC_VQSHL_S = 278,
  UNSPEC_VQSHL_U = 279,
  UNSPEC_VQRSHL_S = 280,
  UNSPEC_VQRSHL_U = 281,
  UNSPEC_VQSHL_S_N = 282,
  UNSPEC_VQSHL_U_N = 283,
  UNSPEC_VQSHLU_N = 284,
  UNSPEC_VQSHRN_S_N = 285,
  UNSPEC_VQSHRN_U_N = 286,
  UNSPEC_VQRSHRN_S_N = 287,
  UNSPEC_VQRSHRN_U_N = 288,
  UNSPEC_VQSHRUN_N = 289,
  UNSPEC_VQRSHRUN_N = 290,
  UNSPEC_VQSUB_S = 291,
  UNSPEC_VQSUB_U = 292,
  UNSPEC_VRECPE = 293,
  UNSPEC_VRECPS = 294,
  UNSPEC_VREV16 = 295,
  UNSPEC_VREV32 = 296,
  UNSPEC_VREV64 = 297,
  UNSPEC_VRSQRTE = 298,
  UNSPEC_VRSQRTS = 299,
  UNSPEC_VSHL_S = 300,
  UNSPEC_VSHL_U = 301,
  UNSPEC_VRSHL_S = 302,
  UNSPEC_VRSHL_U = 303,
  UNSPEC_VSHLL_S_N = 304,
  UNSPEC_VSHLL_U_N = 305,
  UNSPEC_VSHL_N = 306,
  UNSPEC_VSHR_S_N = 307,
  UNSPEC_VSHR_U_N = 308,
  UNSPEC_VRSHR_S_N = 309,
  UNSPEC_VRSHR_U_N = 310,
  UNSPEC_VSHRN_N = 311,
  UNSPEC_VRSHRN_N = 312,
  UNSPEC_VSLI = 313,
  UNSPEC_VSRA_S_N = 314,
  UNSPEC_VSRA_U_N = 315,
  UNSPEC_VRSRA_S_N = 316,
  UNSPEC_VRSRA_U_N = 317,
  UNSPEC_VSRI = 318,
  UNSPEC_VST1 = 319,
  UNSPEC_VST1X3A = 320,
  UNSPEC_VST1X3B = 321,
  UNSPEC_VST1X4A = 322,
  UNSPEC_VST1X4B = 323,
  UNSPEC_VST1_LANE = 324,
  UNSPEC_VST2 = 325,
  UNSPEC_VST2_LANE = 326,
  UNSPEC_VST3 = 327,
  UNSPEC_VST3A = 328,
  UNSPEC_VST3B = 329,
  UNSPEC_VST3_LANE = 330,
  UNSPEC_VST4 = 331,
  UNSPEC_VST4A = 332,
  UNSPEC_VST4B = 333,
  UNSPEC_VST4_LANE = 334,
  UNSPEC_VSTRUCTDUMMY = 335,
  UNSPEC_VSUB = 336,
  UNSPEC_VSUBHN = 337,
  UNSPEC_VRSUBHN = 338,
  UNSPEC_VSUBL_S = 339,
  UNSPEC_VSUBL_U = 340,
  UNSPEC_VSUBW_S = 341,
  UNSPEC_VSUBW_U = 342,
  UNSPEC_VTBL = 343,
  UNSPEC_VTBX = 344,
  UNSPEC_VTRN1 = 345,
  UNSPEC_VTRN2 = 346,
  UNSPEC_VTST = 347,
  UNSPEC_VUZP1 = 348,
  UNSPEC_VUZP2 = 349,
  UNSPEC_VZIP1 = 350,
  UNSPEC_VZIP2 = 351,
  UNSPEC_MISALIGNED_ACCESS = 352,
  UNSPEC_VCLE = 353,
  UNSPEC_VCLT = 354,
  UNSPEC_NVRINTZ = 355,
  UNSPEC_NVRINTP = 356,
  UNSPEC_NVRINTM = 357,
  UNSPEC_NVRINTX = 358,
  UNSPEC_NVRINTA = 359,
  UNSPEC_NVRINTN = 360,
  UNSPEC_VQRDMLAH = 361,
  UNSPEC_VQRDMLSH = 362,
  UNSPEC_VRND = 363,
  UNSPEC_VRNDA = 364,
  UNSPEC_VRNDI = 365,
  UNSPEC_VRNDM = 366,
  UNSPEC_VRNDN = 367,
  UNSPEC_VRNDP = 368,
  UNSPEC_VRNDX = 369,
  UNSPEC_DOT_S = 370,
  UNSPEC_DOT_U = 371,
  UNSPEC_DOT_US = 372,
  UNSPEC_DOT_SU = 373,
  UNSPEC_VFML_LO = 374,
  UNSPEC_VFML_HI = 375,
  UNSPEC_VCADD90 = 376,
  UNSPEC_VCADD270 = 377,
  UNSPEC_VCMLA = 378,
  UNSPEC_VCMLA90 = 379,
  UNSPEC_VCMLA180 = 380,
  UNSPEC_VCMLA270 = 381,
  UNSPEC_VCMLA_CONJ = 382,
  UNSPEC_VCMLA180_CONJ = 383,
  UNSPEC_VCMUL = 384,
  UNSPEC_VCMUL90 = 385,
  UNSPEC_VCMUL180 = 386,
  UNSPEC_VCMUL270 = 387,
  UNSPEC_VCMUL_CONJ = 388,
  UNSPEC_MATMUL_S = 389,
  UNSPEC_MATMUL_U = 390,
  UNSPEC_MATMUL_US = 391,
  UNSPEC_BFCVT = 392,
  UNSPEC_BFCVT_HIGH = 393,
  UNSPEC_BFMMLA = 394,
  UNSPEC_BFMAB = 395,
  UNSPEC_BFMAT = 396,
  VST4Q = 397,
  VRNDXQ_F = 398,
  VRNDQ_F = 399,
  VRNDPQ_F = 400,
  VRNDNQ_F = 401,
  VRNDMQ_F = 402,
  VRNDAQ_F = 403,
  VREV64Q_F = 404,
  VDUPQ_N_F = 405,
  VREV32Q_F = 406,
  VCVTTQ_F32_F16 = 407,
  VCVTBQ_F32_F16 = 408,
  VCVTQ_TO_F_S = 409,
  VQNEGQ_S = 410,
  VCVTQ_TO_F_U = 411,
  VREV16Q_S = 412,
  VREV16Q_U = 413,
  VADDLVQ_S = 414,
  VMVNQ_N_S = 415,
  VMVNQ_N_U = 416,
  VCVTAQ_S = 417,
  VCVTAQ_U = 418,
  VREV64Q_S = 419,
  VREV64Q_U = 420,
  VQABSQ_S = 421,
  VDUPQ_N_U = 422,
  VDUPQ_N_S = 423,
  VCLSQ_S = 424,
  VADDVQ_S = 425,
  VADDVQ_U = 426,
  VREV32Q_U = 427,
  VREV32Q_S = 428,
  VMOVLTQ_U = 429,
  VMOVLTQ_S = 430,
  VMOVLBQ_S = 431,
  VMOVLBQ_U = 432,
  VCVTQ_FROM_F_S = 433,
  VCVTQ_FROM_F_U = 434,
  VCVTPQ_S = 435,
  VCVTPQ_U = 436,
  VCVTNQ_S = 437,
  VCVTNQ_U = 438,
  VCVTMQ_S = 439,
  VCVTMQ_U = 440,
  VADDLVQ_U = 441,
  VCTP = 442,
  VCTP_M = 443,
  VPNOT = 444,
  VCREATEQ_F = 445,
  VCVTQ_N_TO_F_S = 446,
  VCVTQ_N_TO_F_U = 447,
  VBRSRQ_N_F = 448,
  VSUBQ_N_F = 449,
  VCREATEQ_U = 450,
  VCREATEQ_S = 451,
  VSHRQ_N_S = 452,
  VSHRQ_N_U = 453,
  VCVTQ_N_FROM_F_S = 454,
  VCVTQ_N_FROM_F_U = 455,
  VADDLVQ_P_S = 456,
  VADDLVQ_P_U = 457,
  VSHLQ_S = 458,
  VSHLQ_U = 459,
  VABDQ_S = 460,
  VADDQ_N_S = 461,
  VADDVAQ_S = 462,
  VADDVQ_P_S = 463,
  VBRSRQ_N_S = 464,
  VHADDQ_S = 465,
  VHADDQ_N_S = 466,
  VHSUBQ_S = 467,
  VHSUBQ_N_S = 468,
  VMAXQ_S = 469,
  VMAXVQ_S = 470,
  VMINQ_S = 471,
  VMINVQ_S = 472,
  VMLADAVQ_S = 473,
  VMULHQ_S = 474,
  VMULLBQ_INT_S = 475,
  VMULLTQ_INT_S = 476,
  VMULQ_S = 477,
  VMULQ_N_S = 478,
  VQADDQ_S = 479,
  VQADDQ_N_S = 480,
  VQRSHLQ_S = 481,
  VQRSHLQ_N_S = 482,
  VQSHLQ_S = 483,
  VQSHLQ_N_S = 484,
  VQSHLQ_R_S = 485,
  VQSUBQ_S = 486,
  VQSUBQ_N_S = 487,
  VRHADDQ_S = 488,
  VRMULHQ_S = 489,
  VRSHLQ_S = 490,
  VRSHLQ_N_S = 491,
  VRSHRQ_N_S = 492,
  VSHLQ_N_S = 493,
  VSHLQ_R_S = 494,
  VSUBQ_S = 495,
  VSUBQ_N_S = 496,
  VABDQ_U = 497,
  VADDQ_N_U = 498,
  VADDVAQ_U = 499,
  VADDVQ_P_U = 500,
  VBRSRQ_N_U = 501,
  VHADDQ_U = 502,
  VHADDQ_N_U = 503,
  VHSUBQ_U = 504,
  VHSUBQ_N_U = 505,
  VMAXQ_U = 506,
  VMAXVQ_U = 507,
  VMINQ_U = 508,
  VMINVQ_U = 509,
  VMLADAVQ_U = 510,
  VMULHQ_U = 511,
  VMULLBQ_INT_U = 512,
  VMULLTQ_INT_U = 513,
  VMULQ_U = 514,
  VMULQ_N_U = 515,
  VQADDQ_U = 516,
  VQADDQ_N_U = 517,
  VQRSHLQ_U = 518,
  VQRSHLQ_N_U = 519,
  VQSHLQ_U = 520,
  VQSHLQ_N_U = 521,
  VQSHLQ_R_U = 522,
  VQSUBQ_U = 523,
  VQSUBQ_N_U = 524,
  VRHADDQ_U = 525,
  VRMULHQ_U = 526,
  VRSHLQ_U = 527,
  VRSHLQ_N_U = 528,
  VRSHRQ_N_U = 529,
  VSHLQ_N_U = 530,
  VSHLQ_R_U = 531,
  VSUBQ_U = 532,
  VSUBQ_N_U = 533,
  VHCADDQ_ROT270_S = 534,
  VHCADDQ_ROT90_S = 535,
  VMAXAQ_S = 536,
  VMAXAVQ_S = 537,
  VMINAQ_S = 538,
  VMINAVQ_S = 539,
  VMLADAVXQ_S = 540,
  VMLSDAVQ_S = 541,
  VMLSDAVXQ_S = 542,
  VQDMULHQ_N_S = 543,
  VQDMULHQ_S = 544,
  VQRDMULHQ_N_S = 545,
  VQRDMULHQ_S = 546,
  VQSHLUQ_N_S = 547,
  VABDQ_M_S = 548,
  VABDQ_M_U = 549,
  VABDQ_F = 550,
  VADDQ_N_F = 551,
  VMAXNMAQ_F = 552,
  VMAXNMAVQ_F = 553,
  VMAXNMQ_F = 554,
  VMAXNMVQ_F = 555,
  VMINNMAQ_F = 556,
  VMINNMAVQ_F = 557,
  VMINNMQ_F = 558,
  VMINNMVQ_F = 559,
  VMULQ_F = 560,
  VMULQ_N_F = 561,
  VSUBQ_F = 562,
  VADDLVAQ_U = 563,
  VADDLVAQ_S = 564,
  VBICQ_N_U = 565,
  VBICQ_N_S = 566,
  VCVTBQ_F16_F32 = 567,
  VCVTTQ_F16_F32 = 568,
  VMLALDAVQ_U = 569,
  VMLALDAVXQ_S = 570,
  VMLALDAVQ_S = 571,
  VMLSLDAVQ_S = 572,
  VMLSLDAVXQ_S = 573,
  VMOVNBQ_U = 574,
  VMOVNBQ_S = 575,
  VMOVNTQ_U = 576,
  VMOVNTQ_S = 577,
  VORRQ_N_S = 578,
  VORRQ_N_U = 579,
  VQDMULLBQ_N_S = 580,
  VQDMULLBQ_S = 581,
  VQDMULLTQ_N_S = 582,
  VQDMULLTQ_S = 583,
  VQMOVNBQ_U = 584,
  VQMOVNBQ_S = 585,
  VQMOVUNBQ_S = 586,
  VQMOVUNTQ_S = 587,
  VRMLALDAVHXQ_S = 588,
  VRMLSLDAVHQ_S = 589,
  VRMLSLDAVHXQ_S = 590,
  VSHLLBQ_S = 591,
  VSHLLBQ_U = 592,
  VSHLLTQ_U = 593,
  VSHLLTQ_S = 594,
  VQMOVNTQ_U = 595,
  VQMOVNTQ_S = 596,
  VSHLLBQ_N_S = 597,
  VSHLLBQ_N_U = 598,
  VSHLLTQ_N_U = 599,
  VSHLLTQ_N_S = 600,
  VRMLALDAVHQ_U = 601,
  VRMLALDAVHQ_S = 602,
  VMULLTQ_POLY_P = 603,
  VMULLBQ_POLY_P = 604,
  VBICQ_M_N_S = 605,
  VBICQ_M_N_U = 606,
  VCMPEQQ_M_F = 607,
  VCVTAQ_M_S = 608,
  VCVTAQ_M_U = 609,
  VCVTQ_M_TO_F_S = 610,
  VCVTQ_M_TO_F_U = 611,
  VQRSHRNBQ_N_U = 612,
  VQRSHRNBQ_N_S = 613,
  VQRSHRUNBQ_N_S = 614,
  VRMLALDAVHAQ_S = 615,
  VABAVQ_S = 616,
  VABAVQ_U = 617,
  VSHLCQ_S = 618,
  VSHLCQ_U = 619,
  VRMLALDAVHAQ_U = 620,
  VABSQ_M_S = 621,
  VADDVAQ_P_S = 622,
  VADDVAQ_P_U = 623,
  VCLSQ_M_S = 624,
  VCLZQ_M_S = 625,
  VCLZQ_M_U = 626,
  VCMPCSQ_M_N_U = 627,
  VCMPCSQ_M_U = 628,
  VCMPEQQ_M_N_S = 629,
  VCMPEQQ_M_N_U = 630,
  VCMPEQQ_M_S = 631,
  VCMPEQQ_M_U = 632,
  VCMPGEQ_M_N_S = 633,
  VCMPGEQ_M_S = 634,
  VCMPGTQ_M_N_S = 635,
  VCMPGTQ_M_S = 636,
  VCMPHIQ_M_N_U = 637,
  VCMPHIQ_M_U = 638,
  VCMPLEQ_M_N_S = 639,
  VCMPLEQ_M_S = 640,
  VCMPLTQ_M_N_S = 641,
  VCMPLTQ_M_S = 642,
  VCMPNEQ_M_N_S = 643,
  VCMPNEQ_M_N_U = 644,
  VCMPNEQ_M_S = 645,
  VCMPNEQ_M_U = 646,
  VDUPQ_M_N_S = 647,
  VDUPQ_M_N_U = 648,
  VDWDUPQ_N_U = 649,
  VDWDUPQ_WB_U = 650,
  VIWDUPQ_N_U = 651,
  VIWDUPQ_WB_U = 652,
  VMAXAQ_M_S = 653,
  VMAXAVQ_P_S = 654,
  VMAXVQ_P_S = 655,
  VMAXVQ_P_U = 656,
  VMINAQ_M_S = 657,
  VMINAVQ_P_S = 658,
  VMINVQ_P_S = 659,
  VMINVQ_P_U = 660,
  VMLADAVAQ_S = 661,
  VMLADAVAQ_U = 662,
  VMLADAVQ_P_S = 663,
  VMLADAVQ_P_U = 664,
  VMLADAVXQ_P_S = 665,
  VMLAQ_N_S = 666,
  VMLAQ_N_U = 667,
  VMLASQ_N_S = 668,
  VMLASQ_N_U = 669,
  VMLSDAVQ_P_S = 670,
  VMLSDAVXQ_P_S = 671,
  VMVNQ_M_S = 672,
  VMVNQ_M_U = 673,
  VNEGQ_M_S = 674,
  VPSELQ_S = 675,
  VPSELQ_U = 676,
  VQABSQ_M_S = 677,
  VQDMLAHQ_N_S = 678,
  VQDMLASHQ_N_S = 679,
  VQNEGQ_M_S = 680,
  VQRDMLADHQ_S = 681,
  VQRDMLADHXQ_S = 682,
  VQRDMLAHQ_N_S = 683,
  VQRDMLASHQ_N_S = 684,
  VQRDMLSDHQ_S = 685,
  VQRDMLSDHXQ_S = 686,
  VQRSHLQ_M_N_S = 687,
  VQRSHLQ_M_N_U = 688,
  VQSHLQ_M_R_S = 689,
  VQSHLQ_M_R_U = 690,
  VREV64Q_M_S = 691,
  VREV64Q_M_U = 692,
  VRSHLQ_M_N_S = 693,
  VRSHLQ_M_N_U = 694,
  VSHLQ_M_R_S = 695,
  VSHLQ_M_R_U = 696,
  VSLIQ_N_S = 697,
  VSLIQ_N_U = 698,
  VSRIQ_N_S = 699,
  VSRIQ_N_U = 700,
  VQDMLSDHXQ_S = 701,
  VQDMLSDHQ_S = 702,
  VQDMLADHXQ_S = 703,
  VQDMLADHQ_S = 704,
  VMLSDAVAXQ_S = 705,
  VMLSDAVAQ_S = 706,
  VMLADAVAXQ_S = 707,
  VCMPGEQ_M_F = 708,
  VCMPGTQ_M_N_F = 709,
  VMLSLDAVQ_P_S = 710,
  VRMLALDAVHAXQ_S = 711,
  VMLSLDAVXQ_P_S = 712,
  VFMAQ_F = 713,
  VMLSLDAVAQ_S = 714,
  VQSHRUNBQ_N_S = 715,
  VQRSHRUNTQ_N_S = 716,
  VMINNMAQ_M_F = 717,
  VFMASQ_N_F = 718,
  VDUPQ_M_N_F = 719,
  VCMPGTQ_M_F = 720,
  VCMPLTQ_M_F = 721,
  VRMLSLDAVHQ_P_S = 722,
  VQSHRUNTQ_N_S = 723,
  VABSQ_M_F = 724,
  VMAXNMAVQ_P_F = 725,
  VFMAQ_N_F = 726,
  VRMLSLDAVHXQ_P_S = 727,
  VREV32Q_M_F = 728,
  VRMLSLDAVHAQ_S = 729,
  VRMLSLDAVHAXQ_S = 730,
  VCMPLTQ_M_N_F = 731,
  VCMPNEQ_M_F = 732,
  VRNDAQ_M_F = 733,
  VRNDPQ_M_F = 734,
  VADDLVAQ_P_S = 735,
  VQMOVUNBQ_M_S = 736,
  VCMPLEQ_M_F = 737,
  VMLSLDAVAXQ_S = 738,
  VRNDXQ_M_F = 739,
  VFMSQ_F = 740,
  VMINNMVQ_P_F = 741,
  VMAXNMVQ_P_F = 742,
  VPSELQ_F = 743,
  VQMOVUNTQ_M_S = 744,
  VREV64Q_M_F = 745,
  VNEGQ_M_F = 746,
  VRNDMQ_M_F = 747,
  VCMPLEQ_M_N_F = 748,
  VCMPGEQ_M_N_F = 749,
  VRNDNQ_M_F = 750,
  VMINNMAVQ_P_F = 751,
  VCMPNEQ_M_N_F = 752,
  VRMLALDAVHQ_P_S = 753,
  VRMLALDAVHXQ_P_S = 754,
  VCMPEQQ_M_N_F = 755,
  VMAXNMAQ_M_F = 756,
  VRNDQ_M_F = 757,
  VMLALDAVQ_P_U = 758,
  VMLALDAVQ_P_S = 759,
  VQMOVNBQ_M_S = 760,
  VQMOVNBQ_M_U = 761,
  VMOVLTQ_M_U = 762,
  VMOVLTQ_M_S = 763,
  VMOVNBQ_M_U = 764,
  VMOVNBQ_M_S = 765,
  VRSHRNTQ_N_U = 766,
  VRSHRNTQ_N_S = 767,
  VORRQ_M_N_S = 768,
  VORRQ_M_N_U = 769,
  VREV32Q_M_S = 770,
  VREV32Q_M_U = 771,
  VQRSHRNTQ_N_U = 772,
  VQRSHRNTQ_N_S = 773,
  VMOVNTQ_M_U = 774,
  VMOVNTQ_M_S = 775,
  VMOVLBQ_M_U = 776,
  VMOVLBQ_M_S = 777,
  VMLALDAVAQ_S = 778,
  VMLALDAVAQ_U = 779,
  VQSHRNBQ_N_U = 780,
  VQSHRNBQ_N_S = 781,
  VSHRNBQ_N_U = 782,
  VSHRNBQ_N_S = 783,
  VRSHRNBQ_N_S = 784,
  VRSHRNBQ_N_U = 785,
  VMLALDAVXQ_P_S = 786,
  VQMOVNTQ_M_U = 787,
  VQMOVNTQ_M_S = 788,
  VMVNQ_M_N_U = 789,
  VMVNQ_M_N_S = 790,
  VQSHRNTQ_N_U = 791,
  VQSHRNTQ_N_S = 792,
  VMLALDAVAXQ_S = 793,
  VSHRNTQ_N_S = 794,
  VSHRNTQ_N_U = 795,
  VCVTBQ_M_F16_F32 = 796,
  VCVTBQ_M_F32_F16 = 797,
  VCVTTQ_M_F16_F32 = 798,
  VCVTTQ_M_F32_F16 = 799,
  VCVTMQ_M_S = 800,
  VCVTMQ_M_U = 801,
  VCVTNQ_M_S = 802,
  VCVTPQ_M_S = 803,
  VCVTPQ_M_U = 804,
  VCVTQ_M_N_FROM_F_S = 805,
  VCVTNQ_M_U = 806,
  VREV16Q_M_S = 807,
  VREV16Q_M_U = 808,
  VREV32Q_M = 809,
  VCVTQ_M_FROM_F_U = 810,
  VCVTQ_M_FROM_F_S = 811,
  VRMLALDAVHQ_P_U = 812,
  VADDLVAQ_P_U = 813,
  VCVTQ_M_N_FROM_F_U = 814,
  VQSHLUQ_M_N_S = 815,
  VABAVQ_P_S = 816,
  VABAVQ_P_U = 817,
  VSHLQ_M_S = 818,
  VSHLQ_M_U = 819,
  VSRIQ_M_N_S = 820,
  VSRIQ_M_N_U = 821,
  VSUBQ_M_U = 822,
  VSUBQ_M_S = 823,
  VCVTQ_M_N_TO_F_U = 824,
  VCVTQ_M_N_TO_F_S = 825,
  VQADDQ_M_U = 826,
  VQADDQ_M_S = 827,
  VRSHRQ_M_N_S = 828,
  VSUBQ_M_N_S = 829,
  VSUBQ_M_N_U = 830,
  VBRSRQ_M_N_S = 831,
  VSUBQ_M_N_F = 832,
  VBICQ_M_F = 833,
  VHADDQ_M_U = 834,
  VBICQ_M_U = 835,
  VBICQ_M_S = 836,
  VMULQ_M_N_U = 837,
  VHADDQ_M_S = 838,
  VORNQ_M_F = 839,
  VMLAQ_M_N_S = 840,
  VQSUBQ_M_U = 841,
  VQSUBQ_M_S = 842,
  VMLAQ_M_N_U = 843,
  VQSUBQ_M_N_U = 844,
  VQSUBQ_M_N_S = 845,
  VMULLTQ_INT_M_S = 846,
  VMULLTQ_INT_M_U = 847,
  VMULQ_M_N_S = 848,
  VMULQ_M_N_F = 849,
  VMLASQ_M_N_U = 850,
  VMLASQ_M_N_S = 851,
  VMAXQ_M_U = 852,
  VQRDMLAHQ_M_N_U = 853,
  VCADDQ_ROT270_M_F = 854,
  VCADDQ_ROT270_M = 855,
  VQRSHLQ_M_S = 856,
  VMULQ_M_F = 857,
  VRHADDQ_M_U = 858,
  VSHRQ_M_N_U = 859,
  VRHADDQ_M_S = 860,
  VMULQ_M_S = 861,
  VMULQ_M_U = 862,
  VQDMLASHQ_M_N_S = 863,
  VQRDMLASHQ_M_N_S = 864,
  VRSHLQ_M_S = 865,
  VRSHLQ_M_U = 866,
  VRSHRQ_M_N_U = 867,
  VADDQ_M_N_F = 868,
  VADDQ_M_N_S = 869,
  VADDQ_M_N_U = 870,
  VQRDMLASHQ_M_N_U = 871,
  VMAXQ_M_S = 872,
  VQRDMLAHQ_M_N_S = 873,
  VORRQ_M_S = 874,
  VORRQ_M_U = 875,
  VORRQ_M_F = 876,
  VQRSHLQ_M_U = 877,
  VRMULHQ_M_U = 878,
  VRMULHQ_M_S = 879,
  VMINQ_M_S = 880,
  VMINQ_M_U = 881,
  VANDQ_M_F = 882,
  VANDQ_M_U = 883,
  VANDQ_M_S = 884,
  VHSUBQ_M_N_S = 885,
  VHSUBQ_M_N_U = 886,
  VMULHQ_M_S = 887,
  VMULHQ_M_U = 888,
  VMULLBQ_INT_M_U = 889,
  VMULLBQ_INT_M_S = 890,
  VCADDQ_ROT90_M_F = 891,
  VSHRQ_M_N_S = 892,
  VADDQ_M_U = 893,
  VSLIQ_M_N_U = 894,
  VQADDQ_M_N_S = 895,
  VBRSRQ_M_N_F = 896,
  VABDQ_M_F = 897,
  VBRSRQ_M_N_U = 898,
  VEORQ_M_F = 899,
  VSHLQ_M_N_S = 900,
  VQDMLAHQ_M_N_U = 901,
  VQDMLAHQ_M_N_S = 902,
  VSHLQ_M_N_U = 903,
  VMLADAVAQ_P_U = 904,
  VMLADAVAQ_P_S = 905,
  VSLIQ_M_N_S = 906,
  VQSHLQ_M_U = 907,
  VQSHLQ_M_S = 908,
  VCADDQ_ROT90_M = 909,
  VORNQ_M_U = 910,
  VORNQ_M_S = 911,
  VQSHLQ_M_N_S = 912,
  VQSHLQ_M_N_U = 913,
  VADDQ_M_S = 914,
  VHADDQ_M_N_S = 915,
  VADDQ_M_F = 916,
  VQADDQ_M_N_U = 917,
  VEORQ_M_S = 918,
  VEORQ_M_U = 919,
  VHSUBQ_M_S = 920,
  VHSUBQ_M_U = 921,
  VHADDQ_M_N_U = 922,
  VHCADDQ_ROT90_M_S = 923,
  VQRDMLSDHQ_M_S = 924,
  VQRDMLSDHXQ_M_S = 925,
  VQRDMLADHXQ_M_S = 926,
  VQDMULHQ_M_S = 927,
  VMLADAVAXQ_P_S = 928,
  VQDMLADHXQ_M_S = 929,
  VQRDMULHQ_M_S = 930,
  VMLSDAVAXQ_P_S = 931,
  VQDMULHQ_M_N_S = 932,
  VHCADDQ_ROT270_M_S = 933,
  VQDMLSDHQ_M_S = 934,
  VQDMLSDHXQ_M_S = 935,
  VMLSDAVAQ_P_S = 936,
  VQRDMLADHQ_M_S = 937,
  VQDMLADHQ_M_S = 938,
  VMLALDAVAQ_P_U = 939,
  VMLALDAVAQ_P_S = 940,
  VQRSHRNBQ_M_N_U = 941,
  VQRSHRNBQ_M_N_S = 942,
  VQRSHRNTQ_M_N_S = 943,
  VQSHRNBQ_M_N_U = 944,
  VQSHRNBQ_M_N_S = 945,
  VQSHRNTQ_M_N_S = 946,
  VRSHRNBQ_M_N_U = 947,
  VRSHRNBQ_M_N_S = 948,
  VRSHRNTQ_M_N_U = 949,
  VSHLLBQ_M_N_U = 950,
  VSHLLBQ_M_N_S = 951,
  VSHLLTQ_M_N_U = 952,
  VSHLLTQ_M_N_S = 953,
  VSHRNBQ_M_N_S = 954,
  VSHRNBQ_M_N_U = 955,
  VSHRNTQ_M_N_S = 956,
  VSHRNTQ_M_N_U = 957,
  VMLALDAVAXQ_P_S = 958,
  VQRSHRNTQ_M_N_U = 959,
  VQSHRNTQ_M_N_U = 960,
  VRSHRNTQ_M_N_S = 961,
  VQRDMULHQ_M_N_S = 962,
  VRMLALDAVHAQ_P_S = 963,
  VMLSLDAVAQ_P_S = 964,
  VMLSLDAVAXQ_P_S = 965,
  VMULLBQ_POLY_M_P = 966,
  VMULLTQ_POLY_M_P = 967,
  VQDMULLBQ_M_N_S = 968,
  VQDMULLBQ_M_S = 969,
  VQDMULLTQ_M_N_S = 970,
  VQDMULLTQ_M_S = 971,
  VQRSHRUNBQ_M_N_S = 972,
  VQSHRUNBQ_M_N_S = 973,
  VQSHRUNTQ_M_N_S = 974,
  VRMLALDAVHAQ_P_U = 975,
  VRMLALDAVHAXQ_P_S = 976,
  VRMLSLDAVHAQ_P_S = 977,
  VRMLSLDAVHAXQ_P_S = 978,
  VQRSHRUNTQ_M_N_S = 979,
  VCMLAQ_M_F = 980,
  VCMLAQ_ROT180_M_F = 981,
  VCMLAQ_ROT270_M_F = 982,
  VCMLAQ_ROT90_M_F = 983,
  VCMULQ_M_F = 984,
  VCMULQ_ROT180_M_F = 985,
  VCMULQ_ROT270_M_F = 986,
  VCMULQ_ROT90_M_F = 987,
  VFMAQ_M_F = 988,
  VFMAQ_M_N_F = 989,
  VFMASQ_M_N_F = 990,
  VFMSQ_M_F = 991,
  VMAXNMQ_M_F = 992,
  VMINNMQ_M_F = 993,
  VSUBQ_M_F = 994,
  VSTRWQSB_S = 995,
  VSTRWQSB_U = 996,
  VSTRBQSO_S = 997,
  VSTRBQSO_U = 998,
  VSTRBQ_S = 999,
  VSTRBQ_U = 1000,
  VLDRBQGO_S = 1001,
  VLDRBQGO_U = 1002,
  VLDRBQ_S = 1003,
  VLDRBQ_U = 1004,
  VLDRWQGB_S = 1005,
  VLDRWQGB_U = 1006,
  VLD1Q_F = 1007,
  VLD1Q_S = 1008,
  VLD1Q_U = 1009,
  VLDRHQ_F = 1010,
  VLDRHQGO_S = 1011,
  VLDRHQGO_U = 1012,
  VLDRHQGSO_S = 1013,
  VLDRHQGSO_U = 1014,
  VLDRHQ_S = 1015,
  VLDRHQ_U = 1016,
  VLDRWQ_F = 1017,
  VLDRWQ_S = 1018,
  VLDRWQ_U = 1019,
  VLDRDQGB_S = 1020,
  VLDRDQGB_U = 1021,
  VLDRDQGO_S = 1022,
  VLDRDQGO_U = 1023,
  VLDRDQGSO_S = 1024,
  VLDRDQGSO_U = 1025,
  VLDRHQGO_F = 1026,
  VLDRHQGSO_F = 1027,
  VLDRWQGB_F = 1028,
  VLDRWQGO_F = 1029,
  VLDRWQGO_S = 1030,
  VLDRWQGO_U = 1031,
  VLDRWQGSO_F = 1032,
  VLDRWQGSO_S = 1033,
  VLDRWQGSO_U = 1034,
  VSTRHQ_F = 1035,
  VST1Q_S = 1036,
  VST1Q_U = 1037,
  VSTRHQSO_S = 1038,
  VSTRHQ_U = 1039,
  VSTRWQ_S = 1040,
  VSTRWQ_U = 1041,
  VSTRWQ_F = 1042,
  VST1Q_F = 1043,
  VSTRDQSB_S = 1044,
  VSTRDQSB_U = 1045,
  VSTRDQSO_S = 1046,
  VSTRDQSO_U = 1047,
  VSTRDQSSO_S = 1048,
  VSTRDQSSO_U = 1049,
  VSTRWQSO_S = 1050,
  VSTRWQSO_U = 1051,
  VSTRWQSSO_S = 1052,
  VSTRWQSSO_U = 1053,
  VSTRHQSO_F = 1054,
  VSTRHQSSO_F = 1055,
  VSTRWQSB_F = 1056,
  VSTRWQSO_F = 1057,
  VSTRWQSSO_F = 1058,
  VDDUPQ = 1059,
  VDDUPQ_M = 1060,
  VDWDUPQ = 1061,
  VDWDUPQ_M = 1062,
  VIDUPQ = 1063,
  VIDUPQ_M = 1064,
  VIWDUPQ = 1065,
  VIWDUPQ_M = 1066,
  VSTRWQSBWB_S = 1067,
  VSTRWQSBWB_U = 1068,
  VLDRWQGBWB_S = 1069,
  VLDRWQGBWB_U = 1070,
  VSTRWQSBWB_F = 1071,
  VLDRWQGBWB_F = 1072,
  VSTRDQSBWB_S = 1073,
  VSTRDQSBWB_U = 1074,
  VLDRDQGBWB_S = 1075,
  VLDRDQGBWB_U = 1076,
  VADCQ_U = 1077,
  VADCQ_M_U = 1078,
  VADCQ_S = 1079,
  VADCQ_M_S = 1080,
  VSBCIQ_U = 1081,
  VSBCIQ_S = 1082,
  VSBCIQ_M_U = 1083,
  VSBCIQ_M_S = 1084,
  VSBCQ_U = 1085,
  VSBCQ_S = 1086,
  VSBCQ_M_U = 1087,
  VSBCQ_M_S = 1088,
  VADCIQ_U = 1089,
  VADCIQ_M_U = 1090,
  VADCIQ_S = 1091,
  VADCIQ_M_S = 1092,
  VLD2Q = 1093,
  VLD4Q = 1094,
  VST2Q = 1095,
  VSHLCQ_M_U = 1096,
  VSHLCQ_M_S = 1097,
  VSTRHQSO_U = 1098,
  VSTRHQSSO_S = 1099,
  VSTRHQSSO_U = 1100,
  VSTRHQ_S = 1101,
  SRSHRL = 1102,
  SRSHR = 1103,
  URSHR = 1104,
  URSHRL = 1105,
  SQRSHR = 1106,
  UQRSHL = 1107,
  UQRSHLL_64 = 1108,
  UQRSHLL_48 = 1109,
  SQRSHRL_64 = 1110,
  SQRSHRL_48 = 1111,
  VSHLCQ_M_ = 1112,
  REINTERPRET = 1113
};
#define NUM_UNSPEC_VALUES 1114
extern const char *const unspec_strings[];

enum unspecv {
  VUNSPEC_BLOCKAGE = 0,
  VUNSPEC_EPILOGUE = 1,
  VUNSPEC_THUMB1_INTERWORK = 2,
  VUNSPEC_ALIGN = 3,
  VUNSPEC_POOL_END = 4,
  VUNSPEC_POOL_1 = 5,
  VUNSPEC_POOL_2 = 6,
  VUNSPEC_POOL_4 = 7,
  VUNSPEC_POOL_8 = 8,
  VUNSPEC_POOL_16 = 9,
  VUNSPEC_TMRC = 10,
  VUNSPEC_TMCR = 11,
  VUNSPEC_ALIGN8 = 12,
  VUNSPEC_WCMP_EQ = 13,
  VUNSPEC_WCMP_GTU = 14,
  VUNSPEC_WCMP_GT = 15,
  VUNSPEC_EH_RETURN = 16,
  VUNSPEC_ATOMIC_CAS = 17,
  VUNSPEC_ATOMIC_XCHG = 18,
  VUNSPEC_ATOMIC_OP = 19,
  VUNSPEC_LL = 20,
  VUNSPEC_LDRD_ATOMIC = 21,
  VUNSPEC_SC = 22,
  VUNSPEC_LAX = 23,
  VUNSPEC_SLX = 24,
  VUNSPEC_LDA = 25,
  VUNSPEC_LDR = 26,
  VUNSPEC_STL = 27,
  VUNSPEC_STR = 28,
  VUNSPEC_GET_FPSCR = 29,
  VUNSPEC_SET_FPSCR = 30,
  VUNSPEC_SET_FPSCR_NZCVQC = 31,
  VUNSPEC_PROBE_STACK_RANGE = 32,
  VUNSPEC_CDP = 33,
  VUNSPEC_CDP2 = 34,
  VUNSPEC_LDC = 35,
  VUNSPEC_LDC2 = 36,
  VUNSPEC_LDCL = 37,
  VUNSPEC_LDC2L = 38,
  VUNSPEC_STC = 39,
  VUNSPEC_STC2 = 40,
  VUNSPEC_STCL = 41,
  VUNSPEC_STC2L = 42,
  VUNSPEC_MCR = 43,
  VUNSPEC_MCR2 = 44,
  VUNSPEC_MRC = 45,
  VUNSPEC_MRC2 = 46,
  VUNSPEC_MCRR = 47,
  VUNSPEC_MCRR2 = 48,
  VUNSPEC_MRRC = 49,
  VUNSPEC_MRRC2 = 50,
  VUNSPEC_SPECULATION_BARRIER = 51,
  VUNSPEC_APSR_WRITE = 52,
  VUNSPEC_VSTR_VLDR = 53,
  VUNSPEC_CLRM_APSR = 54,
  VUNSPEC_VSCCLRM_VPR = 55,
  VUNSPEC_VLSTM = 56,
  VUNSPEC_VLLDM = 57,
  VUNSPEC_PACBTI_NOP = 58,
  VUNSPEC_AUT_NOP = 59,
  VUNSPEC_BTI_NOP = 60
};
#define NUM_UNSPECV_VALUES 61
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
