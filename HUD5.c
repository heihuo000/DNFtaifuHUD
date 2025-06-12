
//----- (10068327) --------------------------------------------------------
char __thiscall sub_10068327(int this)
{
  int v1; // esi
  int v2; // ebx
  signed int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // al
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // eax
  signed int v21; // ecx
  char v22; // dl
  int v23; // eax
  char v24; // ah
  char v25; // al
  char v26; // al
  int v27; // edx
  int v28; // ebx
  int v29; // ecx
  int v30; // edi
  int v31; // ebx
  int *v32; // edi
  int *v33; // edx
  int v34; // ebx
  int v35; // eax
  WCHAR *v36; // ecx
  int v37; // ST10_4
  WCHAR v38; // ax
  int v39; // ecx
  _DWORD *v40; // edx
  int v41; // ecx
  int v42; // [esp+Ch] [ebp-20h]
  int v43; // [esp+10h] [ebp-1Ch]
  int v44; // [esp+14h] [ebp-18h]
  int v45; // [esp+18h] [ebp-14h]
  int v46; // [esp+1Ch] [ebp-10h]
  CHAR MultiByteStr; // [esp+20h] [ebp-Ch]

  v1 = this;
  v2 = 0;
  v3 = *(char *)(this + 45);
  if ( v3 > 100 )
  {
    if ( v3 > 111 )
    {
      v16 = v3 - 112;
      if ( !v16 )
      {
        v8 = sub_10034EC8();
        goto LABEL_37;
      }
      v17 = v16 - 3;
      if ( !v17 )
      {
LABEL_35:
        v8 = sub_10034667();
        goto LABEL_37;
      }
      v18 = v17 - 2;
      if ( v18 )
      {
        if ( v18 != 3 )
          return 0;
        v8 = sub_10035DF5(0);
        goto LABEL_37;
      }
LABEL_28:
      v8 = sub_10034649(0);
      goto LABEL_37;
    }
    if ( v3 == 111 )
    {
      v8 = sub_10033370();
      goto LABEL_37;
    }
    v12 = v3 - 101;
    if ( !v12 )
      goto LABEL_10;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_10;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_10;
    v15 = v14 - 2;
    if ( v15 )
    {
      if ( v15 == 5 )
      {
        v8 = sub_100340F4();
        goto LABEL_37;
      }
      return 0;
    }
LABEL_27:
    *(_DWORD *)(this + 28) |= 0x10u;
    goto LABEL_28;
  }
  if ( v3 == 100 )
    goto LABEL_27;
  if ( v3 <= 83 )
  {
    if ( v3 != 83 )
    {
      v4 = v3 - 65;
      if ( v4 )
      {
        v5 = v4 - 2;
        if ( v5 )
        {
          v6 = v5 - 2;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              if ( v7 != 1 )
                return 0;
            }
          }
          goto LABEL_10;
        }
        goto LABEL_15;
      }
LABEL_10:
      v8 = sub_10034964();
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  v9 = v3 - 88;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( !v10 )
    {
      v8 = sub_100354E5();
      goto LABEL_37;
    }
    v11 = v10 - 7;
    if ( !v11 )
      goto LABEL_10;
    if ( v11 == 2 )
    {
LABEL_15:
      v8 = sub_10034CDE(0);
      goto LABEL_37;
    }
    return 0;
  }
  v8 = sub_10035DF5(1);
LABEL_37:
  if ( !v8 )
    return 0;
  if ( !*(_BYTE *)(v1 + 44) )
  {
    v20 = *(_DWORD *)(v1 + 28) >> 4;
    LOWORD(v46) = 0;
    v21 = 0;
    BYTE2(v46) = 0;
    v45 = 0;
    if ( v20 & 1 )
    {
      if ( (*(_DWORD *)(v1 + 28) >> 6) & 1 )
      {
        LOBYTE(v46) = 45;
      }
      else
      {
        if ( !(*(_BYTE *)(v1 + 28) & 1) )
        {
          if ( (*(_DWORD *)(v1 + 28) >> 1) & 1 )
          {
            LOBYTE(v46) = 32;
            v21 = 1;
            v45 = 1;
          }
          goto LABEL_48;
        }
        LOBYTE(v46) = 43;
      }
      v21 = 1;
      v45 = 1;
    }
LABEL_48:
    v22 = *(_BYTE *)(v1 + 45);
    if ( v22 != 120 && v22 != 88 || (v23 = *(_DWORD *)(v1 + 28) >> 5, v24 = 1, !(v23 & 1)) )
      v24 = 0;
    if ( v22 == 97 || (v25 = 0, v22 == 65) )
      v25 = 1;
    if ( v24 || v25 )
    {
      *((_BYTE *)&v46 + v21) = 48;
      if ( v22 == 88 || v22 == 65 )
        v26 = 88;
      else
        v26 = 120;
      *((_BYTE *)&v46 + v21 + 1) = v26;
      v21 += 2;
      v45 = v21;
    }
    v27 = *(_DWORD *)(v1 + 32) - v21 - *(_DWORD *)(v1 + 52);
    v43 = *(_DWORD *)(v1 + 32) - v21 - *(_DWORD *)(v1 + 52);
    if ( !(*(_BYTE *)(v1 + 28) & 0xC) && v27 > 0 )
    {
      v28 = *(_DWORD *)(v1 + 20);
      v29 = 0;
      do
      {
        v30 = *(_DWORD *)(v1 + 1096);
        if ( *(_DWORD *)(v30 + 8) == *(_DWORD *)(v30 + 4) )
        {
          if ( *(_BYTE *)(v30 + 12) )
            v31 = v28 + 1;
          else
            v31 = -1;
          *(_DWORD *)(v1 + 20) = v31;
        }
        else
        {
          *(_DWORD *)(v1 + 20) = v28 + 1;
          ++*(_DWORD *)(v30 + 8);
          *(_BYTE *)(**(_DWORD **)(v1 + 1096))++ = 32;
        }
        v28 = *(_DWORD *)(v1 + 20);
        if ( v28 == -1 )
          break;
        ++v29;
      }
      while ( v29 < v27 );
      v21 = v45;
      v2 = 0;
    }
    v32 = (int *)(v1 + 20);
    v44 = v1 + 1096;
    sub_100361D8(&v46, v21, v1 + 20, *(_DWORD *)(v1 + 8));
    v33 = (int *)(v1 + 1096);
    if ( (*(_DWORD *)(v1 + 28) >> 3) & 1 )
    {
      if ( !((*(_DWORD *)(v1 + 28) >> 2) & 1) )
      {
        v46 = 0;
        if ( v43 > 0 )
        {
          do
          {
            v45 = *v33;
            v34 = v45;
            if ( *(_DWORD *)(v45 + 8) == *(_DWORD *)(v45 + 4) )
            {
              if ( *(_BYTE *)(v45 + 12) )
                v35 = *v32 + 1;
              else
                v35 = -1;
              *v32 = v35;
            }
            else
            {
              ++*v32;
              ++*(_DWORD *)(v34 + 8);
              *(_BYTE *)(*(_DWORD *)*v33)++ = 48;
            }
            if ( *v32 == -1 )
              break;
            ++v46;
          }
          while ( v46 < v43 );
          v2 = 0;
        }
      }
    }
    if ( *(_BYTE *)(v1 + 56) && *(_DWORD *)(v1 + 52) > 0 )
    {
      v36 = *(WCHAR **)(v1 + 48);
      v46 = 0;
      while ( 1 )
      {
        v37 = *(_DWORD *)(v1 + 8);
        v38 = *v36;
        v45 = 0;
        v42 = (int)(v36 + 1);
        if ( sub_10034E28((int)&v45, &MultiByteStr, 6, v38, v37) || !v45 )
          break;
        sub_100361D8(&MultiByteStr, v45, v1 + 20, *(_DWORD *)(v1 + 8));
        v36 = (WCHAR *)v42;
        if ( ++v46 == *(_DWORD *)(v1 + 52) )
          goto LABEL_95;
      }
      *v32 = -1;
    }
    else
    {
      sub_100361D8(*(_DWORD *)(v1 + 48), *(_DWORD *)(v1 + 52), v1 + 20, *(_DWORD *)(v1 + 8));
    }
LABEL_95:
    v39 = *v32;
    if ( *v32 >= 0 && (*(_DWORD *)(v1 + 28) >> 2) & 1 && v43 > 0 )
    {
      do
      {
        v40 = *(_DWORD **)v44;
        if ( *(_DWORD *)(*(_DWORD *)v44 + 8) == *(_DWORD *)(*(_DWORD *)v44 + 4) )
        {
          if ( *((_BYTE *)v40 + 12) )
            v41 = v39 + 1;
          else
            v41 = -1;
          *v32 = v41;
        }
        else
        {
          *v32 = v39 + 1;
          ++v40[2];
          *(_BYTE *)(**(_DWORD **)v44)++ = 32;
        }
        v39 = *v32;
        if ( *v32 == -1 )
          break;
        ++v2;
      }
      while ( v2 < v43 );
    }
  }
  return 1;
}
// 10033370: using guessed type int sub_10033370(void);
// 100340F4: using guessed type int sub_100340F4(void);
// 10034649: using guessed type _DWORD __stdcall sub_10034649(_DWORD);
// 10034667: using guessed type int sub_10034667(void);
// 10034964: using guessed type int sub_10034964(void);
// 10034CDE: using guessed type _DWORD __stdcall sub_10034CDE(_DWORD);
// 10034EC8: using guessed type int sub_10034EC8(void);
// 100354E5: using guessed type int sub_100354E5(void);
// 10035DF5: using guessed type _DWORD __stdcall sub_10035DF5(_DWORD);
// 100361D8: using guessed type _DWORD __stdcall sub_100361D8(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1006875D) --------------------------------------------------------
char __thiscall sub_1006875D(int this)
{
  int v1; // esi
  int v2; // ebx
  signed int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // al
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // eax
  signed int v21; // ecx
  char v22; // dl
  int v23; // eax
  char v24; // ah
  char v25; // al
  char v26; // al
  int v27; // edx
  int v28; // ebx
  int v29; // ecx
  int v30; // edi
  int v31; // ebx
  int *v32; // edi
  int *v33; // edx
  int v34; // ebx
  int v35; // eax
  WCHAR *v36; // ecx
  int v37; // ST10_4
  WCHAR v38; // ax
  int v39; // ecx
  _DWORD *v40; // edx
  int v41; // ecx
  int v42; // [esp+Ch] [ebp-20h]
  int v43; // [esp+10h] [ebp-1Ch]
  int v44; // [esp+14h] [ebp-18h]
  int v45; // [esp+18h] [ebp-14h]
  int v46; // [esp+1Ch] [ebp-10h]
  CHAR MultiByteStr; // [esp+20h] [ebp-Ch]

  v1 = this;
  v2 = 0;
  v3 = *(char *)(this + 45);
  if ( v3 > 100 )
  {
    if ( v3 > 111 )
    {
      v16 = v3 - 112;
      if ( !v16 )
      {
        v8 = sub_10033BE5();
        goto LABEL_37;
      }
      v17 = v16 - 3;
      if ( !v17 )
      {
LABEL_35:
        v8 = sub_10033258();
        goto LABEL_37;
      }
      v18 = v17 - 2;
      if ( v18 )
      {
        if ( v18 != 3 )
          return 0;
        v8 = sub_10033050(0);
        goto LABEL_37;
      }
LABEL_28:
      v8 = sub_10035C47(0);
      goto LABEL_37;
    }
    if ( v3 == 111 )
    {
      v8 = sub_10035BC0();
      goto LABEL_37;
    }
    v12 = v3 - 101;
    if ( !v12 )
      goto LABEL_10;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_10;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_10;
    v15 = v14 - 2;
    if ( v15 )
    {
      if ( v15 == 5 )
      {
        v8 = sub_10034A4A();
        goto LABEL_37;
      }
      return 0;
    }
LABEL_27:
    *(_DWORD *)(this + 28) |= 0x10u;
    goto LABEL_28;
  }
  if ( v3 == 100 )
    goto LABEL_27;
  if ( v3 <= 83 )
  {
    if ( v3 != 83 )
    {
      v4 = v3 - 65;
      if ( v4 )
      {
        v5 = v4 - 2;
        if ( v5 )
        {
          v6 = v5 - 2;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              if ( v7 != 1 )
                return 0;
            }
          }
          goto LABEL_10;
        }
        goto LABEL_15;
      }
LABEL_10:
      v8 = sub_10035AE9();
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  v9 = v3 - 88;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( !v10 )
    {
      v8 = sub_100361D3();
      goto LABEL_37;
    }
    v11 = v10 - 7;
    if ( !v11 )
      goto LABEL_10;
    if ( v11 == 2 )
    {
LABEL_15:
      v8 = sub_100344EB(0);
      goto LABEL_37;
    }
    return 0;
  }
  v8 = sub_10033050(1);
LABEL_37:
  if ( !v8 )
    return 0;
  if ( !(unsigned __int8)sub_10033A05(v1) && !*(_BYTE *)(v1 + 44) )
  {
    v20 = *(_DWORD *)(v1 + 28) >> 4;
    LOWORD(v46) = 0;
    v21 = 0;
    BYTE2(v46) = 0;
    v45 = 0;
    if ( v20 & 1 )
    {
      if ( (*(_DWORD *)(v1 + 28) >> 6) & 1 )
      {
        LOBYTE(v46) = 45;
      }
      else
      {
        if ( !(*(_BYTE *)(v1 + 28) & 1) )
        {
          if ( (*(_DWORD *)(v1 + 28) >> 1) & 1 )
          {
            LOBYTE(v46) = 32;
            v21 = 1;
            v45 = 1;
          }
          goto LABEL_49;
        }
        LOBYTE(v46) = 43;
      }
      v21 = 1;
      v45 = 1;
    }
LABEL_49:
    v22 = *(_BYTE *)(v1 + 45);
    if ( v22 != 120 && v22 != 88 || (v23 = *(_DWORD *)(v1 + 28) >> 5, v24 = 1, !(v23 & 1)) )
      v24 = 0;
    if ( v22 == 97 || (v25 = 0, v22 == 65) )
      v25 = 1;
    if ( v24 || v25 )
    {
      *((_BYTE *)&v46 + v21) = 48;
      if ( v22 == 88 || v22 == 65 )
        v26 = 88;
      else
        v26 = 120;
      *((_BYTE *)&v46 + v21 + 1) = v26;
      v21 += 2;
      v45 = v21;
    }
    v27 = *(_DWORD *)(v1 + 32) - v21 - *(_DWORD *)(v1 + 52);
    v43 = *(_DWORD *)(v1 + 32) - v21 - *(_DWORD *)(v1 + 52);
    if ( !(*(_BYTE *)(v1 + 28) & 0xC) && v27 > 0 )
    {
      v28 = *(_DWORD *)(v1 + 20);
      v29 = 0;
      do
      {
        v30 = *(_DWORD *)(v1 + 1096);
        if ( *(_DWORD *)(v30 + 8) == *(_DWORD *)(v30 + 4) )
        {
          if ( *(_BYTE *)(v30 + 12) )
            v31 = v28 + 1;
          else
            v31 = -1;
          *(_DWORD *)(v1 + 20) = v31;
        }
        else
        {
          *(_DWORD *)(v1 + 20) = v28 + 1;
          ++*(_DWORD *)(v30 + 8);
          *(_BYTE *)(**(_DWORD **)(v1 + 1096))++ = 32;
        }
        v28 = *(_DWORD *)(v1 + 20);
        if ( v28 == -1 )
          break;
        ++v29;
      }
      while ( v29 < v27 );
      v21 = v45;
      v2 = 0;
    }
    v32 = (int *)(v1 + 20);
    v44 = v1 + 1096;
    sub_100361D8(&v46, v21, v1 + 20, *(_DWORD *)(v1 + 8));
    v33 = (int *)(v1 + 1096);
    if ( (*(_DWORD *)(v1 + 28) >> 3) & 1 )
    {
      if ( !((*(_DWORD *)(v1 + 28) >> 2) & 1) )
      {
        v46 = 0;
        if ( v43 > 0 )
        {
          do
          {
            v45 = *v33;
            v34 = v45;
            if ( *(_DWORD *)(v45 + 8) == *(_DWORD *)(v45 + 4) )
            {
              if ( *(_BYTE *)(v45 + 12) )
                v35 = *v32 + 1;
              else
                v35 = -1;
              *v32 = v35;
            }
            else
            {
              ++*v32;
              ++*(_DWORD *)(v34 + 8);
              *(_BYTE *)(*(_DWORD *)*v33)++ = 48;
            }
            if ( *v32 == -1 )
              break;
            ++v46;
          }
          while ( v46 < v43 );
          v2 = 0;
        }
      }
    }
    if ( *(_BYTE *)(v1 + 56) && *(_DWORD *)(v1 + 52) > 0 )
    {
      v36 = *(WCHAR **)(v1 + 48);
      v46 = 0;
      while ( 1 )
      {
        v37 = *(_DWORD *)(v1 + 8);
        v38 = *v36;
        v45 = 0;
        v42 = (int)(v36 + 1);
        if ( sub_10034E28((int)&v45, &MultiByteStr, 6, v38, v37) || !v45 )
          break;
        sub_100361D8(&MultiByteStr, v45, v1 + 20, *(_DWORD *)(v1 + 8));
        v36 = (WCHAR *)v42;
        if ( ++v46 == *(_DWORD *)(v1 + 52) )
          goto LABEL_96;
      }
      *v32 = -1;
    }
    else
    {
      sub_100361D8(*(_DWORD *)(v1 + 48), *(_DWORD *)(v1 + 52), v1 + 20, *(_DWORD *)(v1 + 8));
    }
LABEL_96:
    v39 = *v32;
    if ( *v32 >= 0 && (*(_DWORD *)(v1 + 28) >> 2) & 1 && v43 > 0 )
    {
      do
      {
        v40 = *(_DWORD **)v44;
        if ( *(_DWORD *)(*(_DWORD *)v44 + 8) == *(_DWORD *)(*(_DWORD *)v44 + 4) )
        {
          if ( *((_BYTE *)v40 + 12) )
            v41 = v39 + 1;
          else
            v41 = -1;
          *v32 = v41;
        }
        else
        {
          *v32 = v39 + 1;
          ++v40[2];
          *(_BYTE *)(**(_DWORD **)v44)++ = 32;
        }
        v39 = *v32;
        if ( *v32 == -1 )
          break;
        ++v2;
      }
      while ( v2 < v43 );
    }
  }
  return 1;
}
// 10033050: using guessed type _DWORD __stdcall sub_10033050(_DWORD);
// 10033258: using guessed type int sub_10033258(void);
// 10033A05: using guessed type int __thiscall sub_10033A05(_DWORD);
// 10033BE5: using guessed type int sub_10033BE5(void);
// 100344EB: using guessed type _DWORD __stdcall sub_100344EB(_DWORD);
// 10034A4A: using guessed type int sub_10034A4A(void);
// 10035AE9: using guessed type int sub_10035AE9(void);
// 10035BC0: using guessed type int sub_10035BC0(void);
// 10035C47: using guessed type _DWORD __stdcall sub_10035C47(_DWORD);
// 100361D3: using guessed type int sub_100361D3(void);
// 100361D8: using guessed type _DWORD __stdcall sub_100361D8(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (10068BA6) --------------------------------------------------------
char __thiscall sub_10068BA6(int this)
{
  int v1; // esi
  int v2; // ebx
  signed int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // al
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // eax
  signed int v21; // ecx
  char v22; // dl
  int v23; // eax
  char v24; // ah
  char v25; // al
  char v26; // al
  int v27; // edx
  int v28; // ebx
  int v29; // ecx
  int v30; // edi
  int v31; // ebx
  int *v32; // edi
  int *v33; // edx
  int v34; // ebx
  int v35; // eax
  WCHAR *v36; // ecx
  int v37; // ST10_4
  WCHAR v38; // ax
  int v39; // ecx
  _DWORD *v40; // edx
  int v41; // ecx
  int v42; // [esp+Ch] [ebp-20h]
  int v43; // [esp+10h] [ebp-1Ch]
  int v44; // [esp+14h] [ebp-18h]
  int v45; // [esp+18h] [ebp-14h]
  int v46; // [esp+1Ch] [ebp-10h]
  CHAR MultiByteStr; // [esp+20h] [ebp-Ch]

  v1 = this;
  v2 = 0;
  v3 = *(char *)(this + 45);
  if ( v3 > 100 )
  {
    if ( v3 > 111 )
    {
      v16 = v3 - 112;
      if ( !v16 )
      {
        v8 = sub_10036273();
        goto LABEL_37;
      }
      v17 = v16 - 3;
      if ( !v17 )
      {
LABEL_35:
        v8 = sub_10035373();
        goto LABEL_37;
      }
      v18 = v17 - 2;
      if ( v18 )
      {
        if ( v18 != 3 )
          return 0;
        v8 = sub_1003452C(0);
        goto LABEL_37;
      }
LABEL_28:
      v8 = sub_10033C26(0);
      goto LABEL_37;
    }
    if ( v3 == 111 )
    {
      v8 = sub_10034E5A();
      goto LABEL_37;
    }
    v12 = v3 - 101;
    if ( !v12 )
      goto LABEL_10;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_10;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_10;
    v15 = v14 - 2;
    if ( v15 )
    {
      if ( v15 == 5 )
      {
        v8 = sub_100345B8();
        goto LABEL_37;
      }
      return 0;
    }
LABEL_27:
    *(_DWORD *)(this + 28) |= 0x10u;
    goto LABEL_28;
  }
  if ( v3 == 100 )
    goto LABEL_27;
  if ( v3 <= 83 )
  {
    if ( v3 != 83 )
    {
      v4 = v3 - 65;
      if ( v4 )
      {
        v5 = v4 - 2;
        if ( v5 )
        {
          v6 = v5 - 2;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              if ( v7 != 1 )
                return 0;
            }
          }
          goto LABEL_10;
        }
        goto LABEL_15;
      }
LABEL_10:
      v8 = sub_1003300A();
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  v9 = v3 - 88;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( !v10 )
    {
      v8 = sub_10035D2D();
      goto LABEL_37;
    }
    v11 = v10 - 7;
    if ( !v11 )
      goto LABEL_10;
    if ( v11 == 2 )
    {
LABEL_15:
      v8 = sub_100342A7(0);
      goto LABEL_37;
    }
    return 0;
  }
  v8 = sub_1003452C(1);
LABEL_37:
  if ( !v8 )
    return 0;
  if ( !*(_BYTE *)(v1 + 44) )
  {
    v20 = *(_DWORD *)(v1 + 28) >> 4;
    LOWORD(v46) = 0;
    v21 = 0;
    BYTE2(v46) = 0;
    v45 = 0;
    if ( v20 & 1 )
    {
      if ( (*(_DWORD *)(v1 + 28) >> 6) & 1 )
      {
        LOBYTE(v46) = 45;
      }
      else
      {
        if ( !(*(_BYTE *)(v1 + 28) & 1) )
        {
          if ( (*(_DWORD *)(v1 + 28) >> 1) & 1 )
          {
            LOBYTE(v46) = 32;
            v21 = 1;
            v45 = 1;
          }
          goto LABEL_48;
        }
        LOBYTE(v46) = 43;
      }
      v21 = 1;
      v45 = 1;
    }
LABEL_48:
    v22 = *(_BYTE *)(v1 + 45);
    if ( v22 != 120 && v22 != 88 || (v23 = *(_DWORD *)(v1 + 28) >> 5, v24 = 1, !(v23 & 1)) )
      v24 = 0;
    if ( v22 == 97 || (v25 = 0, v22 == 65) )
      v25 = 1;
    if ( v24 || v25 )
    {
      *((_BYTE *)&v46 + v21) = 48;
      if ( v22 == 88 || v22 == 65 )
        v26 = 88;
      else
        v26 = 120;
      *((_BYTE *)&v46 + v21 + 1) = v26;
      v21 += 2;
      v45 = v21;
    }
    v27 = *(_DWORD *)(v1 + 32) - v21 - *(_DWORD *)(v1 + 52);
    v43 = *(_DWORD *)(v1 + 32) - v21 - *(_DWORD *)(v1 + 52);
    if ( !(*(_BYTE *)(v1 + 28) & 0xC) && v27 > 0 )
    {
      v28 = *(_DWORD *)(v1 + 20);
      v29 = 0;
      do
      {
        v30 = *(_DWORD *)(v1 + 1096);
        if ( *(_DWORD *)(v30 + 8) == *(_DWORD *)(v30 + 4) )
        {
          if ( *(_BYTE *)(v30 + 12) )
            v31 = v28 + 1;
          else
            v31 = -1;
          *(_DWORD *)(v1 + 20) = v31;
        }
        else
        {
          *(_DWORD *)(v1 + 20) = v28 + 1;
          ++*(_DWORD *)(v30 + 8);
          *(_BYTE *)(**(_DWORD **)(v1 + 1096))++ = 32;
        }
        v28 = *(_DWORD *)(v1 + 20);
        if ( v28 == -1 )
          break;
        ++v29;
      }
      while ( v29 < v27 );
      v21 = v45;
      v2 = 0;
    }
    v32 = (int *)(v1 + 20);
    v44 = v1 + 1096;
    sub_100361D8(&v46, v21, v1 + 20, *(_DWORD *)(v1 + 8));
    v33 = (int *)(v1 + 1096);
    if ( (*(_DWORD *)(v1 + 28) >> 3) & 1 )
    {
      if ( !((*(_DWORD *)(v1 + 28) >> 2) & 1) )
      {
        v46 = 0;
        if ( v43 > 0 )
        {
          do
          {
            v45 = *v33;
            v34 = v45;
            if ( *(_DWORD *)(v45 + 8) == *(_DWORD *)(v45 + 4) )
            {
              if ( *(_BYTE *)(v45 + 12) )
                v35 = *v32 + 1;
              else
                v35 = -1;
              *v32 = v35;
            }
            else
            {
              ++*v32;
              ++*(_DWORD *)(v34 + 8);
              *(_BYTE *)(*(_DWORD *)*v33)++ = 48;
            }
            if ( *v32 == -1 )
              break;
            ++v46;
          }
          while ( v46 < v43 );
          v2 = 0;
        }
      }
    }
    if ( *(_BYTE *)(v1 + 56) && *(_DWORD *)(v1 + 52) > 0 )
    {
      v36 = *(WCHAR **)(v1 + 48);
      v46 = 0;
      while ( 1 )
      {
        v37 = *(_DWORD *)(v1 + 8);
        v38 = *v36;
        v45 = 0;
        v42 = (int)(v36 + 1);
        if ( sub_10034E28((int)&v45, &MultiByteStr, 6, v38, v37) || !v45 )
          break;
        sub_100361D8(&MultiByteStr, v45, v1 + 20, *(_DWORD *)(v1 + 8));
        v36 = (WCHAR *)v42;
        if ( ++v46 == *(_DWORD *)(v1 + 52) )
          goto LABEL_95;
      }
      *v32 = -1;
    }
    else
    {
      sub_100361D8(*(_DWORD *)(v1 + 48), *(_DWORD *)(v1 + 52), v1 + 20, *(_DWORD *)(v1 + 8));
    }
LABEL_95:
    v39 = *v32;
    if ( *v32 >= 0 && (*(_DWORD *)(v1 + 28) >> 2) & 1 && v43 > 0 )
    {
      do
      {
        v40 = *(_DWORD **)v44;
        if ( *(_DWORD *)(*(_DWORD *)v44 + 8) == *(_DWORD *)(*(_DWORD *)v44 + 4) )
        {
          if ( *((_BYTE *)v40 + 12) )
            v41 = v39 + 1;
          else
            v41 = -1;
          *v32 = v41;
        }
        else
        {
          *v32 = v39 + 1;
          ++v40[2];
          *(_BYTE *)(**(_DWORD **)v44)++ = 32;
        }
        v39 = *v32;
        if ( *v32 == -1 )
          break;
        ++v2;
      }
      while ( v2 < v43 );
    }
  }
  return 1;
}
// 1003300A: using guessed type int sub_1003300A(void);
// 10033C26: using guessed type _DWORD __stdcall sub_10033C26(_DWORD);
// 100342A7: using guessed type _DWORD __stdcall sub_100342A7(_DWORD);
// 1003452C: using guessed type _DWORD __stdcall sub_1003452C(_DWORD);
// 100345B8: using guessed type int sub_100345B8(void);
// 10034E5A: using guessed type int sub_10034E5A(void);
// 10035373: using guessed type int sub_10035373(void);
// 10035D2D: using guessed type int sub_10035D2D(void);
// 100361D8: using guessed type _DWORD __stdcall sub_100361D8(_DWORD, _DWORD, _DWORD, _DWORD);
// 10036273: using guessed type int sub_10036273(void);

//----- (10068FDC) --------------------------------------------------------
char __thiscall sub_10068FDC(int this)
{
  int v1; // esi
  int v2; // ebx
  unsigned int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // al
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // eax
  signed int v21; // ecx
  int v22; // edx
  signed __int16 v23; // di
  int v24; // eax
  char v25; // ah
  char v26; // al
  int v27; // edi
  int v28; // edx
  int v29; // eax
  const CHAR *v30; // eax
  bool v31; // sf
  unsigned __int8 v32; // of
  int v33; // eax
  const CHAR *v34; // ecx
  bool v35; // zf
  int v36; // eax
  int v37; // ST0C_4
  int v38; // eax
  _DWORD *v39; // eax
  int v40; // eax
  signed __int16 v41; // [esp-4h] [ebp-38h]
  int v42; // [esp+Ch] [ebp-28h]
  _DWORD *v43; // [esp+Ch] [ebp-28h]
  int v44; // [esp+14h] [ebp-20h]
  WCHAR WideCharStr[2]; // [esp+18h] [ebp-1Ch]
  int v46; // [esp+1Ch] [ebp-18h]
  int v47; // [esp+20h] [ebp-14h]
  const CHAR *v48; // [esp+24h] [ebp-10h]
  int v49; // [esp+28h] [ebp-Ch]
  __int16 v50; // [esp+2Ch] [ebp-8h]

  v1 = this;
  v48 = (const CHAR *)65;
  v2 = 0;
  v46 = this;
  v3 = *(unsigned __int16 *)(this + 46);
  if ( v3 > 0x64 )
  {
    if ( v3 > 0x6F )
    {
      v16 = v3 - 112;
      if ( !v16 )
      {
        v8 = sub_10034BF8(this, 88);
        goto LABEL_37;
      }
      v17 = v16 - 3;
      if ( !v17 )
      {
LABEL_35:
        v8 = sub_10033122(this, 88);
        goto LABEL_37;
      }
      v18 = v17 - 2;
      if ( v18 )
      {
        if ( v18 != 3 )
          return 0;
        v8 = sub_1003309B(0);
        goto LABEL_37;
      }
LABEL_28:
      v8 = sub_1003336B(0);
      goto LABEL_37;
    }
    if ( v3 == 111 )
    {
      v8 = sub_1003361D(this, 88);
      goto LABEL_37;
    }
    v12 = v3 - 101;
    if ( !v12 )
      goto LABEL_10;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_10;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_10;
    v15 = v14 - 2;
    if ( v15 )
    {
      if ( v15 == 5 )
      {
        v8 = sub_1003580F(this, 88);
        goto LABEL_37;
      }
      return 0;
    }
LABEL_27:
    *(_DWORD *)(this + 28) |= 0x10u;
    goto LABEL_28;
  }
  if ( v3 == 100 )
    goto LABEL_27;
  if ( v3 <= 0x53 )
  {
    if ( v3 != 83 )
    {
      v4 = v3 - 65;
      if ( v4 )
      {
        v5 = v4 - 2;
        if ( v5 )
        {
          v6 = v5 - 2;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              if ( v7 != 1 )
                return 0;
            }
          }
          goto LABEL_10;
        }
        goto LABEL_15;
      }
LABEL_10:
      v8 = sub_1003386B(this, 88);
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  v9 = v3 - 88;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( !v10 )
    {
      v8 = sub_1003416C(this, 88);
      goto LABEL_37;
    }
    v11 = v10 - 7;
    if ( !v11 )
      goto LABEL_10;
    if ( v11 == 2 )
    {
LABEL_15:
      v8 = sub_100354C7(0);
      goto LABEL_37;
    }
    return 0;
  }
  v8 = sub_1003309B(1);
LABEL_37:
  if ( !v8 )
    return 0;
  if ( !*(_BYTE *)(v1 + 44) )
  {
    v20 = *(_DWORD *)(v1 + 28) >> 4;
    v49 = 0;
    v21 = 0;
    v50 = 0;
    v47 = 0;
    if ( v20 & 1 )
    {
      if ( (*(_DWORD *)(v1 + 28) >> 6) & 1 )
      {
        v41 = 45;
      }
      else
      {
        if ( !(*(_BYTE *)(v1 + 28) & 1) )
        {
          if ( (*(_DWORD *)(v1 + 28) >> 1) & 1 )
          {
            LOWORD(v49) = 32;
            v21 = 1;
            v47 = 1;
          }
          goto LABEL_48;
        }
        v41 = 43;
      }
      v21 = 1;
      LOWORD(v49) = v41;
      v47 = 1;
    }
LABEL_48:
    v22 = *(unsigned __int16 *)(v1 + 46);
    v23 = 120;
    if ( (_WORD)v22 != 120 && (_WORD)v22 != 88 || (v24 = *(_DWORD *)(v1 + 28) >> 5, v25 = 1, !(v24 & 1)) )
      v25 = 0;
    if ( v22 == 97 || (v26 = 0, (_WORD)v22 == (_WORD)v48) )
      v26 = 1;
    *(_DWORD *)WideCharStr = 48;
    if ( v25 || v26 )
    {
      *((_WORD *)&v49 + v21) = WideCharStr[0];
      if ( (_WORD)v22 == 88 || (_WORD)v22 == (_WORD)v48 )
        v23 = 88;
      *((_WORD *)&v49 + v21 + 1) = v23;
      v21 += 2;
      v47 = v21;
    }
    v27 = *(_DWORD *)(v1 + 32) - *(_DWORD *)(v1 + 52) - v21;
    if ( !(*(_BYTE *)(v1 + 28) & 0xC) )
    {
      v28 = *(_DWORD *)(v1 + 8);
      v42 = *(_DWORD *)(v1 + 8);
      v48 = (const CHAR *)(v1 + 20);
      if ( v27 > 0 )
      {
        do
        {
          sub_10033A69(32, v48, v28);
          if ( *(_DWORD *)v48 == -1 )
            break;
          ++v2;
          v28 = v42;
        }
        while ( v2 < v27 );
        v1 = v46;
        v2 = 0;
        v21 = v47;
      }
    }
    v43 = (_DWORD *)(v1 + 20);
    sub_10034063(&v49, v21, v1 + 20, *(_DWORD *)(v1 + 8));
    if ( (*(_DWORD *)(v1 + 28) >> 3) & 1 )
    {
      if ( !((*(_DWORD *)(v1 + 28) >> 2) & 1) )
      {
        v29 = *(_DWORD *)(v1 + 8);
        v46 = *(_DWORD *)(v1 + 8);
        v48 = 0;
        if ( v27 > 0 )
        {
          do
          {
            sub_10033A69(*(_DWORD *)WideCharStr, v1 + 20, v29);
            if ( *(_DWORD *)(v1 + 20) == -1 )
              break;
            v30 = v48 + 1;
            v48 = v30;
            v32 = __OFSUB__(v30, v27);
            v31 = (signed int)&v30[-v27] < 0;
            v29 = v46;
          }
          while ( v31 ^ v32 );
          v2 = 0;
        }
      }
    }
    if ( *(_BYTE *)(v1 + 56) || *(_DWORD *)(v1 + 52) <= 0 )
    {
      sub_10034063(*(_DWORD *)(v1 + 48), *(_DWORD *)(v1 + 52), v1 + 20, *(_DWORD *)(v1 + 8));
    }
    else
    {
      v33 = *(_DWORD *)(v1 + 8);
      v44 = v33;
      if ( !*(_BYTE *)(v33 + 20) )
      {
        sub_100343EC(v33);
        v33 = v44;
      }
      v34 = *(const CHAR **)(v1 + 48);
      v35 = *(_DWORD *)(v1 + 52) == 0;
      v47 = 0;
      while ( 1 )
      {
        v48 = v34;
        if ( v35 )
          break;
        v36 = *(_DWORD *)(v33 + 12);
        v37 = *(_DWORD *)(v1 + 8);
        WideCharStr[0] = 0;
        v38 = sub_1003323A(WideCharStr, v34, *(_DWORD *)(v36 + 4), v37);
        v46 = v38;
        v35 = v38 == 0;
        v31 = v38 < 0;
        v39 = (_DWORD *)(v1 + 20);
        if ( v31 || v35 )
        {
          *v39 = -1;
          goto LABEL_84;
        }
        sub_10033A69(*(_DWORD *)WideCharStr, v1 + 20, *(_DWORD *)(v1 + 8));
        v34 = &v48[v46];
        v35 = v47++ + 1 == *(_DWORD *)(v1 + 52);
        v33 = v44;
      }
    }
    v39 = (_DWORD *)(v1 + 20);
LABEL_84:
    if ( *v39 >= 0 )
    {
      if ( (*(_DWORD *)(v1 + 28) >> 2) & 1 )
      {
        v40 = *(_DWORD *)(v1 + 8);
        v46 = *(_DWORD *)(v1 + 8);
        if ( v27 > 0 )
        {
          do
          {
            sub_10033A69(32, v43, v40);
            if ( *v43 == -1 )
              break;
            v40 = v46;
            ++v2;
          }
          while ( v2 < v27 );
        }
      }
    }
  }
  return 1;
}
// 1003309B: using guessed type _DWORD __stdcall sub_1003309B(_DWORD);
// 10033122: using guessed type int __fastcall sub_10033122(_DWORD, _DWORD);
// 1003336B: using guessed type _DWORD __stdcall sub_1003336B(_DWORD);
// 1003361D: using guessed type int __fastcall sub_1003361D(_DWORD, _DWORD);
// 1003386B: using guessed type int __fastcall sub_1003386B(_DWORD, _DWORD);
// 10033A69: using guessed type _DWORD __stdcall sub_10033A69(_DWORD, _DWORD, _DWORD);
// 10034063: using guessed type _DWORD __stdcall sub_10034063(_DWORD, _DWORD, _DWORD, _DWORD);
// 1003416C: using guessed type int __fastcall sub_1003416C(_DWORD, _DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034BF8: using guessed type int __fastcall sub_10034BF8(_DWORD, _DWORD);
// 100354C7: using guessed type _DWORD __stdcall sub_100354C7(_DWORD);
// 1003580F: using guessed type int __fastcall sub_1003580F(_DWORD, _DWORD);

