/* Generated by Nim Compiler v0.19.2 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/Users/kubota/.choosenim/toolchains/nim-0.19.2/lib -o /Users/kubota/code/training_nim/src/training/10/training_makeJson.c.o /Users/kubota/code/training_nim/src/training/10/training_makeJson.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
typedef struct tySequence_BDPkntW3JD0aj2f9cfZK7aw tySequence_BDPkntW3JD0aj2f9cfZK7aw;
typedef struct tyObject_Student_BaPfYBSNP4Eo9aA9b1w6sU9aQ tyObject_Student_BaPfYBSNP4Eo9aA9b1w6sU9aQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence_HwjpkzqnGgFkyxpsW9beMGw tySequence_HwjpkzqnGgFkyxpsW9beMGw;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Report_om73527ED4e68btFNkaEog tyObject_Report_om73527ED4e68btFNkaEog;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_Student_BaPfYBSNP4Eo9aA9b1w6sU9aQ {
NimStringDesc* name;
tySequence_HwjpkzqnGgFkyxpsW9beMGw* reports;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_Report_om73527ED4e68btFNkaEog {
NimStringDesc* title;
NimStringDesc* link;
};
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
typedef NimStringDesc* tyArray_nHXaesL0DJZHyVS07ARPRA[1];
struct tySequence_BDPkntW3JD0aj2f9cfZK7aw {
  TGenericSeq Sup;
  tyObject_Student_BaPfYBSNP4Eo9aA9b1w6sU9aQ data[SEQ_DECL_SIZE];
};
struct tySequence_HwjpkzqnGgFkyxpsW9beMGw {
  TGenericSeq Sup;
  tyObject_Report_om73527ED4e68btFNkaEog data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence_HwjpkzqnGgFkyxpsW9beMGw)(void* p, NI op);
static N_NIMCALL(void, Marker_tySequence_BDPkntW3JD0aj2f9cfZK7aw)(void* p, NI op);
static N_NIMCALL(void, TM_eOiIiD9cabxXt1UtYckd7QA_4)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(TGenericSeq*, incrSeqV3)(TGenericSeq* s, TNimType* typ);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src, TNimType* mt);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(NF, traial_XOMFLoJtPAsKKiJYworUvQ)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ p);
N_LIB_PRIVATE N_NIMCALL(NF, ntcpuTime)(void);
static N_INLINE(void, pluseq__7kHiltrvRlcg6wSYR3CxAwmakeJson)(NF* x, NF y);
N_LIB_PRIVATE N_NIMCALL(void, makeJsonUsingTmp_TwPPg77kYXfGHVQ2QcFCCA)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollardollar__389cKDpDJYrKBNRmCYowLrQ)(tySequence_BDPkntW3JD0aj2f9cfZK7aw* x);
N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0);
N_LIB_PRIVATE N_NIMCALL(void, makeJsonNoTmp_TwPPg77kYXfGHVQ2QcFCCA_2)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollardollar__Xzp1RW3FiCyZXI5nJD5WGw)(tyObject_Student_BaPfYBSNP4Eo9aA9b1w6sU9aQ x);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, nimFloatToStr)(NF f);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, nimGC_setStackBottom)(void* theStackBottom);
N_LIB_PRIVATE N_NIMCALL(void, systemInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, systemDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_parseutilsInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_parseutilsDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_bitopsInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_bitopsDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_mathInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_mathDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_algorithmInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_algorithmDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_unicodeInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_unicodeDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_strutilsInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_strutilsDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_typetraitsInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_typetraitsDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_optionsInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_optionsDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_macrosInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_macrosDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_strformatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_strformatDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_posixInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_posixDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_timesInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_timesDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_ospathsInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_ospathsDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_osInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_osDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_streamsInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_streamsDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_typeinfoInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_typeinfoDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_hashesInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_hashesDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_tablesInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_tablesDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_lexbaseInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_lexbaseDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_parsejsonInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_parsejsonDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_jsonInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_jsonDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_intsetsInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_intsetsDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_marshalInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, stdlib_marshalDatInit000)(void);
N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void);
N_LIB_PRIVATE N_NIMCALL(void, makeJsonDatInit000)(void);
tySequence_BDPkntW3JD0aj2f9cfZK7aw* students_list_GNg1wD0joiNKQGroPhUpag;
TNimType NTI_BaPfYBSNP4Eo9aA9b1w6sU9aQ_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
TNimType NTI_om73527ED4e68btFNkaEog_;
TNimType NTI_HwjpkzqnGgFkyxpsW9beMGw_;
TNimType NTI_BDPkntW3JD0aj2f9cfZK7aw_;
NI i_ABFHzeLaLnjdsu8JP9cItJg;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
NF useTmpResult_mqokAmRob6h9cTwtc0wzZ9bQ;
NF NoTmpResult_8lrN2pEbc39cib69asZnj39aQ;
STRING_LITERAL(TM_eOiIiD9cabxXt1UtYckd7QA_5, "Bob", 3);
STRING_LITERAL(TM_eOiIiD9cabxXt1UtYckd7QA_6, "The best programmig language 2017", 33);
STRING_LITERAL(TM_eOiIiD9cabxXt1UtYckd7QA_7, "http://report.example/xxxxxxxxxxxxx", 35);
STRING_LITERAL(TM_eOiIiD9cabxXt1UtYckd7QA_8, "The best programmig language 2018", 33);
STRING_LITERAL(TM_eOiIiD9cabxXt1UtYckd7QA_12, "/Users/kubota/.choosenim/toolchains/nim-0.19.2/lib/system.nim(3"
"914, 11) `len(a) == L` seq modified while iterating over it", 122);
STRING_LITERAL(TM_eOiIiD9cabxXt1UtYckd7QA_14, "[", 1);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_eOiIiD9cabxXt1UtYckd7QA_13 = {((NimStringDesc*) &TM_eOiIiD9cabxXt1UtYckd7QA_14)}
;
STRING_LITERAL(TM_eOiIiD9cabxXt1UtYckd7QA_17, "]", 1);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_eOiIiD9cabxXt1UtYckd7QA_16 = {((NimStringDesc*) &TM_eOiIiD9cabxXt1UtYckd7QA_17)}
;
STRING_LITERAL(TM_eOiIiD9cabxXt1UtYckd7QA_19, "----bench params----", 20);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_eOiIiD9cabxXt1UtYckd7QA_18 = {((NimStringDesc*) &TM_eOiIiD9cabxXt1UtYckd7QA_19)}
;
STRING_LITERAL(TM_eOiIiD9cabxXt1UtYckd7QA_21, "STUDENT_NUM:10", 14);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_eOiIiD9cabxXt1UtYckd7QA_20 = {((NimStringDesc*) &TM_eOiIiD9cabxXt1UtYckd7QA_21)}
;
STRING_LITERAL(TM_eOiIiD9cabxXt1UtYckd7QA_23, "TRIAL\357\274\277NUM :10", 15);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_eOiIiD9cabxXt1UtYckd7QA_22 = {((NimStringDesc*) &TM_eOiIiD9cabxXt1UtYckd7QA_23)}
;
STRING_LITERAL(TM_eOiIiD9cabxXt1UtYckd7QA_25, "----speed result(avarage)-----", 30);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_eOiIiD9cabxXt1UtYckd7QA_24 = {((NimStringDesc*) &TM_eOiIiD9cabxXt1UtYckd7QA_25)}
;
STRING_LITERAL(TM_eOiIiD9cabxXt1UtYckd7QA_26, "UseTmp:", 7);
STRING_LITERAL(TM_eOiIiD9cabxXt1UtYckd7QA_27, "NoTmp :", 7);
static N_NIMCALL(void, Marker_tySequence_HwjpkzqnGgFkyxpsW9beMGw)(void* p, NI op) {
	tySequence_HwjpkzqnGgFkyxpsW9beMGw* a;
	NI T1_;
	a = (tySequence_HwjpkzqnGgFkyxpsW9beMGw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].title, op);
	nimGCvisit((void*)a->data[T1_].link, op);
	}
}
static N_NIMCALL(void, Marker_tySequence_BDPkntW3JD0aj2f9cfZK7aw)(void* p, NI op) {
	tySequence_BDPkntW3JD0aj2f9cfZK7aw* a;
	NI T1_;
	a = (tySequence_BDPkntW3JD0aj2f9cfZK7aw*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].name, op);
	nimGCvisit((void*)a->data[T1_].reports, op);
	}
}
static N_NIMCALL(void, TM_eOiIiD9cabxXt1UtYckd7QA_4)(void) {
	nimGCvisit((void*)students_list_GNg1wD0joiNKQGroPhUpag, 0);
}

static N_INLINE(void, nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_cNwQQ4PlSJsZSwvoN5Uafwsystem(p, ((int) 0), size);
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(133, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
	nimln_(212, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr_("asgnRefNoCycle", "gc.nim");
	nimln_(272, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		nimln_(471, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		nimln_(273, "gc.nim");
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		nimln_(274, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	nimln_(275, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		nimln_(471, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		nimln_(276, "gc.nim");
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		nimln_(277, "gc.nim");
		{
			nimln_(186, "gc.nim");
			(*c_2).refcount -= ((NI) 8);
			nimln_(277, "gc.nim");
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			nimln_(278, "gc.nim");
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	nimln_(279, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	nimfr_("nimGCunrefNoCycle", "gc.nim");
	nimln_(251, "gc.nim");
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	nimln_(253, "gc.nim");
	{
		nimln_(186, "gc.nim");
		(*c).refcount -= ((NI) 8);
		nimln_(253, "gc.nim");
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(254, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, pluseq__7kHiltrvRlcg6wSYR3CxAwmakeJson)(NF* x, NF y) {
	nimfr_("+=", "system.nim");
	nimln_(3799, "system.nim");
	(*x) = ((NF)((*x)) + (NF)(y));
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(NF, traial_XOMFLoJtPAsKKiJYworUvQ)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ p) {
	NF result;
	NF t0;
	NF t1;
	NF sum_times;
	nimfr_("traial", "makeJson.nim");
{	result = (NF)0;
	t0 = (NF)0;
	t1 = (NF)0;
	nimln_(69, "makeJson.nim");
	sum_times = 0.0;
	{
		NI i;
		NI res;
		i = (NI)0;
		nimln_(2105, "system.nim");
		res = ((NI) 0);
		{
			nimln_(2106, "system.nim");
			while (1) {
				NI TM_eOiIiD9cabxXt1UtYckd7QA_10;
				if (!(res <= ((NI) 10))) goto LA3;
				nimln_(2107, "system.nim");
				i = res;
				nimln_(72, "makeJson.nim");
				t0 = ntcpuTime();
				nimln_(73, "makeJson.nim");
				p();
				nimln_(74, "makeJson.nim");
				t1 = ntcpuTime();
				nimln_(75, "makeJson.nim");
				pluseq__7kHiltrvRlcg6wSYR3CxAwmakeJson((&sum_times), ((NF)(t1) - (NF)(t0)));
				nimln_(2108, "system.nim");
				TM_eOiIiD9cabxXt1UtYckd7QA_10 = addInt(res, ((NI) 1));
				res = (NI)(TM_eOiIiD9cabxXt1UtYckd7QA_10);
			} LA3: ;
		}
	}
	nimln_(77, "makeJson.nim");
	result = ((NF)(sum_times) / (NF)(1.0000000000000000e+01));
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, makeJsonUsingTmp_TwPPg77kYXfGHVQ2QcFCCA)(void) {
	tySequence_BDPkntW3JD0aj2f9cfZK7aw* tmp;
	tyArray_nHXaesL0DJZHyVS07ARPRA T12_;
	nimfr_("makeJsonUsingTmp", "makeJson.nim");
	tmp = (tySequence_BDPkntW3JD0aj2f9cfZK7aw*)0;
	{
		tyObject_Student_BaPfYBSNP4Eo9aA9b1w6sU9aQ student;
		NI i;
		NI L;
		NI T2_;
		nimZeroMem((void*)(&student), sizeof(tyObject_Student_BaPfYBSNP4Eo9aA9b1w6sU9aQ));
		nimln_(3909, "system.nim");
		i = ((NI) 0);
		nimln_(3910, "system.nim");
		T2_ = (students_list_GNg1wD0joiNKQGroPhUpag ? students_list_GNg1wD0joiNKQGroPhUpag->Sup.len : 0);
		L = T2_;
		{
			nimln_(3911, "system.nim");
			while (1) {
				NI T5_;
				NimStringDesc* T6_;
				NI TM_eOiIiD9cabxXt1UtYckd7QA_11;
				if (!(i < L)) goto LA4;
				nimln_(3912, "system.nim");
				if ((NU)(i) >= (NU)(students_list_GNg1wD0joiNKQGroPhUpag ? students_list_GNg1wD0joiNKQGroPhUpag->Sup.len : 0)) raiseIndexError();
				student.name = students_list_GNg1wD0joiNKQGroPhUpag->data[i].name;
				student.reports = students_list_GNg1wD0joiNKQGroPhUpag->data[i].reports;
				nimln_(49, "makeJson.nim");
				tmp = (tySequence_BDPkntW3JD0aj2f9cfZK7aw*) incrSeqV3(&(tmp)->Sup, (&NTI_BDPkntW3JD0aj2f9cfZK7aw_));
				T5_ = tmp->Sup.len++;
				T6_ = (NimStringDesc*)0;
				T6_ = tmp->data[T5_].name; tmp->data[T5_].name = copyStringRC1(student.name);
				if (T6_) nimGCunrefNoCycle(T6_);
				genericSeqAssign((&tmp->data[T5_].reports), student.reports, (&NTI_HwjpkzqnGgFkyxpsW9beMGw_));
				nimln_(3913, "system.nim");
				TM_eOiIiD9cabxXt1UtYckd7QA_11 = addInt(i, ((NI) 1));
				i = (NI)(TM_eOiIiD9cabxXt1UtYckd7QA_11);
				nimln_(3914, "system.nim");
				{
					NI T9_;
					T9_ = (students_list_GNg1wD0joiNKQGroPhUpag ? students_list_GNg1wD0joiNKQGroPhUpag->Sup.len : 0);
					if (!!((T9_ == L))) goto LA10_;
					failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_eOiIiD9cabxXt1UtYckd7QA_12));
				}
				LA10_: ;
			} LA4: ;
		}
	}
	nimln_(51, "makeJson.nim");
	nimZeroMem((void*)T12_, sizeof(tyArray_nHXaesL0DJZHyVS07ARPRA));
	T12_[0] = dollardollar__389cKDpDJYrKBNRmCYowLrQ(tmp);
	echoBinSafe(T12_, 1);
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, makeJsonNoTmp_TwPPg77kYXfGHVQ2QcFCCA_2)(void) {
	nimfr_("makeJsonNoTmp", "makeJson.nim");
	nimln_(62, "makeJson.nim");
	echoBinSafe(TM_eOiIiD9cabxXt1UtYckd7QA_13, 1);
	{
		tyObject_Student_BaPfYBSNP4Eo9aA9b1w6sU9aQ student;
		NI i;
		NI L;
		NI T2_;
		nimZeroMem((void*)(&student), sizeof(tyObject_Student_BaPfYBSNP4Eo9aA9b1w6sU9aQ));
		nimln_(3909, "system.nim");
		i = ((NI) 0);
		nimln_(3910, "system.nim");
		T2_ = (students_list_GNg1wD0joiNKQGroPhUpag ? students_list_GNg1wD0joiNKQGroPhUpag->Sup.len : 0);
		L = T2_;
		{
			nimln_(3911, "system.nim");
			while (1) {
				tyArray_nHXaesL0DJZHyVS07ARPRA T5_;
				NI TM_eOiIiD9cabxXt1UtYckd7QA_15;
				if (!(i < L)) goto LA4;
				nimln_(3912, "system.nim");
				if ((NU)(i) >= (NU)(students_list_GNg1wD0joiNKQGroPhUpag ? students_list_GNg1wD0joiNKQGroPhUpag->Sup.len : 0)) raiseIndexError();
				student.name = students_list_GNg1wD0joiNKQGroPhUpag->data[i].name;
				student.reports = students_list_GNg1wD0joiNKQGroPhUpag->data[i].reports;
				nimln_(64, "makeJson.nim");
				nimZeroMem((void*)T5_, sizeof(tyArray_nHXaesL0DJZHyVS07ARPRA));
				T5_[0] = dollardollar__Xzp1RW3FiCyZXI5nJD5WGw(student);
				echoBinSafe(T5_, 1);
				nimln_(3913, "system.nim");
				TM_eOiIiD9cabxXt1UtYckd7QA_15 = addInt(i, ((NI) 1));
				i = (NI)(TM_eOiIiD9cabxXt1UtYckd7QA_15);
				nimln_(3914, "system.nim");
				{
					NI T8_;
					T8_ = (students_list_GNg1wD0joiNKQGroPhUpag ? students_list_GNg1wD0joiNKQGroPhUpag->Sup.len : 0);
					if (!!((T8_ == L))) goto LA9_;
					failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_eOiIiD9cabxXt1UtYckd7QA_12));
				}
				LA9_: ;
			} LA4: ;
		}
	}
	nimln_(65, "makeJson.nim");
	echoBinSafe(TM_eOiIiD9cabxXt1UtYckd7QA_16, 1);
	popFrame();
}

static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	nimGC_setStackBottom(locals);
}
void PreMainInner(void) {
	systemInit000();
	stdlib_parseutilsDatInit000();
	stdlib_bitopsDatInit000();
	stdlib_mathDatInit000();
	stdlib_algorithmDatInit000();
	stdlib_unicodeDatInit000();
	stdlib_strutilsDatInit000();
	stdlib_typetraitsDatInit000();
	stdlib_optionsDatInit000();
	stdlib_macrosDatInit000();
	stdlib_strformatDatInit000();
	stdlib_posixDatInit000();
	stdlib_timesDatInit000();
	stdlib_ospathsDatInit000();
	stdlib_osDatInit000();
	stdlib_streamsDatInit000();
	stdlib_typeinfoDatInit000();
	stdlib_hashesDatInit000();
	stdlib_tablesDatInit000();
	stdlib_lexbaseDatInit000();
	stdlib_parsejsonDatInit000();
	stdlib_jsonDatInit000();
	stdlib_intsetsDatInit000();
	stdlib_marshalDatInit000();
	makeJsonDatInit000();
	stdlib_parseutilsInit000();
	stdlib_bitopsInit000();
	stdlib_mathInit000();
	stdlib_algorithmInit000();
	stdlib_unicodeInit000();
	stdlib_strutilsInit000();
	stdlib_typetraitsInit000();
	stdlib_optionsInit000();
	stdlib_macrosInit000();
	stdlib_strformatInit000();
	stdlib_posixInit000();
	stdlib_timesInit000();
	stdlib_ospathsInit000();
	stdlib_osInit000();
	stdlib_streamsInit000();
	stdlib_typeinfoInit000();
	stdlib_hashesInit000();
	stdlib_tablesInit000();
	stdlib_lexbaseInit000();
	stdlib_parsejsonInit000();
	stdlib_jsonInit000();
	stdlib_intsetsInit000();
	stdlib_marshalInit000();
}

void PreMain(void) {
	void (*volatile inner)(void);
	systemDatInit000();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

N_LIB_PRIVATE N_NIMCALL(void, NimMainModule)(void) {
{
	TFrame FR_; FR_.len = 0;
}
	tyArray_nHXaesL0DJZHyVS07ARPRA T9_;
	NimStringDesc* T10_;
	NimStringDesc* T11_;
	tyArray_nHXaesL0DJZHyVS07ARPRA T12_;
	NimStringDesc* T13_;
	NimStringDesc* T14_;
	nimfr_("makeJson", "makeJson.nim");
nimRegisterGlobalMarker(TM_eOiIiD9cabxXt1UtYckd7QA_4);
	{
		NI res;
		nimln_(2105, "system.nim");
		res = ((NI) 0);
		{
			nimln_(2106, "system.nim");
			while (1) {
				tyObject_Student_BaPfYBSNP4Eo9aA9b1w6sU9aQ T4_;
				tyObject_Report_om73527ED4e68btFNkaEog T5_;
				tyObject_Report_om73527ED4e68btFNkaEog T6_;
				NI T7_;
				NimStringDesc* T8_;
				NI TM_eOiIiD9cabxXt1UtYckd7QA_9;
				if (!(res <= ((NI) 10))) goto LA3;
				nimln_(2107, "system.nim");
				i_ABFHzeLaLnjdsu8JP9cItJg = res;
				nimln_(18, "makeJson.nim");
				nimZeroMem((void*)(&T4_), sizeof(tyObject_Student_BaPfYBSNP4Eo9aA9b1w6sU9aQ));
				nimZeroMem((void*)(&T4_), sizeof(tyObject_Student_BaPfYBSNP4Eo9aA9b1w6sU9aQ));
				T4_.name = copyString(((NimStringDesc*) &TM_eOiIiD9cabxXt1UtYckd7QA_5));
				nimln_(21, "makeJson.nim");
				T4_.reports = (tySequence_HwjpkzqnGgFkyxpsW9beMGw*) newSeq((&NTI_HwjpkzqnGgFkyxpsW9beMGw_), 2);
				nimZeroMem((void*)(&T5_), sizeof(tyObject_Report_om73527ED4e68btFNkaEog));
				nimZeroMem((void*)(&T5_), sizeof(tyObject_Report_om73527ED4e68btFNkaEog));
				T5_.title = copyString(((NimStringDesc*) &TM_eOiIiD9cabxXt1UtYckd7QA_6));
				T5_.link = copyString(((NimStringDesc*) &TM_eOiIiD9cabxXt1UtYckd7QA_7));
				asgnRefNoCycle((void**) (&T4_.reports->data[0].title), T5_.title);
				asgnRefNoCycle((void**) (&T4_.reports->data[0].link), T5_.link);
				nimZeroMem((void*)(&T6_), sizeof(tyObject_Report_om73527ED4e68btFNkaEog));
				nimZeroMem((void*)(&T6_), sizeof(tyObject_Report_om73527ED4e68btFNkaEog));
				T6_.title = copyString(((NimStringDesc*) &TM_eOiIiD9cabxXt1UtYckd7QA_8));
				T6_.link = copyString(((NimStringDesc*) &TM_eOiIiD9cabxXt1UtYckd7QA_7));
				asgnRefNoCycle((void**) (&T4_.reports->data[1].title), T6_.title);
				asgnRefNoCycle((void**) (&T4_.reports->data[1].link), T6_.link);
				asgnRefNoCycle((void**) (&students_list_GNg1wD0joiNKQGroPhUpag), (tySequence_BDPkntW3JD0aj2f9cfZK7aw*) incrSeqV3(&(students_list_GNg1wD0joiNKQGroPhUpag)->Sup, (&NTI_BDPkntW3JD0aj2f9cfZK7aw_)));
				T7_ = students_list_GNg1wD0joiNKQGroPhUpag->Sup.len++;
				T8_ = (NimStringDesc*)0;
				T8_ = students_list_GNg1wD0joiNKQGroPhUpag->data[T7_].name; students_list_GNg1wD0joiNKQGroPhUpag->data[T7_].name = copyStringRC1(T4_.name);
				if (T8_) nimGCunrefNoCycle(T8_);
				genericSeqAssign((&students_list_GNg1wD0joiNKQGroPhUpag->data[T7_].reports), T4_.reports, (&NTI_HwjpkzqnGgFkyxpsW9beMGw_));
				nimln_(2108, "system.nim");
				TM_eOiIiD9cabxXt1UtYckd7QA_9 = addInt(res, ((NI) 1));
				res = (NI)(TM_eOiIiD9cabxXt1UtYckd7QA_9);
			} LA3: ;
		}
	}
	nimln_(80, "makeJson.nim");
	useTmpResult_mqokAmRob6h9cTwtc0wzZ9bQ = traial_XOMFLoJtPAsKKiJYworUvQ(makeJsonUsingTmp_TwPPg77kYXfGHVQ2QcFCCA);
	nimln_(81, "makeJson.nim");
	NoTmpResult_8lrN2pEbc39cib69asZnj39aQ = traial_XOMFLoJtPAsKKiJYworUvQ(makeJsonNoTmp_TwPPg77kYXfGHVQ2QcFCCA_2);
	nimln_(82, "makeJson.nim");
	echoBinSafe(TM_eOiIiD9cabxXt1UtYckd7QA_18, 1);
	nimln_(83, "makeJson.nim");
	echoBinSafe(TM_eOiIiD9cabxXt1UtYckd7QA_20, 1);
	nimln_(84, "makeJson.nim");
	echoBinSafe(TM_eOiIiD9cabxXt1UtYckd7QA_22, 1);
	nimln_(85, "makeJson.nim");
	echoBinSafe(TM_eOiIiD9cabxXt1UtYckd7QA_24, 1);
	nimln_(86, "makeJson.nim");
	nimZeroMem((void*)T9_, sizeof(tyArray_nHXaesL0DJZHyVS07ARPRA));
	T10_ = (NimStringDesc*)0;
	T11_ = (NimStringDesc*)0;
	T11_ = nimFloatToStr(useTmpResult_mqokAmRob6h9cTwtc0wzZ9bQ);
	T10_ = rawNewString((T11_ ? T11_->Sup.len : 0) + 7);
appendString(T10_, ((NimStringDesc*) &TM_eOiIiD9cabxXt1UtYckd7QA_26));
appendString(T10_, T11_);
	T9_[0] = T10_;
	echoBinSafe(T9_, 1);
	nimln_(87, "makeJson.nim");
	nimZeroMem((void*)T12_, sizeof(tyArray_nHXaesL0DJZHyVS07ARPRA));
	T13_ = (NimStringDesc*)0;
	T14_ = (NimStringDesc*)0;
	T14_ = nimFloatToStr(NoTmpResult_8lrN2pEbc39cib69asZnj39aQ);
	T13_ = rawNewString((T14_ ? T14_->Sup.len : 0) + 7);
appendString(T13_, ((NimStringDesc*) &TM_eOiIiD9cabxXt1UtYckd7QA_27));
appendString(T13_, T14_);
	T12_[0] = T13_;
	echoBinSafe(T12_, 1);
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, makeJsonDatInit000)(void) {
static TNimNode* TM_eOiIiD9cabxXt1UtYckd7QA_2[2];
static TNimNode* TM_eOiIiD9cabxXt1UtYckd7QA_3[2];
static TNimNode TM_eOiIiD9cabxXt1UtYckd7QA_0[6];
NTI_BaPfYBSNP4Eo9aA9b1w6sU9aQ_.size = sizeof(tyObject_Student_BaPfYBSNP4Eo9aA9b1w6sU9aQ);
NTI_BaPfYBSNP4Eo9aA9b1w6sU9aQ_.kind = 18;
NTI_BaPfYBSNP4Eo9aA9b1w6sU9aQ_.base = 0;
NTI_BaPfYBSNP4Eo9aA9b1w6sU9aQ_.flags = 2;
TM_eOiIiD9cabxXt1UtYckd7QA_2[0] = &TM_eOiIiD9cabxXt1UtYckd7QA_0[1];
TM_eOiIiD9cabxXt1UtYckd7QA_0[1].kind = 1;
TM_eOiIiD9cabxXt1UtYckd7QA_0[1].offset = offsetof(tyObject_Student_BaPfYBSNP4Eo9aA9b1w6sU9aQ, name);
TM_eOiIiD9cabxXt1UtYckd7QA_0[1].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_eOiIiD9cabxXt1UtYckd7QA_0[1].name = "name";
TM_eOiIiD9cabxXt1UtYckd7QA_2[1] = &TM_eOiIiD9cabxXt1UtYckd7QA_0[2];
NTI_om73527ED4e68btFNkaEog_.size = sizeof(tyObject_Report_om73527ED4e68btFNkaEog);
NTI_om73527ED4e68btFNkaEog_.kind = 18;
NTI_om73527ED4e68btFNkaEog_.base = 0;
NTI_om73527ED4e68btFNkaEog_.flags = 2;
TM_eOiIiD9cabxXt1UtYckd7QA_3[0] = &TM_eOiIiD9cabxXt1UtYckd7QA_0[4];
TM_eOiIiD9cabxXt1UtYckd7QA_0[4].kind = 1;
TM_eOiIiD9cabxXt1UtYckd7QA_0[4].offset = offsetof(tyObject_Report_om73527ED4e68btFNkaEog, title);
TM_eOiIiD9cabxXt1UtYckd7QA_0[4].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_eOiIiD9cabxXt1UtYckd7QA_0[4].name = "title";
TM_eOiIiD9cabxXt1UtYckd7QA_3[1] = &TM_eOiIiD9cabxXt1UtYckd7QA_0[5];
TM_eOiIiD9cabxXt1UtYckd7QA_0[5].kind = 1;
TM_eOiIiD9cabxXt1UtYckd7QA_0[5].offset = offsetof(tyObject_Report_om73527ED4e68btFNkaEog, link);
TM_eOiIiD9cabxXt1UtYckd7QA_0[5].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_eOiIiD9cabxXt1UtYckd7QA_0[5].name = "link";
TM_eOiIiD9cabxXt1UtYckd7QA_0[3].len = 2; TM_eOiIiD9cabxXt1UtYckd7QA_0[3].kind = 2; TM_eOiIiD9cabxXt1UtYckd7QA_0[3].sons = &TM_eOiIiD9cabxXt1UtYckd7QA_3[0];
NTI_om73527ED4e68btFNkaEog_.node = &TM_eOiIiD9cabxXt1UtYckd7QA_0[3];
NTI_HwjpkzqnGgFkyxpsW9beMGw_.size = sizeof(tySequence_HwjpkzqnGgFkyxpsW9beMGw*);
NTI_HwjpkzqnGgFkyxpsW9beMGw_.kind = 24;
NTI_HwjpkzqnGgFkyxpsW9beMGw_.base = (&NTI_om73527ED4e68btFNkaEog_);
NTI_HwjpkzqnGgFkyxpsW9beMGw_.flags = 2;
NTI_HwjpkzqnGgFkyxpsW9beMGw_.marker = Marker_tySequence_HwjpkzqnGgFkyxpsW9beMGw;
TM_eOiIiD9cabxXt1UtYckd7QA_0[2].kind = 1;
TM_eOiIiD9cabxXt1UtYckd7QA_0[2].offset = offsetof(tyObject_Student_BaPfYBSNP4Eo9aA9b1w6sU9aQ, reports);
TM_eOiIiD9cabxXt1UtYckd7QA_0[2].typ = (&NTI_HwjpkzqnGgFkyxpsW9beMGw_);
TM_eOiIiD9cabxXt1UtYckd7QA_0[2].name = "reports";
TM_eOiIiD9cabxXt1UtYckd7QA_0[0].len = 2; TM_eOiIiD9cabxXt1UtYckd7QA_0[0].kind = 2; TM_eOiIiD9cabxXt1UtYckd7QA_0[0].sons = &TM_eOiIiD9cabxXt1UtYckd7QA_2[0];
NTI_BaPfYBSNP4Eo9aA9b1w6sU9aQ_.node = &TM_eOiIiD9cabxXt1UtYckd7QA_0[0];
NTI_BDPkntW3JD0aj2f9cfZK7aw_.size = sizeof(tySequence_BDPkntW3JD0aj2f9cfZK7aw*);
NTI_BDPkntW3JD0aj2f9cfZK7aw_.kind = 24;
NTI_BDPkntW3JD0aj2f9cfZK7aw_.base = (&NTI_BaPfYBSNP4Eo9aA9b1w6sU9aQ_);
NTI_BDPkntW3JD0aj2f9cfZK7aw_.flags = 2;
NTI_BDPkntW3JD0aj2f9cfZK7aw_.marker = Marker_tySequence_BDPkntW3JD0aj2f9cfZK7aw;
}

