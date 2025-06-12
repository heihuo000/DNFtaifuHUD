
//----- (10074D25) --------------------------------------------------------
signed int __cdecl sub_10074D25(int a1, char *a2, char **a3, signed int a4, unsigned __int8 a5)
{
  unsigned int v5; // esi
  char v6; // bl
  bool v7; // zf
  char *v8; // edi
  int v9; // eax
  char v10; // al
  char *v11; // edi
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  bool v14; // cf
  BOOL v15; // ecx
  signed int result; // eax
  int v17; // esi
  char *v18; // [esp+8h] [ebp-14h]
  int v19; // [esp+10h] [ebp-Ch]
  int v20; // [esp+14h] [ebp-8h]
  char v21; // [esp+18h] [ebp-4h]

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
  v19 = 0;
  v6 = *a2;
  v18 = a2;
  v21 = *a2;
  v7 = *(_BYTE *)(a1 + 20) == 0;
  ++a2;
  if ( v7 )
    sub_100343EC(a1);
  while ( sub_10034A72((unsigned __int8)v6, 8, a1 + 12) )
  {
    v6 = *a2;
    v21 = *a2++;
  }
  v20 = a5;
  if ( v6 == 45 )
  {
    v20 = a5 | 2;
  }
  else if ( v6 != 43 )
  {
    v8 = a2;
    goto LABEL_18;
  }
  v6 = *a2;
  v8 = a2 + 1;
  v21 = *a2++;
LABEL_18:
  if ( v5 && v5 != 16 )
    goto LABEL_37;
  if ( (unsigned __int8)(v6 - 48) > 9u )
  {
    if ( (unsigned __int8)(v6 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(v6 - 65) > 0x19u )
        goto LABEL_35;
      v9 = v6 - 55;
    }
    else
    {
      v9 = v6 - 87;
    }
  }
  else
  {
    v9 = v6 - 48;
  }
  if ( !v9 )
  {
    v10 = *v8;
    v11 = v8 + 1;
    a2 = v11;
    if ( v10 == 120 || v10 == 88 )
    {
      if ( !v5 )
        v5 = 16;
      v6 = *v11;
      v8 = v11 + 1;
      v21 = v6;
      a2 = v8;
    }
    else
    {
      if ( !v5 )
        v5 = 8;
      sub_100341AD(v10);
      v8 = a2;
    }
    goto LABEL_37;
  }
LABEL_35:
  if ( !v5 )
    v5 = 10;
LABEL_37:
  while ( 1 )
  {
    if ( (unsigned __int8)(v6 - 48) > 9u )
    {
      if ( (unsigned __int8)(v6 - 97) > 0x19u )
        v12 = (unsigned __int8)(v6 - 65) > 0x19u ? -1 : v6 - 55;
      else
        v12 = v6 - 87;
    }
    else
    {
      v12 = v6 - 48;
    }
    if ( v12 >= v5 )
      break;
    v13 = v19;
    v14 = v5 * v19 + v12 < v5 * v19;
    v19 = v5 * v19 + v12;
    v15 = v14;
    v14 = 0xFFFFFFFF / v5 < v13;
    v6 = *v8;
    v21 = *v8;
    v20 |= 4 * (v14 || v15) | 8;
    a2 = ++v8;
  }
  sub_100341AD(v21);
  if ( !(v20 & 8) )
  {
    if ( a3 )
      *a3 = v18;
    return 0;
  }
  v17 = v19;
  if ( !(unsigned __int8)sub_10033591(v20, v19) )
  {
    if ( v20 & 2 )
      v17 = -v19;
    goto LABEL_62;
  }
  *(_BYTE *)(a1 + 28) = 1;
  *(_DWORD *)(a1 + 24) = 34;
  if ( !(v20 & 1) )
  {
    v17 = -1;
LABEL_62:
    if ( a3 )
      *a3 = a2;
    return v17;
  }
  if ( v20 & 2 )
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
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034A72: using guessed type _DWORD __cdecl sub_10034A72(_DWORD, _DWORD, _DWORD);
// 10034A9A: using guessed type int __thiscall sub_10034A9A(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10074FFD) --------------------------------------------------------
signed int __cdecl sub_10074FFD(int a1, unsigned __int16 *a2, unsigned __int16 **a3, signed int a4, unsigned __int8 a5)
{
  unsigned int v5; // edi
  unsigned __int16 v6; // si
  bool v7; // zf
  int v8; // ebx
  unsigned __int16 *v9; // edx
  signed int v10; // ecx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ecx
  signed int v17; // eax
  bool v18; // cf
  int v19; // ecx
  unsigned int v20; // edx
  signed int result; // eax
  int v22; // esi
  unsigned __int16 *v23; // [esp+Ch] [ebp-90h]
  unsigned int v24; // [esp+98h] [ebp-4h]

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
  v24 = 0;
  v23 = a2;
  v6 = *a2;
  v7 = *(_BYTE *)(a1 + 20) == 0;
  ++a2;
  if ( v7 )
    sub_100343EC(a1);
  while ( sub_10033A0F(v6, 8) )
  {
    v6 = *a2;
    ++a2;
  }
  v8 = a5;
  if ( v6 == 45 )
  {
    v8 = a5 | 2;
  }
  else if ( v6 != 43 )
  {
    v9 = a2;
    goto LABEL_17;
  }
  v6 = *a2;
  v9 = a2 + 1;
  ++a2;
LABEL_17:
  v10 = 48;
  if ( v5 && v5 != 16 )
    goto LABEL_78;
  if ( v6 < 0x30u )
    goto LABEL_59;
  if ( v6 < 0x3Au )
  {
LABEL_21:
    v11 = v6 - v10;
    goto LABEL_58;
  }
  if ( v6 < 0xFF10u )
  {
    v10 = 1632;
    if ( v6 < 0x660u )
      goto LABEL_59;
    if ( v6 >= 0x66Au )
    {
      v10 = 1776;
      if ( v6 < 0x6F0u )
        goto LABEL_59;
      if ( v6 >= 0x6FAu )
      {
        v10 = 2406;
        if ( v6 < 0x966u )
          goto LABEL_59;
        if ( v6 >= 0x970u )
        {
          v10 = 2534;
          if ( v6 < 0x9E6u )
            goto LABEL_59;
          if ( v6 >= 0x9F0u )
          {
            v10 = 2662;
            if ( v6 < 0xA66u )
              goto LABEL_59;
            if ( v6 >= 0xA70u )
            {
              v10 = 2790;
              if ( v6 < 0xAE6u )
                goto LABEL_59;
              if ( v6 >= 0xAF0u )
              {
                v10 = 2918;
                if ( v6 < 0xB66u )
                  goto LABEL_59;
                if ( v6 >= 0xB70u )
                {
                  v10 = 3174;
                  if ( v6 < 0xC66u )
                    goto LABEL_59;
                  if ( v6 >= 0xC70u )
                  {
                    v10 = 3302;
                    if ( v6 < 0xCE6u )
                      goto LABEL_59;
                    if ( v6 >= 0xCF0u )
                    {
                      v10 = 3430;
                      if ( v6 < 0xD66u )
                        goto LABEL_59;
                      if ( v6 >= 0xD70u )
                      {
                        v10 = 3664;
                        if ( v6 < 0xE50u )
                          goto LABEL_59;
                        if ( v6 >= 0xE5Au )
                        {
                          v10 = 3792;
                          if ( v6 < 0xED0u )
                            goto LABEL_59;
                          if ( v6 >= 0xEDAu )
                          {
                            v10 = 3872;
                            if ( v6 < 0xF20u )
                              goto LABEL_59;
                            if ( v6 >= 0xF2Au )
                            {
                              v10 = 4160;
                              if ( v6 < 0x1040u )
                                goto LABEL_59;
                              if ( v6 >= 0x104Au )
                              {
                                v10 = 6112;
                                if ( v6 < 0x17E0u )
                                  goto LABEL_59;
                                if ( v6 >= 0x17EAu )
                                {
                                  v10 = 6160;
                                  if ( v6 < 0x1810u || v6 >= 0x181Au )
                                    goto LABEL_59;
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
    goto LABEL_21;
  }
  if ( v6 >= 0xFF1Au )
    goto LABEL_59;
  v11 = v6 - 65296;
LABEL_58:
  if ( v11 == -1 )
  {
LABEL_59:
    v12 = v6;
    if ( v6 < 0x41u || v6 > 0x5Au )
    {
      v13 = v6 - 97;
      if ( v13 > 0x19 )
        goto LABEL_75;
    }
    else
    {
      v13 = v6 - 97;
    }
    if ( v13 <= 0x19 )
      v12 = v6 - 32;
    v11 = v12 - 55;
  }
  if ( v11 )
  {
LABEL_75:
    if ( !v5 )
    {
      v5 = 10;
      a4 = 10;
    }
    goto LABEL_77;
  }
  v14 = *v9;
  a2 = v9 + 1;
  if ( v14 == 120 || v14 == 88 )
  {
    if ( !v5 )
    {
      v5 = 16;
      a4 = 16;
    }
    v6 = v9[1];
    a2 = v9 + 2;
  }
  else
  {
    if ( !v5 )
    {
      v5 = 8;
      a4 = 8;
    }
    sub_10034239(v14);
  }
LABEL_77:
  LOWORD(v10) = 48;
LABEL_78:
  v15 = 0xFFFFFFFF / v5;
  while ( 1 )
  {
    if ( v6 < (unsigned __int16)v10 )
      goto LABEL_119;
    if ( v6 < 0x3Au )
    {
      v16 = v6 - 48;
      goto LABEL_118;
    }
    v17 = 65296;
    if ( v6 >= 0xFF10u )
    {
      v18 = v6 < 0xFF1Au;
    }
    else
    {
      v17 = 1632;
      if ( v6 < 0x660u )
        goto LABEL_119;
      if ( v6 < 0x66Au )
        goto LABEL_117;
      v17 = 1776;
      if ( v6 < 0x6F0u )
        goto LABEL_119;
      if ( v6 < 0x6FAu )
        goto LABEL_117;
      v17 = 2406;
      if ( v6 < 0x966u )
        goto LABEL_119;
      if ( v6 < 0x970u )
        goto LABEL_117;
      v17 = 2534;
      if ( v6 < 0x9E6u )
        goto LABEL_119;
      if ( v6 < 0x9F0u )
        goto LABEL_117;
      v17 = 2662;
      if ( v6 < 0xA66u )
        goto LABEL_119;
      if ( v6 < 0xA70u )
        goto LABEL_117;
      v17 = 2790;
      if ( v6 < 0xAE6u )
        goto LABEL_119;
      if ( v6 < 0xAF0u )
        goto LABEL_117;
      v17 = 2918;
      if ( v6 < 0xB66u )
        goto LABEL_119;
      if ( v6 < 0xB70u )
        goto LABEL_117;
      v17 = 3174;
      if ( v6 < 0xC66u )
        goto LABEL_119;
      if ( v6 < 0xC70u )
        goto LABEL_117;
      v17 = 3302;
      if ( v6 < 0xCE6u )
        goto LABEL_119;
      if ( v6 < 0xCF0u )
        goto LABEL_117;
      v17 = 3430;
      if ( v6 < 0xD66u )
        goto LABEL_119;
      if ( v6 < 0xD70u )
        goto LABEL_117;
      v17 = 3664;
      if ( v6 < 0xE50u )
        goto LABEL_119;
      if ( v6 < 0xE5Au )
        goto LABEL_117;
      v17 = 3792;
      if ( v6 < 0xED0u )
        goto LABEL_119;
      if ( v6 < 0xEDAu )
        goto LABEL_117;
      v17 = 3872;
      if ( v6 < 0xF20u )
        goto LABEL_119;
      if ( v6 < 0xF2Au )
        goto LABEL_117;
      v17 = 4160;
      if ( v6 < 0x1040u )
        goto LABEL_119;
      if ( v6 < 0x104Au )
        goto LABEL_117;
      v17 = 6112;
      if ( v6 < 0x17E0u )
        goto LABEL_119;
      if ( v6 < 0x17EAu )
        goto LABEL_117;
      v17 = 6160;
      if ( v6 < 0x1810u )
        goto LABEL_119;
      v18 = v6 < 0x181Au;
    }
    if ( v18 )
    {
LABEL_117:
      v16 = v6 - v17;
LABEL_118:
      if ( v16 != -1 )
        goto LABEL_127;
    }
LABEL_119:
    if ( ((v19 = v6, v6 < 0x41u) || v6 > 0x5Au) && (v6 < 0x61u || v6 > 0x7Au) )
    {
      v16 = -1;
    }
    else
    {
      if ( (unsigned __int16)(v6 - 97) <= 0x19u )
        v19 = v6 - 32;
      v16 = v19 - 55;
    }
LABEL_127:
    if ( v16 >= a4 )
      break;
    v20 = a4 * v24 + v16;
    v10 = v20 < a4 * v24;
    v18 = v15 < v24;
    v24 = v20;
    v8 |= 4 * (v18 | v10) | 8;
    v6 = *a2;
    ++a2;
    LOWORD(v10) = 48;
  }
  sub_10034239(v6);
  if ( v8 & 8 )
  {
    v22 = v24;
    if ( (unsigned __int8)sub_10033591(v8, v24) )
    {
      *(_BYTE *)(a1 + 28) = 1;
      *(_DWORD *)(a1 + 24) = 34;
      if ( v8 & 1 )
      {
        if ( v8 & 2 )
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
      v22 = -1;
    }
    else if ( v8 & 2 )
    {
      v22 = -v24;
    }
    if ( a3 )
      *a3 = a2;
    return v22;
  }
  if ( a3 )
    *a3 = v23;
  return 0;
}
// 10033591: using guessed type _DWORD __cdecl sub_10033591(char, _DWORD);
// 10033A0F: using guessed type _DWORD __cdecl sub_10033A0F(__int16, __int16);
// 10033CD5: using guessed type int __thiscall sub_10033CD5(_DWORD);
// 10034239: using guessed type _DWORD __stdcall sub_10034239(__int16);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1007578E) --------------------------------------------------------
signed int __cdecl sub_1007578E(int a1, char *a2, char **a3, signed int a4, unsigned __int8 a5)
{
  signed int v5; // esi
  unsigned int v6; // edi
  char v7; // bl
  int v8; // eax
  char *v9; // ecx
  int v10; // eax
  char v11; // al
  char *v12; // ecx
  int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned __int64 v16; // kr00_8
  unsigned int v17; // ST28_4
  unsigned int v18; // ST40_4
  signed int result; // eax
  int v20; // ebx
  char *v21; // [esp+Ch] [ebp-28h]
  unsigned __int64 v22; // [esp+14h] [ebp-20h]
  int v23; // [esp+24h] [ebp-10h]
  int v24; // [esp+28h] [ebp-Ch]
  unsigned int v25; // [esp+28h] [ebp-Ch]
  char v26; // [esp+2Ch] [ebp-8h]
  int v27; // [esp+30h] [ebp-4h]

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
  v23 = 0;
  v21 = a2;
  v7 = *a2++;
  v8 = a1;
  v26 = v7;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    sub_100343EC(a1);
    v8 = a1;
  }
  v24 = v8 + 12;
  if ( sub_10034A72((unsigned __int8)v7, 8, v8 + 12) )
  {
    do
    {
      v7 = *a2++;
      v26 = v7;
    }
    while ( sub_10034A72((unsigned __int8)v7, 8, v24) );
    v5 = a4;
  }
  v27 = a5;
  if ( v7 == 45 )
  {
    v27 = a5 | 2;
  }
  else if ( v7 != 43 )
  {
    v9 = a2;
    goto LABEL_18;
  }
  v7 = *a2;
  v9 = a2 + 1;
  v26 = *a2++;
LABEL_18:
  if ( v5 && v5 != 16 )
    goto LABEL_37;
  if ( (unsigned __int8)(v7 - 48) > 9u )
  {
    if ( (unsigned __int8)(v7 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(v7 - 65) > 0x19u )
        goto LABEL_35;
      v10 = v7 - 55;
    }
    else
    {
      v10 = v7 - 87;
    }
  }
  else
  {
    v10 = v7 - 48;
  }
  if ( !v10 )
  {
    v11 = *v9;
    v12 = v9 + 1;
    a2 = v12;
    if ( v11 == 120 || v11 == 88 )
    {
      if ( !v5 )
        v5 = 16;
      v7 = *v12;
      v26 = *v12;
      a2 = v12 + 1;
    }
    else
    {
      if ( !v5 )
        v5 = 8;
      sub_100341AD(v11);
    }
    goto LABEL_37;
  }
LABEL_35:
  if ( !v5 )
    v5 = 10;
LABEL_37:
  LODWORD(v22) = sub_100350DA(-1, -1, v5, v5 >> 31);
  HIDWORD(v22) = v13;
  while ( 1 )
  {
    if ( (unsigned __int8)(v7 - 48) > 9u )
    {
      if ( (unsigned __int8)(v7 - 97) > 0x19u )
        v14 = (unsigned __int8)(v7 - 65) > 0x19u ? -1 : v7 - 55;
      else
        v14 = v7 - 87;
    }
    else
    {
      v14 = v7 - 48;
    }
    v25 = v14;
    if ( v14 >= v5 )
      break;
    LODWORD(v15) = sub_10033D0C(v5, v5 >> 31, v23, v6);
    v17 = HIDWORD(v15);
    v16 = v15 + v25;
    v18 = (v15 + (unsigned __int64)v25) >> 32;
    HIDWORD(v15) = __PAIR__(v6, v23) > v22;
    v6 = v18;
    v23 = v16;
    v27 |= 4 * (HIDWORD(v15) | (v16 < __PAIR__(v17, (unsigned int)v15))) | 8;
    v7 = *a2;
    v26 = *a2++;
  }
  sub_100341AD(v26);
  if ( !(v27 & 8) )
  {
    if ( a3 )
      *a3 = v21;
    return 0;
  }
  v20 = v23;
  if ( !(unsigned __int8)sub_1003495A(v27, v23, v6) )
  {
    if ( v27 & 2 )
      v20 = -v23;
    goto LABEL_63;
  }
  *(_BYTE *)(a1 + 28) = 1;
  *(_DWORD *)(a1 + 24) = 34;
  if ( !(v27 & 1) )
  {
    v20 = -1;
LABEL_63:
    if ( a3 )
      *a3 = a2;
    return v20;
  }
  if ( v27 & 2 )
  {
    if ( a3 )
      *a3 = a2;
    result = 0;
  }
  else
  {
    if ( a3 )
      *a3 = a2;
    result = -1;
  }
  return result;
}
// 10033D0C: using guessed type _DWORD __stdcall sub_10033D0C(_DWORD, _DWORD, _DWORD, _DWORD);
// 100341AD: using guessed type _DWORD __stdcall sub_100341AD(char);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 1003495A: using guessed type _DWORD __cdecl sub_1003495A(char, _DWORD, _DWORD);
// 10034A72: using guessed type _DWORD __cdecl sub_10034A72(_DWORD, _DWORD, _DWORD);
// 10034A9A: using guessed type int __thiscall sub_10034A9A(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (10075B08) --------------------------------------------------------
signed int __cdecl sub_10075B08(int a1, unsigned __int16 *a2, unsigned __int16 **a3, signed int a4, unsigned __int8 a5)
{
  signed int v5; // edi
  unsigned int v6; // ebx
  unsigned __int16 v7; // si
  unsigned __int16 *v8; // edx
  signed int v9; // ecx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  int v14; // edx
  signed int v15; // eax
  bool v16; // cf
  unsigned int v17; // edi
  int v18; // edi
  unsigned int v19; // eax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdi
  BOOL v22; // ecx
  signed int result; // eax
  int v24; // edi
  unsigned __int16 *v25; // [esp+Ch] [ebp-A0h]
  unsigned __int64 v26; // [esp+10h] [ebp-9Ch]
  signed int v27; // [esp+18h] [ebp-94h]
  signed int v28; // [esp+A0h] [ebp-Ch]
  int v29; // [esp+A4h] [ebp-8h]
  int v30; // [esp+A8h] [ebp-4h]

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
  v6 = 0;
  v29 = 0;
  v25 = a2;
  v7 = *a2;
  ++a2;
  if ( !*(_BYTE *)(a1 + 20) )
    sub_100343EC(a1);
  while ( sub_10033A0F(v7, 8) )
  {
    v7 = *a2;
    ++a2;
  }
  v30 = a5;
  if ( v7 == 45 )
  {
    v30 = a5 | 2;
  }
  else if ( v7 != 43 )
  {
    v8 = a2;
    goto LABEL_17;
  }
  v7 = *a2;
  v8 = a2 + 1;
  ++a2;
LABEL_17:
  v9 = 48;
  if ( !v5 || v5 == 16 )
  {
    if ( v7 >= 0x30u )
    {
      if ( v7 < 0x3Au )
      {
LABEL_21:
        v10 = v7 - v9;
        goto LABEL_58;
      }
      if ( v7 >= 0xFF10u )
      {
        if ( v7 < 0xFF1Au )
        {
          v10 = v7 - 65296;
LABEL_58:
          if ( v10 != -1 )
            goto LABEL_66;
          goto LABEL_59;
        }
      }
      else
      {
        v9 = 1632;
        if ( v7 >= 0x660u )
        {
          if ( v7 < 0x66Au )
            goto LABEL_21;
          v9 = 1776;
          if ( v7 >= 0x6F0u )
          {
            if ( v7 < 0x6FAu )
              goto LABEL_21;
            v9 = 2406;
            if ( v7 >= 0x966u )
            {
              if ( v7 < 0x970u )
                goto LABEL_21;
              v9 = 2534;
              if ( v7 >= 0x9E6u )
              {
                if ( v7 < 0x9F0u )
                  goto LABEL_21;
                v9 = 2662;
                if ( v7 >= 0xA66u )
                {
                  if ( v7 < 0xA70u )
                    goto LABEL_21;
                  v9 = 2790;
                  if ( v7 >= 0xAE6u )
                  {
                    if ( v7 < 0xAF0u )
                      goto LABEL_21;
                    v9 = 2918;
                    if ( v7 >= 0xB66u )
                    {
                      if ( v7 < 0xB70u )
                        goto LABEL_21;
                      v9 = 3174;
                      if ( v7 >= 0xC66u )
                      {
                        if ( v7 < 0xC70u )
                          goto LABEL_21;
                        v9 = 3302;
                        if ( v7 >= 0xCE6u )
                        {
                          if ( v7 < 0xCF0u )
                            goto LABEL_21;
                          v9 = 3430;
                          if ( v7 >= 0xD66u )
                          {
                            if ( v7 < 0xD70u )
                              goto LABEL_21;
                            v9 = 3664;
                            if ( v7 >= 0xE50u )
                            {
                              if ( v7 < 0xE5Au )
                                goto LABEL_21;
                              v9 = 3792;
                              if ( v7 >= 0xED0u )
                              {
                                if ( v7 < 0xEDAu )
                                  goto LABEL_21;
                                v9 = 3872;
                                if ( v7 >= 0xF20u )
                                {
                                  if ( v7 < 0xF2Au )
                                    goto LABEL_21;
                                  v9 = 4160;
                                  if ( v7 >= 0x1040u )
                                  {
                                    if ( v7 < 0x104Au )
                                      goto LABEL_21;
                                    v9 = 6112;
                                    if ( v7 >= 0x17E0u )
                                    {
                                      if ( v7 < 0x17EAu )
                                        goto LABEL_21;
                                      v9 = 6160;
                                      if ( v7 >= 0x1810u && v7 < 0x181Au )
                                        goto LABEL_21;
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
LABEL_59:
    v11 = v7;
    if ( v7 < 0x41u || v7 > 0x5Au )
    {
      v12 = v7 - 97;
      if ( v12 > 0x19 )
        goto LABEL_75;
    }
    else
    {
      v12 = v7 - 97;
    }
    if ( v12 <= 0x19 )
      v11 = v7 - 32;
    v10 = v11 - 55;
LABEL_66:
    if ( !v10 )
    {
      v13 = *v8;
      a2 = v8 + 1;
      if ( v13 == 120 || v13 == 88 )
      {
        if ( !v5 )
        {
          v5 = 16;
          a4 = 16;
        }
        v7 = v8[1];
        a2 = v8 + 2;
      }
      else
      {
        if ( !v5 )
        {
          v5 = 8;
          a4 = 8;
        }
        sub_10034239(v13);
      }
      goto LABEL_77;
    }
LABEL_75:
    if ( !v5 )
    {
      v5 = 10;
      a4 = 10;
    }
  }
LABEL_77:
  v27 = v5;
  v28 = v5 >> 31;
  LODWORD(v26) = sub_100350DA(-1, -1, v5, v28);
  HIDWORD(v26) = v14;
  while ( 1 )
  {
    v15 = 48;
    if ( v7 < 0x30u )
      goto LABEL_116;
    if ( v7 >= 0x3Au )
    {
      v15 = 65296;
      if ( v7 >= 0xFF10u )
      {
        v16 = v7 < 0xFF1Au;
      }
      else
      {
        v15 = 1632;
        if ( v7 < 0x660u )
          goto LABEL_116;
        if ( v7 < 0x66Au )
          goto LABEL_115;
        v15 = 1776;
        if ( v7 < 0x6F0u )
          goto LABEL_116;
        if ( v7 < 0x6FAu )
          goto LABEL_115;
        v15 = 2406;
        if ( v7 < 0x966u )
          goto LABEL_116;
        if ( v7 < 0x970u )
          goto LABEL_115;
        v15 = 2534;
        if ( v7 < 0x9E6u )
          goto LABEL_116;
        if ( v7 < 0x9F0u )
          goto LABEL_115;
        v15 = 2662;
        if ( v7 < 0xA66u )
          goto LABEL_116;
        if ( v7 < 0xA70u )
          goto LABEL_115;
        v15 = 2790;
        if ( v7 < 0xAE6u )
          goto LABEL_116;
        if ( v7 < 0xAF0u )
          goto LABEL_115;
        v15 = 2918;
        if ( v7 < 0xB66u )
          goto LABEL_116;
        if ( v7 < 0xB70u )
          goto LABEL_115;
        v15 = 3174;
        if ( v7 < 0xC66u )
          goto LABEL_116;
        if ( v7 < 0xC70u )
          goto LABEL_115;
        v15 = 3302;
        if ( v7 < 0xCE6u )
          goto LABEL_116;
        if ( v7 < 0xCF0u )
          goto LABEL_115;
        v15 = 3430;
        if ( v7 < 0xD66u )
          goto LABEL_116;
        if ( v7 < 0xD70u )
          goto LABEL_115;
        v15 = 3664;
        if ( v7 < 0xE50u )
          goto LABEL_116;
        if ( v7 < 0xE5Au )
          goto LABEL_115;
        v15 = 3792;
        if ( v7 < 0xED0u )
          goto LABEL_116;
        if ( v7 < 0xEDAu )
          goto LABEL_115;
        v15 = 3872;
        if ( v7 < 0xF20u )
          goto LABEL_116;
        if ( v7 < 0xF2Au )
          goto LABEL_115;
        v15 = 4160;
        if ( v7 < 0x1040u )
          goto LABEL_116;
        if ( v7 < 0x104Au )
          goto LABEL_115;
        v15 = 6112;
        if ( v7 < 0x17E0u )
          goto LABEL_116;
        if ( v7 < 0x17EAu )
          goto LABEL_115;
        v15 = 6160;
        if ( v7 < 0x1810u )
          goto LABEL_116;
        v16 = v7 < 0x181Au;
      }
      if ( !v16 )
        goto LABEL_116;
    }
LABEL_115:
    v17 = v7 - v15;
    if ( v17 != -1 )
      goto LABEL_124;
LABEL_116:
    v18 = v7;
    if ( v7 < 0x41u || v7 > 0x5Au )
    {
      v19 = v7 - 97;
      if ( v19 > 0x19 )
      {
        v17 = -1;
        goto LABEL_124;
      }
    }
    else
    {
      v19 = v7 - 97;
    }
    if ( v19 <= 0x19 )
      v18 = v7 - 32;
    v17 = v18 - 55;
LABEL_124:
    if ( v17 >= a4 )
      break;
    LODWORD(v20) = sub_10033D0C(v27, v28, v29, v6);
    v21 = v20 + v17;
    v22 = __PAIR__(v6, v29) > v26;
    v6 = HIDWORD(v21);
    v29 = v21;
    v30 |= 4 * (v22 || v21 < v20) | 8;
    v7 = *a2;
    ++a2;
  }
  sub_10034239(v7);
  if ( v30 & 8 )
  {
    v24 = v29;
    if ( (unsigned __int8)sub_1003495A(v30, v29, v6) )
    {
      *(_BYTE *)(a1 + 28) = 1;
      *(_DWORD *)(a1 + 24) = 34;
      if ( v30 & 1 )
      {
        if ( v30 & 2 )
        {
          if ( a3 )
            *a3 = a2;
          result = 0;
        }
        else
        {
          if ( a3 )
            *a3 = a2;
          result = -1;
        }
        return result;
      }
      v24 = -1;
    }
    else if ( v30 & 2 )
    {
      v24 = -v29;
    }
    if ( a3 )
      *a3 = a2;
    return v24;
  }
  if ( a3 )
    *a3 = v25;
  return 0;
}
// 10033A0F: using guessed type _DWORD __cdecl sub_10033A0F(__int16, __int16);
// 10033CD5: using guessed type int __thiscall sub_10033CD5(_DWORD);
// 10033D0C: using guessed type _DWORD __stdcall sub_10033D0C(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034239: using guessed type _DWORD __stdcall sub_10034239(__int16);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 1003495A: using guessed type _DWORD __cdecl sub_1003495A(char, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (100766DC) --------------------------------------------------------
int __cdecl sub_100766DC(int a1, int a2, _DWORD **a3)
{
  int v3; // eax
  int result; // eax
  _DWORD *v5; // esi

  if ( a3 )
  {
    v5 = *a3;
    if ( (unsigned int)(a1 + 1) > 0x100 )
    {
      if ( v5[1] <= 1 )
        result = 0;
      else
        result = sub_10034DD3(a1, a2, a3);
    }
    else
    {
      result = (unsigned __int16)(a2 & *(_WORD *)(*v5 + 2 * a1));
    }
  }
  else
  {
    v3 = sub_100353A5();
    result = sub_10035F03(v3, a1, a2);
  }
  return result;
}
// 10034DD3: using guessed type _DWORD __cdecl sub_10034DD3(_DWORD, _DWORD, _DWORD);
// 100353A5: using guessed type int sub_100353A5(void);
// 10035F03: using guessed type _DWORD __cdecl sub_10035F03(_DWORD, _DWORD, _DWORD);

//----- (10076893) --------------------------------------------------------
int __cdecl sub_10076893(int a1)
{
  int v1; // esi
  char v3; // [esp+4h] [ebp-2Ch]

  sub_10033AD2(0);
  v1 = sub_1003470C(&v3, a1, 0, 10, 1);
  sub_100343D8(&v3);
  return v1;
}
// 10033AD2: using guessed type _DWORD __stdcall sub_10033AD2(_DWORD);
// 100343D8: using guessed type int __thiscall sub_100343D8(_DWORD);
// 1003470C: using guessed type _DWORD __cdecl sub_1003470C(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (10076A2C) --------------------------------------------------------
int __cdecl sub_10076A2C(int a1)
{
  int v1; // esi
  char v3; // [esp+4h] [ebp-2Ch]

  sub_10033AD2(0);
  v1 = sub_10033703(&v3, a1, 0, 10, 1);
  sub_100343D8(&v3);
  return v1;
}
// 10033703: using guessed type _DWORD __cdecl sub_10033703(_DWORD, _DWORD, _DWORD, _DWORD, char);
// 10033AD2: using guessed type _DWORD __stdcall sub_10033AD2(_DWORD);
// 100343D8: using guessed type int __thiscall sub_100343D8(_DWORD);

//----- (10076AD0) --------------------------------------------------------
int __cdecl sub_10076AD0(int a1, _DWORD *a2, unsigned int a3)
{
  _DWORD *v3; // edx
  unsigned int v4; // ebx
  int v5; // ecx
  unsigned __int8 v6; // al
  bool v7; // cf
  int v8; // eax

  v3 = a2;
  v4 = a3;
  if ( !a3 )
    return 0;
  v5 = a1 - (_DWORD)a2;
  if ( (unsigned __int8)a2 & 3 )
    goto LABEL_3;
LABEL_7:
  while ( (((_WORD)v5 + (_WORD)v3) & 0xFFFu) <= 0xFFC )
  {
    v8 = *(_DWORD *)((char *)v3 + v5);
    if ( v8 != *v3 )
      break;
    v7 = v4 < 4;
    v4 -= 4;
    if ( !v7 && v4 != 0 )
    {
      ++v3;
      if ( !((v8 - 16843009) & ~v8 & 0x80808080) )
        continue;
    }
    return 0;
  }
LABEL_3:
  while ( 1 )
  {
    v6 = *((_BYTE *)v3 + v5);
    if ( v6 != *(_BYTE *)v3 )
      return -(v6 < *(_BYTE *)v3) | 1;
    if ( !*((_BYTE *)v3 + v5) )
      return 0;
    v3 = (_DWORD *)((char *)v3 + 1);
    v7 = v4-- < 1;
    if ( v7 || v4 == 0 )
      return 0;
    if ( !((unsigned __int8)v3 & 3) )
      goto LABEL_7;
  }
}

//----- (10076B66) --------------------------------------------------------
int __cdecl sub_10076B66(int a1, int a2)
{
  return sub_1003558A(a1, a2);
}
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);

//----- (10076B73) --------------------------------------------------------
int __cdecl sub_10076B73(_WORD *a1, _WORD *a2, int a3)
{
  int result; // eax
  _WORD *v4; // ecx
  _WORD *v5; // edx

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
    result = (unsigned __int16)*v5 - (unsigned __int16)*v4;
  }
  return result;
}

//----- (10076BDC) --------------------------------------------------------
int __cdecl sub_10076BDC(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

//----- (10076C17) --------------------------------------------------------
int __thiscall sub_10076C17(int this)
{
  int v1; // esi
  DWORD v2; // eax

  v1 = this;
  if ( *(_BYTE *)(this + 8) )
    return *(_DWORD *)(this + 4);
  v2 = GetLastError();
  *(_DWORD *)(v1 + 4) = 0;
  *(_BYTE *)(v1 + 8) = 1;
  SetLastError(v2);
  return 0;
}

//----- (10076C8D) --------------------------------------------------------
LONG __usercall sub_10076C8D@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, int a4, int a5, int a6)
{
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // et0
  BOOL v9; // edi
  LONG result; // eax
  struct _EXCEPTION_POINTERS ExceptionInfo; // [esp+4h] [ebp-328h]
  int v12; // [esp+Ch] [ebp-320h]
  int v13; // [esp+10h] [ebp-31Ch]
  int v14; // [esp+18h] [ebp-314h]
  int v15; // [esp+5Ch] [ebp-2D0h]
  __int16 v16; // [esp+E8h] [ebp-244h]
  __int16 v17; // [esp+ECh] [ebp-240h]
  __int16 v18; // [esp+F0h] [ebp-23Ch]
  __int16 v19; // [esp+F4h] [ebp-238h]
  int v20; // [esp+F8h] [ebp-234h]
  int v21; // [esp+FCh] [ebp-230h]
  int v22; // [esp+100h] [ebp-22Ch]
  int v23; // [esp+104h] [ebp-228h]
  int v24; // [esp+108h] [ebp-224h]
  int *v25; // [esp+10Ch] [ebp-220h]
  int v26; // [esp+110h] [ebp-21Ch]
  int v27; // [esp+114h] [ebp-218h]
  __int16 v28; // [esp+118h] [ebp-214h]
  unsigned int v29; // [esp+11Ch] [ebp-210h]
  int *v30; // [esp+120h] [ebp-20Ch]
  __int16 v31; // [esp+124h] [ebp-208h]
  int savedregs; // [esp+32Ch] [ebp+0h]
  int retaddr; // [esp+330h] [ebp+4h]

  if ( a4 != -1 )
    sub_10035571(a4);
  sub_10034388(&v12, 0, 80);
  sub_10034388(&v15, 0, 716);
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)&v12;
  ExceptionInfo.ContextRecord = (PCONTEXT)&v15;
  v25 = &v15;
  v24 = v6;
  v23 = v7;
  v22 = a1;
  v21 = a3;
  v20 = a2;
  v31 = __SS__;
  v28 = __CS__;
  v19 = __DS__;
  v18 = __ES__;
  v17 = __FS__;
  v16 = __GS__;
  v8 = __readeflags();
  v29 = v8;
  v27 = retaddr;
  v30 = &retaddr;
  v15 = 65537;
  v26 = savedregs;
  v12 = a5;
  v13 = a6;
  v14 = retaddr;
  v9 = IsDebuggerPresent();
  SetUnhandledExceptionFilter(0);
  result = UnhandledExceptionFilter(&ExceptionInfo);
  if ( !result && !v9 && a4 != -1 )
    result = sub_10035571(a4);
  return result;
}
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 10035571: using guessed type int __cdecl sub_10035571(_DWORD);

//----- (10076E14) --------------------------------------------------------
int __cdecl sub_10076E14(int a1)
{
  int result; // eax

  result = a1;
  dword_100B1CA8[0] = a1;
  return result;
}
// 100B1CA8: using guessed type int dword_100B1CA8[];

//----- (10076E57) --------------------------------------------------------
int __cdecl sub_10076E57(int a1, int a2, int a3, int a4, int a5)
{
  char v6; // [esp+0h] [ebp-28h]

  sub_10033AD2(0);
  sub_10034B08(a1, a2, a3, a4, a5, &v6);
  return sub_100343D8(&v6);
}
// 10033AD2: using guessed type _DWORD __stdcall sub_10033AD2(_DWORD);
// 100343D8: using guessed type int __thiscall sub_100343D8(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10076E9B) --------------------------------------------------------
int __cdecl sub_10076E9B(int a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v6; // eax
  int (__cdecl *v7)(int, int, int, int, int); // esi
  int v9; // [esp-14h] [ebp-1Ch]
  int v10; // [esp-10h] [ebp-18h]
  int v11; // [esp-Ch] [ebp-14h]
  int v12; // [esp-8h] [ebp-10h]
  int v13; // [esp-4h] [ebp-Ch]

  v6 = *a6;
  if ( (*a6 || (v6 = sub_1003601B(a6)) != 0) && (v7 = *(int (__cdecl **)(int, int, int, int, int))(v6 + 860)) != 0 )
  {
    v13 = a5;
    v12 = a4;
    v11 = a3;
    v10 = a2;
    v9 = a1;
  }
  else
  {
    v13 = a5;
    v12 = a4;
    v11 = a3;
    v10 = a2;
    v7 = (int (__cdecl *)(int, int, int, int, int))__ROR4__(
                                                     __security_cookie ^ dword_100B1CA8[sub_10033299(a6)],
                                                     __security_cookie & 0x1F);
    v9 = a1;
    if ( !v7 )
    {
      sub_1003465D(a1, a2, a3, a4, a5);
      JUMPOUT(*(_DWORD *)byte_10076F17);
    }
  }
  return v7(v9, v10, v11, v12, v13);
}
// 10033299: using guessed type int __thiscall sub_10033299(_DWORD);
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 1003601B: using guessed type int __thiscall sub_1003601B(_DWORD);
// 100B1CA8: using guessed type int dword_100B1CA8[];
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10076F37) --------------------------------------------------------
int sub_10076F37()
{
  return sub_10035E4F(0, 0, 0, 0, 0);
}
// 10035E4F: using guessed type _DWORD __cdecl sub_10035E4F(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10076F6F) --------------------------------------------------------
BOOL sub_10076F6F()
{
  HANDLE v0; // eax

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(5u);
  sub_10035B11(2, -1073740777, 1);
  v0 = GetCurrentProcess();
  return TerminateProcess(v0, 0xC0000417);
}
// 10035B11: using guessed type _DWORD __cdecl sub_10035B11(_DWORD, _DWORD, _DWORD);

//----- (1007702A) --------------------------------------------------------
signed int __cdecl sub_1007702A(int a1)
{
  unsigned int v1; // eax
  signed int result; // eax

  v1 = 0;
  do
  {
    if ( a1 == dword_100A59D8[2 * v1] )
      return dword_100A59DC[2 * v1];
    ++v1;
  }
  while ( v1 < 0x2D );
  if ( (unsigned int)(a1 - 19) > 0x11 )
    result = (unsigned int)(a1 - 188) > 0xE ? 22 : 8;
  else
    result = 13;
  return result;
}
// 100A59D8: using guessed type int dword_100A59D8[];

//----- (1007707D) --------------------------------------------------------
_DWORD *__cdecl sub_1007707D(int a1)
{
  int v1; // esi
  int v2; // ST00_4
  _DWORD *result; // eax

  *(_DWORD *)sub_100334E7() = a1;
  v1 = sub_1003516B(a1);
  result = (_DWORD *)sub_10034888(v2);
  *result = v1;
  return result;
}
// 100334E7: using guessed type int sub_100334E7(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 1003516B: using guessed type _DWORD __cdecl sub_1003516B(_DWORD);

//----- (100770A8) --------------------------------------------------------
int __cdecl sub_100770A8(int a1, int a2)
{
  int result; // eax

  *(_BYTE *)(a2 + 36) = 1;
  *(_DWORD *)(a2 + 32) = a1;
  result = sub_1003516B(a1);
  *(_BYTE *)(a2 + 28) = 1;
  *(_DWORD *)(a2 + 24) = result;
  return result;
}
// 1003516B: using guessed type _DWORD __cdecl sub_1003516B(_DWORD);

//----- (100770D5) --------------------------------------------------------
void *sub_100770D5()
{
  int v0; // eax
  void *result; // eax

  v0 = sub_10036340();
  if ( v0 )
    result = (void *)(v0 + 20);
  else
    result = &unk_100B0294;
  return result;
}
// 10036340: using guessed type int sub_10036340(void);

//----- (100770EC) --------------------------------------------------------
void *sub_100770EC()
{
  int v0; // eax
  void *result; // eax

  v0 = sub_10036340();
  if ( v0 )
    result = (void *)(v0 + 16);
  else
    result = &unk_100B0290;
  return result;
}
// 10036340: using guessed type int sub_10036340(void);

//----- (100771B7) --------------------------------------------------------
void __cdecl sub_100771B7(LPVOID lpMem)
{
  DWORD v1; // eax
  int v2; // esi
  int v3; // ST04_4

  if ( lpMem )
  {
    if ( !HeapFree(hHeap, 0, lpMem) )
    {
      v1 = GetLastError();
      v2 = sub_1003516B(v1);
      *(_DWORD *)sub_10034888(v3) = v2;
    }
  }
}
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 1003516B: using guessed type _DWORD __cdecl sub_1003516B(_DWORD);

//----- (100771FF) --------------------------------------------------------
LPVOID __cdecl sub_100771FF(SIZE_T dwBytes)
{
  int v1; // ecx
  SIZE_T v2; // esi
  int v3; // eax
  int v4; // ST08_4
  LPVOID result; // eax

  v2 = dwBytes;
  if ( dwBytes > 0xFFFFFFE0 )
  {
LABEL_8:
    *(_DWORD *)sub_10034888(v1) = 12;
    result = 0;
  }
  else
  {
    if ( !dwBytes )
      v2 = 1;
    while ( 1 )
    {
      result = HeapAlloc(hHeap, 0, v2);
      if ( result )
        break;
      if ( sub_10035139() )
      {
        v3 = sub_10034CD9(v2);
        v1 = v4;
        if ( v3 )
          continue;
      }
      goto LABEL_8;
    }
  }
  return result;
}
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10034CD9: using guessed type _DWORD __cdecl sub_10034CD9(_DWORD);
// 10035139: using guessed type int sub_10035139(void);

//----- (10077C82) --------------------------------------------------------
int __cdecl sub_10077C82(__m128i *a2, unsigned int a3)
{
  unsigned int v3; // edx
  __m128i *k; // eax
  int v5; // ecx
  __int8 *v6; // ecx
  unsigned int v7; // edi
  unsigned int v11; // edx
  __m128i *j; // eax
  __m128i *v13; // ecx
  unsigned int v14; // edi
  __m128i *i; // ecx

  if ( dword_100B17D8 < 5 )
  {
    if ( dword_100B17D8 < 1 )
    {
      for ( i = a2; i != (__m128i *)&a2->m128i_i8[a3]; i = (__m128i *)((char *)i + 1) )
      {
        if ( !LOBYTE(i->m128i_i32[0]) )
          break;
      }
      v5 = (char *)i - (char *)a2;
    }
    else
    {
      v11 = ((unsigned __int8)a2 & 0xF) != 0 ? 16 - ((unsigned __int8)a2 & 0xF) : 0;
      if ( a3 < v11 )
        v11 = a3;
      for ( j = a2; j != (__m128i *)&a2->m128i_i8[v11]; j = (__m128i *)((char *)j + 1) )
      {
        if ( !LOBYTE(j->m128i_i32[0]) )
          break;
      }
      v5 = (char *)j - (char *)a2;
      if ( (char *)j - (char *)a2 == v11 )
      {
        v13 = j;
        v14 = (unsigned int)j->m128i_u32 + ((a3 - v11) & 0xFFFFFFF0);
        if ( j != (__m128i *)v14 )
        {
          do
          {
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8((__m128i)0i64, *v13)) )
              break;
            ++v13;
          }
          while ( v13 != (__m128i *)v14 );
        }
        while ( v13 != (__m128i *)&a2->m128i_i8[a3] && LOBYTE(v13->m128i_i32[0]) )
          v13 = (__m128i *)((char *)v13 + 1);
        v5 = (char *)v13 - (char *)a2;
      }
    }
  }
  else
  {
    v3 = ((unsigned __int8)a2 & 0x1F) != 0 ? 32 - ((unsigned __int8)a2 & 0x1F) : 0;
    if ( a3 < v3 )
      v3 = a3;
    for ( k = a2; k != (__m128i *)&a2->m128i_i8[v3]; k = (__m128i *)((char *)k + 1) )
    {
      if ( !LOBYTE(k->m128i_i32[0]) )
        break;
    }
    v5 = (char *)k - (char *)a2;
    if ( (char *)k - (char *)a2 == v3 )
    {
      v6 = (__int8 *)k;
      v7 = (unsigned int)k->m128i_u32 + ((a3 - v3) & 0xFFFFFFE0);
      __asm { vpxor   xmm1, xmm1, xmm1 }
      if ( k != (__m128i *)v7 )
      {
        do
        {
          __asm
          {
            vpcmpeqb ymm0, ymm1, ymmword ptr [ecx]
            vpmovmskb eax, ymm0
          }
          if ( _EAX )
            break;
          v6 += 32;
        }
        while ( v6 != (__int8 *)v7 );
      }
      while ( v6 != &a2->m128i_i8[a3] && *v6 )
        ++v6;
      v5 = v6 - (__int8 *)a2;
      __asm { vzeroupper }
    }
  }
  return v5;
}
// 10077C82: unsupported processor register 'ymm0'
// 100B17D8: using guessed type int dword_100B17D8;

//----- (10077F5E) --------------------------------------------------------
int __cdecl sub_10077F5E(__m128i *a2, unsigned int a3)
{
  __m128i *v3; // ecx
  __m128i *v4; // esi
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // edx
  int v8; // edi
  int v9; // ecx
  char *v10; // edi
  unsigned int v12; // ecx
  int j; // ecx
  int v16; // edx
  unsigned int v17; // edx
  int v18; // edi
  __m128i *v19; // edi
  unsigned int v20; // ecx
  int i; // ecx
  char *v22; // ecx
  int v23; // esi

  if ( dword_100B17D8 < 5 )
  {
    if ( dword_100B17D8 < 1 )
    {
      v22 = (char *)a2;
      v23 = (int)a2->m128i_i32 + 2 * a3;
      if ( a2 != (__m128i *)v23 )
      {
        do
        {
          if ( !*(_WORD *)v22 )
            break;
          v22 += 2;
        }
        while ( v22 != (char *)v23 );
      }
      v6 = v22 - (char *)a2;
      return v6 >> 1;
    }
    v3 = a2;
    if ( (unsigned __int8)a2 & 1 )
    {
      v4 = a2;
      v16 = (int)a2->m128i_i32 + 2 * a3;
      if ( a2 != (__m128i *)v16 )
      {
        do
        {
          if ( !LOWORD(v3->m128i_i32[0]) )
            break;
          v3 = (__m128i *)((char *)v3 + 2);
        }
        while ( v3 != (__m128i *)v16 );
      }
      goto LABEL_6;
    }
    v17 = ((16 - ((unsigned __int8)a2 & 0xF)) & (unsigned int)-(((unsigned __int8)a2 & 0xF) != 0)) >> 1;
    if ( a3 < v17 )
      v17 = a3;
    v4 = a2;
    v18 = (int)a2->m128i_i32 + 2 * v17;
    if ( a2 != (__m128i *)v18 )
    {
      do
      {
        if ( !LOWORD(v3->m128i_i32[0]) )
          break;
        v3 = (__m128i *)((char *)v3 + 2);
      }
      while ( v3 != (__m128i *)v18 );
    }
    v9 = ((char *)v3 - (char *)a2) >> 1;
    if ( v9 == v17 )
    {
      v19 = (__m128i *)((char *)a2 + 2 * v9);
      v20 = (unsigned int)a2 + 2 * (v9 + ((a3 - v17) & 0xFFFFFFF0));
      while ( v19 != (__m128i *)v20 && !_mm_movemask_epi8(_mm_cmpeq_epi16((__m128i)0i64, *v19)) )
        ++v19;
      for ( i = (int)a2->m128i_i32 + 2 * a3; v19 != (__m128i *)i; v19 = (__m128i *)((char *)v19 + 2) )
      {
        if ( !LOWORD(v19->m128i_i32[0]) )
          break;
      }
      v3 = v19;
      goto LABEL_6;
    }
  }
  else
  {
    v3 = a2;
    if ( (unsigned __int8)a2 & 1 )
    {
      v4 = a2;
      v5 = (int)a2->m128i_i32 + 2 * a3;
      if ( a2 != (__m128i *)v5 )
      {
        do
        {
          if ( !LOWORD(v3->m128i_i32[0]) )
            break;
          v3 = (__m128i *)((char *)v3 + 2);
        }
        while ( v3 != (__m128i *)v5 );
      }
LABEL_6:
      v6 = (char *)v3 - (char *)v4;
      return v6 >> 1;
    }
    v7 = ((32 - ((unsigned __int8)a2 & 0x1F)) & (unsigned int)-(((unsigned __int8)a2 & 0x1F) != 0)) >> 1;
    if ( a3 < v7 )
      v7 = a3;
    v8 = (int)a2->m128i_i32 + 2 * v7;
    if ( a2 != (__m128i *)v8 )
    {
      do
      {
        if ( !LOWORD(v3->m128i_i32[0]) )
          break;
        v3 = (__m128i *)((char *)v3 + 2);
      }
      while ( v3 != (__m128i *)v8 );
    }
    v9 = ((char *)v3 - (char *)a2) >> 1;
    if ( v9 == v7 )
    {
      v10 = (char *)a2->m128i_i32 + 2 * v9;
      __asm { vpxor   xmm1, xmm1, xmm1 }
      v12 = (unsigned int)a2 + 2 * (v9 + ((a3 - v7) & 0xFFFFFFE0));
      while ( v10 != (char *)v12 )
      {
        __asm
        {
          vpcmpeqw ymm0, ymm1, ymmword ptr [edi]
          vpmovmskb eax, ymm0
        }
        if ( _EAX )
          break;
        v10 += 32;
      }
      for ( j = (int)a2->m128i_i32 + 2 * a3; v10 != (char *)j; v10 += 2 )
      {
        if ( !*(_WORD *)v10 )
          break;
      }
      v9 = (v10 - (char *)a2) >> 1;
      __asm { vzeroupper }
    }
  }
  return v9;
}
// 10077F5E: unsupported processor register 'ymm0'
// 100B17D8: using guessed type int dword_100B17D8;

//----- (100781C7) --------------------------------------------------------
int __cdecl sub_100781C7(int a1, int *a2)
{
  int result; // eax

  result = *a2;
  if ( *a2 != dword_100B1CD8[0] )
  {
    result = dword_100B0AD0;
    if ( !(dword_100B0AD0 & *(_DWORD *)(a1 + 848)) )
    {
      result = sub_10034950();
      *a2 = result;
    }
  }
  return result;
}
// 10034950: using guessed type int sub_10034950(void);
// 100B0AD0: using guessed type int dword_100B0AD0;
// 100B1CD8: using guessed type int dword_100B1CD8[];

//----- (100781FF) --------------------------------------------------------
int __cdecl sub_100781FF(int a1, int *a2, int a3)
{
  int result; // eax

  result = a3;
  if ( *a2 != dword_100B1CD8[a3] )
  {
    result = dword_100B0AD0;
    if ( !(dword_100B0AD0 & *(_DWORD *)(a1 + 848)) )
    {
      result = sub_10034950();
      *a2 = result;
    }
  }
  return result;
}
// 10034950: using guessed type int sub_10034950(void);
// 100B0AD0: using guessed type int dword_100B0AD0;
// 100B1CD8: using guessed type int dword_100B1CD8[];

//----- (1007823C) --------------------------------------------------------
int __cdecl sub_1007823C(int a1, int *a2)
{
  int result; // eax

  result = *a2;
  if ( *a2 != dword_100B20FC[0] )
  {
    result = dword_100B0AD0;
    if ( !(dword_100B0AD0 & *(_DWORD *)(a1 + 848)) )
    {
      result = sub_100344DC();
      *a2 = result;
    }
  }
  return result;
}
// 100344DC: using guessed type int sub_100344DC(void);
// 100B0AD0: using guessed type int dword_100B0AD0;
// 100B20FC: using guessed type int dword_100B20FC[];

//----- (10078274) --------------------------------------------------------
int __cdecl sub_10078274(int a1, int *a2, int a3)
{
  int result; // eax

  result = a3;
  if ( *a2 != dword_100B20FC[a3] )
  {
    result = dword_100B0AD0;
    if ( !(dword_100B0AD0 & *(_DWORD *)(a1 + 848)) )
    {
      result = sub_100344DC();
      *a2 = result;
    }
  }
  return result;
}
// 100344DC: using guessed type int sub_100344DC(void);
// 100B0AD0: using guessed type int dword_100B0AD0;
// 100B20FC: using guessed type int dword_100B20FC[];

//----- (100782B1) --------------------------------------------------------
signed int __cdecl sub_100782B1(int *a1)
{
  int v1; // edi
  int v2; // edx

  v1 = *a1;
  v2 = a1[1];
  if ( (((unsigned int)a1[1] >> 20) & 0x7FF) != 2047 )
    return 0;
  if ( !(v2 & 0xFFFFF | v1) )
    return 1;
  if ( v2 < 0 && !v1 && (v2 & 0xFFFFF) == 0x80000 )
    return 4;
  if ( v2 & 0x80000 )
    return 2;
  return 3;
}

//----- (1007834A) --------------------------------------------------------
char __cdecl sub_1007834A(__int64 *a1, int a2, int a3, __int16 a4)
{
  __int64 v4; // rdi
  unsigned __int16 v5; // ax
  __int64 v7; // rax
  char v8; // cl

  v4 = *a1;
  v5 = sub_100336DB(a4, a3 & *((_DWORD *)a1 + 1) & 0xFFFFF);
  if ( v5 > 8u )
    return 1;
  if ( v5 < 8u )
    return 0;
  LODWORD(v7) = sub_10034CAC(a4, 0);
  if ( ((v4 & (unsigned __int64)(v7 - 1)) >> 32) & 0xFFFFF | (unsigned int)v4 & ((_DWORD)v7 - 1) )
    return 1;
  if ( a4 == 48 )
  {
    v8 = 0;
    if ( v4 & 0x7FF0000000000000i64 )
      v8 = 1;
  }
  else
  {
    v8 = sub_100336DB(a4, (unsigned __int16)(a3 & (HIDWORD(v4) >> 4)));
  }
  return v8 & 1;
}
// 100336DB: using guessed type int __fastcall sub_100336DB(_DWORD, _DWORD);
// 10034CAC: using guessed type int __fastcall sub_10034CAC(_DWORD, _DWORD);

//----- (10078415) --------------------------------------------------------
signed int __cdecl sub_10078415(int a1, _BYTE *a2, unsigned int a3, int a4, int a5, int a6, char a7, int a8, int a9, int a10)
{
  int v10; // esi
  _BYTE *v11; // edi
  signed int result; // eax
  int *v13; // ebx
  _BYTE *v14; // eax
  bool v15; // zf
  char *v16; // edx
  signed int v17; // ecx
  char *v18; // edi
  char v19; // al
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  unsigned __int16 v24; // dx
  char *i; // eax
  char v26; // cl
  int v27; // eax
  unsigned int v28; // ebx
  _BYTE *v29; // eax
  bool v30; // cf
  unsigned int v31; // ebx
  int v32; // esi
  char v33; // cl
  _BYTE *v34; // edi
  int v35; // edx
  int v36; // edx
  int v37; // [esp+Ch] [ebp-28h]
  unsigned int v38; // [esp+1Ch] [ebp-18h]
  unsigned int v39; // [esp+20h] [ebp-14h]
  unsigned int v40; // [esp+24h] [ebp-10h]
  _BYTE *v41; // [esp+24h] [ebp-10h]
  char *v42; // [esp+28h] [ebp-Ch]
  unsigned __int16 v43; // [esp+2Ch] [ebp-8h]

  v10 = a6;
  if ( a6 < 0 )
    v10 = 0;
  v11 = a2;
  *a2 = 0;
  if ( a3 <= v10 + 11 )
  {
    *(_BYTE *)(a10 + 28) = 1;
    *(_DWORD *)(a10 + 24) = 34;
    sub_10034B08(0, 0, 0, 0, 0, a10);
    return 34;
  }
  v13 = (int *)a1;
  if ( ((*(_DWORD *)(a1 + 4) >> 20) & 0x7FF) != 2047 )
  {
    if ( *(_DWORD *)(a1 + 4) <= 0 )
    {
      if ( *(_DWORD *)(a1 + 4) < 0 )
      {
        *a2 = 45;
        v11 = a2 + 1;
      }
      else
      {
        v15 = *(_DWORD *)a1 == 0;
      }
    }
    v16 = v11 + 1;
    v17 = *(_DWORD *)(a1 + 4) & 0x7FF00000;
    v40 = 1023;
    v37 = 32 * (unsigned __int8)(a7 ^ 1) + 7;
    v42 = v11 + 1;
    if ( v17 )
    {
      *v11 = 49;
    }
    else
    {
      *v11 = 48;
      v17 = *(_DWORD *)(a1 + 4) & 0xFFFFF | *(_DWORD *)a1;
      if ( v17 )
        v40 = 1022;
      else
        v40 = 0;
    }
    v18 = v11 + 2;
    if ( v10 )
    {
      v20 = a10;
      if ( !*(_BYTE *)(a10 + 20) )
      {
        sub_100343EC(a10);
        v20 = a10;
        v16 = v42;
      }
      v19 = ***(_BYTE ***)(*(_DWORD *)(v20 + 12) + 136);
    }
    else
    {
      v19 = 0;
    }
    *v16 = v19;
    if ( *(_DWORD *)(a1 + 4) & 0xFFFFF || *(_DWORD *)a1 )
    {
      v43 = 48;
      v17 = 983040;
      v21 = 0;
      v38 = 983040;
      v39 = 0;
      while ( v10 > 0 )
      {
        v22 = *(_DWORD *)a1 & v21;
        v23 = (unsigned __int16)(sub_100336DB(v43, v17 & *(_DWORD *)(a1 + 4) & 0xFFFFF) + 48);
        if ( v23 > 0x39 )
          LOBYTE(v23) = v37 + v23;
        v24 = v43;
        *v18++ = v23;
        v21 = __PAIR__(v38, v39) >> 4;
        v43 -= 4;
        v17 = v38 >> 4;
        --v10;
        v39 = __PAIR__(v38, v39) >> 4;
        v38 >>= 4;
        if ( (signed __int16)(v24 - 4) < 0 )
          goto LABEL_42;
      }
      if ( !sub_10078E62(a1, v21, v17, v43, a9) )
      {
LABEL_44:
        if ( !*v42 )
          v18 = v42;
        LOBYTE(v17) = 52;
        *v18 = 32 * (a7 ^ 1) + 80;
        v27 = *v13;
        v28 = sub_100336DB(v17, v13[1]) & 0x7FF;
        v29 = v18 + 2;
        v30 = v28 < v40;
        v31 = v28 - v40;
        v41 = v18 + 2;
        v32 = -v30;
        if ( v30 > 0 )
        {
          v31 = -v31;
          v32 = (unsigned __int64)-__PAIR__(v32, v31) >> 32;
          v33 = 45;
        }
        else
        {
          v33 = 43;
        }
        v18[1] = v33;
        v34 = v18 + 2;
        *v29 = 48;
        if ( v32 < 0 )
          goto LABEL_61;
        if ( v32 <= 0 && v31 < 0x3E8
          || (*v41 = sub_10035EAE(__PAIR__(v32, v31), 1000, 0) + 48,
              v34 = v41 + 1,
              v31 = sub_10033A96(__PAIR__(v32, v31), 1000i64),
              v32 = v35,
              v41 + 1 == v41) )
        {
          if ( v32 < 0 )
          {
LABEL_61:
            *v34 = v31 + 48;
            v34[1] = 0;
            return 0;
          }
          if ( v32 <= 0 && v31 < 0x64 )
            goto LABEL_65;
        }
        *v34++ = sub_10035EAE(__PAIR__(v32, v31), 100, 0) + 48;
        v31 = sub_10033A96(__PAIR__(v32, v31), 100i64);
        v32 = v36;
        if ( v34 == v41 )
        {
LABEL_65:
          if ( v32 < 0 || v32 <= 0 && v31 < 0xA )
            goto LABEL_61;
        }
        *v34++ = sub_10035EAE(__PAIR__(v32, v31), 10, 0) + 48;
        LOBYTE(v31) = sub_10033A96(__PAIR__(v32, v31), 10i64);
        goto LABEL_61;
      }
      for ( i = v18 - 1; ; --i )
      {
        v26 = *i;
        if ( *i != 102 && v26 != 70 )
          break;
        *i = 48;
      }
      v13 = (int *)a1;
      if ( i == v42 )
      {
        ++*(i - 1);
      }
      else
      {
        if ( v26 == 57 )
          v26 = 32 * (a7 ^ 1) + 64;
        *i = v26 + 1;
      }
    }
LABEL_42:
    if ( v10 > 0 )
    {
      sub_10034388(v18, 48, v10);
      v18 += v10;
    }
    goto LABEL_44;
  }
  result = sub_1007880D((double *)a1, a2, a3, a4, a5, v10, 0, a8, a9, a10);
  if ( result )
  {
    *a2 = 0;
    return result;
  }
  v14 = (_BYTE *)sub_100336FE(a2, 101);
  if ( v14 )
  {
    *v14 = 32 * (a7 ^ 1) + 80;
    v14[3] = 0;
  }
  return 0;
}
// 100336DB: using guessed type int __fastcall sub_100336DB(_DWORD, _DWORD);
// 100336FE: using guessed type _DWORD __cdecl sub_100336FE(_DWORD, char);
// 10033A96: using guessed type _DWORD __stdcall sub_10033A96(__int64, __int64);
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035EAE: using guessed type _DWORD __stdcall sub_10035EAE(__int64, _DWORD, _DWORD);

//----- (1007880D) --------------------------------------------------------
signed int __cdecl sub_1007880D(double *a1, _BYTE *a2, unsigned int a3, int a4, int a5, int a6, char a7, int a8, int a9, int a10)
{
  int v10; // eax
  int v11; // ecx
  signed int result; // eax
  int v13; // [esp+8h] [ebp-Ch]

  v10 = sub_10035846(*a1, a6 + 1, 1, (int)&v13, a4, a5);
  v11 = -1;
  if ( a3 != -1 )
    v11 = a3 - (v13 == 45) - (a6 > 0);
  result = sub_10034A0E(&a2[(v13 == 45) + (a6 > 0)], v11, a6 + 1, &v13, v10, a9, a10);
  if ( !result )
    return sub_100788DA(a2, a3, a6, a7, a8, (int)&v13, 0, a10);
  *a2 = 0;
  return result;
}
// 10034A0E: using guessed type _DWORD __cdecl sub_10034A0E(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100788DA) --------------------------------------------------------
signed int __cdecl sub_100788DA(_BYTE *a1, unsigned int a2, int a3, char a4, int a5, int a6, unsigned __int8 a7, int a8)
{
  int v8; // eax
  signed int result; // eax
  _BYTE *v10; // esi
  int v11; // eax
  _BYTE *v12; // esi
  int v13; // eax
  int v14; // ecx

  v8 = a3;
  if ( a3 <= 0 )
    v8 = 0;
  if ( a2 > v8 + 9 )
  {
    if ( a7 )
      sub_10078E21((int)a1, a2, &a1[*(_DWORD *)a6 == 45], a3 > 0);
    v10 = a1;
    if ( *(_DWORD *)a6 == 45 )
    {
      *a1 = 45;
      v10 = a1 + 1;
    }
    if ( a3 > 0 )
    {
      *v10 = v10[1];
      ++v10;
      v11 = a8;
      if ( !*(_BYTE *)(a8 + 20) )
      {
        sub_100343EC(a8);
        v11 = a8;
      }
      *v10 = ***(_BYTE ***)(*(_DWORD *)(v11 + 12) + 136);
    }
    v12 = &v10[a3 + (a7 ^ 1)];
    v13 = -1;
    if ( a2 != -1 )
      v13 = a2 + a1 - v12;
    if ( sub_10035E22(v12, v13, "e+000") )
    {
      sub_1003465D(0, 0, 0, 0, 0);
      JUMPOUT(*(_DWORD *)byte_10078A2C);
    }
    if ( a4 )
      *v12 = 69;
    if ( **(_BYTE **)(a6 + 8) != 48 )
    {
      v14 = *(_DWORD *)(a6 + 4) - 1;
      if ( v14 < 0 )
      {
        v14 = 1 - *(_DWORD *)(a6 + 4);
        v12[1] = 45;
      }
      if ( v14 >= 100 )
      {
        v12[2] += v14 / 100;
        v14 %= 100;
      }
      if ( v14 >= 10 )
      {
        v12[3] += v14 / 10;
        v14 %= 10;
      }
      v12[4] += v14;
    }
    if ( a5 == 2 && v12[2] == 48 )
      sub_10035AB7(v12 + 2, v12 + 3, 3);
    result = 0;
  }
  else
  {
    *(_BYTE *)(a8 + 28) = 1;
    *(_DWORD *)(a8 + 24) = 34;
    sub_10034B08(0, 0, 0, 0, 0, a8);
    result = 34;
  }
  return result;
}
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035AB7: using guessed type _DWORD __cdecl sub_10035AB7(_DWORD, _DWORD, _DWORD);
// 10035E22: using guessed type _DWORD __cdecl sub_10035E22(_DWORD, _DWORD, _DWORD);

//----- (10078A81) --------------------------------------------------------
int __cdecl sub_10078A81(double *a1, char *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // eax
  int v9; // ecx
  int result; // eax
  int v11; // [esp+8h] [ebp-Ch]
  int v12; // [esp+Ch] [ebp-8h]
  int v13; // [esp+10h] [ebp-4h]

  v11 = 0;
  v12 = 0;
  v13 = 0;
  v8 = sub_10035846(*a1, a6, 0, (int)&v11, a4, a5);
  v9 = -1;
  if ( a3 != -1 )
    v9 = a3 - (v11 == 45);
  result = sub_10034A0E(&a2[v11 == 45], v9, a6 + v12, &v11, v8, a7, a8);
  if ( !result )
    return sub_10078B3C(a2, a3, a6, (int)&v11, 0, a8);
  *a2 = 0;
  return result;
}
// 10034A0E: using guessed type _DWORD __cdecl sub_10034A0E(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10078B3C) --------------------------------------------------------
int __cdecl sub_10078B3C(char *a1, int a2, int a3, int a4, char a5, int a6)
{
  char v6; // dl
  int v7; // edi
  int v8; // ecx
  char *v9; // ecx
  signed int v10; // eax
  const char *v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v16; // [esp+Ch] [ebp-4h]
  char *v17; // [esp+Ch] [ebp-4h]

  v6 = 0;
  v7 = a3;
  v8 = *(_DWORD *)(a4 + 4) - 1;
  if ( a5 && v8 == a3 )
    *(_WORD *)&a1[v8 + (*(_DWORD *)a4 == 45)] = 48;
  v9 = a1;
  v16 = (int)a1;
  if ( *(_DWORD *)a4 == 45 )
  {
    v9 = a1 + 1;
    *a1 = 45;
    v16 = (int)(a1 + 1);
  }
  v10 = *(_DWORD *)(a4 + 4);
  if ( v10 <= 0 )
  {
    if ( !v10 && **(_BYTE **)(a4 + 8) == 48 )
      v6 = 1;
    if ( !a5 || !v6 )
    {
      sub_10078E21((int)a1, a2, v9, 1);
      v9 = (char *)v16;
    }
    *v9 = 48;
    v10 = 1;
  }
  v11 = &v9[v10];
  v17 = (char *)v11;
  if ( a3 > 0 )
  {
    sub_10078E21((int)a1, a2, v11, 1);
    v12 = a6;
    if ( !*(_BYTE *)(a6 + 20) )
    {
      sub_100343EC(a6);
      v12 = a6;
    }
    *v17 = ***(_BYTE ***)(*(_DWORD *)(v12 + 12) + 136);
    v13 = *(_DWORD *)(a4 + 4);
    if ( v13 < 0 )
    {
      v14 = -v13;
      if ( a5 || v14 < a3 )
        v7 = v14;
      sub_10078E21((int)a1, a2, v17 + 1, v7);
      sub_10034388(v17 + 1, 48, v7);
    }
  }
  return 0;
}
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);

//----- (10078C65) --------------------------------------------------------
signed int __cdecl sub_10078C65(double *a1, char *a2, unsigned int a3, int a4, int a5, int a6, char a7, int a8, int a9, int a10)
{
  BOOL v10; // edx
  int v11; // eax
  const char *v12; // esi
  signed int result; // eax
  int v14; // eax
  int v15; // [esp+Ch] [ebp-14h]
  int v16; // [esp+10h] [ebp-10h]
  int v17; // [esp+14h] [ebp-Ch]
  int v18; // [esp+18h] [ebp-8h]
  int v19; // [esp+1Ch] [ebp-4h]

  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = sub_10035846(*a1, a6, 0, (int)&v15, a4, a5);
  v10 = v15 == 45;
  v18 = v16 - 1;
  v11 = -1;
  v12 = &a2[v10];
  if ( a3 != -1 )
    v11 = a3 - v10;
  result = sub_10034A0E(&a2[v10], v11, a6, &v15, v19, a9, a10);
  if ( result )
  {
    *a2 = 0;
  }
  else
  {
    v14 = v16 - 1;
    if ( v16 - 1 < -4 || v14 >= a6 )
    {
      result = sub_100788DA(a2, a3, a6, a7, a8, (int)&v15, 1u, a10);
    }
    else
    {
      if ( v18 < v14 )
        v12[strlen(v12) - 1] = 0;
      result = sub_10078B3C(a2, a3, a6, (int)&v15, 1, a10);
    }
  }
  return result;
}
// 10034A0E: using guessed type _DWORD __cdecl sub_10034A0E(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10078D67) --------------------------------------------------------
signed int __cdecl sub_10078D67(int a1, unsigned __int8 a2, _BYTE *a3, unsigned int a4, unsigned __int8 a5)
{
  unsigned int v5; // edx
  signed int result; // eax
  int v7; // ecx

  v5 = a4;
  if ( a4 >= (unsigned int)a2 + 4 )
  {
    v7 = (int)a3;
    if ( a2 )
    {
      *a3 = 45;
      v7 = (int)(a3 + 1);
      a3[1] = 0;
      if ( a4 != -1 )
        v5 = a4 - 1;
    }
    result = sub_10035E22(
               v7,
               v5,
               *(&off_100A5B88
               + 2 * (a5 ^ 1)
               + 4 * a1
               - 4
               + 1
               - (strlen((const char *)*(&off_100A5B88 + 4 * a1 - 4 + 2 * (a5 ^ 1))) < v5)));
    if ( result )
    {
      sub_1003465D(0, 0, 0, 0, 0);
      JUMPOUT(*(_DWORD *)byte_10078DFB);
    }
  }
  else
  {
    *a3 = 0;
    result = 12;
  }
  return result;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035E22: using guessed type _DWORD __cdecl sub_10035E22(_DWORD, _DWORD, _DWORD);
// 100A5B88: using guessed type void *off_100A5B88;

//----- (10078E21) --------------------------------------------------------
int __cdecl sub_10078E21(int a1, int a2, const char *a3, int a4)
{
  int result; // eax

  if ( a4 )
    result = sub_10035AB7(&a3[a4], a3, strlen(a3) + 1);
  return result;
}
// 10035AB7: using guessed type _DWORD __cdecl sub_10035AB7(_DWORD, _DWORD, _DWORD);

//----- (10078E62) --------------------------------------------------------
char __cdecl sub_10078E62(int a1, int a2, int a3, __int16 a4, int a5)
{
  int v5; // eax
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // di
  char result; // al
  int v9; // eax
  bool v10; // zf

  v5 = *(_DWORD *)a1 & a2;
  v6 = sub_100336DB(a4, a3 & *(_DWORD *)(a1 + 4) & 0xFFFFF);
  v7 = v6;
  if ( !a5 )
    return v6 >= 8u;
  v9 = sub_1003528D();
  switch ( v9 )
  {
    case 0:
      return sub_1007834A((__int64 *)a1, a2, a3, a4);
    case 512:
      result = 0;
      if ( v7 && *(_DWORD *)(a1 + 4) >= 0 )
      {
        if ( *(_DWORD *)(a1 + 4) <= 0 )
          v10 = *(_DWORD *)a1 == 0;
        return 1;
      }
      break;
    case 256:
      result = 0;
      if ( v7 && *(_DWORD *)(a1 + 4) <= 0 )
      {
        if ( *(_DWORD *)(a1 + 4) < 0 )
          return 1;
        v10 = *(_DWORD *)a1 == 0;
      }
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
// 100336DB: using guessed type int __fastcall sub_100336DB(_DWORD, _DWORD);
// 1003528D: using guessed type int sub_1003528D(void);

//----- (10078F26) --------------------------------------------------------
int __cdecl sub_10078F26(int a1, char *a2, unsigned int a3, int a4, int a5, signed int a6, int a7, char a8, int a9, int a10, int a11)
{
  int v12; // ebx
  char v13; // cl
  int v14; // ecx
  bool v15; // zf
  int v16; // esi
  int v17; // [esp-4h] [ebp-18h]
  char v18; // [esp+10h] [ebp-4h]

  if ( !a2 )
  {
    *(_BYTE *)(a11 + 28) = 1;
    *(_DWORD *)(a11 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a11);
    return 22;
  }
  if ( !a3 || !a4 )
  {
    *(_BYTE *)(a11 + 28) = 1;
    *(_DWORD *)(a11 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a11);
    return 22;
  }
  v12 = 0;
  if ( !a5 )
  {
    *(_BYTE *)(a11 + 28) = 1;
    *(_DWORD *)(a11 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a11);
    return 22;
  }
  if ( a6 == 65 || a6 == 69 || a6 == 70 || (v18 = 0, a6 == 71) )
    v18 = 1;
  v13 = a8;
  if ( a8 & 8 )
    goto LABEL_23;
  v14 = sub_10034EFA(a1);
  if ( !v14 )
  {
    v13 = a8;
LABEL_23:
    if ( v13 & 0x10 )
      v17 = 3;
    else
      v17 = 2;
    if ( v13 & 0x20 )
      v12 = a10;
    if ( a6 > 97 )
    {
      v16 = a6 - 101;
      v15 = a6 == 101;
    }
    else
    {
      if ( a6 == 97 || a6 == 65 )
        return sub_10078415(a1, a2, a3, a4, a5, a7, v18, v17, v12, a11);
      v16 = a6 - 69;
      v15 = a6 == 69;
    }
    if ( v15 )
      return sub_1007880D((double *)a1, a2, a3, a4, a5, a7, v18, v17, v12, a11);
    if ( v16 == 1 )
      return sub_10078A81((double *)a1, a2, a3, a4, a5, a7, v12, a11);
    return sub_10078C65((double *)a1, a2, a3, a4, a5, a7, v18, v17, v12, a11);
  }
  if ( *(_DWORD *)(a1 + 4) <= 0 )
  {
    if ( *(_DWORD *)(a1 + 4) < 0 )
      return sub_10078D67(v14, 1u, a2, a3, v18);
    v15 = *(_DWORD *)a1 == 0;
  }
  return sub_10078D67(v14, 0, a2, a3, v18);
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034EFA: using guessed type _DWORD __cdecl sub_10034EFA(_DWORD);

//----- (10079122) --------------------------------------------------------
int __cdecl sub_10079122(int a1, LPSTR lpMultiByteStr, int cbMultiByte, WCHAR WideCharStr, int a5)
{
  LPSTR v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // edx
  int v9; // edi
  signed int v10; // eax
  int result; // eax
  int v12; // eax
  signed int v13; // ebx
  signed int v14; // [esp-4h] [ebp-1Ch]
  int v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]

  v5 = lpMultiByteStr;
  v6 = cbMultiByte;
  if ( !lpMultiByteStr && cbMultiByte )
  {
    if ( a1 )
      *(_DWORD *)a1 = 0;
    return 0;
  }
  if ( a1 )
    *(_DWORD *)a1 = -1;
  v7 = a5;
  if ( (unsigned int)cbMultiByte > 0x7FFFFFFF )
  {
    v14 = 22;
LABEL_40:
    v13 = v14;
    *(_DWORD *)(v7 + 24) = v14;
    *(_BYTE *)(v7 + 28) = 1;
    sub_10034B08(0, 0, 0, 0, 0, v7);
    return v13;
  }
  if ( !*(_BYTE *)(a5 + 20) )
  {
    sub_100343EC(a5);
    v5 = lpMultiByteStr;
    v6 = cbMultiByte;
  }
  v8 = *(_DWORD *)(v7 + 12);
  v16 = *(_DWORD *)(v8 + 8);
  if ( v16 != 65001 )
  {
    if ( !*(_DWORD *)(v8 + 168) )
    {
      v17 = 255;
      if ( WideCharStr > 0xFFu )
      {
        if ( v5 && v6 )
          sub_10034388(v5, 0, v6);
        goto LABEL_23;
      }
      if ( !v5 )
      {
LABEL_28:
        if ( a1 )
          *(_DWORD *)a1 = 1;
        return 0;
      }
      if ( v6 )
      {
        *v5 = WideCharStr;
        goto LABEL_28;
      }
LABEL_39:
      v14 = 34;
      goto LABEL_40;
    }
    v17 = 0;
    v12 = sub_100361AB(v16, 0, &WideCharStr, 1, v5, v6, 0, (int)&v17);
    if ( v12 )
    {
      if ( !v17 )
      {
        if ( a1 )
          *(_DWORD *)a1 = v12;
        return 0;
      }
    }
    else if ( GetLastError() == 122 )
    {
      if ( lpMultiByteStr && (unsigned int)cbMultiByte > 0 )
        sub_10034388(lpMultiByteStr, 0, cbMultiByte);
      goto LABEL_39;
    }
LABEL_23:
    result = 42;
    *(_DWORD *)(v7 + 24) = 42;
    *(_BYTE *)(v7 + 28) = 1;
    return result;
  }
  v9 = 0;
  v15 = 0;
  v16 = 0;
  v10 = sub_10035A53(v5, WideCharStr, &v15, v7);
  if ( a1 )
    *(_DWORD *)a1 = v10;
  if ( v10 <= 4 )
    return 0;
  if ( *(_BYTE *)(v7 + 28) )
    v9 = *(_DWORD *)(v7 + 24);
  return v9;
}
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035A53: using guessed type _DWORD __cdecl sub_10035A53(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1007946C) --------------------------------------------------------
int __cdecl sub_1007946C(LPWSTR lpWideCharStr, LPCSTR lpMultiByteStr, int a3, int a4)
{
  _DWORD *v4; // eax
  int result; // eax
  int v6; // ecx
  UINT CodePage; // [esp+Ch] [ebp-4h]

  if ( lpMultiByteStr && a3 )
  {
    if ( !*lpMultiByteStr )
    {
      if ( lpWideCharStr )
        *lpWideCharStr = 0;
      return 0;
    }
    if ( !*(_BYTE *)(a4 + 20) )
      sub_100343EC(a4);
    v4 = *(_DWORD **)(a4 + 12);
    CodePage = v4[2];
    if ( CodePage == 65001 )
    {
      result = sub_1003345B(lpWideCharStr, lpMultiByteStr, a3, &dword_100B1CAC, a4);
      if ( result >= 0 )
        return result;
      return -1;
    }
    if ( !v4[42] )
    {
      if ( lpWideCharStr )
        *lpWideCharStr = *(unsigned __int8 *)lpMultiByteStr;
      return 1;
    }
    if ( *(_WORD *)(*v4 + 2 * *(unsigned __int8 *)lpMultiByteStr) >= 0 )
    {
      if ( sub_100336B8(CodePage, 9, lpMultiByteStr, 1, lpWideCharStr, lpWideCharStr != 0) )
        return 1;
    }
    else
    {
      v6 = *(_DWORD *)(*(_DWORD *)(a4 + 12) + 4);
      if ( v6 > 1 && a3 >= v6 && sub_100336B8(CodePage, 9, lpMultiByteStr, v6, lpWideCharStr, lpWideCharStr != 0)
        || (unsigned int)a3 >= *(_DWORD *)(*(_DWORD *)(a4 + 12) + 4) && lpMultiByteStr[1] )
      {
        return *(_DWORD *)(*(_DWORD *)(a4 + 12) + 4);
      }
    }
    *(_BYTE *)(a4 + 28) = 1;
    *(_DWORD *)(a4 + 24) = 42;
    return -1;
  }
  dword_100B1CAC = 0;
  dword_100B1CB0 = 0;
  return 0;
}
// 1003345B: using guessed type _DWORD __cdecl sub_1003345B(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 100B1CAC: using guessed type int dword_100B1CAC;
// 100B1CB0: using guessed type int dword_100B1CB0;

//----- (1007967C) --------------------------------------------------------
signed int __cdecl sub_1007967C(int a1)
{
  int v1; // ecx

  if ( a1 )
    return *(_DWORD *)(a1 + 16);
  *(_DWORD *)sub_10034888(v1) = 22;
  sub_10034711();
  return -1;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (10079708) --------------------------------------------------------
signed int sub_10079708()
{
  signed int v0; // eax
  int v2; // edi
  char *v3; // esi
  int v4; // eax

  v0 = dword_100B1CB8;
  if ( !dword_100B1CB8 )
  {
    v0 = 512;
LABEL_5:
    dword_100B1CB8 = v0;
    goto LABEL_6;
  }
  if ( dword_100B1CB8 < 3 )
  {
    v0 = 3;
    goto LABEL_5;
  }
LABEL_6:
  lpMem = (LPVOID)sub_1003558A(v0, 4);
  sub_1003603E(0);
  if ( !lpMem )
  {
    dword_100B1CB8 = 3;
    lpMem = (LPVOID)sub_1003558A(3, 4);
    sub_1003603E(0);
    if ( !lpMem )
      return -1;
  }
  v2 = 0;
  v3 = (char *)&unk_100B0298;
  do
  {
    sub_10035477((LPCRITICAL_SECTION)(v3 + 32), 0xFA0u, 0);
    *((_DWORD *)lpMem + v2) = v3;
    v4 = *((_DWORD *)&lpCriticalSection[v2 >> 6][1].DebugInfo + 14 * (v2 & 0x3F));
    if ( v4 == -1 || v4 == -2 || !v4 )
      *((_DWORD *)v3 + 4) = -2;
    v3 += 56;
    ++v2;
  }
  while ( v3 != (char *)&unk_100B0340 );
  return 0;
}
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 100B1CB8: using guessed type int dword_100B1CB8;

//----- (10079802) --------------------------------------------------------
char *__cdecl sub_10079802(int a1)
{
  return (char *)&unk_100B0298 + 56 * a1;
}

//----- (10079816) --------------------------------------------------------
int sub_10079816()
{
  int v0; // esi
  int result; // eax

  sub_100338F7();
  sub_1003639F();
  v0 = 0;
  do
  {
    sub_10034554(*(_DWORD *)((char *)lpMem + v0));
    DeleteCriticalSection((LPCRITICAL_SECTION)(*(_DWORD *)((char *)lpMem + v0) + 32));
    v0 += 4;
  }
  while ( v0 != 12 );
  result = sub_1003603E(lpMem);
  lpMem = 0;
  return result;
}
// 100338F7: using guessed type int sub_100338F7(void);
// 10034554: using guessed type _DWORD __cdecl sub_10034554(_DWORD);
// 1003639F: using guessed type int sub_1003639F(void);

//----- (100798CC) --------------------------------------------------------
void __cdecl sub_100798CC(int a1)
{
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
}

//----- (100798E5) --------------------------------------------------------
void __cdecl sub_100798E5(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
}

//----- (100798FE) --------------------------------------------------------
BOOL sub_100798FE()
{
  return dword_100B1CC8 == (__security_cookie | 1);
}
// 100B1CC8: using guessed type int dword_100B1CC8;

//----- (1007994C) --------------------------------------------------------
signed __int16 __cdecl sub_1007994C(WCHAR WideCharStr, int a2, int a3)
{
  signed __int16 result; // ax
  signed __int16 v4; // di

  if ( a2 )
  {
    sub_10033262(a2);
    v4 = sub_10035C29(WideCharStr, a2, a3);
    sub_10033893(a2);
    result = v4;
  }
  else
  {
    *(_BYTE *)(a3 + 28) = 1;
    *(_DWORD *)(a3 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a3);
    result = -1;
  }
  return result;
}
// 10033262: using guessed type _DWORD __cdecl sub_10033262(_DWORD);
// 10033893: using guessed type _DWORD __cdecl sub_10033893(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10079A00) --------------------------------------------------------
unsigned __int16 __cdecl sub_10079A00(unsigned __int16 a1, int a2, int a3)
{
  bool v3; // sf
  unsigned __int16 result; // ax

  v3 = *(_DWORD *)(a2 + 8) - 2 < 0;
  *(_DWORD *)(a2 + 8) -= 2;
  if ( v3 )
    return sub_10035369(a1, a2, a3);
  result = a1;
  **(_WORD **)a2 = a1;
  *(_DWORD *)a2 += 2;
  return result;
}
// 10035369: using guessed type int __cdecl sub_10035369(_DWORD, _DWORD, _DWORD);

//----- (10079A84) --------------------------------------------------------
WCHAR __cdecl sub_10079A84(WCHAR WideCharStr, int a2, int a3)
{
  char *v4; // esi
  int v5; // esi
  int v6; // ecx
  LPCRITICAL_SECTION v7; // eax
  _BYTE *v8; // eax
  char v9; // al
  int v10; // esi
  int v11; // esi
  int v12; // [esp-8h] [ebp-20h]
  int v13; // [esp+8h] [ebp-10h]
  CHAR MultiByteStr[8]; // [esp+Ch] [ebp-Ch]

  if ( (*(_DWORD *)(a2 + 12) >> 12) & 1 )
    return sub_10079A00(WideCharStr, a2, a3);
  v4 = (char *)&unk_100B0460;
  if ( sub_10035DFA(a2) == -1 || sub_10035DFA(a2) == -2 )
  {
    v8 = &unk_100B0460;
  }
  else
  {
    v5 = sub_10035DFA(a2) >> 6;
    v6 = 56 * (sub_10035DFA(a2) & 0x3F);
    v7 = lpCriticalSection[v5];
    v4 = (char *)&unk_100B0460;
    v8 = (char *)v7 + v6;
  }
  v9 = v8[41];
  if ( v9 == 2 || v9 == 1 )
  {
    v12 = a3;
    return sub_10079A00(WideCharStr, a2, v12);
  }
  if ( sub_10035DFA(a2) != -1 && sub_10035DFA(a2) != -2 )
  {
    v10 = sub_10035DFA(a2) >> 6;
    v4 = (char *)lpCriticalSection[v10] + 56 * (sub_10035DFA(a2) & 0x3F);
  }
  v12 = a3;
  if ( v4[40] >= 0 )
    return sub_10079A00(WideCharStr, a2, v12);
  if ( !sub_10034E28((int)&v13, MultiByteStr, 5, WideCharStr, a3) )
  {
    v11 = 0;
    if ( v13 <= 0 )
      return WideCharStr;
    while ( sub_10034B17(MultiByteStr[v11], a2, a3) != -1 )
    {
      if ( ++v11 >= v13 )
        return WideCharStr;
    }
  }
  return -1;
}
// 10034B17: using guessed type _DWORD __cdecl sub_10034B17(_DWORD, _DWORD, _DWORD);
// 10035DFA: using guessed type _DWORD __cdecl sub_10035DFA(_DWORD);
// 10079A84: using guessed type CHAR MultiByteStr[8];

//----- (10079C37) --------------------------------------------------------
signed __int16 __cdecl sub_10079C37(WCHAR WideCharStr, int a2)
{
  signed __int16 v2; // si
  int v4; // [esp+4h] [ebp-28h]

  sub_10033AD2(0);
  v2 = sub_1007994C(WideCharStr, a2, (int)&v4);
  sub_100343D8(&v4);
  return v2;
}
// 10033AD2: using guessed type _DWORD __stdcall sub_10033AD2(_DWORD);
// 100343D8: using guessed type int __thiscall sub_100343D8(_DWORD);

//----- (10079C94) --------------------------------------------------------
signed int __cdecl sub_10079C94(int a1, int a2, int a3)
{
  int v3; // edi
  int v5; // eax
  int v6; // edx
  int v7; // ebx
  char *v8; // ecx
  signed int v9; // eax
  int v10; // esi
  char *v11; // [esp+14h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  v3 = a2;
  if ( !a2 )
  {
    *(_BYTE *)(a3 + 28) = 1;
    *(_DWORD *)(a3 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a3);
    return -1;
  }
  sub_10033262(a2);
  ms_exc.registration.TryLevel = 0;
  if ( (*(_DWORD *)(a2 + 12) >> 12) & 1 )
    goto LABEL_21;
  v5 = sub_10035DFA(a2);
  if ( v5 == -1 || v5 == -2 )
  {
    v8 = (char *)&unk_100B0460;
    v11 = (char *)&unk_100B0460;
    v6 = v5 >> 6;
    v7 = v5 & 0x3F;
  }
  else
  {
    v6 = v5 >> 6;
    v7 = v5 & 0x3F;
    v11 = (char *)lpCriticalSection[v5 >> 6] + 56 * v7;
    v8 = (char *)&unk_100B0460;
  }
  v3 = a2;
  if ( v11[41] )
    goto LABEL_22;
  if ( v5 != -1 && v5 != -2 )
    v8 = (char *)lpCriticalSection[v6] + 56 * v7;
  if ( v8[45] & 1 )
LABEL_22:
    v9 = 0;
  else
LABEL_21:
    v9 = 1;
  if ( !v9 )
  {
    *(_BYTE *)(a3 + 28) = 1;
    *(_DWORD *)(a3 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a3);
    sub_1003420C(&__security_cookie, &ms_exc.registration, -2);
    return -1;
  }
  v10 = sub_10034B17(a1, v3, a3);
  sub_10033893(v3);
  return v10;
}
// 10033262: using guessed type _DWORD __cdecl sub_10033262(_DWORD);
// 10033893: using guessed type _DWORD __cdecl sub_10033893(_DWORD);
// 1003420C: using guessed type _DWORD __cdecl sub_1003420C(_DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034B17: using guessed type _DWORD __cdecl sub_10034B17(_DWORD, _DWORD, _DWORD);
// 10035DFA: using guessed type _DWORD __cdecl sub_10035DFA(_DWORD);

//----- (10079E56) --------------------------------------------------------
int __cdecl sub_10079E56(int a1, _DWORD *a2, int a3)
{
  bool v3; // sf

  v3 = a2[2]-- - 1 < 0;
  if ( v3 )
    return sub_1003323F(a1, a2, a3);
  *(_BYTE *)(*a2)++ = a1;
  return (unsigned __int8)a1;
}
// 1003323F: using guessed type int __cdecl sub_1003323F(_DWORD, _DWORD, _DWORD);

//----- (10079EBB) --------------------------------------------------------
signed int __cdecl sub_10079EBB(int a1, int a2)
{
  signed int v2; // esi
  char v4; // [esp+4h] [ebp-28h]

  sub_10033AD2(0);
  v2 = sub_10079C94(a1, a2, (int)&v4);
  sub_100343D8(&v4);
  return v2;
}
// 10033AD2: using guessed type _DWORD __stdcall sub_10033AD2(_DWORD);
// 100343D8: using guessed type int __thiscall sub_100343D8(_DWORD);

//----- (10079FB1) --------------------------------------------------------
bool __cdecl sub_10079FB1(int a1)
{
  int v1; // eax

  if ( a1 == sub_1003485B(2) )
    return 1;
  if ( a1 != sub_1003485B(1) )
    return 0;
  v1 = sub_10035DFA(a1);
  return sub_10036246(v1) != 0;
}
// 1003485B: using guessed type _DWORD __cdecl sub_1003485B(_DWORD);
// 10035DFA: using guessed type _DWORD __cdecl sub_10035DFA(_DWORD);
// 10036246: using guessed type _DWORD __cdecl sub_10036246(_DWORD);

//----- (10079FFE) --------------------------------------------------------
char __cdecl sub_10079FFE(int a1)
{
  int *v1; // edi

  if ( !(unsigned __int8)sub_1003571A(a1) )
    return 0;
  if ( a1 == sub_1003485B(1) )
  {
    v1 = &dword_100B1CCC;
  }
  else
  {
    if ( a1 != sub_1003485B(2) )
      return 0;
    v1 = &dword_100B1CD0;
  }
  ++dword_100B1CC4;
  if ( *(_DWORD *)(a1 + 12) & 0x4C0 )
    return 0;
  _InterlockedOr((volatile signed __int32 *)(a1 + 12), 0x282u);
  if ( !*v1 )
  {
    *v1 = sub_10034C52(0x1000u);
    sub_1003603E(0);
  }
  if ( *v1 )
  {
    *(_DWORD *)(a1 + 4) = *v1;
    *(_DWORD *)a1 = *v1;
    *(_DWORD *)(a1 + 8) = 4096;
    *(_DWORD *)(a1 + 24) = 4096;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 2;
    *(_DWORD *)(a1 + 4) = a1 + 20;
    *(_DWORD *)a1 = a1 + 20;
    *(_DWORD *)(a1 + 24) = 2;
  }
  return 1;
}
// 1003485B: using guessed type _DWORD __cdecl sub_1003485B(_DWORD);
// 1003571A: using guessed type _DWORD __cdecl sub_1003571A(_DWORD);
// 100B1CC4: using guessed type int dword_100B1CC4;
// 100B1CCC: using guessed type int dword_100B1CCC;
// 100B1CD0: using guessed type int dword_100B1CD0;

//----- (1007A0D3) --------------------------------------------------------
int __cdecl sub_1007A0D3(char a1, int a2, int a3)
{
  int result; // eax

  if ( a1 )
  {
    result = *(_DWORD *)(a2 + 12) >> 9;
    if ( result & 1 )
    {
      sub_10034D92(a2, a3);
      _InterlockedAnd((volatile signed __int32 *)(a2 + 12), 0xFFFFFD7F);
      result = 0;
      *(_DWORD *)(a2 + 24) = 0;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)a2 = 0;
    }
  }
  return result;
}
// 10034D92: using guessed type _DWORD __cdecl sub_10034D92(_DWORD, _DWORD);

//----- (1007A136) --------------------------------------------------------
int __stdcall sub_1007A136(_DWORD *a1, int a2, _DWORD *a3)
{
  sub_100360E8(*a1);
  _InterlockedIncrement(*(volatile signed __int32 **)(**(_DWORD **)a2 + 72));
  return sub_10033799(*a3);
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);

//----- (1007A19C) --------------------------------------------------------
int __stdcall sub_1007A19C(_DWORD *a1, int a2, _DWORD *a3)
{
  void *v3; // ecx

  sub_100360E8(*a1);
  v3 = *(void **)(**(_DWORD **)a2 + 72);
  if ( v3 && !_InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) && v3 != &unk_100B04A8 )
    sub_1003603E(v3);
  return sub_10033799(*a3);
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);

//----- (1007A221) --------------------------------------------------------
int __stdcall sub_1007A221(_DWORD *a1, int **a2, _DWORD *a3)
{
  sub_100360E8(*a1);
  sub_1007AA33(**a2, 0);
  return sub_10033799(*a3);
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);

//----- (1007A28B) --------------------------------------------------------
int __stdcall sub_1007A28B(_DWORD *a1, int a2, _DWORD *a3)
{
  sub_100360E8(*a1);
  sub_1007AA33(**(_DWORD **)a2, ***(_DWORD ***)(a2 + 4));
  return sub_10033799(*a3);
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);

//----- (1007A5A9) --------------------------------------------------------
int __cdecl sub_1007A5A9(int a1, char a2)
{
  int v3; // [esp+0h] [ebp-14h]
  int *v4; // [esp+4h] [ebp-10h]
  int *v5; // [esp+8h] [ebp-Ch]
  char *v6; // [esp+Ch] [ebp-8h]

  *(_DWORD *)(a1 + 24) = 1;
  *(_DWORD *)a1 = &unk_100A5848;
  *(_DWORD *)(a1 + 848) = 1;
  *(_DWORD *)(a1 + 72) = &unk_100B04A8;
  *(_WORD *)(a1 + 108) = 67;
  *(_WORD *)(a1 + 370) = 67;
  *(_DWORD *)(a1 + 844) = 0;
  v4 = &a1;
  v6 = (char *)5;
  v3 = 5;
  sub_1007A136(&v3, (int)&v4, &v6);
  v5 = &a1;
  v6 = &a2;
  v3 = 4;
  v4 = (int *)4;
  return sub_1007A28B(&v4, (int)&v5, &v3);
}

//----- (1007A686) --------------------------------------------------------
int __stdcall sub_1007A686(LPVOID lpMem)
{
  int result; // eax

  if ( lpMem )
  {
    sub_1007A6AF((LPVOID *)lpMem);
    result = sub_1003603E(lpMem);
  }
  return result;
}

//----- (1007A6AF) --------------------------------------------------------
int __cdecl sub_1007A6AF(LPVOID *a1)
{
  LPVOID *v1; // eax
  int v3; // [esp+0h] [ebp-10h]
  LPVOID **v4; // [esp+4h] [ebp-Ch]
  int v5; // [esp+8h] [ebp-8h]

  v1 = a1;
  if ( *a1 != &unk_100A5848 )
  {
    sub_1003603E(*a1);
    v1 = a1;
  }
  sub_1003603E(v1[15]);
  sub_1003603E(a1[12]);
  sub_1003603E(a1[13]);
  sub_1003603E(a1[14]);
  sub_1003603E(a1[10]);
  sub_1003603E(a1[11]);
  sub_1003603E(a1[16]);
  sub_1003603E(a1[17]);
  sub_1003603E(a1[216]);
  v4 = &a1;
  v5 = 5;
  v3 = 5;
  sub_1007A19C(&v3, (int)&v4, &v5);
  v4 = &a1;
  v3 = 4;
  v5 = 4;
  return sub_1007A221(&v5, (int **)&v4, &v3);
}

//----- (1007AA33) --------------------------------------------------------
int __cdecl sub_1007AA33(int a1, int a2)
{
  int v2; // eax
  int result; // eax

  if ( *(_DWORD *)(a1 + 76) )
  {
    sub_1003575B(*(_DWORD *)(a1 + 76));
    v2 = *(_DWORD *)(a1 + 76);
    if ( v2 != dword_100B1CD8[0] && (wchar_t **)v2 != &off_100B0370 && !*(_DWORD *)(v2 + 12) )
      sub_1003636D(*(LPVOID *)(a1 + 76));
  }
  result = a2;
  *(_DWORD *)(a1 + 76) = a2;
  if ( a2 )
    result = sub_1003421B(a2);
  return result;
}
// 1003421B: using guessed type _DWORD __cdecl sub_1003421B(_DWORD);
// 1003575B: using guessed type _DWORD __cdecl sub_1003575B(_DWORD);
// 100B0370: using guessed type wchar_t *off_100B0370;
// 100B1CD8: using guessed type int dword_100B1CD8[];

//----- (1007AAA9) --------------------------------------------------------
int sub_1007AAA9()
{
  int result; // eax
  void *v1; // esi

  result = dword_100B0364;
  if ( dword_100B0364 != -1 )
  {
    result = sub_10034748(dword_100B0364);
    v1 = (void *)result;
    if ( result )
    {
      sub_1003352D(dword_100B0364, 0);
      result = sub_1007A686(v1);
    }
  }
  return result;
}
// 1003352D: using guessed type _DWORD __stdcall sub_1003352D(_DWORD, _DWORD);
// 10034748: using guessed type _DWORD __stdcall sub_10034748(_DWORD);
// 100B0364: using guessed type int dword_100B0364;

//----- (1007AAE0) --------------------------------------------------------
int sub_1007AAE0()
{
  DWORD v0; // edi
  int v1; // eax
  int v2; // eax
  int v3; // ebx
  void *v4; // eax
  void *v5; // esi
  int v6; // edx
  int v7; // ecx

  v0 = GetLastError();
  v1 = dword_100B0364;
  if ( dword_100B0364 != -1 )
  {
    v2 = sub_10034748(dword_100B0364);
    if ( v2 )
    {
      v3 = v2 != -1 ? v2 : 0;
      goto LABEL_13;
    }
    v1 = dword_100B0364;
  }
  if ( sub_1003352D(v1, -1) )
  {
    v4 = (void *)sub_1003558A(1, 868);
    v5 = v4;
    if ( v4 )
    {
      if ( sub_1003352D(dword_100B0364, v4) )
      {
        sub_1007A5A9((int)v5, (unsigned int)dword_100B1CD8);
        sub_1003603E(0);
        v3 = (int)v5;
      }
      else
      {
        v3 = 0;
        sub_1003352D(dword_100B0364, 0);
        sub_1003603E(v5);
      }
    }
    else
    {
      v3 = 0;
      sub_1003352D(dword_100B0364, 0);
      sub_1003603E(0);
    }
  }
  else
  {
    v3 = 0;
  }
LABEL_13:
  SetLastError(v0);
  if ( !v3 )
    sub_100354D1(v7, v6);
  return v3;
}
// 1003352D: using guessed type _DWORD __stdcall sub_1003352D(_DWORD, _DWORD);
// 10034748: using guessed type _DWORD __stdcall sub_10034748(_DWORD);
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 100B0364: using guessed type int dword_100B0364;
// 100B1CD8: using guessed type int dword_100B1CD8[];

//----- (1007ABC9) --------------------------------------------------------
void *sub_1007ABC9()
{
  int v0; // eax
  void *v1; // eax
  int v2; // edx
  int v3; // ecx
  void *v4; // esi
  void *v5; // eax
  int v7; // [esp-4h] [ebp-8h]

  v0 = dword_100B0364;
  if ( dword_100B0364 != -1 )
  {
    v1 = (void *)sub_10034748(dword_100B0364);
    v4 = v1;
    if ( v1 )
    {
      if ( v1 != (void *)-1 )
        return v4;
LABEL_14:
      sub_100354D1(v3, v2);
    }
    v0 = dword_100B0364;
  }
  if ( !sub_1003352D(v0, -1) )
    goto LABEL_14;
  v5 = (void *)sub_1003558A(1, 868);
  v4 = v5;
  if ( !v5 )
  {
    sub_1003352D(dword_100B0364, 0);
    sub_1003603E(v4);
LABEL_9:
    v3 = v7;
    goto LABEL_14;
  }
  if ( !sub_1003352D(dword_100B0364, v5) )
  {
    sub_1003352D(dword_100B0364, 0);
    sub_1003603E(v4);
    goto LABEL_9;
  }
  sub_1007A5A9((int)v4, (unsigned int)dword_100B1CD8);
  sub_1003603E(0);
  return v4;
}
// 1003352D: using guessed type _DWORD __stdcall sub_1003352D(_DWORD, _DWORD);
// 10034748: using guessed type _DWORD __stdcall sub_10034748(_DWORD);
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 100B0364: using guessed type int dword_100B0364;
// 100B1CD8: using guessed type int dword_100B1CD8[];

//----- (1007AC84) --------------------------------------------------------
int sub_1007AC84()
{
  DWORD v0; // edi
  int v1; // eax
  int v2; // eax
  int v3; // ebx
  void *v4; // eax
  void *v5; // esi

  v0 = GetLastError();
  v1 = dword_100B0364;
  if ( dword_100B0364 != -1 )
  {
    v2 = sub_10034748(dword_100B0364);
    if ( v2 )
    {
      v3 = v2 != -1 ? v2 : 0;
      goto LABEL_13;
    }
    v1 = dword_100B0364;
  }
  if ( sub_1003352D(v1, -1) )
  {
    v4 = (void *)sub_1003558A(1, 868);
    v5 = v4;
    if ( v4 )
    {
      if ( sub_1003352D(dword_100B0364, v4) )
      {
        sub_1007A5A9((int)v5, (unsigned int)dword_100B1CD8);
        sub_1003603E(0);
        v3 = (int)v5;
      }
      else
      {
        v3 = 0;
        sub_1003352D(dword_100B0364, 0);
        sub_1003603E(v5);
      }
    }
    else
    {
      v3 = 0;
      sub_1003352D(dword_100B0364, 0);
      sub_1003603E(0);
    }
  }
  else
  {
    v3 = 0;
  }
LABEL_13:
  SetLastError(v0);
  return v3;
}
// 1003352D: using guessed type _DWORD __stdcall sub_1003352D(_DWORD, _DWORD);
// 10034748: using guessed type _DWORD __stdcall sub_10034748(_DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 100B0364: using guessed type int dword_100B0364;
// 100B1CD8: using guessed type int dword_100B1CD8[];

//----- (1007AD61) --------------------------------------------------------
int __cdecl sub_1007AD61(int a1, int a2)
{
  int v2; // eax
  int v3; // edi
  char *v4; // eax
  char *v5; // esi
  char *v6; // eax

  v2 = dword_100B0364;
  v3 = 0;
  if ( dword_100B0364 != -1 )
  {
    v4 = (char *)sub_10034748(dword_100B0364);
    v5 = v4;
    if ( v4 )
    {
      if ( v4 != (char *)-1 )
        return (int)&v5[868 * a2];
      return v3;
    }
    v2 = dword_100B0364;
  }
  if ( sub_1003352D(v2, -1) )
  {
    v6 = (char *)sub_1003558A(1, 868);
    v5 = v6;
    if ( !v6 )
    {
      sub_1003352D(dword_100B0364, 0);
      sub_1003603E(0);
      return v3;
    }
    if ( !sub_1003352D(dword_100B0364, v6) )
    {
      sub_1003352D(dword_100B0364, 0);
      sub_1003603E(v5);
      return v3;
    }
    sub_1007A5A9((int)v5, (unsigned int)dword_100B1CD8);
    sub_1003603E(0);
    return (int)&v5[868 * a2];
  }
  return v3;
}
// 1003352D: using guessed type _DWORD __stdcall sub_1003352D(_DWORD, _DWORD);
// 10034748: using guessed type _DWORD __stdcall sub_10034748(_DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 100B0364: using guessed type int dword_100B0364;
// 100B1CD8: using guessed type int dword_100B1CD8[];

//----- (1007AE2C) --------------------------------------------------------
char sub_1007AE2C()
{
  dword_100B0364 = sub_100360B6(sub_1007A686);
  if ( dword_100B0364 == -1 )
    return 0;
  if ( !sub_10036340() )
  {
    sub_10034BA3(0);
    return 0;
  }
  return 1;
}
// 10034BA3: using guessed type int __cdecl sub_10034BA3(_DWORD);
// 100360B6: using guessed type _DWORD __stdcall sub_100360B6(_DWORD);
// 10036340: using guessed type int sub_10036340(void);
// 100B0364: using guessed type int dword_100B0364;

//----- (1007AE63) --------------------------------------------------------
char sub_1007AE63()
{
  if ( dword_100B0364 != -1 )
  {
    sub_10033433(dword_100B0364);
    dword_100B0364 = -1;
  }
  return 1;
}
// 10033433: using guessed type _DWORD __stdcall sub_10033433(_DWORD);
// 100B0364: using guessed type int dword_100B0364;

//----- (1007AE8F) --------------------------------------------------------
int sub_1007AE8F()
{
  return 0;
}

//----- (1007AED4) --------------------------------------------------------
int __stdcall sub_1007AED4(_DWORD *a1, UINT ***a2, _DWORD *a3)
{
  sub_100360E8(*a1);
  sub_1007B58C(a2);
  return sub_10033799(*a3);
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);

//----- (1007AF34) --------------------------------------------------------
int __stdcall sub_1007AF34(_DWORD *a1, int a2, _DWORD *a3)
{
  sub_100360E8(*a1);
  _InterlockedIncrement(*(volatile signed __int32 **)(**(_DWORD **)a2 + 4));
  return sub_10033799(*a3);
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);

//----- (1007AF9A) --------------------------------------------------------
int __stdcall sub_1007AF9A(_DWORD *a1, _DWORD ***a2, _DWORD *a3)
{
  sub_100360E8(*a1);
  sub_1003421B(***a2);
  return sub_10033799(*a3);
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 1003421B: using guessed type _DWORD __cdecl sub_1003421B(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);

//----- (1007B003) --------------------------------------------------------
int __stdcall sub_1007B003(int a1, _DWORD *a2, int **a3)
{
  int result; // eax

  sub_1007B482(a2);
  result = **a3;
  *(_DWORD *)(result + 848) &= 0xFFFFFFEF;
  return result;
}

//----- (1007B059) --------------------------------------------------------
int __stdcall sub_1007B059(_DWORD *a1, int a2, _DWORD *a3)
{
  int *i; // esi

  sub_100360E8(*a1);
  for ( i = dword_100B1CD8; i != (int *)&unk_100B1CDC; ++i )
  {
    if ( (wchar_t **)*i != &off_100B0370 )
      *i = sub_10034153(i, &off_100B0370);
  }
  return sub_10033799(*a3);
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 10034153: using guessed type _DWORD __cdecl sub_10034153(_DWORD, _DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);
// 100B0370: using guessed type wchar_t *off_100B0370;
// 100B1CD8: using guessed type int dword_100B1CD8[];

//----- (1007B384) --------------------------------------------------------
_DWORD *__thiscall sub_1007B384(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v4; // edi

  v4 = this;
  this[2] = a4;
  *this = a2;
  this[1] = a3;
  *((_BYTE *)this + 12) = 0;
  if ( sub_10035B93(a2, a3, a4 + 592, 85) )
  {
    sub_1003465D(0, 0, 0, 0, 0);
    JUMPOUT(*(_DWORD *)algn_1007B3CD);
  }
  return v4;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1007B422) --------------------------------------------------------
void __thiscall sub_1007B422(_BYTE *this)
{
  if ( !this[12] && sub_10035B93(*((_DWORD *)this + 2) + 592, 85, *(_DWORD *)this, *((_DWORD *)this + 1)) )
  {
    sub_1003465D(0, 0, 0, 0, 0);
    JUMPOUT(*(_DWORD *)byte_1007B451);
  }
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1007B482) --------------------------------------------------------
int __thiscall sub_1007B482(_DWORD *this)
{
  _DWORD *v1; // edi
  int v2; // eax
  int v3; // esi
  int result; // eax
  _DWORD *v5; // [esp+8h] [ebp-20h]
  int v6; // [esp+Ch] [ebp-1Ch]
  int v7; // [esp+10h] [ebp-18h]
  int v8; // [esp+14h] [ebp-14h]
  int v9; // [esp+18h] [ebp-10h]
  int v10; // [esp+1Ch] [ebp-Ch]
  int v11; // [esp+20h] [ebp-8h]

  v1 = this;
  v2 = sub_1003558A(1, 184);
  v3 = v2;
  *(_DWORD *)*v1 = v2;
  result = sub_1003603E(0);
  if ( v3 )
  {
    v5 = (_DWORD *)*v1;
    v6 = v1[1];
    v7 = v1[2];
    v8 = v1[3];
    v9 = v1[4];
    v11 = 4;
    v10 = 4;
    result = sub_1007AED4(&v10, (UINT ***)&v5, &v11);
  }
  return result;
}
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);

//----- (1007B58C) --------------------------------------------------------
int __thiscall sub_1007B58C(UINT ***this)
{
  UINT ***v1; // esi
  int v2; // eax
  const unsigned __int16 *v3; // eax
  int v4; // eax
  int result; // eax

  v1 = this;
  sub_1007BB95(**this, (_DWORD *)(*this[1])[19]);
  v2 = sub_1007C6F3(**v1, (int)*v1[3], (__int16 *)*v1[4]);
  *v1[2] = (UINT *)v2;
  if ( v2 )
  {
    v3 = (const unsigned __int16 *)*v1[4];
    if ( v3 )
    {
      v4 = wcscmp(v3, (const unsigned __int16 *)&unk_100B0458);
      if ( v4 )
        v4 = -(v4 < 0) | 1;
      if ( v4 )
        _InterlockedExchange(&dword_100B1CD4, 1);
    }
    sub_10034153(*v1[1] + 19, **v1);
    sub_1003575B(**v1);
    result = (int)*v1[1];
    if ( !(*(_BYTE *)(result + 848) & 2) && !(dword_100B0AD0 & 1) )
    {
      sub_10034153(dword_100B1CD8, *(_DWORD *)(result + 76));
      off_100B0B38 = *(void ***)(dword_100B1CD8[0] + 136);
      off_100B0AC8 = *(wchar_t **)dword_100B1CD8[0];
      result = *(_DWORD *)(dword_100B1CD8[0] + 4);
      dword_100B045C = *(_DWORD *)(dword_100B1CD8[0] + 4);
    }
  }
  else
  {
    sub_1003575B(**v1);
    result = sub_1003636D(**v1);
  }
  return result;
}
// 10034153: using guessed type _DWORD __cdecl sub_10034153(_DWORD, _DWORD);
// 1003575B: using guessed type _DWORD __cdecl sub_1003575B(_DWORD);
// 100B045C: using guessed type int dword_100B045C;
// 100B0AC8: using guessed type wchar_t *off_100B0AC8;
// 100B0AD0: using guessed type int dword_100B0AD0;
// 100B0B38: using guessed type void **off_100B0B38;
// 100B1CD4: using guessed type int dword_100B1CD4;
// 100B1CD8: using guessed type int dword_100B1CD8[];

//----- (1007B70D) --------------------------------------------------------
int __thiscall sub_1007B70D(_DWORD *this, int a2, int a3)
{
  if ( sub_10035B93(this[2] + 592, 85, a2, a3) )
  {
    sub_1003465D(0, 0, 0, 0, 0);
    JUMPOUT(*(_DWORD *)byte_1007B750);
  }
  return sub_10035C83(a2, a3);
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);
// 10035C83: using guessed type _DWORD __stdcall sub_10035C83(_DWORD, _DWORD);

//----- (1007B762) --------------------------------------------------------
int __thiscall sub_1007B762(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // esi
  int result; // eax

  v3 = this;
  result = sub_10035B93(*this, this[1], a2, a3);
  if ( result )
  {
    sub_1003465D(0, 0, 0, 0, 0);
    JUMPOUT(*(_DWORD *)byte_1007B796);
  }
  *((_BYTE *)v3 + 12) = 1;
  return result;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1007B816) --------------------------------------------------------
int __cdecl sub_1007B816(int a1)
{
  unsigned int v1; // eax
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // edi

  if ( !a1 )
    return 0;
  v1 = sub_10034B3F(a1, 85);
  v2 = v1;
  if ( v1 >= 0x55 )
    return 0;
  v3 = sub_10034C52(2 * v1 + 2);
  v4 = v3;
  if ( !v3 )
    return 0;
  if ( sub_10035B93(v3, v2 + 1, a1, v2 + 1) )
  {
    sub_1003465D(0, 0, 0, 0, 0);
    JUMPOUT(*(_DWORD *)byte_1007B875);
  }
  return v4;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034B3F: using guessed type _DWORD __cdecl sub_10034B3F(_DWORD, _DWORD);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1007B88E) --------------------------------------------------------
signed __int32 sub_1007B88E()
{
  return _InterlockedExchange(&dword_100B1CD4, 1);
}
// 100B1CD4: using guessed type int dword_100B1CD4;

//----- (1007B89B) --------------------------------------------------------
int sub_1007B89B()
{
  int v1; // [esp+0h] [ebp-Ch]
  int v2; // [esp+4h] [ebp-8h]
  char v3; // [esp+Bh] [ebp-1h]

  v2 = 4;
  v1 = 4;
  return sub_1007B059(&v1, (int)&v3, &v2);
}

//----- (1007B903) --------------------------------------------------------
int __cdecl sub_1007B903(int a1, int a2, int a3)
{
  int result; // eax

  if ( sub_10034824(a1, a2, a3) )
  {
    sub_1003465D(0, 0, 0, 0, 0);
    JUMPOUT(*(_DWORD *)byte_1007B972);
  }
  result = a3 + 128;
  if ( *(_WORD *)(a3 + 128) )
    result = sub_10035D4B(a1, a2, 2);
  if ( *(_WORD *)(a3 + 256) )
    result = sub_10035D4B(a1, a2, 2);
  return result;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034824: using guessed type _DWORD __cdecl sub_10034824(_DWORD, _DWORD, _DWORD);
// 10035D4B: using guessed type _DWORD __cdecl sub_10035D4B(_DWORD, _DWORD, _DWORD);

//----- (1007B98F) --------------------------------------------------------
signed int __cdecl sub_1007B98F(int a1, _WORD *a2)
{
  int v2; // esi
  unsigned int v4; // eax
  int v5; // ebx
  signed int v6; // eax
  int v7; // eax
  int v8; // [esp+Ch] [ebp-8h]
  int i; // [esp+10h] [ebp-4h]

  sub_10034388(a1, 0, 458);
  v2 = (int)a2;
  if ( !*a2 )
    return 0;
  if ( *a2 == 46 && a2[1] )
  {
    if ( sub_10035B93(a1 + 256, 16, a2 + 1, 15) )
    {
LABEL_30:
      sub_1003465D(0, 0, 0, 0, 0);
      JUMPOUT(*(_DWORD *)byte_1007BACB);
    }
    *(_WORD *)(a1 + 286) = 0;
    return 0;
  }
  for ( i = 0; ; i = v6 + 1 )
  {
    v4 = sub_100346C1(v2, L"_.,");
    if ( !v4 )
      break;
    v5 = *(unsigned __int16 *)(v2 + 2 * v4);
    v8 = v2 + 2 * v4;
    if ( i )
    {
      if ( i == 1 )
      {
        if ( v4 >= 0x40 || v5 == 95 )
          return -1;
        v7 = sub_10035B93(a1 + 128, 64, v2, v4);
      }
      else
      {
        if ( i != 2 || v4 >= 0x10 || (_WORD)v5 && (_WORD)v5 != 44 )
          return -1;
        v7 = sub_10035B93(a1 + 256, 16, v2, v4);
      }
      if ( v7 )
        goto LABEL_30;
    }
    else
    {
      if ( v4 >= 0x40 )
        return -1;
      if ( sub_10035B93(a1, 64, v2, v4) )
        goto LABEL_30;
      if ( (_WORD)v5 == 46 )
      {
        v6 = 1;
        goto LABEL_27;
      }
    }
    if ( (_WORD)v5 == 44 || !(_WORD)v5 )
      return 0;
    v6 = i;
LABEL_27:
    v2 = v8 + 2;
  }
  return -1;
}
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100346C1: using guessed type _DWORD __cdecl sub_100346C1(_DWORD, _DWORD);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);
// 100A5DC4: using guessed type wchar_t asc_100A5DC4[4];

//----- (1007BB95) --------------------------------------------------------
void __cdecl sub_1007BB95(_DWORD *a1, _DWORD *a2)
{
  if ( a2 && a1 && a1 != a2 )
  {
    qmemcpy(a1, a2, 0xB8u);
    a1[3] = 0;
    sub_1003421B(a1);
  }
}
// 1003421B: using guessed type _DWORD __cdecl sub_1003421B(_DWORD);

//----- (1007BC4C) --------------------------------------------------------
const unsigned __int16 *__cdecl sub_1007BC4C(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  const unsigned __int16 *v6; // ebx
  const unsigned __int16 *result; // eax
  bool v8; // zf
  int v9; // eax
  __int16 *v10; // edi
  int v11; // edx
  _WORD *v12; // ecx
  __int16 v13; // ax
  unsigned int v14; // edi
  int v15; // eax
  _WORD *v16; // eax
  bool v17; // cf
  int v18; // eax
  BOOL v19; // ebx
  _DWORD *v20; // ebx
  int v21; // eax
  char *v22; // ecx
  __int16 v23; // ax
  int v24; // edi
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  unsigned __int16 v28; // ax
  char *v29; // ecx
  __int16 v30; // ax
  int v31; // ST08_4
  char v32; // [esp+Ch] [ebp-1FCh]
  int v33; // [esp+1Ch] [ebp-1ECh]
  unsigned int v34; // [esp+20h] [ebp-1E8h]
  _DWORD *v35; // [esp+24h] [ebp-1E4h]
  int v36; // [esp+28h] [ebp-1E0h]
  _WORD *v37; // [esp+2Ch] [ebp-1DCh]
  const unsigned __int16 *v38; // [esp+30h] [ebp-1D8h]
  int v39; // [esp+34h] [ebp-1D4h]
  WCHAR LCData[2]; // [esp+38h] [ebp-1D0h]
  unsigned __int16 v41; // [esp+138h] [ebp-D0h]
  unsigned __int16 v42; // [esp+13Ah] [ebp-CEh]
  unsigned __int16 v43; // [esp+13Ch] [ebp-CCh]
  __int16 v44; // [esp+13Eh] [ebp-CAh]
  __int16 v45; // [esp+140h] [ebp-C8h]
  __int16 v46; // [esp+142h] [ebp-C6h]
  char v47; // [esp+158h] [ebp-B0h]
  __int16 v48; // [esp+15Ah] [ebp-AEh]

  v6 = (const unsigned __int16 *)a2;
  v35 = a6;
  result = 0;
  v33 = a2;
  if ( a1 )
  {
    v8 = *(_WORD *)a1 == 67;
    v36 = 0;
    if ( v8 && !*(_WORD *)(a1 + 2) )
    {
      if ( !sub_10034824(a2, a3, L"C") )
      {
        *v35 = 0;
        return v6;
      }
LABEL_66:
      sub_1003465D(0, 0, 0, 0, 0);
      JUMPOUT(*(_DWORD *)byte_1007C011);
    }
    v9 = sub_10034E4B() + 80;
    v39 = v9 + 24;
    v6 = (const unsigned __int16 *)(v9 + 290);
    v38 = (const unsigned __int16 *)(v9 + 290);
    v37 = (_WORD *)(v9 + 28);
    sub_10034149(a4, a5, v9);
    v10 = (__int16 *)a1;
    v11 = 0;
    v12 = (_WORD *)(a1 + 2);
    do
    {
      v13 = *v10;
      ++v10;
    }
    while ( v13 );
    v14 = v10 - v12;
    v34 = v14;
    if ( v14 < 0x83 )
    {
      v15 = wcscmp(v6, (const unsigned __int16 *)a1);
      if ( v15 )
        v15 = -(v15 < 0) | 1;
      if ( !v15 )
        goto LABEL_60;
      v16 = v37;
      v12 = (_WORD *)a1;
      while ( 1 )
      {
        LOWORD(v11) = *v16;
        v17 = *v16 < *v12;
        if ( *v16 != *v12 )
          break;
        if ( !(_WORD)v11 )
          goto LABEL_17;
        LOWORD(v11) = v16[1];
        v17 = (unsigned __int16)v11 < v12[1];
        if ( (_WORD)v11 != v12[1] )
          break;
        v16 += 2;
        v12 += 2;
        if ( !(_WORD)v11 )
        {
LABEL_17:
          v18 = 0;
          goto LABEL_19;
        }
      }
      v18 = -v17 | 1;
LABEL_19:
      if ( !v18 )
        goto LABEL_60;
    }
    v19 = (unsigned __int8)sub_10035BD4(v12, v11) == 0;
    if ( sub_10035E72(LCData, a1) )
    {
      v20 = (_DWORD *)v39;
    }
    else
    {
      v8 = v19 == 0;
      v20 = (_DWORD *)v39;
      if ( v8 )
        v21 = sub_10034662((int)LCData, v39, LCData);
      else
        v21 = sub_10035544((int)LCData, v39, LCData);
      if ( v21 )
      {
        v6 = v38;
        sub_10035567(v38, 131, LCData);
        v22 = &v47;
        do
        {
          v23 = *(_WORD *)v22;
          v22 += 2;
        }
        while ( v23 != (_WORD)v36 );
        sub_10035C83(&v47, ((v22 - (char *)&v48) >> 1) + 1);
        v24 = v14 + 1;
LABEL_55:
        if ( *(_WORD *)a1 && v34 < 0x83 )
        {
          if ( sub_10035B93(v37, 131, a1, v24) )
            goto LABEL_66;
        }
        else
        {
          *v37 = 0;
        }
LABEL_60:
        v31 = v33;
        *v35 = *(_DWORD *)v39;
        if ( sub_10034824(v31, a3, v6) )
          goto LABEL_66;
LABEL_63:
        sub_10034EA5(&v32);
        return v6;
      }
    }
    if ( sub_100344C3(a1) )
    {
      v24 = v14 + 1;
      *v20 = (unsigned __int16)sub_1007CF84(a1);
      v6 = v38;
      if ( sub_10035B93(v38, 131, a1, v24) )
        goto LABEL_66;
      sub_10036269(a1, v24);
      goto LABEL_55;
    }
    if ( sub_1007CFBE((int)LCData, (const unsigned __int16 *)a1) && sub_100344C3(&v47) )
    {
      if ( !v41 )
      {
        v28 = sub_1007CF84((int)&v47);
        goto LABEL_51;
      }
      v25 = v41;
      if ( (unsigned int)v41 - 65 <= 0x19 )
        v25 = v41 + 32;
      if ( v25 == 117 )
      {
        v26 = v42;
        if ( (unsigned int)v42 - 65 <= 0x19 )
          v26 = v42 + 32;
        if ( v26 == 116 )
        {
          v27 = v43;
          if ( (unsigned int)v43 - 65 <= 0x19 )
            v27 = v43 + 32;
          if ( v27 == 102 && v44 == 56 && !v45 )
            goto LABEL_70;
        }
      }
      if ( v44 == 45 && v45 == 56 && !v46 )
      {
LABEL_70:
        v28 = -535;
LABEL_51:
        v24 = v14 + 1;
        *v20 = v28;
        v6 = v38;
        if ( sub_10035B93(v38, 131, a1, v24) )
          goto LABEL_66;
        v29 = &v47;
        do
        {
          v30 = *(_WORD *)v29;
          v29 += 2;
        }
        while ( v30 != (_WORD)v36 );
        sub_10036269(&v47, ((v29 - (char *)&v48) >> 1) + 1);
        goto LABEL_55;
      }
    }
    v6 = 0;
    goto LABEL_63;
  }
  return result;
}
// 10034149: using guessed type _DWORD __stdcall sub_10034149(_DWORD, _DWORD, _DWORD);
// 100344C3: using guessed type _DWORD __stdcall sub_100344C3(_DWORD);
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034824: using guessed type _DWORD __cdecl sub_10034824(_DWORD, _DWORD, _DWORD);
// 10034EA5: using guessed type int __thiscall sub_10034EA5(_DWORD);
// 10035567: using guessed type _DWORD __cdecl sub_10035567(_DWORD, _DWORD, _DWORD);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);
// 10035BD4: using guessed type int __fastcall sub_10035BD4(_DWORD, _DWORD);
// 10035C83: using guessed type _DWORD __stdcall sub_10035C83(_DWORD, _DWORD);
// 10035E72: using guessed type _DWORD __cdecl sub_10035E72(_DWORD, _DWORD);
// 10036269: using guessed type _DWORD __stdcall sub_10036269(_DWORD, _DWORD);
// 100A5DC0: using guessed type wchar_t aC_0[2];

//----- (1007C1B0) --------------------------------------------------------
int sub_1007C1B0()
{
  return sub_10033799(5);
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);

//----- (1007C1BC) --------------------------------------------------------
int sub_1007C1BC()
{
  return sub_10033799(4);
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);

//----- (1007C2B6) --------------------------------------------------------
_DWORD *__cdecl sub_1007C2B6(unsigned int a1, __int16 *a2)
{
  _DWORD *v2; // edi
  _DWORD *v3; // ebx
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  _DWORD *v6; // ecx
  _DWORD *v7; // ecx
  void *v8; // ST0C_4
  int v10; // [esp-10h] [ebp-14h]
  int v11; // [esp-10h] [ebp-14h]
  int v12; // [esp-Ch] [ebp-10h]
  _DWORD *v13; // [esp+0h] [ebp-4h]

  if ( a1 <= 5 && a2 )
  {
    v2 = (_DWORD *)sub_1003558A(1, 8);
    v13 = v2;
    if ( !v2 )
    {
      v3 = 0;
      *(_DWORD *)sub_10034888(v12) = 12;
LABEL_16:
      sub_1003603E(v2);
      return v3;
    }
    v4 = (_DWORD *)sub_1003558A(1, 184);
    if ( !v4 )
    {
      v3 = 0;
      *(_DWORD *)sub_10034888(v10) = 12;
LABEL_15:
      sub_1003603E(v4);
      goto LABEL_16;
    }
    v5 = (_DWORD *)sub_1003558A(1, 544);
    if ( v5 )
    {
      sub_1007BB95(v4, &off_100B0370);
      if ( sub_1007C6F3(v4, a1, a2) && !sub_10035CA6(v4[2], v5) )
      {
        v6 = v4;
        *v5 = 1;
        v4 = 0;
        v3 = v13;
        *v13 = v6;
        v7 = v5;
        v5 = 0;
        v13[1] = v7;
        v13 = 0;
LABEL_14:
        sub_1003603E(v5);
        v2 = v13;
        goto LABEL_15;
      }
      sub_1003575B(v4);
      v8 = v4;
      v4 = 0;
      sub_1003636D(v8);
    }
    else
    {
      *(_DWORD *)sub_10034888(v11) = 12;
    }
    v3 = 0;
    goto LABEL_14;
  }
  return 0;
}
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 1003575B: using guessed type _DWORD __cdecl sub_1003575B(_DWORD);
// 10035CA6: using guessed type _DWORD __cdecl sub_10035CA6(_DWORD, _DWORD);
// 100B0370: using guessed type wchar_t *off_100B0370;

//----- (1007C3FE) --------------------------------------------------------
void __cdecl sub_1007C3FE(int a1, int a2, int a3)
{
  int v3; // esi
  int *v4; // edi

  v3 = 0;
  if ( a3 > 0 )
  {
    v4 = &a3;
    do
    {
      ++v4;
      if ( sub_10034068(a1, a2, *v4) )
      {
        sub_1003465D(0, 0, 0, 0, 0);
        JUMPOUT(*(_DWORD *)byte_1007C43E);
      }
      ++v3;
    }
    while ( v3 < a3 );
  }
}
// 10034068: using guessed type _DWORD __cdecl sub_10034068(_DWORD, _DWORD, _DWORD);
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1007C4F2) --------------------------------------------------------
int __cdecl sub_1007C4F2(int a1)
{
  _WORD *v1; // ebx
  int result; // eax
  int v3; // edi
  int v4; // ST14_4
  const unsigned __int16 *v5; // eax
  int v6; // eax
  wchar_t *v7; // ST0C_4
  volatile signed __int32 *v8; // ecx
  volatile signed __int32 *v9; // eax
  volatile signed __int32 *v10; // ecx
  volatile signed __int32 *v11; // eax
  const unsigned __int16 **v12; // [esp+Ch] [ebp-Ch]
  signed int v13; // [esp+10h] [ebp-8h]
  wchar_t **v14; // [esp+14h] [ebp-4h]

  v13 = 1;
  v1 = (_WORD *)sub_10034C52(0x6A6u);
  result = 0;
  if ( v1 )
  {
    *(_DWORD *)v1 = 1;
    v3 = (int)(v1 + 2);
    v1[2] = 0;
    v4 = *(_DWORD *)(a1 + 48);
    v12 = (const unsigned __int16 **)(a1 + 48);
    sub_10035D4B(v1 + 2, 849, 3);
    v14 = &off_100A5CC4;
    do
    {
      if ( sub_10034068(v3, 849, L";") )
      {
        sub_1003465D(0, 0, 0, 0, 0);
        JUMPOUT(*(_DWORD *)byte_1007C68C);
      }
      v5 = *v12;
      v12 += 4;
      v6 = wcscmp(v5, *v12);
      if ( v6 )
        v6 = -(v6 < 0) | 1;
      v13 = v6 == 0 ? v13 : 0;
      v14 += 3;
      v7 = *v14;
      sub_10035D4B(v3, 849, 3);
    }
    while ( (signed int)v14 < (signed int)&off_100A5CF4 );
    if ( v13 )
    {
      sub_1003603E(v1);
      v10 = *(volatile signed __int32 **)(a1 + 40);
      if ( v10 && !_InterlockedExchangeAdd(v10, 0xFFFFFFFF) )
        sub_1003603E(*(LPVOID *)(a1 + 40));
      v11 = *(volatile signed __int32 **)(a1 + 36);
      if ( v11 && !_InterlockedDecrement(v11) )
        sub_1003603E(*(LPVOID *)(a1 + 36));
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 28) = 0;
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 32) = 0;
      result = *(_DWORD *)(a1 + 64);
    }
    else
    {
      v8 = *(volatile signed __int32 **)(a1 + 40);
      if ( v8 && !_InterlockedExchangeAdd(v8, 0xFFFFFFFF) )
        sub_1003603E(*(LPVOID *)(a1 + 40));
      v9 = *(volatile signed __int32 **)(a1 + 36);
      if ( v9 )
      {
        if ( !_InterlockedDecrement(v9) )
          sub_1003603E(*(LPVOID *)(a1 + 36));
      }
      *(_DWORD *)(a1 + 36) = 0;
      result = (int)(v1 + 2);
      *(_DWORD *)(a1 + 28) = 0;
      *(_DWORD *)(a1 + 40) = v1;
      *(_DWORD *)(a1 + 32) = v1 + 2;
    }
  }
  return result;
}
// 10034068: using guessed type _DWORD __cdecl sub_10034068(_DWORD, _DWORD, _DWORD);
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035D4B: using guessed type _DWORD __cdecl sub_10035D4B(_DWORD, _DWORD, _DWORD);
// 100A5CC4: using guessed type wchar_t *off_100A5CC4;
// 100A5CF4: using guessed type wchar_t *off_100A5CF4;
// 100A5DA8: using guessed type wchar_t asc_100A5DA8[2];

//----- (1007C6F3) --------------------------------------------------------
int __cdecl sub_1007C6F3(UINT *a1, int a2, __int16 *a3)
{
  __int16 *v3; // esi
  UINT *v4; // edi
  int result; // eax
  int v6; // ebx
  _WORD *v7; // eax
  wchar_t **v8; // ebx
  wchar_t *v9; // ecx
  wchar_t v10; // ax
  _WORD *v11; // ebx
  int v12; // esi
  UINT v13; // eax
  int v14; // ecx
  __int16 v15; // dx
  UINT *v16; // edx
  int v17; // esi
  _WORD *v18; // ecx
  __int16 *v19; // eax
  bool v20; // cf
  unsigned __int16 v21; // dx
  bool v22; // zf
  int v23; // eax
  UINT v24; // eax
  int v25; // eax
  _WORD *v26; // [esp+10h] [ebp-1CCh]
  UINT *v27; // [esp+14h] [ebp-1C8h]
  int v28; // [esp+18h] [ebp-1C4h]
  int v29; // [esp+1Ch] [ebp-1C0h]
  UINT *v30; // [esp+20h] [ebp-1BCh]
  char v31; // [esp+24h] [ebp-1B8h]
  __int16 v32[132]; // [esp+D0h] [ebp-10Ch]

  v3 = a3;
  v4 = a1;
  v27 = a1;
  if ( a2 )
  {
    if ( a3 )
      result = sub_1007CA9F(a1, a2, (int)a3);
    else
      result = a1[4 * (a2 + 2)];
    return result;
  }
  v28 = 1;
  v6 = 0;
  v30 = 0;
  if ( !a3 )
    return sub_1007C4F2((int)v4);
  if ( *a3 == 76 && a3[1] == 67 && a3[2] == 95 )
  {
    while ( 1 )
    {
      v7 = (_WORD *)sub_10034815(v3, L"=;");
      v26 = v7;
      if ( !v7 )
        return 0;
      v28 = v7 - v3;
      if ( !v28 || *v7 == 59 )
        return 0;
      v8 = &off_100A5CC4;
      v29 = 1;
      do
      {
        if ( !sub_100358A0(*v8, v3, v28) )
        {
          v9 = *v8;
          do
          {
            v10 = *v9;
            ++v9;
          }
          while ( v10 );
          if ( v28 == v9 - (*v8 + 1) )
            break;
        }
        ++v29;
        v8 += 3;
      }
      while ( (signed int)v8 <= (signed int)&off_100A5CF4 );
      v11 = v26 + 1;
      v4 = v27;
      v12 = sub_100346C1(v26 + 1, L";");
      if ( !v12 && *v11 != 59 )
        return 0;
      if ( v29 > 5 )
      {
        v14 = (int)v30;
      }
      else
      {
        if ( sub_10035B93(v32, 131, v11, v12) )
          goto LABEL_54;
        if ( (unsigned int)(2 * v12) >= 0x106 )
        {
          sub_1003331B();
LABEL_54:
          sub_1003465D(0, 0, 0, 0, 0);
          JUMPOUT(*(_DWORD *)byte_1007C9E2);
        }
        v32[v12] = 0;
        v13 = sub_1007CA9F(v4, v29, (int)v32);
        v14 = (int)v30;
        if ( v13 )
        {
          v14 = (int)v30 + 1;
          v30 = (UINT *)((char *)v30 + 1);
        }
      }
      v3 = &v11[v12];
      v15 = *v3;
      if ( *v3 )
      {
        ++v3;
        v15 = *v3;
      }
      if ( !v15 )
      {
        if ( v14 )
          return sub_1007C4F2((int)v4);
        return 0;
      }
    }
  }
  result = (int)sub_1007BC4C((int)a3, (int)v32, 131, (int)&v31, 85, &v26);
  if ( !result )
    return result;
  v16 = a1 + 8;
  v17 = 0;
  v30 = a1 + 8;
  do
  {
    if ( v17 )
    {
      v18 = (_WORD *)*v16;
      v19 = v32;
      while ( 1 )
      {
        v20 = (unsigned __int16)*v19 < *v18;
        v4 = v27;
        if ( *v19 != *v18 )
          break;
        if ( !*v19 )
          goto LABEL_39;
        v21 = v19[1];
        v20 = v21 < v18[1];
        v22 = v21 == v18[1];
        HIWORD(v29) = v19[1];
        v16 = v30;
        if ( !v22 )
          break;
        v19 += 2;
        v18 += 2;
        if ( !HIWORD(v29) )
        {
LABEL_39:
          v23 = 0;
          goto LABEL_41;
        }
      }
      v23 = -v20 | 1;
LABEL_41:
      if ( v23 )
      {
        v24 = sub_1007CA9F(v27, v17, (int)v32);
        v16 = v30;
        if ( !v24 )
        {
          v25 = 0;
          v28 = 0;
          goto LABEL_47;
        }
        ++v6;
      }
      else
      {
        ++v6;
      }
    }
    v25 = v28;
LABEL_47:
    ++v17;
    v16 += 4;
    v30 = v16;
  }
  while ( v17 <= 5 );
  if ( !v25 && !v6 )
    return 0;
  return sub_1007C4F2((int)v4);
}
// 1003331B: using guessed type int sub_1003331B(void);
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100346C1: using guessed type _DWORD __cdecl sub_100346C1(_DWORD, _DWORD);
// 10034815: using guessed type _DWORD __cdecl sub_10034815(_DWORD, _DWORD);
// 100358A0: using guessed type _DWORD __cdecl sub_100358A0(_DWORD, _DWORD, _DWORD);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);
// 100A5CC4: using guessed type wchar_t *off_100A5CC4;
// 100A5CF4: using guessed type wchar_t *off_100A5CF4;
// 100A5DA0: using guessed type wchar_t asc_100A5DA0[3];
// 100A5DA8: using guessed type wchar_t asc_100A5DA8[2];
// 1007C6F3: using guessed type __int16 var_10C[132];

//----- (1007CA9F) --------------------------------------------------------
UINT __cdecl sub_1007CA9F(UINT *a1, int a2, int a3)
{
  int v3; // ebx
  __int16 *v4; // eax
  UINT v5; // edx
  unsigned __int16 *v6; // ecx
  unsigned __int16 v7; // si
  bool v8; // cf
  bool v9; // zf
  int v10; // esi
  unsigned __int16 v11; // si
  int v12; // eax
  UINT result; // eax
  __int16 *v14; // ecx
  __int16 v15; // ax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // eax
  int v25; // edx
  UINT *v26; // ecx
  int v27; // eax
  int v28; // ecx
  UINT v29; // [esp+Ch] [ebp-2E8h]
  UINT v30; // [esp+10h] [ebp-2E4h]
  _DWORD *v31; // [esp+18h] [ebp-2DCh]
  int v32; // [esp+1Ch] [ebp-2D8h]
  _DWORD *lpMem; // [esp+20h] [ebp-2D4h]
  void *v34; // [esp+24h] [ebp-2D0h]
  int v35; // [esp+2Ch] [ebp-2C8h]
  int v36; // [esp+30h] [ebp-2C4h]
  int v37; // [esp+34h] [ebp-2C0h]
  int v38; // [esp+38h] [ebp-2BCh]
  char v39; // [esp+3Ch] [ebp-2B8h]
  WORD CharType[128]; // [esp+E8h] [ebp-20Ch]
  __int16 v41; // [esp+1E8h] [ebp-10Ch]
  __int16 v42; // [esp+1EAh] [ebp-10Ah]

  v3 = a2;
  v31 = (_DWORD *)(sub_10034E4B() + 632);
  if ( !sub_1007BC4C(a3, (int)&v41, 131, (int)&v39, 85, &v36) )
    return 0;
  v4 = &v41;
  v35 = 4 * (a2 + 2);
  v5 = a1[v35];
  v6 = (unsigned __int16 *)a1[v35];
  while ( 1 )
  {
    v7 = *v4;
    v38 = 0;
    v8 = v7 < *v6;
    v9 = v7 == *v6;
    v10 = 4 * (a2 + 2);
    if ( !v9 )
      break;
    if ( !*v4 )
      goto LABEL_7;
    v11 = v4[1];
    v8 = v11 < v6[1];
    v9 = v11 == v6[1];
    HIWORD(v37) = v4[1];
    v10 = 4 * (a2 + 2);
    if ( !v9 )
      break;
    v4 += 2;
    v6 += 2;
    if ( !HIWORD(v37) )
    {
LABEL_7:
      v12 = v38;
      goto LABEL_9;
    }
  }
  v12 = -v8 | 1;
LABEL_9:
  if ( !v12 )
    return v5;
  v14 = &v41;
  do
  {
    v15 = *v14;
    ++v14;
  }
  while ( v15 != (_WORD)v38 );
  v37 = v14 - &v42 + 1;
  v16 = sub_10034C52(2 * v37 + 4);
  lpMem = (_DWORD *)v16;
  if ( !v16 )
    return 0;
  v34 = (void *)a1[v10];
  v30 = a1[a2 + 40];
  v29 = a1[2];
  v32 = v16 + 4;
  if ( sub_10034824(v16 + 4, v37, &v41) )
  {
    sub_1003465D(v38, v38, v38, v38, v38);
    JUMPOUT(*(_DWORD *)byte_1007CE5E);
  }
  v9 = v41 == 67;
  a1[v10] = v32;
  if ( !v9 || v42 )
    v17 = sub_1003478E(&v39);
  else
    v17 = v38;
  a1[a2 + 40] = v17;
  switch ( a2 )
  {
    case 2:
      v18 = v38;
      a1[2] = v36;
      v19 = v31[9];
      v37 = v31[8];
      v36 = v19;
      while ( a1[2] != v31[2 * v18] )
      {
        v20 = v31[2 * v18];
        v21 = v31[2 * v18 + 1];
        v31[2 * v18] = v37;
        v31[2 * v18++ + 1] = v36;
        v3 = a2;
        v37 = v20;
        v36 = v21;
        if ( v18 >= 5 )
          goto LABEL_26;
      }
      if ( v18 )
      {
        v22 = v31[2 * v18 + 1];
        *v31 = v31[2 * v18];
        v23 = v37;
        v31[1] = v22;
        v31[2 * v18] = v23;
        v31[2 * v18 + 1] = v36;
      }
LABEL_26:
      if ( v18 == 5 )
      {
        if ( sub_100331CC(v38, 1u, &MultiByteStr, 127, CharType, a1[2], 1) )
        {
          v24 = v38;
          do
            CharType[v24++] &= 0x1FFu;
          while ( v24 < 0x7F );
          v25 = sub_100339C4(CharType, off_100B0368, 254) == 0;
        }
        else
        {
          v25 = v38;
        }
        v26 = v31 + 1;
        v31[1] = v25;
        *v31 = a1[2];
      }
      else
      {
        v26 = v31 + 1;
      }
      a1[6] = *v26;
      break;
    case 1:
      a1[4] = v36;
      break;
    case 5:
      a1[5] = v36;
      break;
  }
  if ( ((int (__cdecl *)(UINT *))*(&off_100A5CC0 + 3 * v3))(a1) )
  {
    a1[v35] = (UINT)v34;
    sub_1003603E((LPVOID)a1[v3 + 40]);
    a1[v3 + 40] = v30;
    sub_1003603E(lpMem);
    a1[2] = v29;
    return 0;
  }
  if ( v34 == &unk_100B0458 || _InterlockedExchangeAdd((volatile signed __int32 *)a1[4 * v3 + 10], 0xFFFFFFFF) )
  {
    v27 = 4 * (a2 + 2);
  }
  else
  {
    sub_1003603E((LPVOID)a1[4 * v3 + 10]);
    sub_1003603E((LPVOID)a1[4 * v3 + 9]);
    sub_1003603E((LPVOID)a1[v3 + 40]);
    v27 = 4 * (a2 + 2);
    v28 = v38;
    a1[v35] = v38;
    a1[v3 + 40] = v28;
  }
  *lpMem = 1;
  result = a1[v27];
  a1[4 * v3 + 10] = (UINT)lpMem;
  return result;
}
// 100339C4: using guessed type _DWORD __cdecl sub_100339C4(_DWORD, _DWORD, _DWORD);
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 1003478E: using guessed type _DWORD __cdecl sub_1003478E(_DWORD);
// 10034824: using guessed type _DWORD __cdecl sub_10034824(_DWORD, _DWORD, _DWORD);
// 100A5CC0: using guessed type int (*off_100A5CC0)();
// 100B0368: using guessed type wchar_t *off_100B0368;
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();
// 1007CA9F: using guessed type WORD CharType[128];

//----- (1007CF84) --------------------------------------------------------
signed int __cdecl sub_1007CF84(int a1)
{
  signed int result; // eax
  WCHAR LCData[2]; // [esp+0h] [ebp-4h]

  *(_DWORD *)LCData = 0;
  if ( !sub_100350B7(a1, 0x20001004u, LCData, 2) || (result = *(_DWORD *)LCData) == 0 )
    result = 65001;
  return result;
}

//----- (1007CFBE) --------------------------------------------------------
char __cdecl sub_1007CFBE(int a1, const unsigned __int16 *a2)
{
  char v2; // bl
  const unsigned __int16 *v3; // edx
  unsigned int v4; // edi
  signed int i; // eax
  unsigned int v6; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // eax
  char *v9; // esi
  const unsigned __int16 *v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // edi
  int v16; // edi
  char *v17; // eax
  signed int v19; // [esp+10h] [ebp-40h]
  const unsigned __int16 *v20; // [esp+14h] [ebp-3Ch]
  char *v21; // [esp+18h] [ebp-38h]
  char v22; // [esp+1Ch] [ebp-34h]
  char v23; // [esp+20h] [ebp-30h]
  char v24; // [esp+28h] [ebp-28h]
  int v25[3]; // [esp+34h] [ebp-1Ch]
  char v26; // [esp+40h] [ebp-10h]

  v2 = 0;
  v20 = a2;
  sub_10034388(a1, 0, 458);
  v3 = a2;
  v21 = &v23;
  v4 = 0;
LABEL_2:
  while ( 2 )
  {
    for ( i = 0; ; i = 2 )
    {
      v19 = i;
      if ( v4 >= 4 )
        return 0;
      if ( i == 2 )
      {
        v7 = wcslen(v3);
      }
      else
      {
        v6 = sub_100346C1(v3, L"-_.");
        v3 = v20;
        v7 = v6;
      }
      v8 = v21;
      ++v4;
      v9 = v21;
      v21 += 12;
      *(v8 - 1) = v3;
      v10 = &v3[v7];
      *v8 = v7;
      *((_DWORD *)v9 + 1) = v19;
      v11 = *v10;
      v3 = v10 + 1;
      v20 = v3;
      if ( !v11 )
        goto LABEL_11;
      v12 = v11 - 45;
      if ( !v12 )
        goto LABEL_2;
      v13 = v12 - 1;
      if ( v13 )
        break;
    }
    if ( v13 == 49 )
      continue;
    break;
  }
LABEL_11:
  v14 = v4 - 1;
  if ( !v14 )
    return sub_1007D25C(a1, (int *)&v22);
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( !sub_1007D25C(a1, (int *)&v22) )
      return v2;
    if ( sub_1007D3D7(a1, (int *)&v24) || sub_1007D2EA(a1, (int *)&v24) )
      return 1;
    v17 = &v24;
    goto LABEL_30;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( !sub_1007D25C(a1, (int *)&v22) )
      return v2;
    if ( sub_1007D3D7(a1, (int *)&v24) && (sub_1007D2EA(a1, v25) || sub_1007D20E(a1, v25)) )
      return 1;
    if ( !sub_1007D2EA(a1, (int *)&v24) )
      return v2;
    v17 = (char *)v25;
LABEL_30:
    if ( sub_1007D20E(a1, v17) )
      return 1;
    return v2;
  }
  if ( v16 == 1 )
  {
    if ( !sub_1007D25C(a1, (int *)&v22) || !sub_1007D3D7(a1, (int *)&v24) || !sub_1007D2EA(a1, v25) )
      return v2;
    v17 = &v26;
    goto LABEL_30;
  }
  return 0;
}
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 100346C1: using guessed type _DWORD __cdecl sub_100346C1(_DWORD, _DWORD);
// 100A5DB4: using guessed type wchar_t asc_100A5DB4[4];

//----- (1007D20E) --------------------------------------------------------
char __cdecl sub_1007D20E(int a1, _DWORD *a2)
{
  if ( a2[2] != 2 )
    return 0;
  if ( sub_10035B93(a1 + 256, 16, *a2, a2[1]) )
  {
    sub_1003465D(0, 0, 0, 0, 0);
    JUMPOUT(*(_DWORD *)byte_1007D24C);
  }
  return 1;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1007D25C) --------------------------------------------------------
char __cdecl sub_1007D25C(int a1, int *a2)
{
  if ( a2[2] || (unsigned int)(a2[1] - 2) > 1 || !sub_1007D463(*a2, a2[1]) )
    return 0;
  if ( sub_10035B93(a1, 64, *a2, a2[1]) || sub_10035B93(a1 + 288, 85, *a2, a2[1]) )
  {
    sub_1003465D(0, 0, 0, 0, 0);
    JUMPOUT(*(_DWORD *)byte_1007D2CD);
  }
  return 1;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1007D2EA) --------------------------------------------------------
char __cdecl sub_1007D2EA(int a1, int *a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v7; // [esp+Ch] [ebp-4h]

  v2 = 0;
  if ( a2[2] )
    return 0;
  if ( a2[1] != 2 || !sub_1007D463(*a2, 2u) )
  {
    if ( a2[1] == 3 )
    {
      v3 = *a2;
      v7 = *a2;
      while ( 1 )
      {
        v4 = *(unsigned __int16 *)(v3 + 2 * v2);
        v5 = sub_100353A5();
        if ( !sub_10035F03(v5, v4, 4) )
          break;
        v3 = v7;
        if ( (unsigned int)++v2 >= 3 )
          goto LABEL_8;
      }
    }
    return 0;
  }
LABEL_8:
  if ( sub_10035B93(a1 + 128, 64, *a2, a2[1])
    || sub_1003509E(a1 + 288, 85, L"-", 1)
    || sub_1003509E(a1 + 288, 85, *a2, a2[1]) )
  {
    sub_1003465D(0, 0, 0, 0, 0);
    JUMPOUT(*(_DWORD *)byte_1007D3A7);
  }
  return 1;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 1003509E: using guessed type int __cdecl sub_1003509E(_DWORD, _DWORD, _DWORD, _DWORD);
// 100353A5: using guessed type int sub_100353A5(void);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);
// 10035F03: using guessed type _DWORD __cdecl sub_10035F03(_DWORD, _DWORD, _DWORD);
// 100A5DB0: using guessed type wchar_t asc_100A5DB0[2];

//----- (1007D3D7) --------------------------------------------------------
char __cdecl sub_1007D3D7(int a1, int *a2)
{
  if ( a2[2] || a2[1] != 4 || !sub_1007D463(*a2, 4u) )
    return 0;
  if ( sub_1003509E(a1 + 288, 85, L"-", 1) || sub_1003509E(a1 + 288, 85, *a2, a2[1]) )
  {
    sub_1003465D(0, 0, 0, 0, 0);
    JUMPOUT(*(_DWORD *)byte_1007D446);
  }
  return 1;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 1003509E: using guessed type int __cdecl sub_1003509E(_DWORD, _DWORD, _DWORD, _DWORD);
// 100A5DB0: using guessed type wchar_t asc_100A5DB0[2];

//----- (1007D463) --------------------------------------------------------
char __cdecl sub_1007D463(int a1, unsigned int a2)
{
  int v2; // edi
  int v3; // esi
  int v4; // eax

  v2 = 0;
  if ( !a2 )
    return 1;
  while ( 1 )
  {
    v3 = *(unsigned __int16 *)(a1 + 2 * v2);
    v4 = sub_100353A5();
    if ( !sub_10035F03(v4, v3, 259) )
      break;
    if ( ++v2 >= a2 )
      return 1;
  }
  return 0;
}
// 100353A5: using guessed type int sub_100353A5(void);
// 10035F03: using guessed type _DWORD __cdecl sub_10035F03(_DWORD, _DWORD, _DWORD);

//----- (1007D57E) --------------------------------------------------------
void sub_1007D57E()
{
  LPBYTE v0; // ebx
  signed int v1; // esi
  int v2; // edi
  HANDLE *v3; // eax
  BYTE v4; // dl
  char *v5; // edx
  struct _STARTUPINFOW StartupInfo; // [esp+0h] [ebp-48h]
  BYTE *v7; // [esp+44h] [ebp-4h]

  GetStartupInfoW(&StartupInfo);
  if ( StartupInfo.cbReserved2 )
  {
    v0 = StartupInfo.lpReserved2;
    if ( StartupInfo.lpReserved2 )
    {
      v1 = *(_DWORD *)StartupInfo.lpReserved2;
      v7 = &StartupInfo.lpReserved2[*(_DWORD *)StartupInfo.lpReserved2 + 4];
      if ( v1 >= 0x2000 )
        v1 = 0x2000;
      sub_100349A0(v1);
      if ( v1 > dword_100B1F48 )
        v1 = dword_100B1F48;
      v2 = 0;
      if ( v1 )
      {
        v3 = (HANDLE *)v7;
        do
        {
          if ( *v3 != (HANDLE)-1 && *v3 != (HANDLE)-2 )
          {
            v4 = v0[v2 + 4];
            if ( v4 & 1 )
            {
              if ( v4 & 8 || GetFileType(*v3) )
              {
                v5 = (char *)lpCriticalSection[v2 >> 6] + 56 * (v2 & 0x3F);
                *((_DWORD *)v5 + 6) = *(_DWORD *)v7;
                v5[40] = v0[v2 + 4];
              }
              v3 = (HANDLE *)v7;
            }
          }
          ++v2;
          ++v3;
          v7 = (BYTE *)v3;
        }
        while ( v2 != v1 );
      }
    }
  }
}
// 100349A0: using guessed type _DWORD __cdecl sub_100349A0(_DWORD);
// 100B1F48: using guessed type int dword_100B1F48;

//----- (1007D661) --------------------------------------------------------
DWORD sub_1007D661()
{
  int v0; // edi
  DWORD result; // eax
  char *v2; // esi
  HANDLE v3; // eax
  HANDLE v4; // ebx

  v0 = 0;
  do
  {
    result = v0 & 0x3F;
    v2 = (char *)lpCriticalSection[v0 >> 6] + 56 * result;
    if ( *((_DWORD *)v2 + 6) == -1 || *((_DWORD *)v2 + 6) == -2 )
    {
      v2[40] = -127;
      if ( v0 )
      {
        if ( v0 == 1 )
          v3 = GetStdHandle(0xFFFFFFF5);
        else
          v3 = GetStdHandle(0xFFFFFFF4);
      }
      else
      {
        v3 = GetStdHandle(0xFFFFFFF6);
      }
      v4 = v3;
      if ( v3 != (HANDLE)-1 && v3 && (result = GetFileType(v3)) != 0 )
      {
        result = (unsigned __int8)result;
        *((_DWORD *)v2 + 6) = v4;
        if ( (unsigned __int8)result == 2 )
        {
          v2[40] |= 0x40u;
        }
        else if ( result == 3 )
        {
          v2[40] |= 8u;
        }
      }
      else
      {
        v2[40] |= 0x40u;
        *((_DWORD *)v2 + 6) = -2;
        result = (DWORD)lpMem;
        if ( lpMem )
        {
          result = *((_DWORD *)lpMem + v0);
          *(_DWORD *)(result + 16) = -2;
        }
      }
    }
    else
    {
      v2[40] |= 0x80u;
    }
    ++v0;
  }
  while ( v0 != 3 );
  return result;
}

//----- (1007D73D) --------------------------------------------------------
char sub_1007D73D()
{
  char v0; // bl

  sub_100360E8(7);
  v0 = 0;
  if ( !sub_100349A0(0) )
  {
    sub_1007D57E();
    sub_1007D661();
    v0 = 1;
  }
  sub_10033799(7);
  return v0;
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 100349A0: using guessed type _DWORD __cdecl sub_100349A0(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);

//----- (1007D7B5) --------------------------------------------------------
char sub_1007D7B5()
{
  unsigned int v0; // esi

  v0 = 0;
  do
  {
    if ( lpCriticalSection[v0] )
    {
      sub_100341D5(lpCriticalSection[v0]);
      lpCriticalSection[v0] = 0;
    }
    ++v0;
  }
  while ( v0 < 128 );
  return 1;
}

//----- (1007D7EC) --------------------------------------------------------
char sub_1007D7EC()
{
  struct _RTL_CRITICAL_SECTION *v0; // edi
  unsigned int v1; // esi

  v0 = &CriticalSection;
  v1 = 0;
  while ( sub_10035477(v0, 0xFA0u, 0) )
  {
    ++dword_100B20A0;
    v1 += 24;
    ++v0;
    if ( v1 >= 0x150 )
      return 1;
  }
  sub_1003413F(0);
  return 0;
}
// 1003413F: using guessed type int __cdecl sub_1003413F(_DWORD);
// 100B20A0: using guessed type int dword_100B20A0;

//----- (1007D83D) --------------------------------------------------------
void __cdecl sub_1007D83D(int a1)
{
  EnterCriticalSection(&CriticalSection + a1);
}

//----- (1007D859) --------------------------------------------------------
char sub_1007D859()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi

  v0 = dword_100B20A0;
  if ( dword_100B20A0 )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)((char *)&unk_100B1F38 + 24 * dword_100B20A0);
    do
    {
      DeleteCriticalSection(v1);
      --dword_100B20A0;
      --v1;
      --v0;
    }
    while ( v0 );
  }
  return 1;
}
// 100B20A0: using guessed type int dword_100B20A0;

//----- (1007D896) --------------------------------------------------------
void __cdecl sub_1007D896(int a1)
{
  LeaveCriticalSection(&CriticalSection + a1);
}

//----- (1007D8CE) --------------------------------------------------------
char sub_1007D8CE()
{
  return (*(_WORD *)(*(_DWORD *)(__readfsdword(0x18u) + 48) + 104) >> 8) & 1;
}

//----- (1007D8E4) --------------------------------------------------------
int sub_1007D8E4()
{
  return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(__readfsdword(0x18u) + 48) + 16) + 8) >> 31;
}

//----- (1007DB3D) --------------------------------------------------------
signed __int32 __thiscall sub_1007DB3D(void *this)
{
  signed __int32 result; // eax
  void *v2; // [esp+0h] [ebp-4h]

  v2 = this;
  result = dword_100B20EC;
  if ( !dword_100B20EC )
  {
    v2 = (void *)1;
    if ( !(unsigned __int8)sub_100330AA() )
      sub_10034126(&v2);
    result = (v2 == (void *)1) + 1;
    _InterlockedExchange(&dword_100B20EC, result);
  }
  return result;
}
// 100330AA: using guessed type int sub_100330AA(void);
// 10034126: using guessed type _DWORD __stdcall sub_10034126(_DWORD);
// 100B20EC: using guessed type int dword_100B20EC;

//----- (1007DB8A) --------------------------------------------------------
BOOL sub_1007DB8A()
{
  int v1; // [esp+0h] [ebp-4h]

  v1 = 0;
  if ( !(unsigned __int8)sub_100330AA() )
    sub_10034B9E(&v1);
  return v1 != 1;
}
// 100330AA: using guessed type int sub_100330AA(void);
// 10034B9E: using guessed type _DWORD __stdcall sub_10034B9E(_DWORD);

//----- (1007DBBA) --------------------------------------------------------
signed __int32 sub_1007DBBA()
{
  signed __int32 v0; // esi
  signed int v2; // [esp-4h] [ebp-Ch]
  int v3; // [esp+4h] [ebp-4h]

  v0 = dword_100B20F0;
  if ( !dword_100B20F0 )
  {
    v0 = 2;
    v3 = 2;
    if ( !(unsigned __int8)sub_100330AA() )
      sub_10035B16(&v3);
    if ( !v3 )
      goto LABEL_10;
    if ( v3 != 1 )
    {
      if ( v3 != 2 )
      {
        if ( v3 == 3 )
        {
          v2 = 3;
LABEL_11:
          v0 = v2;
          goto LABEL_12;
        }
LABEL_10:
        v2 = 4;
        goto LABEL_11;
      }
      v0 = 1;
    }
LABEL_12:
    _InterlockedExchange(&dword_100B20F0, v0);
  }
  return v0;
}
// 100330AA: using guessed type int sub_100330AA(void);
// 10035B16: using guessed type _DWORD __stdcall sub_10035B16(_DWORD);
// 100B20F0: using guessed type int dword_100B20F0;

//----- (1007DC2B) --------------------------------------------------------
LPVOID __cdecl sub_1007DC2B(unsigned int a1, unsigned int a2)
{
  int v2; // ecx
  SIZE_T v3; // esi
  int v4; // eax
  int v5; // ST08_4
  LPVOID result; // eax

  if ( a1 && 0xFFFFFFE0 / a1 < a2 )
  {
LABEL_9:
    *(_DWORD *)sub_10034888(v2) = 12;
    result = 0;
  }
  else
  {
    v3 = a2 * a1;
    if ( !(a2 * a1) )
      v3 = 1;
    while ( 1 )
    {
      result = HeapAlloc(hHeap, 8u, v3);
      if ( result )
        break;
      if ( sub_10035139() )
      {
        v4 = sub_10034CD9(v3);
        v2 = v5;
        if ( v4 )
          continue;
      }
      goto LABEL_9;
    }
  }
  return result;
}
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10034CD9: using guessed type _DWORD __cdecl sub_10034CD9(_DWORD);
// 10035139: using guessed type int sub_10035139(void);

//----- (1007DC9F) --------------------------------------------------------
signed int __cdecl sub_1007DC9F(unsigned int a1, unsigned int a2)
{
  signed int result; // eax

  if ( a2 <= a1 )
    result = a2 < a1;
  else
    result = -1;
  return result;
}

//----- (1007DCBD) --------------------------------------------------------
signed int __cdecl sub_1007DCBD(unsigned int a1, unsigned int a2)
{
  signed int result; // eax

  if ( a2 <= a1 )
    result = a2 < a1;
  else
    result = -1;
  return result;
}

//----- (1007DCDB) --------------------------------------------------------
int __cdecl sub_1007DCDB(LPCSTR lpMultiByteStr, int a2, int a3, UINT CodePage)
{
  int v4; // esi
  int result; // eax
  unsigned int v6; // eax
  DWORD v7; // eax
  int v8; // ST14_4
  int v9; // eax

  if ( !lpMultiByteStr )
  {
    v4 = a2;
    sub_1003440A(a2);
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
LABEL_3:
    *(_DWORD *)(v4 + 16) = 0;
    return 0;
  }
  if ( *lpMultiByteStr )
  {
    v6 = sub_100336B8(CodePage, 9, lpMultiByteStr, -1, 0, 0);
    if ( v6 )
    {
      if ( v6 > *(_DWORD *)(a2 + 12) )
      {
        result = sub_10034A63(v6);
        if ( result )
          return result;
      }
      v9 = sub_100336B8(CodePage, 9, lpMultiByteStr, -1, *(LPWSTR *)(a2 + 8), *(_DWORD *)(a2 + 12));
      if ( v9 )
      {
        *(_DWORD *)(a2 + 16) = v9 - 1;
        return 0;
      }
    }
    v7 = GetLastError();
    sub_10035297(v7);
    return *(_DWORD *)sub_10034888(v8);
  }
  v4 = a2;
  if ( *(_DWORD *)(a2 + 12) || (result = sub_10034A63(1)) == 0 )
  {
    **(_WORD **)(a2 + 8) = 0;
    goto LABEL_3;
  }
  return result;
}
// 1003440A: using guessed type int __thiscall sub_1003440A(_DWORD);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10034A63: using guessed type _DWORD __stdcall sub_10034A63(_DWORD);
// 10035297: using guessed type _DWORD __cdecl sub_10035297(_DWORD);

//----- (1007DDB9) --------------------------------------------------------
int __cdecl sub_1007DDB9(LPCWSTR lpWideCharStr, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax
  SIZE_T v6; // eax
  DWORD v7; // eax
  int v8; // ST1C_4
  int v9; // eax
  DWORD v10; // eax
  int v11; // ST18_4

  if ( !lpWideCharStr )
  {
    v4 = a2;
    sub_10034D51(a2);
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
LABEL_3:
    *(_DWORD *)(v4 + 16) = 0;
    return 0;
  }
  if ( *lpWideCharStr )
  {
    v6 = sub_100361AB(a4, 0, lpWideCharStr, -1, 0, 0, 0, 0);
    if ( v6 )
    {
      if ( v6 <= *(_DWORD *)(a2 + 12) || (result = sub_10033B54(v6)) == 0 )
      {
        v9 = sub_10034D0B(a4, lpWideCharStr, *(LPSTR *)(a2 + 8), *(_DWORD *)(a2 + 12));
        if ( v9 )
        {
          *(_DWORD *)(a2 + 16) = v9 - 1;
          result = 0;
        }
        else
        {
          v10 = GetLastError();
          sub_10035297(v10);
          result = *(_DWORD *)sub_10034888(v11);
        }
      }
    }
    else
    {
      v7 = GetLastError();
      sub_10035297(v7);
      result = *(_DWORD *)sub_10034888(v8);
    }
  }
  else
  {
    v4 = a2;
    if ( *(_DWORD *)(a2 + 12) || (result = sub_10033B54(1u)) == 0 )
    {
      **(_BYTE **)(a2 + 8) = 0;
      goto LABEL_3;
    }
  }
  return result;
}
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10034D51: using guessed type int __thiscall sub_10034D51(_DWORD);
// 10035297: using guessed type _DWORD __cdecl sub_10035297(_DWORD);

//----- (1007DEB0) --------------------------------------------------------
int __cdecl sub_1007DEB0(LPCSTR lpMultiByteStr, int a2, UINT CodePage)
{
  int v3; // ecx
  int v5; // [esp-2h] [ebp-4h]

  v5 = v3;
  return sub_10033B04(lpMultiByteStr, a2, (int)&v5 + 3, CodePage);
}

//----- (1007DED4) --------------------------------------------------------
int __cdecl sub_1007DED4(LPCWSTR lpWideCharStr, int a2, int a3)
{
  int v3; // ecx
  int v5; // [esp-2h] [ebp-4h]

  v5 = v3;
  return sub_100335E1(lpWideCharStr, a2, (int)&v5 + 3, a3);
}

//----- (1007DEF8) --------------------------------------------------------
signed int __cdecl sub_1007DEF8(LPCSTR *a1, _DWORD *a2)
{
  int v2; // ecx
  signed int result; // eax
  int v4; // ecx
  LPCSTR *v5; // ebx
  const char **v6; // edi
  LPCSTR v7; // eax
  int v8; // eax
  signed int v9; // esi
  int v10; // eax
  const char **v11; // esi
  int v12; // ebx
  unsigned int v13; // eax
  const char *v14; // edx
  int v15; // eax
  int v16; // esi
  int v17; // eax
  int v18; // ebx
  int v19; // edx
  const char *v20; // ecx
  const char *v21; // ST0C_4
  int v22; // edx
  int v23; // [esp+4h] [ebp-20h]
  const char **v24; // [esp+8h] [ebp-1Ch]
  int v25; // [esp+Ch] [ebp-18h]
  int v26; // [esp+10h] [ebp-14h]
  int v27; // [esp+14h] [ebp-10h]
  const char *v28; // [esp+18h] [ebp-Ch]
  unsigned int v29; // [esp+1Ch] [ebp-8h]
  const char *v30; // [esp+20h] [ebp-4h]

  if ( a2 )
  {
    *a2 = 0;
    v4 = 0;
    v25 = 0;
    v5 = a1;
    v6 = 0;
    v24 = 0;
    v23 = 0;
    v7 = *a1;
    if ( *a1 )
    {
      while ( 1 )
      {
        LOWORD(v30) = 16170;
        BYTE2(v30) = 0;
        v8 = sub_1003400E(v7, &v30);
        if ( v8 )
        {
          v10 = sub_1007E4B8(*v5, v8, (int)&v23);
          if ( v10 )
          {
            v9 = v10;
            goto LABEL_16;
          }
        }
        else
        {
          v9 = sub_1007E2FA(*v5, 0, 0, (int)&v23);
          if ( v9 )
            goto LABEL_16;
        }
        ++v5;
        v7 = *v5;
        if ( !*v5 )
        {
          v6 = (const char **)v23;
          v4 = (int)v24;
          break;
        }
      }
    }
    v11 = v6;
    v12 = ((v4 - (signed int)v6) >> 2) + 1;
    v13 = 0;
    while ( 1 )
    {
      v29 = v13;
      if ( v11 == (const char **)v4 )
        break;
      v14 = *v11;
      v28 = *v11 + 1;
      v13 = &v14[strlen(v14) + 1] - v28 + v29 + 1;
      ++v11;
    }
    v15 = sub_10035DB4(((v4 - (signed int)v6) >> 2) + 1, v13, 1);
    v16 = v15;
    if ( v15 )
    {
      v17 = v15 + 4 * v12;
      v18 = (int)v24;
      v27 = v17;
      v19 = v17;
      v30 = (const char *)v17;
      if ( v6 != v24 )
      {
        v26 = v16 - (_DWORD)v6;
        do
        {
          v20 = *v6;
          v28 = *v6 + 1;
          v21 = *v6;
          v28 = (const char *)(&v20[strlen(v20) + 1] - v28 + 1);
          if ( sub_10033F3C(v19, v29 + v27 - v19, v21, v28) )
          {
            sub_1003465D(0, 0, 0, 0, 0);
            JUMPOUT(*(_DWORD *)byte_1007E074);
          }
          v22 = (int)v30;
          *(const char **)((char *)v6 + v26) = v30;
          ++v6;
          v19 = (int)&v28[v22];
          v30 = (const char *)v19;
        }
        while ( v6 != (const char **)v18 );
      }
      *a2 = v16;
      sub_1003603E(0);
      sub_1007EC5E((LPVOID **)&v23);
      result = 0;
    }
    else
    {
      sub_1003603E(0);
      v9 = -1;
LABEL_16:
      sub_1007EC5E((LPVOID **)&v23);
      result = v9;
    }
  }
  else
  {
    *(_DWORD *)sub_10034888(v2) = 22;
    sub_10034711();
    result = 22;
  }
  return result;
}
// 10033F3C: using guessed type int __cdecl sub_10033F3C(_DWORD, _DWORD, _DWORD, _DWORD);
// 1003400E: using guessed type _DWORD __cdecl sub_1003400E(_DWORD, _DWORD);
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10035DB4: using guessed type _DWORD __cdecl sub_10035DB4(_DWORD, _DWORD, _DWORD);

//----- (1007E0D4) --------------------------------------------------------
signed int __cdecl sub_1007E0D4(LPCWSTR *a1, _DWORD *a2)
{
  int v2; // ecx
  LPCWSTR *v3; // esi
  signed int result; // eax
  __int16 **v5; // edi
  LPCWSTR v6; // eax
  int v7; // edx
  int v8; // eax
  signed int v9; // edi
  int v10; // eax
  __int16 **v11; // esi
  int v12; // ebx
  int v13; // eax
  __int16 *v14; // ecx
  __int16 v15; // ax
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // ebx
  int v20; // edx
  __int16 *v21; // ecx
  __int16 v22; // ax
  __int16 *v23; // ST0C_4
  int v24; // edx
  int v25; // [esp+8h] [ebp-2Ch]
  int v26; // [esp+10h] [ebp-24h]
  __int16 **v27; // [esp+14h] [ebp-20h]
  int v28; // [esp+18h] [ebp-1Ch]
  int v29; // [esp+1Ch] [ebp-18h]
  int v30; // [esp+20h] [ebp-14h]
  __int16 *v31; // [esp+24h] [ebp-10h]
  int v32; // [esp+28h] [ebp-Ch]
  __int16 v33; // [esp+2Ch] [ebp-8h]

  v3 = a1;
  if ( a2 )
  {
    *a2 = 0;
    v5 = 0;
    v6 = *a1;
    v7 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        v32 = 4128810;
        v33 = 0;
        v8 = sub_10034815(v6, &v32);
        if ( v8 )
        {
          v10 = sub_1007E7DE(*v3, v8, (int)&v26);
          if ( v10 )
          {
            v9 = v10;
            goto LABEL_18;
          }
        }
        else
        {
          v9 = sub_1007E3D7(*v3, 0, 0, (int)&v26);
          if ( v9 )
            goto LABEL_18;
        }
        ++v3;
        v6 = *v3;
        if ( !*v3 )
        {
          v5 = (__int16 **)v26;
          v7 = (int)v27;
          break;
        }
      }
    }
    v11 = v5;
    v12 = ((v7 - (signed int)v5) >> 2) + 1;
    v13 = 0;
    while ( 1 )
    {
      v30 = v13;
      if ( v11 == (__int16 **)v7 )
        break;
      v14 = *v11;
      v31 = *v11 + 1;
      do
      {
        v15 = *v14;
        ++v14;
      }
      while ( v15 );
      v13 = v14 - v31 + v30 + 1;
      ++v11;
    }
    v16 = sub_10035DB4(((v7 - (signed int)v5) >> 2) + 1, v13, 2);
    v17 = v16;
    if ( v16 )
    {
      v18 = v16 + 4 * v12;
      v19 = (int)v27;
      v25 = v18;
      v20 = v18;
      v31 = (__int16 *)v18;
      if ( v5 != v27 )
      {
        v32 = v17 - (_DWORD)v5;
        do
        {
          v21 = *v5;
          v29 = (int)(*v5 + 1);
          do
          {
            v22 = *v21;
            ++v21;
          }
          while ( v22 );
          v23 = *v5;
          v29 = (((signed int)v21 - v29) >> 1) + 1;
          if ( sub_10035B93(v20, v30 - ((v20 - v25) >> 1), v23, v29) )
          {
            sub_1003465D(0, 0, 0, 0, 0);
            JUMPOUT(*(_DWORD *)byte_1007E28B);
          }
          v24 = (int)v31;
          *(__int16 **)((char *)v5 + v32) = v31;
          ++v5;
          v20 = v24 + 2 * v29;
          v31 = (__int16 *)v20;
        }
        while ( v5 != (__int16 **)v19 );
      }
      *a2 = v17;
      sub_1003603E(0);
      sub_1007EC8C((LPVOID **)&v26);
      result = 0;
    }
    else
    {
      sub_1003603E(0);
      v9 = -1;
LABEL_18:
      sub_1007EC8C((LPVOID **)&v26);
      result = v9;
    }
  }
  else
  {
    *(_DWORD *)sub_10034888(v2) = 22;
    sub_10034711();
    result = 22;
  }
  return result;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034711: using guessed type int sub_10034711(void);
// 10034815: using guessed type _DWORD __cdecl sub_10034815(_DWORD, _DWORD);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);
// 10035DB4: using guessed type _DWORD __cdecl sub_10035DB4(_DWORD, _DWORD, _DWORD);

//----- (1007E2FA) --------------------------------------------------------
signed int __cdecl sub_1007E2FA(const char *a1, int a2, int a3, int a4)
{
  unsigned int v4; // ecx
  int v6; // ebx
  char *v7; // eax
  char *v8; // esi
  signed int v9; // esi
  unsigned int v10; // [esp+0h] [ebp-4h]
  signed int v11; // [esp+0h] [ebp-4h]

  v4 = strlen(a1) + 1;
  v10 = v4;
  if ( v4 > ~a3 )
    return 12;
  v6 = v4 + a3 + 1;
  v7 = (char *)sub_1003558A(v4 + a3 + 1, 1);
  v8 = v7;
  if ( a3 && sub_10033F3C(v7, v6, a2, a3) || sub_10033F3C(&v8[a3], v6 - a3, a1, v10) )
  {
    sub_1003465D(0, 0, 0, 0, 0);
    JUMPOUT(*(_DWORD *)byte_1007E3AA);
  }
  v11 = sub_1007F005((int *)a4);
  if ( v11 )
  {
    sub_1003603E(v8);
    v9 = v11;
  }
  else
  {
    **(_DWORD **)(a4 + 4) = v8;
    v9 = 0;
    *(_DWORD *)(a4 + 4) += 4;
  }
  sub_1003603E(0);
  return v9;
}
// 10033F3C: using guessed type int __cdecl sub_10033F3C(_DWORD, _DWORD, _DWORD, _DWORD);
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);

//----- (1007E3D7) --------------------------------------------------------
signed int __cdecl sub_1007E3D7(const unsigned __int16 *a1, int a2, int a3, int a4)
{
  unsigned int v4; // kr00_4
  int v5; // ecx
  int v7; // ebx
  char *v8; // eax
  char *v9; // esi
  signed int v10; // ebx

  v4 = wcslen(a1);
  v5 = v4 + 1;
  if ( v4 + 1 > ~a3 )
    return 12;
  v7 = v5 + a3 + 1;
  v8 = (char *)sub_1003558A(v5 + a3 + 1, 2);
  v9 = v8;
  if ( a3 && sub_10035B93(v8, v7, a2, a3) || sub_10035B93(&v9[2 * a3], v7 - a3, a1, v4 + 1) )
  {
    sub_1003465D(0, 0, 0, 0, 0);
    JUMPOUT(*(_DWORD *)byte_1007E48A);
  }
  v10 = sub_1007F0AD((int *)a4);
  if ( v10 )
  {
    sub_1003603E(v9);
  }
  else
  {
    **(_DWORD **)(a4 + 4) = v9;
    *(_DWORD *)(a4 + 4) += 4;
    v10 = 0;
  }
  sub_1003603E(0);
  return v10;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1007E4B8) --------------------------------------------------------
int __cdecl sub_1007E4B8(LPCSTR lpMultiByteStr, int a2, int a3)
{
  const CHAR *v3; // ecx
  _DWORD *v4; // edx
  CHAR v5; // al
  char v6; // al
  int result; // eax
  bool v8; // zf
  char v9; // al
  int v10; // eax
  int v11; // eax
  HANDLE v12; // esi
  signed int v13; // esi
  int v14; // eax
  int v15; // eax
  unsigned int v16; // eax
  char v17; // cl
  int v18; // eax
  signed int v19; // [esp+8h] [ebp-298h]
  int v20; // [esp+Ch] [ebp-294h]
  int v21; // [esp+10h] [ebp-290h]
  int v22; // [esp+14h] [ebp-28Ch]
  int v23; // [esp+18h] [ebp-288h]
  LPVOID lpMem; // [esp+1Ch] [ebp-284h]
  int v25; // [esp+20h] [ebp-280h]
  int v26; // [esp+24h] [ebp-27Ch]
  char v27; // [esp+28h] [ebp-278h]
  int v28; // [esp+2Ch] [ebp-274h]
  int v29; // [esp+30h] [ebp-270h]
  LPVOID v30; // [esp+34h] [ebp-26Ch]
  int v31; // [esp+38h] [ebp-268h]
  int v32; // [esp+3Ch] [ebp-264h]
  char v33; // [esp+40h] [ebp-260h]
  _DWORD *v34; // [esp+44h] [ebp-25Ch]
  int v35; // [esp+4Bh] [ebp-255h]
  WCHAR WideCharStr; // [esp+78h] [ebp-228h]

  v3 = (const CHAR *)a2;
  v4 = (_DWORD *)a3;
  v34 = (_DWORD *)a3;
  if ( (LPCSTR)a2 != lpMultiByteStr )
  {
    do
    {
      v5 = *v3;
      if ( *v3 == 47 )
        break;
      if ( v5 == 92 )
        break;
      if ( v5 == 58 )
        break;
      v3 = (const CHAR *)sub_10033C49(lpMultiByteStr, v3);
    }
    while ( v3 != lpMultiByteStr );
    v4 = v34;
  }
  v6 = *v3;
  LOBYTE(v35) = v6;
  if ( v6 == 58 )
  {
    if ( v3 != lpMultiByteStr + 1 )
      return sub_1007E2FA(lpMultiByteStr, 0, 0, (int)v4);
    v6 = v35;
  }
  if ( v6 == 47 || v6 == 92 || (v8 = v6 == 58, v9 = 0, v8) )
    v9 = 1;
  v22 = 0;
  v23 = 0;
  lpMem = 0;
  v25 = 0;
  v21 = v9 != 0 ? v3 - lpMultiByteStr + 1 : 0;
  v26 = 0;
  v27 = 0;
  v10 = sub_1003495F();
  v11 = sub_100354A4(lpMultiByteStr, (int)&v22, v10);
  v12 = FindFirstFileExW((LPCWSTR)(v11 == 0 ? (unsigned int)lpMem : 0), 0, (char *)&v35 + 1, 0, 0, 0);
  if ( v12 == (HANDLE)-1 )
  {
    v13 = sub_1007E2FA(lpMultiByteStr, 0, 0, (int)v34);
    if ( v27 )
      sub_1003603E(lpMem);
    result = v13;
  }
  else
  {
    v20 = (v34[1] - *v34) >> 2;
    while ( 1 )
    {
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v14 = sub_1003495F();
      v15 = sub_100335E1(&WideCharStr, (int)&v28, (int)&v35, v14);
      v16 = v15 == 0 ? (unsigned int)v30 : 0;
      if ( *(_BYTE *)v16 != 46 || (v17 = *(_BYTE *)(v16 + 1)) != 0 && (v17 != 46 || *(_BYTE *)(v16 + 2)) )
      {
        v19 = sub_1007E2FA((const char *)v16, (int)lpMultiByteStr, v21, (int)v34);
        if ( v19 )
          break;
      }
      if ( v33 )
        sub_1003603E(v30);
      if ( !FindNextFileW(v12, (LPWIN32_FIND_DATAW)((char *)&v35 + 1)) )
      {
        v18 = (v34[1] - *v34) >> 2;
        if ( v20 != v18 )
          sub_100358D2(*v34 + 4 * v20, v18 - v20, 4, sub_1007DC9F);
        FindClose(v12);
        if ( v27 )
          sub_1003603E(lpMem);
        return 0;
      }
    }
    if ( v33 )
      sub_1003603E(v30);
    FindClose(v12);
    if ( v27 )
      sub_1003603E(lpMem);
    result = v19;
  }
  return result;
}
// 10033C49: using guessed type _DWORD __cdecl sub_10033C49(_DWORD, _DWORD);
// 100358D2: using guessed type _DWORD __cdecl sub_100358D2(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1007E7DE) --------------------------------------------------------
int __cdecl sub_1007E7DE(LPCWSTR lpFileName, int a2, int a3)
{
  __int16 *v3; // edx
  int v4; // ecx
  bool v6; // al
  int v7; // edx
  HANDLE v8; // esi
  int v9; // eax
  signed int v10; // [esp+Ch] [ebp-264h]
  int v11; // [esp+10h] [ebp-260h]
  int v12; // [esp+14h] [ebp-25Ch]
  char FindFileData; // [esp+1Ch] [ebp-254h]
  __int16 v14; // [esp+48h] [ebp-228h]
  __int16 v15; // [esp+4Ah] [ebp-226h]
  __int16 v16; // [esp+4Ch] [ebp-224h]

  v3 = (__int16 *)a2;
  v4 = a3;
  if ( (LPCWSTR)a2 != lpFileName )
  {
    do
    {
      if ( sub_1007ED95(*v3) )
        break;
      --v3;
    }
    while ( v3 != (__int16 *)lpFileName );
    v4 = a3;
  }
  if ( *v3 == 58 && v3 != (__int16 *)(lpFileName + 1) )
    return sub_1007E3D7(lpFileName, 0, 0, v4);
  v6 = sub_1007ED95(*v3);
  v11 = v6 != 0 ? ((v7 - (signed int)lpFileName) >> 1) + 1 : 0;
  v8 = FindFirstFileExW(lpFileName, 0, &FindFileData, 0, 0, 0);
  if ( v8 == (HANDLE)-1 )
    return sub_1007E3D7(lpFileName, 0, 0, a3);
  v12 = (*(_DWORD *)(a3 + 4) - *(_DWORD *)a3) >> 2;
  do
  {
    if ( v14 != 46 || v15 && (v15 != 46 || v16) )
    {
      v10 = sub_1007E3D7((const unsigned __int16 *)&v14, (int)lpFileName, v11, a3);
      if ( v10 )
      {
        FindClose(v8);
        return v10;
      }
    }
  }
  while ( FindNextFileW(v8, (LPWIN32_FIND_DATAW)&FindFileData) );
  v9 = (*(_DWORD *)(a3 + 4) - *(_DWORD *)a3) >> 2;
  if ( v12 != v9 )
    sub_100358D2(*(_DWORD *)a3 + 4 * v12, v9 - v12, 4, sub_1007DCBD);
  FindClose(v8);
  return 0;
}
// 100358D2: using guessed type _DWORD __cdecl sub_100358D2(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1007EB96) --------------------------------------------------------
int *__userpurge sub_1007EB96@<eax>(_BYTE *this@<ecx>, int esi0@<esi>, wchar_t ***a2)
{
  _BYTE *v3; // edi
  wchar_t ***v4; // ebx
  wchar_t **v5; // eax
  wchar_t **v6; // ecx
  int v7; // eax
  int v8; // eax

  v3 = this;
  this[12] = 0;
  v4 = (wchar_t ***)(this + 4);
  if ( a2 )
  {
    v5 = *a2;
    v6 = a2[1];
LABEL_5:
    *v4 = v5;
    *((_DWORD *)v3 + 2) = v6;
    return (int *)v3;
  }
  if ( !dword_100B1CD4 )
  {
    v5 = off_100B044C;
    v6 = (wchar_t **)off_100B0450;
    goto LABEL_5;
  }
  v7 = sub_10034E4B();
  *(_DWORD *)v3 = v7;
  *v4 = *(wchar_t ***)(v7 + 76);
  *((_DWORD *)v3 + 2) = *(_DWORD *)(v7 + 72);
  sub_10034EB4(v7, v3 + 4);
  sub_10035F3F(*(_DWORD *)v3, v3 + 8);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 848);
  if ( !(v8 & 2) )
  {
    *(_DWORD *)(*(_DWORD *)v3 + 848) = v8 | 2;
    v3[12] = 1;
  }
  return (int *)v3;
}
// 10034EB4: using guessed type _DWORD __cdecl sub_10034EB4(_DWORD, _DWORD);
// 10035F3F: using guessed type _DWORD __cdecl sub_10035F3F(_DWORD, _DWORD);
// 100B044C: using guessed type wchar_t **off_100B044C;
// 100B0450: using guessed type void *off_100B0450;
// 100B1CD4: using guessed type int dword_100B1CD4;

//----- (1007EC5E) --------------------------------------------------------
int __thiscall sub_1007EC5E(LPVOID **this)
{
  LPVOID **v1; // edi
  LPVOID *i; // esi

  v1 = this;
  for ( i = *this; i != v1[1]; ++i )
    sub_1003603E(*i);
  return sub_1003603E(*v1);
}

//----- (1007EC8C) --------------------------------------------------------
int __thiscall sub_1007EC8C(LPVOID **this)
{
  LPVOID **v1; // edi
  LPVOID *i; // esi

  v1 = this;
  for ( i = *this; i != v1[1]; ++i )
    sub_1003603E(*i);
  return sub_1003603E(*v1);
}

//----- (1007ECDA) --------------------------------------------------------
int __stdcall sub_1007ECDA(int a1, LPCWSTR lpWideCharStr, LPSTR lpMultiByteStr, int cbMultiByte)
{
  return sub_100361AB(a1, 0, lpWideCharStr, -1, lpMultiByteStr, cbMultiByte, 0, 0);
}

//----- (1007ED95) --------------------------------------------------------
bool __stdcall sub_1007ED95(__int16 a1)
{
  return a1 == 47 || a1 == 92 || a1 == 58;
}

//----- (1007EDC6) --------------------------------------------------------
signed int sub_1007EDC6()
{
  signed int v0; // edx
  int v1; // eax
  int v3; // [esp+0h] [ebp-10h]
  int v4; // [esp+4h] [ebp-Ch]
  char v5; // [esp+Ch] [ebp-4h]

  sub_10035A08(0);
  v0 = 65001;
  if ( *(_DWORD *)(v4 + 8) != 65001 )
  {
    v1 = sub_10035189();
    v0 = 0;
    if ( !v1 )
      v0 = 1;
  }
  if ( v5 )
    *(_DWORD *)(v3 + 848) &= 0xFFFFFFFD;
  return v0;
}
// 10035189: using guessed type int sub_10035189(void);
// 10035A08: using guessed type _DWORD __stdcall sub_10035A08(_DWORD);

//----- (1007EE14) --------------------------------------------------------
int __thiscall sub_1007EE14(int this)
{
  int v1; // esi
  int result; // eax

  v1 = this;
  if ( *(_BYTE *)(this + 20) )
  {
    result = sub_1003603E(*(LPVOID *)(this + 8));
    *(_BYTE *)(v1 + 20) = 0;
  }
  return result;
}

//----- (1007EE34) --------------------------------------------------------
int __thiscall sub_1007EE34(int this)
{
  int v1; // esi
  int result; // eax

  v1 = this;
  if ( *(_BYTE *)(this + 20) )
  {
    result = sub_1003603E(*(LPVOID *)(this + 8));
    *(_BYTE *)(v1 + 20) = 0;
  }
  return result;
}

//----- (1007EE54) --------------------------------------------------------
int __thiscall sub_1007EE54(_DWORD *this, SIZE_T dwBytes)
{
  _DWORD *v2; // esi
  int result; // eax

  v2 = this;
  sub_10034D51(this);
  result = sub_10035F53((int)(v2 + 2), dwBytes);
  if ( result )
  {
    v2[3] = 0;
    *((_BYTE *)v2 + 20) = 0;
  }
  else
  {
    *((_BYTE *)v2 + 20) = 1;
    result = 0;
    v2[3] = dwBytes;
  }
  return result;
}
// 10034D51: using guessed type int __thiscall sub_10034D51(_DWORD);

//----- (1007EE9F) --------------------------------------------------------
int __thiscall sub_1007EE9F(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int result; // eax

  v2 = this;
  sub_1003440A(this);
  result = sub_10035F53((int)(v2 + 2), 2 * a2);
  if ( result )
  {
    v2[3] = 0;
    *((_BYTE *)v2 + 20) = 0;
  }
  else
  {
    *((_BYTE *)v2 + 20) = 1;
    result = 0;
    v2[3] = a2;
  }
  return result;
}
// 1003440A: using guessed type int __thiscall sub_1003440A(_DWORD);

//----- (1007EEED) --------------------------------------------------------
int __cdecl sub_1007EEED(int a1, SIZE_T dwBytes)
{
  int v2; // eax

  v2 = sub_10034C52(dwBytes);
  *(_DWORD *)a1 = v2;
  return v2 != 0 ? 0 : 12;
}

//----- (1007F005) --------------------------------------------------------
signed int __thiscall sub_1007F005(int *this)
{
  int *v1; // esi
  int v2; // edi
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  signed int v7; // esi

  v1 = this;
  v2 = this[2];
  if ( this[1] != v2 )
    return 0;
  if ( !*this )
  {
    *this = sub_1003558A(4, 4);
    sub_1003603E(0);
    v4 = *v1;
    if ( *v1 )
    {
      v1[1] = v4;
      v1[2] = v4 + 16;
      return 0;
    }
    return 12;
  }
  v5 = (v2 - *this) >> 2;
  if ( v5 > 0x7FFFFFFF )
    return 12;
  v6 = sub_10034108((LPCVOID)*this, 2 * v5, 4);
  if ( v6 )
  {
    *v1 = v6;
    v1[1] = v6 + 4 * v5;
    v1[2] = v6 + 8 * v5;
    v7 = 0;
  }
  else
  {
    v7 = 12;
  }
  sub_1003603E(0);
  return v7;
}
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);

//----- (1007F0AD) --------------------------------------------------------
signed int __thiscall sub_1007F0AD(int *this)
{
  int *v1; // esi
  int v2; // edi
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  signed int v7; // esi

  v1 = this;
  v2 = this[2];
  if ( this[1] != v2 )
    return 0;
  if ( !*this )
  {
    *this = sub_1003558A(4, 4);
    sub_1003603E(0);
    v4 = *v1;
    if ( *v1 )
    {
      v1[1] = v4;
      v1[2] = v4 + 16;
      return 0;
    }
    return 12;
  }
  v5 = (v2 - *this) >> 2;
  if ( v5 > 0x7FFFFFFF )
    return 12;
  v6 = sub_10034108((LPCVOID)*this, 2 * v5, 4);
  if ( v6 )
  {
    *v1 = v6;
    v1[1] = v6 + 4 * v5;
    v1[2] = v6 + 8 * v5;
    v7 = 0;
  }
  else
  {
    v7 = 12;
  }
  sub_1003603E(0);
  return v7;
}
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);

//----- (1007F283) --------------------------------------------------------
signed int __cdecl sub_1007F283(LPCSTR *a1, _DWORD *a2)
{
  return sub_1007DEF8(a1, a2);
}

//----- (1007F290) --------------------------------------------------------
signed int __cdecl sub_1007F290(LPCWSTR *a1, _DWORD *a2)
{
  return sub_1007E0D4(a1, a2);
}

//----- (1007F29D) --------------------------------------------------------
int __cdecl sub_1007F29D(LPCWSTR lpWideCharStr, int a2, int a3, int a4)
{
  int result; // eax
  unsigned int v5; // eax
  DWORD v6; // eax
  int v7; // ST1C_4
  int v8; // eax
  DWORD v9; // eax
  int v10; // ST18_4

  if ( lpWideCharStr )
  {
    if ( *lpWideCharStr )
    {
      v5 = sub_100361AB(a4, 0, lpWideCharStr, -1, 0, 0, 0, 0);
      if ( v5 )
      {
        if ( v5 <= *(_DWORD *)(a2 + 12) || (result = sub_10034A27(v5)) == 0 )
        {
          v8 = sub_10034955(a4, lpWideCharStr, *(LPSTR *)(a2 + 8), *(_DWORD *)(a2 + 12));
          if ( v8 )
          {
            *(_DWORD *)(a2 + 16) = v8 - 1;
            result = 0;
          }
          else
          {
            v9 = GetLastError();
            sub_10035297(v9);
            result = *(_DWORD *)sub_10034888(v10);
          }
        }
      }
      else
      {
        v6 = GetLastError();
        sub_10035297(v6);
        result = *(_DWORD *)sub_10034888(v7);
      }
    }
    else if ( *(_DWORD *)(a2 + 12) || (result = sub_10034A27(1)) == 0 )
    {
      **(_BYTE **)(a2 + 8) = 0;
      result = 0;
      *(_DWORD *)(a2 + 16) = 0;
    }
  }
  else
  {
    sub_1003419E(a2);
    result = 0;
  }
  return result;
}
// 1003419E: using guessed type int __thiscall sub_1003419E(_DWORD);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10034A27: using guessed type _DWORD __stdcall sub_10034A27(_DWORD);
// 10035297: using guessed type _DWORD __cdecl sub_10035297(_DWORD);

//----- (1007F3ED) --------------------------------------------------------
int __stdcall sub_1007F3ED(int a1, LPCWSTR lpWideCharStr, LPSTR lpMultiByteStr, int cbMultiByte)
{
  return sub_100361AB(a1, 0, lpWideCharStr, -1, lpMultiByteStr, cbMultiByte, 0, 0);
}

//----- (1007F427) --------------------------------------------------------
signed int __thiscall sub_1007F427(_BYTE *this, int a2)
{
  _BYTE *v2; // esi
  signed int result; // eax

  v2 = this;
  if ( this[20] )
    this[20] = 0;
  *(_DWORD *)sub_10034888(this) = 34;
  result = 34;
  *((_DWORD *)v2 + 3) = 0;
  v2[20] = 0;
  return result;
}
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (1007F475) --------------------------------------------------------
int __thiscall sub_1007F475(int this)
{
  int result; // eax

  result = 0;
  if ( *(_BYTE *)(this + 20) )
    *(_BYTE *)(this + 20) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  return result;
}

//----- (1007F4A4) --------------------------------------------------------
int __cdecl sub_1007F4A4(HMODULE hModule, int a2, int a3)
{
  DWORD v3; // eax
  int result; // eax
  int v5; // eax
  int v6; // [esp+0h] [ebp-22Ch]
  int v7; // [esp+4h] [ebp-228h]
  int v8; // [esp+8h] [ebp-224h]
  int v9; // [esp+Ch] [ebp-220h]
  int v10; // [esp+10h] [ebp-21Ch]
  char v11; // [esp+14h] [ebp-218h]
  WCHAR WideCharStr[2]; // [esp+1Bh] [ebp-211h]

  if ( GetModuleFileNameW(hModule, (WCHAR *)((char *)WideCharStr + 1), 0x105u) )
  {
    v10 = 0;
    v6 = a2;
    v7 = a3;
    v8 = a2;
    v9 = a3;
    v11 = 0;
    v5 = sub_1003495F();
    sub_100345D6((WCHAR *)((char *)WideCharStr + 1), (int)&v6, (int)WideCharStr, v5);
    result = v10;
  }
  else
  {
    v3 = GetLastError();
    sub_10035297(v3);
    result = 0;
  }
  return result;
}
// 10035297: using guessed type _DWORD __cdecl sub_10035297(_DWORD);

//----- (1007F56D) --------------------------------------------------------
int __stdcall sub_1007F56D(_DWORD *a1, volatile signed __int32 ****a2, _DWORD *a3)
{
  sub_100360E8(*a1);
  sub_1007F667(a2);
  return sub_10033799(*a3);
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);

//----- (1007F667) --------------------------------------------------------
volatile signed __int32 *__thiscall sub_1007F667(volatile signed __int32 ****this)
{
  volatile signed __int32 ****v1; // esi
  LPVOID *v2; // eax
  volatile signed __int32 *result; // eax

  v1 = this;
  sub_1008008B(dword_100B20F4, 0x101u, (int)((**this)[18] + 6), 0x101u);
  sub_1008008B(dword_100B20F8, 0x100u, (int)(**v1)[18] + 281, 0x100u);
  if ( !_InterlockedExchangeAdd(**v1[1], 0xFFFFFFFF) )
  {
    v2 = (LPVOID *)*v1[1];
    if ( *v2 != &unk_100B04A8 )
      sub_1003603E(*v2);
  }
  **v1[1] = (**v1)[18];
  result = (**v1)[18];
  _InterlockedIncrement((**v1)[18]);
  return result;
}
// 100B20F4: using guessed type int dword_100B20F4;
// 100B20F8: using guessed type int dword_100B20F8;

//----- (1007F720) --------------------------------------------------------
const wchar_t *__cdecl sub_1007F720(int a1)
{
  switch ( a1 )
  {
    case 932:
      return L"ja-JP";
    case 936:
      return L"zh-CN";
    case 949:
      return L"ko-KR";
    case 950:
      return L"zh-TW";
  }
  return 0;
}
// 100A63C4: using guessed type wchar_t aJaJp[6];
// 100A63D4: using guessed type wchar_t aZhCn[6];
// 100A63E4: using guessed type wchar_t aKoKr[6];
// 100A63F4: using guessed type wchar_t aZhTw[6];

//----- (1007F773) --------------------------------------------------------
UINT __cdecl sub_1007F773(UINT a1)
{
  UINT result; // eax
  int v2; // [esp+0h] [ebp-10h]
  int v3; // [esp+4h] [ebp-Ch]
  char v4; // [esp+Ch] [ebp-4h]

  sub_10035A08(0);
  dword_100B2100 = 0;
  result = a1;
  switch ( a1 )
  {
    case 0xFFFFFFFE:
      dword_100B2100 = 1;
      result = GetOEMCP();
      break;
    case 0xFFFFFFFD:
      dword_100B2100 = 1;
      result = GetACP();
      break;
    case 0xFFFFFFFC:
      dword_100B2100 = 1;
      result = *(_DWORD *)(v3 + 8);
      break;
  }
  if ( v4 )
    *(_DWORD *)(v2 + 848) &= 0xFFFFFFFD;
  return result;
}
// 10035A08: using guessed type _DWORD __stdcall sub_10035A08(_DWORD);
// 100B2100: using guessed type int dword_100B2100;

//----- (1007F823) --------------------------------------------------------
char __cdecl sub_1007F823(_DWORD *a1)
{
  signed int v1; // esi
  signed int v2; // ecx
  char result; // al

  v1 = 0;
  sub_10034388(a1 + 6, 0, 257);
  a1[1] = 0;
  a1[2] = 0;
  a1[135] = 0;
  a1[3] = 0;
  v2 = 0;
  a1[4] = 0;
  a1[5] = 0;
  do
  {
    *((_BYTE *)a1 + v2 + 24) = byte_100B04C0[v2];
    ++v2;
  }
  while ( v2 < 257 );
  do
  {
    result = byte_100B05C1[v1];
    *((_BYTE *)a1 + v1++ + 281) = result;
  }
  while ( v1 < 256 );
  return result;
}
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);

//----- (1007F89E) --------------------------------------------------------
_BYTE *__cdecl sub_1007F89E(int a1)
{
  signed int v1; // esi
  unsigned int v2; // eax
  unsigned int i; // eax
  BYTE *v4; // ecx
  unsigned int v5; // edx
  _BYTE *result; // eax
  int v7; // ecx
  WORD v8; // dx
  char v9; // dl
  _BYTE *v10; // ecx
  int v11; // edx
  char v12; // al
  char v13; // al
  struct _cpinfo CPInfo; // [esp+14h] [ebp-718h]
  WORD CharType[512]; // [esp+28h] [ebp-704h]
  char v16[256]; // [esp+428h] [ebp-304h]
  char v17[256]; // [esp+528h] [ebp-204h]
  CHAR MultiByteStr[256]; // [esp+628h] [ebp-104h]

  if ( *(_DWORD *)(a1 + 4) == 65001 || !GetCPInfo(*(_DWORD *)(a1 + 4), &CPInfo) )
  {
    v10 = (_BYTE *)(a1 + 25);
    result = (_BYTE *)(-90 - a1);
    v11 = -25 - a1;
    while ( 1 )
    {
      if ( (unsigned int)&result[(_DWORD)v10] > 0x19 )
      {
        if ( (unsigned int)&v10[-122 - a1] > 0x19 )
        {
          v13 = 0;
          goto LABEL_27;
        }
        *v10 |= 0x20u;
        v12 = (_BYTE)v10 - 32;
      }
      else
      {
        *v10 |= 0x10u;
        v12 = (_BYTE)v10 + 32;
      }
      v13 = v11 + v12;
LABEL_27:
      (v10++)[256] = v13;
      result = (_BYTE *)(-90 - a1);
      if ( (unsigned int)&v10[v11] >= 0x100 )
        return result;
    }
  }
  v1 = 256;
  v2 = 0;
  do
  {
    MultiByteStr[v2] = v2;
    ++v2;
  }
  while ( v2 < 0x100 );
  LOBYTE(i) = CPInfo.LeadByte[0];
  v4 = CPInfo.LeadByte;
  MultiByteStr[0] = 32;
  while ( (_BYTE)i )
  {
    v5 = v4[1];
    for ( i = (unsigned __int8)i; i <= v5 && i < 0x100; ++i )
      MultiByteStr[i] = 32;
    v4 += 2;
    LOBYTE(i) = *v4;
  }
  sub_100331CC(0, 1u, MultiByteStr, 256, CharType, *(_DWORD *)(a1 + 4), 0);
  sub_10035D23(0, *(_DWORD *)(a1 + 540), 0x100u, MultiByteStr, 256, (LPWSTR)v17, 256, *(_DWORD *)(a1 + 4), 0);
  sub_10035D23(0, *(_DWORD *)(a1 + 540), 0x200u, MultiByteStr, 256, (LPWSTR)v16, 256, *(_DWORD *)(a1 + 4), 0);
  result = (_BYTE *)(a1 + 25);
  v7 = 0;
  do
  {
    v8 = CharType[v7];
    if ( v8 & 1 )
    {
      *result |= 0x10u;
      v9 = v17[v7];
    }
    else if ( v8 & 2 )
    {
      *result |= 0x20u;
      v9 = v16[v7];
    }
    else
    {
      v9 = 0;
    }
    ++v7;
    (result++)[256] = v9;
    --v1;
  }
  while ( v1 );
  return result;
}
// 1007F89E: using guessed type CHAR MultiByteStr[256];
// 1007F89E: using guessed type WORD CharType[512];
// 1007F89E: using guessed type char var_204[256];
// 1007F89E: using guessed type char var_304[256];

//----- (1007FAAC) --------------------------------------------------------
signed int __usercall sub_1007FAAC@<eax>(int a1@<edx>, int a2@<ecx>, int a3@<ebp>, UINT a4, char a5, int a6, void **a7)
{
  signed int result; // eax
  _DWORD *v8; // eax
  signed int v9; // edi
  _DWORD *v10; // eax
  int v11; // [esp-238h] [ebp-244h]
  int *v12; // [esp-14h] [ebp-20h]
  UINT v13; // [esp-Ch] [ebp-18h]
  _DWORD *v14; // [esp-8h] [ebp-14h]
  _DWORD *v15; // [esp-4h] [ebp-10h]
  int v16; // [esp+0h] [ebp-Ch]
  int v17; // [esp+4h] [ebp-8h]
  int retaddr; // [esp+Ch] [ebp+0h]

  v16 = a3;
  v17 = retaddr;
  sub_1007FC56(a1, a2, (_DWORD *)a6, a7);
  v13 = sub_1007F773(a4);
  if ( v13 == *(_DWORD *)(*(_DWORD *)(a6 + 72) + 4) )
    return 0;
  v8 = (_DWORD *)sub_10034C52(0x220u);
  v15 = v8;
  if ( v8 )
  {
    v14 = v8;
    qmemcpy(&v11, *(const void **)(a6 + 72), 0x220u);
    qmemcpy(v8, &v11, 0x220u);
    *v8 = 0;
    v9 = sub_10035CA6(v13, v14);
    if ( v9 == -1 )
    {
      *(_DWORD *)sub_10034888(v14) = 22;
      sub_1003603E(v15);
      result = -1;
    }
    else
    {
      if ( !a5 )
        sub_100355B7();
      if ( !_InterlockedDecrement(*(volatile signed __int32 **)(a6 + 72)) && *(_UNKNOWN **)(a6 + 72) != &unk_100B04A8 )
        sub_1003603E(*(LPVOID *)(a6 + 72));
      v10 = v15;
      *v15 = 1;
      *(_DWORD *)(a6 + 72) = v10;
      if ( !(dword_100B0AD0 & *(_DWORD *)(a6 + 848)) )
      {
        v12 = &a6;
        v15 = (_DWORD *)5;
        sub_1007F56D(&v15, (volatile signed __int32 ****)&v12, &v13);
        if ( a5 )
          off_100B0450 = *a7;
      }
      sub_1003603E(0);
      result = v9;
    }
  }
  else
  {
    sub_1003603E(0);
    result = -1;
  }
  return result;
}
// 1007FAAC: could not find valid save-restore pair for ebp
// 1007FAAC: could not find valid save-restore pair for edi
// 1007FAAC: could not find valid save-restore pair for esi
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 100355B7: using guessed type int sub_100355B7(void);
// 10035CA6: using guessed type _DWORD __cdecl sub_10035CA6(_DWORD, _DWORD);
// 100B0450: using guessed type void *off_100B0450;
// 100B0AD0: using guessed type int dword_100B0AD0;

//----- (1007FC56) --------------------------------------------------------
void *__usercall sub_1007FC56@<eax>(int a1@<edx>, int a2@<ecx>, _DWORD *a3, void **a4)
{
  void *v4; // esi
  int v5; // ST00_4

  if ( dword_100B0AD0 & a3[212] && a3[19] )
  {
    v4 = (void *)a3[18];
  }
  else
  {
    sub_100360E8(5);
    v4 = (void *)a3[18];
    if ( v4 != *a4 )
    {
      if ( v4 && !_InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) && v4 != &unk_100B04A8 )
        sub_1003603E(v4);
      v4 = *a4;
      a3[18] = *a4;
      _InterlockedIncrement((volatile signed __int32 *)v4);
    }
    sub_10033799(5);
    a2 = v5;
  }
  if ( !v4 )
    sub_100354D1(a2, a1);
  return v4;
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);
// 100B0AD0: using guessed type int dword_100B0AD0;

//----- (1007FD21) --------------------------------------------------------
char __usercall sub_1007FD21@<al>(int a1@<ebp>)
{
  int v1; // eax
  int v2; // edx
  int v3; // ecx

  if ( !byte_100B2107 )
  {
    dword_100B20FC[0] = (int)&unk_100B04A8;
    dword_100B20F8 = (int)&unk_100B0870;
    dword_100B20F4 = (int)&unk_100B0738;
    v1 = sub_100358B9();
    sub_1007FAAC(v2, v3, a1, 0xFFFFFFFD, 1, v1, (void **)dword_100B20FC);
    byte_100B2107 = 1;
  }
  return 1;
}
// 100358B9: using guessed type int sub_100358B9(void);
// 100B20F4: using guessed type int dword_100B20F4;
// 100B20F8: using guessed type int dword_100B20F8;
// 100B20FC: using guessed type int dword_100B20FC[];
// 100B2107: using guessed type char byte_100B2107;

//----- (1007FD7B) --------------------------------------------------------
void *sub_1007FD7B()
{
  _DWORD *v0; // eax
  int v1; // edx
  int v2; // ecx

  v0 = (_DWORD *)sub_10034E4B();
  return sub_1007FC56(v1, v2, v0, (void **)dword_100B20FC);
}
// 100B20FC: using guessed type int dword_100B20FC[];

//----- (1007FE05) --------------------------------------------------------
signed int __cdecl sub_1007FE05(UINT a1, int a2)
{
  UINT v2; // ebx
  unsigned int v3; // edi
  int v4; // ecx
  unsigned int v5; // eax
  bool v6; // zf
  BYTE *v7; // eax
  int v8; // ecx
  unsigned int v9; // edi
  _BYTE *v10; // edx
  int v11; // ecx
  _BYTE *v12; // eax
  signed int v13; // ecx
  unsigned __int8 *v15; // eax
  unsigned __int8 *v16; // ecx
  unsigned __int8 v17; // al
  unsigned int v18; // edx
  _BYTE *v19; // ebx
  _WORD *v20; // ecx
  __int16 *v21; // edx
  signed int v22; // edi
  __int16 v23; // ax
  int v24; // [esp+Ch] [ebp-24h]
  int v25; // [esp+10h] [ebp-20h]
  int v26; // [esp+14h] [ebp-1Ch]
  char *v27; // [esp+14h] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+18h] [ebp-18h]

  v2 = sub_1007F773(a1);
  v25 = v2;
  if ( !v2 )
  {
LABEL_36:
    sub_1007F823((_DWORD *)a2);
    return 0;
  }
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v26 = 0;
  do
  {
    if ( dword_100B09A8[v5] == v2 )
    {
      sub_10034388(a2 + 24, 0, 257);
      v24 = 48 * v26;
      v15 = (unsigned __int8 *)&unk_100B09B8 + 48 * v26;
      v27 = (char *)&unk_100B09B8 + 48 * v26;
      do
      {
        v16 = v15;
        if ( *v15 )
        {
          do
          {
            v17 = v16[1];
            if ( !v17 )
              break;
            v18 = *v16;
            if ( v18 <= v17 )
            {
              v19 = (_BYTE *)(v18 + a2 + 25);
              do
              {
                if ( v18 >= 0x100 )
                  break;
                *v19 |= byte_100B09A4[v3];
                ++v18;
                ++v19;
              }
              while ( v18 <= v16[1] );
            }
            v16 += 2;
          }
          while ( *v16 );
          v15 = (unsigned __int8 *)v27;
        }
        ++v3;
        v15 += 8;
        v27 = (char *)v15;
      }
      while ( v3 < 4 );
      *(_DWORD *)(a2 + 4) = v25;
      *(_DWORD *)(a2 + 8) = 1;
      *(_DWORD *)(a2 + 540) = sub_1007F720(v25);
      v20 = (_WORD *)(a2 + 12);
      v21 = (__int16 *)((char *)&unk_100B09AC + v24);
      v22 = 6;
      do
      {
        v23 = *v21;
        ++v21;
        *v20 = v23;
        ++v20;
        --v22;
      }
      while ( v22 );
      goto LABEL_35;
    }
    ++v4;
    v5 += 12;
    v26 = v4;
  }
  while ( v5 < 60 );
  if ( v2 == 65000 || !IsValidCodePage((unsigned __int16)v2) )
    return -1;
  if ( v2 == 65001 )
  {
    *(_DWORD *)(a2 + 4) = 65001;
    *(_DWORD *)(a2 + 540) = 0;
    *(_DWORD *)(a2 + 24) = 0;
    *(_WORD *)(a2 + 28) = 0;
    goto LABEL_9;
  }
  if ( !GetCPInfo(v2, &CPInfo) )
  {
    if ( dword_100B2100 )
      goto LABEL_36;
    return -1;
  }
  sub_10034388(a2 + 24, 0, 257);
  *(_DWORD *)(a2 + 4) = v2;
  v6 = CPInfo.MaxCharSize == 2;
  *(_DWORD *)(a2 + 540) = 0;
  if ( v6 )
  {
    v7 = CPInfo.LeadByte;
    if ( CPInfo.LeadByte[0] )
    {
      do
      {
        LOBYTE(v8) = v7[1];
        if ( !(_BYTE)v8 )
          break;
        v9 = *v7;
        v8 = (unsigned __int8)v8;
        if ( v9 <= (unsigned __int8)v8 )
        {
          v10 = (_BYTE *)(v9 + a2 + 25);
          v11 = v8 - v9 + 1;
          do
          {
            *v10++ |= 4u;
            --v11;
          }
          while ( v11 );
        }
        v7 += 2;
      }
      while ( *v7 );
    }
    v12 = (_BYTE *)(a2 + 26);
    v13 = 254;
    do
    {
      *v12++ |= 8u;
      --v13;
    }
    while ( v13 );
    *(_DWORD *)(a2 + 540) = sub_1007F720(*(_DWORD *)(a2 + 4));
    v3 = 1;
  }
LABEL_9:
  *(_DWORD *)(a2 + 8) = v3;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 20) = 0;
LABEL_35:
  sub_1007F89E(a2);
  return 0;
}
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 100B09A8: using guessed type int dword_100B09A8[];
// 100B2100: using guessed type int dword_100B2100;

//----- (1008008B) --------------------------------------------------------
signed int __cdecl sub_1008008B(int a1, unsigned int a2, int a3, unsigned int a4)
{
  int v4; // ecx
  int v6; // ecx
  signed int *v7; // eax
  signed int v8; // [esp-8h] [ebp-Ch]

  if ( !a4 )
    return 0;
  if ( !a1 )
  {
    *(_DWORD *)sub_10034888(v4) = 22;
    sub_10034711();
    return 22;
  }
  if ( a3 && a2 >= a4 )
  {
    sub_100359C2(a1, a3, a4);
    return 0;
  }
  sub_10034388(a1, 0, a2);
  if ( !a3 )
  {
    v7 = (signed int *)sub_10034888(v6);
    v8 = 22;
LABEL_12:
    *v7 = v8;
    sub_10034711();
    return v8;
  }
  if ( a2 < a4 )
  {
    v7 = (signed int *)sub_10034888(v6);
    v8 = 34;
    goto LABEL_12;
  }
  return 22;
}
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 100359C2: using guessed type _DWORD __cdecl sub_100359C2(_DWORD, _DWORD, _DWORD);

//----- (1008012C) --------------------------------------------------------
BOOL __cdecl sub_1008012C(int a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  BOOL result; // eax
  int v5; // [esp+0h] [ebp-10h]
  _DWORD *v6; // [esp+4h] [ebp-Ch]
  int v7; // [esp+8h] [ebp-8h]
  char v8; // [esp+Ch] [ebp-4h]

  sub_10035A08(a1);
  result = a4 & *(_BYTE *)(v7 + a2 + 25) || a3 && *(_WORD *)(*v6 + 2 * a2) & (unsigned __int16)a3;
  if ( v8 )
    *(_DWORD *)(v5 + 848) &= 0xFFFFFFFD;
  return result;
}
// 10035A08: using guessed type _DWORD __stdcall sub_10035A08(_DWORD);

//----- (10080308) --------------------------------------------------------
BOOL __cdecl sub_10080308(unsigned __int8 a1, int a2)
{
  BOOL v2; // ecx
  int v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+8h] [ebp-8h]
  char v6; // [esp+Ch] [ebp-4h]

  sub_10035A08(a2);
  if ( v5 && *(_DWORD *)(v5 + 4) == 932 )
    v2 = sub_1008012C(a2, a1, 0, 3u);
  else
    v2 = 0;
  if ( v6 )
    *(_DWORD *)(v4 + 848) &= 0xFFFFFFFD;
  return v2;
}
// 10035A08: using guessed type _DWORD __stdcall sub_10035A08(_DWORD);

//----- (100803E4) --------------------------------------------------------
BOOL __cdecl sub_100803E4(unsigned __int8 a1)
{
  return sub_1008012C(0, a1, 0, 4u);
}

//----- (100804DF) --------------------------------------------------------
char sub_100804DF()
{
  dword_100B211C = (int)GetCommandLineA();
  dword_100B2120 = (int)GetCommandLineW();
  return 1;
}
// 100B211C: using guessed type int dword_100B211C;
// 100B2120: using guessed type int dword_100B2120;

//----- (100804FE) --------------------------------------------------------
char sub_100804FE()
{
  return 1;
}

//----- (10080622) --------------------------------------------------------
signed int __cdecl sub_10080622(_WORD *a1, int a2, int a3)
{
  int v3; // ecx
  signed int *v4; // eax
  signed int v5; // esi
  _WORD *v7; // edi
  __int16 v8; // ax
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
    v8 = *(_WORD *)((char *)v7 + a3 - (_DWORD)a1);
    *v7 = v8;
    ++v7;
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

//----- (1008069F) --------------------------------------------------------
int __cdecl sub_1008069F(unsigned int a1, int a2)
{
  bool v2; // zf
  bool v4; // zf
  int v5; // eax

  if ( a1 > 0xDEAC )
  {
    if ( a1 <= 0xDEB1 )
    {
      if ( a1 == 57009 || a1 == 57005 || a1 == 57006 )
        return 0;
      v5 = a1 - 57007;
      v4 = a1 == 57007;
      goto LABEL_15;
    }
    if ( a1 == 57010 || a1 == 57011 || a1 == 65000 )
      return 0;
    if ( a1 != 65001 )
      return a2;
  }
  else
  {
    if ( a1 == 57004 )
      return 0;
    if ( a1 <= 0xC433 )
    {
      if ( a1 == 50227 || a1 == 42 || a1 == 50220 || a1 == 50221 || a1 == 50222 )
        return 0;
      v2 = a1 == 50225;
      goto LABEL_10;
    }
    if ( a1 == 50229 )
      return 0;
    if ( a1 != 54936 )
    {
      v5 = a1 - 57002;
      v4 = a1 == 57002;
LABEL_15:
      if ( v4 )
        return 0;
      v2 = v5 == 1;
LABEL_10:
      if ( v2 )
        return 0;
      return a2;
    }
  }
  return a2 & 8;
}

//----- (1008075D) --------------------------------------------------------
int __cdecl sub_1008075D(UINT CodePage, int a2, LPCSTR lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar)
{
  int v6; // eax

  v6 = sub_1008069F(CodePage, a2);
  return MultiByteToWideChar(CodePage, v6, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}

//----- (10080791) --------------------------------------------------------
unsigned int __cdecl sub_10080791(unsigned int a1, int a2)
{
  bool v2; // zf
  bool v3; // zf
  int v4; // eax

  if ( a1 > 0xDEAC )
  {
    if ( a1 > 0xDEB1 )
    {
      if ( a1 == 57010 || a1 == 57011 )
        return 0;
      v4 = a1 - 65000;
      v3 = a1 == 65000;
    }
    else
    {
      if ( a1 == 57009 || a1 == 57005 || a1 == 57006 )
        return 0;
      v4 = a1 - 57007;
      v3 = a1 == 57007;
    }
LABEL_21:
    if ( v3 )
      return 0;
    v2 = v4 == 1;
    goto LABEL_23;
  }
  if ( a1 == 57004 )
    return 0;
  if ( a1 > 0xC433 )
  {
    if ( a1 == 50229 || a1 == 54936 )
      return 0;
    v4 = a1 - 57002;
    v3 = a1 == 57002;
    goto LABEL_21;
  }
  if ( a1 == 50227 || a1 == 42 || a1 == 50220 || a1 == 50221 || a1 == 50222 )
    return 0;
  v2 = a1 == 50225;
LABEL_23:
  if ( !v2 )
    return a2 & 0xFFFFFF7F;
  return 0;
}

//----- (10080845) --------------------------------------------------------
int __cdecl sub_10080845(int a1, int a2, LPCWSTR lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, int a7, int a8)
{
  bool v8; // bl
  unsigned int v9; // eax
  UINT v10; // edx

  v8 = a1 == 65000 || a1 == 65001;
  v9 = sub_10080791(a1, a2);
  if ( v8 && a8 )
    *(_DWORD *)a8 = 0;
  return WideCharToMultiByte(
           v10,
           v9,
           lpWideCharStr,
           cchWideChar,
           lpMultiByteStr,
           cbMultiByte,
           (LPCSTR)(v8 == 0 ? a7 : 0),
           (LPBOOL)(v8 == 0 ? a8 : 0));
}

//----- (10080935) --------------------------------------------------------
int __cdecl sub_10080935(const unsigned __int16 *a1)
{
  const unsigned __int16 *i; // edx

  for ( i = a1; *i; i += wcslen(i) + 1 )
    ;
  return (int)(i + 1);
}

//----- (10080986) --------------------------------------------------------
const unsigned __int16 *sub_10080986()
{
  const unsigned __int16 *result; // eax
  WCHAR *v1; // esi
  const unsigned __int16 *v2; // ebx
  SIZE_T v3; // eax
  CHAR *v4; // eax
  CHAR *v5; // edi
  int cchWideChar; // [esp+4h] [ebp-8h]
  int cbMultiByte; // [esp+8h] [ebp-4h]

  result = GetEnvironmentStringsW();
  v1 = (WCHAR *)result;
  if ( result )
  {
    v2 = 0;
    cchWideChar = (sub_10080935(result) - (signed int)result) >> 1;
    v3 = sub_100361AB(0, 0, v1, cchWideChar, 0, 0, 0, 0);
    cbMultiByte = v3;
    if ( v3 )
    {
      v4 = (CHAR *)sub_10034C52(v3);
      v5 = v4;
      if ( v4 )
      {
        if ( sub_100361AB(0, 0, v1, cchWideChar, v4, cbMultiByte, 0, 0) )
        {
          sub_1003603E(0);
          v2 = (const unsigned __int16 *)v5;
        }
        else
        {
          sub_1003603E(v5);
        }
        FreeEnvironmentStringsW(v1);
        result = v2;
      }
      else
      {
        sub_1003603E(0);
        FreeEnvironmentStringsW(v1);
        result = 0;
      }
    }
    else
    {
      FreeEnvironmentStringsW(v1);
      result = 0;
    }
  }
  return result;
}

//----- (10080A4E) --------------------------------------------------------
const unsigned __int16 *sub_10080A4E()
{
  const unsigned __int16 *result; // eax
  WCHAR *v1; // esi
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  const unsigned __int16 *v5; // edi

  result = GetEnvironmentStringsW();
  v1 = (WCHAR *)result;
  if ( result )
  {
    v2 = sub_10080935(result);
    v3 = (v2 - (_DWORD)v1) & 0xFFFFFFFE;
    v4 = sub_10034C52(v3);
    v5 = (const unsigned __int16 *)v4;
    if ( v4 )
      sub_100359C2(v4, v1, v3);
    sub_1003603E(0);
    FreeEnvironmentStringsW(v1);
    result = v5;
  }
  return result;
}
// 100359C2: using guessed type _DWORD __cdecl sub_100359C2(_DWORD, _DWORD, _DWORD);

//----- (10080AAF) --------------------------------------------------------
int __cdecl sub_10080AAF(LPVOID a1, int a2)
{
  int v2; // ecx
  void *v4; // edi
  _BYTE *v5; // eax
  signed int v6; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // ST24_4
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // kr00_4
  _BYTE *v14; // eax
  _BYTE *v15; // esi
  int v16; // [esp-8h] [ebp-20h]
  int v17; // [esp-8h] [ebp-20h]
  _BYTE *v18; // [esp+8h] [ebp-10h]
  int v19; // [esp+Ch] [ebp-Ch]
  int v20; // [esp+Ch] [ebp-Ch]
  _DWORD *lpMem; // [esp+10h] [ebp-8h]
  _DWORD *lpMema; // [esp+10h] [ebp-8h]
  char v23; // [esp+17h] [ebp-1h]

  if ( !a1 )
  {
    *(_DWORD *)sub_10034888(v2) = 22;
    return -1;
  }
  v4 = a1;
  v5 = (_BYTE *)sub_1003390B(a1, 61);
  v18 = v5;
  if ( !v5 || v5 == a1 )
  {
    *(_DWORD *)sub_10034888(v16) = 22;
    sub_1003603E(a1);
    return -1;
  }
  v23 = v5[1];
  sub_1008129D();
  v6 = 0;
  if ( !dword_100B1C74 )
  {
    if ( a2 && dword_100B1C78 )
    {
      if ( !sub_100330E6() )
      {
        *(_DWORD *)sub_10034888(v7) = 22;
        goto LABEL_10;
      }
      sub_1008129D();
    }
    else
    {
      if ( !v23 )
        goto LABEL_11;
      dword_100B1C74 = sub_1003558A(1, 4);
      sub_1003603E(0);
      if ( !dword_100B1C74 || !dword_100B1C78 && (dword_100B1C78 = sub_1003558A(1, 4), sub_1003603E(0), !dword_100B1C78) )
      {
LABEL_10:
        v6 = -1;
LABEL_11:
        sub_1003603E(a1);
        return v6;
      }
    }
  }
  lpMem = (_DWORD *)dword_100B1C74;
  if ( !dword_100B1C74 )
    goto LABEL_10;
  v8 = sub_100812DD((int)a1, v18 - (_BYTE *)a1);
  v19 = v8;
  if ( v8 < 0 || !*lpMem )
  {
    if ( !v23 )
      goto LABEL_11;
    v12 = -v8;
    v20 = v12;
    if ( v12 + 2 < v12 )
      goto LABEL_10;
    if ( v12 + 2 >= 0x3FFFFFFF )
      goto LABEL_10;
    lpMema = (_DWORD *)sub_10034108(lpMem, v12 + 2, 4);
    sub_1003603E(0);
    v11 = (int)lpMema;
    if ( !lpMema )
      goto LABEL_10;
    v4 = 0;
    lpMema[v20] = a1;
    lpMema[v20 + 1] = 0;
LABEL_32:
    dword_100B1C74 = v11;
    goto LABEL_33;
  }
  sub_1003603E((LPVOID)lpMem[v8]);
  v9 = v19;
  if ( !v23 )
  {
    while ( lpMem[v9] )
    {
      lpMem[v9] = lpMem[v9 + 1];
      ++v9;
    }
    v10 = sub_10034108(lpMem, v9, 4);
    sub_1003603E(0);
    v11 = v10;
    if ( !v10 )
      goto LABEL_33;
    goto LABEL_32;
  }
  v4 = 0;
  lpMem[v19] = a1;
LABEL_33:
  if ( a2 )
  {
    v13 = strlen((const char *)a1);
    v14 = (_BYTE *)sub_1003558A(v13 + 2, 1);
    v15 = v14;
    if ( !v14 )
    {
      sub_1003603E(0);
LABEL_39:
      sub_1003603E(v4);
      return v6;
    }
    if ( sub_10035E22(v14, v13 + 2, a1) )
    {
      sub_1003465D(0, 0, 0, 0, 0);
      JUMPOUT(*(_DWORD *)byte_10080D0E);
    }
    v18[v15 - (_BYTE *)a1] = 0;
    if ( !sub_10035788(v15, (LPCSTR)(v23 != 0 ? (unsigned int)&v18[v15 - (_BYTE *)a1 + 1] : 0)) )
    {
      *(_DWORD *)sub_10034888(v17) = 42;
      sub_1003603E(v15);
      v6 = -1;
      goto LABEL_39;
    }
    sub_1003603E(v15);
  }
  sub_1003603E(v4);
  return 0;
}
// 100330E6: using guessed type int sub_100330E6(void);
// 1003390B: using guessed type _DWORD __cdecl sub_1003390B(_DWORD, char);
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 10035E22: using guessed type _DWORD __cdecl sub_10035E22(_DWORD, _DWORD, _DWORD);
// 100B1C74: using guessed type int dword_100B1C74;
// 100B1C78: using guessed type int dword_100B1C78;

//----- (10080DA7) --------------------------------------------------------
int __cdecl sub_10080DA7(LPVOID lpString1, int a2)
{
  int v2; // ecx
  char *v3; // esi
  void *v5; // edi
  char *v6; // eax
  signed int v7; // ebx
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // ST28_4
  int v13; // eax
  unsigned int v14; // ecx
  __int16 v15; // ax
  _WORD *v16; // eax
  _WORD *v17; // esi
  int v18; // ecx
  int v19; // [esp-8h] [ebp-24h]
  __int16 v20; // [esp+8h] [ebp-14h]
  char *v21; // [esp+Ch] [ebp-10h]
  int v22; // [esp+Ch] [ebp-10h]
  __int16 v23; // [esp+10h] [ebp-Ch]
  int v24; // [esp+10h] [ebp-Ch]
  int v25; // [esp+10h] [ebp-Ch]
  int v26; // [esp+14h] [ebp-8h]
  int v27; // [esp+14h] [ebp-8h]
  _DWORD *lpMem; // [esp+18h] [ebp-4h]

  v3 = (char *)lpString1;
  if ( !lpString1 )
  {
    *(_DWORD *)sub_10034888(v2) = 22;
    return -1;
  }
  v5 = lpString1;
  v6 = (char *)sub_100355AD(lpString1, 61);
  v21 = v6;
  if ( !v6 || v6 == lpString1 )
  {
    *(_DWORD *)sub_10034888(v19) = 22;
    sub_1003603E(lpString1);
    return -1;
  }
  v20 = *((_WORD *)v6 + 1);
  v23 = *((_WORD *)v6 + 1);
  sub_100812BD();
  v7 = 0;
  lpMem = (_DWORD *)dword_100B1C78;
  if ( !dword_100B1C78 )
  {
    if ( a2 && dword_100B1C74 )
    {
      if ( !sub_10034D83() )
      {
        *(_DWORD *)sub_10034888(v8) = 22;
LABEL_10:
        v7 = -1;
LABEL_11:
        sub_1003603E(lpString1);
        return v7;
      }
      sub_100812BD();
      v9 = dword_100B1C78;
      lpMem = (_DWORD *)dword_100B1C78;
      goto LABEL_18;
    }
    if ( !v23 )
      goto LABEL_11;
    if ( dword_100B1C74 )
      goto LABEL_51;
    dword_100B1C74 = sub_1003558A(1, 4);
    sub_1003603E(0);
    if ( !dword_100B1C74 )
      goto LABEL_10;
    lpMem = (_DWORD *)dword_100B1C78;
    if ( !dword_100B1C78 )
    {
LABEL_51:
      dword_100B1C78 = sub_1003558A(1, 4);
      sub_1003603E(0);
      v9 = dword_100B1C78;
      lpMem = (_DWORD *)dword_100B1C78;
      if ( !dword_100B1C78 )
        goto LABEL_10;
LABEL_18:
      if ( !v9 )
        goto LABEL_10;
      goto LABEL_19;
    }
  }
LABEL_19:
  v22 = (v21 - (_BYTE *)lpString1) >> 1;
  v10 = sub_10081347((PCNZWCH)lpString1, v22);
  v26 = v10;
  if ( v10 < 0 || !*lpMem )
  {
    if ( !v23 )
      goto LABEL_11;
    v14 = -v10;
    v27 = v14;
    if ( v14 + 2 < v14 )
      goto LABEL_10;
    if ( v14 + 2 >= 0x3FFFFFFF )
      goto LABEL_10;
    v24 = sub_10034108(lpMem, v14 + 2, 4);
    sub_1003603E(0);
    v13 = v24;
    if ( !v24 )
      goto LABEL_10;
    v5 = 0;
    *(_DWORD *)(v24 + 4 * v27) = lpString1;
    *(_DWORD *)(v24 + 4 * v27 + 4) = 0;
LABEL_33:
    dword_100B1C78 = v13;
    goto LABEL_34;
  }
  sub_1003603E((LPVOID)lpMem[v10]);
  v11 = v26;
  if ( !v23 )
  {
    while ( lpMem[v11] )
    {
      lpMem[v11] = lpMem[v11 + 1];
      ++v11;
    }
    v12 = sub_10034108(lpMem, v11, 4);
    sub_1003603E(0);
    v13 = v12;
    if ( !v12 )
      goto LABEL_34;
    goto LABEL_33;
  }
  v5 = 0;
  lpMem[v26] = lpString1;
LABEL_34:
  if ( a2 )
  {
    do
    {
      v15 = *(_WORD *)v3;
      v3 += 2;
    }
    while ( v15 );
    v25 = ((v3 - ((_BYTE *)lpString1 + 2)) >> 1) + 2;
    v16 = (_WORD *)sub_1003558A(v25, 2);
    v17 = v16;
    if ( !v16 )
    {
      sub_1003603E(0);
LABEL_41:
      sub_1003603E(v5);
      return v7;
    }
    if ( sub_10034824(v16, v25, lpString1) )
    {
      sub_1003465D(0, 0, 0, 0, 0);
      JUMPOUT(*(_DWORD *)byte_10081031);
    }
    v17[v22] = 0;
    if ( !SetEnvironmentVariableW(v17, (LPCWSTR)(v20 != 0 ? (unsigned int)&v17[v22 + 1] : 0)) )
    {
      *(_DWORD *)sub_10034888(v18) = 42;
      sub_1003603E(v17);
      v7 = -1;
      goto LABEL_41;
    }
    sub_1003603E(v17);
  }
  sub_1003603E(v5);
  return 0;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034824: using guessed type _DWORD __cdecl sub_10034824(_DWORD, _DWORD, _DWORD);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10034D83: using guessed type int sub_10034D83(void);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 100355AD: using guessed type _DWORD __cdecl sub_100355AD(_DWORD, __int16);
// 100B1C74: using guessed type int dword_100B1C74;
// 100B1C78: using guessed type int dword_100B1C78;

//----- (100810D4) --------------------------------------------------------
int __cdecl sub_100810D4(const char **a1)
{
  const char **v1; // edi
  int v3; // ecx
  const char **i; // eax
  int v5; // eax
  int v6; // edx
  int v7; // esi
  int v8; // ST14_4
  int v9; // ecx
  const char *v10; // ecx
  int v11; // ebx
  unsigned int v12; // kr00_4

  v1 = a1;
  if ( !a1 )
    return 0;
  v3 = 0;
  for ( i = a1; *i; ++v3 )
    ++i;
  v5 = sub_1003558A(v3 + 1, 4);
  v7 = v5;
  v9 = v8;
  if ( !v5 )
LABEL_13:
    sub_100354D1(v9, v6);
  v10 = *a1;
  if ( *a1 )
  {
    v11 = v5 - (_DWORD)a1;
    do
    {
      v12 = strlen(v10);
      *(const char **)((char *)v1 + v11) = (const char *)sub_1003558A(v12 + 1, 1);
      sub_1003603E(0);
      if ( !*(const char **)((char *)v1 + v11) )
        goto LABEL_13;
      if ( sub_10035E22(*(const char **)((char *)v1 + v11), v12 + 1, *v1) )
      {
        sub_1003465D(0, 0, 0, 0, 0);
        JUMPOUT(*(_DWORD *)byte_10081183);
      }
      ++v1;
      v10 = *v1;
    }
    while ( *v1 );
  }
  sub_1003603E(0);
  return v7;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 10035E22: using guessed type _DWORD __cdecl sub_10035E22(_DWORD, _DWORD, _DWORD);

//----- (100811B0) --------------------------------------------------------
int __cdecl sub_100811B0(__int16 **a1)
{
  __int16 **v1; // edi
  __int16 **v3; // eax
  int i; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // esi
  int v8; // ST14_4
  int v9; // ecx
  __int16 *v10; // ecx
  int v11; // ebx
  int v12; // edx
  __int16 v13; // ax
  int v14; // [esp+4h] [ebp-8h]

  v1 = a1;
  if ( !a1 )
    return 0;
  v3 = a1;
  for ( i = 0; *v3; ++i )
    ++v3;
  v5 = sub_1003558A(i + 1, 4);
  v7 = v5;
  v9 = v8;
  if ( !v5 )
LABEL_15:
    sub_100354D1(v9, v6);
  v10 = *a1;
  if ( *a1 )
  {
    v11 = v5 - (_DWORD)a1;
    do
    {
      v12 = (int)(v10 + 1);
      do
      {
        v13 = *v10;
        ++v10;
      }
      while ( v13 );
      v14 = (((signed int)v10 - v12) >> 1) + 1;
      *(__int16 **)((char *)v1 + v11) = (__int16 *)sub_1003558A(v14, 2);
      sub_1003603E(0);
      if ( !*(__int16 **)((char *)v1 + v11) )
        goto LABEL_15;
      if ( sub_10034824(*(__int16 **)((char *)v1 + v11), v14, *v1) )
      {
        sub_1003465D(0, 0, 0, 0, 0);
        JUMPOUT(*(_DWORD *)byte_1008126D);
      }
      ++v1;
      v10 = *v1;
    }
    while ( *v1 );
  }
  sub_1003603E(0);
  return v7;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034824: using guessed type _DWORD __cdecl sub_10034824(_DWORD, _DWORD, _DWORD);
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);

//----- (1008129D) --------------------------------------------------------
int sub_1008129D()
{
  int result; // eax

  result = dword_100B1C74;
  if ( (LPVOID)dword_100B1C74 == dword_100B1C84 )
  {
    result = sub_100810D4((const char **)dword_100B1C74);
    dword_100B1C74 = result;
  }
  return result;
}
// 100B1C74: using guessed type int dword_100B1C74;

//----- (100812BD) --------------------------------------------------------
int sub_100812BD()
{
  int result; // eax

  result = dword_100B1C78;
  if ( (LPVOID)dword_100B1C78 == dword_100B1C80 )
  {
    result = sub_100811B0((__int16 **)dword_100B1C78);
    dword_100B1C78 = result;
  }
  return result;
}
// 100B1C78: using guessed type int dword_100B1C78;

//----- (100812DD) --------------------------------------------------------
int __cdecl sub_100812DD(int a1, int a2)
{
  int v2; // edi
  int *v3; // esi
  int v4; // eax
  char v5; // al

  v2 = dword_100B1C74;
  v3 = (int *)dword_100B1C74;
  v4 = *(_DWORD *)dword_100B1C74;
  if ( !*(_DWORD *)dword_100B1C74 )
    return -(((signed int)v3 - v2) >> 2);
  while ( 1 )
  {
    if ( !sub_1003481A(a1, v4, a2) )
    {
      v5 = *(_BYTE *)(a2 + *v3);
      if ( v5 == 61 || !v5 )
        break;
    }
    ++v3;
    v4 = *v3;
    if ( !*v3 )
      return -(((signed int)v3 - v2) >> 2);
  }
  return ((signed int)v3 - v2) >> 2;
}
// 1003481A: using guessed type _DWORD __cdecl sub_1003481A(_DWORD, _DWORD, _DWORD);
// 100B1C74: using guessed type int dword_100B1C74;

//----- (10081347) --------------------------------------------------------
int __cdecl sub_10081347(PCNZWCH lpString1, int cchCount1)
{
  int v2; // edi
  const WCHAR **v3; // esi
  const WCHAR *v4; // eax
  int v5; // eax

  v2 = dword_100B1C78;
  v3 = (const WCHAR **)dword_100B1C78;
  v4 = *(const WCHAR **)dword_100B1C78;
  if ( !*(_DWORD *)dword_100B1C78 )
    return -(((signed int)v3 - v2) >> 2);
  while ( 1 )
  {
    if ( !sub_10035D00(lpString1, v4, cchCount1) )
    {
      v5 = (*v3)[cchCount1];
      if ( v5 == 61 || !(_WORD)v5 )
        break;
    }
    ++v3;
    v4 = *v3;
    if ( !*v3 )
      return -(((signed int)v3 - v2) >> 2);
  }
  return ((signed int)v3 - v2) >> 2;
}
// 100B1C78: using guessed type int dword_100B1C78;

//----- (1008159D) --------------------------------------------------------
int __cdecl sub_1008159D(void *a1, int a2)
{
  return sub_10080AAF(a1, a2);
}

//----- (100815AA) --------------------------------------------------------
int __cdecl sub_100815AA(void *a1, int a2)
{
  return sub_10080DA7(a1, a2);
}

//----- (100815C4) --------------------------------------------------------
int __cdecl sub_100815C4(LPCVOID lpMem, int a2, int a3)
{
  int v3; // ecx
  int result; // eax
  unsigned int v5; // edi
  unsigned int v6; // esi
  int v7; // ebx

  if ( a2 && 0xFFFFFFE0 / a2 < a3 )
  {
    *(_DWORD *)sub_10034888(v3) = 12;
    result = 0;
  }
  else
  {
    if ( lpMem )
      v5 = sub_10033159(lpMem);
    else
      v5 = 0;
    v6 = a3 * a2;
    v7 = sub_10034E7D((LPVOID)lpMem, a3 * a2);
    if ( v7 )
    {
      if ( v5 < v6 )
        sub_10034388(v7 + v5, 0, v6 - v5);
    }
    result = v7;
  }
  return result;
}
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (1008164C) --------------------------------------------------------
BOOL __stdcall LocaleEnumProc(LPWSTR a1)
{
  return sub_100817DA((int)a1);
}

//----- (10081662) --------------------------------------------------------
BOOL __stdcall sub_10081662(_DWORD *a1, _DWORD **a2, _DWORD *a3)
{
  BOOL v3; // esi

  sub_100360E8(*a1);
  dword_100B223C = sub_10035909(**a2);
  v3 = EnumSystemLocalesW(LocaleEnumProc, 1u);
  dword_100B223C = __security_cookie;
  sub_10033799(*a3);
  return v3;
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 10035909: using guessed type _DWORD __cdecl sub_10035909(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);
// 100B223C: using guessed type int dword_100B223C;

//----- (1008176E) --------------------------------------------------------
int __cdecl sub_1008176E(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

//----- (100817DA) --------------------------------------------------------
int __stdcall sub_100817DA(int a1)
{
  return ((int (__thiscall *)(_DWORD, int, _DWORD, _DWORD))__ROR4__(
                                                             __security_cookie ^ dword_100B223C,
                                                             __security_cookie & 0x1F))(
           __ROR4__(__security_cookie ^ dword_100B223C, __security_cookie & 0x1F),
           a1,
           0,
           0);
}
// 100B223C: using guessed type int dword_100B223C;
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1008191F) --------------------------------------------------------
int sub_1008191F()
{
  return sub_10081DFC(0, "AreFileApisANSI", (int)&unk_100A6A20, (int)"AreFileApisANSI");
}

//----- (1008193F) --------------------------------------------------------
int sub_1008193F()
{
  return sub_10081DFC(1, "CompareStringEx", (int)&unk_100A6A38, (int)&unk_100A6A40);
}

//----- (1008195F) --------------------------------------------------------
int sub_1008195F()
{
  return sub_10081DFC(2, "EnumSystemLocalesEx", (int)&unk_100A6A58, (int)&unk_100A6A60);
}

//----- (10081A1F) --------------------------------------------------------
int sub_10081A1F()
{
  return sub_10081DFC(4, "GetDateFormatEx", (int)&unk_100A6A9C, (int)&unk_100A6AA4);
}

//----- (10081A7F) --------------------------------------------------------
int sub_10081A7F()
{
  return sub_10081DFC(8, "GetLocaleInfoEx", (int)&unk_100A6B28, (int)&unk_100A6B30);
}

//----- (10081AFF) --------------------------------------------------------
int sub_10081AFF()
{
  return sub_10081DFC(11, "GetTimeFormatEx", (int)&unk_100A6B9C, (int)&unk_100A6BA4);
}

//----- (10081B1F) --------------------------------------------------------
int sub_10081B1F()
{
  return sub_10081DFC(12, "GetUserDefaultLocaleName", (int)&unk_100A6BBC, (int)&unk_100A6BC4);
}

//----- (10081B9F) --------------------------------------------------------
int sub_10081B9F()
{
  return sub_10081DFC(16, "IsValidLocaleName", (int)&unk_100A6C48, (int)&unk_100A6C50);
}

//----- (10081BBF) --------------------------------------------------------
int sub_10081BBF()
{
  return sub_10081DFC(18, "LCIDToLocaleName", (int)&unk_100A6C88, (int)&unk_100A6C90);
}

//----- (10081BDF) --------------------------------------------------------
int sub_10081BDF()
{
  return sub_10081DFC(17, "LCMapStringEx", (int)&unk_100A6C6C, (int)&unk_100A6C74);
}

//----- (10081BFF) --------------------------------------------------------
int sub_10081BFF()
{
  return sub_10081DFC(19, "LocaleNameToLCID", (int)&unk_100A6CA8, (int)&unk_100A6CB0);
}

//----- (10081C1F) --------------------------------------------------------
int sub_10081C1F()
{
  return sub_10081DFC(20, "LocateXStateFeature", (int)"\n", (int)&unk_100A6CD0);
}

//----- (10081C3F) --------------------------------------------------------
int sub_10081C3F()
{
  return sub_10081DFC(21, "MessageBoxA", (int)"\r", (int)&unk_100A6CF4);
}

//----- (10081C5F) --------------------------------------------------------
int sub_10081C5F()
{
  return sub_10081DFC(22, "MessageBoxW", (int)"\r", (int)&unk_100A6D10);
}

//----- (10081CFF) --------------------------------------------------------
HMODULE __cdecl sub_10081CFF(int *a1, int *a2)
{
  int *i; // edi
  int v3; // ecx
  HMODULE v4; // esi
  const WCHAR *v5; // ebx
  int v7; // [esp+Ch] [ebp-4h]

  for ( i = a1; ; ++i )
  {
    if ( i == a2 )
      return 0;
    v3 = *i;
    v7 = *i;
    v4 = (HMODULE)dword_100B2128[*i];
    if ( !v4 )
      break;
    if ( v4 != (HMODULE)-1 )
      return v4;
LABEL_11:
    ;
  }
  v5 = (&lpLibFileName)[v3];
  v4 = LoadLibraryExW((&lpLibFileName)[v3], 0, 0x800u);
  if ( !v4 )
  {
    if ( GetLastError() != 87
      || !sub_100358A0(v5, L"api-ms-", 7)
      || !sub_100358A0(v5, L"ext-ms-", 7)
      || (v4 = LoadLibraryExW(v5, 0, 0)) == 0 )
    {
      _InterlockedExchange(&dword_100B2128[v7], -1);
      goto LABEL_11;
    }
  }
  if ( _InterlockedExchange(&dword_100B2128[v7], (signed __int32)v4) )
    FreeLibrary(v4);
  return v4;
}
// 100358A0: using guessed type _DWORD __cdecl sub_100358A0(_DWORD, _DWORD, _DWORD);
// 100A54C0: using guessed type wchar_t aApiMs[8];
// 100A6A0C: using guessed type wchar_t aExtMs[8];

//----- (10081DFC) --------------------------------------------------------
int __cdecl sub_10081DFC(int a1, LPCSTR lpProcName, int a3, int a4)
{
  volatile signed __int32 *v4; // ebx
  int v5; // edx
  int result; // eax
  HMODULE v7; // eax
  FARPROC v8; // eax
  int v9; // edi

  v4 = (volatile signed __int32 *)((char *)&unk_100B2180 + 4 * a1);
  v5 = __ROR4__(__security_cookie ^ *v4, __security_cookie & 0x1F);
  if ( v5 == -1 )
    return 0;
  if ( v5 )
    return __ROR4__(__security_cookie ^ *v4, __security_cookie & 0x1F);
  v7 = sub_10081CFF((int *)a3, (int *)a4);
  if ( v7 && (v8 = GetProcAddress(v7, lpProcName), (v9 = (int)v8) != 0) )
  {
    _InterlockedExchange(v4, sub_10034F68(v8));
    result = v9;
  }
  else
  {
    _InterlockedExchange(v4, __security_cookie ^ __ROR4__(-1, 32 - (__security_cookie & 0x1F)));
    result = 0;
  }
  return result;
}
// 10034F68: using guessed type _DWORD __cdecl sub_10034F68(_DWORD);

//----- (10081F35) --------------------------------------------------------
HMODULE __cdecl sub_10081F35(LPCWSTR lpLibFileName)
{
  HMODULE result; // eax

  result = LoadLibraryExW(lpLibFileName, 0, 0x800u);
  if ( !result )
  {
    if ( GetLastError() == 87
      && sub_100358A0(lpLibFileName, L"api-ms-", 7)
      && sub_100358A0(lpLibFileName, L"ext-ms-", 7) )
    {
      result = LoadLibraryExW(lpLibFileName, 0, 0);
    }
    else
    {
      result = 0;
    }
  }
  return result;
}
// 100358A0: using guessed type _DWORD __cdecl sub_100358A0(_DWORD, _DWORD, _DWORD);
// 100A54C0: using guessed type wchar_t aApiMs[8];
// 100A6A0C: using guessed type wchar_t aExtMs[8];

//----- (10081FB4) --------------------------------------------------------
int __stdcall sub_10081FB4(int a1)
{
  int (__thiscall *v1)(_DWORD, signed int, int); // eax
  int result; // eax

  v1 = (int (__thiscall *)(_DWORD, signed int, int))sub_10081DFC(
                                                      25,
                                                      "AppPolicyGetProcessTerminationMethod",
                                                      (int)&unk_100A6D50,
                                                      (int)"AppPolicyGetProcessTerminationMethod");
  if ( v1 )
    result = v1(v1, -6, a1);
  else
    result = -1073741275;
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10082004) --------------------------------------------------------
int __stdcall sub_10082004(int a1)
{
  int (__thiscall *v1)(_DWORD, signed int, int); // eax
  int result; // eax

  v1 = (int (__thiscall *)(_DWORD, signed int, int))sub_10081DFC(
                                                      27,
                                                      "AppPolicyGetShowDeveloperDiagnostic",
                                                      (int)&unk_100A6DB0,
                                                      (int)"AppPolicyGetShowDeveloperDiagnostic");
  if ( v1 )
    result = v1(v1, -6, a1);
  else
    result = -1073741275;
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10082054) --------------------------------------------------------
int __stdcall sub_10082054(int a1)
{
  int (__thiscall *v1)(_DWORD, signed int, int); // eax
  int result; // eax

  v1 = (int (__thiscall *)(_DWORD, signed int, int))sub_10081DFC(
                                                      26,
                                                      "AppPolicyGetThreadInitializationType",
                                                      (int)&unk_100A6D80,
                                                      (int)"AppPolicyGetThreadInitializationType");
  if ( v1 )
    result = v1(v1, -6, a1);
  else
    result = -1073741275;
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (100820A4) --------------------------------------------------------
int __stdcall sub_100820A4(int a1)
{
  int (__thiscall *v1)(_DWORD, signed int, int); // eax
  int result; // eax

  v1 = (int (__thiscall *)(_DWORD, signed int, int))sub_10081DFC(
                                                      28,
                                                      "AppPolicyGetWindowingModel",
                                                      (int)&unk_100A6DE0,
                                                      (int)"AppPolicyGetWindowingModel");
  if ( v1 )
    result = v1(v1, -6, a1);
  else
    result = -1073741275;
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (100820F4) --------------------------------------------------------
int sub_100820F4()
{
  int (__thiscall *v0)(_DWORD); // eax
  int result; // eax

  v0 = (int (__thiscall *)(_DWORD))sub_1008191F();
  if ( v0 )
    result = v0(v0);
  else
    result = 1;
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1008211A) --------------------------------------------------------
int __stdcall sub_1008211A(int a1, DWORD dwCmpFlags, PCNZWCH lpString1, int cchCount1, PCNZWCH lpString2, int cchCount2, int a7, int a8, int a9)
{
  int (__thiscall *v9)(_DWORD, int, DWORD, PCNZWCH, int, PCNZWCH, int, int, int, int); // eax
  LCID v11; // eax

  v9 = (int (__thiscall *)(_DWORD, int, DWORD, PCNZWCH, int, PCNZWCH, int, int, int, int))sub_1008193F();
  if ( v9 )
    return v9(v9, a1, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2, a7, a8, a9);
  v11 = sub_100349DC(a1, 0);
  return CompareStringW(v11, dwCmpFlags, lpString1, cchCount1, lpString2, cchCount2);
}
// 100349DC: using guessed type _DWORD __stdcall sub_100349DC(_DWORD, _DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1008218E) --------------------------------------------------------
int __stdcall sub_1008218E(int a1, int a2, int a3, int a4)
{
  int (__thiscall *v4)(_DWORD, int, int, int, int); // eax
  int v6; // [esp+4h] [ebp-10h]
  int *v7; // [esp+8h] [ebp-Ch]
  int v8; // [esp+Ch] [ebp-8h]

  v4 = (int (__thiscall *)(_DWORD, int, int, int, int))sub_1008195F();
  if ( v4 )
    return v4(v4, a1, a2, a3, a4);
  v7 = &a1;
  v8 = 4;
  v6 = 4;
  return sub_10081662(&v6, &v7, &v8);
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (100821F7) --------------------------------------------------------
DWORD __stdcall sub_100821F7(int a1)
{
  int (__thiscall *v1)(_DWORD, int); // eax
  DWORD result; // eax

  v1 = (int (__thiscall *)(_DWORD, int))sub_10081DFC(31, "FlsAlloc", (int)&unk_100A6E50, (int)&unk_100A6E58);
  if ( v1 )
    result = v1(v1, a1);
  else
    result = TlsAlloc();
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10082245) --------------------------------------------------------
int __stdcall sub_10082245(DWORD dwTlsIndex)
{
  int (__thiscall *v1)(_DWORD, DWORD); // eax
  int result; // eax

  v1 = (int (__thiscall *)(_DWORD, DWORD))sub_10081DFC(32, "FlsFree", (int)&unk_100A6E5C, (int)&unk_100A6E64);
  if ( v1 )
    result = v1(v1, dwTlsIndex);
  else
    result = TlsFree(dwTlsIndex);
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10082293) --------------------------------------------------------
LPVOID __stdcall sub_10082293(DWORD dwTlsIndex)
{
  int (__thiscall *v1)(_DWORD, DWORD); // eax
  LPVOID result; // eax

  v1 = (int (__thiscall *)(_DWORD, DWORD))sub_10081DFC(33, "FlsGetValue", (int)&unk_100A6E68, (int)&unk_100A6E70);
  if ( v1 )
    result = (LPVOID)v1(v1, dwTlsIndex);
  else
    result = TlsGetValue(dwTlsIndex);
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (100822E1) --------------------------------------------------------
int __stdcall sub_100822E1(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  int (__thiscall *v2)(_DWORD, DWORD, LPVOID); // eax
  int result; // eax

  v2 = (int (__thiscall *)(_DWORD, DWORD, LPVOID))sub_10081DFC(
                                                    34,
                                                    "FlsSetValue",
                                                    (int)&unk_100A6E74,
                                                    (int)&unk_100A6E7C);
  if ( v2 )
    result = v2(v2, dwTlsIndex, lpTlsValue);
  else
    result = TlsSetValue(dwTlsIndex, lpTlsValue);
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (100823E0) --------------------------------------------------------
int __stdcall sub_100823E0(int a1, LCTYPE LCType, LPWSTR lpLCData, int cchData)
{
  int (__thiscall *v4)(_DWORD, int, LCTYPE, LPWSTR, int); // eax
  LCID v6; // eax

  v4 = (int (__thiscall *)(_DWORD, int, LCTYPE, LPWSTR, int))sub_10081A7F();
  if ( v4 )
    return v4(v4, a1, LCType, lpLCData, cchData);
  v6 = sub_100349DC(a1, 0);
  return GetLocaleInfoW(v6, LCType, lpLCData, cchData);
}
// 100349DC: using guessed type _DWORD __stdcall sub_100349DC(_DWORD, _DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10082524) --------------------------------------------------------
int __stdcall sub_10082524(int a1, int a2)
{
  int (__thiscall *v2)(_DWORD, int, int); // eax
  LCID v4; // eax

  v2 = (int (__thiscall *)(_DWORD, int, int))sub_10081B1F();
  if ( v2 )
    return v2(v2, a1, a2);
  v4 = GetUserDefaultLCID();
  return sub_10035521(v4, a1, a2, 0);
}
// 10035521: using guessed type _DWORD __stdcall sub_10035521(_DWORD, _DWORD, _DWORD, _DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (100825BF) --------------------------------------------------------
int __stdcall sub_100825BF(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int a3)
{
  int (__thiscall *v3)(_DWORD, LPCRITICAL_SECTION, DWORD, int); // eax
  int result; // eax

  v3 = (int (__thiscall *)(_DWORD, LPCRITICAL_SECTION, DWORD, int))sub_10081DFC(
                                                                     15,
                                                                     "InitializeCriticalSectionEx",
                                                                     (int)"\a",
                                                                     (int)&unk_100A6C44);
  if ( v3 )
    result = v3(v3, lpCriticalSection, dwSpinCount, a3);
  else
    result = InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1008261C) --------------------------------------------------------
int __stdcall sub_1008261C(int a1)
{
  int (__thiscall *v1)(_DWORD, int); // eax
  LCID v3; // eax

  v1 = (int (__thiscall *)(_DWORD, int))sub_10081B9F();
  if ( v1 )
    return v1(v1, a1);
  v3 = sub_100349DC(a1, 0);
  return IsValidLocale(v3, 1u);
}
// 100349DC: using guessed type _DWORD __stdcall sub_100349DC(_DWORD, _DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10082662) --------------------------------------------------------
int __stdcall sub_10082662(int a1, int a2, int a3, int a4)
{
  int (__thiscall *v4)(_DWORD, int, int, int, int); // eax
  int result; // eax

  v4 = (int (__thiscall *)(_DWORD, int, int, int, int))sub_10081BBF();
  if ( v4 )
    result = v4(v4, a1, a2, a3, a4);
  else
    result = sub_10033E3D(a1, a2, a3);
  return result;
}
// 10033E3D: using guessed type _DWORD __cdecl sub_10033E3D(_DWORD, _DWORD, _DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (100826B0) --------------------------------------------------------
int __stdcall sub_100826B0(int a1, DWORD dwMapFlags, LPCWSTR lpSrcStr, int cchSrc, LPWSTR lpDestStr, int cchDest, int a7, int a8, int a9)
{
  int (__thiscall *v9)(_DWORD, int, DWORD, LPCWSTR, int, LPWSTR, int, int, int, int); // eax
  LCID v11; // eax

  v9 = (int (__thiscall *)(_DWORD, int, DWORD, LPCWSTR, int, LPWSTR, int, int, int, int))sub_10081BDF();
  if ( v9 )
    return v9(v9, a1, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest, a7, a8, a9);
  v11 = sub_100349DC(a1, 0);
  return LCMapStringW(v11, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}
// 100349DC: using guessed type _DWORD __stdcall sub_100349DC(_DWORD, _DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10082724) --------------------------------------------------------
int __stdcall sub_10082724(int a1, int a2)
{
  int (__thiscall *v2)(_DWORD, int, int); // eax
  int result; // eax

  v2 = (int (__thiscall *)(_DWORD, int, int))sub_10081BFF();
  if ( v2 )
    result = v2(v2, a1, a2);
  else
    result = sub_10033096(a1);
  return result;
}
// 10033096: using guessed type _DWORD __cdecl sub_10033096(_DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1008279B) --------------------------------------------------------
int __stdcall sub_1008279B(int a1, int a2, int a3, int a4)
{
  int (__thiscall *v4)(_DWORD, int, int, int, int); // eax
  int v5; // edx
  int v6; // ecx

  v4 = (int (__thiscall *)(_DWORD, int, int, int, int))sub_10081C3F();
  if ( !v4 )
    sub_100354D1(v6, v5);
  return v4(v4, a1, a2, a3, a4);
}
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (100827D9) --------------------------------------------------------
int __stdcall sub_100827D9(int a1, int a2, int a3, int a4)
{
  int (__thiscall *v4)(_DWORD, int, int, int, int); // eax
  int v5; // edx
  int v6; // ecx

  v4 = (int (__thiscall *)(_DWORD, int, int, int, int))sub_10081C5F();
  if ( !v4 )
    sub_100354D1(v6, v5);
  return v4(v4, a1, a2, a3, a4);
}
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10082932) --------------------------------------------------------
char sub_10082932()
{
  char v0; // bl

  v0 = 0;
  if ( sub_10033672() == 1 && sub_10081C3F() && sub_10081C5F() )
    v0 = 1;
  return v0;
}
// 10033672: using guessed type int sub_10033672(void);

//----- (10082962) --------------------------------------------------------
bool sub_10082962()
{
  return sub_1008193F() != 0;
}

//----- (1008297C) --------------------------------------------------------
int sub_1008297C()
{
  sub_1008191F();
  sub_1008193F();
  sub_1008195F();
  sub_10081A1F();
  sub_10081A7F();
  sub_10081AFF();
  sub_10081B1F();
  sub_10081B9F();
  sub_10081BDF();
  sub_10081BBF();
  return sub_10081BFF();
}

//----- (100829C0) --------------------------------------------------------
int sub_100829C0()
{
  int (__thiscall *v0)(_DWORD); // eax
  int v1; // edi
  int (__thiscall *v2)(_DWORD, int); // eax
  int result; // eax

  v0 = (int (__thiscall *)(_DWORD))sub_10081DFC(3, "GetActiveWindow", (int)"\v", (int)&unk_100A6A84);
  if ( !v0 )
    return 0;
  v1 = v0(v0);
  if ( !v1 )
    return 0;
  v2 = (int (__thiscall *)(_DWORD, int))sub_10081DFC(7, "GetLastActivePopup", (int)"\r", (int)&unk_100A6B0C);
  if ( v2 )
    result = v2(v2, v1);
  else
    result = v1;
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10082A42) --------------------------------------------------------
char sub_10082A42()
{
  memset32(&unk_100B2180, __security_cookie, 0x23u);
  return 1;
}

//----- (10082A5B) --------------------------------------------------------
char sub_10082A5B()
{
  int (__thiscall *v0)(_DWORD); // esi
  int (__thiscall *v1)(_DWORD, int, signed int, int *, signed int, _DWORD); // ebx
  int v2; // ecx
  char result; // al
  int v4; // [esp+8h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-Ch]
  int v6; // [esp+10h] [ebp-8h]

  v0 = (int (__thiscall *)(_DWORD))sub_10081DFC(9, "GetProcessWindowStation", (int)&unk_100A6B48, (int)&unk_100A6B50);
  if ( !v0 )
    return 1;
  v1 = (int (__thiscall *)(_DWORD, int, signed int, int *, signed int, _DWORD))sub_10081DFC(
                                                                                 13,
                                                                                 "GetUserObjectInformationW",
                                                                                 (int)&unk_100A6BE8,
                                                                                 (int)&unk_100A6BF0);
  if ( !v1 )
    return 1;
  v2 = v0(v0);
  if ( v2 && (v4 = 0, v5 = 0, v6 = 0, v1(v1, v2, 1, &v4, 12, 0)) )
    result = v6 & 1;
  else
    result = 0;
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10082B23) --------------------------------------------------------
char __cdecl sub_10082B23(char a1)
{
  HMODULE *v1; // esi

  if ( !a1 )
  {
    v1 = (HMODULE *)dword_100B2128;
    do
    {
      if ( *v1 )
      {
        if ( *v1 != (HMODULE)-1 )
          FreeLibrary(*v1);
        *v1 = 0;
      }
      ++v1;
    }
    while ( v1 != (HMODULE *)&unk_100B2180 );
  }
  return 1;
}

//----- (10082B6C) --------------------------------------------------------
bool sub_10082B6C()
{
  hHeap = GetProcessHeap();
  return hHeap != 0;
}

//----- (10082B81) --------------------------------------------------------
char sub_10082B81()
{
  hHeap = 0;
  return 1;
}

//----- (10082B93) --------------------------------------------------------
char __cdecl sub_10082B93(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  void (__cdecl **v3)(_DWORD); // esi

  if ( a1 == a2 )
    return 1;
  v2 = a1;
  do
  {
    if ( *v2 && !((unsigned __int8 (__thiscall *)(_DWORD))*v2)(*v2) )
      break;
    v2 += 2;
  }
  while ( v2 != a2 );
  if ( v2 == a2 )
    return 1;
  if ( v2 != a1 )
  {
    v3 = (void (__cdecl **)(_DWORD))(v2 - 1);
    do
    {
      if ( *(v3 - 1) )
      {
        if ( *v3 )
          (*v3)(0);
      }
      v3 -= 2;
    }
    while ( v3 + 1 != a1 );
  }
  return 0;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10082C15) --------------------------------------------------------
char __cdecl sub_10082C15(int a1, int a2)
{
  int i; // esi
  void (__cdecl *v3)(_DWORD); // edi

  for ( i = a2; i != a1; i -= 8 )
  {
    v3 = *(void (__cdecl **)(_DWORD))(i - 4);
    if ( v3 )
      v3(0);
  }
  return 1;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10082C58) --------------------------------------------------------
int __cdecl sub_10082C58(int a1)
{
  return __ROR4__(__security_cookie ^ a1, __security_cookie & 0x1F);
}

//----- (10082C79) --------------------------------------------------------
int __cdecl sub_10082C79(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

//----- (10082CD5) --------------------------------------------------------
int __cdecl sub_10082CD5(int a1)
{
  int result; // eax

  result = a1;
  dword_100B2244 = a1;
  return result;
}
// 100B2244: using guessed type int dword_100B2244;

//----- (10082CE7) --------------------------------------------------------
BOOL __cdecl sub_10082CE7(int a1)
{
  int (__thiscall *v1)(_DWORD, int); // eax
  BOOL result; // eax

  v1 = (int (__thiscall *)(_DWORD, int))sub_10034F40();
  if ( v1 )
    result = v1(v1, a1) != 0;
  else
    result = 0;
  return result;
}
// 10034F40: using guessed type int sub_10034F40(void);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10082D1E) --------------------------------------------------------
int sub_10082D1E()
{
  int v0; // esi

  sub_100360E8(0);
  v0 = sub_10034F90(dword_100B2244);
  sub_10033799(0);
  return v0;
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 10034F90: using guessed type _DWORD __cdecl sub_10034F90(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);
// 100B2244: using guessed type int dword_100B2244;

//----- (10082D8A) --------------------------------------------------------
int __cdecl sub_10082D8A(int a1)
{
  int v1; // esi

  sub_100360E8(0);
  v1 = sub_10034F90(dword_100B2244);
  dword_100B2244 = sub_1003634A(a1);
  sub_10033799(0);
  return v1;
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 10034F90: using guessed type _DWORD __cdecl sub_10034F90(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);
// 1003634A: using guessed type _DWORD __cdecl sub_1003634A(_DWORD);
// 100B2244: using guessed type int dword_100B2244;

//----- (10082E0E) --------------------------------------------------------
int __stdcall sub_10082E0E(_DWORD *a1, int a2, _DWORD *a3)
{
  int v3; // esi

  sub_100360E8(*a1);
  v3 = __ROR4__(__security_cookie ^ dword_100B2254, __security_cookie & 0x1F);
  sub_10033799(*a3);
  return v3;
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);
// 100B2254: using guessed type int dword_100B2254;

//----- (10082EBF) --------------------------------------------------------
int __cdecl sub_10082EBF(int a1)
{
  return __ROR4__(__security_cookie ^ a1, __security_cookie & 0x1F);
}

//----- (10082EE0) --------------------------------------------------------
int __cdecl sub_10082EE0(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

//----- (10082F64) --------------------------------------------------------
signed int __cdecl sub_10082F64(int a1)
{
  int *v1; // ebx
  void (__cdecl *v2)(signed int); // eax
  void (__cdecl *v3)(signed int); // esi
  signed int v5; // [esp-4h] [ebp-34h]

  sub_100360E8(3);
  if ( a1 )
  {
    v1 = &dword_100B2250;
    v2 = (void (__cdecl *)(signed int))sub_100347B6(dword_100B2250);
    v5 = 21;
  }
  else
  {
    v1 = &dword_100B224C;
    v2 = (void (__cdecl *)(signed int))sub_100347B6(dword_100B224C);
    v5 = 2;
  }
  v3 = v2;
  if ( v2 && v2 != (void (__cdecl *)(signed int))1 )
    *v1 = __security_cookie;
  sub_10033799(3);
  if ( !v3 )
    return 0;
  if ( v3 != (void (__cdecl *)(signed int))1 )
    v3(v5);
  return 1;
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 100347B6: using guessed type _DWORD __cdecl sub_100347B6(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);
// 100B224C: using guessed type int dword_100B224C;
// 100B2250: using guessed type int dword_100B2250;
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1008303D) --------------------------------------------------------
int *__cdecl sub_1008303D(int a1)
{
  if ( a1 == 2 )
    return &dword_100B224C;
  if ( a1 != 6 )
  {
    if ( a1 == 15 )
      return &dword_100B2258;
    if ( a1 == 21 )
      return &dword_100B2250;
    if ( a1 != 22 )
      return 0;
  }
  return &dword_100B2254;
}
// 100B224C: using guessed type int dword_100B224C;
// 100B2250: using guessed type int dword_100B2250;
// 100B2254: using guessed type int dword_100B2254;
// 100B2258: using guessed type int dword_100B2258;

//----- (100830F2) --------------------------------------------------------
int __cdecl sub_100830F2(int a1, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 == a2 + 144 )
    return 0;
  while ( *(_DWORD *)(result + 4) != a1 )
  {
    result += 12;
    if ( result == a2 + 144 )
      return 0;
  }
  return result;
}

//----- (10083124) --------------------------------------------------------
signed int __cdecl sub_10083124(int a1)
{
  int v1; // ecx

  if ( a1 != 1 && a1 != 3 && a1 != 13 && a1 != 16 && a1 != 17 )
    *(_DWORD *)sub_10034888(v1) = 22;
  return -1;
}
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (10083165) --------------------------------------------------------
int sub_10083165()
{
  int v1; // [esp+0h] [ebp-Ch]
  int v2; // [esp+4h] [ebp-8h]
  char v3; // [esp+Bh] [ebp-1h]

  v2 = 3;
  v1 = 3;
  return sub_10082E0E(&v1, (int)&v3, &v2);
}

//----- (10083195) --------------------------------------------------------
int __cdecl sub_10083195(int a1)
{
  int result; // eax

  result = a1;
  dword_100B224C = a1;
  dword_100B2250 = a1;
  dword_100B2254 = a1;
  dword_100B2258 = a1;
  return result;
}
// 100B224C: using guessed type int dword_100B224C;
// 100B2250: using guessed type int dword_100B2250;
// 100B2254: using guessed type int dword_100B2254;
// 100B2258: using guessed type int dword_100B2258;

//----- (100831C5) --------------------------------------------------------
int sub_100831C5()
{
  return sub_10034E4B() + 4;
}

//----- (100831D0) --------------------------------------------------------
signed int __cdecl sub_100831D0(int a1)
{
  signed int v1; // ecx
  int *v2; // edi
  char v3; // bl
  int *v4; // eax
  int v6; // eax
  signed int v7; // ST04_4
  int *v8; // eax
  void (__cdecl *v9)(signed int, int); // ecx
  bool v10; // bh
  int v11; // eax
  int v12; // edx
  int v13; // ST04_4
  int v14; // [esp+14h] [ebp-34h]
  int v15; // [esp+18h] [ebp-30h]
  int *v16; // [esp+24h] [ebp-24h]
  void (__cdecl *v17)(signed int, int); // [esp+28h] [ebp-20h]

  v2 = 0;
  v14 = 0;
  v3 = 1;
  if ( a1 > 11 )
  {
    if ( a1 != 15 && a1 != 21 && a1 != 22 )
      goto LABEL_10;
    goto LABEL_15;
  }
  if ( a1 != 11 )
  {
    v1 = 2;
    if ( a1 == 2 )
      goto LABEL_15;
    if ( a1 != 4 )
    {
      if ( a1 != 6 )
      {
        if ( a1 != 8 )
          goto LABEL_10;
        goto LABEL_7;
      }
LABEL_15:
      v8 = sub_1008303D(a1);
      goto LABEL_16;
    }
  }
LABEL_7:
  v4 = (int *)sub_10036340();
  v2 = v4;
  if ( !v4 )
    return -1;
  v6 = sub_100830F2(a1, *v4);
  v1 = v7;
  if ( !v6 )
  {
LABEL_10:
    *(_DWORD *)sub_10034888(v1) = 22;
    sub_10034711();
    return -1;
  }
  v8 = (int *)(v6 + 8);
  v3 = 0;
LABEL_16:
  v16 = v8;
  v15 = 0;
  if ( v3 )
    sub_100360E8(3);
  v9 = (void (__cdecl *)(signed int, int))*v16;
  v17 = (void (__cdecl *)(signed int, int))*v16;
  if ( v3 )
  {
    v9 = (void (__cdecl *)(signed int, int))sub_100347B6(v9);
    v17 = v9;
  }
  v10 = v9 == (void (__cdecl *)(signed int, int))1;
  if ( v9 == (void (__cdecl *)(signed int, int))1 )
    goto LABEL_36;
  if ( !v9 )
  {
    if ( v3 )
      sub_10033799(3);
    sub_10035E5E(3u);
    JUMPOUT(*(_DWORD *)byte_100833C1);
  }
  if ( a1 == 8 || a1 == 11 || a1 == 4 )
  {
    v15 = v2[1];
    v2[1] = 0;
    if ( a1 != 8 )
      goto LABEL_31;
    v14 = *(_DWORD *)(sub_10034E4B() + 8);
    *(_DWORD *)(sub_10034E4B() + 8) = 140;
  }
  if ( a1 == 8 )
  {
    v11 = *v2 + 36;
    v12 = *v2 + 144;
    while ( v11 != v12 )
    {
      *(_DWORD *)(v11 + 8) = 0;
      v11 += 12;
    }
    goto LABEL_36;
  }
LABEL_31:
  *v16 = __security_cookie;
LABEL_36:
  if ( v3 )
    sub_10033799(3);
  if ( !v10 )
  {
    if ( a1 == 8 )
    {
      v13 = *(_DWORD *)(sub_10034E4B() + 8);
      v17(8, v13);
    }
    else
    {
      ((void (__cdecl *)(int))v17)(a1);
    }
    if ( a1 == 8 || a1 == 11 || a1 == 4 )
    {
      v2[1] = v15;
      if ( a1 == 8 )
        *(_DWORD *)(sub_10034E4B() + 8) = v14;
    }
  }
  return 0;
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 10034711: using guessed type int sub_10034711(void);
// 100347B6: using guessed type _DWORD __cdecl sub_100347B6(_DWORD);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);
// 10036340: using guessed type int sub_10036340(void);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (100835E0) --------------------------------------------------------
int __usercall sub_100835E0@<eax>(int a1@<ebp>)
{
  int v1; // edi
  char v2; // bl

  v1 = *(_DWORD *)(a1 + 8);
  v2 = *(_BYTE *)(a1 - 25);
  return sub_100835E6();
}

//----- (100835E6) --------------------------------------------------------
int sub_100835E6()
{
  return sub_10033799(3);
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);

//----- (10083694) --------------------------------------------------------
int __cdecl sub_10083694(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

//----- (100836E0) --------------------------------------------------------
bool sub_100836E0()
{
  return __ROR4__(__security_cookie ^ dword_100B2260, __security_cookie & 0x1F) != 0;
}
// 100B2260: using guessed type int dword_100B2260;

//----- (10083704) --------------------------------------------------------
int __cdecl sub_10083704(int a1)
{
  int result; // eax

  result = a1;
  dword_100B2260 = a1;
  return result;
}
// 100B2260: using guessed type int dword_100B2260;

//----- (10083716) --------------------------------------------------------
int __cdecl sub_10083716(int a1)
{
  int (__cdecl *v1)(int); // esi
  int result; // eax

  v1 = (int (__cdecl *)(int))__ROR4__(__security_cookie ^ dword_100B2260, __security_cookie & 0x1F);
  if ( v1 )
    result = v1(a1);
  else
    result = 0;
  return result;
}
// 100B2260: using guessed type int dword_100B2260;
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10083773) --------------------------------------------------------
int __stdcall sub_10083773(_DWORD *a1, int **a2, _DWORD *a3)
{
  sub_10033262(*a1);
  if ( sub_10083D0B(**a2, a2[1]) && (*(_BYTE *)a2[2] || (*(_DWORD *)(**a2 + 12) >> 1) & 1) )
  {
    if ( sub_10036115(**a2) == -1 )
      *a2[3] = -1;
    else
      ++*a2[1];
  }
  return sub_10033893(*a3);
}
// 10033262: using guessed type _DWORD __cdecl sub_10033262(_DWORD);
// 10033893: using guessed type _DWORD __cdecl sub_10033893(_DWORD);
// 10036115: using guessed type _DWORD __cdecl sub_10036115(_DWORD);

//----- (10083822) --------------------------------------------------------
int __stdcall sub_10083822(_DWORD *a1, int a2, _DWORD *a3)
{
  int *v3; // esi
  int *v4; // ebx
  int v5; // edi
  int v6; // edx
  int v7; // ecx
  _DWORD *v8; // eax
  int *v10; // [esp+10h] [ebp-3Ch]
  _DWORD *v11; // [esp+14h] [ebp-38h]
  int v12; // [esp+18h] [ebp-34h]
  int v13; // [esp+1Ch] [ebp-30h]
  int *v14; // [esp+20h] [ebp-2Ch]
  int v15; // [esp+24h] [ebp-28h]
  int v16; // [esp+28h] [ebp-24h]
  int v17; // [esp+2Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  sub_100360E8(*a1);
  ms_exc.registration.TryLevel = 0;
  v3 = (int *)lpMem;
  v4 = (int *)((char *)lpMem + 4 * dword_100B1CB8);
  v5 = a2;
  while ( 1 )
  {
    v14 = v3;
    if ( v3 == v4 )
      break;
    v17 = *v3;
    if ( sub_10083D0B(v17, *(_DWORD **)v5) )
    {
      v6 = *(_DWORD *)(v5 + 8);
      v7 = *(_DWORD *)(v5 + 4);
      v8 = *(_DWORD **)v5;
      v10 = &v17;
      v11 = v8;
      v12 = v7;
      v13 = v6;
      v16 = v17;
      v15 = v17;
      sub_10083773(&v15, &v10, &v16);
      v5 = a2;
    }
    ++v3;
  }
  ms_exc.registration.TryLevel = -2;
  return sub_10033799(*a3);
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);
// 100B1CB8: using guessed type int dword_100B1CB8;

//----- (100838F9) --------------------------------------------------------
int __stdcall sub_100838F9(_DWORD *a1, _DWORD **a2, _DWORD *a3)
{
  int v3; // esi

  sub_10033262(*a1);
  v3 = sub_10036115(**a2);
  sub_10033893(*a3);
  return v3;
}
// 10033262: using guessed type _DWORD __cdecl sub_10033262(_DWORD);
// 10033893: using guessed type _DWORD __cdecl sub_10033893(_DWORD);
// 10036115: using guessed type _DWORD __cdecl sub_10036115(_DWORD);

//----- (10083CAB) --------------------------------------------------------
int __cdecl sub_10083CAB(char a1)
{
  int result; // eax
  int *v2; // [esp+0h] [ebp-20h]
  char *v3; // [esp+4h] [ebp-1Ch]
  int *v4; // [esp+8h] [ebp-18h]
  int v5; // [esp+Ch] [ebp-14h]
  int v6; // [esp+10h] [ebp-10h]
  int v7; // [esp+14h] [ebp-Ch]
  int v8; // [esp+18h] [ebp-8h]

  v8 = 0;
  v7 = 0;
  v2 = &v8;
  v3 = &a1;
  v4 = &v7;
  v6 = 8;
  v5 = 8;
  sub_10083822(&v5, (int)&v2, &v6);
  result = v8;
  if ( !a1 )
    result = v7;
  return result;
}

//----- (10083D0B) --------------------------------------------------------
char __cdecl sub_10083D0B(int a1, _DWORD *a2)
{
  if ( !a1 || !((*(_DWORD *)(a1 + 12) >> 13) & 1) )
    return 0;
  if ( !sub_10083D99(*(_DWORD *)(a1 + 12)) )
  {
    ++*a2;
    return 0;
  }
  return 1;
}

//----- (10083D99) --------------------------------------------------------
char __cdecl sub_10083D99(unsigned int a1)
{
  char result; // al

  if ( (a1 & 3) == 2 && a1 & 0xC0 )
    result = 1;
  else
    result = (a1 >> 11) & 1;
  return result;
}

//----- (10083DC4) --------------------------------------------------------
signed int __cdecl sub_10083DC4(_DWORD *a1, int a2)
{
  volatile signed __int32 *v2; // esi
  int v3; // ebx
  int v4; // edi
  int v5; // eax

  v2 = a1 + 3;
  if ( (a1[3] & 3) == 2 )
  {
    if ( a1[3] & 0xC0 )
    {
      v3 = a1[1];
      v4 = *a1 - v3;
      *a1 = v3;
      a1[2] = 0;
      if ( v4 > 0 )
      {
        v5 = sub_10035DFA(a1);
        if ( v4 != sub_10034B76(v5, v3, v4, a2) )
        {
          _InterlockedOr(v2, 0x10u);
          return -1;
        }
        if ( ((volatile unsigned __int32)*v2 >> 2) & 1 )
          _InterlockedAnd(v2, 0xFFFFFFFD);
      }
    }
  }
  return 0;
}
// 10034B76: using guessed type _DWORD __cdecl sub_10034B76(_DWORD, _DWORD, _DWORD, _DWORD);
// 10035DFA: using guessed type _DWORD __cdecl sub_10035DFA(_DWORD);

//----- (10083E47) --------------------------------------------------------
int __cdecl sub_10083E47(int a1)
{
  int v1; // esi
  int v2; // eax
  char v4; // [esp+8h] [ebp-28h]

  v1 = 0;
  sub_10033AD2(0);
  if ( a1 )
  {
    if ( sub_10034D92(a1, &v4) || (*(_DWORD *)(a1 + 12) >> 11) & 1 && (v2 = sub_10035DFA(a1), sub_100350AD(v2)) )
      v1 = -1;
  }
  else
  {
    v1 = sub_10083CAB(0);
  }
  sub_100343D8(&v4);
  return v1;
}
// 10033AD2: using guessed type _DWORD __stdcall sub_10033AD2(_DWORD);
// 100343D8: using guessed type int __thiscall sub_100343D8(_DWORD);
// 10034D92: using guessed type _DWORD __cdecl sub_10034D92(_DWORD, _DWORD);
// 100350AD: using guessed type _DWORD __cdecl sub_100350AD(_DWORD);
// 10035DFA: using guessed type _DWORD __cdecl sub_10035DFA(_DWORD);

//----- (10083EC5) --------------------------------------------------------
int sub_10083EC5()
{
  return sub_10083CAB(1);
}

//----- (10083F37) --------------------------------------------------------
int __thiscall sub_10083F37(void *this)
{
  int v1; // eax
  void *v3; // [esp+0h] [ebp-4h]

  v3 = this;
  v1 = sub_10034E4B();
  v3 = *(void **)(v1 + 76);
  sub_10034EB4(v1, &v3);
  return *(_DWORD *)v3;
}
// 10034EB4: using guessed type _DWORD __cdecl sub_10034EB4(_DWORD, _DWORD);

//----- (10083F83) --------------------------------------------------------
int __cdecl sub_10083F83(WCHAR a1, unsigned __int16 a2)
{
  int result; // eax
  WCHAR SrcStr; // [esp+4h] [ebp-8h]
  WORD CharType; // [esp+8h] [ebp-4h]

  if ( a1 == -1 )
    goto LABEL_9;
  if ( a1 < 0x100u )
    return a2 & *(_WORD *)&off_100B0ACC[2 * a1];
  SrcStr = a1;
  CharType = 0;
  if ( sub_100357B5(1u, &SrcStr, 1, &CharType) )
    result = (unsigned __int16)(a2 & CharType);
  else
LABEL_9:
    result = 0;
  return result;
}
// 100B0ACC: using guessed type char *off_100B0ACC;

//----- (10084045) --------------------------------------------------------
int __cdecl sub_10084045(signed int a1, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // [esp+0h] [ebp-20h]
  int v7; // [esp+4h] [ebp-1Ch]
  char v8; // [esp+Ch] [ebp-14h]
  CHAR MultiByteStr; // [esp+10h] [ebp-10h]
  char v10; // [esp+11h] [ebp-Fh]
  char v11; // [esp+12h] [ebp-Eh]
  WORD CharType[2]; // [esp+14h] [ebp-Ch]
  __int16 v13; // [esp+18h] [ebp-8h]

  sub_10035A08(a3);
  if ( a1 >= -1 && a1 <= 255 )
  {
    v3 = *(unsigned __int16 *)(*(_DWORD *)v7 + 2 * a1);
    goto LABEL_12;
  }
  if ( *(_WORD *)(*(_DWORD *)v7 + 2 * BYTE1(a1)) >= 0 )
  {
    MultiByteStr = a1;
    v10 = 0;
    v4 = 1;
  }
  else
  {
    MultiByteStr = BYTE1(a1);
    v10 = a1;
    v11 = 0;
    v4 = 2;
  }
  *(_DWORD *)CharType = 0;
  v13 = 0;
  if ( sub_100331CC((int)&v7, 1u, &MultiByteStr, v4, CharType, *(_DWORD *)(v7 + 8), 1) )
  {
    v3 = CharType[0];
LABEL_12:
    result = a2 & v3;
    if ( v8 )
      *(_DWORD *)(v6 + 848) &= 0xFFFFFFFD;
    return result;
  }
  if ( v8 )
    *(_DWORD *)(v6 + 848) &= 0xFFFFFFFD;
  return 0;
}
// 10035A08: using guessed type _DWORD __stdcall sub_10035A08(_DWORD);

//----- (10084145) --------------------------------------------------------
int sub_10084145()
{
  return dword_100B2264;
}
// 100B2264: using guessed type int dword_100B2264;

//----- (10084186) --------------------------------------------------------
int __cdecl sub_10084186(int a1)
{
  volatile signed __int32 *v1; // ecx
  volatile signed __int32 *v2; // ecx
  volatile signed __int32 *v3; // ecx
  volatile signed __int32 *v4; // ecx
  volatile signed __int32 **v5; // ecx
  signed int v6; // esi
  volatile signed __int32 *v7; // edx

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 12));
  v1 = *(volatile signed __int32 **)(a1 + 124);
  if ( v1 )
    _InterlockedIncrement(v1);
  v2 = *(volatile signed __int32 **)(a1 + 132);
  if ( v2 )
    _InterlockedIncrement(v2);
  v3 = *(volatile signed __int32 **)(a1 + 128);
  if ( v3 )
    _InterlockedIncrement(v3);
  v4 = *(volatile signed __int32 **)(a1 + 140);
  if ( v4 )
    _InterlockedIncrement(v4);
  v5 = (volatile signed __int32 **)(a1 + 40);
  v6 = 6;
  do
  {
    if ( *(v5 - 2) != (volatile signed __int32 *)&unk_100B0458 && *v5 )
      _InterlockedIncrement(*v5);
    if ( *(v5 - 3) )
    {
      v7 = *(v5 - 1);
      if ( v7 )
        _InterlockedIncrement(v7);
    }
    v5 += 4;
    --v6;
  }
  while ( v6 );
  return sub_10034180(*(_DWORD *)(a1 + 156));
}
// 10034180: using guessed type _DWORD __cdecl sub_10034180(_DWORD);

//----- (10084222) --------------------------------------------------------
int __cdecl sub_10084222(LPVOID lpMem)
{
  void **v1; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  signed int v6; // eax
  LPVOID *v7; // ebx
  LPVOID *v8; // edi
  _DWORD *v9; // eax
  signed int v11; // [esp+Ch] [ebp-4h]

  v1 = (void **)*((_DWORD *)lpMem + 34);
  if ( v1 )
  {
    if ( v1 != &off_100B0AD8 )
    {
      v2 = (_DWORD *)*((_DWORD *)lpMem + 31);
      if ( v2 )
      {
        if ( !*v2 )
        {
          v3 = (_DWORD *)*((_DWORD *)lpMem + 33);
          if ( v3 && !*v3 )
          {
            sub_1003603E(*((LPVOID *)lpMem + 33));
            sub_10034509(*((_DWORD *)lpMem + 34));
          }
          v4 = (_DWORD *)*((_DWORD *)lpMem + 32);
          if ( v4 && !*v4 )
          {
            sub_1003603E(*((LPVOID *)lpMem + 32));
            sub_100339A6(*((_DWORD *)lpMem + 34));
          }
          sub_1003603E(*((LPVOID *)lpMem + 31));
          sub_1003603E(*((LPVOID *)lpMem + 34));
        }
      }
    }
  }
  v5 = (_DWORD *)*((_DWORD *)lpMem + 35);
  if ( v5 && !*v5 )
  {
    sub_1003603E((LPVOID)(*((_DWORD *)lpMem + 36) - 254));
    sub_1003603E((LPVOID)(*((_DWORD *)lpMem + 37) - 128));
    sub_1003603E((LPVOID)(*((_DWORD *)lpMem + 38) - 128));
    sub_1003603E(*((LPVOID *)lpMem + 35));
  }
  sub_1003572E(*((LPVOID *)lpMem + 39));
  v6 = 6;
  v7 = (LPVOID *)((char *)lpMem + 160);
  v11 = 6;
  v8 = (LPVOID *)((char *)lpMem + 40);
  do
  {
    if ( *(v8 - 2) != &unk_100B0458 )
    {
      if ( *v8 && !*(_DWORD *)*v8 )
      {
        sub_1003603E(*v8);
        sub_1003603E(*v7);
      }
      v6 = v11;
    }
    if ( *(v8 - 3) )
    {
      v9 = *(v8 - 1);
      if ( v9 && !*v9 )
        sub_1003603E(*(v8 - 1));
      v6 = v11;
    }
    ++v7;
    v8 += 4;
    v11 = --v6;
  }
  while ( v6 );
  return sub_1003603E(lpMem);
}
// 100339A6: using guessed type _DWORD __cdecl sub_100339A6(_DWORD);
// 10034509: using guessed type _DWORD __cdecl sub_10034509(_DWORD);
// 100B0AD8: using guessed type void *off_100B0AD8;

//----- (100843BC) --------------------------------------------------------
signed __int32 __cdecl sub_100843BC(int a1)
{
  signed __int32 result; // eax

  if ( a1 && (void **)a1 != &off_100A5DD8 )
    result = _InterlockedIncrement((volatile signed __int32 *)(a1 + 176));
  else
    result = 0x7FFFFFFF;
  return result;
}
// 100A5DD8: using guessed type void *off_100A5DD8;

//----- (100843EF) --------------------------------------------------------
int __cdecl sub_100843EF(LPVOID lpMem)
{
  int result; // eax

  if ( lpMem && lpMem != &off_100A5DD8 )
  {
    result = *((_DWORD *)lpMem + 44);
    if ( !result )
    {
      sub_10036381(lpMem);
      result = sub_1003603E(lpMem);
    }
  }
  return result;
}
// 10036381: using guessed type _DWORD __cdecl sub_10036381(_DWORD);
// 100A5DD8: using guessed type void *off_100A5DD8;

//----- (1008442C) --------------------------------------------------------
signed __int32 __cdecl sub_1008442C(int a1)
{
  signed __int32 result; // eax

  if ( a1 && (void **)a1 != &off_100A5DD8 )
    result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 176));
  else
    result = 0x7FFFFFFF;
  return result;
}
// 100A5DD8: using guessed type void *off_100A5DD8;

//----- (1008445F) --------------------------------------------------------
int __cdecl sub_1008445F(int a1)
{
  int result; // eax
  volatile signed __int32 *v2; // ecx
  volatile signed __int32 *v3; // ecx
  volatile signed __int32 *v4; // ecx
  volatile signed __int32 *v5; // ecx
  volatile signed __int32 **v6; // ecx
  signed int v7; // esi
  volatile signed __int32 *v8; // edx

  result = a1;
  if ( a1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 12));
    v2 = *(volatile signed __int32 **)(a1 + 124);
    if ( v2 )
      _InterlockedDecrement(v2);
    v3 = *(volatile signed __int32 **)(a1 + 132);
    if ( v3 )
      _InterlockedDecrement(v3);
    v4 = *(volatile signed __int32 **)(a1 + 128);
    if ( v4 )
      _InterlockedDecrement(v4);
    v5 = *(volatile signed __int32 **)(a1 + 140);
    if ( v5 )
      _InterlockedDecrement(v5);
    v6 = (volatile signed __int32 **)(a1 + 40);
    v7 = 6;
    do
    {
      if ( *(v6 - 2) != (volatile signed __int32 *)&unk_100B0458 && *v6 )
        _InterlockedDecrement(*v6);
      if ( *(v6 - 3) )
      {
        v8 = *(v6 - 1);
        if ( v8 )
          _InterlockedDecrement(v8);
      }
      v6 += 4;
      --v7;
    }
    while ( v7 );
    result = sub_1003320D(*(_DWORD *)(a1 + 156));
  }
  return result;
}
// 1003320D: using guessed type _DWORD __cdecl sub_1003320D(_DWORD);

//----- (10084500) --------------------------------------------------------
int sub_10084500()
{
  int v0; // eax
  int *v1; // edi
  int v2; // esi
  int v3; // edx
  int v5; // [esp-8h] [ebp-34h]

  v0 = sub_10034E4B();
  v1 = (int *)(v0 + 76);
  if ( !(dword_100B0AD0 & *(_DWORD *)(v0 + 848)) || (v2 = *v1) == 0 )
  {
    sub_100360E8(4);
    v2 = sub_10034153(v1, dword_100B1CD8[0]);
    sub_10033799(4);
    if ( !v2 )
      sub_100354D1(v5, v3);
  }
  return v2;
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 10034153: using guessed type _DWORD __cdecl sub_10034153(_DWORD, _DWORD);
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);
// 100B0AD0: using guessed type int dword_100B0AD0;
// 100B1CD8: using guessed type int dword_100B1CD8[];

//----- (100845A1) --------------------------------------------------------
wchar_t **__cdecl sub_100845A1(wchar_t ***a1, wchar_t **a2)
{
  wchar_t **v2; // edi

  if ( !a2 || !a1 )
    return 0;
  v2 = *a1;
  if ( *a1 != a2 )
  {
    *a1 = a2;
    sub_1003421B(a2);
    if ( v2 )
    {
      sub_1003575B(v2);
      if ( !v2[3] && v2 != &off_100B0370 )
        sub_1003636D(v2);
    }
  }
  return a2;
}
// 1003421B: using guessed type _DWORD __cdecl sub_1003421B(_DWORD);
// 1003575B: using guessed type _DWORD __cdecl sub_1003575B(_DWORD);
// 100B0370: using guessed type wchar_t *off_100B0370;

//----- (10084605) --------------------------------------------------------
bool __cdecl sub_10084605(_BYTE *a1, int a2)
{
  _BYTE *i; // eax

  if ( !a2 )
    return 1;
  for ( i = a1; *i == 48; ++i )
    ;
  return *i != 0;
}

//----- (10084630) --------------------------------------------------------
bool __cdecl sub_10084630(int a1, _BYTE *a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // edx

  if ( !a5 )
    return *a2 >= 53;
  v6 = sub_1003528D();
  if ( v6 )
  {
    if ( v6 == 512 )
    {
      if ( sub_10084605(a2, a4) && a3 != 45 )
        return 1;
    }
    else if ( v6 == 256 && sub_10084605(a2, a4) && a3 == 45 )
    {
      return 1;
    }
  }
  else
  {
    if ( *a2 > 53 )
      return 1;
    if ( *a2 >= 53 )
    {
      if ( !sub_10084605(a2 + 1, a4) )
      {
        if ( v7 != a1 )
          return *(_BYTE *)(v7 - 1) & 1;
        return 0;
      }
      return 1;
    }
  }
  return 0;
}
// 1003528D: using guessed type int sub_1003528D(void);

//----- (100846E1) --------------------------------------------------------
signed int __cdecl sub_100846E1(_BYTE *a1, unsigned int a2, int a3, int *a4, int a5, int a6, int a7)
{
  int v8; // edx
  int v9; // eax
  int *v10; // ebx
  signed int v11; // esi
  char *v12; // eax
  char *v13; // esi
  char v14; // bl
  signed int v15; // [esp-8h] [ebp-14h]
  int v16; // [esp+8h] [ebp-4h]

  if ( !a1 )
  {
    *(_BYTE *)(a7 + 28) = 1;
    *(_DWORD *)(a7 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a7);
    return 22;
  }
  if ( a2 <= 0 )
    goto LABEL_29;
  v8 = a3;
  v9 = a3;
  *a1 = 0;
  if ( a3 <= 0 )
    v9 = 0;
  if ( a2 <= v9 + 1 )
  {
    v15 = 34;
LABEL_10:
    v11 = v15;
    *(_DWORD *)(a7 + 24) = v15;
    *(_BYTE *)(a7 + 28) = 1;
    sub_10034B08(0, 0, 0, 0, 0, a7);
    return v11;
  }
  v10 = a4;
  if ( !a4 )
  {
LABEL_29:
    v15 = 22;
    goto LABEL_10;
  }
  v12 = (char *)a4[2];
  v13 = a1 + 1;
  v16 = a4[2];
  *a1 = 48;
  if ( a3 > 0 )
  {
    do
    {
      v14 = *v12;
      if ( *v12 )
        ++v12;
      else
        v14 = 48;
      *v13++ = v14;
      --v8;
    }
    while ( v8 > 0 );
    v10 = a4;
  }
  *v13 = 0;
  if ( v8 >= 0 && sub_10084630(v16, v12, *v10, a5, a6) )
  {
    while ( *--v13 == 57 )
      *v13 = 48;
    ++*v13;
  }
  if ( *a1 == 49 )
    ++v10[1];
  else
    sub_10035AB7(a1, a1 + 1, strlen(a1 + 1) + 1);
  return 0;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035AB7: using guessed type _DWORD __cdecl sub_10035AB7(_DWORD, _DWORD, _DWORD);

//----- (10086220) --------------------------------------------------------
int __cdecl sub_10086220(int *a1, _DWORD *a2)
{
  int *v2; // ecx
  int v3; // eax
  unsigned int v4; // esi
  int v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // ebx
  int v8; // esi
  int result; // eax
  unsigned int v10; // edi
  int v11; // edi
  int *v12; // eax
  int v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // edx
  bool v16; // zf
  _DWORD *v17; // esi
  unsigned int v18; // eax
  bool v19; // cf
  int v20; // edx
  int *v21; // ecx
  _DWORD *v22; // esi
  unsigned int v23; // ebx
  int v24; // eax
  int v25; // ecx
  int v26; // ebx
  int v27; // ebx
  unsigned int v28; // eax
  unsigned int *v29; // ecx
  int v30; // edx
  int v31; // eax
  unsigned int v32; // ebx
  int v33; // ebx
  __int64 v34; // rax
  signed int v35; // ebx
  unsigned __int64 v36; // rdi
  int v37; // eax
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned int v40; // kr10_4
  unsigned int v41; // ecx
  unsigned __int64 v42; // rdi
  _DWORD *v43; // eax
  int *v44; // ebx
  int *v45; // eax
  unsigned int v46; // ecx
  int *v47; // edx
  unsigned __int64 v48; // rcx
  int v49; // esi
  unsigned int v50; // edi
  unsigned int v51; // eax
  signed int v52; // edi
  int v53; // ecx
  unsigned int v54; // eax
  int *v55; // edx
  char v56; // [esp+10h] [ebp-21Ch]
  int v57; // [esp+1DCh] [ebp-50h]
  int v58; // [esp+1E0h] [ebp-4Ch]
  unsigned int v59; // [esp+1E4h] [ebp-48h]
  __int64 v60; // [esp+1E8h] [ebp-44h]
  int *v61; // [esp+1F0h] [ebp-3Ch]
  unsigned int v62; // [esp+1F4h] [ebp-38h]
  int v63; // [esp+1F8h] [ebp-34h]
  unsigned int v64; // [esp+1FCh] [ebp-30h]
  int v65; // [esp+200h] [ebp-2Ch]
  unsigned int v66; // [esp+208h] [ebp-24h]
  unsigned int v67; // [esp+20Ch] [ebp-20h]
  int v68; // [esp+210h] [ebp-1Ch]
  int *v69; // [esp+214h] [ebp-18h]
  unsigned int v70; // [esp+218h] [ebp-14h]
  unsigned int v71; // [esp+21Ch] [ebp-10h]
  unsigned int v72; // [esp+220h] [ebp-Ch]
  _DWORD *v73; // [esp+224h] [ebp-8h]
  unsigned int v74; // [esp+228h] [ebp-4h]

  v2 = a1;
  v3 = *a1;
  v73 = (_DWORD *)v3;
  if ( !v3 )
    return 0;
  v4 = *a2;
  v70 = v4;
  if ( !v4 )
    return 0;
  v5 = v3 - 1;
  v72 = v5;
  v6 = v4 - 1;
  if ( !v6 )
  {
    v7 = a2[1];
    if ( v7 == 1 )
    {
      v8 = a1[1];
      *a1 = 0;
      sub_1008923C((int)(a1 + 1), 0x1CCu, (int)&v56, 0);
      result = v8;
    }
    else if ( v5 )
    {
      v11 = 0;
      v72 = 0;
      v74 = 0;
      v70 = 0;
      if ( v5 != -1 )
      {
        v12 = &a1[v5 + 1];
        v69 = v12;
        do
        {
          v13 = *v12;
          v14 = sub_100350DA(*v12, v11, v7, 0);
          v74 = v72;
          v72 = v14;
          v11 = sub_10034FAE(v13, v11, v7, 0);
          v70 = v15;
          v12 = v69 - 1;
          v16 = v73 == (_DWORD *)1;
          v73 = (_DWORD *)((char *)v73 - 1);
          --v69;
        }
        while ( !v16 );
        v2 = a1;
      }
      v17 = v2 + 1;
      *v2 = 0;
      sub_1008923C((int)(v2 + 1), 0x1CCu, (int)&v56, 0);
      v18 = v70;
      v19 = v70 > 0;
      *v17 = v11;
      a1[2] = v18;
      result = v72;
      *a1 = v19 + 1;
    }
    else
    {
      v10 = a1[1];
      *a1 = 0;
      sub_1008923C((int)(a1 + 1), 0x1CCu, (int)&v56, 0);
      a1[1] = v10 % v7;
      *a1 = v10 % v7 > 0;
      result = v10 / v7;
    }
    return result;
  }
  if ( v6 > v5 )
    return 0;
  v20 = v5 - v6;
  if ( v5 < (signed int)(v5 - v6) )
    goto LABEL_20;
  v21 = &a1[v5 + 1];
  v22 = &a2[v6 + 1];
  while ( *v22 == *v21 )
  {
    --v5;
    --v22;
    --v21;
    if ( v5 < v20 )
      goto LABEL_20;
  }
  if ( *v22 < (unsigned int)*v21 )
LABEL_20:
    ++v20;
  if ( !v20 )
    return 0;
  v23 = a2[v70];
  v67 = a2[v70 - 1];
  v16 = !_BitScanReverse((unsigned int *)&v24, v23);
  v64 = v23;
  if ( v16 )
    v25 = 32;
  else
    v25 = 31 - v24;
  v68 = v25;
  v65 = 32 - v25;
  if ( v25 )
  {
    v64 = (v67 >> v65) | (v23 << v68);
    v26 = v67 << v68;
    v67 <<= v68;
    if ( v70 > 2 )
      v67 = (a2[v70 - 2] >> v65) | v26;
  }
  v27 = v20 - 1;
  v58 = 0;
  v57 = v20 - 1;
  if ( v20 - 1 < 0 )
  {
    v52 = 0;
  }
  else
  {
    v28 = v27 + v70;
    v62 = v27 + v70;
    v61 = &a1[v27 + 1];
    v29 = (unsigned int *)&a1[v27 + v70 - 1];
    v69 = &a1[v27 + v70 - 1];
    do
    {
      if ( v28 > v72 )
        v30 = 0;
      else
        v30 = v29[2];
      v31 = v29[1];
      v32 = *v29;
      v59 = v30;
      v74 = v31;
      v66 = v30;
      v73 = (_DWORD *)v32;
      if ( v68 )
      {
        v31 = (v32 >> v65) | sub_10034CAC(v68, v30);
        v33 = v32 << v68;
        v74 = v31;
        v66 = v30;
        v73 = (_DWORD *)v33;
        if ( v62 >= 3 )
        {
          v31 = v74;
          v73 = (_DWORD *)(((unsigned int)*(v69 - 1) >> v65) | v33);
        }
      }
      LODWORD(v34) = sub_100350DA(v31, v30, v64, 0);
      v71 = HIDWORD(v34);
      v35 = v34;
      v63 = v34;
      v60 = v34;
      v36 = (unsigned int)sub_10034FAE(v74, v66, v64, 0);
      v37 = v71;
      v74 = 0;
      if ( __PAIR__(v71, v35) > 0xFFFFFFFF )
      {
        LODWORD(v38) = sub_10033D0C(v35 + 1, (__PAIR__(v71, v35) - 0xFFFFFFFF) >> 32, v64, 0);
        v36 += v38;
        v35 = -1;
        v37 = 0;
        v74 = HIDWORD(v36);
        v63 = -1;
        v60 = 0xFFFFFFFFi64;
        v71 = 0;
      }
      if ( v36 <= 0xFFFFFFFF )
      {
        while ( 1 )
        {
          v66 = (unsigned int)v73;
          LODWORD(v39) = sub_10033D0C(v67, 0, v35, v37);
          if ( v39 <= __PAIR__(v36, (unsigned int)v73) )
            break;
          v19 = v35-- != 0;
          LODWORD(v60) = v35;
          v37 = v19 + v71 - 1;
          v71 = v37;
          v16 = __CFADD__(v64, (_DWORD)v36) + v74 == 0;
          v40 = v64 + v36;
          v74 = (__PAIR__(v74, v64) + (unsigned int)v36) >> 32;
          LODWORD(v36) = v64 + v36;
          HIDWORD(v60) = v37;
          if ( !v16 || v40 > 0xFFFFFFFF )
            goto LABEL_44;
        }
        v37 = v71;
LABEL_44:
        v63 = v35;
      }
      if ( v37 || v35 )
      {
        v41 = v70;
        v42 = 0i64;
        v43 = a2;
        if ( v70 )
        {
          v44 = v61;
          v45 = a2 + 1;
          v73 = a2 + 1;
          v74 = v70;
          do
          {
            v66 = *v45;
            v46 = v60 * v66 + v42;
            LODWORD(v42) = (v60 * v66 + v42) >> 32;
            HIDWORD(v42) = 0;
            if ( *v44 < v46 )
              ++v42;
            *v44 -= v46;
            ++v44;
            v45 = v73 + 1;
            v16 = v74-- == 1;
            ++v73;
          }
          while ( !v16 );
          v43 = a2;
          v35 = v63;
          v41 = v70;
        }
        v66 = (unsigned int)(v43 + 1);
        if ( v59 < v42 )
        {
          if ( v41 )
          {
            v47 = v61;
            HIDWORD(v48) = 0;
            v49 = v66;
            v50 = v41;
            do
            {
              LODWORD(v48) = *v47;
              v49 += 4;
              ++v47;
              v51 = (*(unsigned int *)(v49 - 4) + (unsigned __int64)(unsigned int)v48) >> 32;
              LODWORD(v48) = *(_DWORD *)(v49 - 4) + v48;
              *(v47 - 1) = HIDWORD(v48) + v48;
              v48 = __PAIR__(v51, HIDWORD(v48)) + (unsigned int)v48;
              --v50;
            }
            while ( v50 );
            v35 = v63;
          }
          --v35;
        }
        v72 = v62 - 1;
      }
      v52 = v35;
      --v61;
      v28 = v62 - 1;
      v58 = v35;
      v29 = (unsigned int *)(v69 - 1);
      --v57;
      --v62;
      --v69;
    }
    while ( v57 >= 0 );
  }
  v53 = v72 + 1;
  v54 = v72 + 1;
  if ( v72 + 1 < *a1 )
  {
    v55 = &a1[v54 + 1];
    do
    {
      *v55 = 0;
      ++v55;
      ++v54;
    }
    while ( v54 < *a1 );
  }
  *a1 = v53;
  if ( v53 )
  {
    do
    {
      if ( a1[v53] )
        break;
      v16 = v53-- == 1;
      *a1 = v53;
    }
    while ( !v16 );
  }
  return v52;
}
// 10033D0C: using guessed type _DWORD __stdcall sub_10033D0C(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034CAC: using guessed type int __fastcall sub_10034CAC(_DWORD, _DWORD);
// 10034FAE: using guessed type _DWORD __stdcall sub_10034FAE(_DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);