//----- (10069411) --------------------------------------------------------
char __thiscall sub_10069411(int this)
{
  int v1; // esi
  int v2; // ebx
  unsigned int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // al
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // eax
  signed int v21; // ecx
  int v22; // edx
  signed __int16 v23; // di
  int v24; // eax
  char v25; // ah
  char v26; // al
  int v27; // edi
  int v28; // edx
  int v29; // eax
  const CHAR *v30; // eax
  bool v31; // sf
  unsigned __int8 v32; // of
  int v33; // eax
  const CHAR *v34; // ecx
  bool v35; // zf
  int v36; // eax
  int v37; // ST0C_4
  int v38; // eax
  _DWORD *v39; // eax
  int v40; // eax
  signed __int16 v41; // [esp-4h] [ebp-38h]
  int v42; // [esp+Ch] [ebp-28h]
  _DWORD *v43; // [esp+Ch] [ebp-28h]
  int v44; // [esp+14h] [ebp-20h]
  WCHAR WideCharStr[2]; // [esp+18h] [ebp-1Ch]
  int v46; // [esp+1Ch] [ebp-18h]
  int v47; // [esp+20h] [ebp-14h]
  const CHAR *v48; // [esp+24h] [ebp-10h]
  int v49; // [esp+28h] [ebp-Ch]
  __int16 v50; // [esp+2Ch] [ebp-8h]

  v1 = this;
  v48 = (const CHAR *)65;
  v2 = 0;
  v46 = this;
  v3 = *(unsigned __int16 *)(this + 46);
  if ( v3 > 0x64 )
  {
    if ( v3 > 0x6F )
    {
      v16 = v3 - 112;
      if ( !v16 )
      {
        v8 = sub_10035A67(this, 88);
        goto LABEL_37;
      }
      v17 = v16 - 3;
      if ( !v17 )
      {
LABEL_35:
        v8 = sub_1003424D(this, 88);
        goto LABEL_37;
      }
      v18 = v17 - 2;
      if ( v18 )
      {
        if ( v18 != 3 )
          return 0;
        v8 = sub_100347CA(0);
        goto LABEL_37;
      }
LABEL_28:
      v8 = sub_100336C7(0);
      goto LABEL_37;
    }
    if ( v3 == 111 )
    {
      v8 = sub_10035995(this, 88);
      goto LABEL_37;
    }
    v12 = v3 - 101;
    if ( !v12 )
      goto LABEL_10;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_10;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_10;
    v15 = v14 - 2;
    if ( v15 )
    {
      if ( v15 == 5 )
      {
        v8 = sub_1003373F(this, 88);
        goto LABEL_37;
      }
      return 0;
    }
LABEL_27:
    *(_DWORD *)(this + 28) |= 0x10u;
    goto LABEL_28;
  }
  if ( v3 == 100 )
    goto LABEL_27;
  if ( v3 <= 0x53 )
  {
    if ( v3 != 83 )
    {
      v4 = v3 - 65;
      if ( v4 )
      {
        v5 = v4 - 2;
        if ( v5 )
        {
          v6 = v5 - 2;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              if ( v7 != 1 )
                return 0;
            }
          }
          goto LABEL_10;
        }
        goto LABEL_15;
      }
LABEL_10:
      v8 = sub_100360BB(this, 88);
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  v9 = v3 - 88;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( !v10 )
    {
      v8 = sub_10034BE9(this, 88);
      goto LABEL_37;
    }
    v11 = v10 - 7;
    if ( !v11 )
      goto LABEL_10;
    if ( v11 == 2 )
    {
LABEL_15:
      v8 = sub_10034DDD(0);
      goto LABEL_37;
    }
    return 0;
  }
  v8 = sub_100347CA(1);
LABEL_37:
  if ( !v8 )
    return 0;
  if ( !(unsigned __int8)sub_10034603(v1) && !*(_BYTE *)(v1 + 44) )
  {
    v20 = *(_DWORD *)(v1 + 28) >> 4;
    v49 = 0;
    v21 = 0;
    v50 = 0;
    v47 = 0;
    if ( v20 & 1 )
    {
      if ( (*(_DWORD *)(v1 + 28) >> 6) & 1 )
      {
        v41 = 45;
      }
      else
      {
        if ( !(*(_BYTE *)(v1 + 28) & 1) )
        {
          if ( (*(_DWORD *)(v1 + 28) >> 1) & 1 )
          {
            LOWORD(v49) = 32;
            v21 = 1;
            v47 = 1;
          }
          goto LABEL_49;
        }
        v41 = 43;
      }
      v21 = 1;
      LOWORD(v49) = v41;
      v47 = 1;
    }
LABEL_49:
    v22 = *(unsigned __int16 *)(v1 + 46);
    v23 = 120;
    if ( (_WORD)v22 != 120 && (_WORD)v22 != 88 || (v24 = *(_DWORD *)(v1 + 28) >> 5, v25 = 1, !(v24 & 1)) )
      v25 = 0;
    if ( v22 == 97 || (v26 = 0, (_WORD)v22 == (_WORD)v48) )
      v26 = 1;
    *(_DWORD *)WideCharStr = 48;
    if ( v25 || v26 )
    {
      *((_WORD *)&v49 + v21) = WideCharStr[0];
      if ( (_WORD)v22 == 88 || (_WORD)v22 == (_WORD)v48 )
        v23 = 88;
      *((_WORD *)&v49 + v21 + 1) = v23;
      v21 += 2;
      v47 = v21;
    }
    v27 = *(_DWORD *)(v1 + 32) - *(_DWORD *)(v1 + 52) - v21;
    if ( !(*(_BYTE *)(v1 + 28) & 0xC) )
    {
      v28 = *(_DWORD *)(v1 + 8);
      v42 = *(_DWORD *)(v1 + 8);
      v48 = (const CHAR *)(v1 + 20);
      if ( v27 > 0 )
      {
        do
        {
          sub_10033A69(32, v48, v28);
          if ( *(_DWORD *)v48 == -1 )
            break;
          ++v2;
          v28 = v42;
        }
        while ( v2 < v27 );
        v1 = v46;
        v2 = 0;
        v21 = v47;
      }
    }
    v43 = (_DWORD *)(v1 + 20);
    sub_10034063(&v49, v21, v1 + 20, *(_DWORD *)(v1 + 8));
    if ( (*(_DWORD *)(v1 + 28) >> 3) & 1 )
    {
      if ( !((*(_DWORD *)(v1 + 28) >> 2) & 1) )
      {
        v29 = *(_DWORD *)(v1 + 8);
        v46 = *(_DWORD *)(v1 + 8);
        v48 = 0;
        if ( v27 > 0 )
        {
          do
          {
            sub_10033A69(*(_DWORD *)WideCharStr, v1 + 20, v29);
            if ( *(_DWORD *)(v1 + 20) == -1 )
              break;
            v30 = v48 + 1;
            v48 = v30;
            v32 = __OFSUB__(v30, v27);
            v31 = (signed int)&v30[-v27] < 0;
            v29 = v46;
          }
          while ( v31 ^ v32 );
          v2 = 0;
        }
      }
    }
    if ( *(_BYTE *)(v1 + 56) || *(_DWORD *)(v1 + 52) <= 0 )
    {
      sub_10034063(*(_DWORD *)(v1 + 48), *(_DWORD *)(v1 + 52), v1 + 20, *(_DWORD *)(v1 + 8));
    }
    else
    {
      v33 = *(_DWORD *)(v1 + 8);
      v44 = v33;
      if ( !*(_BYTE *)(v33 + 20) )
      {
        sub_100343EC(v33);
        v33 = v44;
      }
      v34 = *(const CHAR **)(v1 + 48);
      v35 = *(_DWORD *)(v1 + 52) == 0;
      v47 = 0;
      while ( 1 )
      {
        v48 = v34;
        if ( v35 )
          break;
        v36 = *(_DWORD *)(v33 + 12);
        v37 = *(_DWORD *)(v1 + 8);
        WideCharStr[0] = 0;
        v38 = sub_1003323A(WideCharStr, v34, *(_DWORD *)(v36 + 4), v37);
        v46 = v38;
        v35 = v38 == 0;
        v31 = v38 < 0;
        v39 = (_DWORD *)(v1 + 20);
        if ( v31 || v35 )
        {
          *v39 = -1;
          goto LABEL_85;
        }
        sub_10033A69(*(_DWORD *)WideCharStr, v1 + 20, *(_DWORD *)(v1 + 8));
        v34 = &v48[v46];
        v35 = v47++ + 1 == *(_DWORD *)(v1 + 52);
        v33 = v44;
      }
    }
    v39 = (_DWORD *)(v1 + 20);
LABEL_85:
    if ( *v39 >= 0 )
    {
      if ( (*(_DWORD *)(v1 + 28) >> 2) & 1 )
      {
        v40 = *(_DWORD *)(v1 + 8);
        v46 = *(_DWORD *)(v1 + 8);
        if ( v27 > 0 )
        {
          do
          {
            sub_10033A69(32, v43, v40);
            if ( *v43 == -1 )
              break;
            v40 = v46;
            ++v2;
          }
          while ( v2 < v27 );
        }
      }
    }
  }
  return 1;
}
// 100336C7: using guessed type _DWORD __stdcall sub_100336C7(_DWORD);
// 1003373F: using guessed type int __fastcall sub_1003373F(_DWORD, _DWORD);
// 10033A69: using guessed type _DWORD __stdcall sub_10033A69(_DWORD, _DWORD, _DWORD);
// 10034063: using guessed type _DWORD __stdcall sub_10034063(_DWORD, _DWORD, _DWORD, _DWORD);
// 1003424D: using guessed type int __fastcall sub_1003424D(_DWORD, _DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034603: using guessed type int __thiscall sub_10034603(_DWORD);
// 100347CA: using guessed type _DWORD __stdcall sub_100347CA(_DWORD);
// 10034BE9: using guessed type int __fastcall sub_10034BE9(_DWORD, _DWORD);
// 10034DDD: using guessed type _DWORD __stdcall sub_10034DDD(_DWORD);
// 10035995: using guessed type int __fastcall sub_10035995(_DWORD, _DWORD);
// 10035A67: using guessed type int __fastcall sub_10035A67(_DWORD, _DWORD);
// 100360BB: using guessed type int __fastcall sub_100360BB(_DWORD, _DWORD);

//----- (10069859) --------------------------------------------------------
char __thiscall sub_10069859(int this)
{
  int v1; // esi
  int v2; // ebx
  unsigned int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // al
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // eax
  signed int v21; // ecx
  int v22; // edx
  signed __int16 v23; // di
  int v24; // eax
  char v25; // ah
  char v26; // al
  int v27; // edi
  int v28; // edx
  int v29; // eax
  const CHAR *v30; // eax
  bool v31; // sf
  unsigned __int8 v32; // of
  int v33; // eax
  const CHAR *v34; // ecx
  bool v35; // zf
  int v36; // eax
  int v37; // ST0C_4
  int v38; // eax
  _DWORD *v39; // eax
  int v40; // eax
  signed __int16 v41; // [esp-4h] [ebp-38h]
  int v42; // [esp+Ch] [ebp-28h]
  _DWORD *v43; // [esp+Ch] [ebp-28h]
  int v44; // [esp+14h] [ebp-20h]
  WCHAR WideCharStr[2]; // [esp+18h] [ebp-1Ch]
  int v46; // [esp+1Ch] [ebp-18h]
  int v47; // [esp+20h] [ebp-14h]
  const CHAR *v48; // [esp+24h] [ebp-10h]
  int v49; // [esp+28h] [ebp-Ch]
  __int16 v50; // [esp+2Ch] [ebp-8h]

  v1 = this;
  v48 = (const CHAR *)65;
  v2 = 0;
  v46 = this;
  v3 = *(unsigned __int16 *)(this + 46);
  if ( v3 > 0x64 )
  {
    if ( v3 > 0x6F )
    {
      v16 = v3 - 112;
      if ( !v16 )
      {
        v8 = sub_10036241(this, 88);
        goto LABEL_37;
      }
      v17 = v16 - 3;
      if ( !v17 )
      {
LABEL_35:
        v8 = sub_10034162(this, 88);
        goto LABEL_37;
      }
      v18 = v17 - 2;
      if ( v18 )
      {
        if ( v18 != 3 )
          return 0;
        v8 = sub_100340F9(0);
        goto LABEL_37;
      }
LABEL_28:
      v8 = sub_100338C0(0);
      goto LABEL_37;
    }
    if ( v3 == 111 )
    {
      v8 = sub_10033EB5(this, 88);
      goto LABEL_37;
    }
    v12 = v3 - 101;
    if ( !v12 )
      goto LABEL_10;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_10;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_10;
    v15 = v14 - 2;
    if ( v15 )
    {
      if ( v15 == 5 )
      {
        v8 = sub_1003396F(this, 88);
        goto LABEL_37;
      }
      return 0;
    }
LABEL_27:
    *(_DWORD *)(this + 28) |= 0x10u;
    goto LABEL_28;
  }
  if ( v3 == 100 )
    goto LABEL_27;
  if ( v3 <= 0x53 )
  {
    if ( v3 != 83 )
    {
      v4 = v3 - 65;
      if ( v4 )
      {
        v5 = v4 - 2;
        if ( v5 )
        {
          v6 = v5 - 2;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              if ( v7 != 1 )
                return 0;
            }
          }
          goto LABEL_10;
        }
        goto LABEL_15;
      }
LABEL_10:
      v8 = sub_100362BE(this, 88);
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  v9 = v3 - 88;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( !v10 )
    {
      v8 = sub_10035F21(this, 88);
      goto LABEL_37;
    }
    v11 = v10 - 7;
    if ( !v11 )
      goto LABEL_10;
    if ( v11 == 2 )
    {
LABEL_15:
      v8 = sub_10033019(0);
      goto LABEL_37;
    }
    return 0;
  }
  v8 = sub_100340F9(1);
LABEL_37:
  if ( !v8 )
    return 0;
  if ( !*(_BYTE *)(v1 + 44) )
  {
    v20 = *(_DWORD *)(v1 + 28) >> 4;
    v49 = 0;
    v21 = 0;
    v50 = 0;
    v47 = 0;
    if ( v20 & 1 )
    {
      if ( (*(_DWORD *)(v1 + 28) >> 6) & 1 )
      {
        v41 = 45;
      }
      else
      {
        if ( !(*(_BYTE *)(v1 + 28) & 1) )
        {
          if ( (*(_DWORD *)(v1 + 28) >> 1) & 1 )
          {
            LOWORD(v49) = 32;
            v21 = 1;
            v47 = 1;
          }
          goto LABEL_48;
        }
        v41 = 43;
      }
      v21 = 1;
      LOWORD(v49) = v41;
      v47 = 1;
    }
LABEL_48:
    v22 = *(unsigned __int16 *)(v1 + 46);
    v23 = 120;
    if ( (_WORD)v22 != 120 && (_WORD)v22 != 88 || (v24 = *(_DWORD *)(v1 + 28) >> 5, v25 = 1, !(v24 & 1)) )
      v25 = 0;
    if ( v22 == 97 || (v26 = 0, (_WORD)v22 == (_WORD)v48) )
      v26 = 1;
    *(_DWORD *)WideCharStr = 48;
    if ( v25 || v26 )
    {
      *((_WORD *)&v49 + v21) = WideCharStr[0];
      if ( (_WORD)v22 == 88 || (_WORD)v22 == (_WORD)v48 )
        v23 = 88;
      *((_WORD *)&v49 + v21 + 1) = v23;
      v21 += 2;
      v47 = v21;
    }
    v27 = *(_DWORD *)(v1 + 32) - *(_DWORD *)(v1 + 52) - v21;
    if ( !(*(_BYTE *)(v1 + 28) & 0xC) )
    {
      v28 = *(_DWORD *)(v1 + 8);
      v42 = *(_DWORD *)(v1 + 8);
      v48 = (const CHAR *)(v1 + 20);
      if ( v27 > 0 )
      {
        do
        {
          sub_10033A69(32, v48, v28);
          if ( *(_DWORD *)v48 == -1 )
            break;
          ++v2;
          v28 = v42;
        }
        while ( v2 < v27 );
        v1 = v46;
        v2 = 0;
        v21 = v47;
      }
    }
    v43 = (_DWORD *)(v1 + 20);
    sub_10034063(&v49, v21, v1 + 20, *(_DWORD *)(v1 + 8));
    if ( (*(_DWORD *)(v1 + 28) >> 3) & 1 )
    {
      if ( !((*(_DWORD *)(v1 + 28) >> 2) & 1) )
      {
        v29 = *(_DWORD *)(v1 + 8);
        v46 = *(_DWORD *)(v1 + 8);
        v48 = 0;
        if ( v27 > 0 )
        {
          do
          {
            sub_10033A69(*(_DWORD *)WideCharStr, v1 + 20, v29);
            if ( *(_DWORD *)(v1 + 20) == -1 )
              break;
            v30 = v48 + 1;
            v48 = v30;
            v32 = __OFSUB__(v30, v27);
            v31 = (signed int)&v30[-v27] < 0;
            v29 = v46;
          }
          while ( v31 ^ v32 );
          v2 = 0;
        }
      }
    }
    if ( *(_BYTE *)(v1 + 56) || *(_DWORD *)(v1 + 52) <= 0 )
    {
      sub_10034063(*(_DWORD *)(v1 + 48), *(_DWORD *)(v1 + 52), v1 + 20, *(_DWORD *)(v1 + 8));
    }
    else
    {
      v33 = *(_DWORD *)(v1 + 8);
      v44 = v33;
      if ( !*(_BYTE *)(v33 + 20) )
      {
        sub_100343EC(v33);
        v33 = v44;
      }
      v34 = *(const CHAR **)(v1 + 48);
      v35 = *(_DWORD *)(v1 + 52) == 0;
      v47 = 0;
      while ( 1 )
      {
        v48 = v34;
        if ( v35 )
          break;
        v36 = *(_DWORD *)(v33 + 12);
        v37 = *(_DWORD *)(v1 + 8);
        WideCharStr[0] = 0;
        v38 = sub_1003323A(WideCharStr, v34, *(_DWORD *)(v36 + 4), v37);
        v46 = v38;
        v35 = v38 == 0;
        v31 = v38 < 0;
        v39 = (_DWORD *)(v1 + 20);
        if ( v31 || v35 )
        {
          *v39 = -1;
          goto LABEL_84;
        }
        sub_10033A69(*(_DWORD *)WideCharStr, v1 + 20, *(_DWORD *)(v1 + 8));
        v34 = &v48[v46];
        v35 = v47++ + 1 == *(_DWORD *)(v1 + 52);
        v33 = v44;
      }
    }
    v39 = (_DWORD *)(v1 + 20);
LABEL_84:
    if ( *v39 >= 0 )
    {
      if ( (*(_DWORD *)(v1 + 28) >> 2) & 1 )
      {
        v40 = *(_DWORD *)(v1 + 8);
        v46 = *(_DWORD *)(v1 + 8);
        if ( v27 > 0 )
        {
          do
          {
            sub_10033A69(32, v43, v40);
            if ( *v43 == -1 )
              break;
            v40 = v46;
            ++v2;
          }
          while ( v2 < v27 );
        }
      }
    }
  }
  return 1;
}
// 10033019: using guessed type _DWORD __stdcall sub_10033019(_DWORD);
// 100338C0: using guessed type _DWORD __stdcall sub_100338C0(_DWORD);
// 1003396F: using guessed type int __fastcall sub_1003396F(_DWORD, _DWORD);
// 10033A69: using guessed type _DWORD __stdcall sub_10033A69(_DWORD, _DWORD, _DWORD);
// 10033EB5: using guessed type int __fastcall sub_10033EB5(_DWORD, _DWORD);
// 10034063: using guessed type _DWORD __stdcall sub_10034063(_DWORD, _DWORD, _DWORD, _DWORD);
// 100340F9: using guessed type _DWORD __stdcall sub_100340F9(_DWORD);
// 10034162: using guessed type int __fastcall sub_10034162(_DWORD, _DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10035F21: using guessed type int __fastcall sub_10035F21(_DWORD, _DWORD);
// 10036241: using guessed type int __fastcall sub_10036241(_DWORD, _DWORD);
// 100362BE: using guessed type int __fastcall sub_100362BE(_DWORD, _DWORD);

//----- (10069C8E) --------------------------------------------------------
char __thiscall sub_10069C8E(int this)
{
  int v1; // esi
  int v2; // ebx
  unsigned int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // al
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // eax
  signed int v21; // ecx
  int v22; // edx
  signed __int16 v23; // di
  int v24; // eax
  char v25; // ah
  char v26; // al
  int v27; // edx
  int v28; // ebx
  int v29; // ecx
  int v30; // edi
  int v31; // ebx
  int *v32; // edi
  _DWORD *v33; // edx
  signed int v34; // ebx
  int v35; // eax
  int v36; // eax
  const CHAR *v37; // ecx
  int v38; // eax
  int v39; // ST0C_4
  int v40; // edx
  _DWORD *v41; // ecx
  bool v42; // zf
  int v43; // ecx
  int v44; // edx
  int v45; // ecx
  signed __int16 v46; // [esp-4h] [ebp-38h]
  WCHAR v47; // [esp+Ch] [ebp-28h]
  int v48; // [esp+10h] [ebp-24h]
  int v49; // [esp+14h] [ebp-20h]
  _WORD ***v50; // [esp+18h] [ebp-1Ch]
  int v51; // [esp+1Ch] [ebp-18h]
  int v52; // [esp+20h] [ebp-14h]
  int v53; // [esp+20h] [ebp-14h]
  WCHAR WideCharStr[2]; // [esp+24h] [ebp-10h]
  int v55; // [esp+28h] [ebp-Ch]
  __int16 v56; // [esp+2Ch] [ebp-8h]

  v1 = this;
  v2 = 0;
  v3 = *(unsigned __int16 *)(this + 46);
  if ( v3 > 0x64 )
  {
    if ( v3 > 0x6F )
    {
      v16 = v3 - 112;
      if ( !v16 )
      {
        v8 = sub_100336E0(this, 88);
        goto LABEL_37;
      }
      v17 = v16 - 3;
      if ( !v17 )
      {
LABEL_35:
        v8 = sub_10033ABE(this, 88);
        goto LABEL_37;
      }
      v18 = v17 - 2;
      if ( v18 )
      {
        if ( v18 != 3 )
          return 0;
        v8 = sub_100354EA(0);
        goto LABEL_37;
      }
LABEL_28:
      v8 = sub_10033CDF(0);
      goto LABEL_37;
    }
    if ( v3 == 111 )
    {
      v8 = sub_10033A9B(this, 88);
      goto LABEL_37;
    }
    v12 = v3 - 101;
    if ( !v12 )
      goto LABEL_10;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_10;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_10;
    v15 = v14 - 2;
    if ( v15 )
    {
      if ( v15 == 5 )
      {
        v8 = sub_10034EEB(this, 88);
        goto LABEL_37;
      }
      return 0;
    }
LABEL_27:
    *(_DWORD *)(this + 28) |= 0x10u;
    goto LABEL_28;
  }
  if ( v3 == 100 )
    goto LABEL_27;
  if ( v3 <= 0x53 )
  {
    if ( v3 != 83 )
    {
      v4 = v3 - 65;
      if ( v4 )
      {
        v5 = v4 - 2;
        if ( v5 )
        {
          v6 = v5 - 2;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              if ( v7 != 1 )
                return 0;
            }
          }
          goto LABEL_10;
        }
        goto LABEL_15;
      }
LABEL_10:
      v8 = sub_1003558F(this, 88);
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  v9 = v3 - 88;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( !v10 )
    {
      v8 = sub_100363A9(this, 88);
      goto LABEL_37;
    }
    v11 = v10 - 7;
    if ( !v11 )
      goto LABEL_10;
    if ( v11 == 2 )
    {
LABEL_15:
      v8 = sub_10034C5C(0);
      goto LABEL_37;
    }
    return 0;
  }
  v8 = sub_100354EA(1);
LABEL_37:
  if ( !v8 )
    return 0;
  if ( !*(_BYTE *)(v1 + 44) )
  {
    v20 = *(_DWORD *)(v1 + 28) >> 4;
    v55 = 0;
    v21 = 0;
    v56 = 0;
    *(_DWORD *)WideCharStr = 0;
    if ( !(v20 & 1) )
      goto LABEL_48;
    if ( (*(_DWORD *)(v1 + 28) >> 6) & 1 )
    {
      v46 = 45;
    }
    else
    {
      if ( !(*(_BYTE *)(v1 + 28) & 1) )
      {
        if ( (*(_DWORD *)(v1 + 28) >> 1) & 1 )
        {
          LOWORD(v55) = 32;
          v21 = 1;
          *(_DWORD *)WideCharStr = 1;
        }
LABEL_48:
        v22 = *(unsigned __int16 *)(v1 + 46);
        v23 = 120;
        if ( (_WORD)v22 != 120 && (_WORD)v22 != 88 || (v24 = *(_DWORD *)(v1 + 28) >> 5, v25 = 1, !(v24 & 1)) )
          v25 = 0;
        if ( v22 == 97 || (v26 = 0, (_WORD)v22 == 65) )
          v26 = 1;
        if ( v25 || v26 )
        {
          *((_WORD *)&v55 + v21) = 48;
          if ( (_WORD)v22 == 88 || (_WORD)v22 == 65 )
            v23 = 88;
          *((_WORD *)&v55 + v21 + 1) = v23;
          v21 += 2;
          *(_DWORD *)WideCharStr = v21;
        }
        v27 = *(_DWORD *)(v1 + 32) - *(_DWORD *)(v1 + 52) - v21;
        v48 = *(_DWORD *)(v1 + 32) - *(_DWORD *)(v1 + 52) - v21;
        if ( !(*(_BYTE *)(v1 + 28) & 0xC) && v27 > 0 )
        {
          v28 = *(_DWORD *)(v1 + 20);
          v29 = 0;
          do
          {
            v30 = *(_DWORD *)(v1 + 1096);
            if ( *(_DWORD *)(v30 + 8) == *(_DWORD *)(v30 + 4) )
            {
              if ( *(_BYTE *)(v30 + 12) )
                v31 = v28 + 1;
              else
                v31 = -1;
              *(_DWORD *)(v1 + 20) = v31;
            }
            else
            {
              *(_DWORD *)(v1 + 20) = v28 + 1;
              ++*(_DWORD *)(v30 + 8);
              ***(_WORD ***)(v1 + 1096) = 32;
              **(_DWORD **)(v1 + 1096) += 2;
            }
            v28 = *(_DWORD *)(v1 + 20);
            if ( v28 == -1 )
              break;
            ++v29;
          }
          while ( v29 < v27 );
          v21 = *(_DWORD *)WideCharStr;
          v2 = 0;
        }
        v32 = (int *)(v1 + 20);
        v50 = (_WORD ***)(v1 + 1096);
        sub_10035495(&v55, v21, v1 + 20, *(_DWORD *)(v1 + 8));
        v33 = (_DWORD *)(v1 + 1096);
        if ( (*(_DWORD *)(v1 + 28) >> 3) & 1 )
        {
          if ( !((*(_DWORD *)(v1 + 28) >> 2) & 1) )
          {
            v52 = 0;
            if ( v48 > 0 )
            {
              do
              {
                *(_DWORD *)WideCharStr = *v33;
                v34 = *(_DWORD *)WideCharStr;
                if ( *(_DWORD *)(*(_DWORD *)WideCharStr + 8) == *(_DWORD *)(*(_DWORD *)WideCharStr + 4) )
                {
                  if ( *(_BYTE *)(*(_DWORD *)WideCharStr + 12) )
                    v35 = *v32 + 1;
                  else
                    v35 = -1;
                  *v32 = v35;
                }
                else
                {
                  ++*v32;
                  ++*(_DWORD *)(v34 + 8);
                  **(_WORD **)*v33 = 48;
                  *(_DWORD *)*v33 += 2;
                }
                if ( *v32 == -1 )
                  break;
                ++v52;
              }
              while ( v52 < v48 );
              v2 = 0;
            }
          }
        }
        if ( *(_BYTE *)(v1 + 56) || *(_DWORD *)(v1 + 52) <= 0 )
        {
          sub_10035495(*(_DWORD *)(v1 + 48), *(_DWORD *)(v1 + 52), v1 + 20, *(_DWORD *)(v1 + 8));
        }
        else
        {
          v36 = *(_DWORD *)(v1 + 8);
          v49 = v36;
          if ( !*(_BYTE *)(v36 + 20) )
          {
            sub_100343EC(v36);
            v36 = v49;
          }
          v37 = *(const CHAR **)(v1 + 48);
          v51 = *(_DWORD *)(v1 + 48);
          v53 = 0;
          if ( *(_DWORD *)(v1 + 52) )
          {
            while ( 1 )
            {
              v38 = *(_DWORD *)(v36 + 12);
              v39 = *(_DWORD *)(v1 + 8);
              WideCharStr[0] = 0;
              v55 = sub_1003323A(WideCharStr, v37, *(_DWORD *)(v38 + 4), v39);
              v40 = v1 + 1096;
              if ( v55 <= 0 )
                break;
              v41 = *(_DWORD **)v40;
              v47 = WideCharStr[0];
              if ( *(_DWORD *)(*(_DWORD *)v40 + 8) == *(_DWORD *)(*(_DWORD *)v40 + 4) )
              {
                if ( *((_BYTE *)v41 + 12) )
                  ++*v32;
                else
                  *v32 = -1;
              }
              else
              {
                ++*v32;
                ++v41[2];
                ***(_WORD ***)v40 = v47;
                **(_DWORD **)v40 += 2;
              }
              v37 = (const CHAR *)(v55 + v51);
              v51 += v55;
              v42 = v53++ + 1 == *(_DWORD *)(v1 + 52);
              v36 = v49;
              if ( v42 )
                goto LABEL_101;
            }
            *v32 = -1;
            goto LABEL_101;
          }
        }
        v40 = v1 + 1096;
LABEL_101:
        v43 = *v32;
        if ( *v32 >= 0 && (*(_DWORD *)(v1 + 28) >> 2) & 1 && v48 > 0 )
        {
          do
          {
            v44 = *(_DWORD *)v40;
            if ( *(_DWORD *)(v44 + 8) == *(_DWORD *)(v44 + 4) )
            {
              if ( *(_BYTE *)(v44 + 12) )
                v45 = v43 + 1;
              else
                v45 = -1;
              v40 = v1 + 1096;
              *v32 = v45;
            }
            else
            {
              *v32 = v43 + 1;
              ++*(_DWORD *)(v44 + 8);
              v40 = v1 + 1096;
              ***v50 = 32;
              ++**v50;
            }
            v43 = *v32;
            if ( *v32 == -1 )
              break;
            ++v2;
          }
          while ( v2 < v48 );
        }
        return 1;
      }
      v46 = 43;
    }
    v21 = 1;
    LOWORD(v55) = v46;
    *(_DWORD *)WideCharStr = 1;
    goto LABEL_48;
  }
  return 1;
}
// 100336E0: using guessed type int __fastcall sub_100336E0(_DWORD, _DWORD);
// 10033A9B: using guessed type int __fastcall sub_10033A9B(_DWORD, _DWORD);
// 10033ABE: using guessed type int __fastcall sub_10033ABE(_DWORD, _DWORD);
// 10033CDF: using guessed type _DWORD __stdcall sub_10033CDF(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034C5C: using guessed type _DWORD __stdcall sub_10034C5C(_DWORD);
// 10034EEB: using guessed type int __fastcall sub_10034EEB(_DWORD, _DWORD);
// 10035495: using guessed type _DWORD __stdcall sub_10035495(_DWORD, _DWORD, _DWORD, _DWORD);
// 100354EA: using guessed type _DWORD __stdcall sub_100354EA(_DWORD);
// 1003558F: using guessed type int __fastcall sub_1003558F(_DWORD, _DWORD);
// 100363A9: using guessed type int __fastcall sub_100363A9(_DWORD, _DWORD);

//----- (1006A17F) --------------------------------------------------------
char __thiscall sub_1006A17F(int this)
{
  int v1; // esi
  int v2; // ebx
  unsigned int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // al
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // eax
  signed int v21; // ecx
  int v22; // edx
  signed __int16 v23; // di
  int v24; // eax
  char v25; // ah
  char v26; // al
  int v27; // edx
  int v28; // ebx
  int v29; // ecx
  int v30; // edi
  int v31; // ebx
  int *v32; // edi
  _DWORD *v33; // edx
  signed int v34; // ebx
  int v35; // eax
  int v36; // eax
  const CHAR *v37; // ecx
  int v38; // eax
  int v39; // ST0C_4
  int v40; // edx
  _DWORD *v41; // ecx
  bool v42; // zf
  int v43; // ecx
  int v44; // edx
  int v45; // ecx
  signed __int16 v46; // [esp-4h] [ebp-38h]
  WCHAR v47; // [esp+Ch] [ebp-28h]
  int v48; // [esp+10h] [ebp-24h]
  int v49; // [esp+14h] [ebp-20h]
  _WORD ***v50; // [esp+18h] [ebp-1Ch]
  int v51; // [esp+1Ch] [ebp-18h]
  int v52; // [esp+20h] [ebp-14h]
  int v53; // [esp+20h] [ebp-14h]
  WCHAR WideCharStr[2]; // [esp+24h] [ebp-10h]
  int v55; // [esp+28h] [ebp-Ch]
  __int16 v56; // [esp+2Ch] [ebp-8h]

  v1 = this;
  v2 = 0;
  v3 = *(unsigned __int16 *)(this + 46);
  if ( v3 > 0x64 )
  {
    if ( v3 > 0x6F )
    {
      v16 = v3 - 112;
      if ( !v16 )
      {
        v8 = sub_10033285(this, 88);
        goto LABEL_37;
      }
      v17 = v16 - 3;
      if ( !v17 )
      {
LABEL_35:
        v8 = sub_100349EB(this, 88);
        goto LABEL_37;
      }
      v18 = v17 - 2;
      if ( v18 )
      {
        if ( v18 != 3 )
          return 0;
        v8 = sub_10033FD7(0);
        goto LABEL_37;
      }
LABEL_28:
      v8 = sub_10033F82(0);
      goto LABEL_37;
    }
    if ( v3 == 111 )
    {
      v8 = sub_10033D02(this, 88);
      goto LABEL_37;
    }
    v12 = v3 - 101;
    if ( !v12 )
      goto LABEL_10;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_10;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_10;
    v15 = v14 - 2;
    if ( v15 )
    {
      if ( v15 == 5 )
      {
        v8 = sub_10033BEF(this, 88);
        goto LABEL_37;
      }
      return 0;
    }
LABEL_27:
    *(_DWORD *)(this + 28) |= 0x10u;
    goto LABEL_28;
  }
  if ( v3 == 100 )
    goto LABEL_27;
  if ( v3 <= 0x53 )
  {
    if ( v3 != 83 )
    {
      v4 = v3 - 65;
      if ( v4 )
      {
        v5 = v4 - 2;
        if ( v5 )
        {
          v6 = v5 - 2;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              if ( v7 != 1 )
                return 0;
            }
          }
          goto LABEL_10;
        }
        goto LABEL_15;
      }
LABEL_10:
      v8 = sub_10034C57(this, 88);
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  v9 = v3 - 88;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( !v10 )
    {
      v8 = sub_10035224(this, 88);
      goto LABEL_37;
    }
    v11 = v10 - 7;
    if ( !v11 )
      goto LABEL_10;
    if ( v11 == 2 )
    {
LABEL_15:
      v8 = sub_10033D70(0);
      goto LABEL_37;
    }
    return 0;
  }
  v8 = sub_10033FD7(1);
