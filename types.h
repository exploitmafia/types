#pragma once
// Basic Defines
#define TRUE 1
#define FALSE 0
#ifndef NULL
#ifdef __cplusplus
#define NULL 0
#else
#define NULL (void*)0
#endif
#endif
// Type Defines
typedef const char* PCSTR, *LPCSTR;
typedef signed long LRESULT, HPARAM, LPARAM, HRESULT, BOOL, *PBOOL, *LPBOOL, INT, INT32, * PINT, * PINT32, *LPINT, *LPINT32, LONG, * PLONG, * LPLONG, LONG32, *LPLONG32, *LPLONG32, *LPLONG;
typedef signed long long LONGLONG, INT64, * PLONGLONG, * PINT64, LONG64, * PLONG64, * LPLONG64;
typedef unsigned long UINT, UINT32, DWORD, ULONG, ULONG32, * PUINT, * PUINT32, * PDWORD, * PULONG, *PUINT32, * LPUINT, * LPUINT32, * LPDWORD, * LPULONG;
typedef unsigned long long UINT64, ULONG64, QWORD, ULONGLONG, * PUINT64, * PULONG64, * PQWORD, * PULONGLONG, * LPUINT64, * LPULONG64, * LPQWORD, * LPULONGLONG;
typedef signed short SHORT, INT16, * PSHORT, * PINT16, * LPSHORT, * LPINT16;
typedef unsigned short USHORT, UINT16, WORD, * PUSHORT, * PUINT16, * PWORD, *LPUSHORT, *LPUINT16, *LPWORD;
typedef signed char CHAR, STR, INT8, * PCHAR, * PSTR, * PINT8, * LPCHAR, * LPSTR, * LPCHAR;
typedef unsigned char UCHAR, UINT8, BYTE, BOOLEAN, HWORD, * PUCHAR, * PUINT8, * PBYTE, * PBOOLEAN, * PHWORD, * LPUCHAR, * LPUINT8, * LPBYTE, * LPBOOLEAN, * LPHWORD;
typedef void VOID, * PVOID, * LPVOID, *HANDLE, **PHANDLE, **LPHANDLE;
typedef const void CVOID, * PCVOID, * LPCVOID;
// Calling conventions
#define API __fastcall
#define WINAPI __stdcall
#define APIENTRY __stdcall
#define NTAPI __stdcall
// Helper Macros
#define MAKEWORD(a, b)      ((WORD)(((BYTE)(((PDWORD)(a)) & 0xFF)) | ((WORD)((BYTE)(((PDWORD)(b)) & 0xFF))) << 0x8))
#define MAKELONG(a, b)      ((LONG)(((WORD)(((PDWORD)(a)) & 0xFFFF)) | ((DWORD)((WORD)(((PDWORD)(b)) & 0xFFFF)) << 0x10))
#define MAKEWPARAM(l, h)      ((WPARAM)(DWORD)MAKELONG(l, h))
#define MAKELPARAM(l, h)      ((LPARAM)(DWORD)MAKELONG(l, h))
#define MAKELRESULT(l, h)     ((LRESULT)(DWORD)MAKELONG(l, h))
#define MAKEHRESULT(l, h)     ((HRESULT)(DWORD)MAKELONG(l, h))
#define LOWORD(l)           ((WORD)(((PDWORD)(l)) & 0xFFFF))
#define HIWORD(l)           ((WORD)((((PDWORD)(l)) >> 0x10) & 0xFFFF))
#define LOBYTE(w)           ((BYTE)(((PDWORD)(w)) & 0xFF))
#define HIBYTE(w)           ((BYTE)((((PDWORD)(w)) >> 0x8) & 0xFF))
