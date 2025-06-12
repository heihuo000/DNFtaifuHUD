
//----- (1004D5D2) --------------------------------------------------------
int __cdecl sub_1004D5D2(int a1)
{
  int (__cdecl *v1)(int); // esi
  int v2; // ST04_4
  int v3; // eax
  const char *v5; // [esp+Ch] [ebp-24h]
  int v6; // [esp+10h] [ebp-20h]
  const char *v7; // [esp+14h] [ebp-1Ch]
  int v8; // [esp+18h] [ebp-18h]
  int v9; // [esp+1Ch] [ebp-14h]
  int v10; // [esp+20h] [ebp-10h]
  int v11; // [esp+24h] [ebp-Ch]
  int v12; // [esp+28h] [ebp-8h]

  if ( *(_BYTE *)dword_100B17F4 == 88 )
  {
    v5 = "void";
    ++dword_100B17F4;
    v6 = 4;
    sub_1003413A(&v5);
  }
  else if ( *(_BYTE *)dword_100B17F4 == 63 )
  {
    sub_10035FAD(&v5);
    if ( !(dword_100B17FC & 0x4000) )
      goto LABEL_13;
    if ( !dword_100B1804 )
      goto LABEL_13;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    sub_10034B12(&v9, 16);
    v1 = dword_100B1804;
    v2 = sub_1003625F(&v9);
    v3 = v1(v2);
    if ( v3 )
    {
      LOBYTE(v6) = 0;
      sub_10035346(v3, v6);
    }
    else
    {
LABEL_13:
      v7 = "`template-parameter";
      v8 = 19;
      sub_1003413A(&v7);
      sub_10035742(&v7, &v5);
      sub_1003446E(a1, 39);
    }
  }
  else
  {
    v7 = 0;
    v8 = 0;
    sub_10034676(a1, &v7);
  }
  return a1;
}
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 1003446E: using guessed type _DWORD __stdcall sub_1003446E(_DWORD, _DWORD);
// 10034676: using guessed type _DWORD __cdecl sub_10034676(_DWORD, _DWORD);
// 10034B12: using guessed type _DWORD __stdcall sub_10034B12(_DWORD, _DWORD);
// 10035346: using guessed type _DWORD __stdcall sub_10035346(_DWORD, _DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 10035FAD: using guessed type _DWORD __cdecl sub_10035FAD(_DWORD);
// 1003625F: using guessed type _DWORD __cdecl sub_1003625F(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;
// 100B17FC: using guessed type int dword_100B17FC;
// 100B1804: using guessed type int (__cdecl *dword_100B1804)(_DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004D727) --------------------------------------------------------
int __cdecl sub_1004D727(int a1)
{
  int v2; // [esp+0h] [ebp-10h]
  int v3; // [esp+4h] [ebp-Ch]
  int v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  v4 = 0;
  v5 = 0;
  v2 = 0;
  v3 = 0;
  sub_1003324E(a1, &v2, 0, &v4, 1);
  return a1;
}
// 1003324E: using guessed type _DWORD __cdecl sub_1003324E(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1004D761) --------------------------------------------------------
_DWORD *__cdecl sub_1004D761(_DWORD *a1)
{
  _DWORD *result; // eax

  if ( *(_BYTE *)dword_100B17F4 == 90 )
    ++dword_100B17F4;
  result = a1;
  *a1 = 0;
  a1[1] = 0;
  return result;
}
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004D787) --------------------------------------------------------
int sub_1004D787()
{
  char *i; // ecx
  signed int v1; // eax
  char v2; // dl
  signed int v3; // esi
  int v4; // edx
  char v5; // bl
  signed int v6; // eax
  _BYTE *v7; // edx
  int v8; // ecx
  signed int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int result; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  char v22; // al
  int v23; // eax
  bool v24; // zf

  for ( i = (char *)dword_100B17F4; ; dword_100B17F4 = (int)i )
  {
    v1 = 0;
    if ( *i == 95 )
    {
      ++i;
      v1 = 0x4000;
      dword_100B17F4 = (int)i;
    }
    v2 = *i;
    v3 = v1;
    if ( *i >= 65 && v2 <= 90 )
    {
      result = v1 | 0x8000;
      v17 = v2 - 65;
      dword_100B17F4 = (int)(i + 1);
      if ( v17 & 1 )
        result |= 0x2000u;
      if ( v17 >= 24 )
        return result;
      result |= 0x800u;
      v18 = v17 & 0x18;
      if ( v17 & 0x18 )
      {
        if ( v18 == 8 )
        {
          result |= 0x80u;
        }
        else if ( v18 != 16 )
        {
          return 0xFFFF;
        }
      }
      else
      {
        result |= 0x40u;
      }
      v19 = v17 & 6;
      if ( !v19 )
        return result;
      v20 = v19 - 2;
      if ( !v20 )
        return result | 0x200;
      v21 = v20 - 2;
      if ( !v21 )
        return result | 0x100;
      if ( v21 == 2 )
        return result | 0x400;
      return 0xFFFF;
    }
    if ( v2 != 36 )
    {
      if ( (unsigned __int8)(v2 - 48) <= 8u )
      {
        dword_100B17F4 = (int)(i + 1);
        switch ( v2 )
        {
          case 48:
            result = 2048;
            break;
          case 49:
            result = 4096;
            break;
          case 50:
            result = 0;
            break;
          case 51:
            result = 0x4000;
            break;
          case 52:
            result = 0x2000;
            break;
          case 53:
            result = 24576;
            break;
          case 54:
            result = 26624;
            break;
          case 55:
            result = 28672;
            break;
          case 56:
            result = 30720;
            break;
          default:
            return 0xFFFF;
        }
        return result;
      }
      if ( v2 == 57 )
      {
        result = 65533;
        dword_100B17F4 = (int)(i + 1);
        return result;
      }
      if ( v2 == 59 )
      {
        result = 27648;
        dword_100B17F4 = (int)(i + 1);
        return result;
      }
      v23 = 0;
      v24 = v2 == 0;
LABEL_94:
      LOBYTE(v23) = !v24;
      return v23 + 65534;
    }
    v4 = (int)(i + 1);
    dword_100B17F4 = (int)(i + 1);
    v5 = i[1];
    if ( v5 > 53 )
    {
      switch ( v5 )
      {
        case 65:
          result = v1 | 0x9000;
          goto LABEL_77;
        case 66:
          result = v1 | 0x9800;
          goto LABEL_77;
        case 67:
          result = 31744;
          goto LABEL_77;
        case 68:
          result = v1 | 0x9100;
          goto LABEL_77;
        case 69:
          result = v1 | 0x9200;
          goto LABEL_77;
        case 82:
          v4 = (int)(i + 2);
          dword_100B17F4 = (int)(i + 2);
          v5 = i[2];
          if ( i[2] >= 48 )
          {
            v6 = 1;
            if ( v5 <= 53 )
              goto LABEL_63;
          }
          v23 = 0;
          v24 = v5 == 0;
          goto LABEL_94;
      }
      return 0xFFFF;
    }
    v6 = 0;
    if ( v5 == 53 )
      goto LABEL_63;
    if ( !v5 )
      return 65534;
    if ( v5 != 36 )
      break;
    v7 = i + 2;
    dword_100B17F4 = (int)v7;
    v8 = (int)(i + 2);
    if ( *v7 == 80 )
    {
      v8 = (int)(v7++ + 1);
      dword_100B17F4 = (int)v7;
    }
    v9 = (char)*v7;
    if ( v9 > 77 )
    {
      v13 = v9 - 78;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 2;
          if ( v15 )
          {
            if ( v15 != 23 )
              return 0xFFFF;
            dword_100B1808 = 0;
          }
          goto LABEL_20;
        }
      }
LABEL_42:
      v4 = v8 + 1;
      dword_100B17F4 = v8 + 1;
      v22 = *(_BYTE *)(v8 + 1);
      if ( v22 < 48 )
      {
        if ( !v22 )
          return 65534;
      }
      else if ( v22 <= 57 )
      {
        if ( (unsigned __int8)sub_100343DD((char)(v22 - 48) + 1) )
          return sub_10033785() | 0x10000;
        return 65534;
      }
      result = 0xFFFF;
      goto LABEL_77;
    }
    if ( v9 != 77 )
    {
      if ( !*v7 )
        return 65534;
      v10 = v9 - 70;
      if ( v10 )
      {
        v11 = v10 - 2;
        if ( v11 )
        {
          v12 = v11 - 2;
          if ( !v12 )
            goto LABEL_42;
          if ( v12 != 2 )
            return 0xFFFF;
        }
      }
    }
LABEL_20:
    i = (char *)(v8 + 1);
  }
  if ( v5 != 48 && v5 != 49 && v5 != 50 && v5 != 51 && v5 != 52 )
    return 0xFFFF;
LABEL_63:
  result = v3 | ((v6 + 5) << 8) | 0x8800;
  if ( v5 & 1 )
    result |= 0x2000u;
  if ( v5 & 6 )
  {
    if ( (v5 & 6) == 2 )
    {
      result |= 0x80u;
    }
    else if ( (v5 & 6) != 4 )
    {
      return 0xFFFF;
    }
  }
  else
  {
    result |= 0x40u;
  }
LABEL_77:
  dword_100B17F4 = v4 + 1;
  return result;
}
// 10033785: using guessed type int sub_10033785(void);
// 100343DD: using guessed type _DWORD __cdecl sub_100343DD(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;
// 100B1808: using guessed type int dword_100B1808;

//----- (1004DB92) --------------------------------------------------------
_BYTE *__stdcall sub_1004DB92(_BYTE *a1, int a2)
{
  int v3; // ebx
  _BYTE *v4; // edi
  int v5; // eax
  int v6; // esi
  int v7; // eax
  _BYTE *v8; // ecx
  char v9; // cl
  char *v10; // eax
  _BYTE *i; // edx
  int v12; // [esp+8h] [ebp-8h]
  int v13; // [esp+Ch] [ebp-4h]

  sub_10033163(&v12);
  if ( (_BYTE)v13 == 3 )
    return 0;
  if ( (_BYTE)v13 == 2 || !(dword_100B17FC & 0x1000) && *(_BYTE *)dword_100B17F4 )
  {
    LOBYTE(v13) = 0;
    v3 = *(_DWORD *)sub_10035B43(dword_100B17F8, v13);
  }
  else
  {
    v3 = v12;
  }
  v4 = a1;
  if ( a1 )
  {
    v7 = a2;
LABEL_15:
    v8 = v4;
    if ( !v3 )
    {
      *v4 = 0;
      goto LABEL_21;
    }
    if ( !v4 )
    {
      v13 = (**(int (__thiscall ***)(int))v3)(v3) + 1;
      v8 = (_BYTE *)sub_100356B6(v13);
      if ( !v8 )
      {
LABEL_21:
        v9 = *v4;
        v10 = v4;
        for ( i = v4; *v10; ++i )
        {
          ++v10;
          if ( v9 == 32 )
          {
            *i = 32;
            while ( *v10 == 32 )
              ++v10;
          }
          else
          {
            *i = v9;
          }
          v9 = *v10;
        }
        *i = v9;
        return v4;
      }
      v7 = v13;
    }
    *(_BYTE *)(*(int (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)v3 + 12))(v3, v8, &v8[v7 - 1]) = 0;
    goto LABEL_21;
  }
  if ( v3 )
    v5 = (**(int (__thiscall ***)(int))v3)(v3);
  else
    v5 = 0;
  v6 = v5 + 1;
  v13 = v5 + 1;
  v4 = (_BYTE *)sub_1003620A(v5 + 1);
  if ( v4 )
  {
    v7 = v6;
    goto LABEL_15;
  }
  return v4;
}
// 10033163: using guessed type _DWORD __cdecl sub_10033163(_DWORD);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 10035B43: using guessed type _DWORD __stdcall sub_10035B43(_DWORD, _DWORD);
// 1003620A: using guessed type _DWORD __stdcall sub_1003620A(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;
// 100B17F8: using guessed type int dword_100B17F8;
// 100B17FC: using guessed type int dword_100B17FC;
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004DCF8) --------------------------------------------------------
_DWORD *__cdecl sub_1004DCF8(_DWORD *a1)
{
  int v1; // eax
  int v2; // eax
  _DWORD *result; // eax
  char v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  if ( *(_BYTE *)dword_100B17F4 )
  {
    sub_100357CE(&v4);
    sub_1003446E(&v5, 123);
    if ( *(_BYTE *)dword_100B17F4 != 64 )
    {
      v1 = sub_10033EF1(&v4, 0, 0);
      sub_10034234(v1);
      sub_10034A7C(58);
      v2 = sub_10034B26(&v4);
      sub_10034234(v2);
    }
    sub_10034A7C(125);
    if ( *(_BYTE *)dword_100B17F4 == 64 )
    {
      ++dword_100B17F4;
      result = a1;
      *a1 = v5;
      a1[1] = v6;
      return result;
    }
    sub_100334A6(2);
  }
  else
  {
    sub_100334A6(1);
  }
  return a1;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10033EF1: using guessed type _DWORD __cdecl sub_10033EF1(_DWORD, char, char);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 1003446E: using guessed type _DWORD __stdcall sub_1003446E(_DWORD, _DWORD);
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 10034B26: using guessed type _DWORD __cdecl sub_10034B26(_DWORD);
// 100357CE: using guessed type _DWORD __cdecl sub_100357CE(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004DDC8) --------------------------------------------------------
int __cdecl sub_1004DDC8(int a1)
{
  const char *v2; // [esp+0h] [ebp-8h]
  int v3; // [esp+4h] [ebp-4h]

  if ( *(_BYTE *)dword_100B17F4 )
  {
    if ( *(_BYTE *)dword_100B17F4 == 65 )
    {
      v2 = "{flat}";
      ++dword_100B17F4;
      v3 = 6;
      sub_1003413A(&v2);
    }
    else
    {
      sub_100334A6(2);
    }
  }
  else
  {
    sub_100334A6(1);
  }
  return a1;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004DE24) --------------------------------------------------------
int __cdecl sub_1004DE24(int a1)
{
  char *v1; // edi
  unsigned int v2; // ecx
  unsigned int v3; // esi
  unsigned __int8 v4; // al
  unsigned __int64 v5; // kr00_8
  char v6; // al
  int result; // eax

  v1 = (char *)dword_100B17F4;
  v2 = 0;
  v3 = 0;
  while ( 1 )
  {
    v6 = *v1;
    if ( !*v1 )
    {
LABEL_6:
      result = a1;
      *(_BYTE *)(a1 + 8) = 0;
      return result;
    }
    if ( v6 == 64 )
      break;
    v4 = v6 - 65;
    if ( v4 > 0xFu )
      goto LABEL_6;
    v5 = (char)v4 + 16 * __PAIR__(v3, v2);
    v3 = v5 >> 32;
    v2 = v5;
    dword_100B17F4 = (int)++v1;
  }
  result = a1;
  *(_DWORD *)a1 = v2;
  *(_DWORD *)(a1 + 4) = v3;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004DE88) --------------------------------------------------------
_DWORD *__cdecl sub_1004DE88(_DWORD *a1)
{
  _BYTE *v1; // eax
  int v2; // eax
  int v3; // eax
  _DWORD *result; // eax
  char v5; // [esp+0h] [ebp-38h]
  char v6; // [esp+8h] [ebp-30h]
  char v7; // [esp+10h] [ebp-28h]
  char v8; // [esp+18h] [ebp-20h]
  char v9; // [esp+20h] [ebp-18h]
  char v10; // [esp+28h] [ebp-10h]
  int v11; // [esp+30h] [ebp-8h]
  int v12; // [esp+34h] [ebp-4h]

  if ( *(_BYTE *)dword_100B17F4 )
  {
    sub_100357CE(&v11);
    if ( (char)v12 > 1 || (sub_10034A7C(123), v1 = (_BYTE *)dword_100B17F4, !*(_BYTE *)dword_100B17F4) )
    {
LABEL_21:
      sub_100334A6(2);
      return a1;
    }
    while ( 1 )
    {
      switch ( *v1 )
      {
        case 0x32:
          dword_100B17F4 = (int)(v1 + 1);
          v3 = sub_1003630E(&v5);
          break;
        case 0x33:
          dword_100B17F4 = (int)(v1 + 1);
          v3 = sub_10034FF4(&v6);
          break;
        case 0x34:
          dword_100B17F4 = (int)(v1 + 1);
          v3 = sub_10033E79(&v7);
          break;
        case 0x37:
          dword_100B17F4 = (int)(v1 + 1);
          v3 = sub_100347B1(&v8);
          break;
        case 0x40:
          goto LABEL_16;
        default:
          v2 = sub_100357CE(&v10);
          sub_10034234(v2);
          sub_10034A7C(58);
          v3 = sub_10034B26(&v9);
          break;
      }
      sub_10034234(v3);
      v1 = (_BYTE *)dword_100B17F4;
LABEL_16:
      if ( (char)v12 > 1 )
        goto LABEL_21;
      if ( *v1 == 64 )
      {
        dword_100B17F4 = (int)(v1 + 1);
        sub_10034A7C(125);
        result = a1;
        *a1 = v11;
        a1[1] = v12;
        return result;
      }
      if ( !*v1 )
        goto LABEL_21;
      sub_10034A7C(44);
      v1 = (_BYTE *)dword_100B17F4;
    }
  }
  sub_100334A6(1);
  return a1;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10033E79: using guessed type _DWORD __cdecl sub_10033E79(_DWORD);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 100347B1: using guessed type _DWORD __cdecl sub_100347B1(_DWORD);
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 10034B26: using guessed type _DWORD __cdecl sub_10034B26(_DWORD);
// 10034FF4: using guessed type _DWORD __cdecl sub_10034FF4(_DWORD);
// 100357CE: using guessed type _DWORD __cdecl sub_100357CE(_DWORD);
// 1003630E: using guessed type _DWORD __cdecl sub_1003630E(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004E019) --------------------------------------------------------
_DWORD *__cdecl sub_1004E019(_DWORD *a1, int *a2)
{
  int v2; // eax
  int v3; // eax
  const char *v5; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]

  v5 = "{for ";
  v2 = *a2;
  v6 = 5;
  *a1 = v2;
  a1[1] = a2[1];
  sub_10035CA1(&v5);
  v3 = sub_100348BA(&v5);
  sub_10034234(v3);
  sub_10034A7C(125);
  if ( *(_BYTE *)dword_100B17F4 == 64 )
    ++dword_100B17F4;
  return a1;
}
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 100348BA: using guessed type _DWORD __cdecl sub_100348BA(_DWORD);
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 10035CA1: using guessed type _DWORD __stdcall sub_10035CA1(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004E092) --------------------------------------------------------
const char **__cdecl sub_1004E092(const char **a1, const char **a2)
{
  const char *v2; // eax
  const char **v3; // eax
  const char *v4; // eax
  _BYTE *v5; // eax
  char v6; // cl
  int v7; // eax
  int v8; // eax
  char v10; // [esp+8h] [ebp-20h]
  char v11; // [esp+10h] [ebp-18h]
  char v12; // [esp+18h] [ebp-10h]
  const char *v13; // [esp+20h] [ebp-8h]
  const char *v14; // [esp+24h] [ebp-4h]

  *a1 = *a2;
  v2 = a2[1];
  a1[1] = v2;
  if ( (char)v2 <= 1 )
  {
    if ( *(_BYTE *)dword_100B17F4 )
    {
      sub_100333C5(&v13);
      sub_1003446E(&v12, 32);
      v3 = (const char **)sub_10035742(&v11, a1);
      *a1 = *v3;
      v4 = v3[1];
      a1[1] = v4;
      if ( (char)v4 <= 1 )
      {
        v5 = (_BYTE *)dword_100B17F4;
        if ( *(_BYTE *)dword_100B17F4 == 64 )
          goto LABEL_25;
        v13 = "{for ";
        v14 = (const char *)5;
LABEL_6:
        sub_10035CA1(&v13);
        v5 = (_BYTE *)dword_100B17F4;
        while ( 1 )
        {
          v6 = *((_BYTE *)a1 + 4);
          if ( v6 > 1 )
            break;
          if ( !*v5 )
            goto LABEL_16;
          if ( *v5 == 64 )
          {
            if ( v6 > 1 )
              break;
LABEL_16:
            if ( !*v5 )
              sub_10036133(1);
            sub_10034A7C(125);
            v5 = (_BYTE *)dword_100B17F4;
            break;
          }
          v7 = sub_100348BA(&v11);
          sub_10034211(&v12, 96, v7);
          v8 = sub_1003446E(&v10, 39);
          sub_10034234(v8);
          v5 = (_BYTE *)dword_100B17F4;
          if ( *(_BYTE *)dword_100B17F4 == 64 )
            v5 = (_BYTE *)(dword_100B17F4++ + 1);
          if ( *((_BYTE *)a1 + 4) <= 1 && *v5 != 64 )
          {
            v13 = "s ";
            v14 = (const char *)2;
            goto LABEL_6;
          }
        }
        if ( *v5 == 64 )
LABEL_25:
          dword_100B17F4 = (int)(v5 + 1);
      }
    }
    else
    {
      sub_100334A6(1);
      sub_10035742(&v13, a1);
      *a1 = v13;
      a1[1] = v14;
    }
  }
  return a1;
}
// 100333C5: using guessed type _DWORD __cdecl sub_100333C5(_DWORD);
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10034211: using guessed type _DWORD __cdecl sub_10034211(_DWORD, _DWORD, _DWORD);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 1003446E: using guessed type _DWORD __stdcall sub_1003446E(_DWORD, _DWORD);
// 100348BA: using guessed type _DWORD __cdecl sub_100348BA(_DWORD);
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 10035CA1: using guessed type _DWORD __stdcall sub_10035CA1(_DWORD);
// 10036133: using guessed type _DWORD __stdcall sub_10036133(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004E23B) --------------------------------------------------------
const char **__cdecl sub_1004E23B(const char **a1, char a2, char a3)
{
  _BYTE *v3; // esi
  char v4; // cl
  unsigned int v5; // eax
  const char **result; // eax
  const char **v7; // eax
  const char *v8; // edi
  int v9; // ebx
  int v10; // esi
  int (__cdecl *v11)(int); // esi
  int v12; // ST08_4
  int v13; // eax
  const char **v14; // eax
  char *v15; // eax
  _DWORD *v16; // esi
  const char **v17; // eax
  char v18; // [esp+8h] [ebp-3Ch]
  char v19; // [esp+10h] [ebp-34h]
  const char **v20; // [esp+18h] [ebp-2Ch]
  char v21; // [esp+1Ch] [ebp-28h]
  char v22; // [esp+27h] [ebp-1Dh]
  const char *v23; // [esp+28h] [ebp-1Ch]
  int v24; // [esp+2Ch] [ebp-18h]
  int v25; // [esp+30h] [ebp-14h]
  int v26; // [esp+34h] [ebp-10h]
  int v27; // [esp+38h] [ebp-Ch]
  int v28; // [esp+3Ch] [ebp-8h]

  v3 = (_BYTE *)dword_100B17F4;
  v20 = a1;
  v4 = *(_BYTE *)dword_100B17F4;
  v5 = *(char *)dword_100B17F4 - 48;
  v22 = *(_BYTE *)dword_100B17F4;
  if ( v5 <= 9 )
  {
    ++dword_100B17F4;
    sub_100338D4(a1, v5);
    return a1;
  }
  if ( v4 == 63 )
  {
    v7 = (const char **)sub_100340EF(&v21, 0);
    v8 = *v7;
    v9 = (int)v7[1];
    v23 = *v7;
    v24 = v9;
    if ( *(_BYTE *)dword_100B17F4 == 64 )
    {
      ++dword_100B17F4;
    }
    else
    {
      sub_10034216((*(_BYTE *)dword_100B17F4 != 0) + 1);
      v9 = v24;
      v8 = v23;
    }
    goto LABEL_23;
  }
  if ( !sub_1004E881((_BYTE *)dword_100B17F4, "template-parameter-", 19) )
  {
    v23 = "`template-parameter-";
    v10 = (int)(v3 + 19);
    v24 = 20;
LABEL_11:
    dword_100B17F4 = v10;
    sub_10035FAD(&v21);
    if ( dword_100B17FC & 0x4000 && dword_100B1804 )
    {
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      sub_10034B12(&v25, 16);
      v11 = dword_100B1804;
      v12 = sub_1003625F(&v25);
      v13 = v11(v12);
      if ( v13 )
      {
        LOBYTE(v24) = 0;
        v14 = (const char **)sub_10035346(v13, v24);
        goto LABEL_22;
      }
      sub_1003413A(&v23);
      sub_10035742(&v23, &v21);
      v15 = &v19;
    }
    else
    {
      sub_1003413A(&v23);
      sub_10035742(&v23, &v21);
      v15 = &v18;
    }
    v14 = (const char **)sub_1003446E(v15, 39);
    goto LABEL_22;
  }
  if ( !sub_1004E881(v3, "generic-type-", 13) )
  {
    v23 = "`generic-type-";
    v10 = (int)(v3 + 13);
    v24 = 14;
    goto LABEL_11;
  }
  if ( a3 && v22 == 64 )
  {
    v8 = 0;
    v9 = 0;
    dword_100B17F4 = (int)(v3 + 1);
    goto LABEL_23;
  }
  v14 = (const char **)sub_100362B9(&dword_100B17F4, 64);
LABEL_22:
  v9 = (int)v14[1];
  v8 = *v14;
LABEL_23:
  if ( a2 )
  {
    v16 = (_DWORD *)dword_100B17EC;
    if ( *(_DWORD *)dword_100B17EC != 9 )
    {
      if ( v8 )
      {
        v17 = (const char **)sub_100356B6(8);
        if ( v17 )
        {
          *v17 = v8;
          v17[1] = (const char *)v9;
          v16[++*v16 + 1] = v17;
        }
      }
    }
  }
  result = v20;
  *v20 = v8;
  result[1] = (const char *)v9;
  return result;
}
// 100338D4: using guessed type _DWORD __stdcall sub_100338D4(_DWORD, _DWORD);
// 100340EF: using guessed type _DWORD __cdecl sub_100340EF(_DWORD, char);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 10034216: using guessed type _DWORD __stdcall sub_10034216(_DWORD);
// 1003446E: using guessed type _DWORD __stdcall sub_1003446E(_DWORD, _DWORD);
// 10034B12: using guessed type _DWORD __stdcall sub_10034B12(_DWORD, _DWORD);
// 10035346: using guessed type _DWORD __stdcall sub_10035346(_DWORD, _DWORD);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 10035FAD: using guessed type _DWORD __cdecl sub_10035FAD(_DWORD);
// 1003625F: using guessed type _DWORD __cdecl sub_1003625F(_DWORD);
// 100362B9: using guessed type _DWORD __stdcall sub_100362B9(_DWORD, char);
// 100B17EC: using guessed type int dword_100B17EC;
// 100B17F4: using guessed type int dword_100B17F4;
// 100B17FC: using guessed type int dword_100B17FC;
// 100B1804: using guessed type int (__cdecl *dword_100B1804)(_DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004E4DA) --------------------------------------------------------
char sub_1004E4DA()
{
  char result; // al

  result = *(_BYTE *)dword_100B17F4;
  if ( *(_BYTE *)dword_100B17F4 )
    ++dword_100B17F4;
  return result;
}
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004E500) --------------------------------------------------------
char __cdecl sub_1004E500(unsigned int a1)
{
  unsigned int v1; // ecx
  _BYTE *v2; // eax

  v1 = 0;
  if ( !a1 )
    return 1;
  v2 = (_BYTE *)dword_100B17F4;
  while ( *v2 )
  {
    ++v2;
    ++v1;
    dword_100B17F4 = (int)v2;
    if ( v1 >= a1 )
      return 1;
  }
  return 0;
}
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004E562) --------------------------------------------------------
BOOL __thiscall sub_1004E562(_DWORD *this)
{
  return *this == 0;
}

//----- (1004E5D1) --------------------------------------------------------
bool __thiscall sub_1004E5D1(_BYTE *this)
{
  return this[4] <= 1;
}

//----- (1004E5DD) --------------------------------------------------------
int __thiscall sub_1004E5DD(_DWORD *this)
{
  int result; // eax

  if ( *this )
    result = (**(int (__thiscall ***)(_DWORD))*this)(*this);
  else
    result = 0;
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004E603) --------------------------------------------------------
int __thiscall sub_1004E603(_DWORD *this)
{
  return this[2];
}

//----- (1004E607) --------------------------------------------------------
signed int sub_1004E607()
{
  return 1;
}

//----- (1004E60B) --------------------------------------------------------
int __thiscall sub_1004E60B(_DWORD *this)
{
  JUMPOUT(this[1], 0, sub_10034DB0);
  return 0;
}
// 10034DB0: using guessed type int sub_10034DB0(void);

//----- (1004E61C) --------------------------------------------------------
int __thiscall sub_1004E61C(int this)
{
  int result; // eax
  int v2; // ebx
  int v3; // [esp+0h] [ebp-4h]

  result = *(_DWORD *)(this + 12);
  v3 = this;
  if ( result < 0 )
  {
    v2 = (***(int (__thiscall ****)(_DWORD))(this + 8))(*(_DWORD *)(this + 8));
    result = v2 + (***(int (__thiscall ****)(_DWORD))(v3 + 4))(*(_DWORD *)(v3 + 4));
    *(_DWORD *)(v3 + 12) = result;
  }
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004E677) --------------------------------------------------------
int __thiscall sub_1004E677(_DWORD *this)
{
  return this[2];
}