LABEL_37:
  if ( !v8 )
    return 0;
  if ( !(unsigned __int8)sub_10033CE4(v1) && !*(_BYTE *)(v1 + 44) )
  {
    v20 = *(_DWORD *)(v1 + 28) >> 4;
    v55 = 0;
    v21 = 0;
    v56 = 0;
    *(_DWORD *)WideCharStr = 0;
    if ( !(v20 & 1) )
      goto LABEL_49;
    if ( (*(_DWORD *)(v1 + 28) >> 6) & 1 )
    {
      v46 = 45;
    }
    else
    {
      if ( !(*(_BYTE *)(v1 + 28) & 1) )
      {
        if ( (*(_DWORD *)(v1 + 28) >> 1) & 1 )
        {
          LOWORD(v55) = 32;
          v21 = 1;
          *(_DWORD *)WideCharStr = 1;
        }
LABEL_49:
        v22 = *(unsigned __int16 *)(v1 + 46);
        v23 = 120;
        if ( (_WORD)v22 != 120 && (_WORD)v22 != 88 || (v24 = *(_DWORD *)(v1 + 28) >> 5, v25 = 1, !(v24 & 1)) )
          v25 = 0;
        if ( v22 == 97 || (v26 = 0, (_WORD)v22 == 65) )
          v26 = 1;
        if ( v25 || v26 )
        {
          *((_WORD *)&v55 + v21) = 48;
          if ( (_WORD)v22 == 88 || (_WORD)v22 == 65 )
            v23 = 88;
          *((_WORD *)&v55 + v21 + 1) = v23;
          v21 += 2;
          *(_DWORD *)WideCharStr = v21;
        }
        v27 = *(_DWORD *)(v1 + 32) - *(_DWORD *)(v1 + 52) - v21;
        v48 = *(_DWORD *)(v1 + 32) - *(_DWORD *)(v1 + 52) - v21;
        if ( !(*(_BYTE *)(v1 + 28) & 0xC) && v27 > 0 )
        {
          v28 = *(_DWORD *)(v1 + 20);
          v29 = 0;
          do
          {
            v30 = *(_DWORD *)(v1 + 1096);
            if ( *(_DWORD *)(v30 + 8) == *(_DWORD *)(v30 + 4) )
            {
              if ( *(_BYTE *)(v30 + 12) )
                v31 = v28 + 1;
              else
                v31 = -1;
              *(_DWORD *)(v1 + 20) = v31;
            }
            else
            {
              *(_DWORD *)(v1 + 20) = v28 + 1;
              ++*(_DWORD *)(v30 + 8);
              ***(_WORD ***)(v1 + 1096) = 32;
              **(_DWORD **)(v1 + 1096) += 2;
            }
            v28 = *(_DWORD *)(v1 + 20);
            if ( v28 == -1 )
              break;
            ++v29;
          }
          while ( v29 < v27 );
          v21 = *(_DWORD *)WideCharStr;
          v2 = 0;
        }
        v32 = (int *)(v1 + 20);
        v50 = (_WORD ***)(v1 + 1096);
        sub_10035495(&v55, v21, v1 + 20, *(_DWORD *)(v1 + 8));
        v33 = (_DWORD *)(v1 + 1096);
        if ( (*(_DWORD *)(v1 + 28) >> 3) & 1 )
        {
          if ( !((*(_DWORD *)(v1 + 28) >> 2) & 1) )
          {
            v52 = 0;
            if ( v48 > 0 )
            {
              do
              {
                *(_DWORD *)WideCharStr = *v33;
                v34 = *(_DWORD *)WideCharStr;
                if ( *(_DWORD *)(*(_DWORD *)WideCharStr + 8) == *(_DWORD *)(*(_DWORD *)WideCharStr + 4) )
                {
                  if ( *(_BYTE *)(*(_DWORD *)WideCharStr + 12) )
                    v35 = *v32 + 1;
                  else
                    v35 = -1;
                  *v32 = v35;
                }
                else
                {
                  ++*v32;
                  ++*(_DWORD *)(v34 + 8);
                  **(_WORD **)*v33 = 48;
                  *(_DWORD *)*v33 += 2;
                }
                if ( *v32 == -1 )
                  break;
                ++v52;
              }
              while ( v52 < v48 );
              v2 = 0;
            }
          }
        }
        if ( *(_BYTE *)(v1 + 56) || *(_DWORD *)(v1 + 52) <= 0 )
        {
          sub_10035495(*(_DWORD *)(v1 + 48), *(_DWORD *)(v1 + 52), v1 + 20, *(_DWORD *)(v1 + 8));
        }
        else
        {
          v36 = *(_DWORD *)(v1 + 8);
          v49 = v36;
          if ( !*(_BYTE *)(v36 + 20) )
          {
            sub_100343EC(v36);
            v36 = v49;
          }
          v37 = *(const CHAR **)(v1 + 48);
          v51 = *(_DWORD *)(v1 + 48);
          v53 = 0;
          if ( *(_DWORD *)(v1 + 52) )
          {
            while ( 1 )
            {
              v38 = *(_DWORD *)(v36 + 12);
              v39 = *(_DWORD *)(v1 + 8);
              WideCharStr[0] = 0;
              v55 = sub_1003323A(WideCharStr, v37, *(_DWORD *)(v38 + 4), v39);
              v40 = v1 + 1096;
              if ( v55 <= 0 )
                break;
              v41 = *(_DWORD **)v40;
              v47 = WideCharStr[0];
              if ( *(_DWORD *)(*(_DWORD *)v40 + 8) == *(_DWORD *)(*(_DWORD *)v40 + 4) )
              {
                if ( *((_BYTE *)v41 + 12) )
                  ++*v32;
                else
                  *v32 = -1;
              }
              else
              {
                ++*v32;
                ++v41[2];
                ***(_WORD ***)v40 = v47;
                **(_DWORD **)v40 += 2;
              }
              v37 = (const CHAR *)(v55 + v51);
              v51 += v55;
              v42 = v53++ + 1 == *(_DWORD *)(v1 + 52);
              v36 = v49;
              if ( v42 )
                goto LABEL_102;
            }
            *v32 = -1;
            goto LABEL_102;
          }
        }
        v40 = v1 + 1096;
LABEL_102:
        v43 = *v32;
        if ( *v32 >= 0 && (*(_DWORD *)(v1 + 28) >> 2) & 1 && v48 > 0 )
        {
          do
          {
            v44 = *(_DWORD *)v40;
            if ( *(_DWORD *)(v44 + 8) == *(_DWORD *)(v44 + 4) )
            {
              if ( *(_BYTE *)(v44 + 12) )
                v45 = v43 + 1;
              else
                v45 = -1;
              v40 = v1 + 1096;
              *v32 = v45;
            }
            else
            {
              *v32 = v43 + 1;
              ++*(_DWORD *)(v44 + 8);
              v40 = v1 + 1096;
              ***v50 = 32;
              ++**v50;
            }
            v43 = *v32;
            if ( *v32 == -1 )
              break;
            ++v2;
          }
          while ( v2 < v48 );
        }
        return 1;
      }
      v46 = 43;
    }
    v21 = 1;
    LOWORD(v55) = v46;
    *(_DWORD *)WideCharStr = 1;
    goto LABEL_49;
  }
  return 1;
}
// 10033285: using guessed type int __fastcall sub_10033285(_DWORD, _DWORD);
// 10033BEF: using guessed type int __fastcall sub_10033BEF(_DWORD, _DWORD);
// 10033CE4: using guessed type int __thiscall sub_10033CE4(_DWORD);
// 10033D02: using guessed type int __fastcall sub_10033D02(_DWORD, _DWORD);
// 10033D70: using guessed type _DWORD __stdcall sub_10033D70(_DWORD);
// 10033F82: using guessed type _DWORD __stdcall sub_10033F82(_DWORD);
// 10033FD7: using guessed type _DWORD __stdcall sub_10033FD7(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 100349EB: using guessed type int __fastcall sub_100349EB(_DWORD, _DWORD);
// 10034C57: using guessed type int __fastcall sub_10034C57(_DWORD, _DWORD);
// 10035224: using guessed type int __fastcall sub_10035224(_DWORD, _DWORD);
// 10035495: using guessed type _DWORD __stdcall sub_10035495(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1006A682) --------------------------------------------------------
char __thiscall sub_1006A682(int this)
{
  int v1; // esi
  int v2; // ebx
  unsigned int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  char v8; // al
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // eax
  signed int v21; // ecx
  int v22; // edx
  signed __int16 v23; // di
  int v24; // eax
  char v25; // ah
  char v26; // al
  int v27; // edx
  int v28; // ebx
  int v29; // ecx
  int v30; // edi
  int v31; // ebx
  int *v32; // edi
  _DWORD *v33; // edx
  signed int v34; // ebx
  int v35; // eax
  int v36; // eax
  const CHAR *v37; // ecx
  int v38; // eax
  int v39; // ST0C_4
  int v40; // edx
  _DWORD *v41; // ecx
  bool v42; // zf
  int v43; // ecx
  int v44; // edx
  int v45; // ecx
  signed __int16 v46; // [esp-4h] [ebp-38h]
  WCHAR v47; // [esp+Ch] [ebp-28h]
  int v48; // [esp+10h] [ebp-24h]
  int v49; // [esp+14h] [ebp-20h]
  _WORD ***v50; // [esp+18h] [ebp-1Ch]
  int v51; // [esp+1Ch] [ebp-18h]
  int v52; // [esp+20h] [ebp-14h]
  int v53; // [esp+20h] [ebp-14h]
  WCHAR WideCharStr[2]; // [esp+24h] [ebp-10h]
  int v55; // [esp+28h] [ebp-Ch]
  __int16 v56; // [esp+2Ch] [ebp-8h]

  v1 = this;
  v2 = 0;
  v3 = *(unsigned __int16 *)(this + 46);
  if ( v3 > 0x64 )
  {
    if ( v3 > 0x6F )
    {
      v16 = v3 - 112;
      if ( !v16 )
      {
        v8 = sub_10033B72(this, 88);
        goto LABEL_37;
      }
      v17 = v16 - 3;
      if ( !v17 )
      {
LABEL_35:
        v8 = sub_100334F6(this, 88);
        goto LABEL_37;
      }
      v18 = v17 - 2;
      if ( v18 )
      {
        if ( v18 != 3 )
          return 0;
        v8 = sub_10036084(0);
        goto LABEL_37;
      }
LABEL_28:
      v8 = sub_1003543B(0);
      goto LABEL_37;
    }
    if ( v3 == 111 )
    {
      v8 = sub_10033852(this, 88);
      goto LABEL_37;
    }
    v12 = v3 - 101;
    if ( !v12 )
      goto LABEL_10;
    v13 = v12 - 1;
    if ( !v13 )
      goto LABEL_10;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_10;
    v15 = v14 - 2;
    if ( v15 )
    {
      if ( v15 == 5 )
      {
        v8 = sub_100360C0(this, 88);
        goto LABEL_37;
      }
      return 0;
    }
LABEL_27:
    *(_DWORD *)(this + 28) |= 0x10u;
    goto LABEL_28;
  }
  if ( v3 == 100 )
    goto LABEL_27;
  if ( v3 <= 0x53 )
  {
    if ( v3 != 83 )
    {
      v4 = v3 - 65;
      if ( v4 )
      {
        v5 = v4 - 2;
        if ( v5 )
        {
          v6 = v5 - 2;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              if ( v7 != 1 )
                return 0;
            }
          }
          goto LABEL_10;
        }
        goto LABEL_15;
      }
LABEL_10:
      v8 = sub_1003564D(this, 88);
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  v9 = v3 - 88;
  if ( v9 )
  {
    v10 = v9 - 2;
    if ( !v10 )
    {
      v8 = sub_10033EBF(this, 88);
      goto LABEL_37;
    }
    v11 = v10 - 7;
    if ( !v11 )
      goto LABEL_10;
    if ( v11 == 2 )
    {
LABEL_15:
      v8 = sub_1003616A(0);
      goto LABEL_37;
    }
    return 0;
  }
  v8 = sub_10036084(1);
LABEL_37:
  if ( !v8 )
    return 0;
  if ( !*(_BYTE *)(v1 + 44) )
  {
    v20 = *(_DWORD *)(v1 + 28) >> 4;
    v55 = 0;
    v21 = 0;
    v56 = 0;
    *(_DWORD *)WideCharStr = 0;
    if ( !(v20 & 1) )
      goto LABEL_48;
    if ( (*(_DWORD *)(v1 + 28) >> 6) & 1 )
    {
      v46 = 45;
    }
    else
    {
      if ( !(*(_BYTE *)(v1 + 28) & 1) )
      {
        if ( (*(_DWORD *)(v1 + 28) >> 1) & 1 )
        {
          LOWORD(v55) = 32;
          v21 = 1;
          *(_DWORD *)WideCharStr = 1;
        }
LABEL_48:
        v22 = *(unsigned __int16 *)(v1 + 46);
        v23 = 120;
        if ( (_WORD)v22 != 120 && (_WORD)v22 != 88 || (v24 = *(_DWORD *)(v1 + 28) >> 5, v25 = 1, !(v24 & 1)) )
          v25 = 0;
        if ( v22 == 97 || (v26 = 0, (_WORD)v22 == 65) )
          v26 = 1;
        if ( v25 || v26 )
        {
          *((_WORD *)&v55 + v21) = 48;
          if ( (_WORD)v22 == 88 || (_WORD)v22 == 65 )
            v23 = 88;
          *((_WORD *)&v55 + v21 + 1) = v23;
          v21 += 2;
          *(_DWORD *)WideCharStr = v21;
        }
        v27 = *(_DWORD *)(v1 + 32) - *(_DWORD *)(v1 + 52) - v21;
        v48 = *(_DWORD *)(v1 + 32) - *(_DWORD *)(v1 + 52) - v21;
        if ( !(*(_BYTE *)(v1 + 28) & 0xC) && v27 > 0 )
        {
          v28 = *(_DWORD *)(v1 + 20);
          v29 = 0;
          do
          {
            v30 = *(_DWORD *)(v1 + 1096);
            if ( *(_DWORD *)(v30 + 8) == *(_DWORD *)(v30 + 4) )
            {
              if ( *(_BYTE *)(v30 + 12) )
                v31 = v28 + 1;
              else
                v31 = -1;
              *(_DWORD *)(v1 + 20) = v31;
            }
            else
            {
              *(_DWORD *)(v1 + 20) = v28 + 1;
              ++*(_DWORD *)(v30 + 8);
              ***(_WORD ***)(v1 + 1096) = 32;
              **(_DWORD **)(v1 + 1096) += 2;
            }
            v28 = *(_DWORD *)(v1 + 20);
            if ( v28 == -1 )
              break;
            ++v29;
          }
          while ( v29 < v27 );
          v21 = *(_DWORD *)WideCharStr;
          v2 = 0;
        }
        v32 = (int *)(v1 + 20);
        v50 = (_WORD ***)(v1 + 1096);
        sub_10035495(&v55, v21, v1 + 20, *(_DWORD *)(v1 + 8));
        v33 = (_DWORD *)(v1 + 1096);
        if ( (*(_DWORD *)(v1 + 28) >> 3) & 1 )
        {
          if ( !((*(_DWORD *)(v1 + 28) >> 2) & 1) )
          {
            v52 = 0;
            if ( v48 > 0 )
            {
              do
              {
                *(_DWORD *)WideCharStr = *v33;
                v34 = *(_DWORD *)WideCharStr;
                if ( *(_DWORD *)(*(_DWORD *)WideCharStr + 8) == *(_DWORD *)(*(_DWORD *)WideCharStr + 4) )
                {
                  if ( *(_BYTE *)(*(_DWORD *)WideCharStr + 12) )
                    v35 = *v32 + 1;
                  else
                    v35 = -1;
                  *v32 = v35;
                }
                else
                {
                  ++*v32;
                  ++*(_DWORD *)(v34 + 8);
                  **(_WORD **)*v33 = 48;
                  *(_DWORD *)*v33 += 2;
                }
                if ( *v32 == -1 )
                  break;
                ++v52;
              }
              while ( v52 < v48 );
              v2 = 0;
            }
          }
        }
        if ( *(_BYTE *)(v1 + 56) || *(_DWORD *)(v1 + 52) <= 0 )
        {
          sub_10035495(*(_DWORD *)(v1 + 48), *(_DWORD *)(v1 + 52), v1 + 20, *(_DWORD *)(v1 + 8));
        }
        else
        {
          v36 = *(_DWORD *)(v1 + 8);
          v49 = v36;
          if ( !*(_BYTE *)(v36 + 20) )
          {
            sub_100343EC(v36);
            v36 = v49;
          }
          v37 = *(const CHAR **)(v1 + 48);
          v51 = *(_DWORD *)(v1 + 48);
          v53 = 0;
          if ( *(_DWORD *)(v1 + 52) )
          {
            while ( 1 )
            {
              v38 = *(_DWORD *)(v36 + 12);
              v39 = *(_DWORD *)(v1 + 8);
              WideCharStr[0] = 0;
              v55 = sub_1003323A(WideCharStr, v37, *(_DWORD *)(v38 + 4), v39);
              v40 = v1 + 1096;
              if ( v55 <= 0 )
                break;
              v41 = *(_DWORD **)v40;
              v47 = WideCharStr[0];
              if ( *(_DWORD *)(*(_DWORD *)v40 + 8) == *(_DWORD *)(*(_DWORD *)v40 + 4) )
              {
                if ( *((_BYTE *)v41 + 12) )
                  ++*v32;
                else
                  *v32 = -1;
              }
              else
              {
                ++*v32;
                ++v41[2];
                ***(_WORD ***)v40 = v47;
                **(_DWORD **)v40 += 2;
              }
              v37 = (const CHAR *)(v55 + v51);
              v51 += v55;
              v42 = v53++ + 1 == *(_DWORD *)(v1 + 52);
              v36 = v49;
              if ( v42 )
                goto LABEL_101;
            }
            *v32 = -1;
            goto LABEL_101;
          }
        }
        v40 = v1 + 1096;
LABEL_101:
        v43 = *v32;
        if ( *v32 >= 0 && (*(_DWORD *)(v1 + 28) >> 2) & 1 && v48 > 0 )
        {
          do
          {
            v44 = *(_DWORD *)v40;
            if ( *(_DWORD *)(v44 + 8) == *(_DWORD *)(v44 + 4) )
            {
              if ( *(_BYTE *)(v44 + 12) )
                v45 = v43 + 1;
              else
                v45 = -1;
              v40 = v1 + 1096;
              *v32 = v45;
            }
            else
            {
              *v32 = v43 + 1;
              ++*(_DWORD *)(v44 + 8);
              v40 = v1 + 1096;
              ***v50 = 32;
              ++**v50;
            }
            v43 = *v32;
            if ( *v32 == -1 )
              break;
            ++v2;
          }
          while ( v2 < v48 );
        }
        return 1;
      }
      v46 = 43;
    }
    v21 = 1;
    LOWORD(v55) = v46;
    *(_DWORD *)WideCharStr = 1;
    goto LABEL_48;
  }
  return 1;
}
// 100334F6: using guessed type int __fastcall sub_100334F6(_DWORD, _DWORD);
// 10033852: using guessed type int __fastcall sub_10033852(_DWORD, _DWORD);
// 10033B72: using guessed type int __fastcall sub_10033B72(_DWORD, _DWORD);
// 10033EBF: using guessed type int __fastcall sub_10033EBF(_DWORD, _DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 1003543B: using guessed type _DWORD __stdcall sub_1003543B(_DWORD);
// 10035495: using guessed type _DWORD __stdcall sub_10035495(_DWORD, _DWORD, _DWORD, _DWORD);
// 1003564D: using guessed type int __fastcall sub_1003564D(_DWORD, _DWORD);
// 10036084: using guessed type _DWORD __stdcall sub_10036084(_DWORD);
// 100360C0: using guessed type int __fastcall sub_100360C0(_DWORD, _DWORD);
// 1003616A: using guessed type _DWORD __stdcall sub_1003616A(_DWORD);

//----- (1006AF05) --------------------------------------------------------
signed int __cdecl sub_1006AF05(int a1)
{
  signed int result; // eax
  signed int v2; // [esp-4h] [ebp-4h]

  switch ( a1 )
  {
    case 0:
    case 3:
    case 6:
    case 7:
    case 9:
    case 10:
      v2 = 4;
      goto LABEL_4;
    case 1:
      return 1;
    case 2:
      v2 = 2;
      goto LABEL_4;
    case 4:
    case 5:
    case 11:
      v2 = 8;
LABEL_4:
      result = v2;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

//----- (1006AFE6) --------------------------------------------------------
char __thiscall sub_1006AFE6(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned __int16 **v2; // edx
  unsigned __int16 *v3; // edi
  int v4; // ebx
  char v5; // al
  bool v6; // zf
  unsigned int v7; // eax

  v1 = this;
  v2 = (unsigned __int16 **)this[4];
  this[4] = v2 + 1;
  v3 = *v2;
  if ( !*v2 || (v4 = *((_DWORD *)v3 + 1)) == 0 )
  {
    v7 = 6;
    this[12] = "(null)";
    goto LABEL_6;
  }
  v5 = sub_100350B2(*this, this[1], *((_BYTE *)this + 45), this[10]);
  v1[12] = v4;
  v6 = v5 == 0;
  v7 = *v3;
  if ( v6 )
  {
LABEL_6:
    *((_BYTE *)v1 + 56) = 0;
    goto LABEL_7;
  }
  *((_BYTE *)v1 + 56) = 1;
  v7 >>= 1;
LABEL_7:
  v1[13] = v7;
  return 1;
}
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);

//----- (1006B061) --------------------------------------------------------
char __thiscall sub_1006B061(_DWORD *this)
{
  _DWORD *v1; // esi
  char result; // al
  unsigned __int16 *v3; // edi
  int v4; // ebx
  char v5; // al
  bool v6; // zf
  unsigned int v7; // eax
  unsigned __int16 *v8; // [esp+4h] [ebp-4h]

  v8 = 0;
  v1 = this;
  result = sub_1003371C(&v8);
  if ( result )
  {
    if ( !(unsigned __int8)sub_1003618D(v1) )
      return 1;
    v3 = v8;
    if ( v8 && (v4 = *((_DWORD *)v8 + 1)) != 0 )
    {
      v5 = sub_100350B2(*v1, v1[1], *((_BYTE *)v1 + 45), v1[10]);
      v1[12] = v4;
      v6 = v5 == 0;
      v7 = *v3;
      if ( !v6 )
      {
        *((_BYTE *)v1 + 56) = 1;
        v7 >>= 1;
LABEL_9:
        v1[13] = v7;
        return 1;
      }
    }
    else
    {
      v7 = 6;
      v1[12] = "(null)";
    }
    *((_BYTE *)v1 + 56) = 0;
    goto LABEL_9;
  }
  return result;
}
// 1003371C: using guessed type _DWORD __stdcall sub_1003371C(_DWORD);
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);
// 1003618D: using guessed type int __thiscall sub_1003618D(_DWORD);

//----- (1006B0F9) --------------------------------------------------------
char __thiscall sub_1006B0F9(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned __int16 **v2; // edx
  unsigned __int16 *v3; // edi
  int v4; // ebx
  char v5; // al
  bool v6; // zf
  unsigned int v7; // eax

  v1 = this;
  v2 = (unsigned __int16 **)this[4];
  this[4] = v2 + 1;
  v3 = *v2;
  if ( !*v2 || (v4 = *((_DWORD *)v3 + 1)) == 0 )
  {
    v7 = 6;
    this[12] = "(null)";
    goto LABEL_6;
  }
  v5 = sub_100350B2(*this, this[1], *((_BYTE *)this + 45), this[10]);
  v1[12] = v4;
  v6 = v5 == 0;
  v7 = *v3;
  if ( v6 )
  {
LABEL_6:
    *((_BYTE *)v1 + 56) = 0;
    goto LABEL_7;
  }
  *((_BYTE *)v1 + 56) = 1;
  v7 >>= 1;
LABEL_7:
  v1[13] = v7;
  return 1;
}
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);

//----- (1006B174) --------------------------------------------------------
char __thiscall sub_1006B174(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned __int16 **v2; // edx
  unsigned __int16 *v3; // edi
  int v4; // ebx
  char v5; // al
  bool v6; // zf
  unsigned int v7; // eax

  v1 = this;
  v2 = (unsigned __int16 **)this[4];
  this[4] = v2 + 1;
  v3 = *v2;
  if ( !*v2 || (v4 = *((_DWORD *)v3 + 1)) == 0 )
  {
    v7 = 6;
    this[12] = "(null)";
    goto LABEL_6;
  }
  v5 = sub_100350B2(*this, this[1], *((_BYTE *)this + 45), this[10]);
  v1[12] = v4;
  v6 = v5 == 0;
  v7 = *v3;
  if ( v6 )
  {
LABEL_6:
    *((_BYTE *)v1 + 56) = 0;
    goto LABEL_7;
  }
  *((_BYTE *)v1 + 56) = 1;
  v7 >>= 1;
LABEL_7:
  v1[13] = v7;
  return 1;
}
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);

//----- (1006B1EF) --------------------------------------------------------
char __thiscall sub_1006B1EF(_DWORD *this)
{
  _DWORD *v1; // esi
  char result; // al
  unsigned __int16 *v3; // edi
  int v4; // ebx
  char v5; // al
  bool v6; // zf
  unsigned int v7; // eax
  unsigned __int16 *v8; // [esp+4h] [ebp-4h]

  v8 = 0;
  v1 = this;
  result = sub_10035837(&v8);
  if ( result )
  {
    if ( !(unsigned __int8)sub_1003562F(v1) )
      return 1;
    v3 = v8;
    if ( v8 && (v4 = *((_DWORD *)v8 + 1)) != 0 )
    {
      v5 = sub_100350B2(*v1, v1[1], *((_BYTE *)v1 + 45), v1[10]);
      v1[12] = v4;
      v6 = v5 == 0;
      v7 = *v3;
      if ( !v6 )
      {
        *((_BYTE *)v1 + 56) = 1;
        v7 >>= 1;
LABEL_9:
        v1[13] = v7;
        return 1;
      }
    }
    else
    {
      v7 = 6;
      v1[12] = "(null)";
    }
    *((_BYTE *)v1 + 56) = 0;
    goto LABEL_9;
  }
  return result;
}
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);
// 1003562F: using guessed type int __thiscall sub_1003562F(_DWORD);
// 10035837: using guessed type _DWORD __stdcall sub_10035837(_DWORD);

//----- (1006B287) --------------------------------------------------------
char __thiscall sub_1006B287(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned __int16 **v2; // edx
  unsigned __int16 *v3; // edi
  int v4; // ebx
  char v5; // al
  bool v6; // zf
  unsigned int v7; // eax

  v1 = this;
  v2 = (unsigned __int16 **)this[4];
  this[4] = v2 + 1;
  v3 = *v2;
  if ( !*v2 || (v4 = *((_DWORD *)v3 + 1)) == 0 )
  {
    v7 = 6;
    this[12] = "(null)";
    goto LABEL_6;
  }
  v5 = sub_100350B2(*this, this[1], *((_BYTE *)this + 45), this[10]);
  v1[12] = v4;
  v6 = v5 == 0;
  v7 = *v3;
  if ( v6 )
  {
LABEL_6:
    *((_BYTE *)v1 + 56) = 0;
    goto LABEL_7;
  }
  *((_BYTE *)v1 + 56) = 1;
  v7 >>= 1;
LABEL_7:
  v1[13] = v7;
  return 1;
}
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);

//----- (1006B302) --------------------------------------------------------
char __thiscall sub_1006B302(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned __int16 **v2; // edx
  unsigned __int16 *v3; // edi
  int v4; // ebx
  char v5; // al
  bool v6; // zf
  unsigned int v7; // eax

  v1 = this;
  v2 = (unsigned __int16 **)this[4];
  this[4] = v2 + 1;
  v3 = *v2;
  if ( !*v2 || (v4 = *((_DWORD *)v3 + 1)) == 0 )
  {
    v7 = 6;
    this[12] = "(null)";
    goto LABEL_6;
  }
  v5 = sub_10033519(*this, this[1], *((_WORD *)this + 23), this[10]);
  v1[12] = v4;
  v6 = v5 == 0;
  v7 = *v3;
  if ( v6 )
  {
LABEL_6:
    *((_BYTE *)v1 + 56) = 0;
    goto LABEL_7;
  }
  *((_BYTE *)v1 + 56) = 1;
  v7 >>= 1;
LABEL_7:
  v1[13] = v7;
  return 1;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);

//----- (1006B37D) --------------------------------------------------------
char __thiscall sub_1006B37D(_DWORD *this)
{
  _DWORD *v1; // esi
  char result; // al
  unsigned __int16 *v3; // edi
  int v4; // ebx
  char v5; // al
  bool v6; // zf
  unsigned int v7; // eax
  unsigned __int16 *v8; // [esp+4h] [ebp-4h]

  v8 = 0;
  v1 = this;
  result = sub_10035ED1(&v8);
  if ( result )
  {
    if ( !(unsigned __int8)sub_10034DC9(v1) )
      return 1;
    v3 = v8;
    if ( v8 && (v4 = *((_DWORD *)v8 + 1)) != 0 )
    {
      v5 = sub_10033519(*v1, v1[1], *((_WORD *)v1 + 23), v1[10]);
      v1[12] = v4;
      v6 = v5 == 0;
      v7 = *v3;
      if ( !v6 )
      {
        *((_BYTE *)v1 + 56) = 1;
        v7 >>= 1;
LABEL_9:
        v1[13] = v7;
        return 1;
      }
    }
    else
    {
      v7 = 6;
      v1[12] = "(null)";
    }
    *((_BYTE *)v1 + 56) = 0;
    goto LABEL_9;
  }
  return result;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);
// 10034DC9: using guessed type int __thiscall sub_10034DC9(_DWORD);
// 10035ED1: using guessed type _DWORD __stdcall sub_10035ED1(_DWORD);

//----- (1006B415) --------------------------------------------------------
char __thiscall sub_1006B415(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned __int16 **v2; // edx
  unsigned __int16 *v3; // edi
  int v4; // ebx
  char v5; // al
  bool v6; // zf
  unsigned int v7; // eax

  v1 = this;
  v2 = (unsigned __int16 **)this[4];
  this[4] = v2 + 1;
  v3 = *v2;
  if ( !*v2 || (v4 = *((_DWORD *)v3 + 1)) == 0 )
  {
    v7 = 6;
    this[12] = "(null)";
    goto LABEL_6;
  }
  v5 = sub_10033519(*this, this[1], *((_WORD *)this + 23), this[10]);
  v1[12] = v4;
  v6 = v5 == 0;
  v7 = *v3;
  if ( v6 )
  {
LABEL_6:
    *((_BYTE *)v1 + 56) = 0;
    goto LABEL_7;
  }
  *((_BYTE *)v1 + 56) = 1;
  v7 >>= 1;
LABEL_7:
  v1[13] = v7;
  return 1;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);

//----- (1006B490) --------------------------------------------------------
char __thiscall sub_1006B490(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned __int16 **v2; // edx
  unsigned __int16 *v3; // edi
  int v4; // ebx
  char v5; // al
  bool v6; // zf
  unsigned int v7; // eax

  v1 = this;
  v2 = (unsigned __int16 **)this[4];
  this[4] = v2 + 1;
  v3 = *v2;
  if ( !*v2 || (v4 = *((_DWORD *)v3 + 1)) == 0 )
  {
    v7 = 6;
    this[12] = "(null)";
    goto LABEL_6;
  }
  v5 = sub_10033519(*this, this[1], *((_WORD *)this + 23), this[10]);
  v1[12] = v4;
  v6 = v5 == 0;
  v7 = *v3;
  if ( v6 )
  {
LABEL_6:
    *((_BYTE *)v1 + 56) = 0;
    goto LABEL_7;
  }
  *((_BYTE *)v1 + 56) = 1;
  v7 >>= 1;
LABEL_7:
  v1[13] = v7;
  return 1;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);

//----- (1006B50B) --------------------------------------------------------
char __thiscall sub_1006B50B(_DWORD *this)
{
  _DWORD *v1; // esi
  char result; // al
  unsigned __int16 *v3; // edi
  int v4; // ebx
  char v5; // al
  bool v6; // zf
  unsigned int v7; // eax
  unsigned __int16 *v8; // [esp+4h] [ebp-4h]

  v8 = 0;
  v1 = this;
  result = sub_100350CB(&v8);
  if ( result )
  {
    if ( !(unsigned __int8)sub_10035ABC(v1) )
      return 1;
    v3 = v8;
    if ( v8 && (v4 = *((_DWORD *)v8 + 1)) != 0 )
    {
      v5 = sub_10033519(*v1, v1[1], *((_WORD *)v1 + 23), v1[10]);
      v1[12] = v4;
      v6 = v5 == 0;
      v7 = *v3;
      if ( !v6 )
      {
        *((_BYTE *)v1 + 56) = 1;
        v7 >>= 1;
LABEL_9:
        v1[13] = v7;
        return 1;
      }
    }
    else
    {
      v7 = 6;
      v1[12] = "(null)";
    }
    *((_BYTE *)v1 + 56) = 0;
    goto LABEL_9;
  }
  return result;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);
// 100350CB: using guessed type _DWORD __stdcall sub_100350CB(_DWORD);
// 10035ABC: using guessed type int __thiscall sub_10035ABC(_DWORD);

//----- (1006B5A3) --------------------------------------------------------
char __thiscall sub_1006B5A3(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned __int16 **v2; // edx
  unsigned __int16 *v3; // edi
  int v4; // ebx
  char v5; // al
  bool v6; // zf
  unsigned int v7; // eax

  v1 = this;
  v2 = (unsigned __int16 **)this[4];
  this[4] = v2 + 1;
  v3 = *v2;
  if ( !*v2 || (v4 = *((_DWORD *)v3 + 1)) == 0 )
  {
    v7 = 6;
    this[12] = "(null)";
    goto LABEL_6;
  }
  v5 = sub_10033519(*this, this[1], *((_WORD *)this + 23), this[10]);
  v1[12] = v4;
  v6 = v5 == 0;
  v7 = *v3;
  if ( v6 )
  {
LABEL_6:
    *((_BYTE *)v1 + 56) = 0;
    goto LABEL_7;
  }
  *((_BYTE *)v1 + 56) = 1;
  v7 >>= 1;
LABEL_7:
  v1[13] = v7;
  return 1;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);

//----- (1006B61E) --------------------------------------------------------
char __thiscall sub_1006B61E(int this)
{
  int v1; // esi
  signed int v2; // eax
  char v3; // al
  char v4; // cl
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  char v14; // al
  int v15; // edi
  const char *v16; // edx
  char v17; // al
  char result; // al
  signed int v19; // [esp-4h] [ebp-20h]
  int v20; // [esp+8h] [ebp-14h]
  int v21; // [esp+Ch] [ebp-10h]
  int v22; // [esp+10h] [ebp-Ch]
  int v23; // [esp+14h] [ebp-8h]
  int v24; // [esp+18h] [ebp-4h]

  v1 = this;
  *(_DWORD *)(v1 + 28) |= 0x10u;
  v2 = *(_DWORD *)(this + 36);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      v4 = *(_BYTE *)(this + 45);
      if ( v4 == 103 || v4 == 71 )
      {
        *(_DWORD *)(v1 + 36) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v3 = *(_BYTE *)(this + 45);
    if ( v3 == 97 || v3 == 65 )
      v19 = 13;
    else
      v19 = 6;
    v2 = v19;
    *(_DWORD *)(this + 36) = v19;
  }
  v5 = v1 + 60;
  if ( (unsigned __int8)sub_10036089(v2 + 349, *(_DWORD *)(v1 + 8)) )
  {
    v6 = *(_DWORD *)(v1 + 36);
  }
  else
  {
    v6 = sub_10035AD0(v1 + 60) - 349;
    *(_DWORD *)(v1 + 36) = v6;
  }
  v7 = *(_DWORD *)(v1 + 1088);
  if ( !v7 )
    v7 = v1 + 60;
  v20 = 0;
  v21 = 0;
  *(_DWORD *)(v1 + 48) = v7;
  v8 = *(int **)(v1 + 16);
  *(_DWORD *)(v1 + 16) = v8 + 2;
  v9 = *v8;
  v10 = v8[1];
  v20 = v9;
  v11 = *(char *)(v1 + 45);
  v21 = v10;
  v24 = v11;
  v23 = sub_10035AD0(v1 + 60);
  v22 = sub_1003435B(v1 + 60);
  v12 = sub_10035AD0(v1 + 60);
  if ( *(_DWORD *)(v1 + 1088) )
    v5 = *(_DWORD *)(v1 + 1088);
  sub_10034D1F(&v20, v5, v12, v22, v23, v24, v6, *(_DWORD *)v1, *(_DWORD *)(v1 + 4), 1, *(_DWORD *)(v1 + 8));
  if ( (*(_DWORD *)(v1 + 28) >> 5) & 1 && !*(_DWORD *)(v1 + 36) )
  {
    v13 = *(_DWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v13 + 20) )
      sub_100343EC(*(_DWORD *)(v1 + 8));
    sub_10033AEB(*(_DWORD *)(v1 + 48), v13 + 12);
  }
  v14 = *(_BYTE *)(v1 + 45);
  if ( (v14 == 103 || v14 == 71) && !((*(_DWORD *)(v1 + 28) >> 5) & 1) )
  {
    v15 = *(_DWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v15 + 20) )
      sub_100343EC(*(_DWORD *)(v1 + 8));
    sub_10035BCF(*(_DWORD *)(v1 + 48), v15 + 12);
  }
  v16 = *(const char **)(v1 + 48);
  v17 = *v16;
  if ( *v16 == 45 )
  {
    *(_DWORD *)(v1 + 28) |= 0x40u;
    *(_DWORD *)(v1 + 48) = ++v16;
    v17 = *v16;
  }
  if ( v17 == 105 || v17 == 73 || v17 == 110 || v17 == 78 )
  {
    *(_DWORD *)(v1 + 28) &= 0xFFFFFFF7;
    *(_BYTE *)(v1 + 45) = 115;
  }
  result = 1;
  *(_DWORD *)(v1 + 52) = strlen(v16);
  return result;
}
// 10033AEB: using guessed type _DWORD __cdecl sub_10033AEB(_DWORD, _DWORD);
// 1003435B: using guessed type int __thiscall sub_1003435B(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034D1F: using guessed type _DWORD __cdecl sub_10034D1F(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);
// 10035BCF: using guessed type _DWORD __cdecl sub_10035BCF(_DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1006B813) --------------------------------------------------------
char __thiscall sub_1006B813(_DWORD *this)
{
  _DWORD *v1; // esi
  signed int v3; // eax
  char v4; // al
  char v5; // cl
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  char v11; // al
  int v12; // edi
  const char *v13; // edx
  char v14; // al
  signed int v15; // [esp-4h] [ebp-1Ch]
  int v16; // [esp+8h] [ebp-10h]
  int v17; // [esp+Ch] [ebp-Ch]
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v1 = this;
  this[7] |= 0x10u;
  if ( (unsigned __int8)sub_10035562() )
  {
    if ( !(unsigned __int8)sub_1003618D(v1) )
      return 1;
    v3 = v1[9];
    if ( v3 >= 0 )
    {
      if ( !v3 )
      {
        v5 = *((_BYTE *)v1 + 45);
        if ( v5 == 103 || v5 == 71 )
        {
          v1[9] = 1;
          v3 = 1;
        }
      }
    }
    else
    {
      v4 = *((_BYTE *)v1 + 45);
      if ( v4 == 97 || v4 == 65 )
        v15 = 13;
      else
        v15 = 6;
      v3 = v15;
      v1[9] = v15;
    }
    v6 = (int)(v1 + 15);
    if ( !(unsigned __int8)sub_10036089(v3 + 349, v1[2]) )
      v1[9] = sub_10035AD0(v1 + 15) - 349;
    v7 = v1[272];
    if ( !v7 )
      v7 = (int)(v1 + 15);
    v16 = 0;
    v17 = 0;
    v1[12] = v7;
    if ( (unsigned __int8)sub_10033334(&v16) )
    {
      v8 = *((char *)v1 + 45);
      v19 = sub_10035AD0(v1 + 15);
      v18 = sub_1003435B(v1 + 15);
      v9 = sub_10035AD0(v1 + 15);
      if ( v1[272] )
        v6 = v1[272];
      sub_10034D1F(&v16, v6, v9, v18, v19, v8, v1[9], *v1, v1[1], 1, v1[2]);
      if ( (v1[7] >> 5) & 1 && !v1[9] )
      {
        v10 = v1[2];
        if ( !*(_BYTE *)(v10 + 20) )
          sub_100343EC(v1[2]);
        sub_10033AEB(v1[12], v10 + 12);
      }
      v11 = *((_BYTE *)v1 + 45);
      if ( (v11 == 103 || v11 == 71) && !((v1[7] >> 5) & 1) )
      {
        v12 = v1[2];
        if ( !*(_BYTE *)(v12 + 20) )
          sub_100343EC(v1[2]);
        sub_10035BCF(v1[12], v12 + 12);
      }
      v13 = (const char *)v1[12];
      v14 = *v13;
      if ( *v13 == 45 )
      {
        v1[7] |= 0x40u;
        v1[12] = ++v13;
        v14 = *v13;
      }
      if ( v14 == 105 || v14 == 73 || v14 == 110 || v14 == 78 )
      {
        v1[7] &= 0xFFFFFFF7;
        *((_BYTE *)v1 + 45) = 115;
      }
      v1[13] = strlen(v13);
      return 1;
    }
  }
  return 0;
}
// 10033334: using guessed type _DWORD __stdcall sub_10033334(_DWORD);
// 10033AEB: using guessed type _DWORD __cdecl sub_10033AEB(_DWORD, _DWORD);
// 1003435B: using guessed type int __thiscall sub_1003435B(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034D1F: using guessed type _DWORD __cdecl sub_10034D1F(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035562: using guessed type int sub_10035562(void);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);
// 10035BCF: using guessed type _DWORD __cdecl sub_10035BCF(_DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);
// 1003618D: using guessed type int __thiscall sub_1003618D(_DWORD);

