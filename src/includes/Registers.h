#ifndef  __REGISTERS_H__
#define  __REGISTERS_H__

#define REG_SIZE          8   // In byte
#define REG_SIZE_BIT      64  // In bits
#define REG_SIZE_SSE      16  // In byte
#define REG_SIZE_SSE_BIT  128 // In bits

enum regID_t
{
  /* Register ID used in the Taint and Symbolic Engines */
  ID_RAX = 0,
  ID_RBX,
  ID_RCX,
  ID_RDX,
  ID_RDI,
  ID_RSI,
  ID_RBP,
  ID_RSP,
  ID_RIP,
  ID_R8,
  ID_R9,
  ID_R10,
  ID_R11,
  ID_R12,
  ID_R13,
  ID_R14,
  ID_R15,

  /* MMX */
  ID_MM0,
  ID_MM1,
  ID_MM2,
  ID_MM3,
  ID_MM4,
  ID_MM5,
  ID_MM6,
  ID_MM7,

  /* SSE */
  ID_XMM0,
  ID_XMM1,
  ID_XMM2,
  ID_XMM3,
  ID_XMM4,
  ID_XMM5,
  ID_XMM6,
  ID_XMM7,
  ID_XMM8,
  ID_XMM9,
  ID_XMM10,
  ID_XMM11,
  ID_XMM12,
  ID_XMM13,
  ID_XMM14,
  ID_XMM15,

  /* Flags ID used in the Taint and Symbolic Engines */
  ID_RFLAGS,
  ID_AF,
  ID_CF,
  ID_DF,
  ID_IF,
  ID_OF,
  ID_PF,
  ID_SF,
  ID_TF,
  ID_ZF,
};

#endif //__REGISTERS_H__