//----- (1004E67B) --------------------------------------------------------
int (*(**__cdecl sub_1004E67B(unsigned int a1))[3])()
{
  int (*(**result)[3])(); // eax

  if ( a1 > 3 )
    result = &off_100A53F0;
  else
    result = &(&off_100A53CC)[3 * a1];
  return result;
}
// 100A53CC: using guessed type int (*(*off_100A53CC)[3])();
// 100A53F0: using guessed type int (*(*off_100A53F0)[3])();

//----- (1004E69E) --------------------------------------------------------
const char **__cdecl sub_1004E69E(const char **a1)
{
  _BYTE *v1; // eax
  char v2; // cl
  int v3; // esi
  const char **v4; // eax
  const char *v5; // eax
  const char **v6; // eax
  const char **v7; // eax
  char v9; // [esp+4h] [ebp-18h]
  char v10; // [esp+Ch] [ebp-10h]
  const char *v11; // [esp+14h] [ebp-8h]
  const char *v12; // [esp+18h] [ebp-4h]

  v1 = (_BYTE *)dword_100B17F8;
  *a1 = 0;
  a1[1] = 0;
  if ( !v1 )
    return a1;
  if ( *v1 != 63 )
  {
LABEL_13:
    v7 = (const char **)sub_100337DA(&v9);
    *a1 = *v7;
    a1[1] = v7[1];
    return a1;
  }
  v2 = v1[1];
  if ( v2 == 64 )
  {
    dword_100B17F4 = (int)(v1 + 2);
    v3 = sub_100337DA(&v10);
    v11 = "CV: ";
    v12 = (const char *)4;
    sub_1003413A(&v11);
    sub_10035742(&v11, v3);
    *a1 = v11;
    a1[1] = v12;
    return a1;
  }
  if ( v2 != 36 )
  {
    if ( v2 == 63 && v1[2] == 64 )
    {
      *((_BYTE *)a1 + 4) = 2;
      return a1;
    }
    goto LABEL_13;
  }
  v4 = (const char **)sub_100340EF(&v9, 0);
  *a1 = *v4;
  v5 = v4[1];
  a1[1] = v5;
  if ( (_BYTE)v5 == 2 || !(dword_100B17FC & 0x1000) && *(_BYTE *)dword_100B17F4 )
  {
    dword_100B17F4 = dword_100B17F8;
    v6 = (const char **)sub_100337DA(&v9);
    *a1 = *v6;
    a1[1] = v6[1];
  }
  return a1;
}
// 100337DA: using guessed type _DWORD __cdecl sub_100337DA(_DWORD);
// 100340EF: using guessed type _DWORD __cdecl sub_100340EF(_DWORD, char);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 100B17F4: using guessed type int dword_100B17F4;
// 100B17F8: using guessed type int dword_100B17F8;
// 100B17FC: using guessed type int dword_100B17FC;

//----- (1004E7D7) --------------------------------------------------------
int __thiscall sub_1004E7D7(_DWORD *this)
{
  return this[2];
}

//----- (1004E7DB) --------------------------------------------------------
signed int sub_1004E7DB()
{
  return 1;
}

//----- (1004E7DF) --------------------------------------------------------
signed int sub_1004E7DF()
{
  return -1;
}

//----- (1004E7E3) --------------------------------------------------------
int __thiscall sub_1004E7E3(_DWORD *this)
{
  return this[3];
}

//----- (1004E7E7) --------------------------------------------------------
int __thiscall sub_1004E7E7(_DWORD *this)
{
  return this[2];
}

//----- (1004E83E) --------------------------------------------------------
char __cdecl sub_1004E83E(_BYTE *a1, int a2, int a3)
{
  int v3; // edx
  _BYTE *v4; // ecx
  char result; // al

  v3 = a3;
  if ( a3 )
  {
    v4 = a1;
    do
    {
      result = v4[a2 - (_DWORD)a1];
      *v4++ = result;
      --v3;
    }
    while ( v3 );
  }
  return result;
}

//----- (1004E881) --------------------------------------------------------
int __cdecl sub_1004E881(_BYTE *a1, _BYTE *a2, int a3)
{
  int result; // eax
  _BYTE *v4; // ecx
  _BYTE *v5; // edx

  result = a3;
  if ( a3 )
  {
    v4 = a2;
    v5 = a1;
    while ( --result && *v5 && *v5 == *v4 )
    {
      ++v5;
      ++v4;
    }
    result = (unsigned __int8)*v5 - (unsigned __int8)*v4;
  }
  return result;
}

//----- (1004E8BE) --------------------------------------------------------
int __cdecl sub_1004E8BE(int a1, int a2, int a3, int a4, int a5, unsigned __int16 a6)
{
  return sub_10034B62(a1, a2, a3, a4, a5, 0, a6);
}
// 10034B62: using guessed type _DWORD __cdecl sub_10034B62(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1004E8E9) --------------------------------------------------------
int __cdecl sub_1004E8E9(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // edi

  if ( !a4 )
    return 0;
  sub_10033604(0);
  dword_100B1810 = a4;
  dword_100B1814 = a5;
  dword_100B1820 = 0;
  dword_100B1818 = 0;
  dword_100B181C = 0;
  sub_10033186(a2, a6, a7);
  v8 = sub_10034ADB(a1, a3);
  sub_100342CA(&dword_100B1810);
  sub_100333F7(0);
  return v8;
}
// 10033186: using guessed type _DWORD __stdcall sub_10033186(_DWORD, _DWORD, _DWORD);
// 100333F7: using guessed type _DWORD __cdecl sub_100333F7(_DWORD);
// 10033604: using guessed type _DWORD __cdecl sub_10033604(_DWORD);
// 100342CA: using guessed type int __thiscall sub_100342CA(_DWORD);
// 10034ADB: using guessed type _DWORD __stdcall sub_10034ADB(_DWORD, _DWORD);
// 100B1810: using guessed type int dword_100B1810;
// 100B1814: using guessed type int dword_100B1814;
// 100B1818: using guessed type int dword_100B1818;
// 100B181C: using guessed type int dword_100B181C;
// 100B1820: using guessed type int dword_100B1820;

//----- (1004E9AF) --------------------------------------------------------
int sub_1004E9AF(int a1, int a2, int a3, ...)
{
  va_list va; // [esp+14h] [ebp+14h]

  va_start(va, a3);
  return sub_10033640(a1, a2, a3, va);
}
// 10033640: using guessed type _DWORD __cdecl sub_10033640(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1004EA93) --------------------------------------------------------
signed int __cdecl sub_1004EA93(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // eax
  signed int result; // eax

  v4 = (_DWORD *)sub_10035A6C();
  result = sub_10034833(*v4 | 2, v4[1], a1, a2, a3, 0, a4);
  if ( result < 0 )
    result = -1;
  return result;
}
// 10034833: using guessed type _DWORD __cdecl sub_10034833(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035A6C: using guessed type int sub_10035A6C(void);

//----- (1004EB70) --------------------------------------------------------
int __stdcall sub_1004EB70(void *a1)
{
  int result; // eax

  result = (int)a1;
  if ( a1 )
  {
    if ( a1 != &unk_100B1830 )
      result = sub_10034CD4(a1);
  }
  return result;
}

//----- (1004EB93) --------------------------------------------------------
DWORD sub_1004EB93()
{
  DWORD result; // eax
  int v1; // esi

  result = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    v1 = sub_10034CED(dwTlsIndex);
    sub_10033401(dwTlsIndex, 0);
    result = sub_100354B8(v1);
  }
  return result;
}
// 100354B8: using guessed type _DWORD __stdcall sub_100354B8(_DWORD);

//----- (1004EBC8) --------------------------------------------------------
int sub_1004EBC8()
{
  int result; // eax

  result = sub_10034A2C();
  JUMPOUT(result, 0, sub_100354D1);
  return result;
}
// 10034A2C: using guessed type int sub_10034A2C(void);
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);

//----- (1004EBD9) --------------------------------------------------------
int sub_1004EBD9()
{
  DWORD v1; // edi
  int v2; // eax
  int v3; // ebx
  void *v4; // eax
  void *v5; // esi

  if ( dwTlsIndex == -1 )
    return 0;
  v1 = GetLastError();
  v2 = sub_10034CED(dwTlsIndex);
  v3 = v2;
  if ( v2 == -1 )
  {
LABEL_6:
    v3 = 0;
    goto LABEL_12;
  }
  if ( !v2 )
  {
    if ( sub_10033401(dwTlsIndex, (LPVOID)0xFFFFFFFF) )
    {
      v4 = (void *)sub_100344D7(1, 40);
      v5 = v4;
      if ( v4 && sub_10033401(dwTlsIndex, v4) )
      {
        v3 = (int)v5;
        v5 = 0;
      }
      else
      {
        v3 = 0;
        sub_10033401(dwTlsIndex, 0);
      }
      sub_10034CD4(v5);
      goto LABEL_12;
    }
    goto LABEL_6;
  }
LABEL_12:
  SetLastError(v1);
  return v3;
}
// 100344D7: using guessed type int __cdecl sub_100344D7(_DWORD, _DWORD);

//----- (1004ECD3) --------------------------------------------------------
char sub_1004ECD3()
{
  DWORD v0; // eax

  v0 = sub_10035DFF(sub_100354B8);
  dwTlsIndex = v0;
  if ( v0 == -1 )
    return 0;
  if ( !sub_10033401(v0, &unk_100B1830) )
  {
    sub_10033DDE();
    return 0;
  }
  return 1;
}
// 10033DDE: using guessed type int sub_10033DDE(void);
// 100354B8: using guessed type _DWORD __stdcall sub_100354B8(_DWORD);
// 10035DFF: using guessed type _DWORD __cdecl sub_10035DFF(_DWORD);

//----- (1004ED12) --------------------------------------------------------
char sub_1004ED12()
{
  if ( dwTlsIndex != -1 )
  {
    sub_100340A4(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return 1;
}

//----- (1004ED33) --------------------------------------------------------
char sub_1004ED33()
{
  struct _RTL_CRITICAL_SECTION *v0; // edi
  unsigned int v1; // esi

  v0 = &stru_100B1860;
  v1 = 0;
  while ( sub_10035003(v0, 0xFA0u, 0) )
  {
    ++dword_100B1878;
    v1 += 24;
    ++v0;
    if ( v1 >= 0x18 )
      return 1;
  }
  sub_1003556C();
  return 0;
}
// 1003556C: using guessed type int sub_1003556C(void);
// 100B1878: using guessed type int dword_100B1878;

//----- (1004ED7E) --------------------------------------------------------
void __cdecl sub_1004ED7E(int a1)
{
  EnterCriticalSection(&stru_100B1860 + a1);
}

//----- (1004ED98) --------------------------------------------------------
char sub_1004ED98()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi

  v0 = dword_100B1878;
  if ( dword_100B1878 )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)((char *)&unk_100B1848 + 24 * dword_100B1878);
    do
    {
      DeleteCriticalSection(v1);
      --dword_100B1878;
      --v1;
      --v0;
    }
    while ( v0 );
  }
  return 1;
}
// 100B1878: using guessed type int dword_100B1878;

//----- (1004EDD2) --------------------------------------------------------
void __cdecl sub_1004EDD2(int a1)
{
  LeaveCriticalSection(&stru_100B1860 + a1);
}

//----- (1004EE20) --------------------------------------------------------
signed int __cdecl sub_1004EE20(int a1, int a2, int a3, _DWORD *a4, unsigned int a5)
{
  signed int result; // eax
  int v6; // ecx
  int v7; // ebp

  result = 1;
  if ( *(_DWORD *)(a1 + 4) & 6 )
  {
    v6 = a5 ^ *(_DWORD *)(a5 - 4);
    v7 = *(_DWORD *)(a5 + 16);
    sub_1003326C(*(_DWORD *)(a5 + 36), *(_DWORD *)(a5 + 40));
    *a4 = a2;
    result = 3;
  }
  return result;
}
// 1003326C: using guessed type _DWORD __cdecl sub_1003326C(_DWORD, _DWORD);

//----- (1004EE80) --------------------------------------------------------
int __cdecl sub_1004EE80(int a1, unsigned int a2)
{
  int result; // eax
  int v3; // ebx
  unsigned int v4; // esi
  int v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  signed int (__cdecl *v9)(int, int, int, _DWORD *, unsigned int); // [esp+4h] [ebp-1Ch]
  int v10; // [esp+8h] [ebp-18h]
  int v11; // [esp+Ch] [ebp-14h]

  v11 = a1;
  v10 = -2;
  v9 = sub_1004EE20;
  while ( 1 )
  {
    result = a1;
    v3 = *(_DWORD *)(a1 + 8);
    v4 = *(_DWORD *)(a1 + 12);
    if ( v4 == -1 || a2 != -1 && v4 <= a2 )
      break;
    v5 = 3 * v4;
    v10 = *(_DWORD *)(v3 + 4 * v5);
    *(_DWORD *)(a1 + 12) = v10;
    if ( !*(_DWORD *)(v3 + 4 * v5 + 4) )
    {
      v6 = *(_DWORD *)(v3 + 4 * v5 + 8);
      sub_10035DA0(257);
      v7 = *(_DWORD *)(v3 + 4 * v5 + 8);
      sub_100349E6(v8);
    }
  }
  return result;
}
// 100349E6: using guessed type int __thiscall sub_100349E6(_DWORD);
// 10035DA0: using guessed type _DWORD __stdcall sub_10035DA0(_DWORD);

//----- (1004EF80) --------------------------------------------------------
int __userpurge sub_1004EF80@<eax>(int result@<eax>, int a2@<ecx>, int a3@<ebp>, int a4)
{
  dword_100B0260[2] = a2;
  dword_100B0260[1] = result;
  dword_100B0260[3] = a3;
  return result;
}

//----- (1004EFC0) --------------------------------------------------------
int __usercall sub_1004EFC0@<eax>(int (*a1)(void)@<eax>)
{
  return a1();
}

//----- (1004EFE0) --------------------------------------------------------
int sub_1004EFE0()
{
  return dword_100B18AC;
}
// 100B18AC: using guessed type int dword_100B18AC;

//----- (1004EFE7) --------------------------------------------------------
void __noreturn sub_1004EFE7()
{
  void (__thiscall *v0)(_DWORD); // eax
  int v1; // edx
  int v2; // ecx

  v0 = (void (__thiscall *)(_DWORD))sub_100351A7();
  if ( v0 )
    v0(v0);
  sub_100354D1(v2, v1);
}
// 100351A7: using guessed type int sub_100351A7(void);
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004F06C) --------------------------------------------------------
_DWORD *__cdecl sub_1004F06C(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // esi
  _DWORD *v9; // eax
  _DWORD *result; // eax
  unsigned int v11; // [esp+Ch] [ebp-4h]

  v6 = a6;
  v7 = *(_DWORD *)(a5 + 12);
  v8 = *(_DWORD *)(a5 + 12);
  v11 = *(_DWORD *)(a5 + 12);
  if ( a6 >= 0 )
  {
    v9 = (_DWORD *)(*(_DWORD *)(a5 + 16) + 8 + 20 * v7);
    while ( v7 != -1 )
    {
      v9 -= 5;
      --v7;
      if ( *(v9 - 1) < a3 && a3 <= *v9 || v7 == -1 )
      {
        v8 = v11;
        --v6;
        v11 = v7;
      }
      if ( v6 < 0 )
        goto LABEL_9;
    }
LABEL_12:
    sub_100354D1(v6, v7);
  }
LABEL_9:
  ++v7;
  if ( v8 > *(_DWORD *)(a5 + 12) || v7 > v8 )
    goto LABEL_12;
  result = a1;
  a1[3] = v8;
  *a1 = a2;
  a1[1] = v7;
  a1[2] = a2;
  return result;
}
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);

//----- (1004F0F6) --------------------------------------------------------
int __cdecl sub_1004F0F6(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  int v7; // [esp+0h] [ebp-18h]
  int (__cdecl *v8)(int, unsigned int, int); // [esp+4h] [ebp-14h]
  unsigned int v9; // [esp+8h] [ebp-10h]
  int v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v9 = __security_cookie ^ (unsigned int)&v7;
  v10 = a2;
  v8 = sub_1004F339;
  v11 = a1;
  v12 = a4 + 1;
  v7 = v5;
  return sub_1003493C(a3, a1, a5);
}
// 1003493C: using guessed type _DWORD __stdcall sub_1003493C(_DWORD, _DWORD, _DWORD);

//----- (1004F16A) --------------------------------------------------------
signed int __cdecl sub_1004F16A(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  signed int result; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // ebx
  int v10; // [esp+0h] [ebp-40h]
  _DWORD *v11; // [esp+4h] [ebp-3Ch]
  enum _EXCEPTION_DISPOSITION (__cdecl *v12)(PEXCEPTION_RECORD, PVOID, void *, void *); // [esp+8h] [ebp-38h]
  unsigned int v13; // [esp+Ch] [ebp-34h]
  int v14; // [esp+10h] [ebp-30h]
  _DWORD *v15; // [esp+14h] [ebp-2Ch]
  int v16; // [esp+18h] [ebp-28h]
  int v17; // [esp+1Ch] [ebp-24h]
  int *v18; // [esp+20h] [ebp-20h]
  int *v19; // [esp+24h] [ebp-1Ch]
  int v20; // [esp+28h] [ebp-18h]
  _DWORD *v21; // [esp+2Ch] [ebp-14h]
  int v22; // [esp+30h] [ebp-10h]
  void (__cdecl *v23)(_DWORD, _DWORD); // [esp+34h] [ebp-Ch]
  int v24; // [esp+38h] [ebp-8h]
  void (__cdecl *v25)(_DWORD, _DWORD); // [esp+3Ch] [ebp-4h]
  int savedregs; // [esp+40h] [ebp+0h]

  if ( a1 == (_DWORD *)291 )
  {
    *a2 = &loc_1004F22E;
    result = 1;
  }
  else
  {
    v12 = TranslatorGuardHandler;
    v13 = (unsigned int)&v11 ^ __security_cookie;
    v14 = a5;
    v15 = a2;
    v16 = a6;
    v17 = a7;
    v20 = 0;
    v18 = &v10;
    v19 = &savedregs;
    v11 = v8;
    *a1 = sub_100360D9(*a1);
    v24 = 1;
    v21 = a1;
    v22 = a3;
    v25 = *(void (__cdecl **)(_DWORD, _DWORD))(sub_10033FF0() + 8);
    j_j____guard_check_icall_fptr(v25);
    v23 = v25;
    v25(*a1, &v21);
    v24 = 0;
    if ( v20 )
      *v11 = *v9;
    result = v24;
  }
  return result;
}
// 10033A14: using guessed type int __thiscall j_j____guard_check_icall_fptr(_DWORD);
// 100360D9: using guessed type _DWORD __cdecl sub_100360D9(_DWORD);

//----- (1004F2D2) --------------------------------------------------------
int __userpurge sub_1004F2D2@<eax>(_DWORD *a1@<ebx>, PVOID TargetFrame, PEXCEPTION_RECORD ExceptionRecord)
{
  int result; // eax
  int v4; // edi

  RtlUnwind(TargetFrame, &loc_1004F2FC, ExceptionRecord, 0);
  result = ExceptionRecord->ExceptionFlags & 0xFFFFFFFD;
  ExceptionRecord->ExceptionFlags = result;
  *a1 = v4;
  return result;
}

//----- (1004F339) --------------------------------------------------------
int __cdecl sub_1004F339(int a1, unsigned int a2, int a3)
{
  int v3; // ecx

  v3 = a2 ^ *(_DWORD *)(a2 + 8);
  return sub_1003406D(a1, *(_DWORD *)(a2 + 16), a3, 0, *(_DWORD *)(a2 + 12), *(_DWORD *)(a2 + 20), a2, 0);
}
// 1003406D: using guessed type int __cdecl sub_1003406D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1004F3A3) --------------------------------------------------------
int __cdecl sub_1004F3A3(int a1)
{
  int v1; // esi
  int result; // eax
  int v3; // edx
  int *i; // ecx
  int v5; // eax

  if ( a1 == *(_DWORD *)(sub_10033FF0() + 36) )
  {
    v1 = *(_DWORD *)(a1 + 4);
    result = sub_10033FF0();
    *(_DWORD *)(result + 36) = v1;
  }
  else
  {
    for ( i = (int *)(*(_DWORD *)(sub_10033FF0() + 36) + 4); ; i = (int *)(v5 + 4) )
    {
      v5 = *i;
      if ( !*i )
        sub_100354D1(i, v3);
      if ( a1 == v5 )
        break;
    }
    result = *(_DWORD *)(a1 + 4);
    *i = result;
  }
  return result;
}
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);

//----- (1004F719) --------------------------------------------------------
FARPROC __cdecl sub_1004F719(int a1, LPCSTR lpProcName, int a3, int a4)
{
  FARPROC *v4; // eax
  FARPROC result; // eax
  int *i; // ebx
  HMODULE v7; // esi
  HMODULE v8; // eax
  volatile signed __int32 *v9; // ecx
  volatile signed __int32 *v10; // [esp+4h] [ebp-8h]
  int v11; // [esp+8h] [ebp-4h]

  v4 = (FARPROC *)((char *)&unk_100B1890 + 4 * a1);
  v10 = (volatile signed __int32 *)v4;
  result = *v4;
  if ( result == (FARPROC)-1 )
    return 0;
  if ( !result )
  {
    for ( i = (int *)a3; ; ++i )
    {
      if ( i == (int *)a4 )
        goto LABEL_12;
      v11 = *i;
      v7 = (HMODULE)dword_100B1884[*i];
      if ( v7 )
      {
        if ( v7 != (HMODULE)-1 )
          goto LABEL_16;
      }
      else
      {
        v8 = sub_1004F8C2((&off_100A5408)[*i]);
        v7 = v8;
        v9 = &dword_100B1884[v11];
        if ( v8 )
        {
          if ( _InterlockedExchange(v9, (signed __int32)v8) )
            FreeLibrary(v8);
LABEL_16:
          result = GetProcAddress(v7, lpProcName);
          if ( !result )
          {
LABEL_12:
            _InterlockedExchange(v10, -1);
            return 0;
          }
          _InterlockedExchange(v10, (signed __int32)result);
          return result;
        }
        _InterlockedExchange(v9, -1);
      }
    }
  }
  return result;
}

//----- (1004F8C2) --------------------------------------------------------
HMODULE __cdecl sub_1004F8C2(LPCWSTR lpLibFileName)
{
  HMODULE result; // eax

  result = LoadLibraryExW(lpLibFileName, 0, 0x800u);
  if ( !result )
  {
    if ( GetLastError() == 87 && sub_100358A0(lpLibFileName, L"api-ms-", 7) )
      result = LoadLibraryExW(lpLibFileName, 0, 0);
    else
      result = 0;
  }
  return result;
}
// 100358A0: using guessed type _DWORD __cdecl sub_100358A0(_DWORD, _DWORD, _DWORD);
// 100A54C0: using guessed type wchar_t aApiMs[8];

//----- (1004F91F) --------------------------------------------------------
DWORD __cdecl sub_1004F91F(int a1)
{
  FARPROC v1; // eax
  DWORD result; // eax

  v1 = sub_1004F719(0, "FlsAlloc", (int)&unk_100A54D4, (int)&unk_100A54DC);
  if ( v1 )
    result = ((int (__thiscall *)(FARPROC, int))v1)(v1, a1);
  else
    result = TlsAlloc();
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004F968) --------------------------------------------------------
int __cdecl sub_1004F968(DWORD dwTlsIndex)
{
  FARPROC v1; // eax
  int result; // eax

  v1 = sub_1004F719(1, "FlsFree", (int)&unk_100A54EC, (int)&unk_100A54F4);
  if ( v1 )
    result = ((int (__thiscall *)(FARPROC, DWORD))v1)(v1, dwTlsIndex);
  else
    result = TlsFree(dwTlsIndex);
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004F9B1) --------------------------------------------------------
LPVOID __cdecl sub_1004F9B1(DWORD dwTlsIndex)
{
  FARPROC v1; // eax
  LPVOID result; // eax

  v1 = sub_1004F719(2, "FlsGetValue", (int)&unk_100A5504, (int)&unk_100A550C);
  if ( v1 )
    result = (LPVOID)((int (__thiscall *)(FARPROC, DWORD))v1)(v1, dwTlsIndex);
  else
    result = TlsGetValue(dwTlsIndex);
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004F9FA) --------------------------------------------------------
int __cdecl sub_1004F9FA(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  FARPROC v2; // eax
  int result; // eax

  v2 = sub_1004F719(3, "FlsSetValue", (int)&unk_100A5520, (int)&unk_100A5528);
  if ( v2 )
    result = ((int (__thiscall *)(FARPROC, DWORD, LPVOID))v2)(v2, dwTlsIndex, lpTlsValue);
  else
    result = TlsSetValue(dwTlsIndex, lpTlsValue);
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004FA47) --------------------------------------------------------
int __cdecl sub_1004FA47(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int a3)
{
  FARPROC v3; // eax
  int result; // eax

  v3 = sub_1004F719(4, "InitializeCriticalSectionEx", (int)&unk_100A553C, (int)&unk_100A5544);
  if ( v3 )
    result = ((int (__thiscall *)(FARPROC, LPCRITICAL_SECTION, DWORD, int))v3)(v3, lpCriticalSection, dwSpinCount, a3);
  else
    result = InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004FA9F) --------------------------------------------------------