//----- (1006BA2C) --------------------------------------------------------
char __thiscall sub_1006BA2C(int this)
{
  int v1; // esi
  signed int v2; // eax
  char v3; // al
  char v4; // cl
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  char v14; // al
  int v15; // edi
  const char *v16; // edx
  char v17; // al
  char result; // al
  signed int v19; // [esp-4h] [ebp-20h]
  int v20; // [esp+8h] [ebp-14h]
  int v21; // [esp+Ch] [ebp-10h]
  int v22; // [esp+10h] [ebp-Ch]
  int v23; // [esp+14h] [ebp-8h]
  int v24; // [esp+18h] [ebp-4h]

  v1 = this;
  *(_DWORD *)(v1 + 28) |= 0x10u;
  v2 = *(_DWORD *)(this + 36);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      v4 = *(_BYTE *)(this + 45);
      if ( v4 == 103 || v4 == 71 )
      {
        *(_DWORD *)(v1 + 36) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v3 = *(_BYTE *)(this + 45);
    if ( v3 == 97 || v3 == 65 )
      v19 = 13;
    else
      v19 = 6;
    v2 = v19;
    *(_DWORD *)(this + 36) = v19;
  }
  v5 = v1 + 60;
  if ( (unsigned __int8)sub_10036089(v2 + 349, *(_DWORD *)(v1 + 8)) )
  {
    v6 = *(_DWORD *)(v1 + 36);
  }
  else
  {
    v6 = sub_10035AD0(v1 + 60) - 349;
    *(_DWORD *)(v1 + 36) = v6;
  }
  v7 = *(_DWORD *)(v1 + 1088);
  if ( !v7 )
    v7 = v1 + 60;
  v20 = 0;
  v21 = 0;
  *(_DWORD *)(v1 + 48) = v7;
  v8 = *(int **)(v1 + 16);
  *(_DWORD *)(v1 + 16) = v8 + 2;
  v9 = *v8;
  v10 = v8[1];
  v20 = v9;
  v11 = *(char *)(v1 + 45);
  v21 = v10;
  v24 = v11;
  v23 = sub_10035AD0(v1 + 60);
  v22 = sub_1003435B(v1 + 60);
  v12 = sub_10035AD0(v1 + 60);
  if ( *(_DWORD *)(v1 + 1088) )
    v5 = *(_DWORD *)(v1 + 1088);
  sub_10034D1F(&v20, v5, v12, v22, v23, v24, v6, *(_DWORD *)v1, *(_DWORD *)(v1 + 4), 1, *(_DWORD *)(v1 + 8));
  if ( (*(_DWORD *)(v1 + 28) >> 5) & 1 && !*(_DWORD *)(v1 + 36) )
  {
    v13 = *(_DWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v13 + 20) )
      sub_100343EC(*(_DWORD *)(v1 + 8));
    sub_10033AEB(*(_DWORD *)(v1 + 48), v13 + 12);
  }
  v14 = *(_BYTE *)(v1 + 45);
  if ( (v14 == 103 || v14 == 71) && !((*(_DWORD *)(v1 + 28) >> 5) & 1) )
  {
    v15 = *(_DWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v15 + 20) )
      sub_100343EC(*(_DWORD *)(v1 + 8));
    sub_10035BCF(*(_DWORD *)(v1 + 48), v15 + 12);
  }
  v16 = *(const char **)(v1 + 48);
  v17 = *v16;
  if ( *v16 == 45 )
  {
    *(_DWORD *)(v1 + 28) |= 0x40u;
    *(_DWORD *)(v1 + 48) = ++v16;
    v17 = *v16;
  }
  if ( v17 == 105 || v17 == 73 || v17 == 110 || v17 == 78 )
  {
    *(_DWORD *)(v1 + 28) &= 0xFFFFFFF7;
    *(_BYTE *)(v1 + 45) = 115;
  }
  result = 1;
  *(_DWORD *)(v1 + 52) = strlen(v16);
  return result;
}
// 10033AEB: using guessed type _DWORD __cdecl sub_10033AEB(_DWORD, _DWORD);
// 1003435B: using guessed type int __thiscall sub_1003435B(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034D1F: using guessed type _DWORD __cdecl sub_10034D1F(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);
// 10035BCF: using guessed type _DWORD __cdecl sub_10035BCF(_DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1006BC21) --------------------------------------------------------
char __thiscall sub_1006BC21(int this)
{
  int v1; // esi
  signed int v2; // eax
  char v3; // al
  char v4; // cl
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  char v14; // al
  int v15; // edi
  const char *v16; // edx
  char v17; // al
  char result; // al
  signed int v19; // [esp-4h] [ebp-20h]
  int v20; // [esp+8h] [ebp-14h]
  int v21; // [esp+Ch] [ebp-10h]
  int v22; // [esp+10h] [ebp-Ch]
  int v23; // [esp+14h] [ebp-8h]
  int v24; // [esp+18h] [ebp-4h]

  v1 = this;
  *(_DWORD *)(v1 + 28) |= 0x10u;
  v2 = *(_DWORD *)(this + 36);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      v4 = *(_BYTE *)(this + 45);
      if ( v4 == 103 || v4 == 71 )
      {
        *(_DWORD *)(v1 + 36) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v3 = *(_BYTE *)(this + 45);
    if ( v3 == 97 || v3 == 65 )
      v19 = 13;
    else
      v19 = 6;
    v2 = v19;
    *(_DWORD *)(this + 36) = v19;
  }
  v5 = v1 + 60;
  if ( (unsigned __int8)sub_10036089(v2 + 349, *(_DWORD *)(v1 + 8)) )
  {
    v6 = *(_DWORD *)(v1 + 36);
  }
  else
  {
    v6 = sub_10035AD0(v1 + 60) - 349;
    *(_DWORD *)(v1 + 36) = v6;
  }
  v7 = *(_DWORD *)(v1 + 1088);
  if ( !v7 )
    v7 = v1 + 60;
  v20 = 0;
  v21 = 0;
  *(_DWORD *)(v1 + 48) = v7;
  v8 = *(int **)(v1 + 16);
  *(_DWORD *)(v1 + 16) = v8 + 2;
  v9 = *v8;
  v10 = v8[1];
  v20 = v9;
  v11 = *(char *)(v1 + 45);
  v21 = v10;
  v24 = v11;
  v23 = sub_10035AD0(v1 + 60);
  v22 = sub_1003435B(v1 + 60);
  v12 = sub_10035AD0(v1 + 60);
  if ( *(_DWORD *)(v1 + 1088) )
    v5 = *(_DWORD *)(v1 + 1088);
  sub_10034D1F(&v20, v5, v12, v22, v23, v24, v6, *(_DWORD *)v1, *(_DWORD *)(v1 + 4), 1, *(_DWORD *)(v1 + 8));
  if ( (*(_DWORD *)(v1 + 28) >> 5) & 1 && !*(_DWORD *)(v1 + 36) )
  {
    v13 = *(_DWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v13 + 20) )
      sub_100343EC(*(_DWORD *)(v1 + 8));
    sub_10033AEB(*(_DWORD *)(v1 + 48), v13 + 12);
  }
  v14 = *(_BYTE *)(v1 + 45);
  if ( (v14 == 103 || v14 == 71) && !((*(_DWORD *)(v1 + 28) >> 5) & 1) )
  {
    v15 = *(_DWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v15 + 20) )
      sub_100343EC(*(_DWORD *)(v1 + 8));
    sub_10035BCF(*(_DWORD *)(v1 + 48), v15 + 12);
  }
  v16 = *(const char **)(v1 + 48);
  v17 = *v16;
  if ( *v16 == 45 )
  {
    *(_DWORD *)(v1 + 28) |= 0x40u;
    *(_DWORD *)(v1 + 48) = ++v16;
    v17 = *v16;
  }
  if ( v17 == 105 || v17 == 73 || v17 == 110 || v17 == 78 )
  {
    *(_DWORD *)(v1 + 28) &= 0xFFFFFFF7;
    *(_BYTE *)(v1 + 45) = 115;
  }
  result = 1;
  *(_DWORD *)(v1 + 52) = strlen(v16);
  return result;
}
// 10033AEB: using guessed type _DWORD __cdecl sub_10033AEB(_DWORD, _DWORD);
// 1003435B: using guessed type int __thiscall sub_1003435B(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034D1F: using guessed type _DWORD __cdecl sub_10034D1F(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);
// 10035BCF: using guessed type _DWORD __cdecl sub_10035BCF(_DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1006BE16) --------------------------------------------------------
char __thiscall sub_1006BE16(_DWORD *this)
{
  _DWORD *v1; // esi
  signed int v3; // eax
  char v4; // al
  char v5; // cl
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  char v11; // al
  int v12; // edi
  const char *v13; // edx
  char v14; // al
  signed int v15; // [esp-4h] [ebp-1Ch]
  int v16; // [esp+8h] [ebp-10h]
  int v17; // [esp+Ch] [ebp-Ch]
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v1 = this;
  this[7] |= 0x10u;
  if ( (unsigned __int8)sub_1003301E() )
  {
    if ( !(unsigned __int8)sub_1003562F(v1) )
      return 1;
    v3 = v1[9];
    if ( v3 >= 0 )
    {
      if ( !v3 )
      {
        v5 = *((_BYTE *)v1 + 45);
        if ( v5 == 103 || v5 == 71 )
        {
          v1[9] = 1;
          v3 = 1;
        }
      }
    }
    else
    {
      v4 = *((_BYTE *)v1 + 45);
      if ( v4 == 97 || v4 == 65 )
        v15 = 13;
      else
        v15 = 6;
      v3 = v15;
      v1[9] = v15;
    }
    v6 = (int)(v1 + 15);
    if ( !(unsigned __int8)sub_10036089(v3 + 349, v1[2]) )
      v1[9] = sub_10035AD0(v1 + 15) - 349;
    v7 = v1[272];
    if ( !v7 )
      v7 = (int)(v1 + 15);
    v16 = 0;
    v17 = 0;
    v1[12] = v7;
    if ( (unsigned __int8)sub_1003429D(&v16) )
    {
      v8 = *((char *)v1 + 45);
      v19 = sub_10035AD0(v1 + 15);
      v18 = sub_1003435B(v1 + 15);
      v9 = sub_10035AD0(v1 + 15);
      if ( v1[272] )
        v6 = v1[272];
      sub_10034D1F(&v16, v6, v9, v18, v19, v8, v1[9], *v1, v1[1], 1, v1[2]);
      if ( (v1[7] >> 5) & 1 && !v1[9] )
      {
        v10 = v1[2];
        if ( !*(_BYTE *)(v10 + 20) )
          sub_100343EC(v1[2]);
        sub_10033AEB(v1[12], v10 + 12);
      }
      v11 = *((_BYTE *)v1 + 45);
      if ( (v11 == 103 || v11 == 71) && !((v1[7] >> 5) & 1) )
      {
        v12 = v1[2];
        if ( !*(_BYTE *)(v12 + 20) )
          sub_100343EC(v1[2]);
        sub_10035BCF(v1[12], v12 + 12);
      }
      v13 = (const char *)v1[12];
      v14 = *v13;
      if ( *v13 == 45 )
      {
        v1[7] |= 0x40u;
        v1[12] = ++v13;
        v14 = *v13;
      }
      if ( v14 == 105 || v14 == 73 || v14 == 110 || v14 == 78 )
      {
        v1[7] &= 0xFFFFFFF7;
        *((_BYTE *)v1 + 45) = 115;
      }
      v1[13] = strlen(v13);
      return 1;
    }
  }
  return 0;
}
// 1003301E: using guessed type int sub_1003301E(void);
// 10033AEB: using guessed type _DWORD __cdecl sub_10033AEB(_DWORD, _DWORD);
// 1003429D: using guessed type _DWORD __stdcall sub_1003429D(_DWORD);
// 1003435B: using guessed type int __thiscall sub_1003435B(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034D1F: using guessed type _DWORD __cdecl sub_10034D1F(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 1003562F: using guessed type int __thiscall sub_1003562F(_DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);
// 10035BCF: using guessed type _DWORD __cdecl sub_10035BCF(_DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1006C02F) --------------------------------------------------------
char __thiscall sub_1006C02F(int this)
{
  int v1; // esi
  signed int v2; // eax
  char v3; // al
  char v4; // cl
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  char v14; // al
  int v15; // edi
  const char *v16; // edx
  char v17; // al
  char result; // al
  signed int v19; // [esp-4h] [ebp-20h]
  int v20; // [esp+8h] [ebp-14h]
  int v21; // [esp+Ch] [ebp-10h]
  int v22; // [esp+10h] [ebp-Ch]
  int v23; // [esp+14h] [ebp-8h]
  int v24; // [esp+18h] [ebp-4h]

  v1 = this;
  *(_DWORD *)(v1 + 28) |= 0x10u;
  v2 = *(_DWORD *)(this + 36);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      v4 = *(_BYTE *)(this + 45);
      if ( v4 == 103 || v4 == 71 )
      {
        *(_DWORD *)(v1 + 36) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v3 = *(_BYTE *)(this + 45);
    if ( v3 == 97 || v3 == 65 )
      v19 = 13;
    else
      v19 = 6;
    v2 = v19;
    *(_DWORD *)(this + 36) = v19;
  }
  v5 = v1 + 60;
  if ( (unsigned __int8)sub_10036089(v2 + 349, *(_DWORD *)(v1 + 8)) )
  {
    v6 = *(_DWORD *)(v1 + 36);
  }
  else
  {
    v6 = sub_10035AD0(v1 + 60) - 349;
    *(_DWORD *)(v1 + 36) = v6;
  }
  v7 = *(_DWORD *)(v1 + 1088);
  if ( !v7 )
    v7 = v1 + 60;
  v20 = 0;
  v21 = 0;
  *(_DWORD *)(v1 + 48) = v7;
  v8 = *(int **)(v1 + 16);
  *(_DWORD *)(v1 + 16) = v8 + 2;
  v9 = *v8;
  v10 = v8[1];
  v20 = v9;
  v11 = *(char *)(v1 + 45);
  v21 = v10;
  v24 = v11;
  v23 = sub_10035AD0(v1 + 60);
  v22 = sub_1003435B(v1 + 60);
  v12 = sub_10035AD0(v1 + 60);
  if ( *(_DWORD *)(v1 + 1088) )
    v5 = *(_DWORD *)(v1 + 1088);
  sub_10034D1F(&v20, v5, v12, v22, v23, v24, v6, *(_DWORD *)v1, *(_DWORD *)(v1 + 4), 1, *(_DWORD *)(v1 + 8));
  if ( (*(_DWORD *)(v1 + 28) >> 5) & 1 && !*(_DWORD *)(v1 + 36) )
  {
    v13 = *(_DWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v13 + 20) )
      sub_100343EC(*(_DWORD *)(v1 + 8));
    sub_10033AEB(*(_DWORD *)(v1 + 48), v13 + 12);
  }
  v14 = *(_BYTE *)(v1 + 45);
  if ( (v14 == 103 || v14 == 71) && !((*(_DWORD *)(v1 + 28) >> 5) & 1) )
  {
    v15 = *(_DWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v15 + 20) )
      sub_100343EC(*(_DWORD *)(v1 + 8));
    sub_10035BCF(*(_DWORD *)(v1 + 48), v15 + 12);
  }
  v16 = *(const char **)(v1 + 48);
  v17 = *v16;
  if ( *v16 == 45 )
  {
    *(_DWORD *)(v1 + 28) |= 0x40u;
    *(_DWORD *)(v1 + 48) = ++v16;
    v17 = *v16;
  }
  if ( v17 == 105 || v17 == 73 || v17 == 110 || v17 == 78 )
  {
    *(_DWORD *)(v1 + 28) &= 0xFFFFFFF7;
    *(_BYTE *)(v1 + 45) = 115;
  }
  result = 1;
  *(_DWORD *)(v1 + 52) = strlen(v16);
  return result;
}
// 10033AEB: using guessed type _DWORD __cdecl sub_10033AEB(_DWORD, _DWORD);
// 1003435B: using guessed type int __thiscall sub_1003435B(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034D1F: using guessed type _DWORD __cdecl sub_10034D1F(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);
// 10035BCF: using guessed type _DWORD __cdecl sub_10035BCF(_DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1006C224) --------------------------------------------------------
char __thiscall sub_1006C224(int this)
{
  int v1; // esi
  signed int v2; // eax
  int v3; // eax
  __int16 v4; // cx
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  __int16 v14; // ax
  int v15; // edi
  const char *v16; // edx
  char v17; // al
  char result; // al
  signed int v19; // [esp-4h] [ebp-24h]
  int v20; // [esp+Ch] [ebp-14h]
  int v21; // [esp+10h] [ebp-10h]
  int v22; // [esp+14h] [ebp-Ch]
  int v23; // [esp+18h] [ebp-8h]
  int v24; // [esp+1Ch] [ebp-4h]

  v1 = this;
  *(_DWORD *)(v1 + 28) |= 0x10u;
  v2 = *(_DWORD *)(this + 36);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      v4 = *(_WORD *)(this + 46);
      if ( v4 == 103 || v4 == 71 )
      {
        *(_DWORD *)(v1 + 36) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v3 = *(unsigned __int16 *)(this + 46);
    if ( v3 == 97 || v3 == 65 )
      v19 = 13;
    else
      v19 = 6;
    v2 = v19;
    *(_DWORD *)(this + 36) = v19;
  }
  v5 = v1 + 60;
  if ( (unsigned __int8)sub_10036089(v2 + 349, *(_DWORD *)(v1 + 8)) )
  {
    v6 = *(_DWORD *)(v1 + 36);
  }
  else
  {
    v6 = sub_10035AD0(v1 + 60) - 349;
    *(_DWORD *)(v1 + 36) = v6;
  }
  v7 = *(_DWORD *)(v1 + 1088);
  if ( !v7 )
    v7 = v1 + 60;
  v20 = 0;
  v21 = 0;
  *(_DWORD *)(v1 + 48) = v7;
  v8 = *(int **)(v1 + 16);
  *(_DWORD *)(v1 + 16) = v8 + 2;
  v9 = *v8;
  v10 = v8[1];
  v20 = v9;
  v11 = *(char *)(v1 + 46);
  v21 = v10;
  v24 = v11;
  v23 = sub_10035AD0(v1 + 60);
  v22 = sub_1003435B(v1 + 60);
  v12 = sub_10035AD0(v1 + 60);
  if ( *(_DWORD *)(v1 + 1088) )
    v5 = *(_DWORD *)(v1 + 1088);
  sub_10034D1F(&v20, v5, v12, v22, v23, v24, v6, *(_DWORD *)v1, *(_DWORD *)(v1 + 4), 1, *(_DWORD *)(v1 + 8));
  if ( (*(_DWORD *)(v1 + 28) >> 5) & 1 && !*(_DWORD *)(v1 + 36) )
  {
    v13 = *(_DWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v13 + 20) )
      sub_100343EC(*(_DWORD *)(v1 + 8));
    sub_10033AEB(*(_DWORD *)(v1 + 48), v13 + 12);
  }
  v14 = *(_WORD *)(v1 + 46);
  if ( (v14 == 103 || v14 == 71) && !((*(_DWORD *)(v1 + 28) >> 5) & 1) )
  {
    v15 = *(_DWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v15 + 20) )
      sub_100343EC(*(_DWORD *)(v1 + 8));
    sub_10035BCF(*(_DWORD *)(v1 + 48), v15 + 12);
  }
  v16 = *(const char **)(v1 + 48);
  v17 = *v16;
  if ( *v16 == 45 )
  {
    *(_DWORD *)(v1 + 28) |= 0x40u;
    *(_DWORD *)(v1 + 48) = ++v16;
    v17 = *v16;
  }
  if ( v17 == 105 || v17 == 73 || v17 == 110 || v17 == 78 )
  {
    *(_DWORD *)(v1 + 28) &= 0xFFFFFFF7;
    *(_WORD *)(v1 + 46) = 115;
  }
  result = 1;
  *(_DWORD *)(v1 + 52) = strlen(v16);
  return result;
}
// 10033AEB: using guessed type _DWORD __cdecl sub_10033AEB(_DWORD, _DWORD);
// 1003435B: using guessed type int __thiscall sub_1003435B(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034D1F: using guessed type _DWORD __cdecl sub_10034D1F(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);
// 10035BCF: using guessed type _DWORD __cdecl sub_10035BCF(_DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1006C434) --------------------------------------------------------
char __thiscall sub_1006C434(_DWORD *this)
{
  _DWORD *v1; // esi
  signed int v3; // eax
  int v4; // eax
  __int16 v5; // cx
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  __int16 v11; // ax
  int v12; // edi
  const char *v13; // edx
  char v14; // al
  signed int v15; // [esp-4h] [ebp-20h]
  int v16; // [esp+Ch] [ebp-10h]
  int v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]

  v1 = this;
  this[7] |= 0x10u;
  if ( (unsigned __int8)sub_10035B52() )
  {
    if ( !(unsigned __int8)sub_10034DC9(v1) )
      return 1;
    v3 = v1[9];
    if ( v3 >= 0 )
    {
      if ( !v3 )
      {
        v5 = *((_WORD *)v1 + 23);
        if ( v5 == 103 || v5 == 71 )
        {
          v1[9] = 1;
          v3 = 1;
        }
      }
    }
    else
    {
      v4 = *((unsigned __int16 *)v1 + 23);
      if ( v4 == 97 || v4 == 65 )
        v15 = 13;
      else
        v15 = 6;
      v3 = v15;
      v1[9] = v15;
    }
    v6 = (int)(v1 + 15);
    if ( !(unsigned __int8)sub_10036089(v3 + 349, v1[2]) )
      v1[9] = sub_10035AD0(v1 + 15) - 349;
    v7 = v1[272];
    if ( !v7 )
      v7 = (int)(v1 + 15);
    v16 = 0;
    v17 = 0;
    v1[12] = v7;
    if ( (unsigned __int8)sub_100359E5(&v16) )
    {
      v8 = *((char *)v1 + 46);
      v19 = sub_10035AD0(v1 + 15);
      v18 = sub_1003435B(v1 + 15);
      v9 = sub_10035AD0(v1 + 15);
      if ( v1[272] )
        v6 = v1[272];
      sub_10034D1F(&v16, v6, v9, v18, v19, v8, v1[9], *v1, v1[1], 1, v1[2]);
      if ( (v1[7] >> 5) & 1 && !v1[9] )
      {
        v10 = v1[2];
        if ( !*(_BYTE *)(v10 + 20) )
          sub_100343EC(v1[2]);
        sub_10033AEB(v1[12], v10 + 12);
      }
      v11 = *((_WORD *)v1 + 23);
      if ( (v11 == 103 || v11 == 71) && !((v1[7] >> 5) & 1) )
      {
        v12 = v1[2];
        if ( !*(_BYTE *)(v12 + 20) )
          sub_100343EC(v1[2]);
        sub_10035BCF(v1[12], v12 + 12);
      }
      v13 = (const char *)v1[12];
      v14 = *v13;
      if ( *v13 == 45 )
      {
        v1[7] |= 0x40u;
        v1[12] = ++v13;
        v14 = *v13;
      }
      if ( v14 == 105 || v14 == 73 || v14 == 110 || v14 == 78 )
      {
        v1[7] &= 0xFFFFFFF7;
        *((_WORD *)v1 + 23) = 115;
      }
      v1[13] = strlen(v13);
      return 1;
    }
  }
  return 0;
}
// 10033AEB: using guessed type _DWORD __cdecl sub_10033AEB(_DWORD, _DWORD);
// 1003435B: using guessed type int __thiscall sub_1003435B(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034D1F: using guessed type _DWORD __cdecl sub_10034D1F(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034DC9: using guessed type int __thiscall sub_10034DC9(_DWORD);
// 100359E5: using guessed type _DWORD __stdcall sub_100359E5(_DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);
// 10035B52: using guessed type int sub_10035B52(void);
// 10035BCF: using guessed type _DWORD __cdecl sub_10035BCF(_DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1006C669) --------------------------------------------------------
char __thiscall sub_1006C669(int this)
{
  int v1; // esi
  signed int v2; // eax
  int v3; // eax
  __int16 v4; // cx
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  __int16 v14; // ax
  int v15; // edi
  const char *v16; // edx
  char v17; // al
  char result; // al
  signed int v19; // [esp-4h] [ebp-24h]
  int v20; // [esp+Ch] [ebp-14h]
  int v21; // [esp+10h] [ebp-10h]
  int v22; // [esp+14h] [ebp-Ch]
  int v23; // [esp+18h] [ebp-8h]
  int v24; // [esp+1Ch] [ebp-4h]

  v1 = this;
  *(_DWORD *)(v1 + 28) |= 0x10u;
  v2 = *(_DWORD *)(this + 36);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      v4 = *(_WORD *)(this + 46);
      if ( v4 == 103 || v4 == 71 )
      {
        *(_DWORD *)(v1 + 36) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v3 = *(unsigned __int16 *)(this + 46);
    if ( v3 == 97 || v3 == 65 )
      v19 = 13;
    else
      v19 = 6;
    v2 = v19;
    *(_DWORD *)(this + 36) = v19;
  }
  v5 = v1 + 60;
  if ( (unsigned __int8)sub_10036089(v2 + 349, *(_DWORD *)(v1 + 8)) )
  {
    v6 = *(_DWORD *)(v1 + 36);
  }
  else
  {
    v6 = sub_10035AD0(v1 + 60) - 349;
    *(_DWORD *)(v1 + 36) = v6;
  }
  v7 = *(_DWORD *)(v1 + 1088);
  if ( !v7 )
    v7 = v1 + 60;
  v20 = 0;
  v21 = 0;
  *(_DWORD *)(v1 + 48) = v7;
  v8 = *(int **)(v1 + 16);
  *(_DWORD *)(v1 + 16) = v8 + 2;
  v9 = *v8;
  v10 = v8[1];
  v20 = v9;
  v11 = *(char *)(v1 + 46);
  v21 = v10;
  v24 = v11;
  v23 = sub_10035AD0(v1 + 60);
  v22 = sub_1003435B(v1 + 60);
  v12 = sub_10035AD0(v1 + 60);
  if ( *(_DWORD *)(v1 + 1088) )
    v5 = *(_DWORD *)(v1 + 1088);
  sub_10034D1F(&v20, v5, v12, v22, v23, v24, v6, *(_DWORD *)v1, *(_DWORD *)(v1 + 4), 1, *(_DWORD *)(v1 + 8));
  if ( (*(_DWORD *)(v1 + 28) >> 5) & 1 && !*(_DWORD *)(v1 + 36) )
  {
    v13 = *(_DWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v13 + 20) )
      sub_100343EC(*(_DWORD *)(v1 + 8));
    sub_10033AEB(*(_DWORD *)(v1 + 48), v13 + 12);
  }
  v14 = *(_WORD *)(v1 + 46);
  if ( (v14 == 103 || v14 == 71) && !((*(_DWORD *)(v1 + 28) >> 5) & 1) )
  {
    v15 = *(_DWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v15 + 20) )
      sub_100343EC(*(_DWORD *)(v1 + 8));
    sub_10035BCF(*(_DWORD *)(v1 + 48), v15 + 12);
  }
  v16 = *(const char **)(v1 + 48);
  v17 = *v16;
  if ( *v16 == 45 )
  {
    *(_DWORD *)(v1 + 28) |= 0x40u;
    *(_DWORD *)(v1 + 48) = ++v16;
    v17 = *v16;
  }
  if ( v17 == 105 || v17 == 73 || v17 == 110 || v17 == 78 )
  {
    *(_DWORD *)(v1 + 28) &= 0xFFFFFFF7;
    *(_WORD *)(v1 + 46) = 115;
  }
  result = 1;
  *(_DWORD *)(v1 + 52) = strlen(v16);
  return result;
}
// 10033AEB: using guessed type _DWORD __cdecl sub_10033AEB(_DWORD, _DWORD);
// 1003435B: using guessed type int __thiscall sub_1003435B(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034D1F: using guessed type _DWORD __cdecl sub_10034D1F(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);
// 10035BCF: using guessed type _DWORD __cdecl sub_10035BCF(_DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1006C879) --------------------------------------------------------
char __thiscall sub_1006C879(int this)
{
  int v1; // esi
  signed int v2; // eax
  int v3; // eax
  __int16 v4; // cx
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  __int16 v14; // ax
  int v15; // edi
  const char *v16; // edx
  char v17; // al
  char result; // al
  signed int v19; // [esp-4h] [ebp-24h]
  int v20; // [esp+Ch] [ebp-14h]
  int v21; // [esp+10h] [ebp-10h]
  int v22; // [esp+14h] [ebp-Ch]
  int v23; // [esp+18h] [ebp-8h]
  int v24; // [esp+1Ch] [ebp-4h]

  v1 = this;
  *(_DWORD *)(v1 + 28) |= 0x10u;
  v2 = *(_DWORD *)(this + 36);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      v4 = *(_WORD *)(this + 46);
      if ( v4 == 103 || v4 == 71 )
      {
        *(_DWORD *)(v1 + 36) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v3 = *(unsigned __int16 *)(this + 46);
    if ( v3 == 97 || v3 == 65 )
      v19 = 13;
    else
      v19 = 6;
    v2 = v19;
    *(_DWORD *)(this + 36) = v19;
  }
  v5 = v1 + 60;
  if ( (unsigned __int8)sub_10036089(v2 + 349, *(_DWORD *)(v1 + 8)) )
  {
    v6 = *(_DWORD *)(v1 + 36);
  }
  else
  {
    v6 = sub_10035AD0(v1 + 60) - 349;
    *(_DWORD *)(v1 + 36) = v6;
  }
  v7 = *(_DWORD *)(v1 + 1088);
  if ( !v7 )
    v7 = v1 + 60;
  v20 = 0;
  v21 = 0;
  *(_DWORD *)(v1 + 48) = v7;
  v8 = *(int **)(v1 + 16);
  *(_DWORD *)(v1 + 16) = v8 + 2;
  v9 = *v8;
  v10 = v8[1];
  v20 = v9;
  v11 = *(char *)(v1 + 46);
  v21 = v10;
  v24 = v11;
  v23 = sub_10035AD0(v1 + 60);
  v22 = sub_1003435B(v1 + 60);
  v12 = sub_10035AD0(v1 + 60);
  if ( *(_DWORD *)(v1 + 1088) )
    v5 = *(_DWORD *)(v1 + 1088);
  sub_10034D1F(&v20, v5, v12, v22, v23, v24, v6, *(_DWORD *)v1, *(_DWORD *)(v1 + 4), 1, *(_DWORD *)(v1 + 8));
  if ( (*(_DWORD *)(v1 + 28) >> 5) & 1 && !*(_DWORD *)(v1 + 36) )
  {
    v13 = *(_DWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v13 + 20) )
      sub_100343EC(*(_DWORD *)(v1 + 8));
    sub_10033AEB(*(_DWORD *)(v1 + 48), v13 + 12);
  }
  v14 = *(_WORD *)(v1 + 46);
  if ( (v14 == 103 || v14 == 71) && !((*(_DWORD *)(v1 + 28) >> 5) & 1) )
  {
    v15 = *(_DWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v15 + 20) )
      sub_100343EC(*(_DWORD *)(v1 + 8));
    sub_10035BCF(*(_DWORD *)(v1 + 48), v15 + 12);
  }
  v16 = *(const char **)(v1 + 48);
  v17 = *v16;
  if ( *v16 == 45 )
  {
    *(_DWORD *)(v1 + 28) |= 0x40u;
    *(_DWORD *)(v1 + 48) = ++v16;
    v17 = *v16;
  }
  if ( v17 == 105 || v17 == 73 || v17 == 110 || v17 == 78 )
  {
    *(_DWORD *)(v1 + 28) &= 0xFFFFFFF7;
    *(_WORD *)(v1 + 46) = 115;
  }
  result = 1;
  *(_DWORD *)(v1 + 52) = strlen(v16);
  return result;
}
// 10033AEB: using guessed type _DWORD __cdecl sub_10033AEB(_DWORD, _DWORD);
// 1003435B: using guessed type int __thiscall sub_1003435B(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034D1F: using guessed type _DWORD __cdecl sub_10034D1F(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);
// 10035BCF: using guessed type _DWORD __cdecl sub_10035BCF(_DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1006CA89) --------------------------------------------------------
char __thiscall sub_1006CA89(_DWORD *this)
{
  _DWORD *v1; // esi
  signed int v3; // eax
  int v4; // eax
  __int16 v5; // cx
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // edi
  __int16 v11; // ax
  int v12; // edi
  const char *v13; // edx
  char v14; // al
  signed int v15; // [esp-4h] [ebp-20h]
  int v16; // [esp+Ch] [ebp-10h]
  int v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]
  int v19; // [esp+18h] [ebp-4h]

  v1 = this;
  this[7] |= 0x10u;
  if ( (unsigned __int8)sub_10035D50() )
  {
    if ( !(unsigned __int8)sub_10035ABC(v1) )
      return 1;
    v3 = v1[9];
    if ( v3 >= 0 )
    {
      if ( !v3 )
      {
        v5 = *((_WORD *)v1 + 23);
        if ( v5 == 103 || v5 == 71 )
        {
          v1[9] = 1;
          v3 = 1;
        }
      }
    }
    else
    {
      v4 = *((unsigned __int16 *)v1 + 23);
      if ( v4 == 97 || v4 == 65 )
        v15 = 13;
      else
        v15 = 6;
      v3 = v15;
      v1[9] = v15;
    }
    v6 = (int)(v1 + 15);
    if ( !(unsigned __int8)sub_10036089(v3 + 349, v1[2]) )
      v1[9] = sub_10035AD0(v1 + 15) - 349;
    v7 = v1[272];
    if ( !v7 )
      v7 = (int)(v1 + 15);
    v16 = 0;
    v17 = 0;
    v1[12] = v7;
    if ( (unsigned __int8)sub_1003300F(&v16) )
    {
      v8 = *((char *)v1 + 46);
      v19 = sub_10035AD0(v1 + 15);
      v18 = sub_1003435B(v1 + 15);
      v9 = sub_10035AD0(v1 + 15);
      if ( v1[272] )
        v6 = v1[272];
      sub_10034D1F(&v16, v6, v9, v18, v19, v8, v1[9], *v1, v1[1], 1, v1[2]);
      if ( (v1[7] >> 5) & 1 && !v1[9] )
      {
        v10 = v1[2];
        if ( !*(_BYTE *)(v10 + 20) )
          sub_100343EC(v1[2]);
        sub_10033AEB(v1[12], v10 + 12);
      }
      v11 = *((_WORD *)v1 + 23);
      if ( (v11 == 103 || v11 == 71) && !((v1[7] >> 5) & 1) )
      {
        v12 = v1[2];
        if ( !*(_BYTE *)(v12 + 20) )
          sub_100343EC(v1[2]);
        sub_10035BCF(v1[12], v12 + 12);
      }
      v13 = (const char *)v1[12];
      v14 = *v13;
      if ( *v13 == 45 )
      {
        v1[7] |= 0x40u;
        v1[12] = ++v13;
        v14 = *v13;
      }
      if ( v14 == 105 || v14 == 73 || v14 == 110 || v14 == 78 )
      {
        v1[7] &= 0xFFFFFFF7;
        *((_WORD *)v1 + 23) = 115;
      }
      v1[13] = strlen(v13);
      return 1;
    }
  }
  return 0;
}
// 1003300F: using guessed type _DWORD __stdcall sub_1003300F(_DWORD);
// 10033AEB: using guessed type _DWORD __cdecl sub_10033AEB(_DWORD, _DWORD);
// 1003435B: using guessed type int __thiscall sub_1003435B(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034D1F: using guessed type _DWORD __cdecl sub_10034D1F(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035ABC: using guessed type int __thiscall sub_10035ABC(_DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);
// 10035BCF: using guessed type _DWORD __cdecl sub_10035BCF(_DWORD, _DWORD);
// 10035D50: using guessed type int sub_10035D50(void);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1006CCBE) --------------------------------------------------------
char __thiscall sub_1006CCBE(int this)
{
  int v1; // esi
  signed int v2; // eax
  int v3; // eax
  __int16 v4; // cx
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  __int16 v14; // ax
  int v15; // edi
  const char *v16; // edx
  char v17; // al
  char result; // al
  signed int v19; // [esp-4h] [ebp-24h]
  int v20; // [esp+Ch] [ebp-14h]
  int v21; // [esp+10h] [ebp-10h]
  int v22; // [esp+14h] [ebp-Ch]
  int v23; // [esp+18h] [ebp-8h]
  int v24; // [esp+1Ch] [ebp-4h]

  v1 = this;
  *(_DWORD *)(v1 + 28) |= 0x10u;
  v2 = *(_DWORD *)(this + 36);
  if ( v2 >= 0 )
  {
    if ( !v2 )
    {
      v4 = *(_WORD *)(this + 46);
      if ( v4 == 103 || v4 == 71 )
      {
        *(_DWORD *)(v1 + 36) = 1;
        v2 = 1;
      }
    }
  }
  else
  {
    v3 = *(unsigned __int16 *)(this + 46);
    if ( v3 == 97 || v3 == 65 )
      v19 = 13;
    else
      v19 = 6;
    v2 = v19;
    *(_DWORD *)(this + 36) = v19;
  }
  v5 = v1 + 60;
  if ( (unsigned __int8)sub_10036089(v2 + 349, *(_DWORD *)(v1 + 8)) )
  {
    v6 = *(_DWORD *)(v1 + 36);
  }
  else
  {
    v6 = sub_10035AD0(v1 + 60) - 349;
    *(_DWORD *)(v1 + 36) = v6;
  }
  v7 = *(_DWORD *)(v1 + 1088);
  if ( !v7 )
    v7 = v1 + 60;
  v20 = 0;
  v21 = 0;
  *(_DWORD *)(v1 + 48) = v7;
  v8 = *(int **)(v1 + 16);
  *(_DWORD *)(v1 + 16) = v8 + 2;
  v9 = *v8;
  v10 = v8[1];
  v20 = v9;
  v11 = *(char *)(v1 + 46);
  v21 = v10;
  v24 = v11;
  v23 = sub_10035AD0(v1 + 60);
  v22 = sub_1003435B(v1 + 60);
  v12 = sub_10035AD0(v1 + 60);
  if ( *(_DWORD *)(v1 + 1088) )
    v5 = *(_DWORD *)(v1 + 1088);
  sub_10034D1F(&v20, v5, v12, v22, v23, v24, v6, *(_DWORD *)v1, *(_DWORD *)(v1 + 4), 1, *(_DWORD *)(v1 + 8));
  if ( (*(_DWORD *)(v1 + 28) >> 5) & 1 && !*(_DWORD *)(v1 + 36) )
  {
    v13 = *(_DWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v13 + 20) )
      sub_100343EC(*(_DWORD *)(v1 + 8));
    sub_10033AEB(*(_DWORD *)(v1 + 48), v13 + 12);
  }
  v14 = *(_WORD *)(v1 + 46);
  if ( (v14 == 103 || v14 == 71) && !((*(_DWORD *)(v1 + 28) >> 5) & 1) )
  {
    v15 = *(_DWORD *)(v1 + 8);
    if ( !*(_BYTE *)(v15 + 20) )
      sub_100343EC(*(_DWORD *)(v1 + 8));
    sub_10035BCF(*(_DWORD *)(v1 + 48), v15 + 12);
  }
  v16 = *(const char **)(v1 + 48);
  v17 = *v16;
  if ( *v16 == 45 )
  {
    *(_DWORD *)(v1 + 28) |= 0x40u;
    *(_DWORD *)(v1 + 48) = ++v16;
    v17 = *v16;
  }
  if ( v17 == 105 || v17 == 73 || v17 == 110 || v17 == 78 )
  {
    *(_DWORD *)(v1 + 28) &= 0xFFFFFFF7;
    *(_WORD *)(v1 + 46) = 115;
  }
  result = 1;
  *(_DWORD *)(v1 + 52) = strlen(v16);
  return result;
}
// 10033AEB: using guessed type _DWORD __cdecl sub_10033AEB(_DWORD, _DWORD);
// 1003435B: using guessed type int __thiscall sub_1003435B(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034D1F: using guessed type _DWORD __cdecl sub_10034D1F(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);
// 10035BCF: using guessed type _DWORD __cdecl sub_10035BCF(_DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1006CF46) --------------------------------------------------------
char __thiscall sub_1006CF46(char *this, int a2)
{
  char *v2; // esi
  int v3; // edi
  WCHAR *v4; // ecx
  WCHAR v5; // bx
  int v6; // eax
  CHAR *v7; // ecx
  _BYTE *v8; // edx
  _BYTE *v9; // ecx

  v2 = this;
  v3 = (int)(this + 60);
  if ( (unsigned __int8)sub_100350B2(*(_DWORD *)this, *((_DWORD *)this + 1), this[45], *((_DWORD *)this + 10)) )
  {
    v4 = (WCHAR *)*((_DWORD *)v2 + 4);
    *((_DWORD *)v2 + 4) = v4 + 2;
    v5 = *v4;
    v6 = sub_10035AD0(v3);
    v7 = *(CHAR **)(v3 + 1028);
    if ( !v7 )
      v7 = (CHAR *)v3;
    if ( sub_10034E28((int)(v2 + 52), v7, v6, v5, *((_DWORD *)v2 + 2)) )
      v2[44] = 1;
  }
  else
  {
    v8 = *(_BYTE **)(v3 + 1028);
    if ( !v8 )
      v8 = (_BYTE *)v3;
    v9 = (_BYTE *)*((_DWORD *)v2 + 4);
    *((_DWORD *)v2 + 4) = v9 + 4;
    *v8 = *v9;
    *((_DWORD *)v2 + 13) = 1;
  }
  if ( *(_DWORD *)(v3 + 1028) )
    v3 = *(_DWORD *)(v3 + 1028);
  *((_DWORD *)v2 + 12) = v3;
  return 1;
}
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1006D000) --------------------------------------------------------
char __thiscall sub_1006D000(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // eax
  CHAR *v5; // ecx
  int v6; // eax
  WCHAR WideCharStr[2]; // [esp+8h] [ebp-4h]

  v2 = this;
  if ( (unsigned __int8)sub_100350B2(*this, this[1], *((_BYTE *)this + 45), this[10]) )
  {
    WideCharStr[0] = 0;
    if ( (unsigned __int8)sub_10033979(WideCharStr) )
    {
      if ( (unsigned __int8)sub_1003618D(v2) )
      {
        v3 = (int)(v2 + 15);
        v4 = sub_10035AD0(v2 + 15);
        v5 = (CHAR *)v2[272];
        if ( !v5 )
          v5 = (CHAR *)(v2 + 15);
        if ( sub_10034E28((int)(v2 + 13), v5, v4, WideCharStr[0], v2[2]) )
          *((_BYTE *)v2 + 44) = 1;
        goto LABEL_14;
      }
      return 1;
    }
    return 0;
  }
  v3 = (int)(v2 + 15);
  v6 = v2[272];
  if ( !v6 )
    v6 = (int)(v2 + 15);
  if ( !(unsigned __int8)sub_10035738(v6) )
    return 0;
  if ( (unsigned __int8)sub_1003618D(v2) )
  {
    v2[13] = 1;
LABEL_14:
    if ( *(_DWORD *)(v3 + 1028) )
      v3 = *(_DWORD *)(v3 + 1028);
    v2[12] = v3;
  }
  return 1;
}
// 10033979: using guessed type _DWORD __stdcall sub_10033979(_DWORD);
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);
// 10035738: using guessed type _DWORD __stdcall sub_10035738(_DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);
// 1003618D: using guessed type int __thiscall sub_1003618D(_DWORD);

//----- (1006D0EE) --------------------------------------------------------
char __thiscall sub_1006D0EE(char *this, int a2)
{
  char *v2; // esi
  int v3; // edi
  WCHAR *v4; // ecx
  WCHAR v5; // bx
  int v6; // eax
  CHAR *v7; // ecx
  _BYTE *v8; // edx
  _BYTE *v9; // ecx

  v2 = this;
  v3 = (int)(this + 60);
  if ( (unsigned __int8)sub_100350B2(*(_DWORD *)this, *((_DWORD *)this + 1), this[45], *((_DWORD *)this + 10)) )
  {
    v4 = (WCHAR *)*((_DWORD *)v2 + 4);
    *((_DWORD *)v2 + 4) = v4 + 2;
    v5 = *v4;
    v6 = sub_10035AD0(v3);
    v7 = *(CHAR **)(v3 + 1028);
    if ( !v7 )
      v7 = (CHAR *)v3;
    if ( sub_10034E28((int)(v2 + 52), v7, v6, v5, *((_DWORD *)v2 + 2)) )
      v2[44] = 1;
  }
  else
  {
    v8 = *(_BYTE **)(v3 + 1028);
    if ( !v8 )
      v8 = (_BYTE *)v3;
    v9 = (_BYTE *)*((_DWORD *)v2 + 4);
    *((_DWORD *)v2 + 4) = v9 + 4;
    *v8 = *v9;
    *((_DWORD *)v2 + 13) = 1;
  }
  if ( *(_DWORD *)(v3 + 1028) )
    v3 = *(_DWORD *)(v3 + 1028);
  *((_DWORD *)v2 + 12) = v3;
  return 1;
}
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1006D1A8) --------------------------------------------------------
char __thiscall sub_1006D1A8(char *this, int a2)
{
  char *v2; // esi
  int v3; // edi
  WCHAR *v4; // ecx
  WCHAR v5; // bx
  int v6; // eax
  CHAR *v7; // ecx
  _BYTE *v8; // edx
  _BYTE *v9; // ecx

  v2 = this;
  v3 = (int)(this + 60);
  if ( (unsigned __int8)sub_100350B2(*(_DWORD *)this, *((_DWORD *)this + 1), this[45], *((_DWORD *)this + 10)) )
  {
    v4 = (WCHAR *)*((_DWORD *)v2 + 4);
    *((_DWORD *)v2 + 4) = v4 + 2;
    v5 = *v4;
    v6 = sub_10035AD0(v3);
    v7 = *(CHAR **)(v3 + 1028);
    if ( !v7 )
      v7 = (CHAR *)v3;
    if ( sub_10034E28((int)(v2 + 52), v7, v6, v5, *((_DWORD *)v2 + 2)) )
      v2[44] = 1;
  }
  else
  {
    v8 = *(_BYTE **)(v3 + 1028);
    if ( !v8 )
      v8 = (_BYTE *)v3;
    v9 = (_BYTE *)*((_DWORD *)v2 + 4);
    *((_DWORD *)v2 + 4) = v9 + 4;
    *v8 = *v9;
    *((_DWORD *)v2 + 13) = 1;
  }
  if ( *(_DWORD *)(v3 + 1028) )
    v3 = *(_DWORD *)(v3 + 1028);
  *((_DWORD *)v2 + 12) = v3;
  return 1;
}
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1006D262) --------------------------------------------------------
char __thiscall sub_1006D262(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // edi
  int v4; // eax
  CHAR *v5; // ecx
  int v6; // eax
  WCHAR WideCharStr[2]; // [esp+8h] [ebp-4h]

  v2 = this;
  if ( (unsigned __int8)sub_100350B2(*this, this[1], *((_BYTE *)this + 45), this[10]) )
  {
    WideCharStr[0] = 0;
    if ( (unsigned __int8)sub_10034144(WideCharStr) )
    {
      if ( (unsigned __int8)sub_1003562F(v2) )
      {
        v3 = (int)(v2 + 15);
        v4 = sub_10035AD0(v2 + 15);
        v5 = (CHAR *)v2[272];
        if ( !v5 )
          v5 = (CHAR *)(v2 + 15);
        if ( sub_10034E28((int)(v2 + 13), v5, v4, WideCharStr[0], v2[2]) )
          *((_BYTE *)v2 + 44) = 1;
        goto LABEL_14;
      }
      return 1;
    }
    return 0;
  }
  v3 = (int)(v2 + 15);
  v6 = v2[272];
  if ( !v6 )
    v6 = (int)(v2 + 15);
  if ( !(unsigned __int8)sub_10034D29(v6) )
    return 0;
  if ( (unsigned __int8)sub_1003562F(v2) )
  {
    v2[13] = 1;
LABEL_14:
    if ( *(_DWORD *)(v3 + 1028) )
      v3 = *(_DWORD *)(v3 + 1028);
    v2[12] = v3;
  }
  return 1;
}
// 10034144: using guessed type _DWORD __stdcall sub_10034144(_DWORD);
// 10034D29: using guessed type _DWORD __stdcall sub_10034D29(_DWORD);
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);
// 1003562F: using guessed type int __thiscall sub_1003562F(_DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1006D350) --------------------------------------------------------
char __thiscall sub_1006D350(char *this, int a2)
{
  char *v2; // esi
  int v3; // edi
  WCHAR *v4; // ecx
  WCHAR v5; // bx
  int v6; // eax
  CHAR *v7; // ecx
  _BYTE *v8; // edx
  _BYTE *v9; // ecx

  v2 = this;
  v3 = (int)(this + 60);
  if ( (unsigned __int8)sub_100350B2(*(_DWORD *)this, *((_DWORD *)this + 1), this[45], *((_DWORD *)this + 10)) )
  {
    v4 = (WCHAR *)*((_DWORD *)v2 + 4);
    *((_DWORD *)v2 + 4) = v4 + 2;
    v5 = *v4;
    v6 = sub_10035AD0(v3);
    v7 = *(CHAR **)(v3 + 1028);
    if ( !v7 )
      v7 = (CHAR *)v3;
    if ( sub_10034E28((int)(v2 + 52), v7, v6, v5, *((_DWORD *)v2 + 2)) )
      v2[44] = 1;
  }
  else
  {
    v8 = *(_BYTE **)(v3 + 1028);
    if ( !v8 )
      v8 = (_BYTE *)v3;
    v9 = (_BYTE *)*((_DWORD *)v2 + 4);
    *((_DWORD *)v2 + 4) = v9 + 4;
    *v8 = *v9;
    *((_DWORD *)v2 + 13) = 1;
  }
  if ( *(_DWORD *)(v3 + 1028) )
    v3 = *(_DWORD *)(v3 + 1028);
  *((_DWORD *)v2 + 12) = v3;
  return 1;
}
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1006D40A) --------------------------------------------------------
char __thiscall sub_1006D40A(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  __int16 *v3; // edx
  __int16 v4; // bx
  int v5; // ebx
  int v6; // edi
  WCHAR *v7; // eax
  _WORD *v8; // eax
  char result; // al
  CHAR MultiByteStr; // [esp+Ch] [ebp-4h]
  char v11; // [esp+Dh] [ebp-3h]

  v2 = this;
  v3 = (__int16 *)this[4];
  *((_BYTE *)this + 56) = 1;
  this[4] = v3 + 2;
  v4 = *v3;
  if ( (unsigned __int8)sub_10033519(*this, this[1], *((_WORD *)this + 23), this[10]) )
  {
    v6 = (int)(v2 + 15);
    v8 = (_WORD *)v2[272];
    if ( !v8 )
      v8 = v2 + 15;
    *v8 = v4;
  }
  else
  {
    MultiByteStr = v4;
    v5 = v2[2];
    v11 = 0;
    if ( !*(_BYTE *)(v5 + 20) )
      sub_100343EC(v5);
    v6 = (int)(v2 + 15);
    v7 = (WCHAR *)v2[272];
    if ( !v7 )
      v7 = (WCHAR *)(v2 + 15);
    if ( sub_1003323A(v7, &MultiByteStr, *(_DWORD *)(*(_DWORD *)(v5 + 12) + 4), v5) < 0 )
      *((_BYTE *)v2 + 44) = 1;
  }
  if ( *(_DWORD *)(v6 + 1028) )
    v6 = *(_DWORD *)(v6 + 1028);
  v2[12] = v6;
  result = 1;
  v2[13] = 1;
  return result;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);

//----- (1006D4DC) --------------------------------------------------------
char __thiscall sub_1006D4DC(_BYTE *this, int a2)
{
  _BYTE *v2; // esi
  char result; // al
  int v4; // ebx
  int v5; // edi
  WCHAR *v6; // eax
  _WORD *v7; // ecx
  CHAR MultiByteStr[2]; // [esp+4h] [ebp-4h]

  v2 = this;
  *(_WORD *)MultiByteStr = 0;
  this[56] = 1;
  result = sub_10034C07(MultiByteStr);
  if ( result )
  {
    if ( (unsigned __int8)sub_10034DC9(v2) )
    {
      if ( (unsigned __int8)sub_10033519(*(_DWORD *)v2, *((_DWORD *)v2 + 1), *((_WORD *)v2 + 23), *((_DWORD *)v2 + 10)) )
      {
        v5 = (int)(v2 + 60);
        v7 = (_WORD *)*((_DWORD *)v2 + 272);
        if ( !v7 )
          v7 = v2 + 60;
        *v7 = *(_WORD *)MultiByteStr;
      }
      else
      {
        v4 = *((_DWORD *)v2 + 2);
        MultiByteStr[1] = 0;
        if ( !*(_BYTE *)(v4 + 20) )
          sub_100343EC(v4);
        v5 = (int)(v2 + 60);
        v6 = (WCHAR *)*((_DWORD *)v2 + 272);
        if ( !v6 )
          v6 = (WCHAR *)(v2 + 60);
        if ( sub_1003323A(v6, MultiByteStr, *(_DWORD *)(*(_DWORD *)(v4 + 12) + 4), v4) < 0 )
          v2[44] = 1;
      }
      if ( *(_DWORD *)(v5 + 1028) )
        v5 = *(_DWORD *)(v5 + 1028);
      *((_DWORD *)v2 + 12) = v5;
      *((_DWORD *)v2 + 13) = 1;
    }
    result = 1;
  }
  return result;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034C07: using guessed type _DWORD __stdcall sub_10034C07(_DWORD);
// 10034DC9: using guessed type int __thiscall sub_10034DC9(_DWORD);

//----- (1006D5D9) --------------------------------------------------------
char __thiscall sub_1006D5D9(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  __int16 *v3; // edx
  __int16 v4; // bx
  int v5; // ebx
  int v6; // edi
  WCHAR *v7; // eax
  _WORD *v8; // eax
  char result; // al
  CHAR MultiByteStr; // [esp+Ch] [ebp-4h]
  char v11; // [esp+Dh] [ebp-3h]

  v2 = this;
  v3 = (__int16 *)this[4];
  *((_BYTE *)this + 56) = 1;
  this[4] = v3 + 2;
  v4 = *v3;
  if ( (unsigned __int8)sub_10033519(*this, this[1], *((_WORD *)this + 23), this[10]) )
  {
    v6 = (int)(v2 + 15);
    v8 = (_WORD *)v2[272];
    if ( !v8 )
      v8 = v2 + 15;
    *v8 = v4;
  }
  else
  {
    MultiByteStr = v4;
    v5 = v2[2];
    v11 = 0;
    if ( !*(_BYTE *)(v5 + 20) )
      sub_100343EC(v5);
    v6 = (int)(v2 + 15);
    v7 = (WCHAR *)v2[272];
    if ( !v7 )
      v7 = (WCHAR *)(v2 + 15);
    if ( sub_1003323A(v7, &MultiByteStr, *(_DWORD *)(*(_DWORD *)(v5 + 12) + 4), v5) < 0 )
      *((_BYTE *)v2 + 44) = 1;
  }
  if ( *(_DWORD *)(v6 + 1028) )
    v6 = *(_DWORD *)(v6 + 1028);
  v2[12] = v6;
  result = 1;
  v2[13] = 1;
  return result;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);

//----- (1006D6AB) --------------------------------------------------------
char __thiscall sub_1006D6AB(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  __int16 *v3; // edx
  __int16 v4; // bx
  int v5; // ebx
  int v6; // edi
  WCHAR *v7; // eax
  _WORD *v8; // eax
  char result; // al
  CHAR MultiByteStr; // [esp+Ch] [ebp-4h]
  char v11; // [esp+Dh] [ebp-3h]

  v2 = this;
  v3 = (__int16 *)this[4];
  *((_BYTE *)this + 56) = 1;
  this[4] = v3 + 2;
  v4 = *v3;
  if ( (unsigned __int8)sub_10033519(*this, this[1], *((_WORD *)this + 23), this[10]) )
  {
    v6 = (int)(v2 + 15);
    v8 = (_WORD *)v2[272];
    if ( !v8 )
      v8 = v2 + 15;
    *v8 = v4;
  }
  else
  {
    MultiByteStr = v4;
    v5 = v2[2];
    v11 = 0;
    if ( !*(_BYTE *)(v5 + 20) )
      sub_100343EC(v5);
    v6 = (int)(v2 + 15);
    v7 = (WCHAR *)v2[272];
    if ( !v7 )
      v7 = (WCHAR *)(v2 + 15);
    if ( sub_1003323A(v7, &MultiByteStr, *(_DWORD *)(*(_DWORD *)(v5 + 12) + 4), v5) < 0 )
      *((_BYTE *)v2 + 44) = 1;
  }
  if ( *(_DWORD *)(v6 + 1028) )
    v6 = *(_DWORD *)(v6 + 1028);
  v2[12] = v6;
  result = 1;
  v2[13] = 1;
  return result;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);

//----- (1006D77D) --------------------------------------------------------
char __thiscall sub_1006D77D(_BYTE *this, int a2)
{
  _BYTE *v2; // esi
  char result; // al
  int v4; // ebx
  int v5; // edi
  WCHAR *v6; // eax
  _WORD *v7; // ecx
  CHAR MultiByteStr[2]; // [esp+4h] [ebp-4h]

  v2 = this;
  *(_WORD *)MultiByteStr = 0;
  this[56] = 1;
  result = sub_10034487(MultiByteStr);
  if ( result )
  {
    if ( (unsigned __int8)sub_10035ABC(v2) )
    {
      if ( (unsigned __int8)sub_10033519(*(_DWORD *)v2, *((_DWORD *)v2 + 1), *((_WORD *)v2 + 23), *((_DWORD *)v2 + 10)) )
      {
        v5 = (int)(v2 + 60);
        v7 = (_WORD *)*((_DWORD *)v2 + 272);
        if ( !v7 )
          v7 = v2 + 60;
        *v7 = *(_WORD *)MultiByteStr;
      }
      else
      {
        v4 = *((_DWORD *)v2 + 2);
        MultiByteStr[1] = 0;
        if ( !*(_BYTE *)(v4 + 20) )
          sub_100343EC(v4);
        v5 = (int)(v2 + 60);
        v6 = (WCHAR *)*((_DWORD *)v2 + 272);
        if ( !v6 )
          v6 = (WCHAR *)(v2 + 60);
        if ( sub_1003323A(v6, MultiByteStr, *(_DWORD *)(*(_DWORD *)(v4 + 12) + 4), v4) < 0 )
          v2[44] = 1;
      }
      if ( *(_DWORD *)(v5 + 1028) )
        v5 = *(_DWORD *)(v5 + 1028);
      *((_DWORD *)v2 + 12) = v5;
      *((_DWORD *)v2 + 13) = 1;
    }
    result = 1;
  }
  return result;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034487: using guessed type _DWORD __stdcall sub_10034487(_DWORD);
// 10035ABC: using guessed type int __thiscall sub_10035ABC(_DWORD);

//----- (1006D87A) --------------------------------------------------------
char __thiscall sub_1006D87A(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  __int16 *v3; // edx
  __int16 v4; // bx
  int v5; // ebx
  int v6; // edi
  WCHAR *v7; // eax
  _WORD *v8; // eax
  char result; // al
  CHAR MultiByteStr; // [esp+Ch] [ebp-4h]
  char v11; // [esp+Dh] [ebp-3h]

  v2 = this;
  v3 = (__int16 *)this[4];
  *((_BYTE *)this + 56) = 1;
  this[4] = v3 + 2;
  v4 = *v3;
  if ( (unsigned __int8)sub_10033519(*this, this[1], *((_WORD *)this + 23), this[10]) )
  {
    v6 = (int)(v2 + 15);
    v8 = (_WORD *)v2[272];
    if ( !v8 )
      v8 = v2 + 15;
    *v8 = v4;
  }
  else
  {
    MultiByteStr = v4;
    v5 = v2[2];
    v11 = 0;
    if ( !*(_BYTE *)(v5 + 20) )
      sub_100343EC(v5);
    v6 = (int)(v2 + 15);
    v7 = (WCHAR *)v2[272];
    if ( !v7 )
      v7 = (WCHAR *)(v2 + 15);
    if ( sub_1003323A(v7, &MultiByteStr, *(_DWORD *)(*(_DWORD *)(v5 + 12) + 4), v5) < 0 )
      *((_BYTE *)v2 + 44) = 1;
  }
  if ( *(_DWORD *)(v6 + 1028) )
    v6 = *(_DWORD *)(v6 + 1028);
  v2[12] = v6;
  result = 1;
  v2[13] = 1;
  return result;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);

//----- (1006DA00) --------------------------------------------------------
char __thiscall sub_1006DA00(_DWORD *this)
{
  _DWORD *v1; // esi
  _QWORD **v2; // edx
  _QWORD *v3; // edi
  int v4; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v1 = this;
  v2 = (_QWORD **)this[4];
  this[4] = v2 + 1;
  v3 = *v2;
  if ( !sub_10034DA6() )
    goto LABEL_2;
  v6 = sub_10033DBB(v1[10]) - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        if ( v8 != 4 )
        {
LABEL_2:
          v4 = v1[2];
          *(_BYTE *)(v4 + 28) = 1;
          *(_DWORD *)(v4 + 24) = 22;
          sub_10034B08(0, 0, 0, 0, 0, v1[2]);
          return 0;
        }
        *v3 = (signed int)v1[5];
      }
      else
      {
        *(_DWORD *)v3 = v1[5];
      }
    }
    else
    {
      *(_WORD *)v3 = *((_WORD *)v1 + 10);
    }
  }
  else
  {
    *(_BYTE *)v3 = *((_BYTE *)v1 + 20);
  }
  *((_BYTE *)v1 + 44) = 1;
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034DA6: using guessed type int sub_10034DA6(void);

//----- (1006DAA6) --------------------------------------------------------
char __thiscall sub_1006DAA6(signed int *this)
{
  signed int *v1; // esi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _QWORD *v7; // [esp+8h] [ebp-4h]

  v1 = this;
  v7 = 0;
  if ( !(unsigned __int8)sub_10035CF6(&v7) )
    return 0;
  if ( (unsigned __int8)sub_1003618D(v1) )
  {
    if ( !sub_10034DA6() )
    {
LABEL_5:
      v3 = v1[2] + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v1[2]);
      return 0;
    }
    v4 = sub_10033DBB(v1[10]) - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 2;
        if ( v6 )
        {
          if ( v6 != 4 )
            goto LABEL_5;
          *v7 = v1[5];
        }
        else
        {
          *(_DWORD *)v7 = v1[5];
        }
      }
      else
      {
        *(_WORD *)v7 = *((_WORD *)v1 + 10);
      }
    }
    else
    {
      *(_BYTE *)v7 = *((_BYTE *)v1 + 20);
    }
    *((_BYTE *)v1 + 44) = 1;
  }
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034DA6: using guessed type int sub_10034DA6(void);
// 10035CF6: using guessed type _DWORD __stdcall sub_10035CF6(_DWORD);
// 1003618D: using guessed type int __thiscall sub_1003618D(_DWORD);

//----- (1006DB7E) --------------------------------------------------------
char __thiscall sub_1006DB7E(_DWORD *this)
{
  _DWORD *v1; // esi
  _QWORD **v2; // edx
  _QWORD *v3; // edi
  int v4; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v1 = this;
  v2 = (_QWORD **)this[4];
  this[4] = v2 + 1;
  v3 = *v2;
  if ( !sub_10034DA6() )
    goto LABEL_2;
  v6 = sub_10033DBB(v1[10]) - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        if ( v8 != 4 )
        {
LABEL_2:
          v4 = v1[2];
          *(_BYTE *)(v4 + 28) = 1;
          *(_DWORD *)(v4 + 24) = 22;
          sub_10034B08(0, 0, 0, 0, 0, v1[2]);
          return 0;
        }
        *v3 = (signed int)v1[5];
      }
      else
      {
        *(_DWORD *)v3 = v1[5];
      }
    }
    else
    {
      *(_WORD *)v3 = *((_WORD *)v1 + 10);
    }
  }
  else
  {
    *(_BYTE *)v3 = *((_BYTE *)v1 + 20);
  }
  *((_BYTE *)v1 + 44) = 1;
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034DA6: using guessed type int sub_10034DA6(void);

//----- (1006DC24) --------------------------------------------------------
char __thiscall sub_1006DC24(_DWORD *this)
{
  _DWORD *v1; // esi
  _QWORD **v2; // edx
  _QWORD *v3; // edi
  int v4; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v1 = this;
  v2 = (_QWORD **)this[4];
  this[4] = v2 + 1;
  v3 = *v2;
  if ( !sub_10034DA6() )
    goto LABEL_2;
  v6 = sub_10033DBB(v1[10]) - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        if ( v8 != 4 )
        {
LABEL_2:
          v4 = v1[2];
          *(_BYTE *)(v4 + 28) = 1;
          *(_DWORD *)(v4 + 24) = 22;
          sub_10034B08(0, 0, 0, 0, 0, v1[2]);
          return 0;
        }
        *v3 = (signed int)v1[5];
      }
      else
      {
        *(_DWORD *)v3 = v1[5];
      }
    }
    else
    {
      *(_WORD *)v3 = *((_WORD *)v1 + 10);
    }
  }
  else
  {
    *(_BYTE *)v3 = *((_BYTE *)v1 + 20);
  }
  *((_BYTE *)v1 + 44) = 1;
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034DA6: using guessed type int sub_10034DA6(void);

//----- (1006DCCA) --------------------------------------------------------
char __thiscall sub_1006DCCA(signed int *this)
{
  signed int *v1; // esi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _QWORD *v7; // [esp+8h] [ebp-4h]

  v1 = this;
  v7 = 0;
  if ( !(unsigned __int8)sub_10033BB3(&v7) )
    return 0;
  if ( (unsigned __int8)sub_1003562F(v1) )
  {
    if ( !sub_10034DA6() )
    {
LABEL_5:
      v3 = v1[2] + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v1[2]);
      return 0;
    }
    v4 = sub_10033DBB(v1[10]) - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 2;
        if ( v6 )
        {
          if ( v6 != 4 )
            goto LABEL_5;
          *v7 = v1[5];
        }
        else
        {
          *(_DWORD *)v7 = v1[5];
        }
      }
      else
      {
        *(_WORD *)v7 = *((_WORD *)v1 + 10);
      }
    }
    else
    {
      *(_BYTE *)v7 = *((_BYTE *)v1 + 20);
    }
    *((_BYTE *)v1 + 44) = 1;
  }
  return 1;
}
// 10033BB3: using guessed type _DWORD __stdcall sub_10033BB3(_DWORD);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034DA6: using guessed type int sub_10034DA6(void);
// 1003562F: using guessed type int __thiscall sub_1003562F(_DWORD);

//----- (1006DDA2) --------------------------------------------------------
char __thiscall sub_1006DDA2(_DWORD *this)
{
  _DWORD *v1; // esi
  _QWORD **v2; // edx
  _QWORD *v3; // edi
  int v4; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v1 = this;
  v2 = (_QWORD **)this[4];
  this[4] = v2 + 1;
  v3 = *v2;
  if ( !sub_10034DA6() )
    goto LABEL_2;
  v6 = sub_10033DBB(v1[10]) - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        if ( v8 != 4 )
        {
LABEL_2:
          v4 = v1[2];
          *(_BYTE *)(v4 + 28) = 1;
          *(_DWORD *)(v4 + 24) = 22;
          sub_10034B08(0, 0, 0, 0, 0, v1[2]);
          return 0;
        }
        *v3 = (signed int)v1[5];
      }
      else
      {
        *(_DWORD *)v3 = v1[5];
      }
    }
    else
    {
      *(_WORD *)v3 = *((_WORD *)v1 + 10);
    }
  }
  else
  {
    *(_BYTE *)v3 = *((_BYTE *)v1 + 20);
  }
  *((_BYTE *)v1 + 44) = 1;
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034DA6: using guessed type int sub_10034DA6(void);

//----- (1006DE48) --------------------------------------------------------
char __thiscall sub_1006DE48(_DWORD *this)
{
  _DWORD *v1; // esi
  _QWORD **v2; // edx
  _QWORD *v3; // edi
  int v4; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v1 = this;
  v2 = (_QWORD **)this[4];
  this[4] = v2 + 1;
  v3 = *v2;
  if ( !sub_10034DA6() )
    goto LABEL_2;
  v6 = sub_10033DBB(v1[10]) - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        if ( v8 != 4 )
        {
LABEL_2:
          v4 = v1[2];
          *(_BYTE *)(v4 + 28) = 1;
          *(_DWORD *)(v4 + 24) = 22;
          sub_10034B08(0, 0, 0, 0, 0, v1[2]);
          return 0;
        }
        *v3 = (signed int)v1[5];
      }
      else
      {
        *(_DWORD *)v3 = v1[5];
      }
    }
    else
    {
      *(_WORD *)v3 = *((_WORD *)v1 + 10);
    }
  }
  else
  {
    *(_BYTE *)v3 = *((_BYTE *)v1 + 20);
  }
  *((_BYTE *)v1 + 44) = 1;
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034DA6: using guessed type int sub_10034DA6(void);

//----- (1006DEEE) --------------------------------------------------------
char __thiscall sub_1006DEEE(signed int *this)
{
  signed int *v1; // esi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _QWORD *v7; // [esp+8h] [ebp-4h]

  v1 = this;
  v7 = 0;
  if ( !(unsigned __int8)sub_1003526A(&v7) )
    return 0;
  if ( (unsigned __int8)sub_10034DC9(v1) )
  {
    if ( !sub_10034DA6() )
    {
LABEL_5:
      v3 = v1[2] + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v1[2]);
      return 0;
    }
    v4 = sub_10033DBB(v1[10]) - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 2;
        if ( v6 )
        {
          if ( v6 != 4 )
            goto LABEL_5;
          *v7 = v1[5];
        }
        else
        {
          *(_DWORD *)v7 = v1[5];
        }
      }
      else
      {
        *(_WORD *)v7 = *((_WORD *)v1 + 10);
      }
    }
    else
    {
      *(_BYTE *)v7 = *((_BYTE *)v1 + 20);
    }
    *((_BYTE *)v1 + 44) = 1;
  }
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034DA6: using guessed type int sub_10034DA6(void);
// 10034DC9: using guessed type int __thiscall sub_10034DC9(_DWORD);
// 1003526A: using guessed type _DWORD __stdcall sub_1003526A(_DWORD);

//----- (1006DFC6) --------------------------------------------------------
char __thiscall sub_1006DFC6(_DWORD *this)
{
  _DWORD *v1; // esi
  _QWORD **v2; // edx
  _QWORD *v3; // edi
  int v4; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v1 = this;
  v2 = (_QWORD **)this[4];
  this[4] = v2 + 1;
  v3 = *v2;
  if ( !sub_10034DA6() )
    goto LABEL_2;
  v6 = sub_10033DBB(v1[10]) - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        if ( v8 != 4 )
        {
LABEL_2:
          v4 = v1[2];
          *(_BYTE *)(v4 + 28) = 1;
          *(_DWORD *)(v4 + 24) = 22;
          sub_10034B08(0, 0, 0, 0, 0, v1[2]);
          return 0;
        }
        *v3 = (signed int)v1[5];
      }
      else
      {
        *(_DWORD *)v3 = v1[5];
      }
    }
    else
    {
      *(_WORD *)v3 = *((_WORD *)v1 + 10);
    }
  }
  else
  {
    *(_BYTE *)v3 = *((_BYTE *)v1 + 20);
  }
  *((_BYTE *)v1 + 44) = 1;
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034DA6: using guessed type int sub_10034DA6(void);

//----- (1006E06C) --------------------------------------------------------
char __thiscall sub_1006E06C(_DWORD *this)
{
  _DWORD *v1; // esi
  _QWORD **v2; // edx
  _QWORD *v3; // edi
  int v4; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v1 = this;
  v2 = (_QWORD **)this[4];
  this[4] = v2 + 1;
  v3 = *v2;
  if ( !sub_10034DA6() )
    goto LABEL_2;
  v6 = sub_10033DBB(v1[10]) - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        if ( v8 != 4 )
        {
LABEL_2:
          v4 = v1[2];
          *(_BYTE *)(v4 + 28) = 1;
          *(_DWORD *)(v4 + 24) = 22;
          sub_10034B08(0, 0, 0, 0, 0, v1[2]);
          return 0;
        }
        *v3 = (signed int)v1[5];
      }
      else
      {
        *(_DWORD *)v3 = v1[5];
      }
    }
    else
    {
      *(_WORD *)v3 = *((_WORD *)v1 + 10);
    }
  }
  else
  {
    *(_BYTE *)v3 = *((_BYTE *)v1 + 20);
  }
  *((_BYTE *)v1 + 44) = 1;
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034DA6: using guessed type int sub_10034DA6(void);

//----- (1006E112) --------------------------------------------------------
char __thiscall sub_1006E112(signed int *this)
{
  signed int *v1; // esi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _QWORD *v7; // [esp+8h] [ebp-4h]

  v1 = this;
  v7 = 0;
  if ( !(unsigned __int8)sub_10033492(&v7) )
    return 0;
  if ( (unsigned __int8)sub_10035ABC(v1) )
  {
    if ( !sub_10034DA6() )
    {
LABEL_5:
      v3 = v1[2] + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      sub_10034B08(0, 0, 0, 0, 0, v1[2]);
      return 0;
    }
    v4 = sub_10033DBB(v1[10]) - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 2;
        if ( v6 )
        {
          if ( v6 != 4 )
            goto LABEL_5;
          *v7 = v1[5];
        }
        else
        {
          *(_DWORD *)v7 = v1[5];
        }
      }
      else
      {
        *(_WORD *)v7 = *((_WORD *)v1 + 10);
      }
    }
    else
    {
      *(_BYTE *)v7 = *((_BYTE *)v1 + 20);
    }
    *((_BYTE *)v1 + 44) = 1;
  }
  return 1;
}
// 10033492: using guessed type _DWORD __stdcall sub_10033492(_DWORD);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034DA6: using guessed type int sub_10034DA6(void);
// 10035ABC: using guessed type int __thiscall sub_10035ABC(_DWORD);

//----- (1006E1EA) --------------------------------------------------------
char __thiscall sub_1006E1EA(_DWORD *this)
{
  _DWORD *v1; // esi
  _QWORD **v2; // edx
  _QWORD *v3; // edi
  int v4; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v1 = this;
  v2 = (_QWORD **)this[4];
  this[4] = v2 + 1;
  v3 = *v2;
  if ( !sub_10034DA6() )
    goto LABEL_2;
  v6 = sub_10033DBB(v1[10]) - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        if ( v8 != 4 )
        {
LABEL_2:
          v4 = v1[2];
          *(_BYTE *)(v4 + 28) = 1;
          *(_DWORD *)(v4 + 24) = 22;
          sub_10034B08(0, 0, 0, 0, 0, v1[2]);
          return 0;
        }
        *v3 = (signed int)v1[5];
      }
      else
      {
        *(_DWORD *)v3 = v1[5];
      }
    }
    else
    {
      *(_WORD *)v3 = *((_WORD *)v1 + 10);
    }
  }
  else
  {
    *(_BYTE *)v3 = *((_BYTE *)v1 + 20);
  }
  *((_BYTE *)v1 + 44) = 1;
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034DA6: using guessed type int sub_10034DA6(void);

//----- (1006E290) --------------------------------------------------------
int __thiscall sub_1006E290(_DWORD *this)
{
  if ( (this[7] >> 5) & 1 )
    this[7] |= 0x80u;
  return sub_10034059(0);
}
// 10034059: using guessed type _DWORD __stdcall sub_10034059(_DWORD);

//----- (1006E2B4) --------------------------------------------------------
int __thiscall sub_1006E2B4(_DWORD *this)
{
  if ( (this[7] >> 5) & 1 )
    this[7] |= 0x80u;
  return sub_10034BDA(0);
}
// 10034BDA: using guessed type _DWORD __stdcall sub_10034BDA(_DWORD);

//----- (1006E2D8) --------------------------------------------------------
int __thiscall sub_1006E2D8(_DWORD *this)
{
  if ( (this[7] >> 5) & 1 )
    this[7] |= 0x80u;
  return sub_100350A8(0);
}
// 100350A8: using guessed type _DWORD __stdcall sub_100350A8(_DWORD);

//----- (1006E2FC) --------------------------------------------------------
int __thiscall sub_1006E2FC(_DWORD *this)
{
  if ( (this[7] >> 5) & 1 )
    this[7] |= 0x80u;
  return sub_100349C3(0);
}
// 100349C3: using guessed type _DWORD __stdcall sub_100349C3(_DWORD);

//----- (1006E320) --------------------------------------------------------
int __thiscall sub_1006E320(_DWORD *this)
{
  if ( (this[7] >> 5) & 1 )
    this[7] |= 0x80u;
  return sub_10035D05(0);
}
// 10035D05: using guessed type _DWORD __stdcall sub_10035D05(_DWORD);

//----- (1006E344) --------------------------------------------------------
int __thiscall sub_1006E344(_DWORD *this)
{
  if ( (this[7] >> 5) & 1 )
    this[7] |= 0x80u;
  return sub_10035BF7(0);
}
// 10035BF7: using guessed type _DWORD __stdcall sub_10035BF7(_DWORD);

//----- (1006E368) --------------------------------------------------------
int __thiscall sub_1006E368(_DWORD *this)
{
  if ( (this[7] >> 5) & 1 )
    this[7] |= 0x80u;
  return sub_10035FFD(0);
}
// 10035FFD: using guessed type _DWORD __stdcall sub_10035FFD(_DWORD);

//----- (1006E38C) --------------------------------------------------------
int __thiscall sub_1006E38C(_DWORD *this)
{
  if ( (this[7] >> 5) & 1 )
    this[7] |= 0x80u;
  return sub_10035161(0);
}
// 10035161: using guessed type _DWORD __stdcall sub_10035161(_DWORD);

//----- (1006E3B0) --------------------------------------------------------
int __thiscall sub_1006E3B0(_DWORD *this)
{
  if ( (this[7] >> 5) & 1 )
    this[7] |= 0x80u;
  return sub_10033CFD(0);
}
// 10033CFD: using guessed type _DWORD __stdcall sub_10033CFD(_DWORD);

//----- (1006E3D4) --------------------------------------------------------
int __thiscall sub_1006E3D4(_DWORD *this)
{
  if ( (this[7] >> 5) & 1 )
    this[7] |= 0x80u;
  return sub_100341BC(0);
}
// 100341BC: using guessed type _DWORD __stdcall sub_100341BC(_DWORD);

//----- (1006E3F8) --------------------------------------------------------
int __thiscall sub_1006E3F8(_DWORD *this)
{
  if ( (this[7] >> 5) & 1 )
    this[7] |= 0x80u;
  return sub_1003464E(0);
}
// 1003464E: using guessed type _DWORD __stdcall sub_1003464E(_DWORD);

//----- (1006E41C) --------------------------------------------------------
int __thiscall sub_1006E41C(_DWORD *this)
{
  if ( (this[7] >> 5) & 1 )
    this[7] |= 0x80u;
  return sub_10036142(0);
}
// 10036142: using guessed type _DWORD __stdcall sub_10036142(_DWORD);