int __cdecl sub_1004FA9F(int a1, int *a2, int *a3, int a4)
{
  int v4; // ebx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int *v8; // esi
  int v9; // eax
  int v10; // ST08_4
  int v11; // eax

  v4 = 0;
  v5 = a3[1];
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 8) )
    {
      v6 = a3[2];
      if ( v6 || *a3 < 0 )
      {
        v7 = *a3;
        v8 = a2;
        if ( *a3 >= 0 )
          v8 = (int *)((char *)a2 + v6 + 12);
        if ( (v7 & 0x80u) != 0 && *(_BYTE *)a4 & 0x10 && dword_100B17E4 )
        {
          v7 = ((int (__thiscall *)(int))dword_100B17E4)(dword_100B17E4);
        }
        else
        {
          if ( !(v7 & 8) )
          {
            if ( *(_BYTE *)a4 & 1 )
            {
              if ( *(_DWORD *)(a1 + 24) && v8 )
              {
                sub_10035AB7(v8, *(_DWORD *)(a1 + 24), *(_DWORD *)(a4 + 20));
                if ( *(_DWORD *)(a4 + 20) != 4 || !*v8 )
                  return v4;
                v9 = sub_10033127(*v8, a4 + 8);
                goto LABEL_22;
              }
            }
            else
            {
              v7 = *(_DWORD *)(a1 + 24);
              if ( *(_DWORD *)(a4 + 24) )
              {
                if ( v7 && v8 )
                  return ((*(_BYTE *)a4 & 4) != 0) + 1;
              }
              else if ( v7 && v8 )
              {
                v10 = *(_DWORD *)(a4 + 20);
                v11 = sub_10033127(v7, a4 + 8);
                sub_10035AB7(v8, v11, v10);
                return v4;
              }
            }
LABEL_33:
            sub_100354D1(v7, v6);
          }
          v7 = *(_DWORD *)(a1 + 24);
        }
        if ( v7 && v8 )
        {
          *v8 = v7;
          v9 = sub_10033127(v7, a4 + 8);
LABEL_22:
          *v8 = v9;
          return v4;
        }
        goto LABEL_33;
      }
    }
  }
  return 0;
}
// 10033127: using guessed type _DWORD __cdecl sub_10033127(_DWORD, _DWORD);
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);
// 10035AB7: using guessed type _DWORD __cdecl sub_10035AB7(_DWORD, _DWORD, _DWORD);
// 100B17E4: using guessed type int dword_100B17E4;
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004FC2C) --------------------------------------------------------
int __cdecl sub_1004FC2C(int a1, int *a2, int *a3, int a4)
{
  int v4; // edi
  int v5; // eax
  int result; // eax
  int v7; // eax
  int v8; // eax

  if ( *a3 >= 0 )
    v4 = (int)a2 + a3[2] + 12;
  else
    v4 = (int)a2;
  v5 = sub_1004FA9F(a1, a2, a3, a4) - 1;
  if ( v5 )
  {
    result = v5 - 1;
    if ( !result )
    {
      v7 = sub_10033127(*(_DWORD *)(a1 + 24), a4 + 8);
      result = sub_10035FDF(v4, *(_DWORD *)(a4 + 24), v7, 1);
    }
  }
  else
  {
    v8 = sub_10033127(*(_DWORD *)(a1 + 24), a4 + 8);
    result = sub_1003503A(v4, *(_DWORD *)(a4 + 24), v8);
  }
  return result;
}
// 10033127: using guessed type _DWORD __cdecl sub_10033127(_DWORD, _DWORD);
// 1003503A: using guessed type _DWORD __stdcall sub_1003503A(_DWORD, _DWORD, _DWORD);
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);
// 10035FDF: using guessed type _DWORD __stdcall sub_10035FDF(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1004FCEB) --------------------------------------------------------
void __cdecl sub_1004FCEB(PEXCEPTION_RECORD ExceptionRecord, struct EHRegistrationNode *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, PVOID TargetFrame)
{
  void *v10; // eax
  void *v11; // eax

  if ( a7 )
    sub_1004FC2C((int)ExceptionRecord, (int *)a2, (int *)a6, a7);
  v10 = TargetFrame;
  if ( !TargetFrame )
    v10 = (void *)a2;
  sub_10035BAC(v10, ExceptionRecord);
  sub_1003401D(a2, a4, a5, *(_DWORD *)a8);
  sub_10033AD7(a2, a5, *(_DWORD *)(a8 + 4) + 1);
  v11 = (void *)sub_100507F3(ExceptionRecord, (int)a2, a3, a5, *(_DWORD *)(a6 + 12), a9, 256);
  if ( v11 )
    _JumpToContinuation(v11, a2);
}
// 10033AD7: using guessed type _DWORD __cdecl sub_10033AD7(_DWORD, _DWORD, _DWORD);
// 1003401D: using guessed type _DWORD __cdecl sub_1003401D(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1004FD8B) --------------------------------------------------------
int __cdecl sub_1004FD8B(PEXCEPTION_RECORD ExceptionRecord, struct EHRegistrationNode *a2, int a3, int a4, int a5, int a6, int a7, PVOID TargetFrame)
{
  int *v8; // edi
  signed int v9; // eax
  unsigned int v10; // edx
  int v11; // ecx
  PEXCEPTION_RECORD v12; // ebx
  char *v13; // esi
  int result; // eax
  int *v15; // ST2C_4
  int v16; // edx
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  UINT_PTR v21; // edx
  int *v22; // eax
  int v23; // esi
  int *v24; // eax
  int v25; // esi
  int *v26; // edi
  int v27; // ST2C_4
  unsigned int v28; // eax
  int v29; // eax
  int v30; // [esp+Ch] [ebp-64h]
  int v31; // [esp+10h] [ebp-60h]
  int v32; // [esp+18h] [ebp-58h]
  int *v33; // [esp+1Ch] [ebp-54h]
  int v34; // [esp+20h] [ebp-50h]
  int v35; // [esp+24h] [ebp-4Ch]
  int v36; // [esp+28h] [ebp-48h]
  int v37; // [esp+2Ch] [ebp-44h]
  int v38; // [esp+30h] [ebp-40h]
  unsigned int v39; // [esp+34h] [ebp-3Ch]
  unsigned int v40; // [esp+3Ch] [ebp-34h]
  int v41; // [esp+40h] [ebp-30h]
  int v42; // [esp+44h] [ebp-2Ch]
  int v43; // [esp+48h] [ebp-28h]
  int v44; // [esp+4Ch] [ebp-24h]
  int *v45; // [esp+50h] [ebp-20h]
  unsigned int v46; // [esp+54h] [ebp-1Ch]
  int v47; // [esp+58h] [ebp-18h]
  int *v48; // [esp+5Ch] [ebp-14h]
  int v49; // [esp+60h] [ebp-10h]
  int *v50; // [esp+64h] [ebp-Ch]
  int v51; // [esp+68h] [ebp-8h]
  int v52; // [esp+6Ch] [ebp-4h]

  v8 = (int *)a5;
  v49 = 0;
  LOBYTE(v47) = 0;
  v9 = sub_10034A1D(a2, a4, a5);
  v11 = v9;
  v51 = v9;
  if ( v9 < -1 || v9 >= *(_DWORD *)(a5 + 4) )
    goto LABEL_69;
  v12 = ExceptionRecord;
  if ( ExceptionRecord->ExceptionCode != -529697949
    || ExceptionRecord->NumberParameters != 3
    || ExceptionRecord->ExceptionInformation[0] != 429065504
    && ExceptionRecord->ExceptionInformation[0] != 429065505
    && ExceptionRecord->ExceptionInformation[0] != 429065506
    || (v13 = 0, ExceptionRecord->ExceptionInformation[2]) )
  {
    v10 = a3;
    v52 = a3;
  }
  else
  {
    result = sub_10033FF0();
    if ( !*(_DWORD *)(result + 16) )
      return result;
    v12 = *(PEXCEPTION_RECORD *)(sub_10033FF0() + 16);
    LOBYTE(v47) = 1;
    v52 = *(_DWORD *)(sub_10033FF0() + 20);
    if ( !v12
      || v12->ExceptionCode == -529697949
      && v12->NumberParameters == 3
      && (v12->ExceptionInformation[0] == 429065504
       || v12->ExceptionInformation[0] == 429065505
       || v12->ExceptionInformation[0] == 429065506)
      && !v12->ExceptionInformation[2] )
    {
      goto LABEL_69;
    }
    if ( *(_DWORD *)(sub_10033FF0() + 28) )
    {
      v50 = *(int **)(sub_10033FF0() + 28);
      v15 = v50;
      *(_DWORD *)(sub_10033FF0() + 28) = 0;
      if ( !sub_10050C2C(v16, v17, (int)v12, v15) )
      {
        v8 = v50;
        if ( *v50 > 0 )
        {
          while ( 1 )
          {
            v18 = *(_DWORD *)&v13[v50[1] + 4];
            if ( (unsigned __int8)sub_100330AF(&std::bad_exception `RTTI Type Descriptor') )
              break;
            v13 += 16;
            if ( ++v49 >= *v50 )
              goto LABEL_63;
          }
          sub_10034400(v12, 1);
          sub_10033235(&v39);
          sub_10036291(&v39, &_TI2?AVbad_exception_std__);
LABEL_65:
          *(_DWORD *)(sub_10033FF0() + 16) = v12;
          *(_DWORD *)(sub_10033FF0() + 20) = v52;
          if ( !v13 )
            v13 = (char *)a2;
          sub_10035BAC(v13, v12);
          sub_10034AFE(a2, a4, v8);
          v29 = sub_10035751(v8);
          sub_10050A35(v29);
        }
LABEL_63:
        sub_10033069();
      }
    }
    v10 = v52;
    v11 = v51;
  }
  v41 = a5;
  v42 = 0;
  if ( v12->ExceptionCode != -529697949
    || v12->NumberParameters != 3
    || v12->ExceptionInformation[0] != 429065504
    && v12->ExceptionInformation[0] != 429065505
    && v12->ExceptionInformation[0] != 429065506 )
  {
    if ( *(_DWORD *)(a5 + 12) > 0u )
    {
      if ( (_BYTE)a6 )
        goto LABEL_69;
      sub_10050219(v12, a2, v10, a4, a5, v11, a7, TargetFrame);
    }
  }
  else
  {
    v13 = (char *)TargetFrame;
    if ( *(_DWORD *)(a5 + 12) > 0u )
    {
      sub_10034969(&v38, &v41, v11, a4, a5, a7);
      v10 = v39;
      v19 = v38;
      v43 = v38;
      v50 = (int *)v39;
      if ( v39 < v40 )
      {
        v11 = 20 * v39;
        v46 = 20 * v39;
        do
        {
          qmemcpy(&v30, (const void *)(v11 + *(_DWORD *)(*(_DWORD *)v19 + 16)), 0x14u);
          if ( v30 <= v51 && v51 <= v31 )
          {
            v20 = 0;
            v49 = 0;
            if ( v32 )
            {
              v21 = v12->ExceptionInformation[2];
              v22 = *(int **)(v21 + 12);
              v23 = *v22;
              v45 = v22 + 1;
              v24 = v33;
              v44 = v23;
              v48 = v33;
              while ( 1 )
              {
                v34 = *v24;
                v35 = v24[1];
                v36 = v24[2];
                v37 = v24[3];
                v25 = v44;
                v26 = v45;
                if ( v44 > 0 )
                  break;
LABEL_41:
                ++v20;
                v24 += 4;
                v49 = v20;
                v48 = v24;
                if ( v20 == v32 )
                  goto LABEL_44;
              }
              while ( !sub_10033087(&v34, *v26, v21) )
              {
                v21 = v12->ExceptionInformation[2];
                --v25;
                ++v26;
                if ( v25 <= 0 )
                {
                  v20 = v49;
                  v24 = v48;
                  goto LABEL_41;
                }
              }
              sub_1004FCEB(v12, a2, v52, a4, a5, (int)&v34, *v26, (int)&v30, a7, TargetFrame);
LABEL_44:
              v10 = (unsigned int)v50;
            }
          }
          ++v10;
          v19 = v43;
          v11 = v46 + 20;
          v50 = (int *)v10;
          v46 += 20;
        }
        while ( v10 < v40 );
        v8 = (int *)a5;
        v13 = (char *)TargetFrame;
      }
    }
    if ( (_BYTE)a6 )
    {
      sub_10034400(v12, 1);
      v11 = v27;
    }
    if ( (*v8 & 0x1FFFFFFFu) >= 0x19930521 )
    {
      v28 = (unsigned int)v8[8] >> 2;
      if ( v8[7] )
      {
        if ( v28 & 1 )
        {
LABEL_55:
          *(_DWORD *)(sub_10033FF0() + 16) = v12;
          *(_DWORD *)(sub_10033FF0() + 20) = v52;
          goto LABEL_63;
        }
        if ( !sub_10050C2C(v10, v11, (int)v12, (int *)v8[7]) )
          goto LABEL_65;
      }
      else if ( v28 & 1 && !a7 )
      {
        goto LABEL_55;
      }
    }
  }
  result = sub_10033FF0();
  if ( *(_DWORD *)(result + 28) )
LABEL_69:
    sub_100354D1(v11, v10);
  return result;
}
// 10033069: using guessed type int sub_10033069(void);
// 10033087: using guessed type _DWORD __cdecl sub_10033087(_DWORD, _DWORD, _DWORD);
// 100330AF: using guessed type _DWORD __stdcall sub_100330AF(_DWORD);
// 10033235: using guessed type int __thiscall sub_10033235(_DWORD);
// 10034400: using guessed type _DWORD __cdecl sub_10034400(_DWORD, _DWORD);
// 10034969: using guessed type _DWORD __cdecl sub_10034969(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034A1D: using guessed type _DWORD __cdecl sub_10034A1D(_DWORD, _DWORD, _DWORD);
// 10034AFE: using guessed type _DWORD __cdecl sub_10034AFE(_DWORD, _DWORD, _DWORD);
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);
// 10035751: using guessed type _DWORD __cdecl sub_10035751(_DWORD);
// 10036291: using guessed type _DWORD __stdcall sub_10036291(_DWORD, _DWORD);
// 100AE5E0: using guessed type int _TI2?AVbad_exception_std__;

//----- (10050219) --------------------------------------------------------
void __cdecl sub_10050219(PEXCEPTION_RECORD ExceptionRecord, struct EHRegistrationNode *a2, int a3, int a4, int a5, int a6, int a7, PVOID TargetFrame)
{
  int v8; // edx
  int v9; // ecx
  PVOID v10; // esi
  unsigned int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // [esp+4h] [ebp-38h]
  int v17; // [esp+8h] [ebp-34h]
  int v18; // [esp+10h] [ebp-2Ch]
  int v19; // [esp+14h] [ebp-28h]
  int v20; // [esp+18h] [ebp-24h]
  unsigned int v21; // [esp+1Ch] [ebp-20h]
  unsigned int v22; // [esp+24h] [ebp-18h]
  int v23; // [esp+28h] [ebp-14h]
  int v24; // [esp+2Ch] [ebp-10h]
  int v25; // [esp+30h] [ebp-Ch]
  unsigned int v26; // [esp+34h] [ebp-8h]
  unsigned int v27; // [esp+38h] [ebp-4h]

  if ( ExceptionRecord->ExceptionCode != -2147483645 )
  {
    if ( !*(_DWORD *)(sub_10033FF0() + 8)
      || (v10 = EncodePointer(0), *(PVOID *)(sub_10033FF0() + 8) == v10)
      || ExceptionRecord->ExceptionCode == -532459699
      || ExceptionRecord->ExceptionCode == -532462766
      || !sub_10034117(ExceptionRecord, a2, a3, a4, a5, a7, TargetFrame) )
    {
      v23 = a5;
      v24 = 0;
      if ( *(_DWORD *)(a5 + 12) <= 0u )
        sub_100354D1(v9, v8);
      sub_10034969(&v20, &v23, a6, a4, a5, a7);
      v11 = v21;
      v12 = v20;
      v25 = v20;
      v27 = v21;
      if ( v21 < v22 )
      {
        v13 = 20 * v21;
        v26 = 20 * v21;
        do
        {
          qmemcpy(&v16, (const void *)(v13 + *(_DWORD *)(*(_DWORD *)v12 + 16)), 0x14u);
          if ( v16 <= a6 && a6 <= v17 )
          {
            v14 = 16 * v18 + v19 - 16;
            v15 = *(_DWORD *)(v14 + 4);
            if ( (!v15 || !*(_BYTE *)(v15 + 8)) && !(*(_BYTE *)v14 & 0x40) )
            {
              sub_1004FCEB(ExceptionRecord, a2, a3, a4, a5, 16 * v18 + v19 - 16, 0, (int)&v16, a7, TargetFrame);
              v11 = v27;
            }
          }
          ++v11;
          v12 = v25;
          v13 = v26 + 20;
          v27 = v11;
          v26 += 20;
        }
        while ( v11 < v22 );
      }
    }
  }
}
// 10034117: using guessed type _DWORD __cdecl sub_10034117(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034969: using guessed type _DWORD __cdecl sub_10034969(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);

//----- (1005039C) --------------------------------------------------------
signed int __cdecl sub_1005039C(int a1, int a2, _BYTE *a3)
{
  int v3; // eax
  int v4; // ebx
  signed int v5; // esi
  int v6; // eax

  v3 = *(_DWORD *)(a1 + 4);
  if ( !v3 || !*(_BYTE *)(v3 + 8) || *(_BYTE *)a1 < 0 && *(_BYTE *)a2 & 0x10 )
    return 1;
  v4 = *(_DWORD *)(a2 + 4);
  v5 = 0;
  if ( v3 != v4 )
  {
    v6 = strcmp((const char *)(v3 + 8), (const char *)(v4 + 8));
    if ( v6 )
      v6 = -(v6 < 0) | 1;
    if ( v6 )
      return 0;
  }
  if ( (!(*(_BYTE *)a2 & 2) || *(_BYTE *)a1 & 8) && (!(*a3 & 1) || *(_BYTE *)a1 & 1) && (!(*a3 & 2) || *(_BYTE *)a1 & 2) )
    v5 = 1;
  return v5;
}

//----- (1005044D) --------------------------------------------------------
int __cdecl sub_1005044D(PEXCEPTION_RECORD ExceptionRecord, struct EHRegistrationNode *a2, int a3, int a4, int a5, int a6, PVOID TargetFrame, int a8)
{
  unsigned int v8; // eax
  int (__cdecl *v9)(PEXCEPTION_RECORD, struct EHRegistrationNode *, int, int, int, int, PVOID, _DWORD); // esi

  sub_10033DF2(a3);
  if ( *(_DWORD *)(sub_10033FF0() + 32)
    || ExceptionRecord->ExceptionCode == -529697949
    || ExceptionRecord->ExceptionCode == -2147483610
    || (*(_DWORD *)a5 & 0x1FFFFFFFu) < 0x19930522
    || !(*(_BYTE *)(a5 + 32) & 1) )
  {
    if ( ExceptionRecord->ExceptionFlags & 0x66 )
    {
      if ( *(_DWORD *)(a5 + 4) )
      {
        if ( !a6 )
          sub_10034AFE(a2, a4, a5);
      }
    }
    else if ( *(_DWORD *)(a5 + 12)
           || (v8 = *(_DWORD *)a5 & 0x1FFFFFFF, v8 >= 0x19930521) && *(_DWORD *)(a5 + 28)
           || v8 >= 0x19930522 && (*(_DWORD *)(a5 + 32) >> 2) & 1 )
    {
      if ( ExceptionRecord->ExceptionCode == -529697949
        && ExceptionRecord->NumberParameters >= 3
        && ExceptionRecord->ExceptionInformation[0] > 0x19930522 )
      {
        v9 = *(int (__cdecl **)(PEXCEPTION_RECORD, struct EHRegistrationNode *, int, int, int, int, PVOID, _DWORD))(ExceptionRecord->ExceptionInformation[2] + 8);
        if ( v9 )
          return v9(ExceptionRecord, a2, a3, a4, a5, a6, TargetFrame, (unsigned __int8)a8);
      }
      sub_1004FD8B(ExceptionRecord, a2, a3, a4, a5, a8, a6, TargetFrame);
    }
  }
  return 1;
}
// 10033DF2: using guessed type _DWORD __cdecl sub_10033DF2(_DWORD);
// 10034AFE: using guessed type _DWORD __cdecl sub_10034AFE(_DWORD, _DWORD, _DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1005058F) --------------------------------------------------------
int __cdecl sub_1005058F(EXCEPTION_RECORD *a1, struct EHRegistrationNode *a2, int a3, int a4, int a5, int a6, void *a7, int a8)
{
  return sub_10035152(a1, a2, a3, a4, a5, a6, a7, a8);
}

//----- (100505CF) --------------------------------------------------------
_DWORD *__thiscall sub_100505CF(_DWORD *this, int a2)
{
  _DWORD *v2; // esi

  v2 = this;
  sub_10034F86(a2);
  *v2 = &std::bad_exception::`vftable';
  return v2;
}
// 10034F86: using guessed type _DWORD __stdcall sub_10034F86(_DWORD);
// 100A5598: using guessed type void *std::bad_exception::`vftable';

//----- (100505F0) --------------------------------------------------------
_DWORD *__thiscall sub_100505F0(_DWORD *this)
{
  _DWORD *result; // eax

  this[1] = 0;
  result = this;
  this[2] = 0;
  this[1] = "bad exception";
  *this = &std::bad_exception::`vftable';
  return result;
}
// 100A5598: using guessed type void *std::bad_exception::`vftable';

//----- (1005060E) --------------------------------------------------------
_DWORD *__thiscall sub_1005060E(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax

  v2 = this;
  v3 = this + 1;
  *this = &std::exception::`vftable';
  *v3 = 0;
  v3[1] = 0;
  sub_100341B2(a2 + 4, this + 1);
  return v2;
}
// 100341B2: using guessed type _DWORD __cdecl sub_100341B2(_DWORD, _DWORD);
// 100A5570: using guessed type void *std::exception::`vftable';

//----- (10050682) --------------------------------------------------------
int __thiscall sub_10050682(_DWORD *this)
{
  *this = &std::exception::`vftable';
  return sub_10035B7F(this + 1);
}
// 10035B7F: using guessed type _DWORD __cdecl sub_10035B7F(_DWORD);
// 100A5570: using guessed type void *std::exception::`vftable';

//----- (100506C3) --------------------------------------------------------
bool __thiscall sub_100506C3(char *this, int a2)
{
  return sub_100353A0(this + 4, a2 + 4) == 0;
}
// 100353A0: using guessed type _DWORD __cdecl sub_100353A0(_DWORD, _DWORD);

//----- (10050773) --------------------------------------------------------
_DWORD *__thiscall sub_10050773(_DWORD *this, char a2)
{
  _DWORD *v2; // esi

  v2 = this;
  *this = &std::exception::`vftable';
  sub_10035B7F(this + 1);
  if ( a2 & 1 )
    sub_100335F5(v2);
  return v2;
}
// 100335F5: using guessed type _DWORD __cdecl sub_100335F5(_DWORD);
// 10035B7F: using guessed type _DWORD __cdecl sub_10035B7F(_DWORD);
// 100A5570: using guessed type void *std::exception::`vftable';

//----- (100507AB) --------------------------------------------------------
_DWORD *__thiscall sub_100507AB(_DWORD *this, char a2)
{
  _DWORD *v2; // esi

  v2 = this;
  *this = &std::exception::`vftable';
  sub_10035B7F(this + 1);
  if ( a2 & 1 )
    sub_100335F5(v2);
  return v2;
}
// 100335F5: using guessed type _DWORD __cdecl sub_100335F5(_DWORD);
// 10035B7F: using guessed type _DWORD __cdecl sub_10035B7F(_DWORD);
// 100A5570: using guessed type void *std::exception::`vftable';

//----- (100507F3) --------------------------------------------------------
int __cdecl sub_100507F3(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *v7; // esi
  int v8; // ebx
  char v20; // [esp+10h] [ebp-4Ch]
  int v21; // [esp+18h] [ebp-44h]
  int v22; // [esp+1Ch] [ebp-40h]
  int v23; // [esp+20h] [ebp-3Ch]
  int v24; // [esp+24h] [ebp-38h]
  int v25; // [esp+28h] [ebp-34h]
  int v26; // [esp+2Ch] [ebp-30h]
  int v31; // [esp+40h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v31 = a5;
  v22 = 0;
  v26 = *(_DWORD *)(a2 - 4);
  v7 = a1;
  v25 = j___CreateFrameInfo(&v20, a1[6]);
  v24 = *(_DWORD *)(sub_10033FF0() + 16);
  v23 = *(_DWORD *)(sub_10033FF0() + 20);
  *(_DWORD *)(sub_10033FF0() + 16) = a1;
  *(_DWORD *)(sub_10033FF0() + 20) = a3;
  v21 = 1;
  ms_exc.registration.TryLevel = 1;
  v8 = sub_10035DAF(a2, a4, a5, a6, a7);
  v31 = v8;
  ms_exc.registration.TryLevel = 0;
  ms_exc.registration.TryLevel = -2;
  v21 = 0;
  *(_DWORD *)(a2 - 4) = v26;
  sub_100361DD(v25);
  *(_DWORD *)(sub_10033FF0() + 16) = v24;
  *(_DWORD *)(sub_10033FF0() + 20) = v23;
  if ( *v7 == -529697949
    && v7[4] == 3
    && (v7[5] == 429065504 || v7[5] == 429065505 || v7[5] == 429065506)
    && !v22
    && v8
    && sub_100342DE(v7[6]) )
  {
    sub_10034400(v7, v21 != 0);
  }
  return v8;
}
// 1003337A: using guessed type _DWORD __cdecl j___CreateFrameInfo(_DWORD, _DWORD);
// 1003401D: using guessed type _DWORD __cdecl sub_1003401D(_DWORD, _DWORD, _DWORD, _DWORD);
// 100342DE: using guessed type _DWORD __cdecl sub_100342DE(_DWORD);
// 10034400: using guessed type _DWORD __cdecl sub_10034400(_DWORD, _DWORD);
// 10034A1D: using guessed type _DWORD __cdecl sub_10034A1D(_DWORD, _DWORD, _DWORD);
// 10035DAF: using guessed type _DWORD __cdecl sub_10035DAF(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100361DD: using guessed type _DWORD __cdecl sub_100361DD(_DWORD);

//----- (10050A35) --------------------------------------------------------
void __cdecl __noreturn sub_10050A35(int a1)
{
  int v1; // edx
  int v2; // ecx

  if ( !*(_DWORD *)(sub_10033FF0() + 28) )
    sub_10033ECE();
  sub_100354D1(v2, v1);
}
// 10033ECE: using guessed type int sub_10033ECE(void);
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);

//----- (10050A83) --------------------------------------------------------
signed int __cdecl sub_10050A83(_DWORD *a1)
{
  _DWORD *v1; // eax

  v1 = (_DWORD *)*a1;
  if ( *(_DWORD *)*a1 != -529697949
    || v1[4] != 3
    || v1[5] != 429065504 && v1[5] != 429065505 && v1[5] != 429065506
    || v1[7] )
  {
    return 0;
  }
  *(_DWORD *)(sub_10033FF0() + 32) = 1;
  return 1;
}

//----- (10050ADF) --------------------------------------------------------
int __cdecl sub_10050ADF(int a1, int a2, int a3)
{
  return sub_1003401D(a1, a2, a3, -1);
}
// 1003401D: using guessed type _DWORD __cdecl sub_1003401D(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (10050AFD) --------------------------------------------------------
int __cdecl sub_10050AFD(int a1, int a2, int a3, int a4)
{
  signed int v4; // esi
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  int v10; // eax
  int v11; // eax
  signed int v12; // [esp+10h] [ebp-20h]

  v4 = sub_10034A1D(a1, a2, a3);
  v5 = sub_10033FF0();
  ++*(_DWORD *)(v5 + 24);
  while ( v4 != a4 )
  {
    if ( v4 <= -1 || v4 >= *(_DWORD *)(a3 + 4) )
      goto LABEL_14;
    v8 = *(_DWORD *)(a3 + 8);
    v7 = *(_DWORD *)(v8 + 8 * v4);
    v12 = *(_DWORD *)(v8 + 8 * v4);
    if ( *(_DWORD *)(v8 + 8 * v4 + 4) )
    {
      sub_10033AD7(a1, a3, v7);
      sub_1003493C(*(_DWORD *)(*(_DWORD *)(a3 + 8) + 8 * v4 + 4), a1, 259);
    }
    v4 = v12;
  }
  v10 = sub_10033FF0();
  if ( *(_DWORD *)(v10 + 24) > 0 )
  {
    v11 = sub_10033FF0();
    --*(_DWORD *)(v11 + 24);
  }
  if ( v4 != a4 )
LABEL_14:
    sub_100354D1(v7, v6);
  return sub_10033AD7(a1, a3, v4);
}
// 10033AD7: using guessed type _DWORD __cdecl sub_10033AD7(_DWORD, _DWORD, _DWORD);
// 1003493C: using guessed type _DWORD __stdcall sub_1003493C(_DWORD, _DWORD, _DWORD);
// 10034A1D: using guessed type _DWORD __cdecl sub_10034A1D(_DWORD, _DWORD, _DWORD);
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);

//----- (10050C2C) --------------------------------------------------------
char __usercall sub_10050C2C@<al>(int a1@<edx>, int a2@<ecx>, int a3, int *a4)
{
  int v4; // edi
  char v5; // bl
  int v6; // edx
  int v7; // eax
  int *v8; // eax
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  int v13; // eax
  bool v14; // zf
  bool v15; // sf
  int v17; // [esp+Ch] [ebp-1Ch]
  int v18; // [esp+10h] [ebp-18h]
  int v19; // [esp+14h] [ebp-14h]
  int v20; // [esp+18h] [ebp-10h]
  int v21; // [esp+1Ch] [ebp-Ch]
  int v22; // [esp+20h] [ebp-8h]
  int v23; // [esp+24h] [ebp-4h]

  if ( !a4 )
    sub_100354D1(a2, a1);
  v4 = *a4;
  v5 = 0;
  if ( *a4 > 0 )
  {
    v6 = 0;
    v23 = 0;
    v7 = *(_DWORD *)(a3 + 28);
    v19 = v7;
    v8 = *(int **)(v7 + 12);
    v9 = *v8;
    v10 = (int)(v8 + 1);
    v20 = v9;
    v17 = v10;
    do
    {
      v11 = (_DWORD *)v10;
      v21 = v10;
      v22 = v20;
      if ( v20 > 0 )
      {
        v12 = v6 + a4[1];
        v18 = v6 + a4[1];
        while ( !sub_10033087(v12, *v11, v19) )
        {
          v13 = v22 - 1;
          v11 = (_DWORD *)(v21 + 4);
          v22 = v13;
          v14 = v13 == 0;
          v15 = v13 < 0;
          v21 += 4;
          v12 = v18;
          if ( v15 || v14 )
            goto LABEL_10;
        }
        v5 = 1;
LABEL_10:
        v6 = v23;
      }
      v10 = v17;
      v6 += 16;
      v23 = v6;
      --v4;
    }
    while ( v4 );
  }
  return v5;
}
// 10033087: using guessed type _DWORD __cdecl sub_10033087(_DWORD, _DWORD, _DWORD);
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);

//----- (10050D3E) --------------------------------------------------------
int __stdcall sub_10050D3E(int a1, int (__thiscall *a2)(int, int), int a3)
{
  return a2(a1, a3);
}

//----- (10050D52) --------------------------------------------------------
int __stdcall sub_10050D52(int a1, int (__thiscall *a2)(int, int, int), int a3, int a4)
{
  return a2(a1, a3, a4);
}

//----- (10050D92) --------------------------------------------------------
int __cdecl sub_10050D92(int a1)
{
  return *(_DWORD *)(a1 + 28);
}

//----- (10050DEC) --------------------------------------------------------
const char *__thiscall sub_10050DEC(_DWORD *this)
{
  const char *result; // eax

  result = (const char *)this[1];
  if ( !result )
    result = "Unknown exception";
  return result;
}

//----- (10050E30) --------------------------------------------------------
int __stdcall sub_10050E30(int a1, int a2, signed int a3)
{
  void (*v3)(void); // eax
  signed int v4; // ecx

  v3 = (void (*)(void))sub_1003567F(a3);
  v3();
  v4 = a3;
  if ( a3 == 256 )
    v4 = 2;
  return sub_1003567F(v4);
}
// 1003567F: using guessed type _DWORD __stdcall sub_1003567F(_DWORD);

//----- (10050EE3) --------------------------------------------------------
void __noreturn sub_10050EE3()
{
  int v0; // eax
  void (__thiscall *v1)(_DWORD); // esi

  v0 = sub_10033FF0();
  v1 = *(void (__thiscall **)(_DWORD))(v0 + 4);
  if ( v1 )
    v1(*(_DWORD *)(v0 + 4));
  sub_10033069();
}
// 10033069: using guessed type int sub_10033069(void);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10050F07) --------------------------------------------------------
int __cdecl sub_10050F07(int a1, int a2, int a3)
{
  int result; // eax

  if ( *(_DWORD *)(a3 + 4) > 128 )
    result = *(_DWORD *)(a1 + 8);
  else
    result = *(char *)(a1 + 8);
  return result;
}

//----- (10050F2B) --------------------------------------------------------
int __cdecl sub_10050F2B(int a1, int a2, int a3)
{
  int result; // eax

  result = a1;
  *(_DWORD *)(a1 + 8) = a3;
  return result;
}

//----- (10050FA0) --------------------------------------------------------
const char *__cdecl sub_10050FA0(const char **a1, int a2)
{
  unsigned int v2; // kr00_4
  int v3; // eax
  void *v4; // esi
  void *v5; // ecx
  const char *result; // eax

  if ( *((_BYTE *)a1 + 4) && *a1 )
  {
    v2 = strlen(*a1);
    v3 = sub_10033366(v2 + 1);
    v4 = (void *)v3;
    if ( v3 )
    {
      sub_10035E22(v3, v2 + 1, *a1);
      v5 = v4;
      v4 = 0;
      *(_DWORD *)a2 = v5;
      *(_BYTE *)(a2 + 4) = 1;
    }
    result = (const char *)sub_10034CD4(v4);
  }
  else
  {
    result = *a1;
    *(_DWORD *)a2 = *a1;
    *(_BYTE *)(a2 + 4) = 0;
  }
  return result;
}
// 10033366: using guessed type int __cdecl sub_10033366(_DWORD);
// 10035E22: using guessed type _DWORD __cdecl sub_10035E22(_DWORD, _DWORD, _DWORD);

//----- (1005101B) --------------------------------------------------------
int __cdecl sub_1005101B(int a1)
{
  int result; // eax

  if ( *(_BYTE *)(a1 + 4) )
    result = sub_10034CD4(*(LPVOID *)a1);
  *(_DWORD *)a1 = 0;
  *(_BYTE *)(a1 + 4) = 0;
  return result;
}

//----- (10051041) --------------------------------------------------------
void __stdcall sub_10051041(_DWORD *a1, _BYTE *a2)
{
  _BYTE *v2; // edi
  ULONG_PTR v3; // ebx
  int v4; // ST08_4
  ULONG_PTR Arguments; // [esp+10h] [ebp-Ch]
  _DWORD *v6; // [esp+14h] [ebp-8h]
  _BYTE *v7; // [esp+18h] [ebp-4h]

  v2 = a2;
  v3 = 429065504;
  if ( a2 )
  {
    if ( !(*a2 & 0x10)
      || (v4 = *a1 - 4,
          v2 = *(_BYTE **)(*(_DWORD *)v4 + 24),
          (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v4 + 32))(*(_DWORD *)(*(_DWORD *)v4 + 32), v4),
          v2) )
    {
      if ( *v2 & 8 )
        v3 = 26820608;
    }
  }
  v6 = a1;
  Arguments = v3;
  v7 = v2;
  RaiseException(0xE06D7363, 1u, 3u, &Arguments);
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (100510D0) --------------------------------------------------------
unsigned int __cdecl sub_100510D0(unsigned int a1, unsigned int a2, unsigned int a3)
{
  const __m128i *v3; // esi
  unsigned int v4; // ecx
  __m128i *v5; // edi
  unsigned int result; // eax
  __m128i v7; // xmm1
  __m128i v8; // xmm1
  const __m128i *v9; // esi
  __m128i v10; // xmm3
  __m128i v11; // xmm0
  __m128i v12; // xmm5
  const __m128i *v13; // esi
  __m128i v14; // xmm1
  const __m128i *v15; // esi
  __m128i v16; // xmm3
  __m128i v17; // xmm0
  __m128i v18; // xmm5
  __m128i v19; // xmm1
  const __m128i *v20; // esi
  __m128i v21; // xmm3
  __m128i v22; // xmm0
  __m128i v23; // xmm5
  __m128i v24; // xmm1
  __int32 v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // ecx
  __int32 *v28; // edi
  __int32 *v29; // esi
  const __m128i *v30; // esi
  __m128i *v31; // edi
  int v32; // edx
  char v33; // dl
  unsigned int v34; // ecx
  int v35; // edx
  int v36; // esi
  int v37; // edi
  __m128i v38; // xmm1
  __m128i v39; // xmm2
  __m128i v40; // xmm3
  __m128i v41; // xmm4
  __m128i v42; // xmm5
  __m128i v43; // xmm6
  __m128i v44; // xmm7
  __m128i v45; // xmm1
  int v46; // eax
  unsigned int v47; // edx
  unsigned int j; // edx
  __m128i v49; // xmm1
  __m128i v50; // xmm2
  __m128i v51; // xmm3
  __m128i v52; // xmm5
  __m128i v53; // xmm6
  __m128i v54; // xmm7
  unsigned int k; // edx
  __m128i v56; // xmm1
  unsigned int v57; // ecx
  char v58; // al
  unsigned int l; // ecx
  int m; // ecx
  unsigned int v61; // eax
  int v62; // ecx
  unsigned int i; // eax
  int v64; // [esp-4h] [ebp-Ch]

  v3 = (const __m128i *)a2;
  v4 = a3;
  v5 = (__m128i *)a1;
  if ( a1 <= a2 || a1 >= a2 + a3 )
  {
    if ( a3 >= 0x20 )
    {
      if ( a3 >= 0x80 )
      {
        if ( _bittest(&dword_100B17DC, 1u) )
        {
          qmemcpy((void *)a1, (const void *)a2, a3);
          return a1;
        }
        if ( (a2 ^ a1) & 0xF || !_bittest(&dword_100B0240, 1u) )
        {
          if ( _bittest(&dword_100B17DC, 0) && !(a1 & 3) )
          {
            if ( !(a2 & 3) )
            {
              if ( _bittest((const signed int *)&v5, 2u) )
              {
                v4 = a3 - 4;
                v3 = (const __m128i *)(a2 + 4);
                *(_DWORD *)a1 = *(_DWORD *)a2;
                v5 = (__m128i *)(a1 + 4);
              }
              if ( _bittest((const signed int *)&v5, 3u) )
              {
                v7 = _mm_loadl_epi64(v3);
                v4 -= 8;
                v3 = (const __m128i *)((char *)v3 + 8);
                _mm_storel_epi64(v5, v7);
                v5 = (__m128i *)((char *)v5 + 8);
              }
              if ( (unsigned __int8)v3 & 7 )
              {
                if ( _bittest((const signed int *)&v3, 3u) )
                {
                  v8 = _mm_load_si128((const __m128i *)((char *)v3 - 12));
                  v9 = (const __m128i *)((char *)v3 - 12);
                  do
                  {
                    v10 = _mm_load_si128(v9 + 1);
                    v4 -= 48;
                    v11 = _mm_load_si128(v9 + 2);
                    v12 = _mm_load_si128(v9 + 3);
                    v9 += 3;
                    _mm_store_si128(v5, _mm_alignr_epi8(v10, v8, 12));
                    _mm_store_si128(v5 + 1, _mm_alignr_epi8(v11, v10, 12));
                    v8 = v12;
                    _mm_store_si128(v5 + 2, _mm_alignr_epi8(v12, v11, 12));
                    v5 += 3;
                  }
                  while ( v4 >= 0x30 );
                  v13 = (const __m128i *)((char *)v9 + 12);
                }
                else
                {
                  v19 = _mm_load_si128((const __m128i *)((char *)v3 - 4));
                  v20 = (const __m128i *)((char *)v3 - 4);
                  do
                  {
                    v21 = _mm_load_si128(v20 + 1);
                    v4 -= 48;
                    v22 = _mm_load_si128(v20 + 2);
                    v23 = _mm_load_si128(v20 + 3);
                    v20 += 3;
                    _mm_store_si128(v5, _mm_alignr_epi8(v21, v19, 4));
                    _mm_store_si128(v5 + 1, _mm_alignr_epi8(v22, v21, 4));
                    v19 = v23;
                    _mm_store_si128(v5 + 2, _mm_alignr_epi8(v23, v22, 4));
                    v5 += 3;
                  }
                  while ( v4 >= 0x30 );
                  v13 = (const __m128i *)((char *)v20 + 4);
                }
              }
              else
              {
                v14 = _mm_load_si128((const __m128i *)((char *)v3 - 8));
                v15 = (const __m128i *)((char *)v3 - 8);
                do
                {
                  v16 = _mm_load_si128(v15 + 1);
                  v4 -= 48;
                  v17 = _mm_load_si128(v15 + 2);
                  v18 = _mm_load_si128(v15 + 3);
                  v15 += 3;
                  _mm_store_si128(v5, _mm_alignr_epi8(v16, v14, 8));
                  _mm_store_si128(v5 + 1, _mm_alignr_epi8(v17, v16, 8));
                  v14 = v18;
                  _mm_store_si128(v5 + 2, _mm_alignr_epi8(v18, v17, 8));
                  v5 += 3;
                }
                while ( v4 >= 0x30 );
                v13 = (const __m128i *)((char *)v15 + 8);
              }
              while ( v4 >= 0x10 )
              {
                v24 = _mm_loadu_si128(v13);
                v4 -= 16;
                ++v13;
                _mm_store_si128(v5, v24);
                ++v5;
              }
              if ( _bittest((const signed int *)&v4, 2u) )
              {
                v25 = v13->m128i_i32[0];
                v4 -= 4;
                v13 = (const __m128i *)((char *)v13 + 4);
                v5->m128i_i32[0] = v25;
                v5 = (__m128i *)((char *)v5 + 4);
              }
              if ( _bittest((const signed int *)&v4, 3u) )
              {
                v4 -= 8;
                _mm_storel_epi64(v5, _mm_loadl_epi64(v13));
              }
              JUMPOUT(__CS__, off_10051334[v4]);
            }
LABEL_38:
            v26 = v4;
            if ( v4 >= 0x20 )
            {
              v27 = v4 >> 2;
              qmemcpy(v5, v3, 4 * v27);
              v29 = &v3->m128i_i32[v27];
              v28 = &v5->m128i_i32[v27];
              switch ( v26 )
              {
                case 0u:
                  result = a1;
                  break;
                case 1u:
                  *(_BYTE *)v28 = *(_BYTE *)v29;
                  result = a1;
                  break;
                case 2u:
                  *(_BYTE *)v28 = *(_BYTE *)v29;
                  *((_BYTE *)v28 + 1) = *((_BYTE *)v29 + 1);
                  result = a1;
                  break;
                case 3u:
                  *(_BYTE *)v28 = *(_BYTE *)v29;
                  *((_BYTE *)v28 + 1) = *((_BYTE *)v29 + 1);
                  *((_BYTE *)v28 + 2) = *((_BYTE *)v29 + 2);
                  result = a1;
                  break;
              }
              return result;
            }
            goto LABEL_75;
          }
LABEL_36:
          if ( a1 & 3 )
          {
            do
            {
              LOBYTE(v5->m128i_i32[0]) = v3->m128i_i32[0];
              --v4;
              v3 = (const __m128i *)((char *)v3 + 1);
              v5 = (__m128i *)((char *)v5 + 1);
            }
            while ( (unsigned __int8)v5 & 3 );
          }
          goto LABEL_38;
        }
        v46 = a2 & 0xF;
        if ( a2 & 0xF )
        {
          v64 = a3 - (16 - v46);
          v61 = 16 - v46;
          v62 = v61 & 3;
          if ( v61 & 3 )
          {
            do
            {
              LOBYTE(v5->m128i_i32[0]) = v3->m128i_i32[0];
              v3 = (const __m128i *)((char *)v3 + 1);
              v5 = (__m128i *)((char *)v5 + 1);
              --v62;
            }
            while ( v62 );
          }
          for ( i = v61 >> 2; i; --i )
          {
            v5->m128i_i32[0] = v3->m128i_i32[0];
            v3 = (const __m128i *)((char *)v3 + 4);
            v5 = (__m128i *)((char *)v5 + 4);
          }
          v4 = v64;
        }
        v47 = v4;
        v4 &= 0x7Fu;
        for ( j = v47 >> 7; j; --j )
        {
          v49 = _mm_load_si128(v3 + 1);
          v50 = _mm_load_si128(v3 + 2);
          v51 = _mm_load_si128(v3 + 3);
          _mm_store_si128(v5, _mm_load_si128(v3));
          _mm_store_si128(v5 + 1, v49);
          _mm_store_si128(v5 + 2, v50);
          _mm_store_si128(v5 + 3, v51);
          v52 = _mm_load_si128(v3 + 5);
          v53 = _mm_load_si128(v3 + 6);
          v54 = _mm_load_si128(v3 + 7);
          _mm_store_si128(v5 + 4, _mm_load_si128(v3 + 4));
          _mm_store_si128(v5 + 5, v52);
          _mm_store_si128(v5 + 6, v53);
          _mm_store_si128(v5 + 7, v54);
          v3 += 8;
          v5 += 8;
        }
      }
      else if ( !_bittest(&dword_100B0240, 1u) )
      {
        goto LABEL_36;
      }
      if ( !v4 )
        return a1;
      for ( k = v4 >> 5; k; --k )
      {
        v56 = _mm_loadu_si128(v3 + 1);
        _mm_storeu_si128(v5, _mm_loadu_si128(v3));
        _mm_storeu_si128(v5 + 1, v56);
        v3 += 2;
        v5 += 2;
      }
    }
LABEL_75:
    v57 = v4 & 0x1F;
    if ( v57 )
    {
      v58 = v57;
      for ( l = v57 >> 2; l; --l )
      {
        v5->m128i_i32[0] = v3->m128i_i32[0];
        v5 = (__m128i *)((char *)v5 + 4);
        v3 = (const __m128i *)((char *)v3 + 4);
      }
      for ( m = v58 & 3; m; --m )
      {
        LOBYTE(v5->m128i_i32[0]) = v3->m128i_i32[0];
        v3 = (const __m128i *)((char *)v3 + 1);
        v5 = (__m128i *)((char *)v5 + 1);
      }
    }
    return a1;
  }
  v30 = (const __m128i *)(a2 + a3);
  v31 = (__m128i *)(a1 + a3);
  if ( a3 >= 0x20 )
  {
    if ( _bittest(&dword_100B0240, 1u) )
    {
      for ( ; (unsigned __int8)v31 & 0xF; LOBYTE(v31->m128i_i32[0]) = v30->m128i_i32[0] )
      {
        --v4;
        v30 = (const __m128i *)((char *)v30 - 1);
        v31 = (__m128i *)((char *)v31 - 1);
      }
      do
      {
        if ( v4 < 0x80 )
          break;
        v30 -= 8;
        v31 -= 8;
        v38 = _mm_loadu_si128(v30 + 1);
        v39 = _mm_loadu_si128(v30 + 2);
        v40 = _mm_loadu_si128(v30 + 3);
        v41 = _mm_loadu_si128(v30 + 4);
        v42 = _mm_loadu_si128(v30 + 5);
        v43 = _mm_loadu_si128(v30 + 6);
        v44 = _mm_loadu_si128(v30 + 7);
        _mm_storeu_si128(v31, _mm_loadu_si128(v30));
        _mm_storeu_si128(v31 + 1, v38);
        _mm_storeu_si128(v31 + 2, v39);
        _mm_storeu_si128(v31 + 3, v40);
        _mm_storeu_si128(v31 + 4, v41);
        _mm_storeu_si128(v31 + 5, v42);
        _mm_storeu_si128(v31 + 6, v43);
        _mm_storeu_si128(v31 + 7, v44);
        v4 -= 128;
      }
      while ( v4 & 0xFFFFFF80 );
      if ( v4 >= 0x20 )
      {
        do
        {
          v30 -= 2;
          v31 -= 2;
          v45 = _mm_loadu_si128(v30 + 1);
          _mm_storeu_si128(v31, _mm_loadu_si128(v30));
          _mm_storeu_si128(v31 + 1, v45);
          v4 -= 32;
        }
        while ( v4 & 0xFFFFFFE0 );
      }
    }
    else
    {
      if ( (unsigned __int8)v31 & 3 )
      {
        v32 = (unsigned __int8)v31 & 3;
        v4 = a3 - v32;
        do
        {
          v31[-1].m128i_i8[15] = v30[-1].m128i_i8[15];
          v30 = (const __m128i *)((char *)v30 - 1);
          v31 = (__m128i *)((char *)v31 - 1);
          --v32;
        }
        while ( v32 );
      }
      if ( v4 >= 0x20 )
      {
        v33 = v4;
        v34 = v4 >> 2;
        v35 = v33 & 3;
        v36 = (int)&v30[-1].m128i_i32[3];
        v37 = (int)&v31[-1].m128i_i32[3];
        while ( v34 )
        {
          *(_DWORD *)v37 = *(_DWORD *)v36;
          v36 -= 4;
          v37 -= 4;
          --v34;
        }
        switch ( v35 )
        {
          case 0:
            result = a1;
            break;
          case 1:
            *(_BYTE *)(v37 + 3) = *(_BYTE *)(v36 + 3);
            result = a1;
            break;
          case 2:
            *(_BYTE *)(v37 + 3) = *(_BYTE *)(v36 + 3);
            *(_BYTE *)(v37 + 2) = *(_BYTE *)(v36 + 2);
            result = a1;
            break;
          case 3:
            *(_BYTE *)(v37 + 3) = *(_BYTE *)(v36 + 3);
            *(_BYTE *)(v37 + 2) = *(_BYTE *)(v36 + 2);
            *(_BYTE *)(v37 + 1) = *(_BYTE *)(v36 + 1);
            result = a1;
            break;
        }
        return result;
      }
    }
  }
  for ( ; v4 & 0xFFFFFFFC; v4 -= 4 )
  {
    v31 = (__m128i *)((char *)v31 - 4);
    v30 = (const __m128i *)((char *)v30 - 4);
    v31->m128i_i32[0] = v30->m128i_i32[0];
  }
  for ( ; v4; --v4 )
  {
    v31 = (__m128i *)((char *)v31 - 1);
    v30 = (const __m128i *)((char *)v30 - 1);
    LOBYTE(v31->m128i_i32[0]) = v30->m128i_i32[0];
  }
  return a1;
}
// 10051334: using guessed type void *off_10051334[4];
// 100B0240: using guessed type int dword_100B0240;
// 100B17DC: using guessed type int dword_100B17DC;

//----- (1005182D) --------------------------------------------------------
signed int __cdecl sub_1005182D(_WORD *a1, int a2, int a3)
{
  _WORD *v3; // ecx
  int v4; // edi
  signed int *v5; // eax
  signed int v6; // esi
  int v8; // ebx
  __int16 v9; // ax
  signed int v10; // [esp-4h] [ebp-10h]

  if ( !a1 || (v4 = a2) == 0 )
  {
LABEL_5:
    v5 = (signed int *)sub_10034888(v3);
    v10 = 22;
LABEL_6:
    v6 = v10;
    *v5 = v10;
    sub_10034711();
    return v6;
  }
  if ( !a3 )
  {
LABEL_4:
    *a1 = 0;
    goto LABEL_5;
  }
  v3 = a1;
  v6 = 0;
  while ( *v3 )
  {
    ++v3;
    if ( !--v4 )
      goto LABEL_4;
  }
  v8 = a3 - (_DWORD)v3;
  while ( 1 )
  {
    v9 = *(_WORD *)((char *)v3 + v8);
    *v3 = v9;
    ++v3;
    if ( !v9 )
      return v6;
    if ( !--v4 )
    {
      *a1 = 0;
      v5 = (signed int *)sub_10034888(v3);
      v10 = 34;
      goto LABEL_6;
    }
  }
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (100518B7) --------------------------------------------------------
int __cdecl sub_100518B7(_DWORD *a1, _DWORD *a2)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i != a2; ++i )
  {
    if ( *i )
      result = ((int (__thiscall *)(_DWORD))*i)(*i);
  }
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (100518EC) --------------------------------------------------------
int __cdecl sub_100518EC(_DWORD *a1, _DWORD *a2)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i != a2; ++i )
  {
    if ( *i )
    {
      result = ((int (__thiscall *)(_DWORD))*i)(*i);
      if ( result )
        return result;
    }
  }
  return 0;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10051995) --------------------------------------------------------
signed int __cdecl sub_10051995(_BYTE *a1, int a2, int a3)
{
  int v3; // ecx
  signed int *v4; // eax
  signed int v5; // esi
  _BYTE *v7; // edi
  char v8; // al
  signed int v9; // [esp-4h] [ebp-Ch]

  if ( !a1 || (v3 = a2) == 0 )
  {
LABEL_5:
    v4 = (signed int *)sub_10034888(v3);
    v9 = 22;
LABEL_6:
    v5 = v9;
    *v4 = v9;
    sub_10034711();
    return v5;
  }
  if ( !a3 )
  {
    *a1 = 0;
    goto LABEL_5;
  }
  v7 = a1;
  while ( 1 )
  {
    v8 = v7[a3 - (_DWORD)a1];
    *v7++ = v8;
    if ( !v8 )
      return 0;
    if ( !--v3 )
    {
      *a1 = 0;
      v4 = (signed int *)sub_10034888(0);
      v9 = 34;
      goto LABEL_6;
    }
  }
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (10051A80) --------------------------------------------------------
signed int __cdecl sub_10051A80(_BYTE *a1, int a2, int a3)
{
  _BYTE *v3; // ecx
  int v4; // edx
  signed int *v5; // eax
  signed int v6; // esi
  int v8; // edi
  char v9; // al
  signed int v10; // [esp-4h] [ebp-Ch]

  if ( !a1 || (v4 = a2) == 0 )
  {
LABEL_5:
    v5 = (signed int *)sub_10034888(v3);
    v10 = 22;
LABEL_6:
    v6 = v10;
    *v5 = v10;
    sub_10034711();
    return v6;
  }
  if ( !a3 )
  {
LABEL_4:
    *a1 = 0;
    goto LABEL_5;
  }
  v3 = a1;
  while ( *v3 )
  {
    ++v3;
    if ( !--v4 )
      goto LABEL_4;
  }
  v8 = a3 - (_DWORD)v3;
  while ( 1 )
  {
    v9 = v3[v8];
    *v3++ = v9;
    if ( !v9 )
      return 0;
    if ( !--v4 )
    {
      *a1 = 0;
      v5 = (signed int *)sub_10034888(v3);
      v10 = 34;
      goto LABEL_6;
    }
  }
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (10051B26) --------------------------------------------------------
_DWORD *__thiscall sub_10051B26(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v6; // esi
  int v7; // eax

  v6 = this;
  sub_10033177(a2, a3, a4, a5, a6);
  v7 = v6[3];
  v6[278] = 0;
  v6[279] = 0;
  v6[681] = -1;
  v6[682] = -1;
  v6[280] = v7;
  return v6;
}
// 10033177: using guessed type _DWORD __stdcall sub_10033177(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10051B80) --------------------------------------------------------
_DWORD *__thiscall sub_10051B80(_DWORD *this, int a2, _DWORD *a3, _DWORD *a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // esi

  v6 = this;
  sub_10035E68(a2, *a3, a3[1], *a4, a5, *a6);
  v6[276] = 0;
  return v6;
}
// 10035E68: using guessed type _DWORD __stdcall sub_10035E68(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10051BEA) --------------------------------------------------------
_DWORD *__thiscall sub_10051BEA(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v6; // esi
  int v7; // eax

  v6 = this;
  sub_10033F5F(a2, a3, a4, a5, a6);
  v7 = v6[3];
  v6[278] = 0;
  v6[279] = 0;
  v6[681] = -1;
  v6[682] = -1;
  v6[280] = v7;
  return v6;
}
// 10033F5F: using guessed type _DWORD __stdcall sub_10033F5F(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10051C44) --------------------------------------------------------
_DWORD *__thiscall sub_10051C44(_DWORD *this, int a2, _DWORD *a3, _DWORD *a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // esi

  v6 = this;
  sub_10033735(a2, *a3, a3[1], *a4, a5, *a6);
  v6[276] = 0;
  return v6;
}
// 10033735: using guessed type _DWORD __stdcall sub_10033735(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10051CAE) --------------------------------------------------------
_DWORD *__thiscall sub_10051CAE(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v6; // esi
  int v7; // eax

  v6 = this;
  sub_10034252(a2, a3, a4, a5, a6);
  v7 = v6[3];
  v6[278] = 0;
  v6[279] = 0;
  v6[681] = -1;
  v6[682] = -1;
  v6[280] = v7;
  return v6;
}
// 10034252: using guessed type _DWORD __stdcall sub_10034252(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10051D08) --------------------------------------------------------
_DWORD *__thiscall sub_10051D08(_DWORD *this, int a2, _DWORD *a3, _DWORD *a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // esi

  v6 = this;
  sub_10034A54(a2, *a3, a3[1], *a4, a5, *a6);
  v6[276] = 0;
  return v6;
}
// 10034A54: using guessed type _DWORD __stdcall sub_10034A54(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10051D72) --------------------------------------------------------
_DWORD *__thiscall sub_10051D72(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v6; // esi
  int v7; // eax

  v6 = this;
  sub_10035BA2(a2, a3, a4, a5, a6);
  v7 = v6[3];
  v6[278] = 0;
  v6[279] = 0;
  v6[681] = -1;
  v6[682] = -1;
  v6[280] = v7;
  return v6;
}
// 10035BA2: using guessed type _DWORD __stdcall sub_10035BA2(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10051DCC) --------------------------------------------------------
_DWORD *__thiscall sub_10051DCC(_DWORD *this, int a2, _DWORD *a3, _DWORD *a4, int a5, _DWORD *a6)
{
  _DWORD *v6; // esi

  v6 = this;
  sub_10035445(a2, *a3, a3[1], *a4, a5, *a6);
  v6[276] = 0;
  return v6;
}
// 10035445: using guessed type _DWORD __stdcall sub_10035445(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10051E0B) --------------------------------------------------------
int __stdcall sub_10051E0B(_DWORD *a1, int **a2, _DWORD *a3)
{
  int v3; // esi

  sub_10033262(*a1);
  v3 = sub_1005FF01(a2);
  sub_10033893(*a3);
  return v3;
}
// 10033262: using guessed type _DWORD __cdecl sub_10033262(_DWORD);
// 10033893: using guessed type _DWORD __cdecl sub_10033893(_DWORD);

//----- (10051E7C) --------------------------------------------------------
int __stdcall sub_10051E7C(_DWORD *a1, int **a2, _DWORD *a3)
{
  int v3; // esi

  sub_10033262(*a1);
  v3 = sub_1005FD39(a2);
  sub_10033893(*a3);
  return v3;
}
// 10033262: using guessed type _DWORD __cdecl sub_10033262(_DWORD);
// 10033893: using guessed type _DWORD __cdecl sub_10033893(_DWORD);

//----- (10051EED) --------------------------------------------------------
int __stdcall sub_10051EED(_DWORD *a1, int **a2, _DWORD *a3)
{
  int v3; // esi

  sub_10033262(*a1);
  v3 = sub_1005FC22(a2);
  sub_10033893(*a3);
  return v3;
}
// 10033262: using guessed type _DWORD __cdecl sub_10033262(_DWORD);
// 10033893: using guessed type _DWORD __cdecl sub_10033893(_DWORD);

//----- (10051F5E) --------------------------------------------------------
int __stdcall sub_10051F5E(_DWORD *a1, int **a2, _DWORD *a3)
{
  int v3; // esi

  sub_10033262(*a1);
  v3 = sub_1005FE28(a2);
  sub_10033893(*a3);
  return v3;
}
// 10033262: using guessed type _DWORD __cdecl sub_10033262(_DWORD);
// 10033893: using guessed type _DWORD __cdecl sub_10033893(_DWORD);

//----- (10051FCF) --------------------------------------------------------
int __stdcall sub_10051FCF(_DWORD *a1, int **a2, _DWORD *a3)
{
  int v3; // esi

  sub_10033262(*a1);
  v3 = sub_100600D0(a2);
  sub_10033893(*a3);
  return v3;
}
// 10033262: using guessed type _DWORD __cdecl sub_10033262(_DWORD);
// 10033893: using guessed type _DWORD __cdecl sub_10033893(_DWORD);

//----- (10052040) --------------------------------------------------------
int __stdcall sub_10052040(_DWORD *a1, int **a2, _DWORD *a3)
{
  int v3; // esi

  sub_10033262(*a1);
  v3 = sub_1005FFCF(a2);
  sub_10033893(*a3);
  return v3;
}
// 10033262: using guessed type _DWORD __cdecl sub_10033262(_DWORD);
// 10033893: using guessed type _DWORD __cdecl sub_10033893(_DWORD);

//----- (10052599) --------------------------------------------------------
signed int __cdecl sub_10052599(int a1, int a2, _BYTE *a3, unsigned int a4, unsigned int a5, int a6, int a7, int a8)
{
  signed int result; // eax
  int v9; // [esp+8h] [ebp-8h]
  int v10; // [esp+Ch] [ebp-4h]

  if ( !a6 )
  {
    *(_BYTE *)(a7 + 28) = 1;
    *(_DWORD *)(a7 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a7);
    return -1;
  }
  result = a5;
  if ( a5 )
  {
    if ( !a3 )
      goto LABEL_19;
LABEL_8:
    if ( !a4 )
      goto LABEL_19;
    v10 = *(_DWORD *)(a7 + 24);
    v9 = *(_DWORD *)(a7 + 28);
    if ( a4 <= a5 )
    {
      result = sub_10052830(a1, a2, (int)a3, a4, a6, a7, a8);
      a3[a4 - 1] = 0;
      if ( result != -2 )
      {
LABEL_11:
        if ( result >= 0 )
          return result;
        goto LABEL_12;
      }
      if ( a5 != -1 )
      {
LABEL_12:
        *a3 = 0;
        if ( result != -2 )
          return -1;
        *(_DWORD *)(a7 + 24) = 34;
LABEL_20:
        *(_BYTE *)(a7 + 28) = 1;
        sub_10034B08(0, 0, 0, 0, 0, a7);
        return -1;
      }
    }
    else
    {
      result = sub_10052830(a1, a2, (int)a3, a5 + 1, a6, a7, a8);
      if ( result != -2 )
        goto LABEL_11;
    }
    if ( *(_BYTE *)(a7 + 28) )
    {
      if ( *(_DWORD *)(a7 + 24) == 34 )
      {
        *(_DWORD *)(a7 + 24) = v10;
        *(_DWORD *)(a7 + 28) = v9;
      }
    }
    return -1;
  }
  if ( a3 )
    goto LABEL_8;
  if ( a4 )
  {
LABEL_19:
    *(_DWORD *)(a7 + 24) = 22;
    goto LABEL_20;
  }
  return result;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100526DA) --------------------------------------------------------
signed int __cdecl sub_100526DA(int a1, int a2, _WORD *a3, unsigned int a4, unsigned int a5, int a6, int a7, int a8)
{
  signed int result; // eax
  bool v9; // zf
  int v10; // [esp+4h] [ebp-8h]
  int v11; // [esp+8h] [ebp-4h]

  if ( !a6 )
  {
    *(_BYTE *)(a7 + 28) = 1;
    *(_DWORD *)(a7 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a7);
    return -1;
  }
  if ( a5 )
  {
    if ( !a3 )
    {
LABEL_21:
      *(_DWORD *)(a7 + 24) = 22;
      goto LABEL_22;
    }
  }
  else if ( !a3 )
  {
    if ( !a4 )
      return 0;
    goto LABEL_21;
  }
  if ( !a4 )
    goto LABEL_21;
  v11 = *(_DWORD *)(a7 + 24);
  v10 = *(_DWORD *)(a7 + 28);
  if ( a4 > a5 )
  {
    result = sub_10052A01(a1, a2, (int)a3, a5 + 1, a6, a7, a8);
    if ( result == -2 )
    {
      v9 = *(_BYTE *)(a7 + 28) == 0;
      goto LABEL_15;
    }
    goto LABEL_18;
  }
  result = sub_10052A01(a1, a2, (int)a3, a4, a6, a7, a8);
  a3[a4 - 1] = 0;
  if ( result != -2 )
  {
LABEL_18:
    if ( result >= 0 )
      return result;
    goto LABEL_19;
  }
  if ( a5 == -1 )
  {
    v9 = *(_BYTE *)(a7 + 28) == 0;
LABEL_15:
    if ( !v9 && *(_DWORD *)(a7 + 24) == 34 )
    {
      *(_DWORD *)(a7 + 24) = v11;
      *(_DWORD *)(a7 + 28) = v10;
    }
    return -1;
  }
LABEL_19:
  *a3 = 0;
  if ( result == -2 )
  {
    *(_DWORD *)(a7 + 24) = 34;
LABEL_22:
    *(_BYTE *)(a7 + 28) = 1;
    sub_10034B08(0, 0, 0, 0, 0, a7);
  }
  return -1;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10052830) --------------------------------------------------------
signed int __cdecl sub_10052830(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7)
{
  int *v8; // edi
  int v9; // eax
  int v10; // eax
  signed int v11; // esi
  int *v12; // [esp+Ch] [ebp-470h]
  unsigned int v13; // [esp+10h] [ebp-46Ch]
  int v14; // [esp+14h] [ebp-468h]
  int v15; // [esp+18h] [ebp-464h]
  int *v16; // [esp+1Ch] [ebp-460h]
  char v17; // [esp+20h] [ebp-45Ch]
  char v18; // [esp+5Ch] [ebp-420h]
  int v19; // [esp+470h] [ebp-Ch]

  v16 = (int *)a3;
  if ( !a5 || a4 && !a3 )
  {
    *(_BYTE *)(a6 + 28) = 1;
    *(_DWORD *)(a6 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a6);
    return -1;
  }
  v15 = 0;
  v8 = v16;
  v12 = v16;
  v13 = a4;
  v14 = 0;
  if ( a1 & 2 || (LOBYTE(v15) = 0, !v16) )
    LOBYTE(v15) = 1;
  v16 = (int *)&v12;
  sub_10034A54(&v16, a1, a2, a5, a6, a7);
  v19 = 0;
  v9 = sub_100347D9(&v17);
  v16 = (int *)v9;
  if ( !v8 )
    goto LABEL_28;
  if ( a1 & 1 )
  {
    if ( a4 || !v9 )
    {
      if ( v14 != a4 )
      {
        *((_BYTE *)v8 + v14) = 0;
LABEL_28:
        v11 = (signed int)v16;
        goto LABEL_29;
      }
      if ( v9 < 0 || v9 <= a4 )
        goto LABEL_28;
    }
    goto LABEL_24;
  }
  if ( a1 & 2 )
  {
    if ( !a4 )
      goto LABEL_28;
    if ( v9 < 0 )
    {
      *(_BYTE *)v8 = 0;
      goto LABEL_28;
    }
    v10 = v14;
    if ( v14 == a4 )
    {
      *((_BYTE *)v8 + a4 - 1) = 0;
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  if ( a4 )
  {
    v10 = v14;
    if ( v14 == a4 )
    {
      *((_BYTE *)v8 + a4 - 1) = 0;
      v11 = -2;
      goto LABEL_29;
    }
LABEL_27:
    *((_BYTE *)v8 + v10) = 0;
    goto LABEL_28;
  }
LABEL_24:
  v11 = -1;
LABEL_29:
  sub_10035021(&v18);
  return v11;
}
// 100347D9: using guessed type int __thiscall sub_100347D9(_DWORD);
// 10034A54: using guessed type _DWORD __stdcall sub_10034A54(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035021: using guessed type int __thiscall sub_10035021(_DWORD);

//----- (10052A01) --------------------------------------------------------
signed int __cdecl sub_10052A01(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7)
{
  int *v8; // edi
  int v9; // eax
  int v10; // eax
  signed int v11; // esi
  int *v12; // [esp+Ch] [ebp-470h]
  unsigned int v13; // [esp+10h] [ebp-46Ch]
  int v14; // [esp+14h] [ebp-468h]
  int v15; // [esp+18h] [ebp-464h]
  int *v16; // [esp+1Ch] [ebp-460h]
  char v17; // [esp+20h] [ebp-45Ch]
  char v18; // [esp+5Ch] [ebp-420h]
  int v19; // [esp+470h] [ebp-Ch]

  v16 = (int *)a3;
  if ( !a5 || a4 && !a3 )
  {
    *(_BYTE *)(a6 + 28) = 1;
    *(_DWORD *)(a6 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a6);
    return -1;
  }
  v15 = 0;
  v8 = v16;
  v12 = v16;
  v13 = a4;
  v14 = 0;
  if ( a1 & 2 || (LOBYTE(v15) = 0, !v16) )
    LOBYTE(v15) = 1;
  v16 = (int *)&v12;
  sub_10035445(&v16, a1, a2, a5, a6, a7);
  v19 = 0;
  v9 = sub_10034EE1(&v17);
  v16 = (int *)v9;
  if ( !v8 )
    goto LABEL_28;
  if ( a1 & 1 )
  {
    if ( a4 || !v9 )
    {
      if ( v14 != a4 )
      {
        *((_WORD *)v8 + v14) = 0;
LABEL_28:
        v11 = (signed int)v16;
        goto LABEL_29;
      }
      if ( v9 < 0 || v9 <= a4 )
        goto LABEL_28;
    }
    goto LABEL_24;
  }
  if ( a1 & 2 )
  {
    if ( !a4 )
      goto LABEL_28;
    if ( v9 < 0 )
    {
      *(_WORD *)v8 = 0;
      goto LABEL_28;
    }
    v10 = v14;
    if ( v14 == a4 )
    {
      *((_WORD *)v8 + a4 - 1) = 0;
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  if ( a4 )
  {
    v10 = v14;
    if ( v14 == a4 )
    {
      *((_WORD *)v8 + a4 - 1) = 0;
      v11 = -2;
      goto LABEL_29;
    }
LABEL_27:
    *((_WORD *)v8 + v10) = 0;
    goto LABEL_28;
  }
LABEL_24:
  v11 = -1;
LABEL_29:
  sub_10035021(&v18);
  return v11;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034EE1: using guessed type int __thiscall sub_10034EE1(_DWORD);
// 10035021: using guessed type int __thiscall sub_10035021(_DWORD);
// 10035445: using guessed type _DWORD __stdcall sub_10035445(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10052BE4) --------------------------------------------------------
signed int __cdecl sub_10052BE4(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7)
{
  _BYTE *v8; // edi
  int v9; // eax
  int v10; // eax
  signed int v11; // esi
  int v12; // [esp+8h] [ebp-ADCh]
  int v13; // [esp+Ch] [ebp-AD8h]
  int v14; // [esp+10h] [ebp-AD4h]
  int v15; // [esp+14h] [ebp-AD0h]
  _BYTE *v16; // [esp+18h] [ebp-ACCh]
  unsigned int v17; // [esp+1Ch] [ebp-AC8h]
  int v18; // [esp+20h] [ebp-AC4h]
  int v19; // [esp+24h] [ebp-AC0h]
  int *v20; // [esp+28h] [ebp-ABCh]
  _BYTE *v21; // [esp+2Ch] [ebp-AB8h]
  char v22; // [esp+30h] [ebp-AB4h]
  char v23; // [esp+6Ch] [ebp-A78h]

  v21 = (_BYTE *)a3;
  if ( !a5 || a4 && !a3 )
  {
    *(_BYTE *)(a6 + 28) = 1;
    *(_DWORD *)(a6 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a6);
    return -1;
  }
  v19 = 0;
  v8 = v21;
  v14 = a1 & 2;
  v16 = v21;
  v17 = a4;
  v18 = 0;
  if ( a1 & 2 || (LOBYTE(v19) = 0, !v21) )
    LOBYTE(v19) = 1;
  v12 = a1;
  v20 = (int *)&v16;
  v21 = (_BYTE *)a7;
  v15 = a5;
  v13 = a2;
  sub_10033ACD(&v20, &v12, &v15, a6, &v21);
  v9 = sub_100343D3(&v22);
  v20 = (int *)v9;
  if ( !v8 )
    goto LABEL_28;
  if ( a1 & 1 )
  {
    if ( a4 || !v9 )
    {
      if ( v18 != a4 )
      {
        v8[v18] = 0;
LABEL_28:
        v11 = (signed int)v20;
        goto LABEL_29;
      }
      if ( v9 < 0 || v9 <= a4 )
        goto LABEL_28;
    }
    goto LABEL_24;
  }
  if ( v14 )
  {
    if ( !a4 )
      goto LABEL_28;
    if ( v9 < 0 )
    {
      *v8 = 0;
      goto LABEL_28;
    }
    v10 = v18;
    if ( v18 == a4 )
    {
      v8[a4 - 1] = 0;
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  if ( a4 )
  {
    v10 = v18;
    if ( v18 == a4 )
    {
      v8[a4 - 1] = 0;
      v11 = -2;
      goto LABEL_29;
    }
LABEL_27:
    v8[v10] = 0;
    goto LABEL_28;
  }
LABEL_24:
  v11 = -1;
LABEL_29:
  sub_10035021(&v23);
  return v11;
}
// 10033ACD: using guessed type _DWORD __stdcall sub_10033ACD(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100343D3: using guessed type int __thiscall sub_100343D3(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035021: using guessed type int __thiscall sub_10035021(_DWORD);

//----- (10052DE8) --------------------------------------------------------
signed int __cdecl sub_10052DE8(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7)
{
  _WORD *v8; // edi
  int v9; // eax
  int v10; // eax
  signed int v11; // esi
  int v12; // [esp+8h] [ebp-ADCh]
  int v13; // [esp+Ch] [ebp-AD8h]
  int v14; // [esp+10h] [ebp-AD4h]
  int v15; // [esp+14h] [ebp-AD0h]
  _WORD *v16; // [esp+18h] [ebp-ACCh]
  unsigned int v17; // [esp+1Ch] [ebp-AC8h]
  int v18; // [esp+20h] [ebp-AC4h]
  int v19; // [esp+24h] [ebp-AC0h]
  int *v20; // [esp+28h] [ebp-ABCh]
  _WORD *v21; // [esp+2Ch] [ebp-AB8h]
  char v22; // [esp+30h] [ebp-AB4h]
  char v23; // [esp+6Ch] [ebp-A78h]

  v21 = (_WORD *)a3;
  if ( !a5 || a4 && !a3 )
  {
    *(_BYTE *)(a6 + 28) = 1;
    *(_DWORD *)(a6 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a6);
    return -1;
  }
  v19 = 0;
  v8 = v21;
  v14 = a1 & 2;
  v16 = v21;
  v17 = a4;
  v18 = 0;
  if ( a1 & 2 || (LOBYTE(v19) = 0, !v21) )
    LOBYTE(v19) = 1;
  v12 = a1;
  v20 = (int *)&v16;
  v21 = (_WORD *)a7;
  v15 = a5;
  v13 = a2;
  sub_100334BF(&v20, &v12, &v15, a6, &v21);
  v9 = sub_100346A8(&v22);
  v20 = (int *)v9;
  if ( !v8 )
    goto LABEL_28;
  if ( a1 & 1 )
  {
    if ( a4 || !v9 )
    {
      if ( v18 != a4 )
      {
        v8[v18] = 0;
LABEL_28:
        v11 = (signed int)v20;
        goto LABEL_29;
      }
      if ( v9 < 0 || v9 <= a4 )
        goto LABEL_28;
    }
    goto LABEL_24;
  }
  if ( v14 )
  {
    if ( !a4 )
      goto LABEL_28;
    if ( v9 < 0 )
    {
      *v8 = 0;
      goto LABEL_28;
    }
    v10 = v18;
    if ( v18 == a4 )
    {
      v8[a4 - 1] = 0;
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  if ( a4 )
  {
    v10 = v18;
    if ( v18 == a4 )
    {
      v8[a4 - 1] = 0;
      v11 = -2;
      goto LABEL_29;
    }
LABEL_27:
    v8[v10] = 0;
    goto LABEL_28;
  }
LABEL_24:
  v11 = -1;
LABEL_29:
  sub_10035021(&v23);
  return v11;
}
// 100334BF: using guessed type _DWORD __stdcall sub_100334BF(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100346A8: using guessed type int __thiscall sub_100346A8(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035021: using guessed type int __thiscall sub_10035021(_DWORD);

//----- (10052FFF) --------------------------------------------------------
signed int __cdecl sub_10052FFF(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7)
{
  int *v8; // edi
  int v9; // eax
  int v10; // eax
  signed int v11; // esi
  int *v12; // [esp+Ch] [ebp-470h]
  unsigned int v13; // [esp+10h] [ebp-46Ch]
  int v14; // [esp+14h] [ebp-468h]
  int v15; // [esp+18h] [ebp-464h]
  int *v16; // [esp+1Ch] [ebp-460h]
  char v17; // [esp+20h] [ebp-45Ch]
  char v18; // [esp+5Ch] [ebp-420h]
  int v19; // [esp+470h] [ebp-Ch]

  v16 = (int *)a3;
  if ( !a5 || a4 && !a3 )
  {
    *(_BYTE *)(a6 + 28) = 1;
    *(_DWORD *)(a6 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a6);
    return -1;
  }
  v15 = 0;
  v8 = v16;
  v12 = v16;
  v13 = a4;
  v14 = 0;
  if ( a1 & 2 || (LOBYTE(v15) = 0, !v16) )
    LOBYTE(v15) = 1;
  v16 = (int *)&v12;
  sub_10034A54(&v16, a1, a2, a5, a6, a7);
  v19 = 0;
  v9 = sub_10034D79(&v17);
  v16 = (int *)v9;
  if ( !v8 )
    goto LABEL_28;
  if ( a1 & 1 )
  {
    if ( a4 || !v9 )
    {
      if ( v14 != a4 )
      {
        *((_BYTE *)v8 + v14) = 0;
LABEL_28:
        v11 = (signed int)v16;
        goto LABEL_29;
      }
      if ( v9 < 0 || v9 <= a4 )
        goto LABEL_28;
    }
    goto LABEL_24;
  }
  if ( a1 & 2 )
  {
    if ( !a4 )
      goto LABEL_28;
    if ( v9 < 0 )
    {
      *(_BYTE *)v8 = 0;
      goto LABEL_28;
    }
    v10 = v14;
    if ( v14 == a4 )
    {
      *((_BYTE *)v8 + a4 - 1) = 0;
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  if ( a4 )
  {
    v10 = v14;
    if ( v14 == a4 )
    {
      *((_BYTE *)v8 + a4 - 1) = 0;
      v11 = -2;
      goto LABEL_29;
    }
LABEL_27:
    *((_BYTE *)v8 + v10) = 0;
    goto LABEL_28;
  }
LABEL_24:
  v11 = -1;
LABEL_29:
  sub_10035021(&v18);
  return v11;
}
// 10034A54: using guessed type _DWORD __stdcall sub_10034A54(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034D79: using guessed type int __thiscall sub_10034D79(_DWORD);
// 10035021: using guessed type int __thiscall sub_10035021(_DWORD);

//----- (100531D0) --------------------------------------------------------
signed int __cdecl sub_100531D0(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7)
{
  int *v8; // edi
  int v9; // eax
  int v10; // eax
  signed int v11; // esi
  int *v12; // [esp+Ch] [ebp-470h]
  unsigned int v13; // [esp+10h] [ebp-46Ch]
  int v14; // [esp+14h] [ebp-468h]
  int v15; // [esp+18h] [ebp-464h]
  int *v16; // [esp+1Ch] [ebp-460h]
  char v17; // [esp+20h] [ebp-45Ch]
  char v18; // [esp+5Ch] [ebp-420h]
  int v19; // [esp+470h] [ebp-Ch]

  v16 = (int *)a3;
  if ( !a5 || a4 && !a3 )
  {
    *(_BYTE *)(a6 + 28) = 1;
    *(_DWORD *)(a6 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a6);
    return -1;
  }
  v15 = 0;
  v8 = v16;
  v12 = v16;
  v13 = a4;
  v14 = 0;
  if ( a1 & 2 || (LOBYTE(v15) = 0, !v16) )
    LOBYTE(v15) = 1;
  v16 = (int *)&v12;
  sub_10035445(&v16, a1, a2, a5, a6, a7);
  v19 = 0;
  v9 = sub_100342C5(&v17);
  v16 = (int *)v9;
  if ( !v8 )
    goto LABEL_28;
  if ( a1 & 1 )
  {
    if ( a4 || !v9 )
    {
      if ( v14 != a4 )
      {
        *((_WORD *)v8 + v14) = 0;
LABEL_28:
        v11 = (signed int)v16;
        goto LABEL_29;
      }
      if ( v9 < 0 || v9 <= a4 )
        goto LABEL_28;
    }
    goto LABEL_24;
  }
  if ( a1 & 2 )
  {
    if ( !a4 )
      goto LABEL_28;
    if ( v9 < 0 )
    {
      *(_WORD *)v8 = 0;
      goto LABEL_28;
    }
    v10 = v14;
    if ( v14 == a4 )
    {
      *((_WORD *)v8 + a4 - 1) = 0;
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  if ( a4 )
  {
    v10 = v14;
    if ( v14 == a4 )
    {
      *((_WORD *)v8 + a4 - 1) = 0;
      v11 = -2;
      goto LABEL_29;
    }
LABEL_27:
    *((_WORD *)v8 + v10) = 0;
    goto LABEL_28;
  }
LABEL_24:
  v11 = -1;
LABEL_29:
  sub_10035021(&v18);
  return v11;
}
// 100342C5: using guessed type int __thiscall sub_100342C5(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035021: using guessed type int __thiscall sub_10035021(_DWORD);
// 10035445: using guessed type _DWORD __stdcall sub_10035445(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100533B3) --------------------------------------------------------
signed int __cdecl sub_100533B3(int a1, int a2, _BYTE *a3, unsigned int a4, int a5, int a6, int a7)
{
  signed int v8; // ecx

  if ( !a5 )
  {
    *(_BYTE *)(a6 + 28) = 1;
    *(_DWORD *)(a6 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a6);
    return -1;
  }
  if ( a3 && a4 )
  {
    v8 = sub_10052830(a1, a2, (int)a3, a4, a5, a6, a7);
    if ( v8 < 0 )
      *a3 = 0;
    if ( v8 != -2 )
      return v8;
    *(_BYTE *)(a6 + 28) = 1;
    *(_DWORD *)(a6 + 24) = 34;
    sub_10034B08(0, 0, 0, 0, 0, a6);
  }
  else
  {
    *(_BYTE *)(a6 + 28) = 1;
    *(_DWORD *)(a6 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a6);
  }
  return -1;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10053479) --------------------------------------------------------
signed int __cdecl sub_10053479(int a1, int a2, _WORD *a3, unsigned int a4, int a5, int a6, int a7)
{
  signed int result; // eax

  if ( !a5 )
  {
    *(_BYTE *)(a6 + 28) = 1;
    *(_DWORD *)(a6 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a6);
    return -1;
  }
  if ( !a3 || !a4 )
  {
    *(_BYTE *)(a6 + 28) = 1;
    *(_DWORD *)(a6 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a6);
    goto LABEL_10;
  }
  result = sub_10052A01(a1, a2, (int)a3, a4, a5, a6, a7);
  if ( result < 0 )
    *a3 = 0;
  if ( result == -2 )
  {
    *(_BYTE *)(a6 + 28) = 1;
    *(_DWORD *)(a6 + 24) = 34;
    sub_10034B08(0, 0, 0, 0, 0, a6);
LABEL_10:
    result = -1;
  }
  return result;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10053539) --------------------------------------------------------
signed int __thiscall sub_10053539(_DWORD *this)
{
  signed int result; // eax

  if ( this[257] )
    result = this[256] >> 1;
  else
    result = 512;
  return result;
}

//----- (10053557) --------------------------------------------------------
signed int __thiscall sub_10053557(_DWORD *this)
{
  signed int result; // eax

  if ( this[257] )
    result = this[256] >> 2;
  else
    result = 256;
  return result;
}

//----- (10053596) --------------------------------------------------------
char __thiscall sub_10053596(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // edi
  SIZE_T v5; // esi
  void *v6; // ST00_4
  LPVOID lpMem; // [esp+8h] [ebp-4h]

  v3 = this;
  if ( a2 > 0x7FFFFFFF )
  {
    *(_BYTE *)(a3 + 28) = 1;
    *(_DWORD *)(a3 + 24) = 12;
    return 0;
  }
  v5 = 2 * a2;
  if ( (this[257] || v5 > 0x400) && v5 > this[256] )
  {
    lpMem = (LPVOID)sub_10034C52(v5);
    if ( !lpMem )
    {
      sub_1003603E(0);
      return 0;
    }
    sub_10034BD0(&lpMem);
    v6 = lpMem;
    v3[256] = v5;
    sub_1003603E(v6);
  }
  return 1;
}
// 10034BD0: using guessed type _DWORD __stdcall sub_10034BD0(_DWORD);

//----- (10053637) --------------------------------------------------------
char __thiscall sub_10053637(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // edi
  SIZE_T v5; // esi
  void *v6; // ST00_4
  LPVOID lpMem; // [esp+8h] [ebp-4h]

  v3 = this;
  if ( a2 > 0x3FFFFFFF )
  {
    *(_BYTE *)(a3 + 28) = 1;
    *(_DWORD *)(a3 + 24) = 12;
    return 0;
  }
  v5 = 4 * a2;
  if ( (this[257] || v5 > 0x400) && v5 > this[256] )
  {
    lpMem = (LPVOID)sub_10034C52(v5);
    if ( !lpMem )
    {
      sub_1003603E(0);
      return 0;
    }
    sub_10034BD0(&lpMem);
    v6 = lpMem;
    v3[256] = v5;
    sub_1003603E(v6);
  }
  return 1;
}
// 10034BD0: using guessed type _DWORD __stdcall sub_10034BD0(_DWORD);

//----- (100536D9) --------------------------------------------------------
char __thiscall sub_100536D9(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    HIDWORD(v3) = this[4];
    this[4] = HIDWORD(v3) + 4;
    LODWORD(v3) = (char)*(_BYTE *)HIDWORD(v3);
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033109(&v2[2 * v7 + 281], 1, *((_BYTE *)v2 + 45), v2[10]);
    LODWORD(v3) = *(char *)v2[2 * v7 + 283];
  }
  v3 = (signed int)v3;
  *a2 = v3;
  LOBYTE(v3) = 1;
  a2[1] = HIDWORD(v3);
  return result;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1005378B) --------------------------------------------------------
char __thiscall sub_1005378B(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    HIDWORD(v3) = this[4];
    this[4] = HIDWORD(v3) + 4;
    LODWORD(v3) = (char)*(_BYTE *)HIDWORD(v3);
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033E92(&v2[2 * v7 + 281], 1, *((_BYTE *)v2 + 45), v2[10]);
    LODWORD(v3) = *(char *)v2[2 * v7 + 283];
  }
  v3 = (signed int)v3;
  *a2 = v3;
  LOBYTE(v3) = 1;
  a2[1] = HIDWORD(v3);
  return result;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1005383D) --------------------------------------------------------
char __thiscall sub_1005383D(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    HIDWORD(v3) = this[4];
    this[4] = HIDWORD(v3) + 4;
    LODWORD(v3) = (char)*(_BYTE *)HIDWORD(v3);
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10034798(&v2[2 * v7 + 281], 1, *((unsigned __int16 *)v2 + 23), v2[10]);
    LODWORD(v3) = *(char *)v2[2 * v7 + 283];
  }
  v3 = (signed int)v3;
  *a2 = v3;
  LOBYTE(v3) = 1;
  a2[1] = HIDWORD(v3);
  return result;
}
// 10034798: using guessed type _DWORD __stdcall sub_10034798(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100538F1) --------------------------------------------------------
char __thiscall sub_100538F1(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    HIDWORD(v3) = this[4];
    this[4] = HIDWORD(v3) + 4;
    LODWORD(v3) = (char)*(_BYTE *)HIDWORD(v3);
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10035DE6(&v2[2 * v7 + 281], 1, *((unsigned __int16 *)v2 + 23), v2[10]);
    LODWORD(v3) = *(char *)v2[2 * v7 + 283];
  }
  v3 = (signed int)v3;
  *a2 = v3;
  LOBYTE(v3) = 1;
  a2[1] = HIDWORD(v3);
  return result;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035DE6: using guessed type _DWORD __stdcall sub_10035DE6(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (10053A45) --------------------------------------------------------
char __thiscall sub_10053A45(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    HIDWORD(v3) = this[4];
    this[4] = HIDWORD(v3) + 4;
    LODWORD(v3) = (unsigned __int8)*(_BYTE *)HIDWORD(v3);
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033109(&v2[2 * v7 + 281], 1, *((_BYTE *)v2 + 45), v2[10]);
    LODWORD(v3) = *(unsigned __int8 *)v2[2 * v7 + 283];
  }
  v3 = (signed int)v3;
  *a2 = v3;
  LOBYTE(v3) = 1;
  a2[1] = HIDWORD(v3);
  return result;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10053AF7) --------------------------------------------------------
char __thiscall sub_10053AF7(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    HIDWORD(v3) = this[4];
    this[4] = HIDWORD(v3) + 4;
    LODWORD(v3) = (unsigned __int8)*(_BYTE *)HIDWORD(v3);
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033E92(&v2[2 * v7 + 281], 1, *((_BYTE *)v2 + 45), v2[10]);
    LODWORD(v3) = *(unsigned __int8 *)v2[2 * v7 + 283];
  }
  v3 = (signed int)v3;
  *a2 = v3;
  LOBYTE(v3) = 1;
  a2[1] = HIDWORD(v3);
  return result;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10053BA9) --------------------------------------------------------
char __thiscall sub_10053BA9(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    HIDWORD(v3) = this[4];
    this[4] = HIDWORD(v3) + 4;
    LODWORD(v3) = (unsigned __int8)*(_BYTE *)HIDWORD(v3);
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10034798(&v2[2 * v7 + 281], 1, *((unsigned __int16 *)v2 + 23), v2[10]);
    LODWORD(v3) = *(unsigned __int8 *)v2[2 * v7 + 283];
  }
  v3 = (signed int)v3;
  *a2 = v3;
  LOBYTE(v3) = 1;
  a2[1] = HIDWORD(v3);
  return result;
}
// 10034798: using guessed type _DWORD __stdcall sub_10034798(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10053C5D) --------------------------------------------------------
char __thiscall sub_10053C5D(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    HIDWORD(v3) = this[4];
    this[4] = HIDWORD(v3) + 4;
    LODWORD(v3) = (unsigned __int8)*(_BYTE *)HIDWORD(v3);
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10035DE6(&v2[2 * v7 + 281], 1, *((unsigned __int16 *)v2 + 23), v2[10]);
    LODWORD(v3) = *(unsigned __int8 *)v2[2 * v7 + 283];
  }
  v3 = (signed int)v3;
  *a2 = v3;
  LOBYTE(v3) = 1;
  a2[1] = HIDWORD(v3);
  return result;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035DE6: using guessed type _DWORD __stdcall sub_10035DE6(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (10053DB1) --------------------------------------------------------
char __thiscall sub_10053DB1(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    HIDWORD(v3) = this[4];
    this[4] = HIDWORD(v3) + 4;
    LODWORD(v3) = (signed __int16)*(_WORD *)HIDWORD(v3);
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033109(&v2[2 * v7 + 281], 1, *((_BYTE *)v2 + 45), v2[10]);
    LODWORD(v3) = *(signed __int16 *)v2[2 * v7 + 283];
  }
  v3 = (signed int)v3;
  *a2 = v3;
  LOBYTE(v3) = 1;
  a2[1] = HIDWORD(v3);
  return result;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10053E63) --------------------------------------------------------
char __thiscall sub_10053E63(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    HIDWORD(v3) = this[4];
    this[4] = HIDWORD(v3) + 4;
    LODWORD(v3) = (signed __int16)*(_WORD *)HIDWORD(v3);
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033E92(&v2[2 * v7 + 281], 1, *((_BYTE *)v2 + 45), v2[10]);
    LODWORD(v3) = *(signed __int16 *)v2[2 * v7 + 283];
  }
  v3 = (signed int)v3;
  *a2 = v3;
  LOBYTE(v3) = 1;
  a2[1] = HIDWORD(v3);
  return result;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10053F15) --------------------------------------------------------
char __thiscall sub_10053F15(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    HIDWORD(v3) = this[4];
    this[4] = HIDWORD(v3) + 4;
    LODWORD(v3) = (signed __int16)*(_WORD *)HIDWORD(v3);
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10034798(&v2[2 * v7 + 281], 1, *((unsigned __int16 *)v2 + 23), v2[10]);
    LODWORD(v3) = *(signed __int16 *)v2[2 * v7 + 283];
  }
  v3 = (signed int)v3;
  *a2 = v3;
  LOBYTE(v3) = 1;
  a2[1] = HIDWORD(v3);
  return result;
}
// 10034798: using guessed type _DWORD __stdcall sub_10034798(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10053FC9) --------------------------------------------------------
char __thiscall sub_10053FC9(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    HIDWORD(v3) = this[4];
    this[4] = HIDWORD(v3) + 4;
    LODWORD(v3) = (signed __int16)*(_WORD *)HIDWORD(v3);
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10035DE6(&v2[2 * v7 + 281], 1, *((unsigned __int16 *)v2 + 23), v2[10]);
    LODWORD(v3) = *(signed __int16 *)v2[2 * v7 + 283];
  }
  v3 = (signed int)v3;
  *a2 = v3;
  LOBYTE(v3) = 1;
  a2[1] = HIDWORD(v3);
  return result;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035DE6: using guessed type _DWORD __stdcall sub_10035DE6(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1005411D) --------------------------------------------------------
char __thiscall sub_1005411D(_DWORD *this, _BYTE *a2)
{
  _DWORD *v2; // esi
  _BYTE *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_BYTE *)this[4];
    this[4] = v3 + 4;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033109(&v2[2 * v7 + 281], 1, *((_BYTE *)v2 + 45), v2[10]);
    *a2 = *(_BYTE *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100541CE) --------------------------------------------------------
char __thiscall sub_100541CE(_DWORD *this, _BYTE *a2)
{
  _DWORD *v2; // esi
  _BYTE *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_BYTE *)this[4];
    this[4] = v3 + 4;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033E92(&v2[2 * v7 + 281], 1, *((_BYTE *)v2 + 45), v2[10]);
    *a2 = *(_BYTE *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100542C1) --------------------------------------------------------
char __thiscall sub_100542C1(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    HIDWORD(v3) = this[4];
    this[4] = HIDWORD(v3) + 4;
    LODWORD(v3) = (unsigned __int16)*(_WORD *)HIDWORD(v3);
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033109(&v2[2 * v7 + 281], 1, *((_BYTE *)v2 + 45), v2[10]);
    LODWORD(v3) = *(unsigned __int16 *)v2[2 * v7 + 283];
  }
  v3 = (signed int)v3;
  *a2 = v3;
  LOBYTE(v3) = 1;
  a2[1] = HIDWORD(v3);
  return result;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10054373) --------------------------------------------------------
char __thiscall sub_10054373(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    HIDWORD(v3) = this[4];
    this[4] = HIDWORD(v3) + 4;
    LODWORD(v3) = (unsigned __int16)*(_WORD *)HIDWORD(v3);
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033E92(&v2[2 * v7 + 281], 1, *((_BYTE *)v2 + 45), v2[10]);
    LODWORD(v3) = *(unsigned __int16 *)v2[2 * v7 + 283];
  }
  v3 = (signed int)v3;
  *a2 = v3;
  LOBYTE(v3) = 1;
  a2[1] = HIDWORD(v3);
  return result;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10054425) --------------------------------------------------------
char __thiscall sub_10054425(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    HIDWORD(v3) = this[4];
    this[4] = HIDWORD(v3) + 4;
    LODWORD(v3) = (unsigned __int16)*(_WORD *)HIDWORD(v3);
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10034798(&v2[2 * v7 + 281], 1, *((unsigned __int16 *)v2 + 23), v2[10]);
    LODWORD(v3) = *(unsigned __int16 *)v2[2 * v7 + 283];
  }
  v3 = (signed int)v3;
  *a2 = v3;
  LOBYTE(v3) = 1;
  a2[1] = HIDWORD(v3);
  return result;
}
// 10034798: using guessed type _DWORD __stdcall sub_10034798(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100544D9) --------------------------------------------------------
char __thiscall sub_100544D9(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    HIDWORD(v3) = this[4];
    this[4] = HIDWORD(v3) + 4;
    LODWORD(v3) = (unsigned __int16)*(_WORD *)HIDWORD(v3);
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10035DE6(&v2[2 * v7 + 281], 1, *((unsigned __int16 *)v2 + 23), v2[10]);
    LODWORD(v3) = *(unsigned __int16 *)v2[2 * v7 + 283];
  }
  v3 = (signed int)v3;
  *a2 = v3;
  LOBYTE(v3) = 1;
  a2[1] = HIDWORD(v3);
  return result;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035DE6: using guessed type _DWORD __stdcall sub_10035DE6(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1005462D) --------------------------------------------------------
char __thiscall sub_1005462D(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edx
  signed int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx
  __int64 v8; // rax

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (signed int *)this[4];
    this[4] = v3 + 1;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033109(&v2[2 * v7 + 281], 1, *((_BYTE *)v2 + 45), v2[10]);
    v3 = (signed int *)v2[2 * v7 + 283];
  }
  v8 = *v3;
  *a2 = v8;
  result = 1;
  a2[1] = HIDWORD(v8);
  return result;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100546D8) --------------------------------------------------------
char __thiscall sub_100546D8(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edx
  signed int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx
  __int64 v8; // rax

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (signed int *)this[4];
    this[4] = v3 + 1;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033E92(&v2[2 * v7 + 281], 1, *((_BYTE *)v2 + 45), v2[10]);
    v3 = (signed int *)v2[2 * v7 + 283];
  }
  v8 = *v3;
  *a2 = v8;
  result = 1;
  a2[1] = HIDWORD(v8);
  return result;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10054783) --------------------------------------------------------
char __thiscall sub_10054783(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edx
  signed int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx
  __int64 v8; // rax

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (signed int *)this[4];
    this[4] = v3 + 1;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10034798(&v2[2 * v7 + 281], 1, *((unsigned __int16 *)v2 + 23), v2[10]);
    v3 = (signed int *)v2[2 * v7 + 283];
  }
  v8 = *v3;
  *a2 = v8;
  result = 1;
  a2[1] = HIDWORD(v8);
  return result;
}
// 10034798: using guessed type _DWORD __stdcall sub_10034798(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1005482F) --------------------------------------------------------
char __thiscall sub_1005482F(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edx
  signed int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  char result; // al
  int v7; // ecx
  __int64 v8; // rax

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (signed int *)this[4];
    this[4] = v3 + 1;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10035DE6(&v2[2 * v7 + 281], 1, *((unsigned __int16 *)v2 + 23), v2[10]);
    v3 = (signed int *)v2[2 * v7 + 283];
  }
  v8 = *v3;
  *a2 = v8;
  result = 1;
  a2[1] = HIDWORD(v8);
  return result;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035DE6: using guessed type _DWORD __stdcall sub_10035DE6(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (10054973) --------------------------------------------------------
char __thiscall sub_10054973(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int *v3; // edx
  int v4; // ecx
  unsigned int v5; // ecx
  int v6; // eax
  int v8; // ecx
  int v9; // eax

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (int *)this[4];
    this[4] = v3 + 1;
    v4 = *v3;
    a2[1] = 0;
    *a2 = v4;
  }
  else
  {
    v5 = this[682];
    if ( v5 > 0x63 )
    {
      v6 = v2[2];
      *(_BYTE *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v8 = 2 * v5;
    if ( v2[278] == 1 )
      return sub_10033109(&v2[2 * v8 + 281], 1, *((_BYTE *)v2 + 45), v2[10]);
    v9 = *(_DWORD *)v2[2 * v8 + 283];
    a2[1] = 0;
    *a2 = v9;
  }
  return 1;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10054A2E) --------------------------------------------------------
char __thiscall sub_10054A2E(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int *v3; // edx
  int v4; // ecx
  unsigned int v5; // ecx
  int v6; // eax
  int v8; // ecx
  int v9; // eax

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (int *)this[4];
    this[4] = v3 + 1;
    v4 = *v3;
    a2[1] = 0;
    *a2 = v4;
  }
  else
  {
    v5 = this[682];
    if ( v5 > 0x63 )
    {
      v6 = v2[2];
      *(_BYTE *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v8 = 2 * v5;
    if ( v2[278] == 1 )
      return sub_10033E92(&v2[2 * v8 + 281], 1, *((_BYTE *)v2 + 45), v2[10]);
    v9 = *(_DWORD *)v2[2 * v8 + 283];
    a2[1] = 0;
    *a2 = v9;
  }
  return 1;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10054AE9) --------------------------------------------------------
char __thiscall sub_10054AE9(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int *v3; // edx
  int v4; // ecx
  unsigned int v5; // ecx
  int v6; // eax
  int v8; // ecx
  int v9; // eax

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (int *)this[4];
    this[4] = v3 + 1;
    v4 = *v3;
    a2[1] = 0;
    *a2 = v4;
  }
  else
  {
    v5 = this[682];
    if ( v5 > 0x63 )
    {
      v6 = v2[2];
      *(_BYTE *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v8 = 2 * v5;
    if ( v2[278] == 1 )
      return sub_10034798(&v2[2 * v8 + 281], 1, *((unsigned __int16 *)v2 + 23), v2[10]);
    v9 = *(_DWORD *)v2[2 * v8 + 283];
    a2[1] = 0;
    *a2 = v9;
  }
  return 1;
}
// 10034798: using guessed type _DWORD __stdcall sub_10034798(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10054BA5) --------------------------------------------------------
char __thiscall sub_10054BA5(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int *v3; // edx
  int v4; // ecx
  unsigned int v5; // ecx
  int v6; // eax
  int v8; // ecx
  int v9; // eax

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (int *)this[4];
    this[4] = v3 + 1;
    v4 = *v3;
    a2[1] = 0;
    *a2 = v4;
  }
  else
  {
    v5 = this[682];
    if ( v5 > 0x63 )
    {
      v6 = v2[2];
      *(_BYTE *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v8 = 2 * v5;
    if ( v2[278] == 1 )
      return sub_10035DE6(&v2[2 * v8 + 281], 1, *((unsigned __int16 *)v2 + 23), v2[10]);
    v9 = *(_DWORD *)v2[2 * v8 + 283];
    a2[1] = 0;
    *a2 = v9;
  }
  return 1;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035DE6: using guessed type _DWORD __stdcall sub_10035DE6(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (10054CF9) --------------------------------------------------------
char __thiscall sub_10054CF9(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_DWORD *)this[4];
    this[4] = v3 + 1;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033109(&v2[2 * v7 + 281], 3, *((_BYTE *)v2 + 45), v2[10]);
    *a2 = *(_DWORD *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10054DAA) --------------------------------------------------------
char __thiscall sub_10054DAA(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_DWORD *)this[4];
    this[4] = v3 + 1;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033E92(&v2[2 * v7 + 281], 3, *((_BYTE *)v2 + 45), v2[10]);
    *a2 = *(_DWORD *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10054E5B) --------------------------------------------------------
char __thiscall sub_10054E5B(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_DWORD *)this[4];
    this[4] = v3 + 1;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10034798(&v2[2 * v7 + 281], 3, *((unsigned __int16 *)v2 + 23), v2[10]);
    *a2 = *(_DWORD *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10034798: using guessed type _DWORD __stdcall sub_10034798(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10054F0D) --------------------------------------------------------
char __thiscall sub_10054F0D(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_DWORD *)this[4];
    this[4] = v3 + 1;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10035DE6(&v2[2 * v7 + 281], 3, *((unsigned __int16 *)v2 + 23), v2[10]);
    *a2 = *(_DWORD *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035DE6: using guessed type _DWORD __stdcall sub_10035DE6(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (10055073) --------------------------------------------------------
char __thiscall sub_10055073(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_DWORD *)this[4];
    this[4] = v3 + 1;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033109(&v2[2 * v7 + 281], 3, *((_BYTE *)v2 + 45), v2[10]);
    *a2 = *(_DWORD *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10055190) --------------------------------------------------------
char __thiscall sub_10055190(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_DWORD *)this[4];
    this[4] = v3 + 1;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033E92(&v2[2 * v7 + 281], 3, *((_BYTE *)v2 + 45), v2[10]);
    *a2 = *(_DWORD *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100552AD) --------------------------------------------------------
char __thiscall sub_100552AD(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_DWORD *)this[4];
    this[4] = v3 + 1;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10034798(&v2[2 * v7 + 281], 3, *((unsigned __int16 *)v2 + 23), v2[10]);
    *a2 = *(_DWORD *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10034798: using guessed type _DWORD __stdcall sub_10034798(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100553CB) --------------------------------------------------------
char __thiscall sub_100553CB(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_DWORD *)this[4];
    this[4] = v3 + 1;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10035DE6(&v2[2 * v7 + 281], 3, *((unsigned __int16 *)v2 + 23), v2[10]);
    *a2 = *(_DWORD *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035DE6: using guessed type _DWORD __stdcall sub_10035DE6(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (100554C5) --------------------------------------------------------
char __thiscall sub_100554C5(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_DWORD *)this[4];
    this[4] = v3 + 1;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033109(&v2[2 * v7 + 281], 3, *((_BYTE *)v2 + 45), v2[10]);
    *a2 = *(_DWORD *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10055576) --------------------------------------------------------
char __thiscall sub_10055576(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_DWORD *)this[4];
    this[4] = v3 + 1;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033E92(&v2[2 * v7 + 281], 3, *((_BYTE *)v2 + 45), v2[10]);
    *a2 = *(_DWORD *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10055627) --------------------------------------------------------
char __thiscall sub_10055627(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_DWORD *)this[4];
    this[4] = v3 + 1;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10034798(&v2[2 * v7 + 281], 3, *((unsigned __int16 *)v2 + 23), v2[10]);
    *a2 = *(_DWORD *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10034798: using guessed type _DWORD __stdcall sub_10034798(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100556D9) --------------------------------------------------------
char __thiscall sub_100556D9(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_DWORD *)this[4];
    this[4] = v3 + 1;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10035DE6(&v2[2 * v7 + 281], 3, *((unsigned __int16 *)v2 + 23), v2[10]);
    *a2 = *(_DWORD *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035DE6: using guessed type _DWORD __stdcall sub_10035DE6(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1005581B) --------------------------------------------------------
char __thiscall sub_1005581B(int this, _DWORD *a2)
{
  int *v2; // edx
  int v3; // esi
  int v4; // edx
  unsigned int v5; // edx
  int v6; // eax
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // edx

  if ( *(_DWORD *)(this + 1116) == 1 )
  {
    v2 = *(int **)(this + 16);
    *(_DWORD *)(this + 16) = v2 + 2;
    v3 = *v2;
    v4 = v2[1];
    *a2 = v3;
    a2[1] = v4;
  }
  else
  {
    v5 = *(_DWORD *)(this + 2728);
    if ( v5 > 0x63 )
    {
      v6 = *(_DWORD *)(this + 8);
      *(_BYTE *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, *(_DWORD *)(this + 8));
      return 0;
    }
    v8 = 2 * v5;
    if ( *(_DWORD *)(this + 1112) == 1 )
      return sub_10033109(this + 1124 + 8 * v8, 4, *(_BYTE *)(this + 45), *(_DWORD *)(this + 40));
    v9 = *(_DWORD **)(this + 8 * v8 + 1132);
    v10 = v9[1];
    *a2 = *v9;
    a2[1] = v10;
  }
  return 1;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100558D6) --------------------------------------------------------
char __thiscall sub_100558D6(int this, _DWORD *a2)
{
  int *v2; // edx
  int v3; // esi
  int v4; // edx
  unsigned int v5; // edx
  int v6; // eax
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // edx

  if ( *(_DWORD *)(this + 1116) == 1 )
  {
    v2 = *(int **)(this + 16);
    *(_DWORD *)(this + 16) = v2 + 2;
    v3 = *v2;
    v4 = v2[1];
    *a2 = v3;
    a2[1] = v4;
  }
  else
  {
    v5 = *(_DWORD *)(this + 2728);
    if ( v5 > 0x63 )
    {
      v6 = *(_DWORD *)(this + 8);
      *(_BYTE *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, *(_DWORD *)(this + 8));
      return 0;
    }
    v8 = 2 * v5;
    if ( *(_DWORD *)(this + 1112) == 1 )
      return sub_10033E92(this + 1124 + 8 * v8, 4, *(_BYTE *)(this + 45), *(_DWORD *)(this + 40));
    v9 = *(_DWORD **)(this + 8 * v8 + 1132);
    v10 = v9[1];
    *a2 = *v9;
    a2[1] = v10;
  }
  return 1;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10055991) --------------------------------------------------------
char __thiscall sub_10055991(int this, _DWORD *a2)
{
  int *v2; // edx
  int v3; // esi
  int v4; // edx
  unsigned int v5; // edx
  int v6; // eax
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // edx

  if ( *(_DWORD *)(this + 1116) == 1 )
  {
    v2 = *(int **)(this + 16);
    *(_DWORD *)(this + 16) = v2 + 2;
    v3 = *v2;
    v4 = v2[1];
    *a2 = v3;
    a2[1] = v4;
  }
  else
  {
    v5 = *(_DWORD *)(this + 2728);
    if ( v5 > 0x63 )
    {
      v6 = *(_DWORD *)(this + 8);
      *(_BYTE *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, *(_DWORD *)(this + 8));
      return 0;
    }
    v8 = 2 * v5;
    if ( *(_DWORD *)(this + 1112) == 1 )
      return sub_10034798(this + 1124 + 8 * v8, 4, *(unsigned __int16 *)(this + 46), *(_DWORD *)(this + 40));
    v9 = *(_DWORD **)(this + 8 * v8 + 1132);
    v10 = v9[1];
    *a2 = *v9;
    a2[1] = v10;
  }
  return 1;
}
// 10034798: using guessed type _DWORD __stdcall sub_10034798(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10055A4D) --------------------------------------------------------
char __thiscall sub_10055A4D(int this, _DWORD *a2)
{
  int *v2; // edx
  int v3; // esi
  int v4; // edx
  unsigned int v5; // edx
  int v6; // eax
  int v8; // edx
  _DWORD *v9; // eax
  int v10; // edx

  if ( *(_DWORD *)(this + 1116) == 1 )
  {
    v2 = *(int **)(this + 16);
    *(_DWORD *)(this + 16) = v2 + 2;
    v3 = *v2;
    v4 = v2[1];
    *a2 = v3;
    a2[1] = v4;
  }
  else
  {
    v5 = *(_DWORD *)(this + 2728);
    if ( v5 > 0x63 )
    {
      v6 = *(_DWORD *)(this + 8);
      *(_BYTE *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, *(_DWORD *)(this + 8));
      return 0;
    }
    v8 = 2 * v5;
    if ( *(_DWORD *)(this + 1112) == 1 )
      return sub_10035DE6(this + 1124 + 8 * v8, 4, *(unsigned __int16 *)(this + 46), *(_DWORD *)(this + 40));
    v9 = *(_DWORD **)(this + 8 * v8 + 1132);
    v10 = v9[1];
    *a2 = *v9;
    a2[1] = v10;
  }
  return 1;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035DE6: using guessed type _DWORD __stdcall sub_10035DE6(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (10055BAD) --------------------------------------------------------
char __thiscall sub_10055BAD(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edx
  int *v3; // esi
  int v4; // edx
  unsigned int v5; // ecx
  int v6; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // edx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (int *)this[4];
    this[4] = v3 + 2;
    v4 = *v3;
    a2[1] = v3[1];
    *a2 = v4;
  }
  else
  {
    v5 = this[682];
    if ( v5 > 0x63 )
    {
      v6 = v2[2];
      *(_BYTE *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v8 = 2 * v5;
    if ( v2[278] == 1 )
      return sub_10033109(&v2[2 * v8 + 281], 2, *((_BYTE *)v2 + 45), v2[10]);
    v9 = (_DWORD *)v2[2 * v8 + 283];
    v10 = v9[1];
    *a2 = *v9;
    a2[1] = v10;
  }
  return 1;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10055C6D) --------------------------------------------------------
char __thiscall sub_10055C6D(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edx
  int *v3; // esi
  int v4; // edx
  unsigned int v5; // ecx
  int v6; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // edx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (int *)this[4];
    this[4] = v3 + 2;
    v4 = *v3;
    a2[1] = v3[1];
    *a2 = v4;
  }
  else
  {
    v5 = this[682];
    if ( v5 > 0x63 )
    {
      v6 = v2[2];
      *(_BYTE *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v8 = 2 * v5;
    if ( v2[278] == 1 )
      return sub_10033E92(&v2[2 * v8 + 281], 2, *((_BYTE *)v2 + 45), v2[10]);
    v9 = (_DWORD *)v2[2 * v8 + 283];
    v10 = v9[1];
    *a2 = *v9;
    a2[1] = v10;
  }
  return 1;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10055D2D) --------------------------------------------------------
char __thiscall sub_10055D2D(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edx
  int *v3; // esi
  int v4; // edx
  unsigned int v5; // ecx
  int v6; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // edx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (int *)this[4];
    this[4] = v3 + 2;
    v4 = *v3;
    a2[1] = v3[1];
    *a2 = v4;
  }
  else
  {
    v5 = this[682];
    if ( v5 > 0x63 )
    {
      v6 = v2[2];
      *(_BYTE *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v8 = 2 * v5;
    if ( v2[278] == 1 )
      return sub_10034798(&v2[2 * v8 + 281], 2, *((unsigned __int16 *)v2 + 23), v2[10]);
    v9 = (_DWORD *)v2[2 * v8 + 283];
    v10 = v9[1];
    *a2 = *v9;
    a2[1] = v10;
  }
  return 1;
}
// 10034798: using guessed type _DWORD __stdcall sub_10034798(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10055DEE) --------------------------------------------------------
char __thiscall sub_10055DEE(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edx
  int *v3; // esi
  int v4; // edx
  unsigned int v5; // ecx
  int v6; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // edx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (int *)this[4];
    this[4] = v3 + 2;
    v4 = *v3;
    a2[1] = v3[1];
    *a2 = v4;
  }
  else
  {
    v5 = this[682];
    if ( v5 > 0x63 )
    {
      v6 = v2[2];
      *(_BYTE *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v8 = 2 * v5;
    if ( v2[278] == 1 )
      return sub_10035DE6(&v2[2 * v8 + 281], 2, *((unsigned __int16 *)v2 + 23), v2[10]);
    v9 = (_DWORD *)v2[2 * v8 + 283];
    v10 = v9[1];
    *a2 = *v9;
    a2[1] = v10;
  }
  return 1;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035DE6: using guessed type _DWORD __stdcall sub_10035DE6(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (10055F53) --------------------------------------------------------
char __thiscall sub_10055F53(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edx
  int *v3; // esi
  int v4; // edx
  unsigned int v5; // ecx
  int v6; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // edx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (int *)this[4];
    this[4] = v3 + 2;
    v4 = *v3;
    a2[1] = v3[1];
    *a2 = v4;
  }
  else
  {
    v5 = this[682];
    if ( v5 > 0x63 )
    {
      v6 = v2[2];
      *(_BYTE *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v8 = 2 * v5;
    if ( v2[278] == 1 )
      return sub_10033109(&v2[2 * v8 + 281], 2, *((_BYTE *)v2 + 45), v2[10]);
    v9 = (_DWORD *)v2[2 * v8 + 283];
    v10 = v9[1];
    *a2 = *v9;
    a2[1] = v10;
  }
  return 1;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10056013) --------------------------------------------------------
char __thiscall sub_10056013(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edx
  int *v3; // esi
  int v4; // edx
  unsigned int v5; // ecx
  int v6; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // edx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (int *)this[4];
    this[4] = v3 + 2;
    v4 = *v3;
    a2[1] = v3[1];
    *a2 = v4;
  }
  else
  {
    v5 = this[682];
    if ( v5 > 0x63 )
    {
      v6 = v2[2];
      *(_BYTE *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v8 = 2 * v5;
    if ( v2[278] == 1 )
      return sub_10033E92(&v2[2 * v8 + 281], 2, *((_BYTE *)v2 + 45), v2[10]);
    v9 = (_DWORD *)v2[2 * v8 + 283];
    v10 = v9[1];
    *a2 = *v9;
    a2[1] = v10;
  }
  return 1;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100560D3) --------------------------------------------------------
char __thiscall sub_100560D3(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edx
  int *v3; // esi
  int v4; // edx
  unsigned int v5; // ecx
  int v6; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // edx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (int *)this[4];
    this[4] = v3 + 2;
    v4 = *v3;
    a2[1] = v3[1];
    *a2 = v4;
  }
  else
  {
    v5 = this[682];
    if ( v5 > 0x63 )
    {
      v6 = v2[2];
      *(_BYTE *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v8 = 2 * v5;
    if ( v2[278] == 1 )
      return sub_10034798(&v2[2 * v8 + 281], 2, *((unsigned __int16 *)v2 + 23), v2[10]);
    v9 = (_DWORD *)v2[2 * v8 + 283];
    v10 = v9[1];
    *a2 = *v9;
    a2[1] = v10;
  }
  return 1;
}
// 10034798: using guessed type _DWORD __stdcall sub_10034798(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10056194) --------------------------------------------------------
char __thiscall sub_10056194(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edx
  int *v3; // esi
  int v4; // edx
  unsigned int v5; // ecx
  int v6; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  int v10; // edx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (int *)this[4];
    this[4] = v3 + 2;
    v4 = *v3;
    a2[1] = v3[1];
    *a2 = v4;
  }
  else
  {
    v5 = this[682];
    if ( v5 > 0x63 )
    {
      v6 = v2[2];
      *(_BYTE *)(v6 + 28) = 1;
      *(_DWORD *)(v6 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v8 = 2 * v5;
    if ( v2[278] == 1 )
      return sub_10035DE6(&v2[2 * v8 + 281], 2, *((unsigned __int16 *)v2 + 23), v2[10]);
    v9 = (_DWORD *)v2[2 * v8 + 283];
    v10 = v9[1];
    *a2 = *v9;
    a2[1] = v10;
  }
  return 1;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035DE6: using guessed type _DWORD __stdcall sub_10035DE6(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (100562F9) --------------------------------------------------------
char __thiscall sub_100562F9(_DWORD *this, _WORD *a2)
{
  _DWORD *v2; // esi
  _WORD *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_WORD *)this[4];
    this[4] = v3 + 2;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033109(&v2[2 * v7 + 281], 1, *((_BYTE *)v2 + 45), v2[10]);
    *a2 = *(_WORD *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100563AF) --------------------------------------------------------
char __thiscall sub_100563AF(_DWORD *this, _WORD *a2)
{
  _DWORD *v2; // esi
  _WORD *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_WORD *)this[4];
    this[4] = v3 + 2;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10033E92(&v2[2 * v7 + 281], 1, *((_BYTE *)v2 + 45), v2[10]);
    *a2 = *(_WORD *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10056465) --------------------------------------------------------
char __thiscall sub_10056465(_DWORD *this, _WORD *a2)
{
  _DWORD *v2; // esi
  _WORD *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_WORD *)this[4];
    this[4] = v3 + 2;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10034798(&v2[2 * v7 + 281], 1, *((unsigned __int16 *)v2 + 23), v2[10]);
    *a2 = *(_WORD *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10034798: using guessed type _DWORD __stdcall sub_10034798(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1005651C) --------------------------------------------------------
char __thiscall sub_1005651C(_DWORD *this, _WORD *a2)
{
  _DWORD *v2; // esi
  _WORD *v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  int v7; // ecx

  v2 = this;
  if ( this[279] == 1 )
  {
    v3 = (_WORD *)this[4];
    this[4] = v3 + 2;
    *a2 = *v3;
  }
  else
  {
    v4 = this[682];
    if ( v4 > 0x63 )
    {
      v5 = v2[2];
      *(_BYTE *)(v5 + 28) = 1;
      *(_DWORD *)(v5 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
    }
    v7 = 2 * v4;
    if ( v2[278] == 1 )
      return sub_10035DE6(&v2[2 * v7 + 281], 1, *((unsigned __int16 *)v2 + 23), v2[10]);
    *a2 = *(_WORD *)v2[2 * v7 + 283];
  }
  return 1;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035DE6: using guessed type _DWORD __stdcall sub_10035DE6(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (100566CF) --------------------------------------------------------
bool __cdecl sub_100566CF(__int16 a1)
{
  return a1 == 99 || a1 == 67;
}

//----- (100566F0) --------------------------------------------------------
bool __cdecl sub_100566F0(__int16 a1)
{
  return a1 == 99 || a1 == 67;
}

//----- (10056711) --------------------------------------------------------
bool __cdecl sub_10056711(char a1)
{
  return a1 == 100 || a1 == 105 || a1 == 111 || a1 == 117 || a1 == 120 || a1 == 88 || a1 == 42;
}

//----- (10056748) --------------------------------------------------------
bool __cdecl sub_10056748(char a1)
{
  return a1 == 100 || a1 == 105 || a1 == 111 || a1 == 117 || a1 == 120 || a1 == 88 || a1 == 42;
}

//----- (1005677F) --------------------------------------------------------
bool __cdecl sub_1005677F(__int16 a1)
{
  return a1 == 100 || a1 == 105 || a1 == 111 || a1 == 117 || a1 == 120 || a1 == 88 || a1 == 42;
}

//----- (100567C8) --------------------------------------------------------
bool __cdecl sub_100567C8(__int16 a1)
{
  return a1 == 100 || a1 == 105 || a1 == 111 || a1 == 117 || a1 == 120 || a1 == 88 || a1 == 42;
}

//----- (10056811) --------------------------------------------------------
bool __cdecl sub_10056811(char a1, unsigned int a2)
{
  if ( !(a1 & 4) )
  {
    if ( !(a1 & 1) )
      return 0;
    if ( !(a1 & 2) )
      return a2 > 0x7FFFFFFF;
    if ( a2 <= 0x80000000 )
      return 0;
  }
  return 1;
}

//----- (100568D4) --------------------------------------------------------
bool __cdecl sub_100568D4(__int16 a1)
{
  return a1 == 115 || a1 == 83;
}

//----- (100568F5) --------------------------------------------------------
bool __cdecl sub_100568F5(__int16 a1)
{
  return a1 == 115 || a1 == 83;
}

//----- (10056916) --------------------------------------------------------
bool __cdecl sub_10056916(int a1, int a2, char a3, int a4)
{
  return a4 != 2 && (a4 == 3 || a4 == 12 || a4 != 13 && a3 != 99 && a3 != 115);
}

//----- (10056953) --------------------------------------------------------
char __cdecl sub_10056953(char a1, int a2, __int16 a3, int a4)
{
  char v4; // al

  if ( a4 == 2 )
    return 0;
  if ( a4 == 3 || a4 == 12 || a4 == 13 )
    return 1;
  v4 = 1;
  if ( a3 == 99 || a3 == 115 )
    v4 = 0;
  return ((a1 & 4) != 0) ^ v4;
}

//----- (100569B4) --------------------------------------------------------
_DWORD *__cdecl sub_100569B4(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = a2;
  a1[1] = a3;
  if ( a3 )
    *a3 = a2;
  return result;
}

//----- (100569D5) --------------------------------------------------------
_DWORD *__cdecl sub_100569D5(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = a2;
  a1[1] = a3;
  if ( a3 )
    *a3 = a2;
  return result;
}

//----- (100569F6) --------------------------------------------------------
signed int __cdecl sub_100569F6(int a1, char *a2, char **a3, signed int a4, unsigned __int8 a5)
{
  unsigned int v5; // esi
  int v6; // ecx
  char v7; // bl
  char *v8; // edi
  int v9; // eax
  char v10; // al
  char *v11; // edi
  unsigned int v12; // edx
  unsigned int v13; // ecx
  bool v14; // cf
  signed int result; // eax
  int v16; // esi
  char *v17; // [esp+8h] [ebp-14h]
  unsigned int v18; // [esp+10h] [ebp-Ch]
  int v19; // [esp+14h] [ebp-8h]
  char v20; // [esp+18h] [ebp-4h]

  if ( !(unsigned __int8)sub_10034A9A(&a2) )
    goto LABEL_6;
  v5 = a4;
  if ( a4 && (a4 < 2 || a4 > 36) )
  {
    *(_BYTE *)(a1 + 28) = 1;
    *(_DWORD *)(a1 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a1);
LABEL_6:
    if ( a3 )
      *a3 = a2;
    return 0;
  }
  v6 = 0;
  v17 = a2;
  v18 = 0;
  v7 = *a2;
  v8 = a2 + 1;
  v20 = v7;
  ++a2;
  v19 = a5;
  if ( v7 == 45 )
  {
    v19 = a5 | 2;
LABEL_11:
    v7 = *v8++;
    v20 = v7;
    a2 = v8;
    goto LABEL_12;
  }
  if ( v7 == 43 )
    goto LABEL_11;
LABEL_12:
  if ( a4 && a4 != 16 )
    goto LABEL_31;
  if ( (unsigned __int8)(v7 - 48) > 9u )
  {
    if ( (unsigned __int8)(v7 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(v7 - 65) > 0x19u )
        goto LABEL_29;
      v9 = v7 - 55;
    }
    else
    {
      v9 = v7 - 87;
    }
  }
  else
  {
    v9 = v7 - 48;
  }
  if ( !v9 )
  {
    v10 = *v8;
    v11 = v8 + 1;
    a2 = v11;
    if ( v10 == 120 || v10 == 88 )
    {
      if ( !a4 )
        v5 = 16;
      v7 = *v11;
      v8 = v11 + 1;
      v20 = v7;
      a2 = v8;
    }
    else
    {
      if ( !a4 )
        v5 = 8;
      sub_100341AD(v10);
      v8 = a2;
      v6 = 0;
    }
    goto LABEL_31;
  }
LABEL_29:
  if ( !a4 )
    v5 = 10;
LABEL_31:
  while ( 1 )
  {
    if ( (unsigned __int8)(v7 - 48) > 9u )
    {
      if ( (unsigned __int8)(v7 - 97) > 0x19u )
        v12 = (unsigned __int8)(v7 - 65) > 0x19u ? -1 : v7 - 55;
      else
        v12 = v7 - 87;
    }
    else
    {
      v12 = v7 - 48;
    }
    if ( v12 >= v5 )
      break;
    v13 = v5 * v6;
    v7 = *v8;
    v20 = *v8;
    v14 = 0xFFFFFFFF / v5 < v18;
    v18 = v13 + v12;
    v19 |= 4 * (v14 || v13 + v12 < v13) | 8;
    ++v8;
    v6 = v13 + v12;
    a2 = v8;
  }
  sub_100341AD(v20);
  if ( !(v19 & 8) )
  {
    if ( a3 )
      *a3 = v17;
    return 0;
  }
  v16 = v18;
  if ( !(unsigned __int8)sub_10033591(v19, v18) )
  {
    if ( v19 & 2 )
      v16 = -v18;
    goto LABEL_56;
  }
  *(_BYTE *)(a1 + 28) = 1;
  *(_DWORD *)(a1 + 24) = 34;
  if ( !(v19 & 1) )
  {
    v16 = -1;
LABEL_56:
    if ( a3 )
      *a3 = a2;
    return v16;
  }
  if ( v19 & 2 )
  {
    if ( a3 )
      *a3 = a2;
    result = 2147483648;
  }
  else
  {
    if ( a3 )
      *a3 = a2;
    result = 0x7FFFFFFF;
  }
  return result;
}
// 10033591: using guessed type _DWORD __cdecl sub_10033591(char, _DWORD);
// 100341AD: using guessed type _DWORD __stdcall sub_100341AD(char);
// 10034A9A: using guessed type int __thiscall sub_10034A9A(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10056C88) --------------------------------------------------------
signed int __cdecl sub_10056C88(int a1, _WORD *a2, _DWORD *a3, signed int a4, unsigned __int8 a5)
{
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // esi
  _WORD *v8; // ecx
  signed int v9; // edx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  _WORD *v14; // ecx
  unsigned int v15; // edi
  signed int v16; // eax
  bool v17; // cf
  unsigned int v18; // ecx
  int v19; // ecx
  unsigned int v20; // edx
  BOOL v21; // ecx
  signed int result; // eax
  int v23; // esi
  _WORD *v24; // [esp+Ch] [ebp-90h]
  unsigned int v25; // [esp+98h] [ebp-4h]

  if ( !(unsigned __int8)sub_10033CD5(&a2) )
    goto LABEL_6;
  v5 = a4;
  if ( a4 && (a4 < 2 || a4 > 36) )
  {
    *(_BYTE *)(a1 + 28) = 1;
    *(_DWORD *)(a1 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a1);
LABEL_6:
    if ( a3 )
      *a3 = a2;
    return 0;
  }
  v25 = 0;
  v6 = a5;
  v24 = a2;
  v7 = (unsigned __int16)*a2;
  v8 = a2 + 1;
  ++a2;
  if ( v7 == 45 )
  {
    v6 = a5 | 2;
LABEL_11:
    LOWORD(v7) = *v8;
    ++v8;
    a2 = v8;
    goto LABEL_12;
  }
  if ( v7 == 43 )
    goto LABEL_11;
LABEL_12:
  v9 = 48;
  if ( !a4 || a4 == 16 )
  {
    if ( (unsigned __int16)v7 >= 0x30u )
    {
      if ( (unsigned __int16)v7 < 0x3Au )
      {
LABEL_16:
        v10 = (unsigned __int16)v7 - v9;
        goto LABEL_53;
      }
      if ( (unsigned __int16)v7 >= 0xFF10u )
      {
        if ( (unsigned __int16)v7 < 0xFF1Au )
        {
          v10 = (unsigned __int16)v7 - 65296;
LABEL_53:
          if ( v10 != -1 )
            goto LABEL_61;
          goto LABEL_54;
        }
      }
      else
      {
        v9 = 1632;
        if ( (unsigned __int16)v7 >= 0x660u )
        {
          if ( (unsigned __int16)v7 < 0x66Au )
            goto LABEL_16;
          v9 = 1776;
          if ( (unsigned __int16)v7 >= 0x6F0u )
          {
            if ( (unsigned __int16)v7 < 0x6FAu )
              goto LABEL_16;
            v9 = 2406;
            if ( (unsigned __int16)v7 >= 0x966u )
            {
              if ( (unsigned __int16)v7 < 0x970u )
                goto LABEL_16;
              v9 = 2534;
              if ( (unsigned __int16)v7 >= 0x9E6u )
              {
                if ( (unsigned __int16)v7 < 0x9F0u )
                  goto LABEL_16;
                v9 = 2662;
                if ( (unsigned __int16)v7 >= 0xA66u )
                {
                  if ( (unsigned __int16)v7 < 0xA70u )
                    goto LABEL_16;
                  v9 = 2790;
                  if ( (unsigned __int16)v7 >= 0xAE6u )
                  {
                    if ( (unsigned __int16)v7 < 0xAF0u )
                      goto LABEL_16;
                    v9 = 2918;
                    if ( (unsigned __int16)v7 >= 0xB66u )
                    {
                      if ( (unsigned __int16)v7 < 0xB70u )
                        goto LABEL_16;
                      v9 = 3174;
                      if ( (unsigned __int16)v7 >= 0xC66u )
                      {
                        if ( (unsigned __int16)v7 < 0xC70u )
                          goto LABEL_16;
                        v9 = 3302;
                        if ( (unsigned __int16)v7 >= 0xCE6u )
                        {
                          if ( (unsigned __int16)v7 < 0xCF0u )
                            goto LABEL_16;
                          v9 = 3430;
                          if ( (unsigned __int16)v7 >= 0xD66u )
                          {
                            if ( (unsigned __int16)v7 < 0xD70u )
                              goto LABEL_16;
                            v9 = 3664;
                            if ( (unsigned __int16)v7 >= 0xE50u )
                            {
                              if ( (unsigned __int16)v7 < 0xE5Au )
                                goto LABEL_16;
                              v9 = 3792;
                              if ( (unsigned __int16)v7 >= 0xED0u )
                              {
                                if ( (unsigned __int16)v7 < 0xEDAu )
                                  goto LABEL_16;
                                v9 = 3872;
                                if ( (unsigned __int16)v7 >= 0xF20u )
                                {
                                  if ( (unsigned __int16)v7 < 0xF2Au )
                                    goto LABEL_16;
                                  v9 = 4160;
                                  if ( (unsigned __int16)v7 >= 0x1040u )
                                  {
                                    if ( (unsigned __int16)v7 < 0x104Au )
                                      goto LABEL_16;
                                    v9 = 6112;
                                    if ( (unsigned __int16)v7 >= 0x17E0u )
                                    {
                                      if ( (unsigned __int16)v7 < 0x17EAu )
                                        goto LABEL_16;
                                      v9 = 6160;
                                      if ( (unsigned __int16)v7 >= 0x1810u && (unsigned __int16)v7 < 0x181Au )
                                        goto LABEL_16;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_54:
    v11 = (unsigned __int16)v7;
    if ( (unsigned __int16)v7 < 0x41u || (unsigned __int16)v7 > 0x5Au )
    {
      v12 = (unsigned __int16)v7 - 97;
      if ( v12 > 0x19 )
        goto LABEL_70;
    }
    else
    {
      v12 = (unsigned __int16)v7 - 97;
    }
    if ( v12 <= 0x19 )
      v11 = (unsigned __int16)v7 - 32;
    v8 = a2;
    v10 = v11 - 55;
LABEL_61:
    if ( !v10 )
    {
      v13 = (unsigned __int16)*v8;
      v14 = v8 + 1;
      a2 = v14;
      if ( v13 == 120 || v13 == 88 )
      {
        if ( !a4 )
        {
          v5 = 16;
          a4 = 16;
        }
        LOWORD(v7) = *v14;
        a2 = v14 + 1;
      }
      else
      {
        if ( !a4 )
        {
          v5 = 8;
          a4 = 8;
        }
        sub_10034239(v13);
      }
      goto LABEL_72;
    }
LABEL_70:
    if ( !a4 )
    {
      v5 = 10;
      a4 = 10;
    }
  }
LABEL_72:
  v15 = 0xFFFFFFFF / v5;
  while ( 1 )
  {
    v16 = 48;
    if ( (unsigned __int16)v7 < 0x30u )
      goto LABEL_111;
    if ( (unsigned __int16)v7 < 0x3Au )
      goto LABEL_110;
    v16 = 65296;
    if ( (unsigned __int16)v7 >= 0xFF10u )
    {
      v17 = (unsigned __int16)v7 < 0xFF1Au;
LABEL_109:
      if ( v17 )
      {
LABEL_110:
        v18 = (unsigned __int16)v7 - v16;
        if ( v18 != -1 )
          goto LABEL_119;
        goto LABEL_111;
      }
      goto LABEL_111;
    }
    v16 = 1632;
    if ( (unsigned __int16)v7 >= 0x660u )
    {
      if ( (unsigned __int16)v7 < 0x66Au )
        goto LABEL_110;
      v16 = 1776;
      if ( (unsigned __int16)v7 >= 0x6F0u )
      {
        if ( (unsigned __int16)v7 < 0x6FAu )
          goto LABEL_110;
        v16 = 2406;
        if ( (unsigned __int16)v7 >= 0x966u )
        {
          if ( (unsigned __int16)v7 < 0x970u )
            goto LABEL_110;
          v16 = 2534;
          if ( (unsigned __int16)v7 >= 0x9E6u )
          {
            if ( (unsigned __int16)v7 < 0x9F0u )
              goto LABEL_110;
            v16 = 2662;
            if ( (unsigned __int16)v7 >= 0xA66u )
            {
              if ( (unsigned __int16)v7 < 0xA70u )
                goto LABEL_110;
              v16 = 2790;
              if ( (unsigned __int16)v7 >= 0xAE6u )
              {
                if ( (unsigned __int16)v7 < 0xAF0u )
                  goto LABEL_110;
                v16 = 2918;
                if ( (unsigned __int16)v7 >= 0xB66u )
                {
                  if ( (unsigned __int16)v7 < 0xB70u )
                    goto LABEL_110;
                  v16 = 3174;
                  if ( (unsigned __int16)v7 >= 0xC66u )
                  {
                    if ( (unsigned __int16)v7 < 0xC70u )
                      goto LABEL_110;
                    v16 = 3302;
                    if ( (unsigned __int16)v7 >= 0xCE6u )
                    {
                      if ( (unsigned __int16)v7 < 0xCF0u )
                        goto LABEL_110;
                      v16 = 3430;
                      if ( (unsigned __int16)v7 >= 0xD66u )
                      {
                        if ( (unsigned __int16)v7 < 0xD70u )
                          goto LABEL_110;
                        v16 = 3664;
                        if ( (unsigned __int16)v7 >= 0xE50u )
                        {
                          if ( (unsigned __int16)v7 < 0xE5Au )
                            goto LABEL_110;
                          v16 = 3792;
                          if ( (unsigned __int16)v7 >= 0xED0u )
                          {
                            if ( (unsigned __int16)v7 < 0xEDAu )
                              goto LABEL_110;
                            v16 = 3872;
                            if ( (unsigned __int16)v7 >= 0xF20u )
                            {
                              if ( (unsigned __int16)v7 < 0xF2Au )
                                goto LABEL_110;
                              v16 = 4160;
                              if ( (unsigned __int16)v7 >= 0x1040u )
                              {
                                if ( (unsigned __int16)v7 < 0x104Au )
                                  goto LABEL_110;
                                v16 = 6112;
                                if ( (unsigned __int16)v7 >= 0x17E0u )
                                {
                                  if ( (unsigned __int16)v7 < 0x17EAu )
                                    goto LABEL_110;
                                  v16 = 6160;
                                  if ( (unsigned __int16)v7 >= 0x1810u )
                                  {
                                    v17 = (unsigned __int16)v7 < 0x181Au;
                                    goto LABEL_109;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_111:
    if ( ((v19 = (unsigned __int16)v7, (unsigned __int16)v7 < 0x41u) || (unsigned __int16)v7 > 0x5Au)
      && ((unsigned __int16)v7 < 0x61u || (unsigned __int16)v7 > 0x7Au) )
    {
      v18 = -1;
    }
    else
    {
      if ( (unsigned __int16)(v7 - 97) <= 0x19u )
        v19 = (unsigned __int16)v7 - 32;
      v18 = v19 - 55;
    }
LABEL_119:
    if ( v18 >= a4 )
      break;
    v20 = a4 * v25 + v18;
    v21 = v20 < a4 * v25;
    v17 = v15 < v25;
    v25 = v20;
    v6 |= 4 * (v17 || v21) | 8;
    LOWORD(v7) = *a2;
    ++a2;
  }
  sub_10034239(v7);
  if ( v6 & 8 )
  {
    v23 = v25;
    if ( (unsigned __int8)sub_10033591(v6, v25) )
    {
      *(_BYTE *)(a1 + 28) = 1;
      *(_DWORD *)(a1 + 24) = 34;
      if ( v6 & 1 )
      {
        if ( v6 & 2 )
        {
          if ( a3 )
            *a3 = a2;
          result = 2147483648;
        }
        else
        {
          if ( a3 )
            *a3 = a2;
          result = 0x7FFFFFFF;
        }
        return result;
      }
      v23 = -1;
    }
    else if ( v6 & 2 )
    {
      v23 = -v25;
    }
    if ( a3 )
      *a3 = a2;
    return v23;
  }
  if ( a3 )
    *a3 = v24;
  return 0;
}
// 10033591: using guessed type _DWORD __cdecl sub_10033591(char, _DWORD);
// 10033CD5: using guessed type int __thiscall sub_10033CD5(_DWORD);
// 10034239: using guessed type _DWORD __stdcall sub_10034239(__int16);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10057754) --------------------------------------------------------
_DWORD *__thiscall sub_10057754(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi
  int v3; // eax
  _DWORD *result; // eax

  v1 = this;
  v2 = this[257];
  v3 = sub_10035AD0(this);
  if ( v2 )
    result = (_DWORD *)(v2 + v3);
  else
    result = (_DWORD *)((char *)v1 + v3);
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (10057779) --------------------------------------------------------
char __thiscall sub_10057779(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10036089(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 0;
  if ( v18 == 8 )
    sub_100332BC(v15, v14, a2);
  else
    sub_10036147(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
  {
    *(_BYTE *)--v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 100332BC: using guessed type _DWORD __stdcall sub_100332BC(_DWORD, _DWORD, _DWORD);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);
// 10036147: using guessed type _DWORD __stdcall sub_10036147(_DWORD, _DWORD);

//----- (10057969) --------------------------------------------------------
char __thiscall sub_10057969(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  unsigned int *v6; // edi
  char v7; // al
  unsigned int v8; // edx
  signed __int64 v9; // rcx
  bool v10; // sf
  int v11; // ST10_4
  int v12; // ST0C_4
  int v13; // [esp+8h] [ebp-Ch]
  __int64 v14; // [esp+Ch] [ebp-8h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v13 = v3;
  v14 = 0i64;
  switch ( v3 )
  {
    case 1:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10033717(&v14);
      else
        v7 = sub_10033D2A(&v14);
      break;
    case 2:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10033EE2(&v14);
      else
        v7 = sub_1003565C(&v14);
      break;
    case 4:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_1003557B(&v14);
      else
        v7 = sub_10035260(&v14);
      break;
    case 8:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10035990(&v14);
      else
        v7 = sub_10036250(&v14);
      break;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  if ( !v7 )
    return 0;
  if ( (unsigned __int8)sub_1003618D(v2) )
  {
    v8 = *v6;
    v9 = __PAIR__(v14, HIDWORD(v14));
    if ( (*v6 >> 4) & 1 && v14 < 0 )
    {
      HIDWORD(v9) = -(signed int)v14;
      LODWORD(v9) = (unsigned __int64)-v14 >> 32;
      v8 |= 0x40u;
      *v6 = v8;
    }
    v10 = v2[9] < 0;
    HIDWORD(v14) = v9;
    if ( v10 )
    {
      v2[9] = 1;
    }
    else
    {
      v11 = v2[2];
      v12 = v2[9];
      *v6 = v8 & 0xFFFFFFF7;
      sub_10036089(v12, v11);
      LODWORD(v9) = HIDWORD(v14);
    }
    if ( !v9 )
      *v6 &= 0xFFFFFFDF;
    *((_BYTE *)v2 + 56) = 0;
    if ( v13 == 8 )
      sub_10033F91(HIDWORD(v9), v9, a2);
    else
      sub_100345DB(HIDWORD(v9), a2);
    if ( (*v6 >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
    {
      *(_BYTE *)--v2[12] = 48;
      ++v2[13];
    }
  }
  return 1;
}
// 10033717: using guessed type _DWORD __stdcall sub_10033717(_DWORD);
// 10033D2A: using guessed type _DWORD __stdcall sub_10033D2A(_DWORD);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10033EE2: using guessed type _DWORD __stdcall sub_10033EE2(_DWORD);
// 10033F91: using guessed type _DWORD __stdcall sub_10033F91(_DWORD, _DWORD, _DWORD);
// 100345DB: using guessed type _DWORD __stdcall sub_100345DB(_DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035260: using guessed type _DWORD __stdcall sub_10035260(_DWORD);
// 1003557B: using guessed type _DWORD __stdcall sub_1003557B(_DWORD);
// 1003565C: using guessed type _DWORD __stdcall sub_1003565C(_DWORD);
// 10035990: using guessed type _DWORD __stdcall sub_10035990(_DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);
// 1003618D: using guessed type int __thiscall sub_1003618D(_DWORD);
// 10036250: using guessed type _DWORD __stdcall sub_10036250(_DWORD);

//----- (10057B6C) --------------------------------------------------------
char __thiscall sub_10057B6C(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10036089(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 0;
  if ( v18 == 8 )
    sub_100360A2(v15, v14, a2);
  else
    sub_1003607F(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
  {
    *(_BYTE *)--v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 1003607F: using guessed type _DWORD __stdcall sub_1003607F(_DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);
// 100360A2: using guessed type _DWORD __stdcall sub_100360A2(_DWORD, _DWORD, _DWORD);

//----- (10057D5C) --------------------------------------------------------
char __thiscall sub_10057D5C(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10036089(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 0;
  if ( v18 == 8 )
    sub_100341F8(v15, v14, a2);
  else
    sub_10033EFB(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
  {
    *(_BYTE *)--v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10033EFB: using guessed type _DWORD __stdcall sub_10033EFB(_DWORD, _DWORD);
// 100341F8: using guessed type _DWORD __stdcall sub_100341F8(_DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (10057F4C) --------------------------------------------------------
char __thiscall sub_10057F4C(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  unsigned int *v6; // edi
  char v7; // al
  unsigned int v8; // edx
  signed __int64 v9; // rcx
  bool v10; // sf
  int v11; // ST10_4
  int v12; // ST0C_4
  int v13; // [esp+8h] [ebp-Ch]
  __int64 v14; // [esp+Ch] [ebp-8h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v13 = v3;
  v14 = 0i64;
  switch ( v3 )
  {
    case 1:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10035463(&v14);
      else
        v7 = sub_1003350A(&v14);
      break;
    case 2:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10033343(&v14);
      else
        v7 = sub_100356FC(&v14);
      break;
    case 4:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10035ACB(&v14);
      else
        v7 = sub_10035EB3(&v14);
      break;
    case 8:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_100358CD(&v14);
      else
        v7 = sub_10035193(&v14);
      break;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  if ( !v7 )
    return 0;
  if ( (unsigned __int8)sub_1003562F(v2) )
  {
    v8 = *v6;
    v9 = __PAIR__(v14, HIDWORD(v14));
    if ( (*v6 >> 4) & 1 && v14 < 0 )
    {
      HIDWORD(v9) = -(signed int)v14;
      LODWORD(v9) = (unsigned __int64)-v14 >> 32;
      v8 |= 0x40u;
      *v6 = v8;
    }
    v10 = v2[9] < 0;
    HIDWORD(v14) = v9;
    if ( v10 )
    {
      v2[9] = 1;
    }
    else
    {
      v11 = v2[2];
      v12 = v2[9];
      *v6 = v8 & 0xFFFFFFF7;
      sub_10036089(v12, v11);
      LODWORD(v9) = HIDWORD(v14);
    }
    if ( !v9 )
      *v6 &= 0xFFFFFFDF;
    *((_BYTE *)v2 + 56) = 0;
    if ( v13 == 8 )
      sub_100353BE(HIDWORD(v9), v9, a2);
    else
      sub_10035878(HIDWORD(v9), a2);
    if ( (*v6 >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
    {
      *(_BYTE *)--v2[12] = 48;
      ++v2[13];
    }
  }
  return 1;
}
// 10033343: using guessed type _DWORD __stdcall sub_10033343(_DWORD);
// 1003350A: using guessed type _DWORD __stdcall sub_1003350A(_DWORD);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035193: using guessed type _DWORD __stdcall sub_10035193(_DWORD);
// 100353BE: using guessed type _DWORD __stdcall sub_100353BE(_DWORD, _DWORD, _DWORD);
// 10035463: using guessed type _DWORD __stdcall sub_10035463(_DWORD);
// 1003562F: using guessed type int __thiscall sub_1003562F(_DWORD);
// 100356FC: using guessed type _DWORD __stdcall sub_100356FC(_DWORD);
// 10035878: using guessed type _DWORD __stdcall sub_10035878(_DWORD, _DWORD);
// 100358CD: using guessed type _DWORD __stdcall sub_100358CD(_DWORD);
// 10035ACB: using guessed type _DWORD __stdcall sub_10035ACB(_DWORD);
// 10035EB3: using guessed type _DWORD __stdcall sub_10035EB3(_DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1005814F) --------------------------------------------------------
char __thiscall sub_1005814F(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10036089(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 0;
  if ( v18 == 8 )
    sub_10034FA4(v15, v14, a2);
  else
    sub_10034009(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
  {
    *(_BYTE *)--v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034009: using guessed type _DWORD __stdcall sub_10034009(_DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034FA4: using guessed type _DWORD __stdcall sub_10034FA4(_DWORD, _DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1005833F) --------------------------------------------------------
char __thiscall sub_1005833F(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10035BB6(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 1;
  if ( v18 == 8 )
    sub_10033253(v15, v14, a2);
  else
    sub_100347E3(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_WORD *)v2[12] != 48) )
  {
    v2[12] -= 2;
    *(_WORD *)v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033253: using guessed type _DWORD __stdcall sub_10033253(_DWORD, _DWORD, _DWORD);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 100347E3: using guessed type _DWORD __stdcall sub_100347E3(_DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);

//----- (10058535) --------------------------------------------------------
char __thiscall sub_10058535(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  unsigned int *v6; // edi
  char v7; // al
  unsigned int v8; // edx
  signed __int64 v9; // rcx
  bool v10; // sf
  int v11; // ST10_4
  int v12; // ST0C_4
  int v13; // [esp+8h] [ebp-Ch]
  __int64 v14; // [esp+Ch] [ebp-8h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v13 = v3;
  v14 = 0i64;
  switch ( v3 )
  {
    case 1:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_100333CF(&v14);
      else
        v7 = sub_10035DE1(&v14);
      break;
    case 2:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10033F69(&v14);
      else
        v7 = sub_10034847(&v14);
      break;
    case 4:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10035EB8(&v14);
      else
        v7 = sub_100344FA(&v14);
      break;
    case 8:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10035C79(&v14);
      else
        v7 = sub_10034D97(&v14);
      break;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  if ( !v7 )
    return 0;
  if ( (unsigned __int8)sub_10034DC9(v2) )
  {
    v8 = *v6;
    v9 = __PAIR__(v14, HIDWORD(v14));
    if ( (*v6 >> 4) & 1 && v14 < 0 )
    {
      HIDWORD(v9) = -(signed int)v14;
      LODWORD(v9) = (unsigned __int64)-v14 >> 32;
      v8 |= 0x40u;
      *v6 = v8;
    }
    v10 = v2[9] < 0;
    HIDWORD(v14) = v9;
    if ( v10 )
    {
      v2[9] = 1;
    }
    else
    {
      v11 = v2[2];
      v12 = v2[9];
      *v6 = v8 & 0xFFFFFFF7;
      sub_10035BB6(v12, v11);
      LODWORD(v9) = HIDWORD(v14);
    }
    if ( !v9 )
      *v6 &= 0xFFFFFFDF;
    *((_BYTE *)v2 + 56) = 1;
    if ( v13 == 8 )
      sub_100330C3(HIDWORD(v9), v9, a2);
    else
      sub_10036043(HIDWORD(v9), a2);
    if ( (*v6 >> 7) & 1 && (!v2[13] || *(_WORD *)v2[12] != 48) )
    {
      v2[12] -= 2;
      *(_WORD *)v2[12] = 48;
      ++v2[13];
    }
  }
  return 1;
}
// 100330C3: using guessed type _DWORD __stdcall sub_100330C3(_DWORD, _DWORD, _DWORD);
// 100333CF: using guessed type _DWORD __stdcall sub_100333CF(_DWORD);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10033F69: using guessed type _DWORD __stdcall sub_10033F69(_DWORD);
// 100344FA: using guessed type _DWORD __stdcall sub_100344FA(_DWORD);
// 10034847: using guessed type _DWORD __stdcall sub_10034847(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034D97: using guessed type _DWORD __stdcall sub_10034D97(_DWORD);
// 10034DC9: using guessed type int __thiscall sub_10034DC9(_DWORD);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);
// 10035C79: using guessed type _DWORD __stdcall sub_10035C79(_DWORD);
// 10035DE1: using guessed type _DWORD __stdcall sub_10035DE1(_DWORD);
// 10035EB8: using guessed type _DWORD __stdcall sub_10035EB8(_DWORD);
// 10036043: using guessed type _DWORD __stdcall sub_10036043(_DWORD, _DWORD);

//----- (1005873D) --------------------------------------------------------
char __thiscall sub_1005873D(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10035BB6(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 1;
  if ( v18 == 8 )
    sub_10035CEC(v15, v14, a2);
  else
    sub_10034CB6(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_WORD *)v2[12] != 48) )
  {
    v2[12] -= 2;
    *(_WORD *)v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034CB6: using guessed type _DWORD __stdcall sub_10034CB6(_DWORD, _DWORD);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);
// 10035CEC: using guessed type _DWORD __stdcall sub_10035CEC(_DWORD, _DWORD, _DWORD);

//----- (10058933) --------------------------------------------------------
char __thiscall sub_10058933(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10035BB6(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 1;
  if ( v18 == 8 )
    sub_10034B80(v15, v14, a2);
  else
    sub_10035418(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_WORD *)v2[12] != 48) )
  {
    v2[12] -= 2;
    *(_WORD *)v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034B80: using guessed type _DWORD __stdcall sub_10034B80(_DWORD, _DWORD, _DWORD);
// 10035418: using guessed type _DWORD __stdcall sub_10035418(_DWORD, _DWORD);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);

//----- (10058B29) --------------------------------------------------------
char __thiscall sub_10058B29(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  unsigned int *v6; // edi
  char v7; // al
  unsigned int v8; // edx
  signed __int64 v9; // rcx
  bool v10; // sf
  int v11; // ST10_4
  int v12; // ST0C_4
  int v13; // [esp+8h] [ebp-Ch]
  __int64 v14; // [esp+Ch] [ebp-8h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v13 = v3;
  v14 = 0i64;
  switch ( v3 )
  {
    case 1:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10035C74(&v14);
      else
        v7 = sub_100341F3(&v14);
      break;
    case 2:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_100362D7(&v14);
      else
        v7 = sub_10035774(&v14);
      break;
    case 4:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10035AAD(&v14);
      else
        v7 = sub_10033839(&v14);
      break;
    case 8:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10033357(&v14);
      else
        v7 = sub_10033D48(&v14);
      break;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  if ( !v7 )
    return 0;
  if ( (unsigned __int8)sub_10035ABC(v2) )
  {
    v8 = *v6;
    v9 = __PAIR__(v14, HIDWORD(v14));
    if ( (*v6 >> 4) & 1 && v14 < 0 )
    {
      HIDWORD(v9) = -(signed int)v14;
      LODWORD(v9) = (unsigned __int64)-v14 >> 32;
      v8 |= 0x40u;
      *v6 = v8;
    }
    v10 = v2[9] < 0;
    HIDWORD(v14) = v9;
    if ( v10 )
    {
      v2[9] = 1;
    }
    else
    {
      v11 = v2[2];
      v12 = v2[9];
      *v6 = v8 & 0xFFFFFFF7;
      sub_10035BB6(v12, v11);
      LODWORD(v9) = HIDWORD(v14);
    }
    if ( !v9 )
      *v6 &= 0xFFFFFFDF;
    *((_BYTE *)v2 + 56) = 1;
    if ( v13 == 8 )
      sub_10034C84(HIDWORD(v9), v9, a2);
    else
      sub_10034D65(HIDWORD(v9), a2);
    if ( (*v6 >> 7) & 1 && (!v2[13] || *(_WORD *)v2[12] != 48) )
    {
      v2[12] -= 2;
      *(_WORD *)v2[12] = 48;
      ++v2[13];
    }
  }
  return 1;
}
// 10033357: using guessed type _DWORD __stdcall sub_10033357(_DWORD);
// 10033839: using guessed type _DWORD __stdcall sub_10033839(_DWORD);
// 10033D48: using guessed type _DWORD __stdcall sub_10033D48(_DWORD);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 100341F3: using guessed type _DWORD __stdcall sub_100341F3(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034C84: using guessed type _DWORD __stdcall sub_10034C84(_DWORD, _DWORD, _DWORD);
// 10034D65: using guessed type _DWORD __stdcall sub_10034D65(_DWORD, _DWORD);
// 10035774: using guessed type _DWORD __stdcall sub_10035774(_DWORD);
// 10035AAD: using guessed type _DWORD __stdcall sub_10035AAD(_DWORD);
// 10035ABC: using guessed type int __thiscall sub_10035ABC(_DWORD);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);
// 10035C74: using guessed type _DWORD __stdcall sub_10035C74(_DWORD);
// 100362D7: using guessed type _DWORD __stdcall sub_100362D7(_DWORD);

//----- (10058D31) --------------------------------------------------------
char __thiscall sub_10058D31(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10035BB6(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 1;
  if ( v18 == 8 )
    sub_10035DBE(v15, v14, a2);
  else
    sub_10033082(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_WORD *)v2[12] != 48) )
  {
    v2[12] -= 2;
    *(_WORD *)v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033082: using guessed type _DWORD __stdcall sub_10033082(_DWORD, _DWORD);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);
// 10035DBE: using guessed type _DWORD __stdcall sub_10035DBE(_DWORD, _DWORD, _DWORD);

//----- (10058F27) --------------------------------------------------------
char __thiscall sub_10058F27(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10036089(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 0;
  if ( v18 == 8 )
    sub_10033D34(v15, v14, a2);
  else
    sub_10033E74(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
  {
    *(_BYTE *)--v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033D34: using guessed type _DWORD __stdcall sub_10033D34(_DWORD, _DWORD, char);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10033E74: using guessed type _DWORD __stdcall sub_10033E74(_DWORD, char);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (10059117) --------------------------------------------------------
char __thiscall sub_10059117(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  unsigned int *v6; // edi
  char v7; // al
  unsigned int v8; // edx
  signed __int64 v9; // rcx
  bool v10; // sf
  int v11; // ST10_4
  int v12; // ST0C_4
  int v13; // [esp+8h] [ebp-Ch]
  __int64 v14; // [esp+Ch] [ebp-8h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v13 = v3;
  v14 = 0i64;
  switch ( v3 )
  {
    case 1:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10033717(&v14);
      else
        v7 = sub_10033D2A(&v14);
      break;
    case 2:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10033EE2(&v14);
      else
        v7 = sub_1003565C(&v14);
      break;
    case 4:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_1003557B(&v14);
      else
        v7 = sub_10035260(&v14);
      break;
    case 8:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10035990(&v14);
      else
        v7 = sub_10036250(&v14);
      break;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  if ( !v7 )
    return 0;
  if ( (unsigned __int8)sub_1003618D(v2) )
  {
    v8 = *v6;
    v9 = __PAIR__(v14, HIDWORD(v14));
    if ( (*v6 >> 4) & 1 && v14 < 0 )
    {
      HIDWORD(v9) = -(signed int)v14;
      LODWORD(v9) = (unsigned __int64)-v14 >> 32;
      v8 |= 0x40u;
      *v6 = v8;
    }
    v10 = v2[9] < 0;
    HIDWORD(v14) = v9;
    if ( v10 )
    {
      v2[9] = 1;
    }
    else
    {
      v11 = v2[2];
      v12 = v2[9];
      *v6 = v8 & 0xFFFFFFF7;
      sub_10036089(v12, v11);
      LODWORD(v9) = HIDWORD(v14);
    }
    if ( !v9 )
      *v6 &= 0xFFFFFFDF;
    *((_BYTE *)v2 + 56) = 0;
    if ( v13 == 8 )
      sub_10035A26(HIDWORD(v9), v9, a2);
    else
      sub_10034595(HIDWORD(v9), a2);
    if ( (*v6 >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
    {
      *(_BYTE *)--v2[12] = 48;
      ++v2[13];
    }
  }
  return 1;
}
// 10033717: using guessed type _DWORD __stdcall sub_10033717(_DWORD);
// 10033D2A: using guessed type _DWORD __stdcall sub_10033D2A(_DWORD);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10033EE2: using guessed type _DWORD __stdcall sub_10033EE2(_DWORD);
// 10034595: using guessed type _DWORD __stdcall sub_10034595(_DWORD, char);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035260: using guessed type _DWORD __stdcall sub_10035260(_DWORD);
// 1003557B: using guessed type _DWORD __stdcall sub_1003557B(_DWORD);
// 1003565C: using guessed type _DWORD __stdcall sub_1003565C(_DWORD);
// 10035990: using guessed type _DWORD __stdcall sub_10035990(_DWORD);
// 10035A26: using guessed type _DWORD __stdcall sub_10035A26(_DWORD, _DWORD, char);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);
// 1003618D: using guessed type int __thiscall sub_1003618D(_DWORD);
// 10036250: using guessed type _DWORD __stdcall sub_10036250(_DWORD);

//----- (1005931A) --------------------------------------------------------
char __thiscall sub_1005931A(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10036089(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 0;
  if ( v18 == 8 )
    sub_10034B03(v15, v14, a2);
  else
    sub_10033005(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
  {
    *(_BYTE *)--v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033005: using guessed type _DWORD __stdcall sub_10033005(_DWORD, char);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B03: using guessed type _DWORD __stdcall sub_10034B03(_DWORD, _DWORD, char);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1005950A) --------------------------------------------------------
char __thiscall sub_1005950A(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10036089(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 0;
  if ( v18 == 8 )
    sub_10034B4E(v15, v14, a2);
  else
    sub_10034C7F(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
  {
    *(_BYTE *)--v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034B4E: using guessed type _DWORD __stdcall sub_10034B4E(_DWORD, _DWORD, char);
// 10034C7F: using guessed type _DWORD __stdcall sub_10034C7F(_DWORD, char);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (100596FA) --------------------------------------------------------
char __thiscall sub_100596FA(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  unsigned int *v6; // edi
  char v7; // al
  unsigned int v8; // edx
  signed __int64 v9; // rcx
  bool v10; // sf
  int v11; // ST10_4
  int v12; // ST0C_4
  int v13; // [esp+8h] [ebp-Ch]
  __int64 v14; // [esp+Ch] [ebp-8h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v13 = v3;
  v14 = 0i64;
  switch ( v3 )
  {
    case 1:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10035463(&v14);
      else
        v7 = sub_1003350A(&v14);
      break;
    case 2:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10033343(&v14);
      else
        v7 = sub_100356FC(&v14);
      break;
    case 4:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10035ACB(&v14);
      else
        v7 = sub_10035EB3(&v14);
      break;
    case 8:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_100358CD(&v14);
      else
        v7 = sub_10035193(&v14);
      break;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  if ( !v7 )
    return 0;
  if ( (unsigned __int8)sub_1003562F(v2) )
  {
    v8 = *v6;
    v9 = __PAIR__(v14, HIDWORD(v14));
    if ( (*v6 >> 4) & 1 && v14 < 0 )
    {
      HIDWORD(v9) = -(signed int)v14;
      LODWORD(v9) = (unsigned __int64)-v14 >> 32;
      v8 |= 0x40u;
      *v6 = v8;
    }
    v10 = v2[9] < 0;
    HIDWORD(v14) = v9;
    if ( v10 )
    {
      v2[9] = 1;
    }
    else
    {
      v11 = v2[2];
      v12 = v2[9];
      *v6 = v8 & 0xFFFFFFF7;
      sub_10036089(v12, v11);
      LODWORD(v9) = HIDWORD(v14);
    }
    if ( !v9 )
      *v6 &= 0xFFFFFFDF;
    *((_BYTE *)v2 + 56) = 0;
    if ( v13 == 8 )
      sub_1003348D(HIDWORD(v9), v9, a2);
    else
      sub_10034EDC(HIDWORD(v9), a2);
    if ( (*v6 >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
    {
      *(_BYTE *)--v2[12] = 48;
      ++v2[13];
    }
  }
  return 1;
}
// 10033343: using guessed type _DWORD __stdcall sub_10033343(_DWORD);
// 1003348D: using guessed type _DWORD __stdcall sub_1003348D(_DWORD, _DWORD, char);
// 1003350A: using guessed type _DWORD __stdcall sub_1003350A(_DWORD);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034EDC: using guessed type _DWORD __stdcall sub_10034EDC(_DWORD, char);
// 10035193: using guessed type _DWORD __stdcall sub_10035193(_DWORD);
// 10035463: using guessed type _DWORD __stdcall sub_10035463(_DWORD);
// 1003562F: using guessed type int __thiscall sub_1003562F(_DWORD);
// 100356FC: using guessed type _DWORD __stdcall sub_100356FC(_DWORD);
// 100358CD: using guessed type _DWORD __stdcall sub_100358CD(_DWORD);
// 10035ACB: using guessed type _DWORD __stdcall sub_10035ACB(_DWORD);
// 10035EB3: using guessed type _DWORD __stdcall sub_10035EB3(_DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (100598FD) --------------------------------------------------------
char __thiscall sub_100598FD(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10036089(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 0;
  if ( v18 == 8 )
    sub_1003414E(v15, v14, a2);
  else
    sub_10034D1A(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
  {
    *(_BYTE *)--v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 1003414E: using guessed type _DWORD __stdcall sub_1003414E(_DWORD, _DWORD, char);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034D1A: using guessed type _DWORD __stdcall sub_10034D1A(_DWORD, char);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (10059AED) --------------------------------------------------------
char __thiscall sub_10059AED(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10035BB6(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 1;
  if ( v18 == 8 )
    sub_10033348(v15, v14, a2);
  else
    sub_100345C7(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_WORD *)v2[12] != 48) )
  {
    v2[12] -= 2;
    *(_WORD *)v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033348: using guessed type _DWORD __stdcall sub_10033348(_DWORD, _DWORD, char);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 100345C7: using guessed type _DWORD __stdcall sub_100345C7(_DWORD, char);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);

//----- (10059CE3) --------------------------------------------------------
char __thiscall sub_10059CE3(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  unsigned int *v6; // edi
  char v7; // al
  unsigned int v8; // edx
  signed __int64 v9; // rcx
  bool v10; // sf
  int v11; // ST10_4
  int v12; // ST0C_4
  int v13; // [esp+8h] [ebp-Ch]
  __int64 v14; // [esp+Ch] [ebp-8h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v13 = v3;
  v14 = 0i64;
  switch ( v3 )
  {
    case 1:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_100333CF(&v14);
      else
        v7 = sub_10035DE1(&v14);
      break;
    case 2:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10033F69(&v14);
      else
        v7 = sub_10034847(&v14);
      break;
    case 4:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10035EB8(&v14);
      else
        v7 = sub_100344FA(&v14);
      break;
    case 8:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10035C79(&v14);
      else
        v7 = sub_10034D97(&v14);
      break;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  if ( !v7 )
    return 0;
  if ( (unsigned __int8)sub_10034DC9(v2) )
  {
    v8 = *v6;
    v9 = __PAIR__(v14, HIDWORD(v14));
    if ( (*v6 >> 4) & 1 && v14 < 0 )
    {
      HIDWORD(v9) = -(signed int)v14;
      LODWORD(v9) = (unsigned __int64)-v14 >> 32;
      v8 |= 0x40u;
      *v6 = v8;
    }
    v10 = v2[9] < 0;
    HIDWORD(v14) = v9;
    if ( v10 )
    {
      v2[9] = 1;
    }
    else
    {
      v11 = v2[2];
      v12 = v2[9];
      *v6 = v8 & 0xFFFFFFF7;
      sub_10035BB6(v12, v11);
      LODWORD(v9) = HIDWORD(v14);
    }
    if ( !v9 )
      *v6 &= 0xFFFFFFDF;
    *((_BYTE *)v2 + 56) = 1;
    if ( v13 == 8 )
      sub_100361BF(HIDWORD(v9), v9, a2);
    else
      sub_10033AB9(HIDWORD(v9), a2);
    if ( (*v6 >> 7) & 1 && (!v2[13] || *(_WORD *)v2[12] != 48) )
    {
      v2[12] -= 2;
      *(_WORD *)v2[12] = 48;
      ++v2[13];
    }
  }
  return 1;
}
// 100333CF: using guessed type _DWORD __stdcall sub_100333CF(_DWORD);
// 10033AB9: using guessed type _DWORD __stdcall sub_10033AB9(_DWORD, char);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10033F69: using guessed type _DWORD __stdcall sub_10033F69(_DWORD);
// 100344FA: using guessed type _DWORD __stdcall sub_100344FA(_DWORD);
// 10034847: using guessed type _DWORD __stdcall sub_10034847(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034D97: using guessed type _DWORD __stdcall sub_10034D97(_DWORD);
// 10034DC9: using guessed type int __thiscall sub_10034DC9(_DWORD);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);
// 10035C79: using guessed type _DWORD __stdcall sub_10035C79(_DWORD);
// 10035DE1: using guessed type _DWORD __stdcall sub_10035DE1(_DWORD);
// 10035EB8: using guessed type _DWORD __stdcall sub_10035EB8(_DWORD);
// 100361BF: using guessed type _DWORD __stdcall sub_100361BF(_DWORD, _DWORD, char);

//----- (10059EEB) --------------------------------------------------------
char __thiscall sub_10059EEB(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10035BB6(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 1;
  if ( v18 == 8 )
    sub_10036138(v15, v14, a2);
  else
    sub_10035341(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_WORD *)v2[12] != 48) )
  {
    v2[12] -= 2;
    *(_WORD *)v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035341: using guessed type _DWORD __stdcall sub_10035341(_DWORD, char);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);
// 10036138: using guessed type _DWORD __stdcall sub_10036138(_DWORD, _DWORD, char);

//----- (1005A0E1) --------------------------------------------------------
char __thiscall sub_1005A0E1(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10035BB6(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 1;
  if ( v18 == 8 )
    sub_10036011(v15, v14, a2);
  else
    sub_100341A8(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_WORD *)v2[12] != 48) )
  {
    v2[12] -= 2;
    *(_WORD *)v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 100341A8: using guessed type _DWORD __stdcall sub_100341A8(_DWORD, char);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);
// 10036011: using guessed type _DWORD __stdcall sub_10036011(_DWORD, _DWORD, char);

//----- (1005A2D7) --------------------------------------------------------
char __thiscall sub_1005A2D7(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  unsigned int *v6; // edi
  char v7; // al
  unsigned int v8; // edx
  signed __int64 v9; // rcx
  bool v10; // sf
  int v11; // ST10_4
  int v12; // ST0C_4
  int v13; // [esp+8h] [ebp-Ch]
  __int64 v14; // [esp+Ch] [ebp-8h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v13 = v3;
  v14 = 0i64;
  switch ( v3 )
  {
    case 1:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10035C74(&v14);
      else
        v7 = sub_100341F3(&v14);
      break;
    case 2:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_100362D7(&v14);
      else
        v7 = sub_10035774(&v14);
      break;
    case 4:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10035AAD(&v14);
      else
        v7 = sub_10033839(&v14);
      break;
    case 8:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10033357(&v14);
      else
        v7 = sub_10033D48(&v14);
      break;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  if ( !v7 )
    return 0;
  if ( (unsigned __int8)sub_10035ABC(v2) )
  {
    v8 = *v6;
    v9 = __PAIR__(v14, HIDWORD(v14));
    if ( (*v6 >> 4) & 1 && v14 < 0 )
    {
      HIDWORD(v9) = -(signed int)v14;
      LODWORD(v9) = (unsigned __int64)-v14 >> 32;
      v8 |= 0x40u;
      *v6 = v8;
    }
    v10 = v2[9] < 0;
    HIDWORD(v14) = v9;
    if ( v10 )
    {
      v2[9] = 1;
    }
    else
    {
      v11 = v2[2];
      v12 = v2[9];
      *v6 = v8 & 0xFFFFFFF7;
      sub_10035BB6(v12, v11);
      LODWORD(v9) = HIDWORD(v14);
    }
    if ( !v9 )
      *v6 &= 0xFFFFFFDF;
    *((_BYTE *)v2 + 56) = 1;
    if ( v13 == 8 )
      sub_10034685(HIDWORD(v9), v9, a2);
    else
      sub_100344AA(HIDWORD(v9), a2);
    if ( (*v6 >> 7) & 1 && (!v2[13] || *(_WORD *)v2[12] != 48) )
    {
      v2[12] -= 2;
      *(_WORD *)v2[12] = 48;
      ++v2[13];
    }
  }
  return 1;
}
// 10033357: using guessed type _DWORD __stdcall sub_10033357(_DWORD);
// 10033839: using guessed type _DWORD __stdcall sub_10033839(_DWORD);
// 10033D48: using guessed type _DWORD __stdcall sub_10033D48(_DWORD);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 100341F3: using guessed type _DWORD __stdcall sub_100341F3(_DWORD);
// 100344AA: using guessed type _DWORD __stdcall sub_100344AA(_DWORD, char);
// 10034685: using guessed type _DWORD __stdcall sub_10034685(_DWORD, _DWORD, char);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035774: using guessed type _DWORD __stdcall sub_10035774(_DWORD);
// 10035AAD: using guessed type _DWORD __stdcall sub_10035AAD(_DWORD);
// 10035ABC: using guessed type int __thiscall sub_10035ABC(_DWORD);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);
// 10035C74: using guessed type _DWORD __stdcall sub_10035C74(_DWORD);
// 100362D7: using guessed type _DWORD __stdcall sub_100362D7(_DWORD);

//----- (1005A4DF) --------------------------------------------------------
char __thiscall sub_1005A4DF(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10035BB6(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 1;
  if ( v18 == 8 )
    sub_10033F28(v15, v14, a2);
  else
    sub_10034F95(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_WORD *)v2[12] != 48) )
  {
    v2[12] -= 2;
    *(_WORD *)v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10033F28: using guessed type _DWORD __stdcall sub_10033F28(_DWORD, _DWORD, char);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034F95: using guessed type _DWORD __stdcall sub_10034F95(_DWORD, char);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);

//----- (1005A6D5) --------------------------------------------------------
char __thiscall sub_1005A6D5(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10036089(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 0;
  if ( v18 == 8 )
    sub_10035292(v15, v14, a2);
  else
    sub_10034C25(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
  {
    *(_BYTE *)--v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034C25: using guessed type _DWORD __stdcall sub_10034C25(_DWORD, char);
// 10035292: using guessed type _DWORD __stdcall sub_10035292(_DWORD, _DWORD, char);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1005A8C5) --------------------------------------------------------
char __thiscall sub_1005A8C5(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  unsigned int *v6; // edi
  char v7; // al
  unsigned int v8; // edx
  signed __int64 v9; // rcx
  bool v10; // sf
  int v11; // ST10_4
  int v12; // ST0C_4
  int v13; // [esp+8h] [ebp-Ch]
  __int64 v14; // [esp+Ch] [ebp-8h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v13 = v3;
  v14 = 0i64;
  switch ( v3 )
  {
    case 1:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10033717(&v14);
      else
        v7 = sub_10033D2A(&v14);
      break;
    case 2:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10033EE2(&v14);
      else
        v7 = sub_1003565C(&v14);
      break;
    case 4:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_1003557B(&v14);
      else
        v7 = sub_10035260(&v14);
      break;
    case 8:
      v6 = v2 + 7;
      if ( (v2[7] >> 4) & 1 )
        v7 = sub_10035990(&v14);
      else
        v7 = sub_10036250(&v14);
      break;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  if ( !v7 )
    return 0;
  if ( (unsigned __int8)sub_1003618D(v2) )
  {
    v8 = *v6;
    v9 = __PAIR__(v14, HIDWORD(v14));
    if ( (*v6 >> 4) & 1 && v14 < 0 )
    {
      HIDWORD(v9) = -(signed int)v14;
      LODWORD(v9) = (unsigned __int64)-v14 >> 32;
      v8 |= 0x40u;
      *v6 = v8;
    }
    v10 = v2[9] < 0;
    HIDWORD(v14) = v9;
    if ( v10 )
    {
      v2[9] = 1;
    }
    else
    {
      v11 = v2[2];
      v12 = v2[9];
      *v6 = v8 & 0xFFFFFFF7;
      sub_10036089(v12, v11);
      LODWORD(v9) = HIDWORD(v14);
    }
    if ( !v9 )
      *v6 &= 0xFFFFFFDF;
    *((_BYTE *)v2 + 56) = 0;
    if ( v13 == 8 )
      sub_100332F3(HIDWORD(v9), v9, a2);
    else
      sub_10034838(HIDWORD(v9), a2);
    if ( (*v6 >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
    {
      *(_BYTE *)--v2[12] = 48;
      ++v2[13];
    }
  }
  return 1;
}
// 100332F3: using guessed type _DWORD __stdcall sub_100332F3(_DWORD, _DWORD, char);
// 10033717: using guessed type _DWORD __stdcall sub_10033717(_DWORD);
// 10033D2A: using guessed type _DWORD __stdcall sub_10033D2A(_DWORD);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10033EE2: using guessed type _DWORD __stdcall sub_10033EE2(_DWORD);
// 10034838: using guessed type _DWORD __stdcall sub_10034838(_DWORD, char);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035260: using guessed type _DWORD __stdcall sub_10035260(_DWORD);
// 1003557B: using guessed type _DWORD __stdcall sub_1003557B(_DWORD);
// 1003565C: using guessed type _DWORD __stdcall sub_1003565C(_DWORD);
// 10035990: using guessed type _DWORD __stdcall sub_10035990(_DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);
// 1003618D: using guessed type int __thiscall sub_1003618D(_DWORD);
// 10036250: using guessed type _DWORD __stdcall sub_10036250(_DWORD);

//----- (1005AAC8) --------------------------------------------------------
char __thiscall sub_1005AAC8(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10036089(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 0;
  if ( v18 == 8 )
    sub_10035643(v15, v14, a2);
  else
    sub_1003560C(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
  {
    *(_BYTE *)--v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 1003560C: using guessed type _DWORD __stdcall sub_1003560C(_DWORD, char);
// 10035643: using guessed type _DWORD __stdcall sub_10035643(_DWORD, _DWORD, char);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1005ACB8) --------------------------------------------------------
char __thiscall sub_1005ACB8(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  int v4; // eax
  __int64 *v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  signed __int16 *v11; // ecx
  bool v12; // zf
  char *v13; // ecx
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ST14_4
  int v17; // ST10_4
  int v18; // [esp+Ch] [ebp-Ch]
  signed int v19; // [esp+10h] [ebp-8h]
  unsigned int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v2 = this;
  v3 = sub_10033DBB(this[10]);
  v18 = v3;
  switch ( v3 )
  {
    case 1:
      v7 = v2[7];
      v13 = (char *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v13 + 4;
      if ( v12 )
        LODWORD(v8) = (unsigned __int8)*v13;
      else
        LODWORD(v8) = *v13;
      break;
    case 2:
      v7 = v2[7];
      v11 = (signed __int16 *)v2[4];
      v12 = ((v2[7] >> 4) & 1) == 0;
      v2[4] = v11 + 2;
      if ( v12 )
        LODWORD(v8) = (unsigned __int16)*v11;
      else
        LODWORD(v8) = *v11;
      break;
    case 4:
      v7 = v2[7];
      if ( !((v2[7] >> 4) & 1) )
      {
        v10 = (_DWORD *)v2[4];
        v19 = 0;
        v2[4] = v10 + 1;
        LODWORD(v8) = *v10;
        goto LABEL_18;
      }
      v9 = (_DWORD *)v2[4];
      v2[4] = v9 + 1;
      LODWORD(v8) = *v9;
      break;
    case 8:
      v6 = (__int64 *)v2[4];
      v7 = v2[7];
      v2[4] = v6 + 1;
      v8 = *v6;
      goto LABEL_17;
    default:
      v4 = v2[2] + 24;
      *(_BYTE *)(v4 + 4) = 1;
      *(_DWORD *)v4 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v2[2]);
      return 0;
  }
  v8 = (signed int)v8;
LABEL_17:
  v19 = HIDWORD(v8);
LABEL_18:
  v14 = v19;
  v15 = v8;
  if ( (v7 >> 4) & 1 && v19 < 0 )
  {
    v15 = -(signed int)v8;
    v14 = (unsigned __int64)-__PAIR__(v19, (unsigned int)v8) >> 32;
    v7 |= 0x40u;
    v2[7] = v7;
  }
  v20 = v14;
  v21 = v15;
  if ( v2[9] >= 0 )
  {
    v16 = v2[2];
    v17 = v2[9];
    v2[7] = v7 & 0xFFFFFFF7;
    sub_10036089(v17, v16);
    v15 = v21;
    v14 = v20;
  }
  else
  {
    v2[9] = 1;
  }
  if ( !__PAIR__(v15, v14) )
    v2[7] &= 0xFFFFFFDF;
  *((_BYTE *)v2 + 56) = 0;
  if ( v18 == 8 )
    sub_100358F0(v15, v14, a2);
  else
    sub_10033582(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
  {
    *(_BYTE *)--v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033582: using guessed type _DWORD __stdcall sub_10033582(_DWORD, char);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100358F0: using guessed type _DWORD __stdcall sub_100358F0(_DWORD, _DWORD, char);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);