//----- (1006E440) --------------------------------------------------------
int __thiscall sub_1006E440(_DWORD *this)
{
  this[9] = 8;
  this[10] = 10;
  return sub_10034B6C(1);
}
// 10034B6C: using guessed type _DWORD __stdcall sub_10034B6C(_DWORD);

//----- (1006E45B) --------------------------------------------------------
int __thiscall sub_1006E45B(_DWORD *this)
{
  this[9] = 8;
  this[10] = 10;
  return sub_1003398D(1);
}
// 1003398D: using guessed type _DWORD __stdcall sub_1003398D(_DWORD);

//----- (1006E476) --------------------------------------------------------
int __thiscall sub_1006E476(_DWORD *this)
{
  this[9] = 8;
  this[10] = 10;
  return sub_100358A5(1);
}
// 100358A5: using guessed type _DWORD __stdcall sub_100358A5(_DWORD);

//----- (1006E491) --------------------------------------------------------
int __thiscall sub_1006E491(_DWORD *this)
{
  this[9] = 8;
  this[10] = 10;
  return sub_10035DF5(1);
}
// 10035DF5: using guessed type _DWORD __stdcall sub_10035DF5(_DWORD);

//----- (1006E4AC) --------------------------------------------------------
int __thiscall sub_1006E4AC(_DWORD *this)
{
  this[9] = 8;
  this[10] = 10;
  return sub_10033050(1);
}
// 10033050: using guessed type _DWORD __stdcall sub_10033050(_DWORD);

//----- (1006E4C7) --------------------------------------------------------
int __thiscall sub_1006E4C7(_DWORD *this)
{
  this[9] = 8;
  this[10] = 10;
  return sub_1003452C(1);
}
// 1003452C: using guessed type _DWORD __stdcall sub_1003452C(_DWORD);

//----- (1006E4E2) --------------------------------------------------------
int __thiscall sub_1006E4E2(_DWORD *this)
{
  this[9] = 8;
  this[10] = 10;
  return sub_1003309B(1);
}
// 1003309B: using guessed type _DWORD __stdcall sub_1003309B(_DWORD);

//----- (1006E4FD) --------------------------------------------------------
int __thiscall sub_1006E4FD(_DWORD *this)
{
  this[9] = 8;
  this[10] = 10;
  return sub_100347CA(1);
}
// 100347CA: using guessed type _DWORD __stdcall sub_100347CA(_DWORD);

//----- (1006E518) --------------------------------------------------------
int __thiscall sub_1006E518(_DWORD *this)
{
  this[9] = 8;
  this[10] = 10;
  return sub_100340F9(1);
}
// 100340F9: using guessed type _DWORD __stdcall sub_100340F9(_DWORD);

//----- (1006E533) --------------------------------------------------------
int __thiscall sub_1006E533(_DWORD *this)
{
  this[9] = 8;
  this[10] = 10;
  return sub_100354EA(1);
}
// 100354EA: using guessed type _DWORD __stdcall sub_100354EA(_DWORD);

//----- (1006E54E) --------------------------------------------------------
int __thiscall sub_1006E54E(_DWORD *this)
{
  this[9] = 8;
  this[10] = 10;
  return sub_10033FD7(1);
}
// 10033FD7: using guessed type _DWORD __stdcall sub_10033FD7(_DWORD);

//----- (1006E569) --------------------------------------------------------
int __thiscall sub_1006E569(_DWORD *this)
{
  this[9] = 8;
  this[10] = 10;
  return sub_10036084(1);
}
// 10036084: using guessed type _DWORD __stdcall sub_10036084(_DWORD);

//----- (1006E584) --------------------------------------------------------
char __thiscall sub_1006E584(_DWORD *this)
{
  _DWORD *v1; // esi
  const char **v2; // edx
  signed int v3; // ebx
  const char *v4; // edi
  int v5; // eax

  v1 = this;
  v2 = (const char **)this[4];
  this[4] = v2 + 1;
  v3 = this[9];
  v4 = *v2;
  this[12] = *v2;
  if ( v3 == -1 )
    v3 = 0x7FFFFFFF;
  if ( (unsigned __int8)sub_100350B2(*this, this[1], *((_BYTE *)this + 45), this[10]) )
  {
    if ( !v4 )
    {
      v4 = (const char *)L"(null)";
      v1[12] = L"(null)";
    }
    *((_BYTE *)v1 + 56) = 1;
    v5 = sub_10034B3F(v4, v3);
  }
  else
  {
    if ( !v4 )
    {
      v4 = "(null)";
      v1[12] = "(null)";
    }
    v5 = sub_10034BF3(v4, v3);
  }
  v1[13] = v5;
  return 1;
}
// 10034B3F: using guessed type _DWORD __cdecl sub_10034B3F(_DWORD, _DWORD);
// 10034BF3: using guessed type _DWORD __cdecl sub_10034BF3(_DWORD, _DWORD);
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);
// 100A582C: using guessed type wchar_t aNull_1[7];

//----- (1006E612) --------------------------------------------------------
char __thiscall sub_1006E612(const char **this)
{
  const char **v1; // esi
  const char **v2; // edi
  char result; // al
  signed int v4; // ebx
  const char *v5; // edi
  const char *v6; // eax

  v1 = this;
  v2 = this + 12;
  result = sub_10034FDB(this + 12);
  if ( result )
  {
    if ( (unsigned __int8)sub_1003618D(v1) )
    {
      v4 = (signed int)v1[9];
      if ( v4 == -1 )
        v4 = 0x7FFFFFFF;
      v5 = *v2;
      if ( (unsigned __int8)sub_100350B2(*v1, v1[1], *((_BYTE *)v1 + 45), v1[10]) )
      {
        if ( !v5 )
        {
          v5 = (const char *)L"(null)";
          v1[12] = (const char *)L"(null)";
        }
        *((_BYTE *)v1 + 56) = 1;
        v6 = (const char *)sub_10034B3F(v5, v4);
      }
      else
      {
        if ( !v5 )
        {
          v5 = "(null)";
          v1[12] = "(null)";
        }
        v6 = (const char *)sub_10034BF3(v5, v4);
      }
      v1[13] = v6;
    }
    result = 1;
  }
  return result;
}
// 10034B3F: using guessed type _DWORD __cdecl sub_10034B3F(_DWORD, _DWORD);
// 10034BF3: using guessed type _DWORD __cdecl sub_10034BF3(_DWORD, _DWORD);
// 10034FDB: using guessed type _DWORD __stdcall sub_10034FDB(_DWORD);
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);
// 1003618D: using guessed type int __thiscall sub_1003618D(_DWORD);
// 100A582C: using guessed type wchar_t aNull_1[7];

//----- (1006E6AF) --------------------------------------------------------
char __thiscall sub_1006E6AF(_DWORD *this)
{
  _DWORD *v1; // esi
  const char **v2; // edx
  signed int v3; // ebx
  const char *v4; // edi
  int v5; // eax

  v1 = this;
  v2 = (const char **)this[4];
  this[4] = v2 + 1;
  v3 = this[9];
  v4 = *v2;
  this[12] = *v2;
  if ( v3 == -1 )
    v3 = 0x7FFFFFFF;
  if ( (unsigned __int8)sub_100350B2(*this, this[1], *((_BYTE *)this + 45), this[10]) )
  {
    if ( !v4 )
    {
      v4 = (const char *)L"(null)";
      v1[12] = L"(null)";
    }
    *((_BYTE *)v1 + 56) = 1;
    v5 = sub_10034B3F(v4, v3);
  }
  else
  {
    if ( !v4 )
    {
      v4 = "(null)";
      v1[12] = "(null)";
    }
    v5 = sub_10034BF3(v4, v3);
  }
  v1[13] = v5;
  return 1;
}
// 10034B3F: using guessed type _DWORD __cdecl sub_10034B3F(_DWORD, _DWORD);
// 10034BF3: using guessed type _DWORD __cdecl sub_10034BF3(_DWORD, _DWORD);
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);
// 100A582C: using guessed type wchar_t aNull_1[7];

//----- (1006E73D) --------------------------------------------------------
char __thiscall sub_1006E73D(_DWORD *this)
{
  _DWORD *v1; // esi
  const char **v2; // edx
  signed int v3; // ebx
  const char *v4; // edi
  int v5; // eax

  v1 = this;
  v2 = (const char **)this[4];
  this[4] = v2 + 1;
  v3 = this[9];
  v4 = *v2;
  this[12] = *v2;
  if ( v3 == -1 )
    v3 = 0x7FFFFFFF;
  if ( (unsigned __int8)sub_100350B2(*this, this[1], *((_BYTE *)this + 45), this[10]) )
  {
    if ( !v4 )
    {
      v4 = (const char *)L"(null)";
      v1[12] = L"(null)";
    }
    *((_BYTE *)v1 + 56) = 1;
    v5 = sub_10034B3F(v4, v3);
  }
  else
  {
    if ( !v4 )
    {
      v4 = "(null)";
      v1[12] = "(null)";
    }
    v5 = sub_10034BF3(v4, v3);
  }
  v1[13] = v5;
  return 1;
}
// 10034B3F: using guessed type _DWORD __cdecl sub_10034B3F(_DWORD, _DWORD);
// 10034BF3: using guessed type _DWORD __cdecl sub_10034BF3(_DWORD, _DWORD);
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);
// 100A582C: using guessed type wchar_t aNull_1[7];

//----- (1006E7CB) --------------------------------------------------------
char __thiscall sub_1006E7CB(const char **this)
{
  const char **v1; // esi
  const char **v2; // edi
  char result; // al
  signed int v4; // ebx
  const char *v5; // edi
  const char *v6; // eax

  v1 = this;
  v2 = this + 12;
  result = sub_1003538C(this + 12);
  if ( result )
  {
    if ( (unsigned __int8)sub_1003562F(v1) )
    {
      v4 = (signed int)v1[9];
      if ( v4 == -1 )
        v4 = 0x7FFFFFFF;
      v5 = *v2;
      if ( (unsigned __int8)sub_100350B2(*v1, v1[1], *((_BYTE *)v1 + 45), v1[10]) )
      {
        if ( !v5 )
        {
          v5 = (const char *)L"(null)";
          v1[12] = (const char *)L"(null)";
        }
        *((_BYTE *)v1 + 56) = 1;
        v6 = (const char *)sub_10034B3F(v5, v4);
      }
      else
      {
        if ( !v5 )
        {
          v5 = "(null)";
          v1[12] = "(null)";
        }
        v6 = (const char *)sub_10034BF3(v5, v4);
      }
      v1[13] = v6;
    }
    result = 1;
  }
  return result;
}
// 10034B3F: using guessed type _DWORD __cdecl sub_10034B3F(_DWORD, _DWORD);
// 10034BF3: using guessed type _DWORD __cdecl sub_10034BF3(_DWORD, _DWORD);
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);
// 1003538C: using guessed type _DWORD __stdcall sub_1003538C(_DWORD);
// 1003562F: using guessed type int __thiscall sub_1003562F(_DWORD);
// 100A582C: using guessed type wchar_t aNull_1[7];

//----- (1006E868) --------------------------------------------------------
char __thiscall sub_1006E868(_DWORD *this)
{
  _DWORD *v1; // esi
  const char **v2; // edx
  signed int v3; // ebx
  const char *v4; // edi
  int v5; // eax

  v1 = this;
  v2 = (const char **)this[4];
  this[4] = v2 + 1;
  v3 = this[9];
  v4 = *v2;
  this[12] = *v2;
  if ( v3 == -1 )
    v3 = 0x7FFFFFFF;
  if ( (unsigned __int8)sub_100350B2(*this, this[1], *((_BYTE *)this + 45), this[10]) )
  {
    if ( !v4 )
    {
      v4 = (const char *)L"(null)";
      v1[12] = L"(null)";
    }
    *((_BYTE *)v1 + 56) = 1;
    v5 = sub_10034B3F(v4, v3);
  }
  else
  {
    if ( !v4 )
    {
      v4 = "(null)";
      v1[12] = "(null)";
    }
    v5 = sub_10034BF3(v4, v3);
  }
  v1[13] = v5;
  return 1;
}
// 10034B3F: using guessed type _DWORD __cdecl sub_10034B3F(_DWORD, _DWORD);
// 10034BF3: using guessed type _DWORD __cdecl sub_10034BF3(_DWORD, _DWORD);
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);
// 100A582C: using guessed type wchar_t aNull_1[7];

//----- (1006E8F6) --------------------------------------------------------
char __thiscall sub_1006E8F6(_DWORD *this)
{
  _DWORD *v1; // esi
  const wchar_t **v2; // edx
  signed int v3; // ebx
  const wchar_t *v4; // edi
  int v5; // eax

  v1 = this;
  v2 = (const wchar_t **)this[4];
  this[4] = v2 + 1;
  v3 = this[9];
  v4 = *v2;
  this[12] = *v2;
  if ( v3 == -1 )
    v3 = 0x7FFFFFFF;
  if ( (unsigned __int8)sub_10033519(*this, this[1], *((_WORD *)this + 23), this[10]) )
  {
    if ( !v4 )
    {
      v4 = L"(null)";
      v1[12] = L"(null)";
    }
    *((_BYTE *)v1 + 56) = 1;
    v5 = sub_10034B3F(v4, v3);
  }
  else
  {
    if ( !v4 )
      v1[12] = "(null)";
    v5 = sub_10033CEE(v3, 0);
  }
  v1[13] = v5;
  return 1;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);
// 10033CEE: using guessed type _DWORD __stdcall sub_10033CEE(_DWORD, _DWORD);
// 10034B3F: using guessed type _DWORD __cdecl sub_10034B3F(_DWORD, _DWORD);
// 100A582C: using guessed type wchar_t aNull_1[7];

//----- (1006E987) --------------------------------------------------------
char __thiscall sub_1006E987(const wchar_t **this)
{
  const wchar_t **v1; // esi
  const wchar_t **v2; // ebx
  char result; // al
  signed int v4; // edi
  const wchar_t *v5; // ebx
  const wchar_t *v6; // eax

  v1 = this;
  v2 = this + 12;
  result = sub_10034225(this + 12);
  if ( result )
  {
    if ( (unsigned __int8)sub_10034DC9(v1) )
    {
      v4 = (signed int)v1[9];
      if ( v4 == -1 )
        v4 = 0x7FFFFFFF;
      v5 = *v2;
      if ( (unsigned __int8)sub_10033519(*v1, v1[1], *((_WORD *)v1 + 23), v1[10]) )
      {
        if ( !v5 )
        {
          v5 = L"(null)";
          v1[12] = L"(null)";
        }
        *((_BYTE *)v1 + 56) = 1;
        v6 = (const wchar_t *)sub_10034B3F(v5, v4);
      }
      else
      {
        if ( !v5 )
          v1[12] = (const wchar_t *)"(null)";
        v6 = (const wchar_t *)sub_10035706(v4, 0);
      }
      v1[13] = v6;
    }
    result = 1;
  }
  return result;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);
// 10034225: using guessed type _DWORD __stdcall sub_10034225(_DWORD);
// 10034B3F: using guessed type _DWORD __cdecl sub_10034B3F(_DWORD, _DWORD);
// 10034DC9: using guessed type int __thiscall sub_10034DC9(_DWORD);
// 10035706: using guessed type _DWORD __stdcall sub_10035706(_DWORD, _DWORD);
// 100A582C: using guessed type wchar_t aNull_1[7];

//----- (1006EA27) --------------------------------------------------------
char __thiscall sub_1006EA27(_DWORD *this)
{
  _DWORD *v1; // esi
  const wchar_t **v2; // edx
  signed int v3; // ebx
  const wchar_t *v4; // edi
  int v5; // eax

  v1 = this;
  v2 = (const wchar_t **)this[4];
  this[4] = v2 + 1;
  v3 = this[9];
  v4 = *v2;
  this[12] = *v2;
  if ( v3 == -1 )
    v3 = 0x7FFFFFFF;
  if ( (unsigned __int8)sub_10033519(*this, this[1], *((_WORD *)this + 23), this[10]) )
  {
    if ( !v4 )
    {
      v4 = L"(null)";
      v1[12] = L"(null)";
    }
    *((_BYTE *)v1 + 56) = 1;
    v5 = sub_10034B3F(v4, v3);
  }
  else
  {
    if ( !v4 )
      v1[12] = "(null)";
    v5 = sub_10033C7B(v3, 0);
  }
  v1[13] = v5;
  return 1;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);
// 10033C7B: using guessed type _DWORD __stdcall sub_10033C7B(_DWORD, _DWORD);
// 10034B3F: using guessed type _DWORD __cdecl sub_10034B3F(_DWORD, _DWORD);
// 100A582C: using guessed type wchar_t aNull_1[7];

//----- (1006EAB8) --------------------------------------------------------
char __thiscall sub_1006EAB8(_DWORD *this)
{
  _DWORD *v1; // esi
  const wchar_t **v2; // edx
  signed int v3; // ebx
  const wchar_t *v4; // edi
  int v5; // eax

  v1 = this;
  v2 = (const wchar_t **)this[4];
  this[4] = v2 + 1;
  v3 = this[9];
  v4 = *v2;
  this[12] = *v2;
  if ( v3 == -1 )
    v3 = 0x7FFFFFFF;
  if ( (unsigned __int8)sub_10033519(*this, this[1], *((_WORD *)this + 23), this[10]) )
  {
    if ( !v4 )
    {
      v4 = L"(null)";
      v1[12] = L"(null)";
    }
    *((_BYTE *)v1 + 56) = 1;
    v5 = sub_10034B3F(v4, v3);
  }
  else
  {
    if ( !v4 )
      v1[12] = "(null)";
    v5 = sub_100353D2(v3, 0);
  }
  v1[13] = v5;
  return 1;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);
// 10034B3F: using guessed type _DWORD __cdecl sub_10034B3F(_DWORD, _DWORD);
// 100353D2: using guessed type _DWORD __stdcall sub_100353D2(_DWORD, _DWORD);
// 100A582C: using guessed type wchar_t aNull_1[7];

//----- (1006EB49) --------------------------------------------------------
char __thiscall sub_1006EB49(const wchar_t **this)
{
  const wchar_t **v1; // esi
  const wchar_t **v2; // ebx
  char result; // al
  signed int v4; // edi
  const wchar_t *v5; // ebx
  const wchar_t *v6; // eax

  v1 = this;
  v2 = this + 12;
  result = sub_10036390(this + 12);
  if ( result )
  {
    if ( (unsigned __int8)sub_10035ABC(v1) )
    {
      v4 = (signed int)v1[9];
      if ( v4 == -1 )
        v4 = 0x7FFFFFFF;
      v5 = *v2;
      if ( (unsigned __int8)sub_10033519(*v1, v1[1], *((_WORD *)v1 + 23), v1[10]) )
      {
        if ( !v5 )
        {
          v5 = L"(null)";
          v1[12] = L"(null)";
        }
        *((_BYTE *)v1 + 56) = 1;
        v6 = (const wchar_t *)sub_10034B3F(v5, v4);
      }
      else
      {
        if ( !v5 )
          v1[12] = (const wchar_t *)"(null)";
        v6 = (const wchar_t *)sub_100334F1(v4, 0);
      }
      v1[13] = v6;
    }
    result = 1;
  }
  return result;
}
// 100334F1: using guessed type _DWORD __stdcall sub_100334F1(_DWORD, _DWORD);
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);
// 10034B3F: using guessed type _DWORD __cdecl sub_10034B3F(_DWORD, _DWORD);
// 10035ABC: using guessed type int __thiscall sub_10035ABC(_DWORD);
// 10036390: using guessed type _DWORD __stdcall sub_10036390(_DWORD);
// 100A582C: using guessed type wchar_t aNull_1[7];

//----- (1006EBE9) --------------------------------------------------------
char __thiscall sub_1006EBE9(_DWORD *this)
{
  _DWORD *v1; // esi
  const wchar_t **v2; // edx
  signed int v3; // ebx
  const wchar_t *v4; // edi
  int v5; // eax

  v1 = this;
  v2 = (const wchar_t **)this[4];
  this[4] = v2 + 1;
  v3 = this[9];
  v4 = *v2;
  this[12] = *v2;
  if ( v3 == -1 )
    v3 = 0x7FFFFFFF;
  if ( (unsigned __int8)sub_10033519(*this, this[1], *((_WORD *)this + 23), this[10]) )
  {
    if ( !v4 )
    {
      v4 = L"(null)";
      v1[12] = L"(null)";
    }
    *((_BYTE *)v1 + 56) = 1;
    v5 = sub_10034B3F(v4, v3);
  }
  else
  {
    if ( !v4 )
      v1[12] = "(null)";
    v5 = sub_10034022(v3, 0);
  }
  v1[13] = v5;
  return 1;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);
// 10034022: using guessed type _DWORD __stdcall sub_10034022(_DWORD, _DWORD);
// 10034B3F: using guessed type _DWORD __cdecl sub_10034B3F(_DWORD, _DWORD);
// 100A582C: using guessed type wchar_t aNull_1[7];

//----- (1006ED1C) --------------------------------------------------------
int __thiscall sub_1006ED1C(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // ebx
  _BYTE *v5; // esi
  int i; // edi

  v3 = this;
  v4 = this[2];
  if ( !*(_BYTE *)(v4 + 20) )
    sub_100343EC(this[2]);
  v5 = (_BYTE *)v3[12];
  for ( i = 0; i < a2; ++i )
  {
    if ( !*v5 )
      break;
    if ( sub_10035F03(**(_DWORD **)(v4 + 12), (unsigned __int8)*v5, 0x8000) )
      ++v5;
    ++v5;
  }
  return i;
}
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10035F03: using guessed type _DWORD __cdecl sub_10035F03(_DWORD, _DWORD, _DWORD);

//----- (1006ED86) --------------------------------------------------------
int __thiscall sub_1006ED86(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // ebx
  _BYTE *v5; // esi
  int i; // edi

  v3 = this;
  v4 = this[2];
  if ( !*(_BYTE *)(v4 + 20) )
    sub_100343EC(this[2]);
  v5 = (_BYTE *)v3[12];
  for ( i = 0; i < a2; ++i )
  {
    if ( !*v5 )
      break;
    if ( sub_10035F03(**(_DWORD **)(v4 + 12), (unsigned __int8)*v5, 0x8000) )
      ++v5;
    ++v5;
  }
  return i;
}
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10035F03: using guessed type _DWORD __cdecl sub_10035F03(_DWORD, _DWORD, _DWORD);

//----- (1006EDF0) --------------------------------------------------------
int __thiscall sub_1006EDF0(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // ebx
  _BYTE *v5; // esi
  int i; // edi

  v3 = this;
  v4 = this[2];
  if ( !*(_BYTE *)(v4 + 20) )
    sub_100343EC(this[2]);
  v5 = (_BYTE *)v3[12];
  for ( i = 0; i < a2; ++i )
  {
    if ( !*v5 )
      break;
    if ( sub_10035F03(**(_DWORD **)(v4 + 12), (unsigned __int8)*v5, 0x8000) )
      ++v5;
    ++v5;
  }
  return i;
}
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10035F03: using guessed type _DWORD __cdecl sub_10035F03(_DWORD, _DWORD, _DWORD);

//----- (1006EE5A) --------------------------------------------------------
int __thiscall sub_1006EE5A(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // ebx
  _BYTE *v5; // esi
  int i; // edi

  v3 = this;
  v4 = this[2];
  if ( !*(_BYTE *)(v4 + 20) )
    sub_100343EC(this[2]);
  v5 = (_BYTE *)v3[12];
  for ( i = 0; i < a2; ++i )
  {
    if ( !*v5 )
      break;
    if ( sub_10035F03(**(_DWORD **)(v4 + 12), (unsigned __int8)*v5, 0x8000) )
      ++v5;
    ++v5;
  }
  return i;
}
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10035F03: using guessed type _DWORD __cdecl sub_10035F03(_DWORD, _DWORD, _DWORD);

//----- (1006EEC4) --------------------------------------------------------
int __thiscall sub_1006EEC4(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // ebx
  _BYTE *v5; // esi
  int i; // edi

  v3 = this;
  v4 = this[2];
  if ( !*(_BYTE *)(v4 + 20) )
    sub_100343EC(this[2]);
  v5 = (_BYTE *)v3[12];
  for ( i = 0; i < a2; ++i )
  {
    if ( !*v5 )
      break;
    if ( sub_10035F03(**(_DWORD **)(v4 + 12), (unsigned __int8)*v5, 0x8000) )
      ++v5;
    ++v5;
  }
  return i;
}
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10035F03: using guessed type _DWORD __cdecl sub_10035F03(_DWORD, _DWORD, _DWORD);

//----- (1006EF2E) --------------------------------------------------------
int __thiscall sub_1006EF2E(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // ebx
  _BYTE *v5; // esi
  int i; // edi

  v3 = this;
  v4 = this[2];
  if ( !*(_BYTE *)(v4 + 20) )
    sub_100343EC(this[2]);
  v5 = (_BYTE *)v3[12];
  for ( i = 0; i < a2; ++i )
  {
    if ( !*v5 )
      break;
    if ( sub_10035F03(**(_DWORD **)(v4 + 12), (unsigned __int8)*v5, 0x8000) )
      ++v5;
    ++v5;
  }
  return i;
}
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10035F03: using guessed type _DWORD __cdecl sub_10035F03(_DWORD, _DWORD, _DWORD);

//----- (1006F088) --------------------------------------------------------
_BYTE *__thiscall sub_1006F088(_DWORD *this, char a2)
{
  _BYTE *result; // eax

  result = (_BYTE *)(*this - 1);
  *this = result;
  LOBYTE(this) = a2;
  if ( a2 )
  {
    if ( *result != a2 )
    {
      *(_DWORD *)sub_10034888(this) = 22;
      result = (_BYTE *)sub_10034711();
    }
  }
  return result;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (1006F0BB) --------------------------------------------------------
_WORD *__thiscall sub_1006F0BB(_DWORD *this, __int16 a2)
{
  _WORD *result; // eax

  result = (_WORD *)(*this - 2);
  *this = result;
  LOWORD(this) = a2;
  if ( a2 )
  {
    if ( *result != a2 )
    {
      *(_DWORD *)sub_10034888(this) = 22;
      result = (_WORD *)sub_10034711();
    }
  }
  return result;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (1006F1F6) --------------------------------------------------------
char __thiscall sub_1006F1F6(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *v2; // ecx
  int v3; // ecx
  int v4; // eax
  _BYTE *v5; // edx
  bool v6; // zf
  int v7; // ecx
  int v8; // eax
  int v9; // ST14_4
  char result; // al
  int v11; // eax
  _BYTE *v12; // [esp+Ch] [ebp-4h]

  v1 = this;
  if ( this[279] == 1 )
  {
    v2 = (_DWORD *)this[4];
    v1[4] = v2 + 1;
    v1[8] = *v2;
    return 1;
  }
  v3 = this[2];
  v12 = (_BYTE *)v1[3];
  v4 = sub_10034F9F(v3, v12, &v12, 10, 1);
  v5 = v12;
  v6 = v1[278] == 1;
  v7 = v4 - 1;
  v1[3] = v12 + 1;
  if ( !v6 )
  {
    v1[8] = *(_DWORD *)v1[4 * v7 + 283];
    return 1;
  }
  if ( v7 < 0 || *v5 != 36 || v7 >= 100 )
  {
    v11 = v1[2];
    *(_BYTE *)(v11 + 28) = 1;
    *(_DWORD *)(v11 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    result = 0;
  }
  else
  {
    v8 = v1[681];
    if ( v7 > v8 )
      v8 = v7;
    v9 = v1[10];
    v1[681] = v8;
    result = sub_10033109(&v1[4 * v7 + 281], 1, *((unsigned __int8 *)v1 + 45), v9);
  }
  return result;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034F9F: using guessed type _DWORD __cdecl sub_10034F9F(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (1006F300) --------------------------------------------------------
char __thiscall sub_1006F300(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *v2; // ecx
  int v3; // ecx
  int v4; // eax
  _BYTE *v5; // edx
  bool v6; // zf
  int v7; // ecx
  int v8; // eax
  int v9; // ST14_4
  char result; // al
  int v11; // eax
  _BYTE *v12; // [esp+Ch] [ebp-4h]

  v1 = this;
  if ( this[279] == 1 )
  {
    v2 = (_DWORD *)this[4];
    v1[4] = v2 + 1;
    v1[8] = *v2;
    return 1;
  }
  v3 = this[2];
  v12 = (_BYTE *)v1[3];
  v4 = sub_10034F9F(v3, v12, &v12, 10, 1);
  v5 = v12;
  v6 = v1[278] == 1;
  v7 = v4 - 1;
  v1[3] = v12 + 1;
  if ( !v6 )
  {
    v1[8] = *(_DWORD *)v1[4 * v7 + 283];
    return 1;
  }
  if ( v7 < 0 || *v5 != 36 || v7 >= 100 )
  {
    v11 = v1[2];
    *(_BYTE *)(v11 + 28) = 1;
    *(_DWORD *)(v11 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    result = 0;
  }
  else
  {
    v8 = v1[681];
    if ( v7 > v8 )
      v8 = v7;
    v9 = v1[10];
    v1[681] = v8;
    result = sub_10033E92(&v1[4 * v7 + 281], 1, *((unsigned __int8 *)v1 + 45), v9);
  }
  return result;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034F9F: using guessed type _DWORD __cdecl sub_10034F9F(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (1006F40A) --------------------------------------------------------
char __thiscall sub_1006F40A(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *v2; // ecx
  int v3; // ecx
  int v4; // eax
  _WORD *v5; // edx
  bool v6; // zf
  int v7; // ecx
  int v8; // eax
  int v9; // ST14_4
  char result; // al
  int v11; // eax
  _WORD *v12; // [esp+Ch] [ebp-4h]

  v1 = this;
  if ( this[279] == 1 )
  {
    v2 = (_DWORD *)this[4];
    v1[4] = v2 + 1;
    v1[8] = *v2;
    return 1;
  }
  v3 = this[2];
  v12 = (_WORD *)v1[3];
  v4 = sub_1003305A(v3, v12, &v12, 10, 1);
  v5 = v12;
  v6 = v1[278] == 1;
  v7 = v4 - 1;
  v1[3] = v12 + 1;
  if ( !v6 )
  {
    v1[8] = *(_DWORD *)v1[4 * v7 + 283];
    return 1;
  }
  if ( v7 < 0 || *v5 != 36 || v7 >= 100 )
  {
    v11 = v1[2];
    *(_BYTE *)(v11 + 28) = 1;
    *(_DWORD *)(v11 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    result = 0;
  }
  else
  {
    v8 = v1[681];
    if ( v7 > v8 )
      v8 = v7;
    v9 = v1[10];
    v1[681] = v8;
    result = sub_10034798(&v1[4 * v7 + 281], 1, *((unsigned __int16 *)v1 + 23), v9);
  }
  return result;
}
// 1003305A: using guessed type _DWORD __cdecl sub_1003305A(_DWORD, _DWORD, _DWORD, _DWORD, char);
// 10034798: using guessed type _DWORD __stdcall sub_10034798(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1006F515) --------------------------------------------------------
char __thiscall sub_1006F515(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *v2; // ecx
  int v3; // ecx
  int v4; // eax
  _WORD *v5; // edx
  bool v6; // zf
  int v7; // ecx
  int v8; // eax
  int v9; // ST14_4
  char result; // al
  int v11; // eax
  _WORD *v12; // [esp+Ch] [ebp-4h]

  v1 = this;
  if ( this[279] == 1 )
  {
    v2 = (_DWORD *)this[4];
    v1[4] = v2 + 1;
    v1[8] = *v2;
    return 1;
  }
  v3 = this[2];
  v12 = (_WORD *)v1[3];
  v4 = sub_1003305A(v3, v12, &v12, 10, 1);
  v5 = v12;
  v6 = v1[278] == 1;
  v7 = v4 - 1;
  v1[3] = v12 + 1;
  if ( !v6 )
  {
    v1[8] = *(_DWORD *)v1[4 * v7 + 283];
    return 1;
  }
  if ( v7 < 0 || *v5 != 36 || v7 >= 100 )
  {
    v11 = v1[2];
    *(_BYTE *)(v11 + 28) = 1;
    *(_DWORD *)(v11 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    result = 0;
  }
  else
  {
    v8 = v1[681];
    if ( v7 > v8 )
      v8 = v7;
    v9 = v1[10];
    v1[681] = v8;
    result = sub_10035DE6(&v1[4 * v7 + 281], 1, *((unsigned __int16 *)v1 + 23), v9);
  }
  return result;
}
// 1003305A: using guessed type _DWORD __cdecl sub_1003305A(_DWORD, _DWORD, _DWORD, _DWORD, char);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035DE6: using guessed type _DWORD __stdcall sub_10035DE6(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1006F690) --------------------------------------------------------
int __thiscall sub_1006F690(_DWORD *this)
{
  _DWORD *v1; // ebx
  int v2; // eax
  int v3; // ST14_4
  int result; // eax
  int v5; // [esp+Ch] [ebp-4h]

  v1 = this;
  v2 = sub_10033C1C(this);
  v3 = v1[1];
  v5 = v2;
  v1[3] = *(_DWORD *)(v2 + 76);
  v1[4] = *(_DWORD *)(v2 + 72);
  sub_10033983(v2, v1 + 3, v3);
  sub_10033663(v5, v1 + 4, v1[1]);
  result = *(_DWORD *)(v5 + 848);
  if ( !(result & 2) )
  {
    result |= 2u;
    *(_DWORD *)(v5 + 848) = result;
    *((_BYTE *)v1 + 20) = 2;
  }
  return result;
}
// 10033663: using guessed type _DWORD __cdecl sub_10033663(_DWORD, _DWORD, _DWORD);
// 10033983: using guessed type _DWORD __cdecl sub_10033983(_DWORD, _DWORD, _DWORD);
// 10033C1C: using guessed type int __thiscall sub_10033C1C(_DWORD);

//----- (1006F701) --------------------------------------------------------
char __thiscall sub_1006F701(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *v2; // ecx
  int v3; // ecx
  int v4; // eax
  _BYTE *v5; // edx
  bool v6; // zf
  int v7; // ecx
  int v8; // eax
  int v9; // ST14_4
  char result; // al
  int v11; // eax
  _BYTE *v12; // [esp+Ch] [ebp-4h]

  v1 = this;
  if ( this[279] == 1 )
  {
    v2 = (_DWORD *)this[4];
    v1[4] = v2 + 1;
    v1[9] = *v2;
    return 1;
  }
  v3 = this[2];
  v12 = (_BYTE *)v1[3];
  v4 = sub_10034F9F(v3, v12, &v12, 10, 1);
  v5 = v12;
  v6 = v1[278] == 1;
  v7 = v4 - 1;
  v1[3] = v12 + 1;
  if ( !v6 )
  {
    v1[9] = *(_DWORD *)v1[4 * v7 + 283];
    return 1;
  }
  if ( v7 < 0 || *v5 != 36 || v7 >= 100 )
  {
    v11 = v1[2];
    *(_BYTE *)(v11 + 28) = 1;
    *(_DWORD *)(v11 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    result = 0;
  }
  else
  {
    v8 = v1[681];
    if ( v7 > v8 )
      v8 = v7;
    v9 = v1[10];
    v1[681] = v8;
    result = sub_10033109(&v1[4 * v7 + 281], 1, *((unsigned __int8 *)v1 + 45), v9);
  }
  return result;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034F9F: using guessed type _DWORD __cdecl sub_10034F9F(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (1006F80B) --------------------------------------------------------
char __thiscall sub_1006F80B(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *v2; // ecx
  int v3; // ecx
  int v4; // eax
  _BYTE *v5; // edx
  bool v6; // zf
  int v7; // ecx
  int v8; // eax
  int v9; // ST14_4
  char result; // al
  int v11; // eax
  _BYTE *v12; // [esp+Ch] [ebp-4h]

  v1 = this;
  if ( this[279] == 1 )
  {
    v2 = (_DWORD *)this[4];
    v1[4] = v2 + 1;
    v1[9] = *v2;
    return 1;
  }
  v3 = this[2];
  v12 = (_BYTE *)v1[3];
  v4 = sub_10034F9F(v3, v12, &v12, 10, 1);
  v5 = v12;
  v6 = v1[278] == 1;
  v7 = v4 - 1;
  v1[3] = v12 + 1;
  if ( !v6 )
  {
    v1[9] = *(_DWORD *)v1[4 * v7 + 283];
    return 1;
  }
  if ( v7 < 0 || *v5 != 36 || v7 >= 100 )
  {
    v11 = v1[2];
    *(_BYTE *)(v11 + 28) = 1;
    *(_DWORD *)(v11 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    result = 0;
  }
  else
  {
    v8 = v1[681];
    if ( v7 > v8 )
      v8 = v7;
    v9 = v1[10];
    v1[681] = v8;
    result = sub_10033E92(&v1[4 * v7 + 281], 1, *((unsigned __int8 *)v1 + 45), v9);
  }
  return result;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034F9F: using guessed type _DWORD __cdecl sub_10034F9F(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (1006F915) --------------------------------------------------------
char __thiscall sub_1006F915(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *v2; // ecx
  int v3; // ecx
  int v4; // eax
  _WORD *v5; // edx
  bool v6; // zf
  int v7; // ecx
  int v8; // eax
  int v9; // ST14_4
  char result; // al
  int v11; // eax
  _WORD *v12; // [esp+Ch] [ebp-4h]

  v1 = this;
  if ( this[279] == 1 )
  {
    v2 = (_DWORD *)this[4];
    v1[4] = v2 + 1;
    v1[9] = *v2;
    return 1;
  }
  v3 = this[2];
  v12 = (_WORD *)v1[3];
  v4 = sub_1003305A(v3, v12, &v12, 10, 1);
  v5 = v12;
  v6 = v1[278] == 1;
  v7 = v4 - 1;
  v1[3] = v12 + 1;
  if ( !v6 )
  {
    v1[9] = *(_DWORD *)v1[4 * v7 + 283];
    return 1;
  }
  if ( v7 < 0 || *v5 != 36 || v7 >= 100 )
  {
    v11 = v1[2];
    *(_BYTE *)(v11 + 28) = 1;
    *(_DWORD *)(v11 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    result = 0;
  }
  else
  {
    v8 = v1[681];
    if ( v7 > v8 )
      v8 = v7;
    v9 = v1[10];
    v1[681] = v8;
    result = sub_10034798(&v1[4 * v7 + 281], 1, *((unsigned __int16 *)v1 + 23), v9);
  }
  return result;
}
// 1003305A: using guessed type _DWORD __cdecl sub_1003305A(_DWORD, _DWORD, _DWORD, _DWORD, char);
// 10034798: using guessed type _DWORD __stdcall sub_10034798(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1006FA20) --------------------------------------------------------
char __thiscall sub_1006FA20(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *v2; // ecx
  int v3; // ecx
  int v4; // eax
  _WORD *v5; // edx
  bool v6; // zf
  int v7; // ecx
  int v8; // eax
  int v9; // ST14_4
  char result; // al
  int v11; // eax
  _WORD *v12; // [esp+Ch] [ebp-4h]

  v1 = this;
  if ( this[279] == 1 )
  {
    v2 = (_DWORD *)this[4];
    v1[4] = v2 + 1;
    v1[9] = *v2;
    return 1;
  }
  v3 = this[2];
  v12 = (_WORD *)v1[3];
  v4 = sub_1003305A(v3, v12, &v12, 10, 1);
  v5 = v12;
  v6 = v1[278] == 1;
  v7 = v4 - 1;
  v1[3] = v12 + 1;
  if ( !v6 )
  {
    v1[9] = *(_DWORD *)v1[4 * v7 + 283];
    return 1;
  }
  if ( v7 < 0 || *v5 != 36 || v7 >= 100 )
  {
    v11 = v1[2];
    *(_BYTE *)(v11 + 28) = 1;
    *(_DWORD *)(v11 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    result = 0;
  }
  else
  {
    v8 = v1[681];
    if ( v7 > v8 )
      v8 = v7;
    v9 = v1[10];
    v1[681] = v8;
    result = sub_10035DE6(&v1[4 * v7 + 281], 1, *((unsigned __int16 *)v1 + 23), v9);
  }
  return result;
}
// 1003305A: using guessed type _DWORD __cdecl sub_1003305A(_DWORD, _DWORD, _DWORD, _DWORD, char);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035DE6: using guessed type _DWORD __stdcall sub_10035DE6(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1006FB8E) --------------------------------------------------------
char __thiscall sub_1006FB8E(_DWORD *this)
{
  if ( *this )
    return 1;
  *(_DWORD *)sub_10034888(this) = 22;
  sub_10034711();
  return 0;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (1006FBAF) --------------------------------------------------------
char __thiscall sub_1006FBAF(_DWORD *this)
{
  if ( *this )
    return 1;
  *(_DWORD *)sub_10034888(this) = 22;
  sub_10034711();
  return 0;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (1006FBD0) --------------------------------------------------------
char __thiscall sub_1006FBD0(_DWORD *this, int a2)
{
  if ( *this )
    return sub_10034F4A(*this);
  *(_BYTE *)(a2 + 28) = 1;
  *(_DWORD *)(a2 + 24) = 22;
  sub_10034B08(0, 0, 0, 0, 0, a2);
  return 0;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034F4A: using guessed type _DWORD __cdecl sub_10034F4A(_DWORD);

//----- (1006FC16) --------------------------------------------------------
char __thiscall sub_1006FC16(_DWORD *this, int a2)
{
  if ( *this )
    return 1;
  *(_BYTE *)(a2 + 28) = 1;
  *(_DWORD *)(a2 + 24) = 22;
  sub_10034B08(0, 0, 0, 0, 0, a2);
  return 0;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1006FC53) --------------------------------------------------------
char __thiscall sub_1006FC53(_DWORD *this, int a2)
{
  if ( *this )
    return 1;
  *(_BYTE *)(a2 + 28) = 1;
  *(_DWORD *)(a2 + 24) = 22;
  sub_10034B08(0, 0, 0, 0, 0, a2);
  return 0;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1006FC90) --------------------------------------------------------
char __thiscall sub_1006FC90(_DWORD *this, int a2)
{
  if ( *this )
    return 1;
  *(_BYTE *)(a2 + 28) = 1;
  *(_DWORD *)(a2 + 24) = 22;
  sub_10034B08(0, 0, 0, 0, 0, a2);
  return 0;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1006FCCD) --------------------------------------------------------
char __thiscall sub_1006FCCD(_DWORD *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // esi
  int v7; // eax

  v5 = this;
  if ( !*(_DWORD *)a2 )
  {
    *(_DWORD *)a2 = a3;
    *(_BYTE *)(a2 + 4) = a4;
    *(_DWORD *)(a2 + 12) = a5;
    return 1;
  }
  if ( (unsigned __int8)sub_10033C4E(a2, a3, a4, a5) )
    return 1;
  v7 = v5[2] + 24;
  *(_BYTE *)(v7 + 4) = 1;
  *(_DWORD *)v7 = 22;
  sub_10034B08(0, 0, 0, 0, 0, v5[2]);
  return 0;
}
// 10033C4E: using guessed type _DWORD __stdcall sub_10033C4E(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1006FD47) --------------------------------------------------------
char __thiscall sub_1006FD47(_DWORD *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // esi
  int v7; // eax

  v5 = this;
  if ( !*(_DWORD *)a2 )
  {
    *(_DWORD *)a2 = a3;
    *(_BYTE *)(a2 + 4) = a4;
    *(_DWORD *)(a2 + 12) = a5;
    return 1;
  }
  if ( (unsigned __int8)sub_100338E8(a2, a3, a4, a5) )
    return 1;
  v7 = v5[2] + 24;
  *(_BYTE *)(v7 + 4) = 1;
  *(_DWORD *)v7 = 22;
  sub_10034B08(0, 0, 0, 0, 0, v5[2]);
  return 0;
}
// 100338E8: using guessed type _DWORD __stdcall sub_100338E8(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1006FDC1) --------------------------------------------------------
char __thiscall sub_1006FDC1(_DWORD *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // esi
  int v7; // eax

  v5 = this;
  if ( !*(_DWORD *)a2 )
  {
    *(_DWORD *)a2 = a3;
    *(_WORD *)(a2 + 4) = a4;
    *(_DWORD *)(a2 + 12) = a5;
    return 1;
  }
  if ( (unsigned __int8)sub_1003399C(a2, a3, a4, a5) )
    return 1;
  v7 = v5[2] + 24;
  *(_BYTE *)(v7 + 4) = 1;
  *(_DWORD *)v7 = 22;
  sub_10034B08(0, 0, 0, 0, 0, v5[2]);
  return 0;
}
// 1003399C: using guessed type _DWORD __stdcall sub_1003399C(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1006FE3E) --------------------------------------------------------
char __thiscall sub_1006FE3E(_DWORD *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // esi
  int v7; // eax

  v5 = this;
  if ( !*(_DWORD *)a2 )
  {
    *(_DWORD *)a2 = a3;
    *(_WORD *)(a2 + 4) = a4;
    *(_DWORD *)(a2 + 12) = a5;
    return 1;
  }
  if ( (unsigned __int8)sub_10034031(a2, a3, a4, a5) )
    return 1;
  v7 = v5[2] + 24;
  *(_BYTE *)(v7 + 4) = 1;
  *(_DWORD *)v7 = 22;
  sub_10034B08(0, 0, 0, 0, 0, v5[2]);
  return 0;
}
// 10034031: using guessed type _DWORD __stdcall sub_10034031(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1006FEBB) --------------------------------------------------------
char __thiscall sub_1006FEBB(int this)
{
  _DWORD *v1; // esi
  _BYTE *v2; // edx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // eax
  _BYTE *v8; // edx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  _BYTE *v12; // [esp+10h] [ebp-8h]
  _BYTE *v13; // [esp+14h] [ebp-4h]

  v1 = (_DWORD *)this;
  if ( *(_BYTE *)(this + 24) != 1 )
    return 1;
  v2 = *(_BYTE **)(this + 12);
  if ( *v2 == 37 )
    return 1;
  v3 = *(_DWORD *)(this + 1116);
  if ( v3 )
  {
    if ( v3 == 2 )
      goto LABEL_14;
    return 1;
  }
  if ( (unsigned __int8)(*v2 - 48) > 9u || (v4 = v1[2], v13 = v2, sub_10034F9F(v4, v2, &v13, 10, 1) <= 0) || *v13 != 36 )
  {
    v1[279] = 1;
    return 1;
  }
  if ( v1[278] == 1 )
    sub_10034388(v1 + 281, 0, 1600);
  v1[279] = 2;
LABEL_14:
  v6 = v1[2];
  v12 = (_BYTE *)v1[3];
  v7 = sub_10034F9F(v6, v12, &v12, 10, 1);
  v8 = v12;
  v9 = v7 - 1;
  v10 = (int)(v12 + 1);
  v1[682] = v9;
  v1[3] = v10;
  if ( v1[278] != 1 )
    return 1;
  if ( v9 >= 0 && *v8 == 36 && v9 < 100 )
  {
    if ( v9 <= v1[681] )
      v9 = v1[681];
    v1[681] = v9;
    return 1;
  }
  v11 = v1[2];
  *(_BYTE *)(v11 + 28) = 1;
  *(_DWORD *)(v11 + 24) = 22;
  sub_10034B08(0, 0, 0, 0, 0, v1[2]);
  return 0;
}
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034F9F: using guessed type _DWORD __cdecl sub_10034F9F(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (10070017) --------------------------------------------------------
char __thiscall sub_10070017(int this)
{
  _DWORD *v1; // esi
  _BYTE *v2; // edx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v7; // eax
  _BYTE *v8; // edx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  _BYTE *v12; // [esp+10h] [ebp-8h]
  _BYTE *v13; // [esp+14h] [ebp-4h]

  v1 = (_DWORD *)this;
  if ( *(_BYTE *)(this + 24) != 1 )
    return 1;
  v2 = *(_BYTE **)(this + 12);
  if ( *v2 == 37 )
    return 1;
  v3 = *(_DWORD *)(this + 1116);
  if ( v3 )
  {
    if ( v3 == 2 )
      goto LABEL_14;
    return 1;
  }
  if ( (unsigned __int8)(*v2 - 48) > 9u || (v4 = v1[2], v13 = v2, sub_10034F9F(v4, v2, &v13, 10, 1) <= 0) || *v13 != 36 )
  {
    v1[279] = 1;
    return 1;
  }
  if ( v1[278] == 1 )
    sub_10034388(v1 + 281, 0, 1600);
  v1[279] = 2;
LABEL_14:
  v6 = v1[2];
  v12 = (_BYTE *)v1[3];
  v7 = sub_10034F9F(v6, v12, &v12, 10, 1);
  v8 = v12;
  v9 = v7 - 1;
  v10 = (int)(v12 + 1);
  v1[682] = v9;
  v1[3] = v10;
  if ( v1[278] != 1 )
    return 1;
  if ( v9 >= 0 && *v8 == 36 && v9 < 100 )
  {
    if ( v9 <= v1[681] )
      v9 = v1[681];
    v1[681] = v9;
    return 1;
  }
  v11 = v1[2];
  *(_BYTE *)(v11 + 28) = 1;
  *(_DWORD *)(v11 + 24) = 22;
  sub_10034B08(0, 0, 0, 0, 0, v1[2]);
  return 0;
}
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034F9F: using guessed type _DWORD __cdecl sub_10034F9F(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (10070173) --------------------------------------------------------
char __thiscall sub_10070173(int this)
{
  _DWORD *v1; // esi
  unsigned __int16 *v2; // edx
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v7; // ecx
  int v8; // eax
  _WORD *v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  _WORD *v13; // [esp+10h] [ebp-8h]
  _WORD *v14; // [esp+14h] [ebp-4h]

  v1 = (_DWORD *)this;
  if ( *(_BYTE *)(this + 24) != 1 )
    return 1;
  v2 = *(unsigned __int16 **)(this + 12);
  v3 = *v2;
  if ( v3 == 37 )
    return 1;
  v4 = v1[279];
  if ( v4 )
  {
    if ( v4 == 2 )
      goto LABEL_14;
    return 1;
  }
  if ( (unsigned __int16)(v3 - 48) > 9u || (v5 = v1[2], v14 = v2, sub_1003305A(v5, v2, &v14, 10, 1) <= 0) || *v14 != 36 )
  {
    v1[279] = 1;
    return 1;
  }
  if ( v1[278] == 1 )
    sub_10034388(v1 + 281, 0, 1600);
  v1[279] = 2;
LABEL_14:
  v7 = v1[2];
  v13 = (_WORD *)v1[3];
  v8 = sub_1003305A(v7, v13, &v13, 10, 1);
  v9 = v13;
  v10 = v8 - 1;
  v11 = (int)(v13 + 1);
  v1[682] = v10;
  v1[3] = v11;
  if ( v1[278] != 1 )
    return 1;
  if ( v10 >= 0 && *v9 == 36 && v10 < 100 )
  {
    if ( v10 <= v1[681] )
      v10 = v1[681];
    v1[681] = v10;
    return 1;
  }
  v12 = v1[2];
  *(_BYTE *)(v12 + 28) = 1;
  *(_DWORD *)(v12 + 24) = 22;
  sub_10034B08(0, 0, 0, 0, 0, v1[2]);
  return 0;
}
// 1003305A: using guessed type _DWORD __cdecl sub_1003305A(_DWORD, _DWORD, _DWORD, _DWORD, char);
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100702E0) --------------------------------------------------------
char __thiscall sub_100702E0(int this)
{
  _DWORD *v1; // esi
  unsigned __int16 *v2; // edx
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v7; // ecx
  int v8; // eax
  _WORD *v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  _WORD *v13; // [esp+10h] [ebp-8h]
  _WORD *v14; // [esp+14h] [ebp-4h]

  v1 = (_DWORD *)this;
  if ( *(_BYTE *)(this + 24) != 1 )
    return 1;
  v2 = *(unsigned __int16 **)(this + 12);
  v3 = *v2;
  if ( v3 == 37 )
    return 1;
  v4 = v1[279];
  if ( v4 )
  {
    if ( v4 == 2 )
      goto LABEL_14;
    return 1;
  }
  if ( (unsigned __int16)(v3 - 48) > 9u || (v5 = v1[2], v14 = v2, sub_1003305A(v5, v2, &v14, 10, 1) <= 0) || *v14 != 36 )
  {
    v1[279] = 1;
    return 1;
  }
  if ( v1[278] == 1 )
    sub_10034388(v1 + 281, 0, 1600);
  v1[279] = 2;
LABEL_14:
  v7 = v1[2];
  v13 = (_WORD *)v1[3];
  v8 = sub_1003305A(v7, v13, &v13, 10, 1);
  v9 = v13;
  v10 = v8 - 1;
  v11 = (int)(v13 + 1);
  v1[682] = v10;
  v1[3] = v11;
  if ( v1[278] != 1 )
    return 1;
  if ( v10 >= 0 && *v9 == 36 && v10 < 100 )
  {
    if ( v10 <= v1[681] )
      v10 = v1[681];
    v1[681] = v10;
    return 1;
  }
  v12 = v1[2];
  *(_BYTE *)(v12 + 28) = 1;
  *(_DWORD *)(v12 + 24) = 22;
  sub_10034B08(0, 0, 0, 0, 0, v1[2]);
  return 0;
}
// 1003305A: using guessed type _DWORD __cdecl sub_1003305A(_DWORD, _DWORD, _DWORD, _DWORD, char);
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1007054D) --------------------------------------------------------
char __thiscall sub_1007054D(int this)
{
  char v1; // al
  int v2; // eax
  int v4; // edx
  _DWORD *v5; // esi
  _DWORD *v6; // edi
  int v7; // eax

  v1 = *(_BYTE *)(this + 24);
  if ( v1 && v1 != 7 )
  {
    v2 = *(_DWORD *)(this + 8);
    *(_BYTE *)(v2 + 28) = 1;
    *(_DWORD *)(v2 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, *(_DWORD *)(this + 8));
    return 0;
  }
  if ( *(_DWORD *)(this + 1116) != 2 )
    return 1;
  if ( *(_DWORD *)(this + 1112) != 1 )
    return 1;
  v4 = 16 * *(_DWORD *)(this + 2724);
  v5 = (_DWORD *)(this + 1124);
  if ( this == v4 + this + 16 )
    return 1;
  while ( 1 )
  {
    v6 = v5;
    v5[2] = *(_DWORD *)(this + 16);
    if ( *v5 == 1 )
    {
LABEL_12:
      *(_DWORD *)(this + 16) += 4;
      goto LABEL_13;
    }
    if ( *v5 != 2 )
    {
      if ( *v5 == 3 )
        goto LABEL_12;
      if ( *v5 != 4 )
        break;
    }
    *(_DWORD *)(this + 16) += 8;
LABEL_13:
    v5 += 4;
    if ( v6 == (_DWORD *)(v4 + this + 1124) )
      return 1;
  }
  v7 = *(_DWORD *)(this + 8);
  *(_BYTE *)(v7 + 28) = 1;
  *(_DWORD *)(v7 + 24) = 22;
  sub_10034B08(0, 0, 0, 0, 0, *(_DWORD *)(this + 8));
  return 0;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10070635) --------------------------------------------------------
char __thiscall sub_10070635(int this)
{
  char v1; // al
  int v2; // eax
  int v4; // edx
  _DWORD *v5; // esi
  _DWORD *v6; // edi
  int v7; // eax

  v1 = *(_BYTE *)(this + 24);
  if ( v1 && v1 != 7 )
  {
    v2 = *(_DWORD *)(this + 8);
    *(_BYTE *)(v2 + 28) = 1;
    *(_DWORD *)(v2 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, *(_DWORD *)(this + 8));
    return 0;
  }
  if ( *(_DWORD *)(this + 1116) != 2 )
    return 1;
  if ( *(_DWORD *)(this + 1112) != 1 )
    return 1;
  v4 = 16 * *(_DWORD *)(this + 2724);
  v5 = (_DWORD *)(this + 1124);
  if ( this == v4 + this + 16 )
    return 1;
  while ( 1 )
  {
    v6 = v5;
    v5[2] = *(_DWORD *)(this + 16);
    if ( *v5 == 1 )
    {
LABEL_12:
      *(_DWORD *)(this + 16) += 4;
      goto LABEL_13;
    }
    if ( *v5 != 2 )
    {
      if ( *v5 == 3 )
        goto LABEL_12;
      if ( *v5 != 4 )
        break;
    }
    *(_DWORD *)(this + 16) += 8;
LABEL_13:
    v5 += 4;
    if ( v6 == (_DWORD *)(v4 + this + 1124) )
      return 1;
  }
  v7 = *(_DWORD *)(this + 8);
  *(_BYTE *)(v7 + 28) = 1;
  *(_DWORD *)(v7 + 24) = 22;
  sub_10034B08(0, 0, 0, 0, 0, *(_DWORD *)(this + 8));
  return 0;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1007071D) --------------------------------------------------------
char __thiscall sub_1007071D(int this)
{
  char v1; // al
  int v2; // eax
  int v4; // edx
  _DWORD *v5; // esi
  _DWORD *v6; // edi
  int v7; // eax

  v1 = *(_BYTE *)(this + 24);
  if ( v1 && v1 != 7 )
  {
    v2 = *(_DWORD *)(this + 8);
    *(_BYTE *)(v2 + 28) = 1;
    *(_DWORD *)(v2 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, *(_DWORD *)(this + 8));
    return 0;
  }
  if ( *(_DWORD *)(this + 1116) != 2 )
    return 1;
  if ( *(_DWORD *)(this + 1112) != 1 )
    return 1;
  v4 = 16 * *(_DWORD *)(this + 2724);
  v5 = (_DWORD *)(this + 1124);
  if ( this == v4 + this + 16 )
    return 1;
  while ( 1 )
  {
    v6 = v5;
    v5[2] = *(_DWORD *)(this + 16);
    if ( *v5 == 1 )
    {
LABEL_12:
      *(_DWORD *)(this + 16) += 4;
      goto LABEL_13;
    }
    if ( *v5 != 2 )
    {
      if ( *v5 == 3 )
        goto LABEL_12;
      if ( *v5 != 4 )
        break;
    }
    *(_DWORD *)(this + 16) += 8;
LABEL_13:
    v5 += 4;
    if ( v6 == (_DWORD *)(v4 + this + 1124) )
      return 1;
  }
  v7 = *(_DWORD *)(this + 8);
  *(_BYTE *)(v7 + 28) = 1;
  *(_DWORD *)(v7 + 24) = 22;
  sub_10034B08(0, 0, 0, 0, 0, *(_DWORD *)(this + 8));
  return 0;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10070805) --------------------------------------------------------
char __thiscall sub_10070805(int this)
{
  char v1; // al
  int v2; // eax
  int v4; // edx
  _DWORD *v5; // esi
  _DWORD *v6; // edi
  int v7; // eax

  v1 = *(_BYTE *)(this + 24);
  if ( v1 && v1 != 7 )
  {
    v2 = *(_DWORD *)(this + 8);
    *(_BYTE *)(v2 + 28) = 1;
    *(_DWORD *)(v2 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, *(_DWORD *)(this + 8));
    return 0;
  }
  if ( *(_DWORD *)(this + 1116) != 2 )
    return 1;
  if ( *(_DWORD *)(this + 1112) != 1 )
    return 1;
  v4 = 16 * *(_DWORD *)(this + 2724);
  v5 = (_DWORD *)(this + 1124);
  if ( this == v4 + this + 16 )
    return 1;
  while ( 1 )
  {
    v6 = v5;
    v5[2] = *(_DWORD *)(this + 16);
    if ( *v5 == 1 )
    {
LABEL_12:
      *(_DWORD *)(this + 16) += 4;
      goto LABEL_13;
    }
    if ( *v5 != 2 )
    {
      if ( *v5 == 3 )
        goto LABEL_12;
      if ( *v5 != 4 )
        break;
    }
    *(_DWORD *)(this + 16) += 8;
LABEL_13:
    v5 += 4;
    if ( v6 == (_DWORD *)(v4 + this + 1124) )
      return 1;
  }
  v7 = *(_DWORD *)(this + 8);
  *(_BYTE *)(v7 + 28) = 1;
  *(_DWORD *)(v7 + 24) = 22;
  sub_10034B08(0, 0, 0, 0, 0, *(_DWORD *)(this + 8));
  return 0;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100708F9) --------------------------------------------------------
char __thiscall sub_100708F9(int this)
{
  unsigned int v1; // edx
  int v2; // eax

  if ( *(_DWORD *)(this + 1116) != 2 || *(_DWORD *)(this + 1112) != 1 )
    return 1;
  v1 = *(_DWORD *)(this + 2728);
  if ( v1 <= 0x63 )
    return sub_10033109(16 * v1 + this + 1124, 4, *(unsigned __int8 *)(this + 45), *(_DWORD *)(this + 40));
  v2 = *(_DWORD *)(this + 8);
  *(_BYTE *)(v2 + 28) = 1;
  *(_DWORD *)(v2 + 24) = 22;
  sub_10034B08(0, 0, 0, 0, 0, *(_DWORD *)(this + 8));
  return 0;
}
// 10033109: using guessed type _DWORD __stdcall sub_10033109(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1007096F) --------------------------------------------------------
char __thiscall sub_1007096F(int this)
{
  unsigned int v1; // edx
  int v2; // eax

  if ( *(_DWORD *)(this + 1116) != 2 || *(_DWORD *)(this + 1112) != 1 )
    return 1;
  v1 = *(_DWORD *)(this + 2728);
  if ( v1 <= 0x63 )
    return sub_10033E92(16 * v1 + this + 1124, 4, *(unsigned __int8 *)(this + 45), *(_DWORD *)(this + 40));
  v2 = *(_DWORD *)(this + 8);
  *(_BYTE *)(v2 + 28) = 1;
  *(_DWORD *)(v2 + 24) = 22;
  sub_10034B08(0, 0, 0, 0, 0, *(_DWORD *)(this + 8));
  return 0;
}
// 10033E92: using guessed type _DWORD __stdcall sub_10033E92(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100709E5) --------------------------------------------------------
char __thiscall sub_100709E5(int this)
{
  unsigned int v1; // edx
  int v2; // eax

  if ( *(_DWORD *)(this + 1116) != 2 || *(_DWORD *)(this + 1112) != 1 )
    return 1;
  v1 = *(_DWORD *)(this + 2728);
  if ( v1 <= 0x63 )
    return sub_10034798(16 * v1 + this + 1124, 4, *(unsigned __int16 *)(this + 46), *(_DWORD *)(this + 40));
  v2 = *(_DWORD *)(this + 8);
  *(_BYTE *)(v2 + 28) = 1;
  *(_DWORD *)(v2 + 24) = 22;
  sub_10034B08(0, 0, 0, 0, 0, *(_DWORD *)(this + 8));
  return 0;
}
// 10034798: using guessed type _DWORD __stdcall sub_10034798(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10070A5B) --------------------------------------------------------
char __thiscall sub_10070A5B(int this)
{
  unsigned int v1; // edx
  int v2; // eax

  if ( *(_DWORD *)(this + 1116) != 2 || *(_DWORD *)(this + 1112) != 1 )
    return 1;
  v1 = *(_DWORD *)(this + 2728);
  if ( v1 <= 0x63 )
    return sub_10035DE6(16 * v1 + this + 1124, 4, *(unsigned __int16 *)(this + 46), *(_DWORD *)(this + 40));
  v2 = *(_DWORD *)(this + 8);
  *(_BYTE *)(v2 + 28) = 1;
  *(_DWORD *)(v2 + 24) = 22;
  sub_10034B08(0, 0, 0, 0, 0, *(_DWORD *)(this + 8));
  return 0;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035DE6: using guessed type _DWORD __stdcall sub_10035DE6(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (10070ADD) --------------------------------------------------------
char __cdecl sub_10070ADD(int a1)
{
  int v1; // eax
  char *v2; // ecx
  int v3; // esi
  int v4; // edx
  char *v5; // edi

  if ( (*(_DWORD *)(a1 + 12) >> 12) & 1 )
    return 1;
  v1 = sub_10035DFA(a1);
  v2 = (char *)&unk_100B0460;
  if ( v1 == -1 || v1 == -2 )
  {
    v4 = v1 >> 6;
    v5 = (char *)&unk_100B0460;
    v3 = v1 & 0x3F;
  }
  else
  {
    v3 = v1 & 0x3F;
    v4 = v1 >> 6;
    v5 = (char *)lpCriticalSection[v1 >> 6] + 56 * v3;
  }
  if ( !v5[41] )
  {
    if ( v1 != -1 && v1 != -2 )
      v2 = (char *)lpCriticalSection[v4] + 56 * v3;
    if ( !(v2[45] & 1) )
      return 1;
  }
  *(_DWORD *)sub_10034888(v2) = 22;
  sub_10034711();
  return 0;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10035DFA: using guessed type _DWORD __cdecl sub_10035DFA(_DWORD);

//----- (10070DD9) --------------------------------------------------------
_DWORD *__stdcall sub_10070DD9(char a1, _DWORD *a2, int a3)
{
  bool v3; // zf
  _DWORD *result; // eax

  v3 = (unsigned __int8)sub_100338ED(a1, a3) == 0;
  result = a2;
  if ( v3 )
    *a2 = -1;
  else
    ++*a2;
  return result;
}
// 100338ED: using guessed type _DWORD __stdcall sub_100338ED(char, _DWORD);

//----- (10070E03) --------------------------------------------------------
_DWORD *__stdcall sub_10070E03(WCHAR a1, _DWORD *a2, int a3)
{
  bool v3; // zf
  _DWORD *result; // eax

  v3 = (unsigned __int8)sub_10035BD9(a1, a3) == 0;
  result = a2;
  if ( v3 )
    *a2 = -1;
  else
    ++*a2;
  return result;
}

//----- (10070ED5) --------------------------------------------------------
bool __thiscall sub_10070ED5(_DWORD *this, char a2, int a3)
{
  bool result; // al

  if ( !((*(_DWORD *)(*this + 12) >> 12) & 1) || *(_DWORD *)(*this + 4) )
    result = sub_10034B17(a2, *this, a3) != -1;
  else
    result = 1;
  return result;
}
// 10034B17: using guessed type _DWORD __cdecl sub_10034B17(_DWORD, _DWORD, _DWORD);

//----- (10070F1D) --------------------------------------------------------
bool __thiscall sub_10070F1D(int *this, WCHAR WideCharStr, int a3)
{
  bool result; // al

  if ( !((*(_DWORD *)(*this + 12) >> 12) & 1) || *(_DWORD *)(*this + 4) )
    result = (unsigned __int16)sub_10035C29(WideCharStr, *this, a3) != -1;
  else
    result = 1;
  return result;
}

//----- (10071A2B) --------------------------------------------------------
int __thiscall sub_10071A2B(void *this, int a2, int a3, _DWORD *a4, int a5)
{
  int result; // eax

  if ( !((*(_DWORD *)(*(_DWORD *)this + 12) >> 12) & 1) || *(_DWORD *)(*(_DWORD *)this + 4) )
    return sub_100359BD(a2, a3, a4, a5);
  result = a3;
  *a4 += a3;
  return result;
}
// 100359BD: using guessed type _DWORD __stdcall sub_100359BD(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (10071A62) --------------------------------------------------------
int __thiscall sub_10071A62(void *this, int a2, int a3, _DWORD *a4, int a5)
{
  int result; // eax

  if ( !((*(_DWORD *)(*(_DWORD *)this + 12) >> 12) & 1) || *(_DWORD *)(*(_DWORD *)this + 4) )
    return sub_10035EBD(a2, a3, a4, a5);
  result = a3;
  *a4 += a3;
  return result;
}
// 10035EBD: using guessed type _DWORD __stdcall sub_10035EBD(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (10071A99) --------------------------------------------------------
void __thiscall sub_10071A99(int *this, int a2, unsigned int a3, _DWORD *a4, int a5)
{
  void *v5; // ebx
  int v6; // eax
  int v7; // esi
  bool v8; // zf
  _DWORD *v9; // eax
  unsigned int v10; // esi

  v5 = this;
  if ( a3 )
  {
    v6 = *this;
    v7 = *(_DWORD *)(*this + 4);
    if ( *(_DWORD *)(*this + 8) == v7 )
    {
      v8 = *(_BYTE *)(v6 + 12) == 0;
      v9 = a4;
      if ( !v8 )
      {
LABEL_8:
        *v9 += a3;
        return;
      }
LABEL_10:
      *v9 = -1;
      return;
    }
    v10 = v7 - *(_DWORD *)(v6 + 8);
    if ( v10 >= a3 )
      v10 = a3;
    sub_100359C2(*(_DWORD *)v6, a2, v10);
    **(_DWORD **)v5 += v10;
    *(_DWORD *)(*(_DWORD *)v5 + 8) += v10;
    v9 = a4;
    if ( *(_BYTE *)(*(_DWORD *)v5 + 12) )
      goto LABEL_8;
    if ( v10 != a3 )
      goto LABEL_10;
    *a4 += v10;
  }
}
// 100359C2: using guessed type _DWORD __cdecl sub_100359C2(_DWORD, _DWORD, _DWORD);

//----- (10071B19) --------------------------------------------------------
_DWORD *__thiscall sub_10071B19(_DWORD *this, int a2, unsigned int a3, _DWORD *a4, int a5)
{
  _DWORD *result; // eax
  int v6; // eax
  int v7; // edi
  bool v8; // zf
  unsigned int v9; // edi
  _DWORD *v10; // [esp+4h] [ebp-4h]

  result = this;
  v10 = this;
  if ( a3 )
  {
    v6 = *this;
    v7 = *(_DWORD *)(*this + 4);
    if ( *(_DWORD *)(*this + 8) == v7 )
    {
      v8 = *(_BYTE *)(v6 + 12) == 0;
      result = a4;
      if ( !v8 )
      {
LABEL_8:
        *result += a3;
        return result;
      }
LABEL_10:
      *result = -1;
      return result;
    }
    v9 = v7 - *(_DWORD *)(v6 + 8);
    if ( v9 >= a3 )
      v9 = a3;
    sub_100359C2(*(_DWORD *)v6, a2, 2 * v9);
    *(_DWORD *)*v10 += 2 * v9;
    *(_DWORD *)(*v10 + 8) += v9;
    result = a4;
    if ( *(_BYTE *)(*v10 + 12) )
      goto LABEL_8;
    if ( v9 != a3 )
      goto LABEL_10;
    *a4 += v9;
  }
  return result;
}
// 100359C2: using guessed type _DWORD __cdecl sub_100359C2(_DWORD, _DWORD, _DWORD);

//----- (10071BA6) --------------------------------------------------------
int __stdcall sub_10071BA6(char *a1, int a2, _DWORD *a3, int a4)
{
  char *v4; // ebx
  int result; // eax
  int i; // [esp+8h] [ebp-10h]
  int v7; // [esp+Ch] [ebp-Ch]

  v4 = a1;
  v7 = *(_DWORD *)(a4 + 24);
  for ( i = *(_DWORD *)(a4 + 28); v4 != &a1[a2]; ++v4 )
  {
    if ( (unsigned __int8)sub_100338ED(*v4, a4) )
      goto LABEL_14;
    if ( !*(_BYTE *)(a4 + 28) || *(_DWORD *)(a4 + 24) != 42 )
    {
      *a3 = -1;
      break;
    }
    if ( (unsigned __int8)sub_100338ED(63, a4) )
LABEL_14:
      ++*a3;
    else
      *a3 = -1;
  }
  *(_DWORD *)(a4 + 24) = v7;
  result = i;
  *(_DWORD *)(a4 + 28) = i;
  return result;
}
// 100338ED: using guessed type _DWORD __stdcall sub_100338ED(char, _DWORD);

//----- (10071C44) --------------------------------------------------------
int __stdcall sub_10071C44(WCHAR *a1, int a2, _DWORD *a3, int a4)
{
  WCHAR *v4; // ebx
  int result; // eax
  int v6; // [esp+8h] [ebp-10h]
  int v7; // [esp+Ch] [ebp-Ch]
  int v8; // [esp+10h] [ebp-8h]

  v4 = a1;
  v7 = *(_DWORD *)(a4 + 24);
  v6 = *(_DWORD *)(a4 + 28);
  v8 = (int)&a1[a2];
  if ( a1 != (WCHAR *)v8 )
  {
    do
    {
      if ( (unsigned __int8)sub_10035BD9(*v4, a4) )
        goto LABEL_14;
      if ( !*(_BYTE *)(a4 + 28) || *(_DWORD *)(a4 + 24) != 42 )
      {
        *a3 = -1;
        break;
      }
      if ( (unsigned __int8)sub_10035BD9(0x3Fu, a4) )
LABEL_14:
        ++*a3;
      else
        *a3 = -1;
      ++v4;
    }
    while ( v4 != (WCHAR *)v8 );
  }
  *(_DWORD *)(a4 + 24) = v7;
  result = v6;
  *(_DWORD *)(a4 + 28) = v6;
  return result;
}

//----- (10071D49) --------------------------------------------------------
int __cdecl sub_10071D49(int a1, int a2, __int16 a3)
{
  int result; // eax

  if ( (unsigned int)(a2 + 1) > 0x100 )
    result = 0;
  else
    result = (unsigned __int16)(a3 & *(_WORD *)(a1 + 2 * a2));
  return result;
}

//----- (1007234E) --------------------------------------------------------
signed int __cdecl sub_1007234E(int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7)
{
  signed int v7; // esi
  char v9; // [esp+4h] [ebp-28h]

  sub_10033AD2(a6);
  v7 = sub_10052FFF(a1, a2, a3, a4, a5, (int)&v9, a7);
  sub_100343D8(&v9);
  return v7;
}
// 10033AD2: using guessed type _DWORD __stdcall sub_10033AD2(_DWORD);
// 100343D8: using guessed type int __thiscall sub_100343D8(_DWORD);

//----- (100723F0) --------------------------------------------------------
signed int __cdecl sub_100723F0(int a1, int a2, _BYTE *a3, unsigned int a4, int a5, int a6, int a7)
{
  signed int v7; // esi
  char v9; // [esp+4h] [ebp-28h]

  sub_10033AD2(a6);
  v7 = sub_100533B3(a1, a2, a3, a4, a5, (int)&v9, a7);
  sub_100343D8(&v9);
  return v7;
}
// 10033AD2: using guessed type _DWORD __stdcall sub_10033AD2(_DWORD);
// 100343D8: using guessed type int __thiscall sub_100343D8(_DWORD);

//----- (100725C0) --------------------------------------------------------
int __cdecl sub_100725C0(int a1, int a2)
{
  int result; // eax

  if ( a1 == -529697949 )
    result = sub_10033F4B(-529697949, a2);
  else
    result = 0;
  return result;
}
// 10033F4B: using guessed type _DWORD __cdecl sub_10033F4B(_DWORD, _DWORD);

//----- (100725E8) --------------------------------------------------------
signed int __cdecl sub_100725E8(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  int v4; // edx
  _DWORD *v5; // ecx
  int v6; // eax
  void (__cdecl *v8)(signed int, signed int); // edi
  int v9; // edx
  int v10; // eax
  int v11; // ebx
  signed int v12; // eax
  int v13; // [esp+8h] [ebp-4h]

  v2 = (_DWORD *)sub_10036340();
  v3 = v2;
  if ( !v2 )
    return 0;
  v4 = *v2;
  v5 = (_DWORD *)*v2;
  v6 = *v2 + 144;
  if ( *v3 == v6 )
    return 0;
  while ( *v5 != a1 )
  {
    v5 += 3;
    if ( v5 == (_DWORD *)v6 )
      return 0;
  }
  if ( !v5 )
    return 0;
  v8 = (void (__cdecl *)(signed int, signed int))v5[2];
  if ( !v8 )
    return 0;
  if ( v8 == (void (__cdecl *)(signed int, signed int))5 )
  {
    v5[2] = 0;
    return 1;
  }
  if ( v8 != (void (__cdecl *)(signed int, signed int))1 )
  {
    v13 = v3[1];
    v3[1] = a2;
    if ( v5[1] != 8 )
    {
      v5[2] = 0;
      ((void (__cdecl *)(_DWORD))v8)(v5[1]);
      goto LABEL_39;
    }
    v9 = v4 + 36;
    v10 = v9 + 108;
    while ( v9 != v10 )
    {
      *(_DWORD *)(v9 + 8) = 0;
      v9 += 12;
    }
    v11 = v3[2];
    if ( *v5 > 0xC0000091 )
    {
      switch ( *v5 )
      {
        case 0xC0000092:
          v12 = 138;
          goto LABEL_36;
        case 0xC0000093:
          v12 = 133;
          goto LABEL_36;
        case 0xC00002B4:
          v12 = 142;
          goto LABEL_36;
      }
      v12 = v3[2];
      if ( *v5 == -1073741131 )
      {
        v12 = 141;
        goto LABEL_36;
      }
    }
    else
    {
      switch ( *v5 )
      {
        case 0xC0000091:
          v12 = 132;
          goto LABEL_36;
        case 0xC000008D:
          v12 = 130;
          goto LABEL_36;
        case 0xC000008E:
          v12 = 131;
          goto LABEL_36;
        case 0xC000008F:
          v12 = 134;
          goto LABEL_36;
      }
      v12 = v3[2];
      if ( *v5 == -1073741680 )
      {
        v12 = 129;
LABEL_36:
        v3[2] = v12;
        goto LABEL_37;
      }
    }
LABEL_37:
    v8(8, v12);
    v3[2] = v11;
LABEL_39:
    v3[1] = v13;
  }
  return -1;
}
// 10036340: using guessed type int sub_10036340(void);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10072785) --------------------------------------------------------
int __stdcall sub_10072785(_DWORD *a1, int **a2, _DWORD *a3)
{
  sub_100360E8(*a1);
  sub_10072942(a2);
  return sub_10033799(*a3);
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);

//----- (1007284F) --------------------------------------------------------
int __cdecl sub_1007284F(int a1)
{
  return __ROR4__(__security_cookie ^ a1, __security_cookie & 0x1F);
}

//----- (10072870) --------------------------------------------------------
int __cdecl sub_10072870(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

//----- (10072942) --------------------------------------------------------
void __thiscall sub_10072942(int **this)
{
  int **v1; // edi
  int v2; // eax
  void (__thiscall *v3)(_DWORD, _DWORD, _DWORD, _DWORD); // esi
  int v4; // [esp+14h] [ebp-20h]

  v1 = this;
  if ( !byte_100B18B8 )
  {
    _InterlockedExchange(&dword_100B18B0, 1);
    v2 = **this;
    if ( v2 )
    {
      if ( v2 == 1 )
        sub_100338FC((unsigned int)&unk_100B1C98);
    }
    else
    {
      if ( dword_100B18B4 != v4 )
      {
        v3 = (void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))sub_1003546D(dword_100B18B4);
        v3(v3, 0, 0, 0);
      }
      sub_100338FC((unsigned int)&unk_100B1C88);
    }
    if ( !**v1 )
      sub_10035EDB(&unk_100A2634, &unk_100A2948);
    sub_10035EDB(&unk_100A2A4C, &unk_100A2B50);
    if ( !*v1[1] )
    {
      byte_100B18B8 = 1;
      *(_BYTE *)v1[2] = 1;
    }
  }
}
// 10033069: using guessed type int sub_10033069(void);
// 100338FC: using guessed type _DWORD __cdecl sub_100338FC(char);
// 1003546D: using guessed type _DWORD __cdecl sub_1003546D(_DWORD);
// 10035EDB: using guessed type _DWORD __cdecl sub_10035EDB(_DWORD, _DWORD);
// 100B18B0: using guessed type int dword_100B18B0;
// 100B18B4: using guessed type int dword_100B18B4;
// 100B18B8: using guessed type char byte_100B18B8;
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10072AD4) --------------------------------------------------------
int __cdecl sub_10072AD4(UINT uExitCode, char a2, int a3)
{
  int result; // eax
  char *v4; // [esp+4h] [ebp-24h]
  int *v5; // [esp+8h] [ebp-20h]
  char *v6; // [esp+Ch] [ebp-1Ch]
  int v7; // [esp+10h] [ebp-18h]
  int v8; // [esp+14h] [ebp-14h]
  char v9; // [esp+1Bh] [ebp-Dh]
  int v10; // [esp+24h] [ebp-4h]

  if ( !a3 && sub_10072BD6() )
    sub_10072C47(uExitCode);
  v9 = 0;
  v4 = &a2;
  v5 = &a3;
  v6 = &v9;
  v10 = 0;
  v8 = 2;
  v7 = 2;
  result = sub_10072785(&v7, (int **)&v4, &v8);
  if ( !a3 )
    sub_10072B90(uExitCode);
  return result;
}

//----- (10072B90) --------------------------------------------------------
void __cdecl __noreturn sub_10072B90(UINT uExitCode)
{
  HANDLE v1; // eax

  if ( sub_10072C28() )
  {
    v1 = GetCurrentProcess();
    TerminateProcess(v1, uExitCode);
  }
  sub_10072C47(uExitCode);
  ExitProcess(uExitCode);
}

//----- (10072BD6) --------------------------------------------------------
bool sub_10072BD6()
{
  HMODULE v0; // eax
  int v1; // ecx
  bool result; // al

  v0 = GetModuleHandleW(0);
  if ( v0
    && *(_WORD *)v0 == 23117
    && (v1 = (int)v0 + *((_DWORD *)v0 + 15), *(_DWORD *)v1 == 17744)
    && *(_WORD *)(v1 + 24) == 267
    && *(_DWORD *)(v1 + 116) > 0xEu )
  {
    result = *(_DWORD *)(v1 + 232) != 0;
  }
  else
  {
    result = 0;
  }
  return result;
}

//----- (10072C28) --------------------------------------------------------
bool sub_10072C28()
{
  bool result; // al

  if ( sub_100362AA() == 1 )
    result = 0;
  else
    result = (unsigned __int8)sub_10035A80() == 0;
  return result;
}
// 10035A80: using guessed type int sub_10035A80(void);
// 100362AA: using guessed type int sub_100362AA(void);

//----- (10072C47) --------------------------------------------------------
FARPROC __cdecl sub_10072C47(int a1)
{
  FARPROC result; // eax
  HMODULE phModule; // [esp+8h] [ebp-10h]

  phModule = 0;
  result = (FARPROC)GetModuleHandleExW(0, L"mscoree.dll", &phModule);
  if ( result )
  {
    result = GetProcAddress(phModule, "CorExitProcess");
    if ( result )
      result = (FARPROC)((int (__thiscall *)(FARPROC, int))result)(result, a1);
  }
  if ( phModule )
    result = (FARPROC)FreeLibrary(phModule);
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10072D04) --------------------------------------------------------
int __cdecl sub_10072D04(int a1)
{
  int result; // eax

  result = a1;
  dword_100B18B4 = a1;
  return result;
}
// 100B18B4: using guessed type int dword_100B18B4;

//----- (10072D3A) --------------------------------------------------------
int __cdecl sub_10072D3A(UINT uExitCode)
{
  return sub_10072AD4(uExitCode, 2, 0);
}

//----- (10072D55) --------------------------------------------------------
int sub_10072D55()
{
  return dword_100B18B0;
}
// 100B18B0: using guessed type int dword_100B18B0;

//----- (10072E03) --------------------------------------------------------
signed int __cdecl sub_10072E03(int a1)
{
  int v1; // ecx
  char *v3; // ebx
  int v4; // ecx
  char **v5; // esi
  signed int v6; // esi
  int v7; // edi
  LPVOID v8; // edx
  int v9; // ecx
  _DWORD *i; // eax
  int v11; // [esp+4h] [ebp-Ch]
  LPVOID lpMem; // [esp+8h] [ebp-8h]
  int v13; // [esp+Ch] [ebp-4h]

  if ( !a1 )
    return 0;
  if ( a1 != 2 && a1 != 1 )
  {
    *(_DWORD *)sub_10034888(v1) = 22;
    sub_10034711();
    return 22;
  }
  sub_1003513E();
  sub_1003576A(0, (int)&unk_100B18C0, 260);
  dword_100B2108 = (int)&unk_100B18C0;
  v3 = (char *)dword_100B211C;
  if ( !dword_100B211C || !*(_BYTE *)dword_100B211C )
    v3 = (char *)&unk_100B18C0;
  v13 = 0;
  v11 = 0;
  sub_10073155(v3, 0, 0, &v13, &v11);
  v5 = (char **)sub_10035DB4(v13, v11, 1);
  if ( !v5 )
  {
    v6 = 12;
    *(_DWORD *)sub_10034888(v4) = 12;
LABEL_13:
    sub_1003603E(0);
    return v6;
  }
  sub_10073155(v3, v5, (char *)&v5[v13], &v13, &v11);
  if ( a1 == 1 )
  {
    dword_100B2114 = (int)v5;
    dword_100B2110 = v13 - 1;
    v6 = 0;
    goto LABEL_13;
  }
  lpMem = 0;
  v7 = sub_10035076(v5, &lpMem);
  if ( v7 )
  {
    sub_1003603E(lpMem);
  }
  else
  {
    v8 = lpMem;
    v9 = 0;
    for ( i = lpMem; *i; ++v9 )
      ++i;
    dword_100B2110 = v9;
    lpMem = 0;
    dword_100B2114 = (int)v8;
    sub_1003603E(0);
    v7 = 0;
  }
  lpMem = 0;
  sub_1003603E(v5);
  return v7;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10035076: using guessed type int __cdecl sub_10035076(_DWORD, _DWORD);
// 1003513E: using guessed type int sub_1003513E(void);
// 10035DB4: using guessed type _DWORD __cdecl sub_10035DB4(_DWORD, _DWORD, _DWORD);
// 100B2108: using guessed type int dword_100B2108;
// 100B2110: using guessed type int dword_100B2110;
// 100B2114: using guessed type int dword_100B2114;
// 100B211C: using guessed type int dword_100B211C;

//----- (10073155) --------------------------------------------------------
_DWORD *__cdecl sub_10073155(char *a1, char **a2, char *a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *v5; // ecx
  char *v6; // esi
  char *v7; // edi
  bool v8; // bh
  char v9; // bl
  int v10; // eax
  char v11; // al
  signed int v12; // ebx
  unsigned int v13; // eax
  bool v14; // dl
  char v15; // al
  int v16; // eax
  _DWORD *result; // eax
  char *v18; // [esp+Ch] [ebp-8h]
  bool v19; // [esp+13h] [ebp-1h]

  v5 = a5;
  *a5 = 0;
  v6 = a3;
  *a4 = 1;
  v7 = a1;
  if ( a2 )
  {
    *a2 = a3;
    ++a2;
  }
  v8 = 0;
  do
  {
    v18 = v7;
    if ( *v7 == 34 )
    {
      v9 = 34;
      v8 = v8 == 0;
      ++v7;
    }
    else
    {
      ++*v5;
      if ( v6 )
        *v6++ = *v7;
      v9 = *v7++;
      v10 = sub_10034B0D(v9);
      v5 = a5;
      if ( v10 )
      {
        ++*a5;
        if ( v6 )
          *v6++ = *v7;
        v7 = v18 + 2;
      }
      if ( !v9 )
      {
        --v7;
        goto LABEL_19;
      }
    }
  }
  while ( v8 || v9 != 32 && v9 != 9 );
  if ( v6 )
    *(v6 - 1) = 0;
LABEL_19:
  v19 = 0;
LABEL_20:
  v11 = *v7;
  if ( *v7 )
  {
    while ( v11 == 32 || v11 == 9 )
      v11 = *++v7;
    if ( v11 )
    {
      if ( a2 )
      {
        *a2 = v6;
        ++a2;
      }
      ++*a4;
      while ( 1 )
      {
        v12 = 1;
        v13 = 0;
        while ( *v7 == 92 )
        {
          ++v7;
          ++v13;
        }
        if ( *v7 == 34 )
          break;
LABEL_42:
        while ( v13 )
        {
          --v13;
          if ( v6 )
            *v6++ = 92;
          ++*v5;
        }
        v15 = *v7;
        if ( !*v7 || !v19 && (v15 == 32 || v15 == 9) )
        {
          if ( v6 )
            *v6++ = 0;
          ++*v5;
          goto LABEL_20;
        }
        if ( v12 )
        {
          if ( v6 )
            *v6++ = v15;
          v16 = sub_10034B0D(*v7);
          v5 = a5;
          if ( v16 )
          {
            ++v7;
            ++*a5;
            if ( v6 )
              *v6++ = *v7;
          }
          ++*a5;
        }
        ++v7;
      }
      if ( !(v13 & 1) )
      {
        v14 = v19;
        if ( v19 )
        {
          if ( v7[1] == 34 )
          {
            ++v7;
            goto LABEL_38;
          }
          v14 = v19;
        }
        v12 = 0;
        v19 = v14 == 0;
      }
LABEL_38:
      v13 >>= 1;
      goto LABEL_42;
    }
  }
  if ( a2 )
    *a2 = 0;
  result = a4;
  ++*result;
  return result;
}
// 10034B0D: using guessed type _DWORD __cdecl sub_10034B0D(_DWORD);

//----- (10073326) --------------------------------------------------------
_DWORD *__cdecl sub_10073326(signed __int16 *a1, signed __int16 **a2, signed __int16 *a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *v5; // eax
  signed __int16 *v6; // edx
  signed __int16 *v7; // ecx
  bool v8; // bl
  signed __int16 *v9; // edi
  signed __int16 **v10; // esi
  signed __int16 v11; // ax
  bool v12; // zf
  signed __int16 v13; // ax
  signed __int16 v14; // di
  unsigned int v15; // ebx
  signed __int16 v16; // di
  bool v17; // al
  signed __int16 v18; // ax
  _DWORD *result; // eax
  signed int v20; // [esp+8h] [ebp-8h]
  bool v21; // [esp+Fh] [ebp-1h]

  v5 = a5;
  v6 = a1;
  *a5 = 0;
  *a4 = 1;
  v7 = a3;
  if ( a2 )
  {
    *a2 = a3;
    ++a2;
  }
  v8 = 0;
  do
  {
    while ( 1 )
    {
      v9 = v6;
      v10 = a2;
      if ( *v6 == 34 )
      {
        v8 = v8 == 0;
        ++v6;
        v11 = 34;
      }
      else
      {
        ++*v5;
        if ( v7 )
        {
          *v7 = *v6;
          ++v7;
        }
        v11 = *v6;
        ++v6;
        if ( !v11 )
        {
          v6 = v9;
          goto LABEL_16;
        }
      }
      if ( !v8 )
        break;
      v5 = a5;
    }
    if ( v11 == 32 )
      break;
    v12 = v11 == 9;
    v5 = a5;
  }
  while ( !v12 );
  if ( v7 )
    *(v7 - 1) = 0;
LABEL_16:
  v21 = 0;
LABEL_17:
  v13 = *v6;
  v14 = *v6;
  if ( *v6 )
  {
    while ( 1 )
    {
      if ( v13 != 32 )
      {
        v14 = v13;
        if ( v13 != 9 )
          break;
      }
      ++v6;
      v13 = *v6;
    }
  }
  if ( v14 )
  {
    if ( v10 )
    {
      *v10 = v7;
      a2 = v10 + 1;
    }
    ++*a4;
    while ( 1 )
    {
      v15 = 0;
      v20 = 1;
      v16 = *v6;
      if ( *v6 == 92 )
      {
        do
        {
          ++v6;
          ++v15;
        }
        while ( *v6 == 92 );
        v16 = *v6;
      }
      if ( v16 == 34 )
        break;
LABEL_36:
      while ( v15 )
      {
        --v15;
        if ( v7 )
        {
          *v7 = 92;
          ++v7;
        }
        ++*a5;
      }
      v18 = *v6;
      if ( !*v6 || !v21 && (v18 == 32 || v18 == 9) )
      {
        v10 = a2;
        if ( v7 )
        {
          *v7 = 0;
          ++v7;
        }
        ++*a5;
        goto LABEL_17;
      }
      if ( v20 )
      {
        if ( v7 )
        {
          *v7 = v18;
          ++v7;
        }
        ++*a5;
      }
      ++v6;
    }
    if ( !(v15 & 1) )
    {
      v17 = v21;
      if ( v21 )
      {
        if ( v6[1] == 34 )
        {
          ++v6;
          goto LABEL_35;
        }
        v17 = v21;
      }
      v20 = 0;
      v21 = v17 == 0;
    }
LABEL_35:
    v15 >>= 1;
    goto LABEL_36;
  }
  if ( v10 )
    *v10 = 0;
  result = a4;
  ++*result;
  return result;
}

//----- (100736FF) --------------------------------------------------------
int __cdecl sub_100736FF(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int v3; // esi

  if ( a1 >= 0x3FFFFFFF || a2 >= 0xFFFFFFFF / a3 || ~(4 * a1) <= a3 * a2 )
    return 0;
  v3 = sub_1003558A(4 * a1 + a3 * a2, 1);
  sub_1003603E(0);
  return v3;
}
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);

//----- (10073761) --------------------------------------------------------
signed int __cdecl sub_10073761(int a1)
{
  return sub_10072E03(a1);
}

//----- (100737E7) --------------------------------------------------------
int sub_100737E7()
{
  int result; // eax

  result = dword_100B1C74;
  if ( !dword_100B1C74 )
  {
    if ( dword_100B1C78 == dword_100B1C74 || sub_10073855() && sub_10073CC8() )
      result = 0;
    else
      result = dword_100B1C74;
  }
  return result;
}
// 100B1C74: using guessed type int dword_100B1C74;
// 100B1C78: using guessed type int dword_100B1C78;

//----- (1007381E) --------------------------------------------------------
int sub_1007381E()
{
  int result; // eax

  result = dword_100B1C78;
  if ( !dword_100B1C78 )
  {
    if ( dword_100B1C74 == dword_100B1C78 || sub_100738C5() && sub_10073D6B() )
      result = 0;
    else
      result = dword_100B1C78;
  }
  return result;
}
// 100B1C74: using guessed type int dword_100B1C74;
// 100B1C78: using guessed type int dword_100B1C78;

//----- (10073855) --------------------------------------------------------
signed int sub_10073855()
{
  signed int result; // eax
  const char *v1; // eax
  char *v2; // esi
  void *v3; // eax
  signed int v4; // edi

  if ( dword_100B1C74 )
    return 0;
  sub_1003513E();
  v1 = (const char *)sub_10035A8F();
  v2 = (char *)v1;
  if ( v1 )
  {
    v3 = sub_100739CB(v1);
    if ( v3 )
    {
      dword_100B1C84 = v3;
      v4 = 0;
      dword_100B1C74 = (int)v3;
    }
    else
    {
      v4 = -1;
    }
    sub_1003603E(0);
    sub_1003603E(v2);
    result = v4;
  }
  else
  {
    sub_1003603E(0);
    result = -1;
  }
  return result;
}
// 1003513E: using guessed type int sub_1003513E(void);
// 10035A8F: using guessed type int sub_10035A8F(void);
// 100B1C74: using guessed type int dword_100B1C74;

//----- (100738C5) --------------------------------------------------------
signed int sub_100738C5()
{
  signed int result; // eax
  __int16 *v1; // eax
  __int16 *v2; // esi
  _DWORD *v3; // eax
  signed int v4; // edi

  if ( dword_100B1C78 )
    return 0;
  v1 = (__int16 *)sub_100346F8();
  v2 = v1;
  if ( v1 )
  {
    v3 = sub_10073AE5(v1);
    if ( v3 )
    {
      dword_100B1C80 = v3;
      v4 = 0;
      dword_100B1C78 = (int)v3;
    }
    else
    {
      v4 = -1;
    }
    sub_1003603E(0);
    sub_1003603E(v2);
    result = v4;
  }
  else
  {
    sub_1003603E(0);
    result = -1;
  }
  return result;
}
// 100346F8: using guessed type int sub_100346F8(void);
// 100B1C78: using guessed type int dword_100B1C78;

//----- (100739CB) --------------------------------------------------------
void *__cdecl sub_100739CB(const char *a1)
{
  const char *v1; // ebx
  int v2; // edx
  const char *v3; // esi
  char i; // al
  void *v5; // eax
  void *v6; // esi
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // [esp+Ch] [ebp-8h]
  _DWORD *v13; // [esp+10h] [ebp-4h]

  v1 = a1;
  v2 = 0;
  v3 = a1;
  for ( i = *a1; i; i = *v3 )
  {
    if ( i != 61 )
      ++v2;
    v3 += strlen(v3) + 1;
  }
  v5 = (void *)sub_1003558A(v2 + 1, 4);
  v6 = v5;
  if ( !v5 )
  {
    sub_1003603E(0);
    return 0;
  }
  v13 = v5;
  while ( 1 )
  {
    if ( !*v1 )
    {
      sub_1003603E(0);
      return v6;
    }
    v8 = strlen(v1);
    v9 = v8 + 1;
    v12 = v8 + 1;
    if ( *v1 != 61 )
      break;
LABEL_13:
    v1 += v9;
  }
  v10 = sub_1003558A(v8 + 1, 1);
  v11 = v10;
  if ( v10 )
  {
    if ( sub_10035E22(v10, v12, v1) )
    {
      sub_1003465D(0, 0, 0, 0, 0);
      JUMPOUT(*(_DWORD *)byte_10073AAC);
    }
    *v13 = v11;
    ++v13;
    sub_1003603E(0);
    v9 = v12;
    goto LABEL_13;
  }
  sub_10073C4A(v6);
  sub_1003603E(0);
  sub_1003603E(0);
  return 0;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 10035E22: using guessed type _DWORD __cdecl sub_10035E22(_DWORD, _DWORD, _DWORD);

//----- (10073AE5) --------------------------------------------------------
_DWORD *__cdecl sub_10073AE5(__int16 *a1)
{
  __int16 *v1; // ebx
  const unsigned __int16 *v2; // esi
  int v3; // edx
  unsigned __int16 v4; // cx
  _DWORD *v5; // esi
  __int16 v7; // dx
  __int16 *v8; // ecx
  int v9; // edi
  __int16 v10; // ax
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // [esp+Ch] [ebp-Ch]
  _DWORD *v15; // [esp+10h] [ebp-8h]

  v1 = a1;
  v2 = (const unsigned __int16 *)a1;
  v3 = 0;
  if ( *a1 )
  {
    v4 = *a1;
    do
    {
      if ( v4 != 61 )
        ++v3;
      v2 += wcslen(v2) + 1;
      v4 = *v2;
    }
    while ( *v2 );
    v1 = a1;
  }
  v5 = (_DWORD *)sub_1003558A(v3 + 1, 4);
  if ( !v5 )
  {
    sub_1003603E(0);
    return 0;
  }
  v15 = v5;
  if ( !*v1 )
  {
LABEL_18:
    sub_1003603E(0);
    return v5;
  }
  v7 = *v1;
  while ( 1 )
  {
    v8 = v1;
    v9 = (int)(v1 + 1);
    do
    {
      v10 = *v8;
      ++v8;
    }
    while ( v10 );
    v11 = (((signed int)v8 - v9) >> 1) + 1;
    v14 = (((signed int)v8 - v9) >> 1) + 1;
    if ( v7 != 61 )
      break;
LABEL_17:
    v1 += v11;
    v7 = *v1;
    if ( !*v1 )
      goto LABEL_18;
  }
  v12 = sub_1003558A(v11, 2);
  v13 = v12;
  if ( v12 )
  {
    if ( sub_10034824(v12, v14, v1) )
    {
      sub_1003465D(0, 0, 0, 0, 0);
      JUMPOUT(*(_DWORD *)byte_10073C02);
    }
    *v15 = v13;
    ++v15;
    sub_1003603E(0);
    v11 = v14;
    goto LABEL_17;
  }
  sub_10073C84(v5);
  sub_1003603E(0);
  sub_1003603E(0);
  return 0;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034824: using guessed type _DWORD __cdecl sub_10034824(_DWORD, _DWORD, _DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);

//----- (10073C4A) --------------------------------------------------------
void __cdecl sub_10073C4A(LPVOID lpMem)
{
  void *v1; // eax
  void **v2; // edi

  if ( lpMem )
  {
    v1 = *(void **)lpMem;
    v2 = (void **)lpMem;
    while ( v1 )
    {
      sub_1003603E(v1);
      ++v2;
      v1 = *v2;
    }
    sub_1003603E(lpMem);
  }
}

//----- (10073C84) --------------------------------------------------------
void __cdecl sub_10073C84(LPVOID lpMem)
{
  void *v1; // eax
  void **v2; // edi

  if ( lpMem )
  {
    v1 = *(void **)lpMem;
    v2 = (void **)lpMem;
    while ( v1 )
    {
      sub_1003603E(v1);
      ++v2;
      v1 = *v2;
    }
    sub_1003603E(lpMem);
  }
}

//----- (10073CC8) --------------------------------------------------------
signed int sub_10073CC8()
{
  LPCWSTR *v0; // edi
  const WCHAR *v1; // eax
  int v2; // eax
  int v3; // ebx
  CHAR *v4; // eax
  CHAR *v5; // esi
  CHAR *v7; // [esp-4h] [ebp-10h]

  v0 = (LPCWSTR *)dword_100B1C78;
  if ( dword_100B1C78 )
  {
    v1 = *(const WCHAR **)dword_100B1C78;
    if ( !*(_DWORD *)dword_100B1C78 )
      return 0;
    while ( 1 )
    {
      v2 = sub_100361AB(0, 0, v1, -1, 0, 0, 0, 0);
      v3 = v2;
      if ( !v2 )
        break;
      v4 = (CHAR *)sub_1003558A(v2, 1);
      v5 = v4;
      v7 = 0;
      if ( !v4 )
        goto LABEL_9;
      if ( !sub_100361AB(0, 0, *v0, -1, v4, v3, 0, 0) )
      {
        v7 = v5;
LABEL_9:
        sub_1003603E(v7);
        return -1;
      }
      sub_10035918(v5, 0);
      sub_1003603E(0);
      ++v0;
      v1 = *v0;
      if ( !*v0 )
        return 0;
    }
  }
  return -1;
}
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 10035918: using guessed type int __cdecl sub_10035918(_DWORD, _DWORD);
// 100B1C78: using guessed type int dword_100B1C78;

//----- (10073D6B) --------------------------------------------------------
signed int sub_10073D6B()
{
  LPCSTR *v0; // edi
  const CHAR *v1; // eax
  int v2; // eax
  int v3; // ebx
  WCHAR *v4; // eax
  WCHAR *v5; // esi

  v0 = (LPCSTR *)dword_100B1C74;
  if ( dword_100B1C74 )
  {
    v1 = *(const CHAR **)dword_100B1C74;
    if ( !*(_DWORD *)dword_100B1C74 )
      return 0;
    while ( 1 )
    {
      v2 = sub_100336B8(0, 0, v1, -1, 0, 0);
      v3 = v2;
      if ( !v2 )
        break;
      v4 = (WCHAR *)sub_1003558A(v2, 2);
      v5 = v4;
      if ( !v4 )
      {
        sub_1003603E(0);
        return -1;
      }
      if ( !sub_100336B8(0, 0, *v0, -1, v4, v3) )
      {
        sub_1003603E(v5);
        return -1;
      }
      sub_100338BB(v5, 0);
      sub_1003603E(0);
      ++v0;
      v1 = *v0;
      if ( !*v0 )
        return 0;
    }
  }
  return -1;
}
// 100338BB: using guessed type int __cdecl sub_100338BB(_DWORD, _DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 100B1C74: using guessed type int dword_100B1C74;

//----- (10073FB1) --------------------------------------------------------
void __cdecl sub_10073FB1(LPVOID *a1)
{
  if ( *a1 != dword_100B1C84 )
    sub_10073C4A(*a1);
}

//----- (10073FD2) --------------------------------------------------------
void __cdecl sub_10073FD2(LPVOID *a1)
{
  if ( *a1 != dword_100B1C80 )
    sub_10073C84(*a1);
}

//----- (10074189) --------------------------------------------------------
void sub_10074189()
{
  sub_10073FB1((LPVOID *)&dword_100B1C74);
  sub_10073FD2((LPVOID *)&dword_100B1C78);
  sub_10073C4A(dword_100B1C84);
  sub_10073C84(dword_100B1C80);
}
// 100B1C74: using guessed type int dword_100B1C74;
// 100B1C78: using guessed type int dword_100B1C78;

//----- (10074282) --------------------------------------------------------
signed int __stdcall sub_10074282(_DWORD *a1, _DWORD **a2, _DWORD *a3)
{
  signed int v3; // esi

  sub_100360E8(*a1);
  v3 = sub_100746D3(a2);
  sub_10033799(*a3);
  return v3;
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);

//----- (100742F3) --------------------------------------------------------
signed int __stdcall sub_100742F3(_DWORD *a1, _DWORD **a2, _DWORD *a3)
{
  signed int v3; // esi

  sub_100360E8(*a1);
  v3 = sub_1007457B(a2);
  sub_10033799(*a3);
  return v3;
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);

//----- (1007443F) --------------------------------------------------------
int __cdecl sub_1007443F(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

//----- (1007448B) --------------------------------------------------------
int __cdecl sub_1007448B(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

//----- (1007457B) --------------------------------------------------------
signed int __thiscall sub_1007457B(_DWORD **this)
{
  _DWORD *v1; // esi
  int v2; // ebx
  int *i; // edi
  int v4; // esi
  const void *v5; // ebx
  signed int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // edi
  int v9; // ST20_4
  char *v10; // ecx
  int v11; // ST20_4
  int *v12; // eax
  int v13; // ecx
  _DWORD **v15; // [esp+Ch] [ebp-8h]

  v15 = this;
  v1 = (_DWORD *)**this;
  if ( v1 )
  {
    v2 = __security_cookie ^ *v1;
    i = (int *)__ROR4__(__security_cookie ^ v1[1], __security_cookie & 0x1F);
    v4 = __ROR4__(__security_cookie ^ v1[2], __security_cookie & 0x1F);
    v5 = (const void *)__ROR4__(v2, __security_cookie & 0x1F);
    if ( i != (int *)v4 )
    {
LABEL_12:
      *i = sub_10035648(*v15[1]);
      *(_DWORD *)**v15 = sub_1003358C(v5);
      *(_DWORD *)(**v15 + 4) = sub_1003358C(i + 1);
      *(_DWORD *)(**v15 + 8) = sub_1003358C(v4);
      return 0;
    }
    v6 = 512;
    v7 = (v4 - (signed int)v5) >> 2;
    if ( v7 <= 0x200 )
      v6 = v7;
    v8 = v6 + v7;
    if ( !(v6 + v7) )
      v8 = 32;
    if ( v8 >= v7 && (v9 = sub_10034108(v5, v8, 4), sub_1003603E(0), (v10 = (char *)v9) != 0)
      || (v8 = v7 + 4, v11 = sub_10034108(v5, v7 + 4, 4), sub_1003603E(0), (v10 = (char *)v11) != 0) )
    {
      v12 = (int *)&v10[4 * v7];
      v5 = v10;
      v4 = (int)&v10[4 * v8];
      v13 = __security_cookie;
      for ( i = v12; v12 != (int *)v4; ++v12 )
        *v12 = v13;
      goto LABEL_12;
    }
  }
  return -1;
}
// 1003358C: using guessed type _DWORD __cdecl sub_1003358C(_DWORD);
// 10035648: using guessed type _DWORD __cdecl sub_10035648(_DWORD);

//----- (100746D3) --------------------------------------------------------
signed int __thiscall sub_100746D3(_DWORD **this)
{
  _DWORD **v1; // ebx
  _DWORD *v2; // edi
  int v4; // edx
  char v5; // cl
  _DWORD *v6; // esi
  _DWORD *v7; // edi
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // ebx
  _DWORD *v11; // eax
  bool v12; // zf
  _DWORD **v13; // [esp+8h] [ebp-14h]
  _DWORD *v14; // [esp+Ch] [ebp-10h]
  _DWORD *v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+18h] [ebp-4h]

  v1 = this;
  v13 = this;
  v2 = (_DWORD *)**this;
  if ( !v2 )
    return -1;
  v4 = __security_cookie;
  v5 = __security_cookie & 0x1F;
  v6 = (_DWORD *)__ROR4__(__security_cookie ^ *v2, __security_cookie & 0x1F);
  v7 = (_DWORD *)__ROR4__(__security_cookie ^ v2[1], __security_cookie & 0x1F);
  if ( v6 && v6 != (_DWORD *)-1 )
  {
    v15 = v7;
    while ( 1 )
    {
      --v7;
      if ( v7 < v6 )
        break;
      v8 = *v7;
      if ( *v7 != v16 )
      {
        *v7 = v16;
        ((void (__thiscall *)(_DWORD))__ROR4__(v4 ^ v8, v5))(__ROR4__(v4 ^ v8, v5));
        v4 = __security_cookie;
        v5 = __security_cookie & 0x1F;
        v9 = (_DWORD *)**v1;
        v10 = (_DWORD *)__ROR4__(__security_cookie ^ *v9, __security_cookie & 0x1F);
        v11 = (_DWORD *)__ROR4__(__security_cookie ^ v9[1], __security_cookie & 0x1F);
        v12 = v10 == v6;
        v14 = v10;
        v1 = v13;
        if ( !v12 || v11 != v15 )
        {
          v6 = v14;
          v7 = v11;
          v15 = v11;
        }
      }
    }
    if ( v6 != (_DWORD *)-1 )
    {
      sub_1003603E(v6);
      v4 = __security_cookie;
    }
    *(_DWORD *)**v1 = v4;
    *(_DWORD *)(**v1 + 4) = v4;
    *(_DWORD *)(**v1 + 8) = v4;
  }
  return 0;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1007481A) --------------------------------------------------------
int __cdecl sub_1007481A(char a1)
{
  return sub_1003310E((unsigned int)&unk_100B1C88, a1);
}
// 1003310E: using guessed type _DWORD __cdecl sub_1003310E(char, char);

//----- (10074835) --------------------------------------------------------
signed int __cdecl sub_10074835(char a1)
{
  int v2; // [esp+10h] [ebp-1Ch]
  char *v3; // [esp+14h] [ebp-18h]
  int v4; // [esp+18h] [ebp-14h]
  int v5; // [esp+28h] [ebp-4h]

  v3 = &a1;
  v5 = 0;
  v4 = 2;
  v2 = 2;
  return sub_10074282(&v2, (_DWORD **)&v3, &v4);
}

//----- (10074882) --------------------------------------------------------
signed int __cdecl sub_10074882(_DWORD *a1)
{
  int v2; // eax

  if ( !a1 )
    return -1;
  if ( *a1 == a1[2] )
  {
    v2 = __security_cookie;
    *a1 = __security_cookie;
    a1[1] = v2;
    a1[2] = v2;
  }
  return 0;
}

//----- (100748B5) --------------------------------------------------------
signed int __cdecl sub_100748B5(char a1, char a2)
{
  char *v3; // [esp+0h] [ebp-14h]
  char *v4; // [esp+4h] [ebp-10h]
  int v5; // [esp+8h] [ebp-Ch]
  int v6; // [esp+Ch] [ebp-8h]

  v3 = &a1;
  v4 = &a2;
  v6 = 2;
  v5 = 2;
  return sub_100742F3(&v5, (_DWORD **)&v3, &v6);
}

//----- (100748F4) --------------------------------------------------------
char sub_100748F4()
{
  dword_100B1CD8[0] = (int)&off_100B0370;
  return 1;
}
// 100B0370: using guessed type wchar_t *off_100B0370;
// 100B1CD8: using guessed type int dword_100B1CD8[];

//----- (10074904) --------------------------------------------------------
char sub_10074904()
{
  sub_100337E9(&unk_100B1C88);
  sub_100337E9(&unk_100B1C98);
  return 1;
}
// 100337E9: using guessed type _DWORD __cdecl sub_100337E9(_DWORD);

//----- (10074924) --------------------------------------------------------
char sub_10074924()
{
  return 1;
}

//----- (10074927) --------------------------------------------------------
char sub_10074927()
{
  return 1;
}

//----- (1007492A) --------------------------------------------------------
char sub_1007492A()
{
  sub_10034CF7();
  return 1;
}
// 10034CF7: using guessed type int sub_10034CF7(void);

//----- (10074934) --------------------------------------------------------
char sub_10074934()
{
  return 1;
}

//----- (10074937) --------------------------------------------------------
char sub_10074937()
{
  return 1;
}

//----- (10074973) --------------------------------------------------------
int sub_10074973()
{
  return sub_10033136(0);
}
// 10033136: using guessed type _DWORD __cdecl sub_10033136(char);

//----- (1007497E) --------------------------------------------------------
char sub_1007497E()
{
  sub_10074A5A((LPVOID *)dword_100B20FC);
  return 1;
}
// 100B20FC: using guessed type int dword_100B20FC[];

//----- (100749FE) --------------------------------------------------------
char sub_100749FE()
{
  return 1;
}

//----- (10074A07) --------------------------------------------------------
int __cdecl sub_10074A07(int a1)
{
  return __security_cookie ^ __ROR4__(a1, 32 - (__security_cookie & 0x1F));
}

//----- (10074A5A) --------------------------------------------------------
LPVOID __stdcall sub_10074A5A(LPVOID *a1)
{
  LPVOID result; // eax

  result = *a1;
  if ( !_InterlockedExchangeAdd((volatile signed __int32 *)*a1, 0xFFFFFFFF) && *a1 != &unk_100B04A8 )
  {
    result = (LPVOID)sub_1003603E(*a1);
    *a1 = &unk_100B04A8;
  }
  return result;
}

//----- (10074AC3) --------------------------------------------------------
int sub_10074AC3()
{
  return sub_10035C24(&off_100A5938, &unk_100A59B8);
}
// 10035C24: using guessed type _DWORD __cdecl sub_10035C24(_DWORD, _DWORD);
// 100A5938: using guessed type int (*off_100A5938)();

//----- (10074AD9) --------------------------------------------------------
bool sub_10074AD9()
{
  return sub_10036340() != 0;
}
// 10036340: using guessed type int sub_10036340(void);

//----- (10074AE6) --------------------------------------------------------
char sub_10074AE6()
{
  sub_10034E87();
  return 1;
}
// 10034E87: using guessed type int sub_10034E87(void);

//----- (10074AF0) --------------------------------------------------------
char __cdecl sub_10074AF0(char a1)
{
  if ( !a1 )
    return sub_1003445F(&off_100A5938, &unk_100A59B8);
  if ( lpMem )
    sub_100338F7();
  return 1;
}
// 100338F7: using guessed type int sub_100338F7(void);
// 1003445F: using guessed type _DWORD __cdecl sub_1003445F(_DWORD, _DWORD);
// 100A5938: using guessed type int (*off_100A5938)();

//----- (10074B2C) --------------------------------------------------------
char __cdecl sub_10074B2C(int a1)
{
  sub_10034BA3(a1);
  return 1;
}
// 10034BA3: using guessed type int __cdecl sub_10034BA3(_DWORD);

//----- (10074B9B) --------------------------------------------------------
void __noreturn sub_10074B9B()
{
  int v0; // edx
  int v1; // ecx
  void (__thiscall *v2)(_DWORD); // esi

  v2 = *(void (__thiscall **)(_DWORD))(sub_10034E4B() + 12);
  if ( v2 )
    v2(v2);
  sub_100354D1(v1, v0);
}
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10074BE6) --------------------------------------------------------
int __cdecl sub_10074BE6(LPVOID lpMem)
{
  return sub_1003603E(lpMem);
}

//----- (10074C07) --------------------------------------------------------
int __cdecl sub_10074C07(SIZE_T a1)
{
  return sub_10034C52(a1);
}

//----- (10074C3D) --------------------------------------------------------
void __noreturn sub_10074C3D()
{
  if ( sub_100359D6() )
    sub_10035BFC(22);
  if ( dword_100B0280 & 2 )
  {
    if ( IsProcessorFeaturePresent(0x17u) )
      __fastfail(7u);
    sub_10035B11(3, 1073741845, 1);
  }
  sub_10035E5E(3u);
  JUMPOUT(*(_DWORD *)byte_10074C80);
}
// 100359D6: using guessed type int sub_100359D6(void);
// 10035B11: using guessed type _DWORD __cdecl sub_10035B11(_DWORD, _DWORD, _DWORD);
// 10035BFC: using guessed type _DWORD __cdecl sub_10035BFC(_DWORD);
// 100B0280: using guessed type int dword_100B0280;

//----- (10074C92) --------------------------------------------------------
char __cdecl sub_10074C92(char a1, unsigned int a2, unsigned int a3)
{
  bool v3; // cf
  bool v4; // zf

  if ( a1 & 4 )
    return 1;
  if ( !(a1 & 1) )
    return 0;
  if ( a1 & 2 )
  {
    if ( a3 > 0x80000000 )
      return 1;
    if ( a3 >= 0x80000000 )
    {
      v3 = 0;
      v4 = a2 == 0;
      goto LABEL_10;
    }
    return 0;
  }
  if ( a3 > 0x7FFFFFFF )
    return 1;
  if ( a3 < 0x7FFFFFFF )
    return 0;
  v3 = a2 < 0xFFFFFFFF;
  v4 = a2 == -1;
LABEL_10:
  if ( v3 || v4 )
    return 0;
  return 1;
}

//----- (10074CE3) --------------------------------------------------------
_DWORD *__cdecl sub_10074CE3(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = a2;
  a1[1] = a3;
  if ( a3 )
    *a3 = a2;
  return result;
}

//----- (10074D04) --------------------------------------------------------
_DWORD *__cdecl sub_10074D04(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = a2;
  a1[1] = a3;
  if ( a3 )
    *a3 = a2;
  return result;
}
