
//----- (1005AEA8) --------------------------------------------------------
char __thiscall sub_1005AEA8(_DWORD *this, char a2)
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
      sub_10034FD1(HIDWORD(v9), v9, a2);
    else
      sub_10035733(HIDWORD(v9), a2);
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
// 10034FD1: using guessed type _DWORD __stdcall sub_10034FD1(_DWORD, _DWORD, char);
// 10035193: using guessed type _DWORD __stdcall sub_10035193(_DWORD);
// 10035463: using guessed type _DWORD __stdcall sub_10035463(_DWORD);
// 1003562F: using guessed type int __thiscall sub_1003562F(_DWORD);
// 100356FC: using guessed type _DWORD __stdcall sub_100356FC(_DWORD);
// 10035733: using guessed type _DWORD __stdcall sub_10035733(_DWORD, char);
// 100358CD: using guessed type _DWORD __stdcall sub_100358CD(_DWORD);
// 10035ACB: using guessed type _DWORD __stdcall sub_10035ACB(_DWORD);
// 10035EB3: using guessed type _DWORD __stdcall sub_10035EB3(_DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1005B0AB) --------------------------------------------------------
char __thiscall sub_1005B0AB(_DWORD *this, char a2)
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
    sub_10034522(v15, v14, a2);
  else
    sub_1003387F(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_BYTE *)v2[12] != 48) )
  {
    *(_BYTE *)--v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 1003387F: using guessed type _DWORD __stdcall sub_1003387F(_DWORD, char);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034522: using guessed type _DWORD __stdcall sub_10034522(_DWORD, _DWORD, char);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10036089: using guessed type _DWORD __stdcall sub_10036089(_DWORD, _DWORD);

//----- (1005B29B) --------------------------------------------------------
char __thiscall sub_1005B29B(_DWORD *this, char a2)
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
    sub_10035A76(v15, v14, a2);
  else
    sub_10035549(v15, a2);
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
// 10035549: using guessed type _DWORD __stdcall sub_10035549(_DWORD, char);
// 10035A76: using guessed type _DWORD __stdcall sub_10035A76(_DWORD, _DWORD, char);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);

//----- (1005B491) --------------------------------------------------------
char __thiscall sub_1005B491(_DWORD *this, char a2)
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
      sub_10035323(HIDWORD(v9), v9, a2);
    else
      sub_100352CE(HIDWORD(v9), a2);
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
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10033F69: using guessed type _DWORD __stdcall sub_10033F69(_DWORD);
// 100344FA: using guessed type _DWORD __stdcall sub_100344FA(_DWORD);
// 10034847: using guessed type _DWORD __stdcall sub_10034847(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034D97: using guessed type _DWORD __stdcall sub_10034D97(_DWORD);
// 10034DC9: using guessed type int __thiscall sub_10034DC9(_DWORD);
// 100352CE: using guessed type _DWORD __stdcall sub_100352CE(_DWORD, char);
// 10035323: using guessed type _DWORD __stdcall sub_10035323(_DWORD, _DWORD, char);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);
// 10035C79: using guessed type _DWORD __stdcall sub_10035C79(_DWORD);
// 10035DE1: using guessed type _DWORD __stdcall sub_10035DE1(_DWORD);
// 10035EB8: using guessed type _DWORD __stdcall sub_10035EB8(_DWORD);

//----- (1005B699) --------------------------------------------------------
char __thiscall sub_1005B699(_DWORD *this, char a2)
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
    sub_100338F2(v15, v14, a2);
  else
    sub_10033CCB(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_WORD *)v2[12] != 48) )
  {
    v2[12] -= 2;
    *(_WORD *)v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 100338F2: using guessed type _DWORD __stdcall sub_100338F2(_DWORD, _DWORD, char);
// 10033CCB: using guessed type _DWORD __stdcall sub_10033CCB(_DWORD, char);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);

//----- (1005B88F) --------------------------------------------------------
char __thiscall sub_1005B88F(_DWORD *this, char a2)
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
    sub_10034DCE(v15, v14, a2);
  else
    sub_100345B3(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_WORD *)v2[12] != 48) )
  {
    v2[12] -= 2;
    *(_WORD *)v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 100345B3: using guessed type _DWORD __stdcall sub_100345B3(_DWORD, char);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034DCE: using guessed type _DWORD __stdcall sub_10034DCE(_DWORD, _DWORD, char);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);

//----- (1005BA85) --------------------------------------------------------
char __thiscall sub_1005BA85(_DWORD *this, char a2)
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
      sub_10034C1B(HIDWORD(v9), v9, a2);
    else
      sub_100333E8(HIDWORD(v9), a2);
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
// 100333E8: using guessed type _DWORD __stdcall sub_100333E8(_DWORD, char);
// 10033839: using guessed type _DWORD __stdcall sub_10033839(_DWORD);
// 10033D48: using guessed type _DWORD __stdcall sub_10033D48(_DWORD);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 100341F3: using guessed type _DWORD __stdcall sub_100341F3(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034C1B: using guessed type _DWORD __stdcall sub_10034C1B(_DWORD, _DWORD, char);
// 10035774: using guessed type _DWORD __stdcall sub_10035774(_DWORD);
// 10035AAD: using guessed type _DWORD __stdcall sub_10035AAD(_DWORD);
// 10035ABC: using guessed type int __thiscall sub_10035ABC(_DWORD);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);
// 10035C74: using guessed type _DWORD __stdcall sub_10035C74(_DWORD);
// 100362D7: using guessed type _DWORD __stdcall sub_100362D7(_DWORD);

//----- (1005BC8D) --------------------------------------------------------
char __thiscall sub_1005BC8D(_DWORD *this, char a2)
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
    sub_1003393D(v15, v14, a2);
  else
    sub_10033618(v15, a2);
  if ( (v2[7] >> 7) & 1 && (!v2[13] || *(_WORD *)v2[12] != 48) )
  {
    v2[12] -= 2;
    *(_WORD *)v2[12] = 48;
    ++v2[13];
  }
  return 1;
}
// 10033618: using guessed type _DWORD __stdcall sub_10033618(_DWORD, char);
// 1003393D: using guessed type _DWORD __stdcall sub_1003393D(_DWORD, _DWORD, char);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035BB6: using guessed type _DWORD __stdcall sub_10035BB6(_DWORD, _DWORD);

//----- (1005BE83) --------------------------------------------------------
int __thiscall sub_1005BE83(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  _BYTE *i; // ebx
  int v11; // edi
  char v12; // al
  int v13; // ecx
  int result; // eax

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = sub_10035AD0(v4);
  v7 = a2;
  v8 = (int)v5 + v6 - 1;
  v3[12] = v8;
  v9 = (int)v5 + v6 - 1;
  for ( i = (_BYTE *)v8; ; i = (_BYTE *)v3[12] )
  {
    v11 = v3[9];
    if ( v11 <= 0 && !v7 )
      break;
    v3[9] = v11 - 1;
    v12 = v7 & 7;
    v7 >>= 3;
    *i = v12 + 48;
    v9 = --v3[12];
  }
  v13 = v8 - v9;
  result = v9 + 1;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005BEFE) --------------------------------------------------------
int __thiscall sub_1005BEFE(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  _BYTE *i; // ebx
  int v11; // edi
  char v12; // al
  int v13; // ecx
  int result; // eax

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = sub_10035AD0(v4);
  v7 = a2;
  v8 = (int)v5 + v6 - 1;
  v3[12] = v8;
  v9 = (int)v5 + v6 - 1;
  for ( i = (_BYTE *)v8; ; i = (_BYTE *)v3[12] )
  {
    v11 = v3[9];
    if ( v11 <= 0 && !v7 )
      break;
    v3[9] = v11 - 1;
    v12 = v7 & 7;
    v7 >>= 3;
    *i = v12 + 48;
    v9 = --v3[12];
  }
  v13 = v8 - v9;
  result = v9 + 1;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005BF79) --------------------------------------------------------
int __thiscall sub_1005BF79(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  _BYTE *i; // ebx
  int v11; // edi
  char v12; // al
  int v13; // ecx
  int result; // eax

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = sub_10035AD0(v4);
  v7 = a2;
  v8 = (int)v5 + v6 - 1;
  v3[12] = v8;
  v9 = (int)v5 + v6 - 1;
  for ( i = (_BYTE *)v8; ; i = (_BYTE *)v3[12] )
  {
    v11 = v3[9];
    if ( v11 <= 0 && !v7 )
      break;
    v3[9] = v11 - 1;
    v12 = v7 & 7;
    v7 >>= 3;
    *i = v12 + 48;
    v9 = --v3[12];
  }
  v13 = v8 - v9;
  result = v9 + 1;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005BFF4) --------------------------------------------------------
int __thiscall sub_1005BFF4(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  _BYTE *i; // ebx
  int v11; // edi
  char v12; // al
  int v13; // ecx
  int result; // eax

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = sub_10035AD0(v4);
  v7 = a2;
  v8 = (int)v5 + v6 - 1;
  v3[12] = v8;
  v9 = (int)v5 + v6 - 1;
  for ( i = (_BYTE *)v8; ; i = (_BYTE *)v3[12] )
  {
    v11 = v3[9];
    if ( v11 <= 0 && !v7 )
      break;
    v3[9] = v11 - 1;
    v12 = v7 & 7;
    v7 >>= 3;
    *i = v12 + 48;
    v9 = --v3[12];
  }
  v13 = v8 - v9;
  result = v9 + 1;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005C06F) --------------------------------------------------------
int __thiscall sub_1005C06F(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  _BYTE *i; // ebx
  int v11; // edi
  char v12; // al
  int v13; // ecx
  int result; // eax

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = sub_10035AD0(v4);
  v7 = a2;
  v8 = (int)v5 + v6 - 1;
  v3[12] = v8;
  v9 = (int)v5 + v6 - 1;
  for ( i = (_BYTE *)v8; ; i = (_BYTE *)v3[12] )
  {
    v11 = v3[9];
    if ( v11 <= 0 && !v7 )
      break;
    v3[9] = v11 - 1;
    v12 = v7 & 7;
    v7 >>= 3;
    *i = v12 + 48;
    v9 = --v3[12];
  }
  v13 = v8 - v9;
  result = v9 + 1;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005C0EA) --------------------------------------------------------
int __thiscall sub_1005C0EA(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  _BYTE *i; // ebx
  int v11; // edi
  char v12; // al
  int v13; // ecx
  int result; // eax

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = sub_10035AD0(v4);
  v7 = a2;
  v8 = (int)v5 + v6 - 1;
  v3[12] = v8;
  v9 = (int)v5 + v6 - 1;
  for ( i = (_BYTE *)v8; ; i = (_BYTE *)v3[12] )
  {
    v11 = v3[9];
    if ( v11 <= 0 && !v7 )
      break;
    v3[9] = v11 - 1;
    v12 = v7 & 7;
    v7 >>= 3;
    *i = v12 + 48;
    v9 = --v3[12];
  }
  v13 = v8 - v9;
  result = v9 + 1;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005C165) --------------------------------------------------------
int __thiscall sub_1005C165(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  _WORD *v8; // ecx
  int v9; // eax
  int v10; // ebx
  char v11; // di
  int v12; // ecx
  int result; // eax
  _WORD *v14; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = sub_10034932();
  v7 = a2;
  v8 = (_WORD *)(v5 + 2 * --v6);
  v14 = v8;
  v9 = v5 + 2 * v6;
  for ( v3[12] = v8; ; v8 = (_WORD *)v3[12] )
  {
    v10 = v3[9];
    v11 = v7;
    if ( v10 <= 0 && !v7 )
      break;
    v7 >>= 3;
    v3[9] = v10 - 1;
    *v8 = (v11 & 7) + 48;
    v3[12] -= 2;
    v9 = v3[12];
  }
  v12 = ((signed int)v14 - v9) >> 1;
  result = v9 + 2;
  v3[13] = v12;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005C1F4) --------------------------------------------------------
int __thiscall sub_1005C1F4(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  _WORD *v8; // ecx
  int v9; // eax
  int v10; // ebx
  char v11; // di
  int v12; // ecx
  int result; // eax
  _WORD *v14; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = sub_10034932();
  v7 = a2;
  v8 = (_WORD *)(v5 + 2 * --v6);
  v14 = v8;
  v9 = v5 + 2 * v6;
  for ( v3[12] = v8; ; v8 = (_WORD *)v3[12] )
  {
    v10 = v3[9];
    v11 = v7;
    if ( v10 <= 0 && !v7 )
      break;
    v7 >>= 3;
    v3[9] = v10 - 1;
    *v8 = (v11 & 7) + 48;
    v3[12] -= 2;
    v9 = v3[12];
  }
  v12 = ((signed int)v14 - v9) >> 1;
  result = v9 + 2;
  v3[13] = v12;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005C283) --------------------------------------------------------
int __thiscall sub_1005C283(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  _WORD *v8; // ecx
  int v9; // eax
  int v10; // ebx
  char v11; // di
  int v12; // ecx
  int result; // eax
  _WORD *v14; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = sub_10034932();
  v7 = a2;
  v8 = (_WORD *)(v5 + 2 * --v6);
  v14 = v8;
  v9 = v5 + 2 * v6;
  for ( v3[12] = v8; ; v8 = (_WORD *)v3[12] )
  {
    v10 = v3[9];
    v11 = v7;
    if ( v10 <= 0 && !v7 )
      break;
    v7 >>= 3;
    v3[9] = v10 - 1;
    *v8 = (v11 & 7) + 48;
    v3[12] -= 2;
    v9 = v3[12];
  }
  v12 = ((signed int)v14 - v9) >> 1;
  result = v9 + 2;
  v3[13] = v12;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005C312) --------------------------------------------------------
int __thiscall sub_1005C312(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  _WORD *v8; // ecx
  int v9; // eax
  int v10; // ebx
  char v11; // di
  int v12; // ecx
  int result; // eax
  _WORD *v14; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = sub_10034932();
  v7 = a2;
  v8 = (_WORD *)(v5 + 2 * --v6);
  v14 = v8;
  v9 = v5 + 2 * v6;
  for ( v3[12] = v8; ; v8 = (_WORD *)v3[12] )
  {
    v10 = v3[9];
    v11 = v7;
    if ( v10 <= 0 && !v7 )
      break;
    v7 >>= 3;
    v3[9] = v10 - 1;
    *v8 = (v11 & 7) + 48;
    v3[12] -= 2;
    v9 = v3[12];
  }
  v12 = ((signed int)v14 - v9) >> 1;
  result = v9 + 2;
  v3[13] = v12;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005C3A1) --------------------------------------------------------
int __thiscall sub_1005C3A1(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  _WORD *v8; // ecx
  int v9; // eax
  int v10; // ebx
  char v11; // di
  int v12; // ecx
  int result; // eax
  _WORD *v14; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = sub_10034932();
  v7 = a2;
  v8 = (_WORD *)(v5 + 2 * --v6);
  v14 = v8;
  v9 = v5 + 2 * v6;
  for ( v3[12] = v8; ; v8 = (_WORD *)v3[12] )
  {
    v10 = v3[9];
    v11 = v7;
    if ( v10 <= 0 && !v7 )
      break;
    v7 >>= 3;
    v3[9] = v10 - 1;
    *v8 = (v11 & 7) + 48;
    v3[12] -= 2;
    v9 = v3[12];
  }
  v12 = ((signed int)v14 - v9) >> 1;
  result = v9 + 2;
  v3[13] = v12;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005C430) --------------------------------------------------------
int __thiscall sub_1005C430(_DWORD *this, unsigned int a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  _WORD *v8; // ecx
  int v9; // eax
  int v10; // ebx
  char v11; // di
  int v12; // ecx
  int result; // eax
  _WORD *v14; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = sub_10034932();
  v7 = a2;
  v8 = (_WORD *)(v5 + 2 * --v6);
  v14 = v8;
  v9 = v5 + 2 * v6;
  for ( v3[12] = v8; ; v8 = (_WORD *)v3[12] )
  {
    v10 = v3[9];
    v11 = v7;
    if ( v10 <= 0 && !v7 )
      break;
    v7 >>= 3;
    v3[9] = v10 - 1;
    *v8 = (v11 & 7) + 48;
    v3[12] -= 2;
    v9 = v3[12];
  }
  v12 = ((signed int)v14 - v9) >> 1;
  result = v9 + 2;
  v3[13] = v12;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005C4BF) --------------------------------------------------------
_BYTE *__thiscall sub_1005C4BF(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  unsigned int v6; // ebx
  _BYTE *v7; // edi
  _BYTE *v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edi
  _BYTE *result; // eax
  _BYTE *v13; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = a2;
  v7 = (char *)v5 + sub_10035AD0(v4) - 1;
  v13 = v7;
  v8 = v7;
  for ( v3[12] = v7; ; v7 = (_BYTE *)v3[12] )
  {
    v9 = v3[9];
    if ( v9 <= 0 && !v6 )
      break;
    v3[9] = v9 - 1;
    v10 = v6 % 0xA + 48;
    v6 /= 0xAu;
    if ( (char)v10 > 57 )
      LOBYTE(v10) = 32 * (a3 ^ 1) + 7 + v10;
    *v7 = v10;
    v8 = (_BYTE *)--v3[12];
  }
  v11 = v13 - v8;
  result = v8 + 1;
  v3[13] = v11;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005C567) --------------------------------------------------------
_BYTE *__thiscall sub_1005C567(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  unsigned int v6; // ebx
  _BYTE *v7; // edi
  _BYTE *v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edi
  _BYTE *result; // eax
  _BYTE *v13; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = a2;
  v7 = (char *)v5 + sub_10035AD0(v4) - 1;
  v13 = v7;
  v8 = v7;
  for ( v3[12] = v7; ; v7 = (_BYTE *)v3[12] )
  {
    v9 = v3[9];
    if ( v9 <= 0 && !v6 )
      break;
    v3[9] = v9 - 1;
    v10 = v6 % 0xA + 48;
    v6 /= 0xAu;
    if ( (char)v10 > 57 )
      LOBYTE(v10) = 32 * (a3 ^ 1) + 7 + v10;
    *v7 = v10;
    v8 = (_BYTE *)--v3[12];
  }
  v11 = v13 - v8;
  result = v8 + 1;
  v3[13] = v11;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005C60F) --------------------------------------------------------
_BYTE *__thiscall sub_1005C60F(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  unsigned int v6; // ebx
  _BYTE *v7; // edi
  _BYTE *v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edi
  _BYTE *result; // eax
  _BYTE *v13; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = a2;
  v7 = (char *)v5 + sub_10035AD0(v4) - 1;
  v13 = v7;
  v8 = v7;
  for ( v3[12] = v7; ; v7 = (_BYTE *)v3[12] )
  {
    v9 = v3[9];
    if ( v9 <= 0 && !v6 )
      break;
    v3[9] = v9 - 1;
    v10 = v6 % 0xA + 48;
    v6 /= 0xAu;
    if ( (char)v10 > 57 )
      LOBYTE(v10) = 32 * (a3 ^ 1) + 7 + v10;
    *v7 = v10;
    v8 = (_BYTE *)--v3[12];
  }
  v11 = v13 - v8;
  result = v8 + 1;
  v3[13] = v11;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005C6B7) --------------------------------------------------------
_BYTE *__thiscall sub_1005C6B7(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  unsigned int v6; // ebx
  _BYTE *v7; // edi
  _BYTE *v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edi
  _BYTE *result; // eax
  _BYTE *v13; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = a2;
  v7 = (char *)v5 + sub_10035AD0(v4) - 1;
  v13 = v7;
  v8 = v7;
  for ( v3[12] = v7; ; v7 = (_BYTE *)v3[12] )
  {
    v9 = v3[9];
    if ( v9 <= 0 && !v6 )
      break;
    v3[9] = v9 - 1;
    v10 = v6 % 0xA + 48;
    v6 /= 0xAu;
    if ( (char)v10 > 57 )
      LOBYTE(v10) = 32 * (a3 ^ 1) + 7 + v10;
    *v7 = v10;
    v8 = (_BYTE *)--v3[12];
  }
  v11 = v13 - v8;
  result = v8 + 1;
  v3[13] = v11;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005C75F) --------------------------------------------------------
_BYTE *__thiscall sub_1005C75F(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  unsigned int v6; // ebx
  _BYTE *v7; // edi
  _BYTE *v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edi
  _BYTE *result; // eax
  _BYTE *v13; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = a2;
  v7 = (char *)v5 + sub_10035AD0(v4) - 1;
  v13 = v7;
  v8 = v7;
  for ( v3[12] = v7; ; v7 = (_BYTE *)v3[12] )
  {
    v9 = v3[9];
    if ( v9 <= 0 && !v6 )
      break;
    v3[9] = v9 - 1;
    v10 = v6 % 0xA + 48;
    v6 /= 0xAu;
    if ( (char)v10 > 57 )
      LOBYTE(v10) = 32 * (a3 ^ 1) + 7 + v10;
    *v7 = v10;
    v8 = (_BYTE *)--v3[12];
  }
  v11 = v13 - v8;
  result = v8 + 1;
  v3[13] = v11;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005C807) --------------------------------------------------------
_BYTE *__thiscall sub_1005C807(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  unsigned int v6; // ebx
  _BYTE *v7; // edi
  _BYTE *v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edi
  _BYTE *result; // eax
  _BYTE *v13; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = a2;
  v7 = (char *)v5 + sub_10035AD0(v4) - 1;
  v13 = v7;
  v8 = v7;
  for ( v3[12] = v7; ; v7 = (_BYTE *)v3[12] )
  {
    v9 = v3[9];
    if ( v9 <= 0 && !v6 )
      break;
    v3[9] = v9 - 1;
    v10 = v6 % 0xA + 48;
    v6 /= 0xAu;
    if ( (char)v10 > 57 )
      LOBYTE(v10) = 32 * (a3 ^ 1) + 7 + v10;
    *v7 = v10;
    v8 = (_BYTE *)--v3[12];
  }
  v11 = v13 - v8;
  result = v8 + 1;
  v3[13] = v11;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005C8AF) --------------------------------------------------------
int __thiscall sub_1005C8AF(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // ebx
  _WORD *v7; // edi
  _WORD *v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edi
  int result; // eax
  _WORD *v13; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = a2;
  v7 = (_WORD *)(v5 + 2 * sub_10034932() - 2);
  v13 = v7;
  v8 = v7;
  for ( v3[12] = v7; ; v7 = (_WORD *)v3[12] )
  {
    v9 = v3[9];
    if ( v9 <= 0 && !v6 )
      break;
    v3[9] = v9 - 1;
    v10 = (unsigned __int16)(v6 % 0xA + 48);
    v6 /= 0xAu;
    if ( v10 > 0x39 )
      LOBYTE(v10) = v10 + 32 * (a3 ^ 1) + 7;
    *v7 = (char)v10;
    v3[12] -= 2;
    v8 = (_WORD *)v3[12];
  }
  v11 = v13 - v8;
  result = (int)(v8 + 1);
  v3[13] = v11;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005C972) --------------------------------------------------------
int __thiscall sub_1005C972(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // ebx
  _WORD *v7; // edi
  _WORD *v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edi
  int result; // eax
  _WORD *v13; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = a2;
  v7 = (_WORD *)(v5 + 2 * sub_10034932() - 2);
  v13 = v7;
  v8 = v7;
  for ( v3[12] = v7; ; v7 = (_WORD *)v3[12] )
  {
    v9 = v3[9];
    if ( v9 <= 0 && !v6 )
      break;
    v3[9] = v9 - 1;
    v10 = (unsigned __int16)(v6 % 0xA + 48);
    v6 /= 0xAu;
    if ( v10 > 0x39 )
      LOBYTE(v10) = v10 + 32 * (a3 ^ 1) + 7;
    *v7 = (char)v10;
    v3[12] -= 2;
    v8 = (_WORD *)v3[12];
  }
  v11 = v13 - v8;
  result = (int)(v8 + 1);
  v3[13] = v11;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005CA35) --------------------------------------------------------
int __thiscall sub_1005CA35(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // ebx
  _WORD *v7; // edi
  _WORD *v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edi
  int result; // eax
  _WORD *v13; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = a2;
  v7 = (_WORD *)(v5 + 2 * sub_10034932() - 2);
  v13 = v7;
  v8 = v7;
  for ( v3[12] = v7; ; v7 = (_WORD *)v3[12] )
  {
    v9 = v3[9];
    if ( v9 <= 0 && !v6 )
      break;
    v3[9] = v9 - 1;
    v10 = (unsigned __int16)(v6 % 0xA + 48);
    v6 /= 0xAu;
    if ( v10 > 0x39 )
      LOBYTE(v10) = v10 + 32 * (a3 ^ 1) + 7;
    *v7 = (char)v10;
    v3[12] -= 2;
    v8 = (_WORD *)v3[12];
  }
  v11 = v13 - v8;
  result = (int)(v8 + 1);
  v3[13] = v11;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005CAF8) --------------------------------------------------------
int __thiscall sub_1005CAF8(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // ebx
  _WORD *v7; // edi
  _WORD *v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edi
  int result; // eax
  _WORD *v13; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = a2;
  v7 = (_WORD *)(v5 + 2 * sub_10034932() - 2);
  v13 = v7;
  v8 = v7;
  for ( v3[12] = v7; ; v7 = (_WORD *)v3[12] )
  {
    v9 = v3[9];
    if ( v9 <= 0 && !v6 )
      break;
    v3[9] = v9 - 1;
    v10 = (unsigned __int16)(v6 % 0xA + 48);
    v6 /= 0xAu;
    if ( v10 > 0x39 )
      LOBYTE(v10) = v10 + 32 * (a3 ^ 1) + 7;
    *v7 = (char)v10;
    v3[12] -= 2;
    v8 = (_WORD *)v3[12];
  }
  v11 = v13 - v8;
  result = (int)(v8 + 1);
  v3[13] = v11;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005CBBB) --------------------------------------------------------
int __thiscall sub_1005CBBB(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // ebx
  _WORD *v7; // edi
  _WORD *v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edi
  int result; // eax
  _WORD *v13; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = a2;
  v7 = (_WORD *)(v5 + 2 * sub_10034932() - 2);
  v13 = v7;
  v8 = v7;
  for ( v3[12] = v7; ; v7 = (_WORD *)v3[12] )
  {
    v9 = v3[9];
    if ( v9 <= 0 && !v6 )
      break;
    v3[9] = v9 - 1;
    v10 = (unsigned __int16)(v6 % 0xA + 48);
    v6 /= 0xAu;
    if ( v10 > 0x39 )
      LOBYTE(v10) = v10 + 32 * (a3 ^ 1) + 7;
    *v7 = (char)v10;
    v3[12] -= 2;
    v8 = (_WORD *)v3[12];
  }
  v11 = v13 - v8;
  result = (int)(v8 + 1);
  v3[13] = v11;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005CC7E) --------------------------------------------------------
int __thiscall sub_1005CC7E(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // ebx
  _WORD *v7; // edi
  _WORD *v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // edi
  int result; // eax
  _WORD *v13; // [esp+Ch] [ebp-8h]

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = a2;
  v7 = (_WORD *)(v5 + 2 * sub_10034932() - 2);
  v13 = v7;
  v8 = v7;
  for ( v3[12] = v7; ; v7 = (_WORD *)v3[12] )
  {
    v9 = v3[9];
    if ( v9 <= 0 && !v6 )
      break;
    v3[9] = v9 - 1;
    v10 = (unsigned __int16)(v6 % 0xA + 48);
    v6 /= 0xAu;
    if ( v10 > 0x39 )
      LOBYTE(v10) = v10 + 32 * (a3 ^ 1) + 7;
    *v7 = (char)v10;
    v3[12] -= 2;
    v8 = (_WORD *)v3[12];
  }
  v11 = v13 - v8;
  result = (int)(v8 + 1);
  v3[13] = v11;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005CD41) --------------------------------------------------------
int __thiscall sub_1005CD41(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  char v11; // al
  unsigned __int8 v12; // al
  int v13; // ecx
  int result; // eax
  unsigned __int8 *i; // [esp+Ch] [ebp-4h]

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = sub_10035AD0(v4);
  v7 = a2;
  v8 = (int)v5 + v6 - 1;
  v3[12] = v8;
  v9 = (int)v5 + v6 - 1;
  for ( i = (unsigned __int8 *)v8; ; i = (unsigned __int8 *)v3[12] )
  {
    v10 = v3[9];
    if ( v10 <= 0 && !v7 )
      break;
    v3[9] = v10 - 1;
    v11 = v7 & 0xF;
    v7 >>= 4;
    v12 = v11 + 48;
    if ( v12 > 0x39u )
      v12 += 32 * (a3 ^ 1) + 7;
    *i = v12;
    v9 = --v3[12];
  }
  v13 = v8 - v9;
  result = v9 + 1;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005CDDD) --------------------------------------------------------
int __thiscall sub_1005CDDD(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  char v11; // al
  unsigned __int8 v12; // al
  int v13; // ecx
  int result; // eax
  unsigned __int8 *i; // [esp+Ch] [ebp-4h]

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = sub_10035AD0(v4);
  v7 = a2;
  v8 = (int)v5 + v6 - 1;
  v3[12] = v8;
  v9 = (int)v5 + v6 - 1;
  for ( i = (unsigned __int8 *)v8; ; i = (unsigned __int8 *)v3[12] )
  {
    v10 = v3[9];
    if ( v10 <= 0 && !v7 )
      break;
    v3[9] = v10 - 1;
    v11 = v7 & 0xF;
    v7 >>= 4;
    v12 = v11 + 48;
    if ( v12 > 0x39u )
      v12 += 32 * (a3 ^ 1) + 7;
    *i = v12;
    v9 = --v3[12];
  }
  v13 = v8 - v9;
  result = v9 + 1;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005CE79) --------------------------------------------------------
int __thiscall sub_1005CE79(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  char v11; // al
  unsigned __int8 v12; // al
  int v13; // ecx
  int result; // eax
  unsigned __int8 *i; // [esp+Ch] [ebp-4h]

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = sub_10035AD0(v4);
  v7 = a2;
  v8 = (int)v5 + v6 - 1;
  v3[12] = v8;
  v9 = (int)v5 + v6 - 1;
  for ( i = (unsigned __int8 *)v8; ; i = (unsigned __int8 *)v3[12] )
  {
    v10 = v3[9];
    if ( v10 <= 0 && !v7 )
      break;
    v3[9] = v10 - 1;
    v11 = v7 & 0xF;
    v7 >>= 4;
    v12 = v11 + 48;
    if ( v12 > 0x39u )
      v12 += 32 * (a3 ^ 1) + 7;
    *i = v12;
    v9 = --v3[12];
  }
  v13 = v8 - v9;
  result = v9 + 1;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005CF15) --------------------------------------------------------
int __thiscall sub_1005CF15(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  char v11; // al
  unsigned __int8 v12; // al
  int v13; // ecx
  int result; // eax
  unsigned __int8 *i; // [esp+Ch] [ebp-4h]

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = sub_10035AD0(v4);
  v7 = a2;
  v8 = (int)v5 + v6 - 1;
  v3[12] = v8;
  v9 = (int)v5 + v6 - 1;
  for ( i = (unsigned __int8 *)v8; ; i = (unsigned __int8 *)v3[12] )
  {
    v10 = v3[9];
    if ( v10 <= 0 && !v7 )
      break;
    v3[9] = v10 - 1;
    v11 = v7 & 0xF;
    v7 >>= 4;
    v12 = v11 + 48;
    if ( v12 > 0x39u )
      v12 += 32 * (a3 ^ 1) + 7;
    *i = v12;
    v9 = --v3[12];
  }
  v13 = v8 - v9;
  result = v9 + 1;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005CFB1) --------------------------------------------------------
int __thiscall sub_1005CFB1(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  char v11; // al
  unsigned __int8 v12; // al
  int v13; // ecx
  int result; // eax
  unsigned __int8 *i; // [esp+Ch] [ebp-4h]

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = sub_10035AD0(v4);
  v7 = a2;
  v8 = (int)v5 + v6 - 1;
  v3[12] = v8;
  v9 = (int)v5 + v6 - 1;
  for ( i = (unsigned __int8 *)v8; ; i = (unsigned __int8 *)v3[12] )
  {
    v10 = v3[9];
    if ( v10 <= 0 && !v7 )
      break;
    v3[9] = v10 - 1;
    v11 = v7 & 0xF;
    v7 >>= 4;
    v12 = v11 + 48;
    if ( v12 > 0x39u )
      v12 += 32 * (a3 ^ 1) + 7;
    *i = v12;
    v9 = --v3[12];
  }
  v13 = v8 - v9;
  result = v9 + 1;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005D04D) --------------------------------------------------------
int __thiscall sub_1005D04D(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  char v11; // al
  unsigned __int8 v12; // al
  int v13; // ecx
  int result; // eax
  unsigned __int8 *i; // [esp+Ch] [ebp-4h]

  v3 = this;
  v4 = this + 15;
  v5 = (_DWORD *)v4[257];
  if ( !v5 )
    v5 = v4;
  v6 = sub_10035AD0(v4);
  v7 = a2;
  v8 = (int)v5 + v6 - 1;
  v3[12] = v8;
  v9 = (int)v5 + v6 - 1;
  for ( i = (unsigned __int8 *)v8; ; i = (unsigned __int8 *)v3[12] )
  {
    v10 = v3[9];
    if ( v10 <= 0 && !v7 )
      break;
    v3[9] = v10 - 1;
    v11 = v7 & 0xF;
    v7 >>= 4;
    v12 = v11 + 48;
    if ( v12 > 0x39u )
      v12 += 32 * (a3 ^ 1) + 7;
    *i = v12;
    v9 = --v3[12];
  }
  v13 = v8 - v9;
  result = v9 + 1;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005D0E9) --------------------------------------------------------
int __thiscall sub_1005D0E9(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  _WORD *i; // ebx
  int v10; // edx
  __int16 v11; // ax
  unsigned int v12; // edx
  int v13; // ecx
  int result; // eax

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = v5 + 2 * (sub_10034932() - 1);
  v7 = a2;
  v8 = v6;
  v3[12] = v6;
  for ( i = (_WORD *)v6; ; i = (_WORD *)v3[12] )
  {
    v10 = v3[9];
    if ( v10 <= 0 && !v7 )
      break;
    v3[9] = v10 - 1;
    v11 = v7 & 0xF;
    v7 >>= 4;
    v12 = (unsigned __int16)(v11 + 48);
    if ( v12 > 0x39 )
      LOWORD(v12) = (unsigned __int8)(v11 + 48 + 32 * (a3 ^ 1) + 7);
    *i = v12;
    v3[12] -= 2;
    v8 = v3[12];
  }
  v13 = (v6 - v8) >> 1;
  result = v8 + 2;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005D195) --------------------------------------------------------
int __thiscall sub_1005D195(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  _WORD *i; // ebx
  int v10; // edx
  __int16 v11; // ax
  unsigned int v12; // edx
  int v13; // ecx
  int result; // eax

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = v5 + 2 * (sub_10034932() - 1);
  v7 = a2;
  v8 = v6;
  v3[12] = v6;
  for ( i = (_WORD *)v6; ; i = (_WORD *)v3[12] )
  {
    v10 = v3[9];
    if ( v10 <= 0 && !v7 )
      break;
    v3[9] = v10 - 1;
    v11 = v7 & 0xF;
    v7 >>= 4;
    v12 = (unsigned __int16)(v11 + 48);
    if ( v12 > 0x39 )
      LOWORD(v12) = (unsigned __int8)(v11 + 48 + 32 * (a3 ^ 1) + 7);
    *i = v12;
    v3[12] -= 2;
    v8 = v3[12];
  }
  v13 = (v6 - v8) >> 1;
  result = v8 + 2;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005D241) --------------------------------------------------------
int __thiscall sub_1005D241(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  _WORD *i; // ebx
  int v10; // edx
  __int16 v11; // ax
  unsigned int v12; // edx
  int v13; // ecx
  int result; // eax

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = v5 + 2 * (sub_10034932() - 1);
  v7 = a2;
  v8 = v6;
  v3[12] = v6;
  for ( i = (_WORD *)v6; ; i = (_WORD *)v3[12] )
  {
    v10 = v3[9];
    if ( v10 <= 0 && !v7 )
      break;
    v3[9] = v10 - 1;
    v11 = v7 & 0xF;
    v7 >>= 4;
    v12 = (unsigned __int16)(v11 + 48);
    if ( v12 > 0x39 )
      LOWORD(v12) = (unsigned __int8)(v11 + 48 + 32 * (a3 ^ 1) + 7);
    *i = v12;
    v3[12] -= 2;
    v8 = v3[12];
  }
  v13 = (v6 - v8) >> 1;
  result = v8 + 2;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005D2ED) --------------------------------------------------------
int __thiscall sub_1005D2ED(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  _WORD *i; // ebx
  int v10; // edx
  __int16 v11; // ax
  unsigned int v12; // edx
  int v13; // ecx
  int result; // eax

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = v5 + 2 * (sub_10034932() - 1);
  v7 = a2;
  v8 = v6;
  v3[12] = v6;
  for ( i = (_WORD *)v6; ; i = (_WORD *)v3[12] )
  {
    v10 = v3[9];
    if ( v10 <= 0 && !v7 )
      break;
    v3[9] = v10 - 1;
    v11 = v7 & 0xF;
    v7 >>= 4;
    v12 = (unsigned __int16)(v11 + 48);
    if ( v12 > 0x39 )
      LOWORD(v12) = (unsigned __int8)(v11 + 48 + 32 * (a3 ^ 1) + 7);
    *i = v12;
    v3[12] -= 2;
    v8 = v3[12];
  }
  v13 = (v6 - v8) >> 1;
  result = v8 + 2;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005D399) --------------------------------------------------------
int __thiscall sub_1005D399(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  _WORD *i; // ebx
  int v10; // edx
  __int16 v11; // ax
  unsigned int v12; // edx
  int v13; // ecx
  int result; // eax

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = v5 + 2 * (sub_10034932() - 1);
  v7 = a2;
  v8 = v6;
  v3[12] = v6;
  for ( i = (_WORD *)v6; ; i = (_WORD *)v3[12] )
  {
    v10 = v3[9];
    if ( v10 <= 0 && !v7 )
      break;
    v3[9] = v10 - 1;
    v11 = v7 & 0xF;
    v7 >>= 4;
    v12 = (unsigned __int16)(v11 + 48);
    if ( v12 > 0x39 )
      LOWORD(v12) = (unsigned __int8)(v11 + 48 + 32 * (a3 ^ 1) + 7);
    *i = v12;
    v3[12] -= 2;
    v8 = v3[12];
  }
  v13 = (v6 - v8) >> 1;
  result = v8 + 2;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005D445) --------------------------------------------------------
int __thiscall sub_1005D445(_DWORD *this, unsigned int a2, char a3)
{
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // edi
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  _WORD *i; // ebx
  int v10; // edx
  __int16 v11; // ax
  unsigned int v12; // edx
  int v13; // ecx
  int result; // eax

  v3 = this;
  v4 = (int)(this + 15);
  v5 = *(_DWORD *)(v4 + 1028);
  if ( !v5 )
    v5 = v4;
  v6 = v5 + 2 * (sub_10034932() - 1);
  v7 = a2;
  v8 = v6;
  v3[12] = v6;
  for ( i = (_WORD *)v6; ; i = (_WORD *)v3[12] )
  {
    v10 = v3[9];
    if ( v10 <= 0 && !v7 )
      break;
    v3[9] = v10 - 1;
    v11 = v7 & 0xF;
    v7 >>= 4;
    v12 = (unsigned __int16)(v11 + 48);
    if ( v12 > 0x39 )
      LOWORD(v12) = (unsigned __int8)(v11 + 48 + 32 * (a3 ^ 1) + 7);
    *i = v12;
    v3[12] -= 2;
    v8 = v3[12];
  }
  v13 = (v6 - v8) >> 1;
  result = v8 + 2;
  v3[13] = v13;
  v3[12] = result;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005D4F1) --------------------------------------------------------
_BYTE *__thiscall sub_1005D4F1(_DWORD *this, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  unsigned int v7; // ebx
  _BYTE *v8; // ecx
  unsigned int v9; // edi
  _BYTE *v10; // edx
  int v11; // eax
  char v12; // al
  _BYTE *result; // eax
  _BYTE *v14; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (char *)v6 + sub_10035AD0(v5) - 1;
  v9 = a3;
  v14 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (_BYTE *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = v7 & 7;
    v7 = __PAIR__(v9, v7) >> 3;
    *v8 = v12 + 48;
    v9 >>= 3;
    v10 = (_BYTE *)--v4[12];
  }
  result = v10 + 1;
  v4[13] = v14 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005D587) --------------------------------------------------------
_BYTE *__thiscall sub_1005D587(_DWORD *this, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  unsigned int v7; // ebx
  _BYTE *v8; // ecx
  unsigned int v9; // edi
  _BYTE *v10; // edx
  int v11; // eax
  char v12; // al
  _BYTE *result; // eax
  _BYTE *v14; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (char *)v6 + sub_10035AD0(v5) - 1;
  v9 = a3;
  v14 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (_BYTE *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = v7 & 7;
    v7 = __PAIR__(v9, v7) >> 3;
    *v8 = v12 + 48;
    v9 >>= 3;
    v10 = (_BYTE *)--v4[12];
  }
  result = v10 + 1;
  v4[13] = v14 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005D61D) --------------------------------------------------------
_BYTE *__thiscall sub_1005D61D(_DWORD *this, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  unsigned int v7; // ebx
  _BYTE *v8; // ecx
  unsigned int v9; // edi
  _BYTE *v10; // edx
  int v11; // eax
  char v12; // al
  _BYTE *result; // eax
  _BYTE *v14; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (char *)v6 + sub_10035AD0(v5) - 1;
  v9 = a3;
  v14 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (_BYTE *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = v7 & 7;
    v7 = __PAIR__(v9, v7) >> 3;
    *v8 = v12 + 48;
    v9 >>= 3;
    v10 = (_BYTE *)--v4[12];
  }
  result = v10 + 1;
  v4[13] = v14 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005D6B3) --------------------------------------------------------
_BYTE *__thiscall sub_1005D6B3(_DWORD *this, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  unsigned int v7; // ebx
  _BYTE *v8; // ecx
  unsigned int v9; // edi
  _BYTE *v10; // edx
  int v11; // eax
  char v12; // al
  _BYTE *result; // eax
  _BYTE *v14; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (char *)v6 + sub_10035AD0(v5) - 1;
  v9 = a3;
  v14 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (_BYTE *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = v7 & 7;
    v7 = __PAIR__(v9, v7) >> 3;
    *v8 = v12 + 48;
    v9 >>= 3;
    v10 = (_BYTE *)--v4[12];
  }
  result = v10 + 1;
  v4[13] = v14 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005D749) --------------------------------------------------------
_BYTE *__thiscall sub_1005D749(_DWORD *this, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  unsigned int v7; // ebx
  _BYTE *v8; // ecx
  unsigned int v9; // edi
  _BYTE *v10; // edx
  int v11; // eax
  char v12; // al
  _BYTE *result; // eax
  _BYTE *v14; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (char *)v6 + sub_10035AD0(v5) - 1;
  v9 = a3;
  v14 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (_BYTE *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = v7 & 7;
    v7 = __PAIR__(v9, v7) >> 3;
    *v8 = v12 + 48;
    v9 >>= 3;
    v10 = (_BYTE *)--v4[12];
  }
  result = v10 + 1;
  v4[13] = v14 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005D7DF) --------------------------------------------------------
_BYTE *__thiscall sub_1005D7DF(_DWORD *this, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  unsigned int v7; // ebx
  _BYTE *v8; // ecx
  unsigned int v9; // edi
  _BYTE *v10; // edx
  int v11; // eax
  char v12; // al
  _BYTE *result; // eax
  _BYTE *v14; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (char *)v6 + sub_10035AD0(v5) - 1;
  v9 = a3;
  v14 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (_BYTE *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = v7 & 7;
    v7 = __PAIR__(v9, v7) >> 3;
    *v8 = v12 + 48;
    v9 >>= 3;
    v10 = (_BYTE *)--v4[12];
  }
  result = v10 + 1;
  v4[13] = v14 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005D875) --------------------------------------------------------
int __thiscall sub_1005D875(_DWORD *this, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  _WORD *v10; // ecx
  int v11; // edi
  int v12; // eax
  int result; // eax
  _WORD *v14; // [esp+14h] [ebp-8h]
  char v15; // [esp+18h] [ebp-4h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = sub_10034932();
  v8 = a3;
  v9 = a2;
  v10 = (_WORD *)(v6 + 2 * (v7 - 1));
  v14 = v10;
  v11 = v6 + 2 * (v7 - 1);
  for ( v4[12] = v10; ; v10 = (_WORD *)v4[12] )
  {
    v12 = v4[9];
    v15 = v9;
    if ( v12 > 0 )
      goto LABEL_7;
    if ( !(v8 | v9) )
      break;
    v12 = v4[9];
LABEL_7:
    v4[9] = v12 - 1;
    v9 = __PAIR__(v8, v9) >> 3;
    *v10 = (v15 & 7) + 48;
    v8 >>= 3;
    v4[12] -= 2;
    v11 = v4[12];
  }
  result = v11 + 2;
  v4[13] = ((signed int)v14 - v11) >> 1;
  v4[12] = v11 + 2;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005D91D) --------------------------------------------------------
int __thiscall sub_1005D91D(_DWORD *this, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  _WORD *v10; // ecx
  int v11; // edi
  int v12; // eax
  int result; // eax
  _WORD *v14; // [esp+14h] [ebp-8h]
  char v15; // [esp+18h] [ebp-4h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = sub_10034932();
  v8 = a3;
  v9 = a2;
  v10 = (_WORD *)(v6 + 2 * (v7 - 1));
  v14 = v10;
  v11 = v6 + 2 * (v7 - 1);
  for ( v4[12] = v10; ; v10 = (_WORD *)v4[12] )
  {
    v12 = v4[9];
    v15 = v9;
    if ( v12 > 0 )
      goto LABEL_7;
    if ( !(v8 | v9) )
      break;
    v12 = v4[9];
LABEL_7:
    v4[9] = v12 - 1;
    v9 = __PAIR__(v8, v9) >> 3;
    *v10 = (v15 & 7) + 48;
    v8 >>= 3;
    v4[12] -= 2;
    v11 = v4[12];
  }
  result = v11 + 2;
  v4[13] = ((signed int)v14 - v11) >> 1;
  v4[12] = v11 + 2;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005D9C5) --------------------------------------------------------
int __thiscall sub_1005D9C5(_DWORD *this, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  _WORD *v10; // ecx
  int v11; // edi
  int v12; // eax
  int result; // eax
  _WORD *v14; // [esp+14h] [ebp-8h]
  char v15; // [esp+18h] [ebp-4h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = sub_10034932();
  v8 = a3;
  v9 = a2;
  v10 = (_WORD *)(v6 + 2 * (v7 - 1));
  v14 = v10;
  v11 = v6 + 2 * (v7 - 1);
  for ( v4[12] = v10; ; v10 = (_WORD *)v4[12] )
  {
    v12 = v4[9];
    v15 = v9;
    if ( v12 > 0 )
      goto LABEL_7;
    if ( !(v8 | v9) )
      break;
    v12 = v4[9];
LABEL_7:
    v4[9] = v12 - 1;
    v9 = __PAIR__(v8, v9) >> 3;
    *v10 = (v15 & 7) + 48;
    v8 >>= 3;
    v4[12] -= 2;
    v11 = v4[12];
  }
  result = v11 + 2;
  v4[13] = ((signed int)v14 - v11) >> 1;
  v4[12] = v11 + 2;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005DA6D) --------------------------------------------------------
int __thiscall sub_1005DA6D(_DWORD *this, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  _WORD *v10; // ecx
  int v11; // edi
  int v12; // eax
  int result; // eax
  _WORD *v14; // [esp+14h] [ebp-8h]
  char v15; // [esp+18h] [ebp-4h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = sub_10034932();
  v8 = a3;
  v9 = a2;
  v10 = (_WORD *)(v6 + 2 * (v7 - 1));
  v14 = v10;
  v11 = v6 + 2 * (v7 - 1);
  for ( v4[12] = v10; ; v10 = (_WORD *)v4[12] )
  {
    v12 = v4[9];
    v15 = v9;
    if ( v12 > 0 )
      goto LABEL_7;
    if ( !(v8 | v9) )
      break;
    v12 = v4[9];
LABEL_7:
    v4[9] = v12 - 1;
    v9 = __PAIR__(v8, v9) >> 3;
    *v10 = (v15 & 7) + 48;
    v8 >>= 3;
    v4[12] -= 2;
    v11 = v4[12];
  }
  result = v11 + 2;
  v4[13] = ((signed int)v14 - v11) >> 1;
  v4[12] = v11 + 2;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005DB15) --------------------------------------------------------
int __thiscall sub_1005DB15(_DWORD *this, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  _WORD *v10; // ecx
  int v11; // edi
  int v12; // eax
  int result; // eax
  _WORD *v14; // [esp+14h] [ebp-8h]
  char v15; // [esp+18h] [ebp-4h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = sub_10034932();
  v8 = a3;
  v9 = a2;
  v10 = (_WORD *)(v6 + 2 * (v7 - 1));
  v14 = v10;
  v11 = v6 + 2 * (v7 - 1);
  for ( v4[12] = v10; ; v10 = (_WORD *)v4[12] )
  {
    v12 = v4[9];
    v15 = v9;
    if ( v12 > 0 )
      goto LABEL_7;
    if ( !(v8 | v9) )
      break;
    v12 = v4[9];
LABEL_7:
    v4[9] = v12 - 1;
    v9 = __PAIR__(v8, v9) >> 3;
    *v10 = (v15 & 7) + 48;
    v8 >>= 3;
    v4[12] -= 2;
    v11 = v4[12];
  }
  result = v11 + 2;
  v4[13] = ((signed int)v14 - v11) >> 1;
  v4[12] = v11 + 2;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005DBBD) --------------------------------------------------------
int __thiscall sub_1005DBBD(_DWORD *this, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  _WORD *v10; // ecx
  int v11; // edi
  int v12; // eax
  int result; // eax
  _WORD *v14; // [esp+14h] [ebp-8h]
  char v15; // [esp+18h] [ebp-4h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = sub_10034932();
  v8 = a3;
  v9 = a2;
  v10 = (_WORD *)(v6 + 2 * (v7 - 1));
  v14 = v10;
  v11 = v6 + 2 * (v7 - 1);
  for ( v4[12] = v10; ; v10 = (_WORD *)v4[12] )
  {
    v12 = v4[9];
    v15 = v9;
    if ( v12 > 0 )
      goto LABEL_7;
    if ( !(v8 | v9) )
      break;
    v12 = v4[9];
LABEL_7:
    v4[9] = v12 - 1;
    v9 = __PAIR__(v8, v9) >> 3;
    *v10 = (v15 & 7) + 48;
    v8 >>= 3;
    v4[12] -= 2;
    v11 = v4[12];
  }
  result = v11 + 2;
  v4[13] = ((signed int)v14 - v11) >> 1;
  v4[12] = v11 + 2;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005DC65) --------------------------------------------------------
int __thiscall sub_1005DC65(_DWORD *this, int a2, int a3, char a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  char v12; // al
  char v13; // bl
  char v14; // bh
  int v15; // edx
  int result; // eax
  int v17; // [esp+Ch] [ebp-Ch]
  _BYTE *v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = (int)v6 + sub_10035AD0(v5) - 1;
  v8 = a2;
  v17 = v7;
  v9 = v7;
  v4[12] = v7;
  v18 = (_BYTE *)v7;
  v10 = a3;
  v19 = a2;
  while ( 1 )
  {
    v11 = v4[9];
    if ( v11 <= 0 && !(v10 | v8) )
      break;
    v4[9] = v11 - 1;
    v12 = sub_10034FAE(v19, v10, 10, 0);
    v13 = v12 + 48;
    v14 = v12 + 48;
    v8 = sub_100350DA(v19, v10, 10, 0);
    v19 = v8;
    v10 = v15;
    if ( v13 > 57 )
      v13 = v14 + 32 * (a4 ^ 1) + 7;
    *v18 = v13;
    v9 = --v4[12];
    v18 = (_BYTE *)v4[12];
  }
  result = v9 + 1;
  v4[13] = v17 - v9;
  v4[12] = v9 + 1;
  return result;
}
// 10034FAE: using guessed type _DWORD __stdcall sub_10034FAE(_DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005DD35) --------------------------------------------------------
int __thiscall sub_1005DD35(_DWORD *this, int a2, int a3, char a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  char v12; // al
  char v13; // bl
  char v14; // bh
  int v15; // edx
  int result; // eax
  int v17; // [esp+Ch] [ebp-Ch]
  _BYTE *v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = (int)v6 + sub_10035AD0(v5) - 1;
  v8 = a2;
  v17 = v7;
  v9 = v7;
  v4[12] = v7;
  v18 = (_BYTE *)v7;
  v10 = a3;
  v19 = a2;
  while ( 1 )
  {
    v11 = v4[9];
    if ( v11 <= 0 && !(v10 | v8) )
      break;
    v4[9] = v11 - 1;
    v12 = sub_10034FAE(v19, v10, 10, 0);
    v13 = v12 + 48;
    v14 = v12 + 48;
    v8 = sub_100350DA(v19, v10, 10, 0);
    v19 = v8;
    v10 = v15;
    if ( v13 > 57 )
      v13 = v14 + 32 * (a4 ^ 1) + 7;
    *v18 = v13;
    v9 = --v4[12];
    v18 = (_BYTE *)v4[12];
  }
  result = v9 + 1;
  v4[13] = v17 - v9;
  v4[12] = v9 + 1;
  return result;
}
// 10034FAE: using guessed type _DWORD __stdcall sub_10034FAE(_DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005DE05) --------------------------------------------------------
int __thiscall sub_1005DE05(_DWORD *this, int a2, int a3, char a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  char v12; // al
  char v13; // bl
  char v14; // bh
  int v15; // edx
  int result; // eax
  int v17; // [esp+Ch] [ebp-Ch]
  _BYTE *v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = (int)v6 + sub_10035AD0(v5) - 1;
  v8 = a2;
  v17 = v7;
  v9 = v7;
  v4[12] = v7;
  v18 = (_BYTE *)v7;
  v10 = a3;
  v19 = a2;
  while ( 1 )
  {
    v11 = v4[9];
    if ( v11 <= 0 && !(v10 | v8) )
      break;
    v4[9] = v11 - 1;
    v12 = sub_10034FAE(v19, v10, 10, 0);
    v13 = v12 + 48;
    v14 = v12 + 48;
    v8 = sub_100350DA(v19, v10, 10, 0);
    v19 = v8;
    v10 = v15;
    if ( v13 > 57 )
      v13 = v14 + 32 * (a4 ^ 1) + 7;
    *v18 = v13;
    v9 = --v4[12];
    v18 = (_BYTE *)v4[12];
  }
  result = v9 + 1;
  v4[13] = v17 - v9;
  v4[12] = v9 + 1;
  return result;
}
// 10034FAE: using guessed type _DWORD __stdcall sub_10034FAE(_DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005DED5) --------------------------------------------------------
int __thiscall sub_1005DED5(_DWORD *this, int a2, int a3, char a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  char v12; // al
  char v13; // bl
  char v14; // bh
  int v15; // edx
  int result; // eax
  int v17; // [esp+Ch] [ebp-Ch]
  _BYTE *v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = (int)v6 + sub_10035AD0(v5) - 1;
  v8 = a2;
  v17 = v7;
  v9 = v7;
  v4[12] = v7;
  v18 = (_BYTE *)v7;
  v10 = a3;
  v19 = a2;
  while ( 1 )
  {
    v11 = v4[9];
    if ( v11 <= 0 && !(v10 | v8) )
      break;
    v4[9] = v11 - 1;
    v12 = sub_10034FAE(v19, v10, 10, 0);
    v13 = v12 + 48;
    v14 = v12 + 48;
    v8 = sub_100350DA(v19, v10, 10, 0);
    v19 = v8;
    v10 = v15;
    if ( v13 > 57 )
      v13 = v14 + 32 * (a4 ^ 1) + 7;
    *v18 = v13;
    v9 = --v4[12];
    v18 = (_BYTE *)v4[12];
  }
  result = v9 + 1;
  v4[13] = v17 - v9;
  v4[12] = v9 + 1;
  return result;
}
// 10034FAE: using guessed type _DWORD __stdcall sub_10034FAE(_DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005DFA5) --------------------------------------------------------
int __thiscall sub_1005DFA5(_DWORD *this, int a2, int a3, char a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  char v12; // al
  char v13; // bl
  char v14; // bh
  int v15; // edx
  int result; // eax
  int v17; // [esp+Ch] [ebp-Ch]
  _BYTE *v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = (int)v6 + sub_10035AD0(v5) - 1;
  v8 = a2;
  v17 = v7;
  v9 = v7;
  v4[12] = v7;
  v18 = (_BYTE *)v7;
  v10 = a3;
  v19 = a2;
  while ( 1 )
  {
    v11 = v4[9];
    if ( v11 <= 0 && !(v10 | v8) )
      break;
    v4[9] = v11 - 1;
    v12 = sub_10034FAE(v19, v10, 10, 0);
    v13 = v12 + 48;
    v14 = v12 + 48;
    v8 = sub_100350DA(v19, v10, 10, 0);
    v19 = v8;
    v10 = v15;
    if ( v13 > 57 )
      v13 = v14 + 32 * (a4 ^ 1) + 7;
    *v18 = v13;
    v9 = --v4[12];
    v18 = (_BYTE *)v4[12];
  }
  result = v9 + 1;
  v4[13] = v17 - v9;
  v4[12] = v9 + 1;
  return result;
}
// 10034FAE: using guessed type _DWORD __stdcall sub_10034FAE(_DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005E075) --------------------------------------------------------
int __thiscall sub_1005E075(_DWORD *this, int a2, int a3, char a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  char v12; // al
  char v13; // bl
  char v14; // bh
  int v15; // edx
  int result; // eax
  int v17; // [esp+Ch] [ebp-Ch]
  _BYTE *v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = (int)v6 + sub_10035AD0(v5) - 1;
  v8 = a2;
  v17 = v7;
  v9 = v7;
  v4[12] = v7;
  v18 = (_BYTE *)v7;
  v10 = a3;
  v19 = a2;
  while ( 1 )
  {
    v11 = v4[9];
    if ( v11 <= 0 && !(v10 | v8) )
      break;
    v4[9] = v11 - 1;
    v12 = sub_10034FAE(v19, v10, 10, 0);
    v13 = v12 + 48;
    v14 = v12 + 48;
    v8 = sub_100350DA(v19, v10, 10, 0);
    v19 = v8;
    v10 = v15;
    if ( v13 > 57 )
      v13 = v14 + 32 * (a4 ^ 1) + 7;
    *v18 = v13;
    v9 = --v4[12];
    v18 = (_BYTE *)v4[12];
  }
  result = v9 + 1;
  v4[13] = v17 - v9;
  v4[12] = v9 + 1;
  return result;
}
// 10034FAE: using guessed type _DWORD __stdcall sub_10034FAE(_DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005E145) --------------------------------------------------------
int __thiscall sub_1005E145(_DWORD *this, int a2, int a3, char a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // ebx
  int v8; // edi
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // edx
  __int16 v14; // ax
  int result; // eax
  int v16; // [esp+Ch] [ebp-Ch]
  _WORD *v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v18 = a2;
  v8 = v6 + 2 * sub_10034932() - 2;
  v16 = v8;
  v9 = v8;
  v4[12] = v8;
  v17 = (_WORD *)v8;
  v10 = a3;
  while ( 1 )
  {
    v11 = v4[9];
    if ( v11 <= 0 && !(v10 | v7) )
      break;
    v4[9] = v11 - 1;
    v12 = (unsigned __int16)(sub_10034FAE(v7, v10, 10, 0) + 48);
    v18 = sub_100350DA(v18, v10, 10, 0);
    v10 = v13;
    if ( v12 > 0x39 )
      LOBYTE(v12) = v12 + 32 * (a4 ^ 1) + 7;
    v14 = (char)v12;
    v7 = v18;
    *v17 = v14;
    v4[12] -= 2;
    v9 = v4[12];
    v17 = (_WORD *)v4[12];
  }
  result = v9 + 2;
  v4[13] = (v16 - v9) >> 1;
  v4[12] = v9 + 2;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);
// 10034FAE: using guessed type _DWORD __stdcall sub_10034FAE(_DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1005E231) --------------------------------------------------------
int __thiscall sub_1005E231(_DWORD *this, int a2, int a3, char a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // ebx
  int v8; // edi
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // edx
  __int16 v14; // ax
  int result; // eax
  int v16; // [esp+Ch] [ebp-Ch]
  _WORD *v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v18 = a2;
  v8 = v6 + 2 * sub_10034932() - 2;
  v16 = v8;
  v9 = v8;
  v4[12] = v8;
  v17 = (_WORD *)v8;
  v10 = a3;
  while ( 1 )
  {
    v11 = v4[9];
    if ( v11 <= 0 && !(v10 | v7) )
      break;
    v4[9] = v11 - 1;
    v12 = (unsigned __int16)(sub_10034FAE(v7, v10, 10, 0) + 48);
    v18 = sub_100350DA(v18, v10, 10, 0);
    v10 = v13;
    if ( v12 > 0x39 )
      LOBYTE(v12) = v12 + 32 * (a4 ^ 1) + 7;
    v14 = (char)v12;
    v7 = v18;
    *v17 = v14;
    v4[12] -= 2;
    v9 = v4[12];
    v17 = (_WORD *)v4[12];
  }
  result = v9 + 2;
  v4[13] = (v16 - v9) >> 1;
  v4[12] = v9 + 2;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);
// 10034FAE: using guessed type _DWORD __stdcall sub_10034FAE(_DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1005E31D) --------------------------------------------------------
int __thiscall sub_1005E31D(_DWORD *this, int a2, int a3, char a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // ebx
  int v8; // edi
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // edx
  __int16 v14; // ax
  int result; // eax
  int v16; // [esp+Ch] [ebp-Ch]
  _WORD *v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v18 = a2;
  v8 = v6 + 2 * sub_10034932() - 2;
  v16 = v8;
  v9 = v8;
  v4[12] = v8;
  v17 = (_WORD *)v8;
  v10 = a3;
  while ( 1 )
  {
    v11 = v4[9];
    if ( v11 <= 0 && !(v10 | v7) )
      break;
    v4[9] = v11 - 1;
    v12 = (unsigned __int16)(sub_10034FAE(v7, v10, 10, 0) + 48);
    v18 = sub_100350DA(v18, v10, 10, 0);
    v10 = v13;
    if ( v12 > 0x39 )
      LOBYTE(v12) = v12 + 32 * (a4 ^ 1) + 7;
    v14 = (char)v12;
    v7 = v18;
    *v17 = v14;
    v4[12] -= 2;
    v9 = v4[12];
    v17 = (_WORD *)v4[12];
  }
  result = v9 + 2;
  v4[13] = (v16 - v9) >> 1;
  v4[12] = v9 + 2;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);
// 10034FAE: using guessed type _DWORD __stdcall sub_10034FAE(_DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1005E409) --------------------------------------------------------
int __thiscall sub_1005E409(_DWORD *this, int a2, int a3, char a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // ebx
  int v8; // edi
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // edx
  __int16 v14; // ax
  int result; // eax
  int v16; // [esp+Ch] [ebp-Ch]
  _WORD *v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v18 = a2;
  v8 = v6 + 2 * sub_10034932() - 2;
  v16 = v8;
  v9 = v8;
  v4[12] = v8;
  v17 = (_WORD *)v8;
  v10 = a3;
  while ( 1 )
  {
    v11 = v4[9];
    if ( v11 <= 0 && !(v10 | v7) )
      break;
    v4[9] = v11 - 1;
    v12 = (unsigned __int16)(sub_10034FAE(v7, v10, 10, 0) + 48);
    v18 = sub_100350DA(v18, v10, 10, 0);
    v10 = v13;
    if ( v12 > 0x39 )
      LOBYTE(v12) = v12 + 32 * (a4 ^ 1) + 7;
    v14 = (char)v12;
    v7 = v18;
    *v17 = v14;
    v4[12] -= 2;
    v9 = v4[12];
    v17 = (_WORD *)v4[12];
  }
  result = v9 + 2;
  v4[13] = (v16 - v9) >> 1;
  v4[12] = v9 + 2;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);
// 10034FAE: using guessed type _DWORD __stdcall sub_10034FAE(_DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1005E4F5) --------------------------------------------------------
int __thiscall sub_1005E4F5(_DWORD *this, int a2, int a3, char a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // ebx
  int v8; // edi
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // edx
  __int16 v14; // ax
  int result; // eax
  int v16; // [esp+Ch] [ebp-Ch]
  _WORD *v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v18 = a2;
  v8 = v6 + 2 * sub_10034932() - 2;
  v16 = v8;
  v9 = v8;
  v4[12] = v8;
  v17 = (_WORD *)v8;
  v10 = a3;
  while ( 1 )
  {
    v11 = v4[9];
    if ( v11 <= 0 && !(v10 | v7) )
      break;
    v4[9] = v11 - 1;
    v12 = (unsigned __int16)(sub_10034FAE(v7, v10, 10, 0) + 48);
    v18 = sub_100350DA(v18, v10, 10, 0);
    v10 = v13;
    if ( v12 > 0x39 )
      LOBYTE(v12) = v12 + 32 * (a4 ^ 1) + 7;
    v14 = (char)v12;
    v7 = v18;
    *v17 = v14;
    v4[12] -= 2;
    v9 = v4[12];
    v17 = (_WORD *)v4[12];
  }
  result = v9 + 2;
  v4[13] = (v16 - v9) >> 1;
  v4[12] = v9 + 2;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);
// 10034FAE: using guessed type _DWORD __stdcall sub_10034FAE(_DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1005E5E1) --------------------------------------------------------
int __thiscall sub_1005E5E1(_DWORD *this, int a2, int a3, char a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  int v7; // ebx
  int v8; // edi
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // edx
  __int16 v14; // ax
  int result; // eax
  int v16; // [esp+Ch] [ebp-Ch]
  _WORD *v17; // [esp+10h] [ebp-8h]
  int v18; // [esp+14h] [ebp-4h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v18 = a2;
  v8 = v6 + 2 * sub_10034932() - 2;
  v16 = v8;
  v9 = v8;
  v4[12] = v8;
  v17 = (_WORD *)v8;
  v10 = a3;
  while ( 1 )
  {
    v11 = v4[9];
    if ( v11 <= 0 && !(v10 | v7) )
      break;
    v4[9] = v11 - 1;
    v12 = (unsigned __int16)(sub_10034FAE(v7, v10, 10, 0) + 48);
    v18 = sub_100350DA(v18, v10, 10, 0);
    v10 = v13;
    if ( v12 > 0x39 )
      LOBYTE(v12) = v12 + 32 * (a4 ^ 1) + 7;
    v14 = (char)v12;
    v7 = v18;
    *v17 = v14;
    v4[12] -= 2;
    v9 = v4[12];
    v17 = (_WORD *)v4[12];
  }
  result = v9 + 2;
  v4[13] = (v16 - v9) >> 1;
  v4[12] = v9 + 2;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);
// 10034FAE: using guessed type _DWORD __stdcall sub_10034FAE(_DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1005E6CD) --------------------------------------------------------
_BYTE *__thiscall sub_1005E6CD(_DWORD *this, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  unsigned int v7; // ebx
  unsigned __int8 *v8; // ecx
  unsigned int v9; // edi
  unsigned __int8 *v10; // edx
  int v11; // eax
  char v12; // al
  unsigned __int8 v13; // al
  _BYTE *result; // eax
  unsigned __int8 *v15; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (unsigned __int8 *)v6 + sub_10035AD0(v5) - 1;
  v9 = a3;
  v15 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (unsigned __int8 *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = v7 & 0xF;
    v7 = __PAIR__(v9, v7) >> 4;
    v13 = v12 + 48;
    v9 >>= 4;
    if ( v13 > 0x39u )
      v13 += 32 * (a4 ^ 1) + 7;
    *v8 = v13;
    v10 = (unsigned __int8 *)--v4[12];
  }
  result = v10 + 1;
  v4[13] = v15 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005E779) --------------------------------------------------------
_BYTE *__thiscall sub_1005E779(_DWORD *this, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  unsigned int v7; // ebx
  unsigned __int8 *v8; // ecx
  unsigned int v9; // edi
  unsigned __int8 *v10; // edx
  int v11; // eax
  char v12; // al
  unsigned __int8 v13; // al
  _BYTE *result; // eax
  unsigned __int8 *v15; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (unsigned __int8 *)v6 + sub_10035AD0(v5) - 1;
  v9 = a3;
  v15 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (unsigned __int8 *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = v7 & 0xF;
    v7 = __PAIR__(v9, v7) >> 4;
    v13 = v12 + 48;
    v9 >>= 4;
    if ( v13 > 0x39u )
      v13 += 32 * (a4 ^ 1) + 7;
    *v8 = v13;
    v10 = (unsigned __int8 *)--v4[12];
  }
  result = v10 + 1;
  v4[13] = v15 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005E825) --------------------------------------------------------
_BYTE *__thiscall sub_1005E825(_DWORD *this, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  unsigned int v7; // ebx
  unsigned __int8 *v8; // ecx
  unsigned int v9; // edi
  unsigned __int8 *v10; // edx
  int v11; // eax
  char v12; // al
  unsigned __int8 v13; // al
  _BYTE *result; // eax
  unsigned __int8 *v15; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (unsigned __int8 *)v6 + sub_10035AD0(v5) - 1;
  v9 = a3;
  v15 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (unsigned __int8 *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = v7 & 0xF;
    v7 = __PAIR__(v9, v7) >> 4;
    v13 = v12 + 48;
    v9 >>= 4;
    if ( v13 > 0x39u )
      v13 += 32 * (a4 ^ 1) + 7;
    *v8 = v13;
    v10 = (unsigned __int8 *)--v4[12];
  }
  result = v10 + 1;
  v4[13] = v15 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005E8D1) --------------------------------------------------------
_BYTE *__thiscall sub_1005E8D1(_DWORD *this, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  unsigned int v7; // ebx
  unsigned __int8 *v8; // ecx
  unsigned int v9; // edi
  unsigned __int8 *v10; // edx
  int v11; // eax
  char v12; // al
  unsigned __int8 v13; // al
  _BYTE *result; // eax
  unsigned __int8 *v15; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (unsigned __int8 *)v6 + sub_10035AD0(v5) - 1;
  v9 = a3;
  v15 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (unsigned __int8 *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = v7 & 0xF;
    v7 = __PAIR__(v9, v7) >> 4;
    v13 = v12 + 48;
    v9 >>= 4;
    if ( v13 > 0x39u )
      v13 += 32 * (a4 ^ 1) + 7;
    *v8 = v13;
    v10 = (unsigned __int8 *)--v4[12];
  }
  result = v10 + 1;
  v4[13] = v15 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005E97D) --------------------------------------------------------
_BYTE *__thiscall sub_1005E97D(_DWORD *this, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  unsigned int v7; // ebx
  unsigned __int8 *v8; // ecx
  unsigned int v9; // edi
  unsigned __int8 *v10; // edx
  int v11; // eax
  char v12; // al
  unsigned __int8 v13; // al
  _BYTE *result; // eax
  unsigned __int8 *v15; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (unsigned __int8 *)v6 + sub_10035AD0(v5) - 1;
  v9 = a3;
  v15 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (unsigned __int8 *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = v7 & 0xF;
    v7 = __PAIR__(v9, v7) >> 4;
    v13 = v12 + 48;
    v9 >>= 4;
    if ( v13 > 0x39u )
      v13 += 32 * (a4 ^ 1) + 7;
    *v8 = v13;
    v10 = (unsigned __int8 *)--v4[12];
  }
  result = v10 + 1;
  v4[13] = v15 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005EA29) --------------------------------------------------------
_BYTE *__thiscall sub_1005EA29(_DWORD *this, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edi
  unsigned int v7; // ebx
  unsigned __int8 *v8; // ecx
  unsigned int v9; // edi
  unsigned __int8 *v10; // edx
  int v11; // eax
  char v12; // al
  unsigned __int8 v13; // al
  _BYTE *result; // eax
  unsigned __int8 *v15; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = this + 15;
  v6 = (_DWORD *)v5[257];
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (unsigned __int8 *)v6 + sub_10035AD0(v5) - 1;
  v9 = a3;
  v15 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (unsigned __int8 *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = v7 & 0xF;
    v7 = __PAIR__(v9, v7) >> 4;
    v13 = v12 + 48;
    v9 >>= 4;
    if ( v13 > 0x39u )
      v13 += 32 * (a4 ^ 1) + 7;
    *v8 = v13;
    v10 = (unsigned __int8 *)--v4[12];
  }
  result = v10 + 1;
  v4[13] = v15 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10035AD0: using guessed type int __thiscall sub_10035AD0(_DWORD);

//----- (1005EAD5) --------------------------------------------------------
int __thiscall sub_1005EAD5(_DWORD *this, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  unsigned int v7; // ebx
  unsigned __int16 *v8; // ecx
  unsigned int v9; // edi
  unsigned __int16 *v10; // edx
  int v11; // eax
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // dx
  int result; // eax
  unsigned __int16 *v15; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (unsigned __int16 *)(v6 + 2 * (sub_10034932() - 1));
  v9 = a3;
  v15 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (unsigned __int16 *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = (v7 & 0xF) + 48;
    v7 = __PAIR__(v9, v7) >> 4;
    v13 = v12;
    v9 >>= 4;
    if ( v12 > 0x39u )
      v13 = (unsigned __int8)(v12 + 32 * (a4 ^ 1) + 7);
    *v8 = v13;
    v4[12] -= 2;
    v10 = (unsigned __int16 *)v4[12];
  }
  result = (int)(v10 + 1);
  v4[13] = v15 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005EB90) --------------------------------------------------------
int __thiscall sub_1005EB90(_DWORD *this, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  unsigned int v7; // ebx
  unsigned __int16 *v8; // ecx
  unsigned int v9; // edi
  unsigned __int16 *v10; // edx
  int v11; // eax
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // dx
  int result; // eax
  unsigned __int16 *v15; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (unsigned __int16 *)(v6 + 2 * (sub_10034932() - 1));
  v9 = a3;
  v15 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (unsigned __int16 *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = (v7 & 0xF) + 48;
    v7 = __PAIR__(v9, v7) >> 4;
    v13 = v12;
    v9 >>= 4;
    if ( v12 > 0x39u )
      v13 = (unsigned __int8)(v12 + 32 * (a4 ^ 1) + 7);
    *v8 = v13;
    v4[12] -= 2;
    v10 = (unsigned __int16 *)v4[12];
  }
  result = (int)(v10 + 1);
  v4[13] = v15 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005EC4B) --------------------------------------------------------
int __thiscall sub_1005EC4B(_DWORD *this, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  unsigned int v7; // ebx
  unsigned __int16 *v8; // ecx
  unsigned int v9; // edi
  unsigned __int16 *v10; // edx
  int v11; // eax
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // dx
  int result; // eax
  unsigned __int16 *v15; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (unsigned __int16 *)(v6 + 2 * (sub_10034932() - 1));
  v9 = a3;
  v15 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (unsigned __int16 *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = (v7 & 0xF) + 48;
    v7 = __PAIR__(v9, v7) >> 4;
    v13 = v12;
    v9 >>= 4;
    if ( v12 > 0x39u )
      v13 = (unsigned __int8)(v12 + 32 * (a4 ^ 1) + 7);
    *v8 = v13;
    v4[12] -= 2;
    v10 = (unsigned __int16 *)v4[12];
  }
  result = (int)(v10 + 1);
  v4[13] = v15 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005ED06) --------------------------------------------------------
int __thiscall sub_1005ED06(_DWORD *this, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  unsigned int v7; // ebx
  unsigned __int16 *v8; // ecx
  unsigned int v9; // edi
  unsigned __int16 *v10; // edx
  int v11; // eax
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // dx
  int result; // eax
  unsigned __int16 *v15; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (unsigned __int16 *)(v6 + 2 * (sub_10034932() - 1));
  v9 = a3;
  v15 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (unsigned __int16 *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = (v7 & 0xF) + 48;
    v7 = __PAIR__(v9, v7) >> 4;
    v13 = v12;
    v9 >>= 4;
    if ( v12 > 0x39u )
      v13 = (unsigned __int8)(v12 + 32 * (a4 ^ 1) + 7);
    *v8 = v13;
    v4[12] -= 2;
    v10 = (unsigned __int16 *)v4[12];
  }
  result = (int)(v10 + 1);
  v4[13] = v15 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005EDC1) --------------------------------------------------------
int __thiscall sub_1005EDC1(_DWORD *this, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  unsigned int v7; // ebx
  unsigned __int16 *v8; // ecx
  unsigned int v9; // edi
  unsigned __int16 *v10; // edx
  int v11; // eax
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // dx
  int result; // eax
  unsigned __int16 *v15; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (unsigned __int16 *)(v6 + 2 * (sub_10034932() - 1));
  v9 = a3;
  v15 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (unsigned __int16 *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = (v7 & 0xF) + 48;
    v7 = __PAIR__(v9, v7) >> 4;
    v13 = v12;
    v9 >>= 4;
    if ( v12 > 0x39u )
      v13 = (unsigned __int8)(v12 + 32 * (a4 ^ 1) + 7);
    *v8 = v13;
    v4[12] -= 2;
    v10 = (unsigned __int16 *)v4[12];
  }
  result = (int)(v10 + 1);
  v4[13] = v15 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005EE7C) --------------------------------------------------------
int __thiscall sub_1005EE7C(_DWORD *this, unsigned int a2, unsigned int a3, char a4)
{
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // edi
  unsigned int v7; // ebx
  unsigned __int16 *v8; // ecx
  unsigned int v9; // edi
  unsigned __int16 *v10; // edx
  int v11; // eax
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // dx
  int result; // eax
  unsigned __int16 *v15; // [esp+Ch] [ebp-8h]

  v4 = this;
  v5 = (int)(this + 15);
  v6 = *(_DWORD *)(v5 + 1028);
  if ( !v6 )
    v6 = v5;
  v7 = a2;
  v8 = (unsigned __int16 *)(v6 + 2 * (sub_10034932() - 1));
  v9 = a3;
  v15 = v8;
  v10 = v8;
  for ( v4[12] = v8; ; v8 = (unsigned __int16 *)v4[12] )
  {
    v11 = v4[9];
    if ( v11 > 0 )
      goto LABEL_7;
    if ( !(v9 | v7) )
      break;
    v11 = v4[9];
LABEL_7:
    v4[9] = v11 - 1;
    v12 = (v7 & 0xF) + 48;
    v7 = __PAIR__(v9, v7) >> 4;
    v13 = v12;
    v9 >>= 4;
    if ( v12 > 0x39u )
      v13 = (unsigned __int8)(v12 + 32 * (a4 ^ 1) + 7);
    *v8 = v13;
    v4[12] -= 2;
    v10 = (unsigned __int16 *)v4[12];
  }
  result = (int)(v10 + 1);
  v4[13] = v15 - v10;
  v4[12] = v10 + 1;
  return result;
}
// 10034932: using guessed type int sub_10034932(void);

//----- (1005F3EC) --------------------------------------------------------
_DWORD *__thiscall sub_1005F3EC(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *result; // eax

  this[2] = a6;
  *this = 0;
  this[1] = 0;
  this[3] = 0;
  this[4] = 0;
  this[271] = 0;
  this[272] = 0;
  this[5] = 0;
  *((_BYTE *)this + 24) = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  *((_WORD *)this + 22) = 0;
  this[13] = 0;
  *((_BYTE *)this + 56) = 0;
  this[274] = *a2;
  *this = a3;
  this[3] = a5;
  this[4] = a7;
  result = this;
  this[1] = a4;
  return result;
}

//----- (1005F46C) --------------------------------------------------------
_DWORD *__thiscall sub_1005F46C(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *result; // eax

  this[2] = a6;
  *this = 0;
  this[1] = 0;
  this[3] = 0;
  this[4] = 0;
  this[271] = 0;
  this[272] = 0;
  this[5] = 0;
  *((_BYTE *)this + 24) = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  *((_WORD *)this + 22) = 0;
  this[13] = 0;
  *((_BYTE *)this + 56) = 0;
  this[274] = *a2;
  *this = a3;
  this[3] = a5;
  this[4] = a7;
  result = this;
  this[1] = a4;
  return result;
}

//----- (1005F4EC) --------------------------------------------------------
_DWORD *__thiscall sub_1005F4EC(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *result; // eax

  this[2] = a6;
  *((_WORD *)this + 23) = 0;
  *this = 0;
  this[1] = 0;
  this[3] = 0;
  this[4] = 0;
  this[271] = 0;
  this[272] = 0;
  this[5] = 0;
  *((_BYTE *)this + 24) = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  *((_BYTE *)this + 44) = 0;
  this[13] = 0;
  *((_BYTE *)this + 56) = 0;
  this[274] = *a2;
  *this = a3;
  this[3] = a5;
  this[4] = a7;
  result = this;
  this[1] = a4;
  return result;
}

//----- (1005F573) --------------------------------------------------------
_DWORD *__thiscall sub_1005F573(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *result; // eax

  this[2] = a6;
  *((_WORD *)this + 23) = 0;
  *this = 0;
  this[1] = 0;
  this[3] = 0;
  this[4] = 0;
  this[271] = 0;
  this[272] = 0;
  this[5] = 0;
  *((_BYTE *)this + 24) = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  *((_BYTE *)this + 44) = 0;
  this[13] = 0;
  *((_BYTE *)this + 56) = 0;
  this[274] = *a2;
  *this = a3;
  this[3] = a5;
  this[4] = a7;
  result = this;
  this[1] = a4;
  return result;
}

//----- (1005F900) --------------------------------------------------------
_BYTE *__thiscall sub_1005F900(_BYTE *this, _DWORD *a2)
{
  _BYTE *v2; // edx
  int v3; // ecx
  _BYTE *result; // eax
  wchar_t **v5; // eax
  void *v6; // ecx

  v2 = this;
  this[20] = 0;
  *(_DWORD *)this = 0;
  this[8] = 0;
  this[28] = 0;
  this[36] = 0;
  if ( a2 )
  {
    v3 = a2[1];
    *((_DWORD *)v2 + 3) = *a2;
    result = v2;
    v2[20] = 1;
    *((_DWORD *)v2 + 4) = v3;
  }
  else
  {
    if ( !dword_100B1CD4 )
    {
      v5 = off_100B044C;
      v6 = off_100B0450;
      v2[20] = 1;
      *((_DWORD *)v2 + 4) = v6;
      *((_DWORD *)v2 + 3) = v5;
    }
    result = v2;
  }
  return result;
}
// 100B044C: using guessed type wchar_t **off_100B044C;
// 100B0450: using guessed type void *off_100B0450;
// 100B1CD4: using guessed type int dword_100B1CD4;

//----- (1005FB40) --------------------------------------------------------
void __thiscall sub_1005FB40(_BYTE *this)
{
  _BYTE *v1; // edi
  int v2; // esi
  int v3; // esi

  v1 = this;
  if ( this[20] == 2 )
    *(_DWORD *)(*(_DWORD *)this + 848) &= 0xFFFFFFFD;
  if ( this[28] )
  {
    v2 = *((_DWORD *)this + 6);
    *(_DWORD *)(((int (*)(void))sub_10033C1C)() + 16) = v2;
  }
  if ( v1[36] )
  {
    v3 = *((_DWORD *)v1 + 8);
    *(_DWORD *)(sub_10033C1C(v1) + 20) = v3;
  }
}
// 10033C1C: using guessed type int __thiscall sub_10033C1C(_DWORD);

//----- (1005FB96) --------------------------------------------------------
int __thiscall sub_1005FB96(LPVOID *this)
{
  LPVOID *v1; // esi
  int result; // eax

  v1 = this;
  result = sub_1003603E(this[257]);
  v1[257] = 0;
  return result;
}

//----- (1005FBD1) --------------------------------------------------------
LPVOID *__thiscall sub_1005FBD1(LPVOID *this, LPVOID *a2)
{
  LPVOID *v2; // esi
  LPVOID *result; // eax

  v2 = this;
  sub_1003603E(*this);
  *v2 = 0;
  *v2 = *a2;
  result = v2;
  *a2 = 0;
  return result;
}

//----- (1005FC22) --------------------------------------------------------
int __thiscall sub_1005FC22(int **this)
{
  int **v1; // esi
  int *v2; // edi
  int v3; // ebx
  int *v4; // eax
  int v5; // ecx
  int *v6; // eax
  int v7; // esi
  int v9; // [esp+Ch] [ebp-ACCh]
  int v10; // [esp+10h] [ebp-AC8h]
  int v11; // [esp+14h] [ebp-AC4h]
  int v12; // [esp+18h] [ebp-AC0h]
  int v13; // [esp+1Ch] [ebp-ABCh]
  int v14; // [esp+20h] [ebp-AB8h]
  char v15; // [esp+24h] [ebp-AB4h]
  char v16; // [esp+60h] [ebp-A78h]

  v1 = this;
  v2 = this[1];
  v3 = **this;
  LOBYTE(v11) = sub_10034DBA(**this);
  v14 = *v1[4];
  v13 = *v1[3];
  v4 = v1[2];
  v5 = *v4;
  v10 = v4[1];
  v6 = *v1;
  v9 = v5;
  v12 = *v6;
  sub_10035CAB(&v12, &v9, &v13, v1[1], &v14);
  v7 = sub_1003549A(&v15);
  sub_10035021(&v16);
  sub_10035AF3(v11, v3, v2);
  return v7;
}
// 10034DBA: using guessed type _DWORD __cdecl sub_10034DBA(_DWORD);
// 10035021: using guessed type int __thiscall sub_10035021(_DWORD);
// 1003549A: using guessed type int __thiscall sub_1003549A(_DWORD);
// 10035AF3: using guessed type _DWORD __cdecl sub_10035AF3(char, _DWORD, _DWORD);
// 10035CAB: using guessed type _DWORD __stdcall sub_10035CAB(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1005FD39) --------------------------------------------------------
int __thiscall sub_1005FD39(int **this)
{
  int **v1; // esi
  int *v2; // edi
  int v3; // ebx
  char v4; // ST24_1
  int v5; // esi
  int v7; // [esp+10h] [ebp-460h]
  char v8; // [esp+14h] [ebp-45Ch]
  char v9; // [esp+50h] [ebp-420h]
  int v10; // [esp+464h] [ebp-Ch]

  v1 = this;
  v2 = this[1];
  v3 = **this;
  v4 = sub_10034DBA(**this);
  v7 = **v1;
  sub_10035E68(&v7, *v1[2], v1[2][1], *v1[3], v1[1], *v1[4]);
  v10 = 0;
  v5 = sub_10035E9F(&v8);
  sub_10035021(&v9);
  sub_10035AF3(v4, v3, v2);
  return v5;
}
// 10034DBA: using guessed type _DWORD __cdecl sub_10034DBA(_DWORD);
// 10035021: using guessed type int __thiscall sub_10035021(_DWORD);
// 10035AF3: using guessed type _DWORD __cdecl sub_10035AF3(char, _DWORD, _DWORD);
// 10035E68: using guessed type _DWORD __stdcall sub_10035E68(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035E9F: using guessed type int __thiscall sub_10035E9F(_DWORD);

//----- (1005FE28) --------------------------------------------------------
int __thiscall sub_1005FE28(int **this)
{
  int **v1; // esi
  int *v2; // edi
  int v3; // ebx
  char v4; // ST24_1
  int v5; // esi
  int v7; // [esp+10h] [ebp-460h]
  char v8; // [esp+14h] [ebp-45Ch]
  char v9; // [esp+50h] [ebp-420h]
  int v10; // [esp+464h] [ebp-Ch]

  v1 = this;
  v2 = this[1];
  v3 = **this;
  v4 = sub_10034DBA(**this);
  v7 = **v1;
  sub_10035E68(&v7, *v1[2], v1[2][1], *v1[3], v1[1], *v1[4]);
  v10 = 0;
  v5 = sub_100342FC(&v8);
  sub_10035021(&v9);
  sub_10035AF3(v4, v3, v2);
  return v5;
}
// 100342FC: using guessed type int __thiscall sub_100342FC(_DWORD);
// 10034DBA: using guessed type _DWORD __cdecl sub_10034DBA(_DWORD);
// 10035021: using guessed type int __thiscall sub_10035021(_DWORD);
// 10035AF3: using guessed type _DWORD __cdecl sub_10035AF3(char, _DWORD, _DWORD);
// 10035E68: using guessed type _DWORD __stdcall sub_10035E68(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1005FF01) --------------------------------------------------------
int __thiscall sub_1005FF01(int **this)
{
  int **v1; // esi
  int *v2; // edi
  int v3; // ebx
  char v4; // ST24_1
  int v5; // esi
  int v7; // [esp+10h] [ebp-460h]
  char v8; // [esp+14h] [ebp-45Ch]
  char v9; // [esp+50h] [ebp-420h]
  int v10; // [esp+464h] [ebp-Ch]

  v1 = this;
  v2 = this[1];
  v3 = **this;
  v4 = sub_10034DBA(**this);
  v7 = **v1;
  sub_10033735(&v7, *v1[2], v1[2][1], *v1[3], v1[1], *v1[4]);
  v10 = 0;
  v5 = sub_10035062(&v8);
  sub_10035021(&v9);
  sub_10035AF3(v4, v3, v2);
  return v5;
}
// 10033735: using guessed type _DWORD __stdcall sub_10033735(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034DBA: using guessed type _DWORD __cdecl sub_10034DBA(_DWORD);
// 10035021: using guessed type int __thiscall sub_10035021(_DWORD);
// 10035062: using guessed type int __thiscall sub_10035062(_DWORD);
// 10035AF3: using guessed type _DWORD __cdecl sub_10035AF3(char, _DWORD, _DWORD);

//----- (1005FFCF) --------------------------------------------------------
int __thiscall sub_1005FFCF(int **this)
{
  int **v1; // esi
  int *v2; // edi
  int v3; // ebx
  int *v4; // eax
  int v5; // ecx
  int *v6; // eax
  int v7; // esi
  int v9; // [esp+Ch] [ebp-ACCh]
  int v10; // [esp+10h] [ebp-AC8h]
  int v11; // [esp+14h] [ebp-AC4h]
  int v12; // [esp+18h] [ebp-AC0h]
  int v13; // [esp+1Ch] [ebp-ABCh]
  int v14; // [esp+20h] [ebp-AB8h]
  char v15; // [esp+24h] [ebp-AB4h]
  char v16; // [esp+60h] [ebp-A78h]

  v1 = this;
  v2 = this[1];
  v3 = **this;
  LOBYTE(v11) = sub_10034DBA(**this);
  v14 = *v1[4];
  v13 = *v1[3];
  v4 = v1[2];
  v5 = *v4;
  v10 = v4[1];
  v6 = *v1;
  v9 = v5;
  v12 = *v6;
  sub_10034BAD(&v12, &v9, &v13, v1[1], &v14);
  v7 = sub_10035CD8(&v15);
  sub_10035021(&v16);
  sub_10035AF3(v11, v3, v2);
  return v7;
}
// 10034BAD: using guessed type _DWORD __stdcall sub_10034BAD(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034DBA: using guessed type _DWORD __cdecl sub_10034DBA(_DWORD);
// 10035021: using guessed type int __thiscall sub_10035021(_DWORD);
// 10035AF3: using guessed type _DWORD __cdecl sub_10035AF3(char, _DWORD, _DWORD);
// 10035CD8: using guessed type int __thiscall sub_10035CD8(_DWORD);

//----- (100600D0) --------------------------------------------------------
int __thiscall sub_100600D0(int **this)
{
  int **v1; // esi
  int *v2; // edi
  int v3; // ebx
  char v4; // ST24_1
  int v5; // esi
  int v7; // [esp+10h] [ebp-460h]
  char v8; // [esp+14h] [ebp-45Ch]
  char v9; // [esp+50h] [ebp-420h]
  int v10; // [esp+464h] [ebp-Ch]

  v1 = this;
  v2 = this[1];
  v3 = **this;
  v4 = sub_10034DBA(**this);
  v7 = **v1;
  sub_10033735(&v7, *v1[2], v1[2][1], *v1[3], v1[1], *v1[4]);
  v10 = 0;
  v5 = sub_10034383(&v8);
  sub_10035021(&v9);
  sub_10035AF3(v4, v3, v2);
  return v5;
}
// 10033735: using guessed type _DWORD __stdcall sub_10033735(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034383: using guessed type int __thiscall sub_10034383(_DWORD);
// 10034DBA: using guessed type _DWORD __cdecl sub_10034DBA(_DWORD);
// 10035021: using guessed type int __thiscall sub_10035021(_DWORD);
// 10035AF3: using guessed type _DWORD __cdecl sub_10035AF3(char, _DWORD, _DWORD);

//----- (100602BF) --------------------------------------------------------
char __thiscall sub_100602BF(_DWORD *this)
{
  _DWORD *v1; // edx
  int v2; // ecx
  char result; // al

  v1 = this;
  v2 = this[278];
  v1[278] = v2 + 1;
  if ( v2 == 2 || v2 == 1 && v1[279] == 1 )
    return 0;
  v1[681] = -1;
  v1[682] = -1;
  result = 1;
  v1[279] = 0;
  v1[8] = 0;
  v1[9] = 0;
  v1[3] = v1[280];
  return result;
}

//----- (10060320) --------------------------------------------------------
char __thiscall sub_10060320(_DWORD *this)
{
  _DWORD *v1; // edx
  int v2; // ecx
  char result; // al

  v1 = this;
  v2 = this[278];
  v1[278] = v2 + 1;
  if ( v2 == 2 || v2 == 1 && v1[279] == 1 )
    return 0;
  v1[681] = -1;
  v1[682] = -1;
  result = 1;
  v1[279] = 0;
  v1[8] = 0;
  v1[9] = 0;
  v1[3] = v1[280];
  return result;
}

//----- (10060381) --------------------------------------------------------
char __thiscall sub_10060381(_DWORD *this)
{
  _DWORD *v1; // edx
  int v2; // ecx
  char result; // al

  v1 = this;
  v2 = this[278];
  v1[278] = v2 + 1;
  if ( v2 == 2 || v2 == 1 && v1[279] == 1 )
    return 0;
  v1[681] = -1;
  v1[682] = -1;
  result = 1;
  v1[279] = 0;
  v1[8] = 0;
  v1[9] = 0;
  v1[3] = v1[280];
  return result;
}

//----- (100603E2) --------------------------------------------------------
char __thiscall sub_100603E2(_DWORD *this)
{
  _DWORD *v1; // edx
  int v2; // ecx
  char result; // al

  v1 = this;
  v2 = this[278];
  v1[278] = v2 + 1;
  if ( v2 == 2 || v2 == 1 && v1[279] == 1 )
    return 0;
  v1[681] = -1;
  v1[682] = -1;
  result = 1;
  v1[279] = 0;
  v1[8] = 0;
  v1[9] = 0;
  v1[3] = v1[280];
  return result;
}

//----- (10060587) --------------------------------------------------------
char __cdecl sub_10060587(char *a1, int a2)
{
  char *v2; // ecx
  char v3; // bl
  char result; // al
  char v5; // dl
  char *v6; // ecx
  char v7; // al
  char *v8; // edx

  v2 = a1;
  v3 = ***(_BYTE ***)(*(_DWORD *)a2 + 136);
  result = *a1;
  if ( *a1 )
  {
    v5 = *a1;
    do
    {
      result = v5;
      if ( v5 == v3 )
        break;
      result = *++v2;
      v5 = *v2;
    }
    while ( *v2 );
  }
  v6 = v2 + 1;
  if ( result )
  {
    while ( 1 )
    {
      v7 = *v6;
      if ( !*v6 || v7 == 101 || v7 == 69 )
        break;
      ++v6;
    }
    v8 = v6;
    do
      --v6;
    while ( *v6 == 48 );
    if ( *v6 == v3 )
      --v6;
    do
    {
      result = *v8++;
      *++v6 = result;
    }
    while ( result );
  }
  return result;
}

//----- (10060609) --------------------------------------------------------
char __stdcall sub_10060609(char a1, char a2)
{
  char v2; // al

  if ( (unsigned __int8)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_100A56F9[2 * ((a1 - 32) & 0x7F)];
  return byte_100A56F8[2 * ((a2 + 9 * v2) & 0x7F)];
}

//----- (10060655) --------------------------------------------------------
char __stdcall sub_10060655(char a1, char a2)
{
  char v2; // al

  if ( (unsigned __int8)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_100A56F9[2 * ((a1 - 32) & 0x7F)];
  return byte_100A56F8[2 * ((a2 + 9 * v2) & 0x7F)];
}

//----- (100606A1) --------------------------------------------------------
char __stdcall sub_100606A1(char a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // al

  if ( (unsigned __int8)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_100A55C1[2 * ((a1 - 32) & 0x7F)];
  return byte_100A55C0[2 * ((a2 + 8 * v2) & 0x7F)];
}

//----- (100606EA) --------------------------------------------------------
char __stdcall sub_100606EA(char a1, char a2)
{
  char v2; // al

  if ( (unsigned __int8)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_100A56F9[2 * ((a1 - 32) & 0x7F)];
  return byte_100A56F8[2 * ((a2 + 9 * v2) & 0x7F)];
}

//----- (10060736) --------------------------------------------------------
char __stdcall sub_10060736(char a1, char a2)
{
  char v2; // al

  if ( (unsigned __int8)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_100A56F9[2 * ((a1 - 32) & 0x7F)];
  return byte_100A56F8[2 * ((a2 + 9 * v2) & 0x7F)];
}

//----- (10060782) --------------------------------------------------------
char __stdcall sub_10060782(char a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // al

  if ( (unsigned __int8)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_100A55C1[2 * ((a1 - 32) & 0x7F)];
  return byte_100A55C0[2 * ((a2 + 8 * v2) & 0x7F)];
}

//----- (100607CB) --------------------------------------------------------
char __stdcall sub_100607CB(__int16 a1, char a2)
{
  char v2; // al

  if ( (unsigned __int16)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_100A56F9[2 * (((_BYTE)a1 - 32) & 0x7F)];
  return byte_100A56F8[2 * ((a2 + 9 * v2) & 0x7F)];
}

//----- (10060816) --------------------------------------------------------
char __stdcall sub_10060816(__int16 a1, char a2)
{
  char v2; // al

  if ( (unsigned __int16)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_100A56F9[2 * (((_BYTE)a1 - 32) & 0x7F)];
  return byte_100A56F8[2 * ((a2 + 9 * v2) & 0x7F)];
}

//----- (10060861) --------------------------------------------------------
char __stdcall sub_10060861(__int16 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // al

  if ( (unsigned __int16)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_100A55C1[2 * (((_BYTE)a1 - 32) & 0x7F)];
  return byte_100A55C0[2 * ((a2 + 8 * v2) & 0x7F)];
}

//----- (100608A9) --------------------------------------------------------
char __stdcall sub_100608A9(__int16 a1, char a2)
{
  char v2; // al

  if ( (unsigned __int16)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_100A56F9[2 * (((_BYTE)a1 - 32) & 0x7F)];
  return byte_100A56F8[2 * ((a2 + 9 * v2) & 0x7F)];
}

//----- (100608F4) --------------------------------------------------------
char __stdcall sub_100608F4(__int16 a1, char a2)
{
  char v2; // al

  if ( (unsigned __int16)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_100A56F9[2 * (((_BYTE)a1 - 32) & 0x7F)];
  return byte_100A56F8[2 * ((a2 + 9 * v2) & 0x7F)];
}

//----- (1006093F) --------------------------------------------------------
char __stdcall sub_1006093F(__int16 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // al

  if ( (unsigned __int16)(a1 - 32) > 0x5Au )
    v2 = 0;
  else
    v2 = byte_100A55C1[2 * (((_BYTE)a1 - 32) & 0x7F)];
  return byte_100A55C0[2 * ((a2 + 8 * v2) & 0x7F)];
}

//----- (10060987) --------------------------------------------------------
unsigned __int8 *__cdecl sub_10060987(unsigned __int8 *a1, int *a2)
{
  unsigned __int8 *v2; // edx
  int v3; // ecx
  unsigned __int8 v4; // bl
  int v5; // edi
  unsigned __int8 *result; // eax
  unsigned __int8 *v7; // edx
  unsigned __int8 v8; // cl

  v2 = a1;
  v3 = *a2;
  v4 = *a1;
  v5 = *(_DWORD *)(*a2 + 148);
  if ( *(_BYTE *)(*a1 + v5) != 101 )
  {
    do
      v4 = *++v2;
    while ( *(_BYTE *)(*(_DWORD *)v3 + 2 * *v2) & 4 );
  }
  if ( *(_BYTE *)(v4 + v5) == 120 )
  {
    v2 += 2;
    v4 = *v2;
  }
  result = **(unsigned __int8 ***)(v3 + 136);
  *v2 = *result;
  v7 = v2 + 1;
  do
  {
    LOBYTE(result) = *v7;
    v8 = v4;
    *v7++ = v4;
    v4 = (unsigned __int8)result;
  }
  while ( v8 );
  return result;
}

//----- (10060A20) --------------------------------------------------------
int __thiscall sub_10060A20(_BYTE *this)
{
  _BYTE *v1; // edi
  DWORD v2; // eax
  bool v3; // zf
  int v4; // eax
  int v5; // eax
  int v6; // esi
  DWORD dwErrCode; // [esp+8h] [ebp-4h]

  v1 = this;
  v2 = GetLastError();
  v3 = v1[8] == 0;
  dwErrCode = v2;
  if ( v3 )
  {
    *((_DWORD *)v1 + 1) = 0;
    v4 = 0;
    v1[8] = 1;
  }
  else
  {
    v4 = *((_DWORD *)v1 + 1);
  }
  v5 = sub_10033398(&dwErrCode, v4);
  v6 = v5;
  *(_DWORD *)v1 = v5;
  SetLastError(dwErrCode);
  return v6;
}
// 10033398: using guessed type _DWORD __cdecl sub_10033398(_DWORD, _DWORD);

//----- (10060B50) --------------------------------------------------------
int __thiscall sub_10060B50(_DWORD *this)
{
  _DWORD *v1; // edi
  DWORD v2; // eax
  bool v3; // zf
  int v4; // eax
  int v5; // esi
  int v6; // edx
  int v7; // ecx
  DWORD dwErrCode; // [esp+4h] [ebp-4h]

  v1 = this;
  if ( !*this )
  {
    v2 = GetLastError();
    v3 = *((_BYTE *)v1 + 8) == 0;
    dwErrCode = v2;
    if ( v3 )
    {
      v1[1] = 0;
      v4 = 0;
      *((_BYTE *)v1 + 8) = 1;
    }
    else
    {
      v4 = v1[1];
    }
    v5 = sub_10033398(&dwErrCode, v4);
    *v1 = v5;
    SetLastError(dwErrCode);
    if ( !v5 )
      sub_100354D1(v7, v6);
  }
  return *v1;
}
// 10033398: using guessed type _DWORD __cdecl sub_10033398(_DWORD, _DWORD);
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);

//----- (10060CCB) --------------------------------------------------------
char __thiscall sub_10060CCB(_DWORD *this, int a2, int a3, char a4, int a5)
{
  _DWORD *v5; // edi
  char v6; // al
  bool v7; // zf
  char v8; // cl
  char v9; // dh
  char v10; // dl
  char v11; // al
  int v13; // esi
  char v15; // bl
  char v16; // [esp+Fh] [ebp-1h]
  char v17; // [esp+Fh] [ebp-1h]

  v5 = this;
  v6 = *(_BYTE *)(a2 + 4);
  v7 = v6 == 112;
  if ( v6 != 112 )
  {
    if ( a4 != 112 )
    {
      v8 = 0;
      if ( v6 == 115 || (v16 = 0, v6 == 83) )
        v16 = 1;
      if ( a4 == 115 || (v9 = 0, a4 == 83) )
        v9 = 1;
      if ( v6 == 99 || (v10 = 0, v6 == 67) )
        v10 = 1;
      if ( a4 == 99 || a4 == 67 )
        v8 = 1;
      if ( v16 )
      {
        if ( v16 == v9 )
          goto LABEL_27;
      }
      else if ( !v9 )
      {
        if ( !v10 )
        {
          if ( !v8 )
          {
            v17 = sub_10034FB3(v6);
            v11 = sub_10034FB3(a4);
            if ( v17 )
            {
              if ( v17 == v11 && (*(_DWORD *)(a2 + 12) == 9) == (a5 == 9) )
              {
                v13 = sub_10033DBB(*(_DWORD *)(a2 + 12));
                return v13 == sub_10033DBB(a5);
              }
            }
            else if ( !v11 )
            {
              return *(_DWORD *)a2 == a3;
            }
          }
          return 0;
        }
LABEL_27:
        if ( v10 == v8 )
        {
          v15 = sub_100350B2(*v5, v5[1], v6, *(_DWORD *)(a2 + 12));
          if ( v15 == (unsigned __int8)sub_100350B2(*v5, v5[1], a4, a5) )
            return 1;
        }
        return 0;
      }
      return 0;
    }
    v7 = v6 == 112;
  }
  return (a4 != 112) ^ v7;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034FB3: using guessed type _DWORD __cdecl sub_10034FB3(char);
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);

//----- (10060E2B) --------------------------------------------------------
char __thiscall sub_10060E2B(_DWORD *this, int a2, int a3, char a4, int a5)
{
  _DWORD *v5; // edi
  char v6; // al
  bool v7; // zf
  char v8; // cl
  char v9; // dh
  char v10; // dl
  char v11; // al
  int v13; // esi
  char v15; // bl
  char v16; // [esp+Fh] [ebp-1h]
  char v17; // [esp+Fh] [ebp-1h]

  v5 = this;
  v6 = *(_BYTE *)(a2 + 4);
  v7 = v6 == 112;
  if ( v6 != 112 )
  {
    if ( a4 != 112 )
    {
      v8 = 0;
      if ( v6 == 115 || (v16 = 0, v6 == 83) )
        v16 = 1;
      if ( a4 == 115 || (v9 = 0, a4 == 83) )
        v9 = 1;
      if ( v6 == 99 || (v10 = 0, v6 == 67) )
        v10 = 1;
      if ( a4 == 99 || a4 == 67 )
        v8 = 1;
      if ( v16 )
      {
        if ( v16 == v9 )
          goto LABEL_27;
      }
      else if ( !v9 )
      {
        if ( !v10 )
        {
          if ( !v8 )
          {
            v17 = sub_10035A49(v6);
            v11 = sub_10035A49(a4);
            if ( v17 )
            {
              if ( v17 == v11 && (*(_DWORD *)(a2 + 12) == 9) == (a5 == 9) )
              {
                v13 = sub_10033DBB(*(_DWORD *)(a2 + 12));
                return v13 == sub_10033DBB(a5);
              }
            }
            else if ( !v11 )
            {
              return *(_DWORD *)a2 == a3;
            }
          }
          return 0;
        }
LABEL_27:
        if ( v10 == v8 )
        {
          v15 = sub_100350B2(*v5, v5[1], v6, *(_DWORD *)(a2 + 12));
          if ( v15 == (unsigned __int8)sub_100350B2(*v5, v5[1], a4, a5) )
            return 1;
        }
        return 0;
      }
      return 0;
    }
    v7 = v6 == 112;
  }
  return (a4 != 112) ^ v7;
}
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 100350B2: using guessed type _DWORD __cdecl sub_100350B2(_DWORD, _DWORD, char, _DWORD);
// 10035A49: using guessed type _DWORD __cdecl sub_10035A49(char);

//----- (10060F8B) --------------------------------------------------------
char __thiscall sub_10060F8B(_DWORD *this, int a2, int a3, __int16 a4, int a5)
{
  __int16 v5; // di
  bool v6; // zf
  char v7; // al
  char v8; // cl
  char v9; // al
  int v11; // esi
  char v13; // bl
  _DWORD *v14; // [esp+Ch] [ebp-8h]
  char v15; // [esp+11h] [ebp-3h]
  char v16; // [esp+11h] [ebp-3h]
  char v17; // [esp+12h] [ebp-2h]
  char v18; // [esp+13h] [ebp-1h]

  v5 = *(_WORD *)(a2 + 4);
  v14 = this;
  v6 = v5 == 112;
  if ( v5 != 112 )
  {
    if ( a4 != 112 )
    {
      v15 = sub_10034243(v5);
      v18 = sub_10034243(a4);
      v17 = sub_100362DC(v5);
      v7 = sub_100362DC(a4);
      if ( v15 )
      {
        if ( v15 == v18 )
        {
          v8 = v17;
          goto LABEL_16;
        }
      }
      else if ( !v18 )
      {
        v8 = v17;
        if ( !v17 )
        {
          if ( !v7 )
          {
            v16 = sub_10033C99(v5);
            v9 = sub_10033C99(a4);
            if ( v16 )
            {
              if ( v16 == v9 && (*(_DWORD *)(a2 + 12) == 9) == (a5 == 9) )
              {
                v11 = sub_10033DBB(*(_DWORD *)(a2 + 12));
                return v11 == sub_10033DBB(a5);
              }
            }
            else if ( !v9 )
            {
              return *(_DWORD *)a2 == a3;
            }
          }
          return 0;
        }
LABEL_16:
        if ( v8 == v7 )
        {
          v13 = sub_10033519(*v14, v14[1], v5, *(_DWORD *)(a2 + 12));
          if ( v13 == (unsigned __int8)sub_10033519(*v14, v14[1], a4, a5) )
            return 1;
        }
        return 0;
      }
      return 0;
    }
    v6 = v5 == 112;
  }
  return (a4 != 112) ^ v6;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);
// 10033C99: using guessed type _DWORD __cdecl sub_10033C99(__int16);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 10034243: using guessed type _DWORD __cdecl sub_10034243(__int16);
// 100362DC: using guessed type _DWORD __cdecl sub_100362DC(__int16);

//----- (100610EC) --------------------------------------------------------
char __thiscall sub_100610EC(_DWORD *this, int a2, int a3, __int16 a4, int a5)
{
  __int16 v5; // di
  bool v6; // zf
  char v7; // al
  char v8; // cl
  char v9; // al
  int v11; // esi
  char v13; // bl
  _DWORD *v14; // [esp+Ch] [ebp-8h]
  char v15; // [esp+11h] [ebp-3h]
  char v16; // [esp+11h] [ebp-3h]
  char v17; // [esp+12h] [ebp-2h]
  char v18; // [esp+13h] [ebp-1h]

  v5 = *(_WORD *)(a2 + 4);
  v14 = this;
  v6 = v5 == 112;
  if ( v5 != 112 )
  {
    if ( a4 != 112 )
    {
      v15 = sub_10035251(v5);
      v18 = sub_10035251(a4);
      v17 = sub_1003561B(v5);
      v7 = sub_1003561B(a4);
      if ( v15 )
      {
        if ( v15 == v18 )
        {
          v8 = v17;
          goto LABEL_16;
        }
      }
      else if ( !v18 )
      {
        v8 = v17;
        if ( !v17 )
        {
          if ( !v7 )
          {
            v16 = sub_100347CF(v5);
            v9 = sub_100347CF(a4);
            if ( v16 )
            {
              if ( v16 == v9 && (*(_DWORD *)(a2 + 12) == 9) == (a5 == 9) )
              {
                v11 = sub_10033DBB(*(_DWORD *)(a2 + 12));
                return v11 == sub_10033DBB(a5);
              }
            }
            else if ( !v9 )
            {
              return *(_DWORD *)a2 == a3;
            }
          }
          return 0;
        }
LABEL_16:
        if ( v8 == v7 )
        {
          v13 = sub_10033519(*v14, v14[1], v5, *(_DWORD *)(a2 + 12));
          if ( v13 == (unsigned __int8)sub_10033519(*v14, v14[1], a4, a5) )
            return 1;
        }
        return 0;
      }
      return 0;
    }
    v6 = v5 == 112;
  }
  return (a4 != 112) ^ v6;
}
// 10033519: using guessed type _DWORD __cdecl sub_10033519(_DWORD, _DWORD, __int16, _DWORD);
// 10033DBB: using guessed type _DWORD __cdecl sub_10033DBB(_DWORD);
// 100347CF: using guessed type _DWORD __cdecl sub_100347CF(__int16);
// 10035251: using guessed type _DWORD __cdecl sub_10035251(__int16);
// 1003561B: using guessed type _DWORD __cdecl sub_1003561B(__int16);

//----- (10061532) --------------------------------------------------------
char __thiscall sub_10061532(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  char v3; // bl
  int v4; // edi
  int v5; // eax
  int v7; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  unsigned int v9; // [esp+18h] [ebp-4h]

  v2 = this;
  v3 = 1;
  v4 = this[2];
  v8 = *(_DWORD *)(v4 + 24);
  v7 = *(_DWORD *)(v4 + 28);
  v9 = this[3] - 1;
  *a2 = sub_10034F9F(v4, v9, &v9, 10, 1);
  v5 = v2[2];
  if ( *(_BYTE *)(v5 + 28) && *(_DWORD *)(v5 + 24) == 34 || v9 < v2[3] )
    v3 = 0;
  else
    v2[3] = v9;
  *(_DWORD *)(v4 + 24) = v8;
  *(_DWORD *)(v4 + 28) = v7;
  return v3;
}
// 10034F9F: using guessed type _DWORD __cdecl sub_10034F9F(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (100615C8) --------------------------------------------------------
char __thiscall sub_100615C8(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  char v3; // bl
  int v4; // edi
  int v5; // eax
  int v7; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  unsigned int v9; // [esp+18h] [ebp-4h]

  v2 = this;
  v3 = 1;
  v4 = this[2];
  v8 = *(_DWORD *)(v4 + 24);
  v7 = *(_DWORD *)(v4 + 28);
  v9 = this[3] - 1;
  *a2 = sub_10034F9F(v4, v9, &v9, 10, 1);
  v5 = v2[2];
  if ( *(_BYTE *)(v5 + 28) && *(_DWORD *)(v5 + 24) == 34 || v9 < v2[3] )
    v3 = 0;
  else
    v2[3] = v9;
  *(_DWORD *)(v4 + 24) = v8;
  *(_DWORD *)(v4 + 28) = v7;
  return v3;
}
// 10034F9F: using guessed type _DWORD __cdecl sub_10034F9F(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (1006165E) --------------------------------------------------------
char __thiscall sub_1006165E(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  char v3; // bl
  int v4; // edi
  int v5; // eax
  int v7; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  unsigned int v9; // [esp+18h] [ebp-4h]

  v2 = this;
  v3 = 1;
  v4 = this[2];
  v8 = *(_DWORD *)(v4 + 24);
  v7 = *(_DWORD *)(v4 + 28);
  v9 = this[3] - 1;
  *a2 = sub_10034F9F(v4, v9, &v9, 10, 1);
  v5 = v2[2];
  if ( *(_BYTE *)(v5 + 28) && *(_DWORD *)(v5 + 24) == 34 || v9 < v2[3] )
    v3 = 0;
  else
    v2[3] = v9;
  *(_DWORD *)(v4 + 24) = v8;
  *(_DWORD *)(v4 + 28) = v7;
  return v3;
}
// 10034F9F: using guessed type _DWORD __cdecl sub_10034F9F(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (100616F4) --------------------------------------------------------
char __thiscall sub_100616F4(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  char v3; // bl
  int v4; // edi
  int v5; // eax
  int v7; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  unsigned int v9; // [esp+18h] [ebp-4h]

  v2 = this;
  v3 = 1;
  v4 = this[2];
  v8 = *(_DWORD *)(v4 + 24);
  v7 = *(_DWORD *)(v4 + 28);
  v9 = this[3] - 1;
  *a2 = sub_10034F9F(v4, v9, &v9, 10, 1);
  v5 = v2[2];
  if ( *(_BYTE *)(v5 + 28) && *(_DWORD *)(v5 + 24) == 34 || v9 < v2[3] )
    v3 = 0;
  else
    v2[3] = v9;
  *(_DWORD *)(v4 + 24) = v8;
  *(_DWORD *)(v4 + 28) = v7;
  return v3;
}
// 10034F9F: using guessed type _DWORD __cdecl sub_10034F9F(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (1006178A) --------------------------------------------------------
char __thiscall sub_1006178A(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  char v3; // bl
  int v4; // edi
  int v5; // eax
  int v7; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  unsigned int v9; // [esp+18h] [ebp-4h]

  v2 = this;
  v3 = 1;
  v4 = this[2];
  v8 = *(_DWORD *)(v4 + 24);
  v7 = *(_DWORD *)(v4 + 28);
  v9 = this[3] - 1;
  *a2 = sub_10034F9F(v4, v9, &v9, 10, 1);
  v5 = v2[2];
  if ( *(_BYTE *)(v5 + 28) && *(_DWORD *)(v5 + 24) == 34 || v9 < v2[3] )
    v3 = 0;
  else
    v2[3] = v9;
  *(_DWORD *)(v4 + 24) = v8;
  *(_DWORD *)(v4 + 28) = v7;
  return v3;
}
// 10034F9F: using guessed type _DWORD __cdecl sub_10034F9F(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (10061820) --------------------------------------------------------
char __thiscall sub_10061820(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  char v3; // bl
  int v4; // edi
  int v5; // eax
  int v7; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  unsigned int v9; // [esp+18h] [ebp-4h]

  v2 = this;
  v3 = 1;
  v4 = this[2];
  v8 = *(_DWORD *)(v4 + 24);
  v7 = *(_DWORD *)(v4 + 28);
  v9 = this[3] - 1;
  *a2 = sub_10034F9F(v4, v9, &v9, 10, 1);
  v5 = v2[2];
  if ( *(_BYTE *)(v5 + 28) && *(_DWORD *)(v5 + 24) == 34 || v9 < v2[3] )
    v3 = 0;
  else
    v2[3] = v9;
  *(_DWORD *)(v4 + 24) = v8;
  *(_DWORD *)(v4 + 28) = v7;
  return v3;
}
// 10034F9F: using guessed type _DWORD __cdecl sub_10034F9F(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (100618B6) --------------------------------------------------------
char __thiscall sub_100618B6(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  char v3; // bl
  int v4; // edi
  int v5; // eax
  int v7; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  unsigned int v9; // [esp+18h] [ebp-4h]

  v2 = this;
  v3 = 1;
  v4 = this[2];
  v8 = *(_DWORD *)(v4 + 24);
  v7 = *(_DWORD *)(v4 + 28);
  v9 = this[3] - 2;
  *a2 = sub_1003305A(v4, v9, &v9, 10, 1);
  v5 = v2[2];
  if ( *(_BYTE *)(v5 + 28) && *(_DWORD *)(v5 + 24) == 34 || v9 < v2[3] )
    v3 = 0;
  else
    v2[3] = v9;
  *(_DWORD *)(v4 + 24) = v8;
  *(_DWORD *)(v4 + 28) = v7;
  return v3;
}
// 1003305A: using guessed type _DWORD __cdecl sub_1003305A(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (1006194E) --------------------------------------------------------
char __thiscall sub_1006194E(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  char v3; // bl
  int v4; // edi
  int v5; // eax
  int v7; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  unsigned int v9; // [esp+18h] [ebp-4h]

  v2 = this;
  v3 = 1;
  v4 = this[2];
  v8 = *(_DWORD *)(v4 + 24);
  v7 = *(_DWORD *)(v4 + 28);
  v9 = this[3] - 2;
  *a2 = sub_1003305A(v4, v9, &v9, 10, 1);
  v5 = v2[2];
  if ( *(_BYTE *)(v5 + 28) && *(_DWORD *)(v5 + 24) == 34 || v9 < v2[3] )
    v3 = 0;
  else
    v2[3] = v9;
  *(_DWORD *)(v4 + 24) = v8;
  *(_DWORD *)(v4 + 28) = v7;
  return v3;
}
// 1003305A: using guessed type _DWORD __cdecl sub_1003305A(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (100619E6) --------------------------------------------------------
char __thiscall sub_100619E6(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  char v3; // bl
  int v4; // edi
  int v5; // eax
  int v7; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  unsigned int v9; // [esp+18h] [ebp-4h]

  v2 = this;
  v3 = 1;
  v4 = this[2];
  v8 = *(_DWORD *)(v4 + 24);
  v7 = *(_DWORD *)(v4 + 28);
  v9 = this[3] - 2;
  *a2 = sub_1003305A(v4, v9, &v9, 10, 1);
  v5 = v2[2];
  if ( *(_BYTE *)(v5 + 28) && *(_DWORD *)(v5 + 24) == 34 || v9 < v2[3] )
    v3 = 0;
  else
    v2[3] = v9;
  *(_DWORD *)(v4 + 24) = v8;
  *(_DWORD *)(v4 + 28) = v7;
  return v3;
}
// 1003305A: using guessed type _DWORD __cdecl sub_1003305A(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (10061A7E) --------------------------------------------------------
char __thiscall sub_10061A7E(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  char v3; // bl
  int v4; // edi
  int v5; // eax
  int v7; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  unsigned int v9; // [esp+18h] [ebp-4h]

  v2 = this;
  v3 = 1;
  v4 = this[2];
  v8 = *(_DWORD *)(v4 + 24);
  v7 = *(_DWORD *)(v4 + 28);
  v9 = this[3] - 2;
  *a2 = sub_1003305A(v4, v9, &v9, 10, 1);
  v5 = v2[2];
  if ( *(_BYTE *)(v5 + 28) && *(_DWORD *)(v5 + 24) == 34 || v9 < v2[3] )
    v3 = 0;
  else
    v2[3] = v9;
  *(_DWORD *)(v4 + 24) = v8;
  *(_DWORD *)(v4 + 28) = v7;
  return v3;
}
// 1003305A: using guessed type _DWORD __cdecl sub_1003305A(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (10061B16) --------------------------------------------------------
char __thiscall sub_10061B16(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  char v3; // bl
  int v4; // edi
  int v5; // eax
  int v7; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  unsigned int v9; // [esp+18h] [ebp-4h]

  v2 = this;
  v3 = 1;
  v4 = this[2];
  v8 = *(_DWORD *)(v4 + 24);
  v7 = *(_DWORD *)(v4 + 28);
  v9 = this[3] - 2;
  *a2 = sub_1003305A(v4, v9, &v9, 10, 1);
  v5 = v2[2];
  if ( *(_BYTE *)(v5 + 28) && *(_DWORD *)(v5 + 24) == 34 || v9 < v2[3] )
    v3 = 0;
  else
    v2[3] = v9;
  *(_DWORD *)(v4 + 24) = v8;
  *(_DWORD *)(v4 + 28) = v7;
  return v3;
}
// 1003305A: using guessed type _DWORD __cdecl sub_1003305A(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (10061BAE) --------------------------------------------------------
char __thiscall sub_10061BAE(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  char v3; // bl
  int v4; // edi
  int v5; // eax
  int v7; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  unsigned int v9; // [esp+18h] [ebp-4h]

  v2 = this;
  v3 = 1;
  v4 = this[2];
  v8 = *(_DWORD *)(v4 + 24);
  v7 = *(_DWORD *)(v4 + 28);
  v9 = this[3] - 2;
  *a2 = sub_1003305A(v4, v9, &v9, 10, 1);
  v5 = v2[2];
  if ( *(_BYTE *)(v5 + 28) && *(_DWORD *)(v5 + 24) == 34 || v9 < v2[3] )
    v3 = 0;
  else
    v2[3] = v9;
  *(_DWORD *)(v4 + 24) = v8;
  *(_DWORD *)(v4 + 28) = v7;
  return v3;
}
// 1003305A: using guessed type _DWORD __cdecl sub_1003305A(_DWORD, _DWORD, _DWORD, _DWORD, char);

//----- (10061C46) --------------------------------------------------------
signed int __thiscall sub_10061C46(_DWORD *this)
{
  _DWORD *v1; // esi
  char *v2; // ecx
  int v3; // eax
  int v5; // eax
  char v6; // dl
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  char *v11; // eax
  char v12; // cl
  int v13; // eax
  char v14; // al
  int *v15; // ecx
  int v16; // eax
  int *v17; // ecx
  int v18; // eax
  char *v19; // eax
  char v20; // dl
  char v21; // al
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // [esp+Ch] [ebp-14h]
  char v26; // [esp+10h] [ebp-10h]
  int v27; // [esp+14h] [ebp-Ch]
  int v28; // [esp+18h] [ebp-8h]
  char v29; // [esp+1Fh] [ebp-1h]

  v1 = this;
  if ( !(unsigned __int8)sub_100332C1(this[2]) )
    return -1;
  v2 = (char *)v1[3];
  if ( !v2 )
  {
LABEL_3:
    v3 = v1[2];
    *(_DWORD *)(v3 + 24) = 22;
    *(_BYTE *)(v3 + 28) = 1;
    goto LABEL_4;
  }
  v5 = v1[276] + 1;
  v1[276] = v5;
  if ( v5 != 2 )
  {
    while ( 1 )
    {
      v1[13] = 0;
      *((_BYTE *)v1 + 24) = 0;
      v6 = *v2++;
      v29 = v6;
      v1[3] = v2;
      *((_BYTE *)v1 + 45) = v6;
      if ( v6 )
        break;
LABEL_45:
      v21 = *((_BYTE *)v1 + 24);
      if ( v21 && v21 != 7 )
        goto LABEL_3;
      if ( ++v1[276] == 2 )
        return v1[5];
    }
    v26 = v6;
    v7 = v1 + 5;
    while ( 1 )
    {
      if ( *v7 < 0 )
        goto LABEL_45;
      LOBYTE(v8) = sub_10033695(v26, *((_BYTE *)v1 + 24));
      *((_BYTE *)v1 + 24) = v8;
      if ( (unsigned __int8)v8 >= 8u )
        break;
      v8 = (unsigned __int8)v8;
      switch ( (unsigned __int8)v8 )
      {
        case 0u:
          v10 = v1[2];
          *((_BYTE *)v1 + 56) = 0;
          v28 = v10;
          if ( !*(_BYTE *)(v10 + 20) )
          {
            sub_100343EC(v10);
            v9 = v1[2];
            v28 = v1[2];
          }
          LOBYTE(v9) = *((_BYTE *)v1 + 45);
          v25 = v9;
          LOBYTE(v27) = *((_BYTE *)v1 + 45);
          if ( !sub_10035F03(**(_DWORD **)(v10 + 12), (char)v9, 0x8000) )
            goto LABEL_18;
          sub_100355DF(v25, v1 + 5, v28);
          v11 = (char *)v1[3];
          v12 = *v11;
          v1[3] = v11 + 1;
          *((_BYTE *)v1 + 45) = v12;
          if ( !v12 )
          {
            v22 = v1[2];
            *(_BYTE *)(v22 + 28) = 1;
            *(_DWORD *)(v22 + 24) = 22;
            sub_10034B08(0, 0, 0, 0, 0, v1[2]);
            v23 = v1[2];
            *(_BYTE *)(v23 + 28) = 1;
            *(_DWORD *)(v23 + 24) = 22;
            sub_10034B08(0, 0, 0, 0, 0, v1[2]);
            return -1;
          }
          LOBYTE(v27) = v12;
LABEL_18:
          sub_100355DF(v27, v1 + 5, v1[2]);
LABEL_44:
          v19 = (char *)v1[3];
          v20 = *v19;
          v2 = v19 + 1;
          v1[3] = v19 + 1;
          v7 = v1 + 5;
          v29 = v20;
          *((_BYTE *)v1 + 45) = v20;
          v26 = v20;
          if ( !v20 )
            goto LABEL_45;
          break;
        case 1u:
          v1[9] = -1;
          v1[8] = 0;
          *((_BYTE *)v1 + 44) = 0;
          v1[7] = 0;
          v1[10] = 0;
          *((_BYTE *)v1 + 56) = 0;
          goto LABEL_44;
        case 2u:
          switch ( v29 )
          {
            case 32:
              v1[7] |= 2u;
              break;
            case 35:
              v1[7] |= 0x20u;
              break;
            case 43:
              v1[7] |= 1u;
              break;
            case 45:
              v1[7] |= 4u;
              break;
            case 48:
              v1[7] |= 8u;
              break;
          }
          goto LABEL_44;
        case 3u:
          if ( v29 != 42 )
          {
            v13 = (int)(v1 + 8);
            goto LABEL_32;
          }
          v15 = (int *)v1[4];
          v1[4] = v15 + 1;
          v16 = *v15;
          v1[8] = *v15;
          if ( v16 < 0 )
          {
            v1[7] |= 4u;
            v1[8] = -v16;
          }
          goto LABEL_35;
        case 4u:
          v1[9] = 0;
          goto LABEL_44;
        case 5u:
          if ( v29 == 42 )
          {
            v17 = (int *)v1[4];
            v1[4] = v17 + 1;
            v18 = *v17;
            v1[9] = *v17;
            if ( v18 < 0 )
              v1[9] = -1;
LABEL_35:
            v14 = 1;
          }
          else
          {
            v13 = (int)(v1 + 9);
LABEL_32:
            v14 = sub_100360D4(v13);
          }
LABEL_43:
          if ( v14 )
            goto LABEL_44;
          return -1;
        case 6u:
          v14 = sub_10034671(v1);
          goto LABEL_43;
        case 7u:
          v14 = sub_10033B4A(v1);
          goto LABEL_43;
        default:
          return -1;
      }
    }
    v24 = v1[2];
    *(_BYTE *)(v24 + 28) = 1;
    *(_DWORD *)(v24 + 24) = 22;
LABEL_4:
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    return -1;
  }
  return v1[5];
}
// 100332C1: using guessed type _DWORD __stdcall sub_100332C1(_DWORD);
// 10033695: using guessed type _DWORD __stdcall sub_10033695(char, char);
// 10033B4A: using guessed type int __thiscall sub_10033B4A(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034671: using guessed type int __thiscall sub_10034671(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100355DF: using guessed type _DWORD __stdcall sub_100355DF(_DWORD, _DWORD, _DWORD);
// 10035F03: using guessed type _DWORD __cdecl sub_10035F03(_DWORD, _DWORD, _DWORD);
// 100360D4: using guessed type _DWORD __stdcall sub_100360D4(_DWORD);

//----- (10061FB6) --------------------------------------------------------
signed int __thiscall sub_10061FB6(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // ebx
  int v3; // eax
  char *v5; // eax
  char v6; // cl
  _DWORD *v7; // eax
  unsigned __int8 v8; // al
  int v9; // edi
  char *v10; // eax
  char v11; // cl
  int v12; // eax
  char v13; // al
  int v14; // eax
  char *v15; // eax
  char v16; // cl
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  char v20; // [esp+Ch] [ebp-8h]
  int v21; // [esp+10h] [ebp-4h]

  v1 = this;
  if ( !(unsigned __int8)sub_100332C1(this[2]) )
    return -1;
  v2 = 0;
  if ( !v1[3] )
  {
    v3 = v1[2];
    *(_BYTE *)(v3 + 28) = 1;
    *(_DWORD *)(v3 + 24) = 22;
    goto LABEL_4;
  }
  while ( (unsigned __int8)sub_10034EFF(v1) )
  {
    v5 = (char *)v1[3];
    v1[13] = 0;
    *((_BYTE *)v1 + 24) = 0;
    v6 = *v5;
    v1[3] = v5 + 1;
    *((_BYTE *)v1 + 45) = v6;
    if ( v6 )
    {
      v20 = v6;
      v7 = v1 + 5;
      while ( 1 )
      {
        if ( *v7 < 0 )
          goto LABEL_50;
        *((_BYTE *)v1 + 24) = sub_100331C2(v20, *((_BYTE *)v1 + 24));
        if ( !(unsigned __int8)sub_1003375D(v1) )
          return -1;
        v8 = *((_BYTE *)v1 + 24);
        if ( v8 >= 8u )
          break;
        switch ( v8 )
        {
          case 0u:
            if ( (unsigned __int8)sub_1003383E(v1) )
              goto LABEL_49;
            v9 = v1[2];
            *((_BYTE *)v1 + 56) = 0;
            if ( !*(_BYTE *)(v9 + 20) )
              sub_100343EC(v9);
            LOBYTE(v21) = *((_BYTE *)v1 + 45);
            LOBYTE(v2) = v21;
            if ( !sub_10035F03(**(_DWORD **)(v9 + 12), (char)v21, 0x8000) )
              goto LABEL_19;
            sub_100355DF(v2, v1 + 5, v1[2]);
            v10 = (char *)v1[3];
            v11 = *v10;
            v1[3] = v10 + 1;
            *((_BYTE *)v1 + 45) = v11;
            if ( !v11 )
            {
              v17 = v1[2];
              *(_BYTE *)(v17 + 28) = 1;
              *(_DWORD *)(v17 + 24) = 22;
              sub_10034B08(0, 0, 0, 0, 0, v1[2]);
              v18 = v1[2];
              *(_BYTE *)(v18 + 28) = 1;
              *(_DWORD *)(v18 + 24) = 22;
              sub_10034B08(0, 0, 0, 0, 0, v1[2]);
              return -1;
            }
            LOBYTE(v21) = v11;
LABEL_19:
            sub_100355DF(v21, v1 + 5, v1[2]);
            v2 = 0;
LABEL_49:
            v15 = (char *)v1[3];
            v16 = *v15;
            v1[3] = v15 + 1;
            v7 = v1 + 5;
            *((_BYTE *)v1 + 45) = v16;
            v20 = v16;
            if ( !v16 )
              goto LABEL_50;
            break;
          case 1u:
            v1[9] = -1;
            v1[8] = 0;
            *((_BYTE *)v1 + 44) = 0;
            v1[7] = 0;
            v1[10] = 0;
            *((_BYTE *)v1 + 56) = 0;
            goto LABEL_49;
          case 2u:
            switch ( *((_BYTE *)v1 + 45) )
            {
              case 0x20:
                v1[7] |= 2u;
                break;
              case 0x23:
                v1[7] |= 0x20u;
                break;
              case 0x2B:
                v1[7] |= 1u;
                break;
              case 0x2D:
                v1[7] |= 4u;
                break;
              case 0x30:
                v1[7] |= 8u;
                break;
            }
            goto LABEL_49;
          case 3u:
            if ( *((_BYTE *)v1 + 45) != 42 )
            {
              v12 = (int)(v1 + 8);
              goto LABEL_33;
            }
            if ( !(unsigned __int8)sub_10033794(v1) )
              return -1;
            if ( !(unsigned __int8)sub_1003618D(v1) )
              goto LABEL_49;
            v14 = v1[8];
            if ( v14 < 0 )
            {
              v1[7] |= 4u;
              v1[8] = -v14;
            }
            goto LABEL_38;
          case 4u:
            v1[9] = 0;
            goto LABEL_49;
          case 5u:
            if ( *((_BYTE *)v1 + 45) == 42 )
            {
              if ( !(unsigned __int8)sub_10036165(v1) )
                return -1;
              if ( !(unsigned __int8)sub_1003618D(v1) )
                goto LABEL_49;
              if ( v1[9] < 0 )
                v1[9] = -1;
LABEL_38:
              v13 = 1;
            }
            else
            {
              v12 = (int)(v1 + 9);
LABEL_33:
              v13 = sub_1003351E(v12);
            }
LABEL_48:
            if ( !v13 )
              return -1;
            goto LABEL_49;
          case 6u:
            v13 = sub_10035BF2(v1);
            goto LABEL_48;
          case 7u:
            v13 = sub_10034608(v1);
            goto LABEL_48;
          default:
            return -1;
        }
      }
      v19 = v1[2];
      *(_BYTE *)(v19 + 28) = 1;
      *(_DWORD *)(v19 + 24) = 22;
LABEL_4:
      sub_10034B08(0, 0, 0, 0, 0, v1[2]);
      return -1;
    }
LABEL_50:
    if ( !(unsigned __int8)sub_100337B2(v1) )
      return -1;
  }
  return v1[5];
}
// 100331C2: using guessed type _DWORD __stdcall sub_100331C2(char, char);
// 100332C1: using guessed type _DWORD __stdcall sub_100332C1(_DWORD);
// 1003351E: using guessed type _DWORD __stdcall sub_1003351E(_DWORD);
// 1003375D: using guessed type int __thiscall sub_1003375D(_DWORD);
// 10033794: using guessed type int __thiscall sub_10033794(_DWORD);
// 100337B2: using guessed type int __thiscall sub_100337B2(_DWORD);
// 1003383E: using guessed type int __thiscall sub_1003383E(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034608: using guessed type int __thiscall sub_10034608(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034EFF: using guessed type int __thiscall sub_10034EFF(_DWORD);
// 100355DF: using guessed type _DWORD __stdcall sub_100355DF(_DWORD, _DWORD, _DWORD);
// 10035BF2: using guessed type int __thiscall sub_10035BF2(_DWORD);
// 10035F03: using guessed type _DWORD __cdecl sub_10035F03(_DWORD, _DWORD, _DWORD);
// 10036165: using guessed type int __thiscall sub_10036165(_DWORD);
// 1003618D: using guessed type int __thiscall sub_1003618D(_DWORD);

//----- (1006233F) --------------------------------------------------------
signed int __thiscall sub_1006233F(_DWORD *this)
{
  _DWORD *v1; // esi
  char *v2; // ecx
  int v3; // eax
  int v5; // eax
  char v6; // dl
  _DWORD *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  char *v11; // eax
  char v12; // cl
  int v13; // eax
  char v14; // al
  int *v15; // ecx
  int v16; // eax
  int *v17; // ecx
  int v18; // eax
  char *v19; // eax
  char v20; // dl
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // [esp+Ch] [ebp-14h]
  char v25; // [esp+10h] [ebp-10h]
  int v26; // [esp+14h] [ebp-Ch]
  int v27; // [esp+18h] [ebp-8h]
  char v28; // [esp+1Fh] [ebp-1h]

  v1 = this;
  if ( !(unsigned __int8)sub_100332C1(this[2]) )
    return -1;
  v2 = (char *)v1[3];
  if ( !v2 )
  {
    v3 = v1[2];
    *(_BYTE *)(v3 + 28) = 1;
    *(_DWORD *)(v3 + 24) = 22;
    goto LABEL_4;
  }
  v5 = v1[276] + 1;
  v1[276] = v5;
  if ( v5 != 2 )
  {
    while ( 1 )
    {
      v1[13] = 0;
      *((_BYTE *)v1 + 24) = 0;
      v6 = *v2++;
      v28 = v6;
      v1[3] = v2;
      *((_BYTE *)v1 + 45) = v6;
      if ( v6 )
        break;
LABEL_45:
      if ( ++v1[276] == 2 )
        return v1[5];
    }
    v25 = v6;
    v7 = v1 + 5;
    while ( 1 )
    {
      if ( *v7 < 0 )
        goto LABEL_45;
      LOBYTE(v8) = sub_100338E3(v25, *((_BYTE *)v1 + 24));
      *((_BYTE *)v1 + 24) = v8;
      if ( (unsigned __int8)v8 >= 8u )
        break;
      v8 = (unsigned __int8)v8;
      switch ( (unsigned __int8)v8 )
      {
        case 0u:
          v10 = v1[2];
          *((_BYTE *)v1 + 56) = 0;
          v27 = v10;
          if ( !*(_BYTE *)(v10 + 20) )
          {
            sub_100343EC(v10);
            v9 = v1[2];
            v27 = v1[2];
          }
          LOBYTE(v9) = *((_BYTE *)v1 + 45);
          v24 = v9;
          LOBYTE(v26) = *((_BYTE *)v1 + 45);
          if ( !sub_10035F03(**(_DWORD **)(v10 + 12), (char)v9, 0x8000) )
            goto LABEL_18;
          sub_100355DF(v24, v1 + 5, v27);
          v11 = (char *)v1[3];
          v12 = *v11;
          v1[3] = v11 + 1;
          *((_BYTE *)v1 + 45) = v12;
          if ( !v12 )
          {
            v21 = v1[2];
            *(_BYTE *)(v21 + 28) = 1;
            *(_DWORD *)(v21 + 24) = 22;
            sub_10034B08(0, 0, 0, 0, 0, v1[2]);
            v22 = v1[2];
            *(_BYTE *)(v22 + 28) = 1;
            *(_DWORD *)(v22 + 24) = 22;
            sub_10034B08(0, 0, 0, 0, 0, v1[2]);
            return -1;
          }
          LOBYTE(v26) = v12;
LABEL_18:
          sub_100355DF(v26, v1 + 5, v1[2]);
LABEL_44:
          v19 = (char *)v1[3];
          v20 = *v19;
          v2 = v19 + 1;
          v1[3] = v19 + 1;
          v7 = v1 + 5;
          v28 = v20;
          *((_BYTE *)v1 + 45) = v20;
          v25 = v20;
          if ( !v20 )
            goto LABEL_45;
          break;
        case 1u:
          v1[9] = -1;
          v1[8] = 0;
          *((_BYTE *)v1 + 44) = 0;
          v1[7] = 0;
          v1[10] = 0;
          *((_BYTE *)v1 + 56) = 0;
          goto LABEL_44;
        case 2u:
          switch ( v28 )
          {
            case 32:
              v1[7] |= 2u;
              break;
            case 35:
              v1[7] |= 0x20u;
              break;
            case 43:
              v1[7] |= 1u;
              break;
            case 45:
              v1[7] |= 4u;
              break;
            case 48:
              v1[7] |= 8u;
              break;
          }
          goto LABEL_44;
        case 3u:
          if ( v28 != 42 )
          {
            v13 = (int)(v1 + 8);
            goto LABEL_32;
          }
          v15 = (int *)v1[4];
          v1[4] = v15 + 1;
          v16 = *v15;
          v1[8] = *v15;
          if ( v16 < 0 )
          {
            v1[7] |= 4u;
            v1[8] = -v16;
          }
          goto LABEL_35;
        case 4u:
          v1[9] = 0;
          goto LABEL_44;
        case 5u:
          if ( v28 == 42 )
          {
            v17 = (int *)v1[4];
            v1[4] = v17 + 1;
            v18 = *v17;
            v1[9] = *v17;
            if ( v18 < 0 )
              v1[9] = -1;
LABEL_35:
            v14 = 1;
          }
          else
          {
            v13 = (int)(v1 + 9);
LABEL_32:
            v14 = sub_10035E27(v13);
          }
LABEL_43:
          if ( v14 )
            goto LABEL_44;
          return -1;
        case 6u:
          v14 = sub_10033F8C(v1);
          goto LABEL_43;
        case 7u:
          v14 = sub_10033EBA(v1);
          goto LABEL_43;
        default:
          return -1;
      }
    }
    v23 = v1[2];
    *(_BYTE *)(v23 + 28) = 1;
    *(_DWORD *)(v23 + 24) = 22;
LABEL_4:
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    return -1;
  }
  return v1[5];
}
// 100332C1: using guessed type _DWORD __stdcall sub_100332C1(_DWORD);
// 100338E3: using guessed type _DWORD __stdcall sub_100338E3(char, char);
// 10033EBA: using guessed type int __thiscall sub_10033EBA(_DWORD);
// 10033F8C: using guessed type int __thiscall sub_10033F8C(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100355DF: using guessed type _DWORD __stdcall sub_100355DF(_DWORD, _DWORD, _DWORD);
// 10035E27: using guessed type _DWORD __stdcall sub_10035E27(_DWORD);
// 10035F03: using guessed type _DWORD __cdecl sub_10035F03(_DWORD, _DWORD, _DWORD);

//----- (1006269B) --------------------------------------------------------
signed int __thiscall sub_1006269B(_DWORD *this)
{
  _DWORD *v1; // esi
  char *v2; // ecx
  int v3; // eax
  int v5; // eax
  char v6; // dl
  unsigned __int8 v7; // al
  int v8; // edi
  int v9; // eax
  int v10; // edi
  _DWORD *v11; // ecx
  char *v12; // eax
  char v13; // cl
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // eax
  char v18; // al
  int *v19; // ecx
  int v20; // eax
  int *v21; // ecx
  int v22; // eax
  char *v23; // eax
  char v24; // dl
  char v25; // al
  int v26; // ecx
  char v27; // [esp+Fh] [ebp-5h]
  char v28; // [esp+13h] [ebp-1h]
  char v29; // [esp+13h] [ebp-1h]

  v1 = this;
  if ( !(unsigned __int8)sub_100354FE(this[2]) )
    return -1;
  v2 = (char *)v1[3];
  if ( !v2 )
  {
LABEL_3:
    v3 = v1[2];
    *(_DWORD *)(v3 + 24) = 22;
    *(_BYTE *)(v3 + 28) = 1;
    goto LABEL_4;
  }
  v5 = v1[276] + 1;
  v1[276] = v5;
  if ( v5 != 2 )
  {
    while ( 1 )
    {
      v1[13] = 0;
      *((_BYTE *)v1 + 24) = 0;
      v6 = *v2++;
      v28 = v6;
      v1[3] = v2;
      *((_BYTE *)v1 + 45) = v6;
      if ( v6 )
        break;
LABEL_55:
      v25 = *((_BYTE *)v1 + 24);
      if ( v25 && v25 != 7 )
        goto LABEL_3;
      if ( ++v1[276] == 2 )
        return v1[5];
    }
    v27 = v6;
    while ( 1 )
    {
      if ( v1[5] < 0 )
        goto LABEL_55;
      v7 = sub_1003343D(v27, *((_BYTE *)v1 + 24));
      *((_BYTE *)v1 + 24) = v7;
      if ( v7 >= 8u )
        break;
      switch ( v7 )
      {
        case 0u:
          v8 = v1[2];
          *((_BYTE *)v1 + 56) = 0;
          if ( !*(_BYTE *)(v8 + 20) )
            sub_100343EC(v8);
          v29 = *((_BYTE *)v1 + 45);
          v9 = sub_10035F03(**(_DWORD **)(v8 + 12), v29, 0x8000);
          v10 = (int)(v1 + 274);
          if ( v9 )
          {
            v11 = *(_DWORD **)v10;
            if ( *(_DWORD *)(*(_DWORD *)v10 + 8) == *(_DWORD *)(*(_DWORD *)v10 + 4) )
            {
              if ( *((_BYTE *)v11 + 12) )
                ++v1[5];
              else
                v1[5] = -1;
            }
            else
            {
              ++v1[5];
              ++v11[2];
              *(_BYTE *)(**(_DWORD **)v10)++ = v29;
            }
            v12 = (char *)v1[3];
            v13 = *v12;
            v1[3] = v12 + 1;
            *((_BYTE *)v1 + 45) = v13;
            if ( !v13 )
            {
              v14 = v1[2];
              *(_BYTE *)(v14 + 28) = 1;
              *(_DWORD *)(v14 + 24) = 22;
              sub_10034B08(0, 0, 0, 0, 0, v1[2]);
              v15 = v1[2];
              *(_BYTE *)(v15 + 28) = 1;
              *(_DWORD *)(v15 + 24) = 22;
              sub_10034B08(0, 0, 0, 0, 0, v1[2]);
              return -1;
            }
          }
          else
          {
            v13 = v29;
          }
          v16 = *(_DWORD *)v10;
          if ( *(_DWORD *)(*(_DWORD *)v10 + 8) == *(_DWORD *)(*(_DWORD *)v10 + 4) )
          {
            if ( *(_BYTE *)(v16 + 12) )
              ++v1[5];
            else
              v1[5] = -1;
          }
          else
          {
            ++v1[5];
            ++*(_DWORD *)(v16 + 8);
            *(_BYTE *)(**(_DWORD **)v10)++ = v13;
          }
LABEL_54:
          v23 = (char *)v1[3];
          v24 = *v23;
          v2 = v23 + 1;
          v1[3] = v23 + 1;
          v28 = v24;
          *((_BYTE *)v1 + 45) = v24;
          v27 = v24;
          if ( !v24 )
            goto LABEL_55;
          break;
        case 1u:
          v1[9] = -1;
          v1[8] = 0;
          *((_BYTE *)v1 + 44) = 0;
          v1[7] = 0;
          v1[10] = 0;
          *((_BYTE *)v1 + 56) = 0;
          goto LABEL_54;
        case 2u:
          switch ( v28 )
          {
            case 32:
              v1[7] |= 2u;
              break;
            case 35:
              v1[7] |= 0x20u;
              break;
            case 43:
              v1[7] |= 1u;
              break;
            case 45:
              v1[7] |= 4u;
              break;
            case 48:
              v1[7] |= 8u;
              break;
          }
          goto LABEL_54;
        case 3u:
          if ( v28 != 42 )
          {
            v17 = (int)(v1 + 8);
            goto LABEL_42;
          }
          v19 = (int *)v1[4];
          v1[4] = v19 + 1;
          v20 = *v19;
          v1[8] = *v19;
          if ( v20 < 0 )
          {
            v1[7] |= 4u;
            v1[8] = -v20;
          }
          goto LABEL_45;
        case 4u:
          v1[9] = 0;
          goto LABEL_54;
        case 5u:
          if ( v28 == 42 )
          {
            v21 = (int *)v1[4];
            v1[4] = v21 + 1;
            v22 = *v21;
            v1[9] = *v21;
            if ( v22 < 0 )
              v1[9] = -1;
LABEL_45:
            v18 = 1;
          }
          else
          {
            v17 = (int)(v1 + 9);
LABEL_42:
            v18 = sub_10035A71(v17);
          }
LABEL_53:
          if ( v18 )
            goto LABEL_54;
          return -1;
        case 6u:
          v18 = sub_10034491(v1);
          goto LABEL_53;
        case 7u:
          v18 = sub_1003605C(v1);
          goto LABEL_53;
        default:
          return -1;
      }
    }
    v26 = v1[2];
    *(_BYTE *)(v26 + 28) = 1;
    *(_DWORD *)(v26 + 24) = 22;
LABEL_4:
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    return -1;
  }
  return v1[5];
}
// 1003343D: using guessed type _DWORD __stdcall sub_1003343D(char, char);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034491: using guessed type int __thiscall sub_10034491(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100354FE: using guessed type _DWORD __stdcall sub_100354FE(_DWORD);
// 10035A71: using guessed type _DWORD __stdcall sub_10035A71(_DWORD);
// 10035F03: using guessed type _DWORD __cdecl sub_10035F03(_DWORD, _DWORD, _DWORD);
// 1003605C: using guessed type int __thiscall sub_1003605C(_DWORD);

//----- (10062A38) --------------------------------------------------------
signed int __thiscall sub_10062A38(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // eax
  char *v4; // eax
  char v5; // cl
  unsigned __int8 v6; // al
  int v7; // edi
  char v8; // bl
  int v9; // eax
  int v10; // edi
  _DWORD *v11; // ecx
  char *v12; // eax
  int v13; // ecx
  int v14; // eax
  char v15; // al
  int v16; // eax
  char *v17; // eax
  char v18; // cl
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  char v22; // [esp+Ch] [ebp-4h]

  v1 = this;
  if ( !(unsigned __int8)sub_100354FE(this[2]) )
    return -1;
  if ( !v1[3] )
  {
    v2 = v1[2];
    *(_BYTE *)(v2 + 28) = 1;
    *(_DWORD *)(v2 + 24) = 22;
    goto LABEL_4;
  }
  while ( (unsigned __int8)sub_10033181(v1) )
  {
    v4 = (char *)v1[3];
    v1[13] = 0;
    *((_BYTE *)v1 + 24) = 0;
    v5 = *v4;
    v1[3] = v4 + 1;
    *((_BYTE *)v1 + 45) = v5;
    if ( v5 )
    {
      v22 = v5;
      while ( 1 )
      {
        if ( v1[5] < 0 )
          goto LABEL_59;
        *((_BYTE *)v1 + 24) = sub_10036156(v22, *((_BYTE *)v1 + 24));
        if ( !(unsigned __int8)sub_100354F4(v1) )
          return -1;
        v6 = *((_BYTE *)v1 + 24);
        if ( v6 >= 8u )
          break;
        switch ( v6 )
        {
          case 0u:
            if ( (unsigned __int8)sub_10033FAA(v1) )
              goto LABEL_58;
            v7 = v1[2];
            *((_BYTE *)v1 + 56) = 0;
            if ( !*(_BYTE *)(v7 + 20) )
              sub_100343EC(v7);
            v8 = *((_BYTE *)v1 + 45);
            v9 = sub_10035F03(**(_DWORD **)(v7 + 12), v8, 0x8000);
            v10 = (int)(v1 + 274);
            if ( v9 )
            {
              v11 = *(_DWORD **)v10;
              if ( *(_DWORD *)(*(_DWORD *)v10 + 8) == *(_DWORD *)(*(_DWORD *)v10 + 4) )
              {
                if ( *((_BYTE *)v11 + 12) )
                  ++v1[5];
                else
                  v1[5] = -1;
              }
              else
              {
                ++v1[5];
                ++v11[2];
                *(_BYTE *)(**(_DWORD **)v10)++ = v8;
              }
              v12 = (char *)v1[3];
              v8 = *v12;
              v1[3] = v12 + 1;
              *((_BYTE *)v1 + 45) = v8;
              if ( !v8 )
              {
                v19 = v1[2];
                *(_BYTE *)(v19 + 28) = 1;
                *(_DWORD *)(v19 + 24) = 22;
                sub_10034B08(0, 0, 0, 0, 0, v1[2]);
                v20 = v1[2];
                *(_BYTE *)(v20 + 28) = 1;
                *(_DWORD *)(v20 + 24) = 22;
                sub_10034B08(0, 0, 0, 0, 0, v1[2]);
                return -1;
              }
            }
            v13 = *(_DWORD *)v10;
            if ( *(_DWORD *)(*(_DWORD *)v10 + 8) == *(_DWORD *)(*(_DWORD *)v10 + 4) )
            {
              if ( *(_BYTE *)(v13 + 12) )
                ++v1[5];
              else
                v1[5] = -1;
            }
            else
            {
              ++v1[5];
              ++*(_DWORD *)(v13 + 8);
              *(_BYTE *)(**(_DWORD **)v10)++ = v8;
            }
LABEL_58:
            v17 = (char *)v1[3];
            v18 = *v17;
            v1[3] = v17 + 1;
            *((_BYTE *)v1 + 45) = v18;
            v22 = v18;
            if ( !v18 )
              goto LABEL_59;
            break;
          case 1u:
            v1[9] = -1;
            v1[8] = 0;
            *((_BYTE *)v1 + 44) = 0;
            v1[7] = 0;
            v1[10] = 0;
            *((_BYTE *)v1 + 56) = 0;
            goto LABEL_58;
          case 2u:
            switch ( *((_BYTE *)v1 + 45) )
            {
              case 0x20:
                v1[7] |= 2u;
                break;
              case 0x23:
                v1[7] |= 0x20u;
                break;
              case 0x2B:
                v1[7] |= 1u;
                break;
              case 0x2D:
                v1[7] |= 4u;
                break;
              case 0x30:
                v1[7] |= 8u;
                break;
            }
            goto LABEL_58;
          case 3u:
            if ( *((_BYTE *)v1 + 45) != 42 )
            {
              v14 = (int)(v1 + 8);
              goto LABEL_42;
            }
            if ( !(unsigned __int8)sub_10035242(v1) )
              return -1;
            if ( !(unsigned __int8)sub_1003562F(v1) )
              goto LABEL_58;
            v16 = v1[8];
            if ( v16 < 0 )
            {
              v1[7] |= 4u;
              v1[8] = -v16;
            }
            goto LABEL_47;
          case 4u:
            v1[9] = 0;
            goto LABEL_58;
          case 5u:
            if ( *((_BYTE *)v1 + 45) == 42 )
            {
              if ( !(unsigned __int8)sub_10033726(v1) )
                return -1;
              if ( !(unsigned __int8)sub_1003562F(v1) )
                goto LABEL_58;
              if ( v1[9] < 0 )
                v1[9] = -1;
LABEL_47:
              v15 = 1;
            }
            else
            {
              v14 = (int)(v1 + 9);
LABEL_42:
              v15 = sub_1003587D(v14);
            }
LABEL_57:
            if ( !v15 )
              return -1;
            goto LABEL_58;
          case 6u:
            v15 = sub_1003388E(v1);
            goto LABEL_57;
          case 7u:
            v15 = sub_100360CF(v1);
            goto LABEL_57;
          default:
            return -1;
        }
      }
      v21 = v1[2];
      *(_BYTE *)(v21 + 28) = 1;
      *(_DWORD *)(v21 + 24) = 22;
LABEL_4:
      sub_10034B08(0, 0, 0, 0, 0, v1[2]);
      return -1;
    }
LABEL_59:
    if ( !(unsigned __int8)sub_10035459(v1) )
      return -1;
  }
  return v1[5];
}
// 10033181: using guessed type int __thiscall sub_10033181(_DWORD);
// 10033726: using guessed type int __thiscall sub_10033726(_DWORD);
// 1003388E: using guessed type int __thiscall sub_1003388E(_DWORD);
// 10033FAA: using guessed type int __thiscall sub_10033FAA(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035242: using guessed type int __thiscall sub_10035242(_DWORD);
// 10035459: using guessed type int __thiscall sub_10035459(_DWORD);
// 100354F4: using guessed type int __thiscall sub_100354F4(_DWORD);
// 100354FE: using guessed type _DWORD __stdcall sub_100354FE(_DWORD);
// 1003562F: using guessed type int __thiscall sub_1003562F(_DWORD);
// 1003587D: using guessed type _DWORD __stdcall sub_1003587D(_DWORD);
// 10035F03: using guessed type _DWORD __cdecl sub_10035F03(_DWORD, _DWORD, _DWORD);
// 100360CF: using guessed type int __thiscall sub_100360CF(_DWORD);
// 10036156: using guessed type _DWORD __stdcall sub_10036156(char, char);

//----- (10062DF8) --------------------------------------------------------
signed int __thiscall sub_10062DF8(_DWORD *this)
{
  _DWORD *v1; // esi
  char *v2; // ecx
  int v3; // eax
  int v5; // eax
  char v6; // dl
  unsigned __int8 v7; // al
  int v8; // edi
  int v9; // eax
  int v10; // edi
  _DWORD *v11; // ecx
  char *v12; // eax
  char v13; // cl
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // eax
  char v18; // al
  int *v19; // ecx
  int v20; // eax
  int *v21; // ecx
  int v22; // eax
  char *v23; // eax
  char v24; // dl
  int v25; // ecx
  char v26; // [esp+Fh] [ebp-5h]
  char v27; // [esp+13h] [ebp-1h]
  char v28; // [esp+13h] [ebp-1h]

  v1 = this;
  if ( !(unsigned __int8)sub_100354FE(this[2]) )
    return -1;
  v2 = (char *)v1[3];
  if ( !v2 )
  {
    v3 = v1[2];
    *(_BYTE *)(v3 + 28) = 1;
    *(_DWORD *)(v3 + 24) = 22;
    goto LABEL_4;
  }
  v5 = v1[276] + 1;
  v1[276] = v5;
  if ( v5 != 2 )
  {
    while ( 1 )
    {
      v1[13] = 0;
      *((_BYTE *)v1 + 24) = 0;
      v6 = *v2++;
      v27 = v6;
      v1[3] = v2;
      *((_BYTE *)v1 + 45) = v6;
      if ( v6 )
        break;
LABEL_55:
      if ( ++v1[276] == 2 )
        return v1[5];
    }
    v26 = v6;
    while ( 1 )
    {
      if ( v1[5] < 0 )
        goto LABEL_55;
      v7 = sub_10034B44(v26, *((_BYTE *)v1 + 24));
      *((_BYTE *)v1 + 24) = v7;
      if ( v7 >= 8u )
        break;
      switch ( v7 )
      {
        case 0u:
          v8 = v1[2];
          *((_BYTE *)v1 + 56) = 0;
          if ( !*(_BYTE *)(v8 + 20) )
            sub_100343EC(v8);
          v28 = *((_BYTE *)v1 + 45);
          v9 = sub_10035F03(**(_DWORD **)(v8 + 12), v28, 0x8000);
          v10 = (int)(v1 + 274);
          if ( v9 )
          {
            v11 = *(_DWORD **)v10;
            if ( *(_DWORD *)(*(_DWORD *)v10 + 8) == *(_DWORD *)(*(_DWORD *)v10 + 4) )
            {
              if ( *((_BYTE *)v11 + 12) )
                ++v1[5];
              else
                v1[5] = -1;
            }
            else
            {
              ++v1[5];
              ++v11[2];
              *(_BYTE *)(**(_DWORD **)v10)++ = v28;
            }
            v12 = (char *)v1[3];
            v13 = *v12;
            v1[3] = v12 + 1;
            *((_BYTE *)v1 + 45) = v13;
            if ( !v13 )
            {
              v14 = v1[2];
              *(_BYTE *)(v14 + 28) = 1;
              *(_DWORD *)(v14 + 24) = 22;
              sub_10034B08(0, 0, 0, 0, 0, v1[2]);
              v15 = v1[2];
              *(_BYTE *)(v15 + 28) = 1;
              *(_DWORD *)(v15 + 24) = 22;
              sub_10034B08(0, 0, 0, 0, 0, v1[2]);
              return -1;
            }
          }
          else
          {
            v13 = v28;
          }
          v16 = *(_DWORD *)v10;
          if ( *(_DWORD *)(*(_DWORD *)v10 + 8) == *(_DWORD *)(*(_DWORD *)v10 + 4) )
          {
            if ( *(_BYTE *)(v16 + 12) )
              ++v1[5];
            else
              v1[5] = -1;
          }
          else
          {
            ++v1[5];
            ++*(_DWORD *)(v16 + 8);
            *(_BYTE *)(**(_DWORD **)v10)++ = v13;
          }
LABEL_54:
          v23 = (char *)v1[3];
          v24 = *v23;
          v2 = v23 + 1;
          v1[3] = v23 + 1;
          v27 = v24;
          *((_BYTE *)v1 + 45) = v24;
          v26 = v24;
          if ( !v24 )
            goto LABEL_55;
          break;
        case 1u:
          v1[9] = -1;
          v1[8] = 0;
          *((_BYTE *)v1 + 44) = 0;
          v1[7] = 0;
          v1[10] = 0;
          *((_BYTE *)v1 + 56) = 0;
          goto LABEL_54;
        case 2u:
          switch ( v27 )
          {
            case 32:
              v1[7] |= 2u;
              break;
            case 35:
              v1[7] |= 0x20u;
              break;
            case 43:
              v1[7] |= 1u;
              break;
            case 45:
              v1[7] |= 4u;
              break;
            case 48:
              v1[7] |= 8u;
              break;
          }
          goto LABEL_54;
        case 3u:
          if ( v27 != 42 )
          {
            v17 = (int)(v1 + 8);
            goto LABEL_42;
          }
          v19 = (int *)v1[4];
          v1[4] = v19 + 1;
          v20 = *v19;
          v1[8] = *v19;
          if ( v20 < 0 )
          {
            v1[7] |= 4u;
            v1[8] = -v20;
          }
          goto LABEL_45;
        case 4u:
          v1[9] = 0;
          goto LABEL_54;
        case 5u:
          if ( v27 == 42 )
          {
            v21 = (int *)v1[4];
            v1[4] = v21 + 1;
            v22 = *v21;
            v1[9] = *v21;
            if ( v22 < 0 )
              v1[9] = -1;
LABEL_45:
            v18 = 1;
          }
          else
          {
            v17 = (int)(v1 + 9);
LABEL_42:
            v18 = sub_10033F73(v17);
          }
LABEL_53:
          if ( v18 )
            goto LABEL_54;
          return -1;
        case 6u:
          v18 = sub_10036296(v1);
          goto LABEL_53;
        case 7u:
          v18 = sub_100338B1(v1);
          goto LABEL_53;
        default:
          return -1;
      }
    }
    v25 = v1[2];
    *(_BYTE *)(v25 + 28) = 1;
    *(_DWORD *)(v25 + 24) = 22;
LABEL_4:
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    return -1;
  }
  return v1[5];
}
// 100338B1: using guessed type int __thiscall sub_100338B1(_DWORD);
// 10033F73: using guessed type _DWORD __stdcall sub_10033F73(_DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034B44: using guessed type _DWORD __stdcall sub_10034B44(char, char);
// 100354FE: using guessed type _DWORD __stdcall sub_100354FE(_DWORD);
// 10035F03: using guessed type _DWORD __cdecl sub_10035F03(_DWORD, _DWORD, _DWORD);
// 10036296: using guessed type int __thiscall sub_10036296(_DWORD);

//----- (10063181) --------------------------------------------------------
signed int __thiscall sub_10063181(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned __int16 *v2; // edx
  int v3; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // eax
  unsigned __int8 v9; // al
  int v10; // ST14_4
  int v11; // eax
  char v12; // al
  int *v13; // ecx
  int v14; // eax
  int *v15; // ecx
  int v16; // eax
  unsigned __int16 *v17; // eax
  int v18; // ecx
  char v19; // al
  int v20; // ecx

  v1 = this;
  if ( !(unsigned __int8)sub_100353C3(this[2]) )
    return -1;
  v2 = (unsigned __int16 *)v1[3];
  if ( !v2 )
  {
LABEL_3:
    v3 = v1[2];
    *(_DWORD *)(v3 + 24) = 22;
    *(_BYTE *)(v3 + 28) = 1;
LABEL_4:
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    return -1;
  }
  v5 = v1[276] + 1;
  v1[276] = v5;
  if ( v5 != 2 )
  {
    while ( 1 )
    {
      v1[13] = 0;
      *((_BYTE *)v1 + 24) = 0;
      v6 = *v2;
      ++v2;
      v1[3] = v2;
      *((_WORD *)v1 + 23) = v6;
      if ( (_WORD)v6 )
      {
        v7 = v6;
        v8 = v1 + 5;
        while ( *v8 >= 0 )
        {
          v9 = sub_10035E45(v7, *((_BYTE *)v1 + 24));
          *((_BYTE *)v1 + 24) = v9;
          if ( v9 >= 8u )
          {
            v20 = v1[2];
            *(_BYTE *)(v20 + 28) = 1;
            *(_DWORD *)(v20 + 24) = 22;
            goto LABEL_4;
          }
          switch ( v9 )
          {
            case 0u:
              v10 = v1[2];
              *((_BYTE *)v1 + 56) = 1;
              sub_10033A69(v7, v1 + 5, v10);
              goto LABEL_39;
            case 1u:
              v1[9] = -1;
              v1[8] = 0;
              *((_BYTE *)v1 + 44) = 0;
              v1[7] = 0;
              v1[10] = 0;
              *((_BYTE *)v1 + 56) = 0;
              goto LABEL_39;
            case 2u:
              switch ( (unsigned __int16)v7 )
              {
                case 0x20u:
                  v1[7] |= 2u;
                  break;
                case 0x23u:
                  v1[7] |= 0x20u;
                  break;
                case 0x2Bu:
                  v1[7] |= 1u;
                  break;
                case 0x2Du:
                  v1[7] |= 4u;
                  break;
                case 0x30u:
                  v1[7] |= 8u;
                  break;
              }
              goto LABEL_39;
            case 3u:
              if ( (_WORD)v7 != 42 )
              {
                v11 = (int)(v1 + 8);
                goto LABEL_27;
              }
              v13 = (int *)v1[4];
              v1[4] = v13 + 1;
              v14 = *v13;
              v1[8] = *v13;
              if ( v14 < 0 )
              {
                v1[7] |= 4u;
                v1[8] = -v14;
              }
              goto LABEL_30;
            case 4u:
              v1[9] = 0;
              goto LABEL_39;
            case 5u:
              if ( (_WORD)v7 == 42 )
              {
                v15 = (int *)v1[4];
                v1[4] = v15 + 1;
                v16 = *v15;
                v1[9] = *v15;
                if ( v16 < 0 )
                  v1[9] = -1;
LABEL_30:
                v12 = 1;
              }
              else
              {
                v11 = (int)(v1 + 9);
LABEL_27:
                v12 = sub_10034266(v11);
              }
LABEL_38:
              if ( !v12 )
                return -1;
LABEL_39:
              v17 = (unsigned __int16 *)v1[3];
              v18 = *v17;
              v2 = v17 + 1;
              v1[3] = v17 + 1;
              v7 = v18;
              *((_WORD *)v1 + 23) = v18;
              v8 = v1 + 5;
              if ( !(_WORD)v18 )
                goto LABEL_40;
              break;
            case 6u:
              v12 = sub_100349C8(v1);
              goto LABEL_38;
            case 7u:
              v12 = sub_1003367C(v1);
              goto LABEL_38;
            default:
              return -1;
          }
        }
      }
LABEL_40:
      v19 = *((_BYTE *)v1 + 24);
      if ( v19 )
      {
        if ( v19 != 7 )
          goto LABEL_3;
      }
      if ( ++v1[276] == 2 )
        return v1[5];
    }
  }
  return v1[5];
}
// 1003367C: using guessed type int __thiscall sub_1003367C(_DWORD);
// 10033A69: using guessed type _DWORD __stdcall sub_10033A69(_DWORD, _DWORD, _DWORD);
// 10034266: using guessed type _DWORD __stdcall sub_10034266(_DWORD);
// 100349C8: using guessed type int __thiscall sub_100349C8(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100353C3: using guessed type _DWORD __stdcall sub_100353C3(_DWORD);
// 10035E45: using guessed type _DWORD __stdcall sub_10035E45(_DWORD, char);

//----- (10063424) --------------------------------------------------------
signed int __thiscall sub_10063424(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // eax
  unsigned __int16 *v4; // eax
  int v5; // ecx
  int v6; // edx
  unsigned __int8 v7; // al
  int v8; // ST14_4
  int v9; // ST0C_4
  int v10; // eax
  char v11; // al
  int v12; // eax
  unsigned __int16 *v13; // eax
  int v14; // ecx
  int v15; // ecx

  v1 = this;
  if ( !(unsigned __int8)sub_100353C3(this[2]) )
    return -1;
  if ( !v1[3] )
  {
    v2 = v1[2];
    *(_BYTE *)(v2 + 28) = 1;
    *(_DWORD *)(v2 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    return -1;
  }
  while ( (unsigned __int8)sub_10033B95(v1) )
  {
    v4 = (unsigned __int16 *)v1[3];
    v1[13] = 0;
    *((_BYTE *)v1 + 24) = 0;
    v5 = *v4;
    v1[3] = v4 + 1;
    *((_WORD *)v1 + 23) = v5;
    if ( (_WORD)v5 )
    {
      v6 = v5;
      while ( v1[5] >= 0 )
      {
        *((_BYTE *)v1 + 24) = sub_10035283(v6, *((_BYTE *)v1 + 24));
        if ( !(unsigned __int8)sub_10035382(v1) )
          return -1;
        v7 = *((_BYTE *)v1 + 24);
        if ( v7 >= 8u )
        {
          v15 = v1[2];
          *(_BYTE *)(v15 + 28) = 1;
          *(_DWORD *)(v15 + 24) = 22;
          sub_10034B08(0, 0, 0, 0, 0, v1[2]);
          return -1;
        }
        switch ( v7 )
        {
          case 0u:
            if ( !(unsigned __int8)sub_100332DF(v1) )
            {
              v8 = v1[2];
              v9 = *((unsigned __int16 *)v1 + 23);
              *((_BYTE *)v1 + 56) = 1;
              sub_10033A69(v9, v1 + 5, v8);
            }
            goto LABEL_43;
          case 1u:
            v1[9] = -1;
            v1[8] = 0;
            *((_BYTE *)v1 + 44) = 0;
            v1[7] = 0;
            v1[10] = 0;
            *((_BYTE *)v1 + 56) = 0;
            goto LABEL_43;
          case 2u:
            switch ( *((_WORD *)v1 + 23) )
            {
              case 0x20:
                v1[7] |= 2u;
                break;
              case 0x23:
                v1[7] |= 0x20u;
                break;
              case 0x2B:
                v1[7] |= 1u;
                break;
              case 0x2D:
                v1[7] |= 4u;
                break;
              case 0x30:
                v1[7] |= 8u;
                break;
            }
            goto LABEL_43;
          case 3u:
            if ( *((_WORD *)v1 + 23) != 42 )
            {
              v10 = (int)(v1 + 8);
              goto LABEL_27;
            }
            if ( !(unsigned __int8)sub_1003332A(v1) )
              return -1;
            if ( !(unsigned __int8)sub_10034DC9(v1) )
              goto LABEL_43;
            v12 = v1[8];
            if ( v12 < 0 )
            {
              v1[7] |= 4u;
              v1[8] = -v12;
            }
            goto LABEL_32;
          case 4u:
            v1[9] = 0;
            goto LABEL_43;
          case 5u:
            if ( *((_WORD *)v1 + 23) == 42 )
            {
              if ( !(unsigned __int8)sub_1003364A(v1) )
                return -1;
              if ( !(unsigned __int8)sub_10034DC9(v1) )
                goto LABEL_43;
              if ( v1[9] < 0 )
                v1[9] = -1;
LABEL_32:
              v11 = 1;
            }
            else
            {
              v10 = (int)(v1 + 9);
LABEL_27:
              v11 = sub_10036016(v10);
            }
LABEL_42:
            if ( !v11 )
              return -1;
LABEL_43:
            v13 = (unsigned __int16 *)v1[3];
            v14 = *v13;
            v1[3] = v13 + 1;
            v6 = v14;
            *((_WORD *)v1 + 23) = v14;
            if ( !(_WORD)v14 )
              goto LABEL_44;
            break;
          case 6u:
            v11 = sub_10034C8E(v1);
            goto LABEL_42;
          case 7u:
            v11 = sub_100355CB(v1);
            goto LABEL_42;
          default:
            return -1;
        }
      }
    }
LABEL_44:
    if ( !(unsigned __int8)sub_10035A62(v1) )
      return -1;
  }
  return v1[5];
}
// 100332DF: using guessed type int __thiscall sub_100332DF(_DWORD);
// 1003332A: using guessed type int __thiscall sub_1003332A(_DWORD);
// 1003364A: using guessed type int __thiscall sub_1003364A(_DWORD);
// 10033A69: using guessed type _DWORD __stdcall sub_10033A69(_DWORD, _DWORD, _DWORD);
// 10033B95: using guessed type int __thiscall sub_10033B95(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034C8E: using guessed type int __thiscall sub_10034C8E(_DWORD);
// 10034DC9: using guessed type int __thiscall sub_10034DC9(_DWORD);
// 10035283: using guessed type _DWORD __stdcall sub_10035283(_DWORD, char);
// 10035382: using guessed type int __thiscall sub_10035382(_DWORD);
// 100353C3: using guessed type _DWORD __stdcall sub_100353C3(_DWORD);
// 100355CB: using guessed type int __thiscall sub_100355CB(_DWORD);
// 10035A62: using guessed type int __thiscall sub_10035A62(_DWORD);
// 10036016: using guessed type _DWORD __stdcall sub_10036016(_DWORD);

//----- (1006370D) --------------------------------------------------------
signed int __thiscall sub_1006370D(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned __int16 *v2; // edx
  int v3; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // eax
  unsigned __int8 v9; // al
  int v10; // ST14_4
  int v11; // eax
  char v12; // al
  int *v13; // ecx
  int v14; // eax
  int *v15; // ecx
  int v16; // eax
  unsigned __int16 *v17; // eax
  int v18; // ecx
  int v19; // ecx

  v1 = this;
  if ( !(unsigned __int8)sub_100353C3(this[2]) )
    return -1;
  v2 = (unsigned __int16 *)v1[3];
  if ( !v2 )
  {
    v3 = v1[2];
    *(_BYTE *)(v3 + 28) = 1;
    *(_DWORD *)(v3 + 24) = 22;
LABEL_4:
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    return -1;
  }
  v5 = v1[276] + 1;
  for ( v1[276] = v5; v1[276] != 2; ++v1[276] )
  {
    v1[13] = 0;
    *((_BYTE *)v1 + 24) = 0;
    v6 = *v2;
    ++v2;
    v1[3] = v2;
    *((_WORD *)v1 + 23) = v6;
    if ( (_WORD)v6 )
    {
      v7 = v6;
      v8 = v1 + 5;
      while ( *v8 >= 0 )
      {
        v9 = sub_100353AF(v7, *((_BYTE *)v1 + 24));
        *((_BYTE *)v1 + 24) = v9;
        if ( v9 >= 8u )
        {
          v19 = v1[2];
          *(_BYTE *)(v19 + 28) = 1;
          *(_DWORD *)(v19 + 24) = 22;
          goto LABEL_4;
        }
        switch ( v9 )
        {
          case 0u:
            v10 = v1[2];
            *((_BYTE *)v1 + 56) = 1;
            sub_10033A69(v7, v1 + 5, v10);
            goto LABEL_39;
          case 1u:
            v1[9] = -1;
            v1[8] = 0;
            *((_BYTE *)v1 + 44) = 0;
            v1[7] = 0;
            v1[10] = 0;
            *((_BYTE *)v1 + 56) = 0;
            goto LABEL_39;
          case 2u:
            switch ( (unsigned __int16)v7 )
            {
              case 0x20u:
                v1[7] |= 2u;
                break;
              case 0x23u:
                v1[7] |= 0x20u;
                break;
              case 0x2Bu:
                v1[7] |= 1u;
                break;
              case 0x2Du:
                v1[7] |= 4u;
                break;
              case 0x30u:
                v1[7] |= 8u;
                break;
            }
            goto LABEL_39;
          case 3u:
            if ( (_WORD)v7 != 42 )
            {
              v11 = (int)(v1 + 8);
              goto LABEL_27;
            }
            v13 = (int *)v1[4];
            v1[4] = v13 + 1;
            v14 = *v13;
            v1[8] = *v13;
            if ( v14 < 0 )
            {
              v1[7] |= 4u;
              v1[8] = -v14;
            }
            goto LABEL_30;
          case 4u:
            v1[9] = 0;
            goto LABEL_39;
          case 5u:
            if ( (_WORD)v7 == 42 )
            {
              v15 = (int *)v1[4];
              v1[4] = v15 + 1;
              v16 = *v15;
              v1[9] = *v15;
              if ( v16 < 0 )
                v1[9] = -1;
LABEL_30:
              v12 = 1;
            }
            else
            {
              v11 = (int)(v1 + 9);
LABEL_27:
              v12 = sub_1003370D(v11);
            }
LABEL_38:
            if ( !v12 )
              return -1;
LABEL_39:
            v17 = (unsigned __int16 *)v1[3];
            v18 = *v17;
            v2 = v17 + 1;
            v1[3] = v17 + 1;
            v7 = v18;
            *((_WORD *)v1 + 23) = v18;
            v8 = v1 + 5;
            if ( !(_WORD)v18 )
              goto LABEL_40;
            break;
          case 6u:
            v12 = sub_10035931(v1);
            goto LABEL_38;
          case 7u:
            v12 = sub_10034293(v1);
            goto LABEL_38;
          default:
            return -1;
        }
      }
    }
LABEL_40:
    ;
  }
  return v1[5];
}
// 1003370D: using guessed type _DWORD __stdcall sub_1003370D(_DWORD);
// 10033A69: using guessed type _DWORD __stdcall sub_10033A69(_DWORD, _DWORD, _DWORD);
// 10034293: using guessed type int __thiscall sub_10034293(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100353AF: using guessed type _DWORD __stdcall sub_100353AF(_DWORD, char);
// 100353C3: using guessed type _DWORD __stdcall sub_100353C3(_DWORD);
// 10035931: using guessed type int __thiscall sub_10035931(_DWORD);

//----- (100639A1) --------------------------------------------------------
signed int __thiscall sub_100639A1(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned __int16 *v2; // edx
  int v3; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edi
  unsigned __int8 v8; // al
  _WORD ***v9; // edx
  int v10; // ecx
  int v11; // eax
  char v12; // al
  int *v13; // ecx
  int v14; // eax
  int *v15; // ecx
  int v16; // eax
  unsigned __int16 *v17; // eax
  int v18; // ecx
  char v19; // al
  int v20; // ecx

  v1 = this;
  if ( !(unsigned __int8)sub_10035012(this[2]) )
    return -1;
  v2 = (unsigned __int16 *)v1[3];
  if ( !v2 )
  {
LABEL_3:
    v3 = v1[2];
    *(_DWORD *)(v3 + 24) = 22;
    *(_BYTE *)(v3 + 28) = 1;
LABEL_4:
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    return -1;
  }
  v5 = v1[276] + 1;
  v1[276] = v5;
  if ( v5 != 2 )
  {
    while ( 1 )
    {
      v1[13] = 0;
      *((_BYTE *)v1 + 24) = 0;
      v6 = *v2;
      ++v2;
      v1[3] = v2;
      *((_WORD *)v1 + 23) = v6;
      if ( (_WORD)v6 )
      {
        v7 = v6;
        while ( v1[5] >= 0 )
        {
          v8 = sub_10035873(v7, *((_BYTE *)v1 + 24));
          *((_BYTE *)v1 + 24) = v8;
          if ( v8 >= 8u )
          {
            v20 = v1[2];
            *(_BYTE *)(v20 + 28) = 1;
            *(_DWORD *)(v20 + 24) = 22;
            goto LABEL_4;
          }
          switch ( v8 )
          {
            case 0u:
              *((_BYTE *)v1 + 56) = 1;
              v9 = (_WORD ***)(v1 + 274);
              v10 = v1[274];
              if ( *(_DWORD *)(v10 + 8) == *(_DWORD *)(v10 + 4) )
              {
                if ( *(_BYTE *)(v10 + 12) )
                  ++v1[5];
                else
                  v1[5] = -1;
              }
              else
              {
                ++v1[5];
                ++*(_DWORD *)(v10 + 8);
                ***v9 = v7;
                ++**v9;
              }
              goto LABEL_43;
            case 1u:
              v1[9] = -1;
              v1[8] = 0;
              *((_BYTE *)v1 + 44) = 0;
              v1[7] = 0;
              v1[10] = 0;
              *((_BYTE *)v1 + 56) = 0;
              goto LABEL_43;
            case 2u:
              switch ( (unsigned __int16)v7 )
              {
                case 0x20u:
                  v1[7] |= 2u;
                  break;
                case 0x23u:
                  v1[7] |= 0x20u;
                  break;
                case 0x2Bu:
                  v1[7] |= 1u;
                  break;
                case 0x2Du:
                  v1[7] |= 4u;
                  break;
                case 0x30u:
                  v1[7] |= 8u;
                  break;
              }
              goto LABEL_43;
            case 3u:
              if ( (_WORD)v7 != 42 )
              {
                v11 = (int)(v1 + 8);
                goto LABEL_31;
              }
              v13 = (int *)v1[4];
              v1[4] = v13 + 1;
              v14 = *v13;
              v1[8] = *v13;
              if ( v14 < 0 )
              {
                v1[7] |= 4u;
                v1[8] = -v14;
              }
              goto LABEL_34;
            case 4u:
              v1[9] = 0;
              goto LABEL_43;
            case 5u:
              if ( (_WORD)v7 == 42 )
              {
                v15 = (int *)v1[4];
                v1[4] = v15 + 1;
                v16 = *v15;
                v1[9] = *v15;
                if ( v16 < 0 )
                  v1[9] = -1;
LABEL_34:
                v12 = 1;
              }
              else
              {
                v11 = (int)(v1 + 9);
LABEL_31:
                v12 = sub_100344B9(v11);
              }
LABEL_42:
              if ( !v12 )
                return -1;
LABEL_43:
              v17 = (unsigned __int16 *)v1[3];
              v18 = *v17;
              v2 = v17 + 1;
              v1[3] = v17 + 1;
              v7 = v18;
              *((_WORD *)v1 + 23) = v18;
              if ( !(_WORD)v18 )
                goto LABEL_44;
              break;
            case 6u:
              v12 = sub_10035800(v1);
              goto LABEL_42;
            case 7u:
              v12 = sub_100345EA(v1);
              goto LABEL_42;
            default:
              return -1;
          }
        }
      }
LABEL_44:
      v19 = *((_BYTE *)v1 + 24);
      if ( v19 )
      {
        if ( v19 != 7 )
          goto LABEL_3;
      }
      if ( ++v1[276] == 2 )
        return v1[5];
    }
  }
  return v1[5];
}
// 100344B9: using guessed type _DWORD __stdcall sub_100344B9(_DWORD);
// 100345EA: using guessed type int __thiscall sub_100345EA(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035012: using guessed type _DWORD __stdcall sub_10035012(_DWORD);
// 10035800: using guessed type int __thiscall sub_10035800(_DWORD);
// 10035873: using guessed type _DWORD __stdcall sub_10035873(_DWORD, char);

//----- (10063C71) --------------------------------------------------------
signed int __thiscall sub_10063C71(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // edi
  int v3; // eax
  unsigned __int16 *v5; // eax
  int v6; // ecx
  int v7; // edx
  unsigned __int8 v8; // al
  __int16 v9; // dx
  _DWORD *v10; // ecx
  int v11; // eax
  char v12; // al
  int v13; // eax
  unsigned __int16 *v14; // eax
  int v15; // ecx
  int v16; // ecx

  v1 = this;
  v2 = (int)(this + 274);
  if ( !(unsigned __int8)sub_10035012(this[2]) )
    return -1;
  if ( !v1[3] )
  {
    v3 = v1[2];
    *(_BYTE *)(v3 + 28) = 1;
    *(_DWORD *)(v3 + 24) = 22;
LABEL_4:
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    return -1;
  }
  while ( (unsigned __int8)sub_10036057(v1) )
  {
    v5 = (unsigned __int16 *)v1[3];
    v1[13] = 0;
    *((_BYTE *)v1 + 24) = 0;
    v6 = *v5;
    v1[3] = v5 + 1;
    *((_WORD *)v1 + 23) = v6;
    if ( (_WORD)v6 )
    {
      v7 = v6;
      while ( v1[5] >= 0 )
      {
        *((_BYTE *)v1 + 24) = sub_10034937(v7, *((_BYTE *)v1 + 24));
        if ( !(unsigned __int8)sub_10033FDC(v1) )
          return -1;
        v8 = *((_BYTE *)v1 + 24);
        if ( v8 >= 8u )
        {
          v16 = v1[2];
          *(_BYTE *)(v16 + 28) = 1;
          *(_DWORD *)(v16 + 24) = 22;
          goto LABEL_4;
        }
        switch ( v8 )
        {
          case 0u:
            if ( !(unsigned __int8)sub_100332E4(v1) )
            {
              v9 = *((_WORD *)v1 + 23);
              *((_BYTE *)v1 + 56) = 1;
              v10 = *(_DWORD **)v2;
              if ( *(_DWORD *)(*(_DWORD *)v2 + 8) == *(_DWORD *)(*(_DWORD *)v2 + 4) )
              {
                if ( *((_BYTE *)v10 + 12) )
                  ++v1[5];
                else
                  v1[5] = -1;
              }
              else
              {
                ++v1[5];
                ++v10[2];
                ***(_WORD ***)v2 = v9;
                **(_DWORD **)v2 += 2;
              }
            }
            goto LABEL_48;
          case 1u:
            v1[9] = -1;
            v1[8] = 0;
            *((_BYTE *)v1 + 44) = 0;
            v1[7] = 0;
            v1[10] = 0;
            *((_BYTE *)v1 + 56) = 0;
            goto LABEL_48;
          case 2u:
            switch ( *((_WORD *)v1 + 23) )
            {
              case 0x20:
                v1[7] |= 2u;
                break;
              case 0x23:
                v1[7] |= 0x20u;
                break;
              case 0x2B:
                v1[7] |= 1u;
                break;
              case 0x2D:
                v1[7] |= 4u;
                break;
              case 0x30:
                v1[7] |= 8u;
                break;
            }
            goto LABEL_48;
          case 3u:
            if ( *((_WORD *)v1 + 23) != 42 )
            {
              v11 = (int)(v1 + 8);
              goto LABEL_32;
            }
            if ( !(unsigned __int8)sub_10035D87(v1) )
              return -1;
            if ( !(unsigned __int8)sub_10035ABC(v1) )
              goto LABEL_48;
            v13 = v1[8];
            if ( v13 < 0 )
            {
              v1[7] |= 4u;
              v1[8] = -v13;
            }
            goto LABEL_37;
          case 4u:
            v1[9] = 0;
            goto LABEL_48;
          case 5u:
            if ( *((_WORD *)v1 + 23) == 42 )
            {
              if ( !(unsigned __int8)sub_10035954(v1) )
                return -1;
              if ( !(unsigned __int8)sub_10035ABC(v1) )
                goto LABEL_48;
              if ( v1[9] < 0 )
                v1[9] = -1;
LABEL_37:
              v12 = 1;
            }
            else
            {
              v11 = (int)(v1 + 9);
LABEL_32:
              v12 = sub_1003602F(v11);
            }
LABEL_47:
            if ( !v12 )
              return -1;
LABEL_48:
            v14 = (unsigned __int16 *)v1[3];
            v15 = *v14;
            v1[3] = v14 + 1;
            v7 = v15;
            *((_WORD *)v1 + 23) = v15;
            if ( !(_WORD)v15 )
              goto LABEL_49;
            break;
          case 6u:
            v12 = sub_100346B7(v1);
            goto LABEL_47;
          case 7u:
            v12 = sub_10035553(v1);
            goto LABEL_47;
          default:
            return -1;
        }
      }
    }
LABEL_49:
    if ( !(unsigned __int8)sub_10034A22(v1, v7) )
      return -1;
  }
  return v1[5];
}
// 100332E4: using guessed type int __thiscall sub_100332E4(_DWORD);
// 10033FDC: using guessed type int __thiscall sub_10033FDC(_DWORD);
// 100346B7: using guessed type int __thiscall sub_100346B7(_DWORD);
// 10034937: using guessed type _DWORD __stdcall sub_10034937(_DWORD, char);
// 10034A22: using guessed type int __fastcall sub_10034A22(_DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035012: using guessed type _DWORD __stdcall sub_10035012(_DWORD);
// 10035553: using guessed type int __thiscall sub_10035553(_DWORD);
// 10035954: using guessed type int __thiscall sub_10035954(_DWORD);
// 10035ABC: using guessed type int __thiscall sub_10035ABC(_DWORD);
// 10035D87: using guessed type int __thiscall sub_10035D87(_DWORD);
// 1003602F: using guessed type _DWORD __stdcall sub_1003602F(_DWORD);
// 10036057: using guessed type int __thiscall sub_10036057(_DWORD);

//----- (10063F73) --------------------------------------------------------
signed int __thiscall sub_10063F73(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned __int16 *v2; // edx
  int v3; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // eax
  unsigned __int8 v9; // al
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  char v13; // al
  int *v14; // ecx
  int v15; // eax
  int *v16; // ecx
  int v17; // eax
  unsigned __int16 *v18; // eax
  int v19; // ecx
  int v20; // ecx

  v1 = this;
  if ( !(unsigned __int8)sub_10035012(this[2]) )
    return -1;
  v2 = (unsigned __int16 *)v1[3];
  if ( !v2 )
  {
    v3 = v1[2];
    *(_BYTE *)(v3 + 28) = 1;
    *(_DWORD *)(v3 + 24) = 22;
LABEL_4:
    sub_10034B08(0, 0, 0, 0, 0, v1[2]);
    return -1;
  }
  v5 = v1[276] + 1;
  for ( v1[276] = v5; v1[276] != 2; ++v1[276] )
  {
    v1[13] = 0;
    *((_BYTE *)v1 + 24) = 0;
    v6 = *v2;
    ++v2;
    v1[3] = v2;
    *((_WORD *)v1 + 23) = v6;
    if ( (_WORD)v6 )
    {
      v7 = v6;
      v8 = v1 + 5;
      while ( *v8 >= 0 )
      {
        v9 = sub_10034513(v7, *((_BYTE *)v1 + 24));
        *((_BYTE *)v1 + 24) = v9;
        if ( v9 >= 8u )
        {
          v20 = v1[2];
          *(_BYTE *)(v20 + 28) = 1;
          *(_DWORD *)(v20 + 24) = 22;
          goto LABEL_4;
        }
        switch ( v9 )
        {
          case 0u:
            *((_BYTE *)v1 + 56) = 1;
            v10 = v1[274];
            if ( *(_DWORD *)(v10 + 8) == *(_DWORD *)(v10 + 4) )
            {
              if ( *(_BYTE *)(v10 + 12) )
                v11 = v1[5] + 1;
              else
                v11 = -1;
              v1[5] = v11;
            }
            else
            {
              ++v1[5];
              ++*(_DWORD *)(v10 + 8);
              **(_WORD **)v1[274] = v7;
              *(_DWORD *)v1[274] += 2;
            }
            goto LABEL_44;
          case 1u:
            v1[9] = -1;
            v1[8] = 0;
            *((_BYTE *)v1 + 44) = 0;
            v1[7] = 0;
            v1[10] = 0;
            *((_BYTE *)v1 + 56) = 0;
            goto LABEL_44;
          case 2u:
            switch ( (unsigned __int16)v7 )
            {
              case 0x20u:
                v1[7] |= 2u;
                break;
              case 0x23u:
                v1[7] |= 0x20u;
                break;
              case 0x2Bu:
                v1[7] |= 1u;
                break;
              case 0x2Du:
                v1[7] |= 4u;
                break;
              case 0x30u:
                v1[7] |= 8u;
                break;
            }
            goto LABEL_44;
          case 3u:
            if ( (_WORD)v7 != 42 )
            {
              v12 = (int)(v1 + 8);
              goto LABEL_32;
            }
            v14 = (int *)v1[4];
            v1[4] = v14 + 1;
            v15 = *v14;
            v1[8] = *v14;
            if ( v15 < 0 )
            {
              v1[7] |= 4u;
              v1[8] = -v15;
            }
            goto LABEL_35;
          case 4u:
            v1[9] = 0;
            goto LABEL_44;
          case 5u:
            if ( (_WORD)v7 == 42 )
            {
              v16 = (int *)v1[4];
              v1[4] = v16 + 1;
              v17 = *v16;
              v1[9] = *v16;
              if ( v17 < 0 )
                v1[9] = -1;
LABEL_35:
              v13 = 1;
            }
            else
            {
              v12 = (int)(v1 + 9);
LABEL_32:
              v13 = sub_100340C2(v12);
            }
LABEL_43:
            if ( !v13 )
              return -1;
LABEL_44:
            v18 = (unsigned __int16 *)v1[3];
            v19 = *v18;
            v2 = v18 + 1;
            v1[3] = v18 + 1;
            v7 = v19;
            *((_WORD *)v1 + 23) = v19;
            v8 = v1 + 5;
            if ( !(_WORD)v19 )
              goto LABEL_45;
            break;
          case 6u:
            v13 = sub_10033947(v1);
            goto LABEL_43;
          case 7u:
            v13 = sub_10033D5C(v1);
            goto LABEL_43;
          default:
            return -1;
        }
      }
    }
LABEL_45:
    ;
  }
  return v1[5];
}
// 10033947: using guessed type int __thiscall sub_10033947(_DWORD);
// 10033D5C: using guessed type int __thiscall sub_10033D5C(_DWORD);
// 100340C2: using guessed type _DWORD __stdcall sub_100340C2(_DWORD);
// 10034513: using guessed type _DWORD __stdcall sub_10034513(_DWORD, char);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035012: using guessed type _DWORD __stdcall sub_10035012(_DWORD);

//----- (1006435D) --------------------------------------------------------
char __thiscall sub_1006435D(_DWORD *this)
{
  char result; // al

  result = 1;
  if ( this[278] == 1 && this[279] != 1 )
    result = 0;
  return result;
}

//----- (10064378) --------------------------------------------------------
char __thiscall sub_10064378(_DWORD *this)
{
  char result; // al

  result = 1;
  if ( this[278] == 1 && this[279] != 1 )
    result = 0;
  return result;
}

//----- (10064393) --------------------------------------------------------
char __thiscall sub_10064393(_DWORD *this)
{
  char result; // al

  result = 1;
  if ( this[278] == 1 && this[279] != 1 )
    result = 0;
  return result;
}

//----- (100643AE) --------------------------------------------------------
char __thiscall sub_100643AE(_DWORD *this)
{
  char result; // al

  result = 1;
  if ( this[278] == 1 && this[279] != 1 )
    result = 0;
  return result;
}

//----- (100643D5) --------------------------------------------------------
bool __thiscall sub_100643D5(_DWORD *this)
{
  int v1; // edx

  v1 = this[278];
  if ( v1 == 1 )
  {
    if ( this[279] == 2 )
      return 1;
  }
  else if ( v1 == 2 )
  {
    return this[279] == 0;
  }
  return 0;
}

//----- (10064409) --------------------------------------------------------
bool __thiscall sub_10064409(_DWORD *this)
{
  int v1; // edx

  v1 = this[278];
  if ( v1 == 1 )
  {
    if ( this[279] == 2 )
      return 1;
  }
  else if ( v1 == 2 )
  {
    return this[279] == 0;
  }
  return 0;
}

//----- (1006443D) --------------------------------------------------------
bool __thiscall sub_1006443D(_DWORD *this)
{
  int v1; // edx

  v1 = this[278];
  if ( v1 == 1 )
  {
    if ( this[279] == 2 )
      return 1;
  }
  else if ( v1 == 2 )
  {
    return this[279] == 0;
  }
  return 0;
}

//----- (10064471) --------------------------------------------------------
bool __thiscall sub_10064471(_DWORD *this)
{
  int v1; // edx

  v1 = this[278];
  if ( v1 == 1 )
  {
    if ( this[279] == 2 )
      return 1;
  }
  else if ( v1 == 2 )
  {
    return this[279] == 0;
  }
  return 0;
}

//----- (100644B1) --------------------------------------------------------
char __thiscall sub_100644B1(_DWORD *this)
{
  char result; // al

  if ( this[279] != 2 || (result = 1, this[278] != 1) )
    result = 0;
  return result;
}

//----- (100644CD) --------------------------------------------------------
char __thiscall sub_100644CD(_DWORD *this)
{
  char result; // al

  if ( this[279] != 2 || (result = 1, this[278] != 1) )
    result = 0;
  return result;
}

//----- (100644E9) --------------------------------------------------------
char __thiscall sub_100644E9(_DWORD *this)
{
  char result; // al

  if ( this[279] != 2 || (result = 1, this[278] != 1) )
    result = 0;
  return result;
}

//----- (10064505) --------------------------------------------------------
char __thiscall sub_10064505(_DWORD *this)
{
  char result; // al

  if ( this[279] != 2 || (result = 1, this[278] != 1) )
    result = 0;
  return result;
}

//----- (1006613C) --------------------------------------------------------
char __thiscall sub_1006613C(_BYTE *this)
{
  char v1; // al
  int v3; // eax
  _BYTE *v4; // eax
  signed int v5; // eax
  char *v6; // esi
  char v7; // al
  _BYTE *v8; // eax
  signed int v9; // [esp-4h] [ebp-4h]

  v1 = this[45];
  if ( v1 == 70 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 7;
      return sub_10033B4A(this);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 8;
LABEL_7:
      v3 = *((_DWORD *)this + 2) + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      sub_10034B08(0, 0, 0, 0, 0, *((_DWORD *)this + 2));
      return 0;
    }
    return 1;
  }
  if ( *((_DWORD *)this + 10) )
    goto LABEL_7;
  if ( v1 > 106 )
  {
    if ( v1 != 108 )
    {
      switch ( v1 )
      {
        case 116:
          *((_DWORD *)this + 10) = 7;
          break;
        case 119:
          *((_DWORD *)this + 10) = 12;
          break;
        case 122:
          *((_DWORD *)this + 10) = 6;
          break;
      }
      return 1;
    }
    v8 = (_BYTE *)*((_DWORD *)this + 3);
    if ( *v8 == 108 )
    {
      *((_DWORD *)this + 3) = v8 + 1;
      v9 = 4;
    }
    else
    {
      v9 = 3;
    }
    goto LABEL_45;
  }
  switch ( v1 )
  {
    case 106:
      *((_DWORD *)this + 10) = 5;
      return 1;
    case 73:
      v6 = (char *)*((_DWORD *)this + 3);
      v7 = *v6;
      if ( *v6 != 51 || v6[1] != 50 )
      {
        if ( v7 == 54 )
        {
          if ( v6[1] == 52 )
          {
            *((_DWORD *)this + 10) = 11;
            *((_DWORD *)this + 3) = v6 + 2;
          }
        }
        else if ( v7 == 100 || v7 == 105 || v7 == 111 || v7 == 117 || v7 == 120 || v7 == 88 )
        {
          *((_DWORD *)this + 10) = 9;
        }
      }
      else
      {
        *((_DWORD *)this + 10) = 10;
        *((_DWORD *)this + 3) = v6 + 2;
      }
      return 1;
    case 76:
      *((_DWORD *)this + 10) = 8;
      return 1;
    case 84:
      *((_DWORD *)this + 10) = 13;
      return 1;
    case 104:
      v4 = (_BYTE *)*((_DWORD *)this + 3);
      if ( *v4 == 104 )
      {
        *((_DWORD *)this + 3) = v4 + 1;
        v5 = 1;
LABEL_46:
        *((_DWORD *)this + 10) = v5;
        return 1;
      }
      v9 = 2;
LABEL_45:
      v5 = v9;
      goto LABEL_46;
  }
  return 1;
}
// 10033B4A: using guessed type int __thiscall sub_10033B4A(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100662EB) --------------------------------------------------------
char __thiscall sub_100662EB(_BYTE *this)
{
  char v1; // al
  int v3; // eax
  _BYTE *v4; // eax
  signed int v5; // eax
  char *v6; // esi
  char v7; // al
  _BYTE *v8; // eax
  signed int v9; // [esp-4h] [ebp-4h]

  v1 = this[45];
  if ( v1 == 70 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 7;
      return sub_10034608(this);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 8;
LABEL_7:
      v3 = *((_DWORD *)this + 2) + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      sub_10034B08(0, 0, 0, 0, 0, *((_DWORD *)this + 2));
      return 0;
    }
    return 1;
  }
  if ( *((_DWORD *)this + 10) )
    goto LABEL_7;
  if ( v1 > 106 )
  {
    if ( v1 != 108 )
    {
      switch ( v1 )
      {
        case 116:
          *((_DWORD *)this + 10) = 7;
          break;
        case 119:
          *((_DWORD *)this + 10) = 12;
          break;
        case 122:
          *((_DWORD *)this + 10) = 6;
          break;
      }
      return 1;
    }
    v8 = (_BYTE *)*((_DWORD *)this + 3);
    if ( *v8 == 108 )
    {
      *((_DWORD *)this + 3) = v8 + 1;
      v9 = 4;
    }
    else
    {
      v9 = 3;
    }
    goto LABEL_45;
  }
  switch ( v1 )
  {
    case 106:
      *((_DWORD *)this + 10) = 5;
      return 1;
    case 73:
      v6 = (char *)*((_DWORD *)this + 3);
      v7 = *v6;
      if ( *v6 != 51 || v6[1] != 50 )
      {
        if ( v7 == 54 )
        {
          if ( v6[1] == 52 )
          {
            *((_DWORD *)this + 10) = 11;
            *((_DWORD *)this + 3) = v6 + 2;
          }
        }
        else if ( v7 == 100 || v7 == 105 || v7 == 111 || v7 == 117 || v7 == 120 || v7 == 88 )
        {
          *((_DWORD *)this + 10) = 9;
        }
      }
      else
      {
        *((_DWORD *)this + 10) = 10;
        *((_DWORD *)this + 3) = v6 + 2;
      }
      return 1;
    case 76:
      *((_DWORD *)this + 10) = 8;
      return 1;
    case 84:
      *((_DWORD *)this + 10) = 13;
      return 1;
    case 104:
      v4 = (_BYTE *)*((_DWORD *)this + 3);
      if ( *v4 == 104 )
      {
        *((_DWORD *)this + 3) = v4 + 1;
        v5 = 1;
LABEL_46:
        *((_DWORD *)this + 10) = v5;
        return 1;
      }
      v9 = 2;
LABEL_45:
      v5 = v9;
      goto LABEL_46;
  }
  return 1;
}
// 10034608: using guessed type int __thiscall sub_10034608(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1006649A) --------------------------------------------------------
char __thiscall sub_1006649A(_BYTE *this)
{
  char v1; // al
  int v3; // eax
  _BYTE *v4; // eax
  signed int v5; // eax
  char *v6; // esi
  char v7; // al
  _BYTE *v8; // eax
  signed int v9; // [esp-4h] [ebp-4h]

  v1 = this[45];
  if ( v1 == 70 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 7;
      return sub_10033EBA(this);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 8;
LABEL_7:
      v3 = *((_DWORD *)this + 2) + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      sub_10034B08(0, 0, 0, 0, 0, *((_DWORD *)this + 2));
      return 0;
    }
    return 1;
  }
  if ( *((_DWORD *)this + 10) )
    goto LABEL_7;
  if ( v1 > 106 )
  {
    if ( v1 != 108 )
    {
      switch ( v1 )
      {
        case 116:
          *((_DWORD *)this + 10) = 7;
          break;
        case 119:
          *((_DWORD *)this + 10) = 12;
          break;
        case 122:
          *((_DWORD *)this + 10) = 6;
          break;
      }
      return 1;
    }
    v8 = (_BYTE *)*((_DWORD *)this + 3);
    if ( *v8 == 108 )
    {
      *((_DWORD *)this + 3) = v8 + 1;
      v9 = 4;
    }
    else
    {
      v9 = 3;
    }
    goto LABEL_45;
  }
  switch ( v1 )
  {
    case 106:
      *((_DWORD *)this + 10) = 5;
      return 1;
    case 73:
      v6 = (char *)*((_DWORD *)this + 3);
      v7 = *v6;
      if ( *v6 != 51 || v6[1] != 50 )
      {
        if ( v7 == 54 )
        {
          if ( v6[1] == 52 )
          {
            *((_DWORD *)this + 10) = 11;
            *((_DWORD *)this + 3) = v6 + 2;
          }
        }
        else if ( v7 == 100 || v7 == 105 || v7 == 111 || v7 == 117 || v7 == 120 || v7 == 88 )
        {
          *((_DWORD *)this + 10) = 9;
        }
      }
      else
      {
        *((_DWORD *)this + 10) = 10;
        *((_DWORD *)this + 3) = v6 + 2;
      }
      return 1;
    case 76:
      *((_DWORD *)this + 10) = 8;
      return 1;
    case 84:
      *((_DWORD *)this + 10) = 13;
      return 1;
    case 104:
      v4 = (_BYTE *)*((_DWORD *)this + 3);
      if ( *v4 == 104 )
      {
        *((_DWORD *)this + 3) = v4 + 1;
        v5 = 1;
LABEL_46:
        *((_DWORD *)this + 10) = v5;
        return 1;
      }
      v9 = 2;
LABEL_45:
      v5 = v9;
      goto LABEL_46;
  }
  return 1;
}
// 10033EBA: using guessed type int __thiscall sub_10033EBA(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10066649) --------------------------------------------------------
char __thiscall sub_10066649(_BYTE *this)
{
  char v1; // al
  int v3; // eax
  _BYTE *v4; // eax
  signed int v5; // eax
  char *v6; // esi
  char v7; // al
  _BYTE *v8; // eax
  signed int v9; // [esp-4h] [ebp-4h]

  v1 = this[45];
  if ( v1 == 70 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 7;
      return sub_1003605C(this);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 8;
LABEL_7:
      v3 = *((_DWORD *)this + 2) + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      sub_10034B08(0, 0, 0, 0, 0, *((_DWORD *)this + 2));
      return 0;
    }
    return 1;
  }
  if ( *((_DWORD *)this + 10) )
    goto LABEL_7;
  if ( v1 > 106 )
  {
    if ( v1 != 108 )
    {
      switch ( v1 )
      {
        case 116:
          *((_DWORD *)this + 10) = 7;
          break;
        case 119:
          *((_DWORD *)this + 10) = 12;
          break;
        case 122:
          *((_DWORD *)this + 10) = 6;
          break;
      }
      return 1;
    }
    v8 = (_BYTE *)*((_DWORD *)this + 3);
    if ( *v8 == 108 )
    {
      *((_DWORD *)this + 3) = v8 + 1;
      v9 = 4;
    }
    else
    {
      v9 = 3;
    }
    goto LABEL_45;
  }
  switch ( v1 )
  {
    case 106:
      *((_DWORD *)this + 10) = 5;
      return 1;
    case 73:
      v6 = (char *)*((_DWORD *)this + 3);
      v7 = *v6;
      if ( *v6 != 51 || v6[1] != 50 )
      {
        if ( v7 == 54 )
        {
          if ( v6[1] == 52 )
          {
            *((_DWORD *)this + 10) = 11;
            *((_DWORD *)this + 3) = v6 + 2;
          }
        }
        else if ( v7 == 100 || v7 == 105 || v7 == 111 || v7 == 117 || v7 == 120 || v7 == 88 )
        {
          *((_DWORD *)this + 10) = 9;
        }
      }
      else
      {
        *((_DWORD *)this + 10) = 10;
        *((_DWORD *)this + 3) = v6 + 2;
      }
      return 1;
    case 76:
      *((_DWORD *)this + 10) = 8;
      return 1;
    case 84:
      *((_DWORD *)this + 10) = 13;
      return 1;
    case 104:
      v4 = (_BYTE *)*((_DWORD *)this + 3);
      if ( *v4 == 104 )
      {
        *((_DWORD *)this + 3) = v4 + 1;
        v5 = 1;
LABEL_46:
        *((_DWORD *)this + 10) = v5;
        return 1;
      }
      v9 = 2;
LABEL_45:
      v5 = v9;
      goto LABEL_46;
  }
  return 1;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 1003605C: using guessed type int __thiscall sub_1003605C(_DWORD);

//----- (100667F8) --------------------------------------------------------
char __thiscall sub_100667F8(_BYTE *this)
{
  char v1; // al
  int v3; // eax
  _BYTE *v4; // eax
  signed int v5; // eax
  char *v6; // esi
  char v7; // al
  _BYTE *v8; // eax
  signed int v9; // [esp-4h] [ebp-4h]

  v1 = this[45];
  if ( v1 == 70 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 7;
      return sub_100360CF(this);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 8;
LABEL_7:
      v3 = *((_DWORD *)this + 2) + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      sub_10034B08(0, 0, 0, 0, 0, *((_DWORD *)this + 2));
      return 0;
    }
    return 1;
  }
  if ( *((_DWORD *)this + 10) )
    goto LABEL_7;
  if ( v1 > 106 )
  {
    if ( v1 != 108 )
    {
      switch ( v1 )
      {
        case 116:
          *((_DWORD *)this + 10) = 7;
          break;
        case 119:
          *((_DWORD *)this + 10) = 12;
          break;
        case 122:
          *((_DWORD *)this + 10) = 6;
          break;
      }
      return 1;
    }
    v8 = (_BYTE *)*((_DWORD *)this + 3);
    if ( *v8 == 108 )
    {
      *((_DWORD *)this + 3) = v8 + 1;
      v9 = 4;
    }
    else
    {
      v9 = 3;
    }
    goto LABEL_45;
  }
  switch ( v1 )
  {
    case 106:
      *((_DWORD *)this + 10) = 5;
      return 1;
    case 73:
      v6 = (char *)*((_DWORD *)this + 3);
      v7 = *v6;
      if ( *v6 != 51 || v6[1] != 50 )
      {
        if ( v7 == 54 )
        {
          if ( v6[1] == 52 )
          {
            *((_DWORD *)this + 10) = 11;
            *((_DWORD *)this + 3) = v6 + 2;
          }
        }
        else if ( v7 == 100 || v7 == 105 || v7 == 111 || v7 == 117 || v7 == 120 || v7 == 88 )
        {
          *((_DWORD *)this + 10) = 9;
        }
      }
      else
      {
        *((_DWORD *)this + 10) = 10;
        *((_DWORD *)this + 3) = v6 + 2;
      }
      return 1;
    case 76:
      *((_DWORD *)this + 10) = 8;
      return 1;
    case 84:
      *((_DWORD *)this + 10) = 13;
      return 1;
    case 104:
      v4 = (_BYTE *)*((_DWORD *)this + 3);
      if ( *v4 == 104 )
      {
        *((_DWORD *)this + 3) = v4 + 1;
        v5 = 1;
LABEL_46:
        *((_DWORD *)this + 10) = v5;
        return 1;
      }
      v9 = 2;
LABEL_45:
      v5 = v9;
      goto LABEL_46;
  }
  return 1;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100360CF: using guessed type int __thiscall sub_100360CF(_DWORD);

//----- (100669A7) --------------------------------------------------------
char __thiscall sub_100669A7(_BYTE *this)
{
  char v1; // al
  int v3; // eax
  _BYTE *v4; // eax
  signed int v5; // eax
  char *v6; // esi
  char v7; // al
  _BYTE *v8; // eax
  signed int v9; // [esp-4h] [ebp-4h]

  v1 = this[45];
  if ( v1 == 70 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 7;
      return sub_100338B1(this);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 8;
LABEL_7:
      v3 = *((_DWORD *)this + 2) + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      sub_10034B08(0, 0, 0, 0, 0, *((_DWORD *)this + 2));
      return 0;
    }
    return 1;
  }
  if ( *((_DWORD *)this + 10) )
    goto LABEL_7;
  if ( v1 > 106 )
  {
    if ( v1 != 108 )
    {
      switch ( v1 )
      {
        case 116:
          *((_DWORD *)this + 10) = 7;
          break;
        case 119:
          *((_DWORD *)this + 10) = 12;
          break;
        case 122:
          *((_DWORD *)this + 10) = 6;
          break;
      }
      return 1;
    }
    v8 = (_BYTE *)*((_DWORD *)this + 3);
    if ( *v8 == 108 )
    {
      *((_DWORD *)this + 3) = v8 + 1;
      v9 = 4;
    }
    else
    {
      v9 = 3;
    }
    goto LABEL_45;
  }
  switch ( v1 )
  {
    case 106:
      *((_DWORD *)this + 10) = 5;
      return 1;
    case 73:
      v6 = (char *)*((_DWORD *)this + 3);
      v7 = *v6;
      if ( *v6 != 51 || v6[1] != 50 )
      {
        if ( v7 == 54 )
        {
          if ( v6[1] == 52 )
          {
            *((_DWORD *)this + 10) = 11;
            *((_DWORD *)this + 3) = v6 + 2;
          }
        }
        else if ( v7 == 100 || v7 == 105 || v7 == 111 || v7 == 117 || v7 == 120 || v7 == 88 )
        {
          *((_DWORD *)this + 10) = 9;
        }
      }
      else
      {
        *((_DWORD *)this + 10) = 10;
        *((_DWORD *)this + 3) = v6 + 2;
      }
      return 1;
    case 76:
      *((_DWORD *)this + 10) = 8;
      return 1;
    case 84:
      *((_DWORD *)this + 10) = 13;
      return 1;
    case 104:
      v4 = (_BYTE *)*((_DWORD *)this + 3);
      if ( *v4 == 104 )
      {
        *((_DWORD *)this + 3) = v4 + 1;
        v5 = 1;
LABEL_46:
        *((_DWORD *)this + 10) = v5;
        return 1;
      }
      v9 = 2;
LABEL_45:
      v5 = v9;
      goto LABEL_46;
  }
  return 1;
}
// 100338B1: using guessed type int __thiscall sub_100338B1(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10066B56) --------------------------------------------------------
char __thiscall sub_10066B56(_BYTE *this)
{
  int v1; // esi
  int v3; // eax
  _WORD *v4; // eax
  signed int v5; // eax
  unsigned __int16 *v6; // esi
  int v7; // eax
  _WORD *v8; // eax
  signed int v9; // [esp-4h] [ebp-8h]

  v1 = *((unsigned __int16 *)this + 23);
  if ( v1 == 70 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 7;
      return sub_1003367C(this);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 8;
LABEL_7:
      v3 = *((_DWORD *)this + 2) + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      sub_10034B08(0, 0, 0, 0, 0, *((_DWORD *)this + 2));
      return 0;
    }
    return 1;
  }
  if ( *((_DWORD *)this + 10) )
    goto LABEL_7;
  if ( (unsigned __int16)v1 > 0x6Au )
  {
    if ( (_WORD)v1 != 108 )
    {
      switch ( v1 )
      {
        case 116:
          *((_DWORD *)this + 10) = 7;
          break;
        case 119:
          *((_DWORD *)this + 10) = 12;
          break;
        case 122:
          *((_DWORD *)this + 10) = 6;
          break;
      }
      return 1;
    }
    v8 = (_WORD *)*((_DWORD *)this + 3);
    if ( *v8 == 108 )
    {
      *((_DWORD *)this + 3) = v8 + 1;
      v9 = 4;
    }
    else
    {
      v9 = 3;
    }
    goto LABEL_44;
  }
  if ( (_WORD)v1 == 106 )
  {
    *((_DWORD *)this + 10) = 5;
    return 1;
  }
  switch ( v1 )
  {
    case 73:
      v6 = (unsigned __int16 *)*((_DWORD *)this + 3);
      v7 = *v6;
      if ( v7 != 51 || v6[1] != 50 )
      {
        if ( v7 == 54 )
        {
          if ( v6[1] == 52 )
          {
            *((_DWORD *)this + 10) = 11;
            *((_DWORD *)this + 3) = v6 + 2;
          }
        }
        else if ( v7 == 100 || v7 == 105 || v7 == 111 || v7 == 117 || v7 == 120 || v7 == 88 )
        {
          *((_DWORD *)this + 10) = 9;
        }
      }
      else
      {
        *((_DWORD *)this + 10) = 10;
        *((_DWORD *)this + 3) = v6 + 2;
      }
      return 1;
    case 76:
      *((_DWORD *)this + 10) = 8;
      return 1;
    case 84:
      *((_DWORD *)this + 10) = 13;
      return 1;
  }
  if ( (_WORD)v1 == 104 )
  {
    v4 = (_WORD *)*((_DWORD *)this + 3);
    if ( *v4 == 104 )
    {
      *((_DWORD *)this + 3) = v4 + 1;
      v5 = 1;
LABEL_45:
      *((_DWORD *)this + 10) = v5;
      return 1;
    }
    v9 = 2;
LABEL_44:
    v5 = v9;
    goto LABEL_45;
  }
  return 1;
}
// 1003367C: using guessed type int __thiscall sub_1003367C(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10066D42) --------------------------------------------------------
char __thiscall sub_10066D42(_BYTE *this)
{
  int v1; // esi
  int v3; // eax
  _WORD *v4; // eax
  signed int v5; // eax
  unsigned __int16 *v6; // esi
  int v7; // eax
  _WORD *v8; // eax
  signed int v9; // [esp-4h] [ebp-8h]

  v1 = *((unsigned __int16 *)this + 23);
  if ( v1 == 70 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 7;
      return sub_100355CB(this);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 8;
LABEL_7:
      v3 = *((_DWORD *)this + 2) + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      sub_10034B08(0, 0, 0, 0, 0, *((_DWORD *)this + 2));
      return 0;
    }
    return 1;
  }
  if ( *((_DWORD *)this + 10) )
    goto LABEL_7;
  if ( (unsigned __int16)v1 > 0x6Au )
  {
    if ( (_WORD)v1 != 108 )
    {
      switch ( v1 )
      {
        case 116:
          *((_DWORD *)this + 10) = 7;
          break;
        case 119:
          *((_DWORD *)this + 10) = 12;
          break;
        case 122:
          *((_DWORD *)this + 10) = 6;
          break;
      }
      return 1;
    }
    v8 = (_WORD *)*((_DWORD *)this + 3);
    if ( *v8 == 108 )
    {
      *((_DWORD *)this + 3) = v8 + 1;
      v9 = 4;
    }
    else
    {
      v9 = 3;
    }
    goto LABEL_44;
  }
  if ( (_WORD)v1 == 106 )
  {
    *((_DWORD *)this + 10) = 5;
    return 1;
  }
  switch ( v1 )
  {
    case 73:
      v6 = (unsigned __int16 *)*((_DWORD *)this + 3);
      v7 = *v6;
      if ( v7 != 51 || v6[1] != 50 )
      {
        if ( v7 == 54 )
        {
          if ( v6[1] == 52 )
          {
            *((_DWORD *)this + 10) = 11;
            *((_DWORD *)this + 3) = v6 + 2;
          }
        }
        else if ( v7 == 100 || v7 == 105 || v7 == 111 || v7 == 117 || v7 == 120 || v7 == 88 )
        {
          *((_DWORD *)this + 10) = 9;
        }
      }
      else
      {
        *((_DWORD *)this + 10) = 10;
        *((_DWORD *)this + 3) = v6 + 2;
      }
      return 1;
    case 76:
      *((_DWORD *)this + 10) = 8;
      return 1;
    case 84:
      *((_DWORD *)this + 10) = 13;
      return 1;
  }
  if ( (_WORD)v1 == 104 )
  {
    v4 = (_WORD *)*((_DWORD *)this + 3);
    if ( *v4 == 104 )
    {
      *((_DWORD *)this + 3) = v4 + 1;
      v5 = 1;
LABEL_45:
      *((_DWORD *)this + 10) = v5;
      return 1;
    }
    v9 = 2;
LABEL_44:
    v5 = v9;
    goto LABEL_45;
  }
  return 1;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100355CB: using guessed type int __thiscall sub_100355CB(_DWORD);

//----- (10066F2E) --------------------------------------------------------
char __thiscall sub_10066F2E(_BYTE *this)
{
  int v1; // esi
  int v3; // eax
  _WORD *v4; // eax
  signed int v5; // eax
  unsigned __int16 *v6; // esi
  int v7; // eax
  _WORD *v8; // eax
  signed int v9; // [esp-4h] [ebp-8h]

  v1 = *((unsigned __int16 *)this + 23);
  if ( v1 == 70 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 7;
      return sub_10034293(this);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 8;
LABEL_7:
      v3 = *((_DWORD *)this + 2) + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      sub_10034B08(0, 0, 0, 0, 0, *((_DWORD *)this + 2));
      return 0;
    }
    return 1;
  }
  if ( *((_DWORD *)this + 10) )
    goto LABEL_7;
  if ( (unsigned __int16)v1 > 0x6Au )
  {
    if ( (_WORD)v1 != 108 )
    {
      switch ( v1 )
      {
        case 116:
          *((_DWORD *)this + 10) = 7;
          break;
        case 119:
          *((_DWORD *)this + 10) = 12;
          break;
        case 122:
          *((_DWORD *)this + 10) = 6;
          break;
      }
      return 1;
    }
    v8 = (_WORD *)*((_DWORD *)this + 3);
    if ( *v8 == 108 )
    {
      *((_DWORD *)this + 3) = v8 + 1;
      v9 = 4;
    }
    else
    {
      v9 = 3;
    }
    goto LABEL_44;
  }
  if ( (_WORD)v1 == 106 )
  {
    *((_DWORD *)this + 10) = 5;
    return 1;
  }
  switch ( v1 )
  {
    case 73:
      v6 = (unsigned __int16 *)*((_DWORD *)this + 3);
      v7 = *v6;
      if ( v7 != 51 || v6[1] != 50 )
      {
        if ( v7 == 54 )
        {
          if ( v6[1] == 52 )
          {
            *((_DWORD *)this + 10) = 11;
            *((_DWORD *)this + 3) = v6 + 2;
          }
        }
        else if ( v7 == 100 || v7 == 105 || v7 == 111 || v7 == 117 || v7 == 120 || v7 == 88 )
        {
          *((_DWORD *)this + 10) = 9;
        }
      }
      else
      {
        *((_DWORD *)this + 10) = 10;
        *((_DWORD *)this + 3) = v6 + 2;
      }
      return 1;
    case 76:
      *((_DWORD *)this + 10) = 8;
      return 1;
    case 84:
      *((_DWORD *)this + 10) = 13;
      return 1;
  }
  if ( (_WORD)v1 == 104 )
  {
    v4 = (_WORD *)*((_DWORD *)this + 3);
    if ( *v4 == 104 )
    {
      *((_DWORD *)this + 3) = v4 + 1;
      v5 = 1;
LABEL_45:
      *((_DWORD *)this + 10) = v5;
      return 1;
    }
    v9 = 2;
LABEL_44:
    v5 = v9;
    goto LABEL_45;
  }
  return 1;
}
// 10034293: using guessed type int __thiscall sub_10034293(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1006711A) --------------------------------------------------------
char __thiscall sub_1006711A(_BYTE *this)
{
  int v1; // esi
  int v3; // eax
  _WORD *v4; // eax
  signed int v5; // eax
  unsigned __int16 *v6; // esi
  int v7; // eax
  _WORD *v8; // eax
  signed int v9; // [esp-4h] [ebp-8h]

  v1 = *((unsigned __int16 *)this + 23);
  if ( v1 == 70 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 7;
      return sub_100345EA(this);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 8;
LABEL_7:
      v3 = *((_DWORD *)this + 2) + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      sub_10034B08(0, 0, 0, 0, 0, *((_DWORD *)this + 2));
      return 0;
    }
    return 1;
  }
  if ( *((_DWORD *)this + 10) )
    goto LABEL_7;
  if ( (unsigned __int16)v1 > 0x6Au )
  {
    if ( (_WORD)v1 != 108 )
    {
      switch ( v1 )
      {
        case 116:
          *((_DWORD *)this + 10) = 7;
          break;
        case 119:
          *((_DWORD *)this + 10) = 12;
          break;
        case 122:
          *((_DWORD *)this + 10) = 6;
          break;
      }
      return 1;
    }
    v8 = (_WORD *)*((_DWORD *)this + 3);
    if ( *v8 == 108 )
    {
      *((_DWORD *)this + 3) = v8 + 1;
      v9 = 4;
    }
    else
    {
      v9 = 3;
    }
    goto LABEL_44;
  }
  if ( (_WORD)v1 == 106 )
  {
    *((_DWORD *)this + 10) = 5;
    return 1;
  }
  switch ( v1 )
  {
    case 73:
      v6 = (unsigned __int16 *)*((_DWORD *)this + 3);
      v7 = *v6;
      if ( v7 != 51 || v6[1] != 50 )
      {
        if ( v7 == 54 )
        {
          if ( v6[1] == 52 )
          {
            *((_DWORD *)this + 10) = 11;
            *((_DWORD *)this + 3) = v6 + 2;
          }
        }
        else if ( v7 == 100 || v7 == 105 || v7 == 111 || v7 == 117 || v7 == 120 || v7 == 88 )
        {
          *((_DWORD *)this + 10) = 9;
        }
      }
      else
      {
        *((_DWORD *)this + 10) = 10;
        *((_DWORD *)this + 3) = v6 + 2;
      }
      return 1;
    case 76:
      *((_DWORD *)this + 10) = 8;
      return 1;
    case 84:
      *((_DWORD *)this + 10) = 13;
      return 1;
  }
  if ( (_WORD)v1 == 104 )
  {
    v4 = (_WORD *)*((_DWORD *)this + 3);
    if ( *v4 == 104 )
    {
      *((_DWORD *)this + 3) = v4 + 1;
      v5 = 1;
LABEL_45:
      *((_DWORD *)this + 10) = v5;
      return 1;
    }
    v9 = 2;
LABEL_44:
    v5 = v9;
    goto LABEL_45;
  }
  return 1;
}
// 100345EA: using guessed type int __thiscall sub_100345EA(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10067306) --------------------------------------------------------
char __thiscall sub_10067306(_BYTE *this)
{
  int v1; // esi
  int v3; // eax
  _WORD *v4; // eax
  signed int v5; // eax
  unsigned __int16 *v6; // esi
  int v7; // eax
  _WORD *v8; // eax
  signed int v9; // [esp-4h] [ebp-8h]

  v1 = *((unsigned __int16 *)this + 23);
  if ( v1 == 70 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 7;
      return sub_10035553(this);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 8;
LABEL_7:
      v3 = *((_DWORD *)this + 2) + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      sub_10034B08(0, 0, 0, 0, 0, *((_DWORD *)this + 2));
      return 0;
    }
    return 1;
  }
  if ( *((_DWORD *)this + 10) )
    goto LABEL_7;
  if ( (unsigned __int16)v1 > 0x6Au )
  {
    if ( (_WORD)v1 != 108 )
    {
      switch ( v1 )
      {
        case 116:
          *((_DWORD *)this + 10) = 7;
          break;
        case 119:
          *((_DWORD *)this + 10) = 12;
          break;
        case 122:
          *((_DWORD *)this + 10) = 6;
          break;
      }
      return 1;
    }
    v8 = (_WORD *)*((_DWORD *)this + 3);
    if ( *v8 == 108 )
    {
      *((_DWORD *)this + 3) = v8 + 1;
      v9 = 4;
    }
    else
    {
      v9 = 3;
    }
    goto LABEL_44;
  }
  if ( (_WORD)v1 == 106 )
  {
    *((_DWORD *)this + 10) = 5;
    return 1;
  }
  switch ( v1 )
  {
    case 73:
      v6 = (unsigned __int16 *)*((_DWORD *)this + 3);
      v7 = *v6;
      if ( v7 != 51 || v6[1] != 50 )
      {
        if ( v7 == 54 )
        {
          if ( v6[1] == 52 )
          {
            *((_DWORD *)this + 10) = 11;
            *((_DWORD *)this + 3) = v6 + 2;
          }
        }
        else if ( v7 == 100 || v7 == 105 || v7 == 111 || v7 == 117 || v7 == 120 || v7 == 88 )
        {
          *((_DWORD *)this + 10) = 9;
        }
      }
      else
      {
        *((_DWORD *)this + 10) = 10;
        *((_DWORD *)this + 3) = v6 + 2;
      }
      return 1;
    case 76:
      *((_DWORD *)this + 10) = 8;
      return 1;
    case 84:
      *((_DWORD *)this + 10) = 13;
      return 1;
  }
  if ( (_WORD)v1 == 104 )
  {
    v4 = (_WORD *)*((_DWORD *)this + 3);
    if ( *v4 == 104 )
    {
      *((_DWORD *)this + 3) = v4 + 1;
      v5 = 1;
LABEL_45:
      *((_DWORD *)this + 10) = v5;
      return 1;
    }
    v9 = 2;
LABEL_44:
    v5 = v9;
    goto LABEL_45;
  }
  return 1;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035553: using guessed type int __thiscall sub_10035553(_DWORD);

//----- (100674F2) --------------------------------------------------------
char __thiscall sub_100674F2(_BYTE *this)
{
  int v1; // esi
  int v3; // eax
  _WORD *v4; // eax
  signed int v5; // eax
  unsigned __int16 *v6; // esi
  int v7; // eax
  _WORD *v8; // eax
  signed int v9; // [esp-4h] [ebp-8h]

  v1 = *((unsigned __int16 *)this + 23);
  if ( v1 == 70 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 7;
      return sub_10033D5C(this);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( !(*(_DWORD *)this & 8) )
    {
      this[24] = 8;
LABEL_7:
      v3 = *((_DWORD *)this + 2) + 24;
      *(_BYTE *)(v3 + 4) = 1;
      *(_DWORD *)v3 = 22;
      sub_10034B08(0, 0, 0, 0, 0, *((_DWORD *)this + 2));
      return 0;
    }
    return 1;
  }
  if ( *((_DWORD *)this + 10) )
    goto LABEL_7;
  if ( (unsigned __int16)v1 > 0x6Au )
  {
    if ( (_WORD)v1 != 108 )
    {
      switch ( v1 )
      {
        case 116:
          *((_DWORD *)this + 10) = 7;
          break;
        case 119:
          *((_DWORD *)this + 10) = 12;
          break;
        case 122:
          *((_DWORD *)this + 10) = 6;
          break;
      }
      return 1;
    }
    v8 = (_WORD *)*((_DWORD *)this + 3);
    if ( *v8 == 108 )
    {
      *((_DWORD *)this + 3) = v8 + 1;
      v9 = 4;
    }
    else
    {
      v9 = 3;
    }
    goto LABEL_44;
  }
  if ( (_WORD)v1 == 106 )
  {
    *((_DWORD *)this + 10) = 5;
    return 1;
  }
  switch ( v1 )
  {
    case 73:
      v6 = (unsigned __int16 *)*((_DWORD *)this + 3);
      v7 = *v6;
      if ( v7 != 51 || v6[1] != 50 )
      {
        if ( v7 == 54 )
        {
          if ( v6[1] == 52 )
          {
            *((_DWORD *)this + 10) = 11;
            *((_DWORD *)this + 3) = v6 + 2;
          }
        }
        else if ( v7 == 100 || v7 == 105 || v7 == 111 || v7 == 117 || v7 == 120 || v7 == 88 )
        {
          *((_DWORD *)this + 10) = 9;
        }
      }
      else
      {
        *((_DWORD *)this + 10) = 10;
        *((_DWORD *)this + 3) = v6 + 2;
      }
      return 1;
    case 76:
      *((_DWORD *)this + 10) = 8;
      return 1;
    case 84:
      *((_DWORD *)this + 10) = 13;
      return 1;
  }
  if ( (_WORD)v1 == 104 )
  {
    v4 = (_WORD *)*((_DWORD *)this + 3);
    if ( *v4 == 104 )
    {
      *((_DWORD *)this + 3) = v4 + 1;
      v5 = 1;
LABEL_45:
      *((_DWORD *)this + 10) = v5;
      return 1;
    }
    v9 = 2;
LABEL_44:
    v5 = v9;
    goto LABEL_45;
  }
  return 1;
}
// 10033D5C: using guessed type int __thiscall sub_10033D5C(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100676DE) --------------------------------------------------------
char __thiscall sub_100676DE(int this)
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
  unsigned int v20; // edx
  unsigned int v21; // eax
  int v22; // edi
  char v23; // cl
  char v24; // ah
  char v25; // al
  CHAR v26; // al
  int v27; // ecx
  int v28; // ecx
  _DWORD *v29; // edi
  int v30; // eax
  int v31; // ecx
  bool v32; // sf
  unsigned __int8 v33; // of
  WCHAR *v34; // ecx
  int v35; // ST10_4
  WCHAR v36; // ax
  int v37; // eax
  int v38; // ecx
  int v39; // [esp+Ch] [ebp-1Ch]
  int v40; // [esp+10h] [ebp-18h]
  int v41; // [esp+10h] [ebp-18h]
  int v42; // [esp+10h] [ebp-18h]
  int v43; // [esp+10h] [ebp-18h]
  int v44; // [esp+14h] [ebp-14h]
  int v45; // [esp+14h] [ebp-14h]
  int v46; // [esp+14h] [ebp-14h]
  int v47; // [esp+18h] [ebp-10h]
  CHAR MultiByteStr[2]; // [esp+1Ch] [ebp-Ch]
  char v49; // [esp+1Eh] [ebp-Ah]

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
        v8 = sub_10033B1D(this);
        goto LABEL_37;
      }
      v17 = v16 - 3;
      if ( !v17 )
      {
LABEL_35:
        v8 = sub_10034BEE(this);
        goto LABEL_37;
      }
      v18 = v17 - 2;
      if ( v18 )
      {
        if ( v18 != 3 )
          return 0;
        v8 = sub_10034B6C(0);
        goto LABEL_37;
      }
LABEL_28:
      v8 = sub_10034C34(0);
      goto LABEL_37;
    }
    if ( v3 == 111 )
    {
      v8 = sub_10034FE0(this);
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
        v8 = sub_10033B59(this);
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
      v8 = sub_10035206(this);
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
      v8 = sub_10035319(this);
      goto LABEL_37;
    }
    v11 = v10 - 7;
    if ( !v11 )
      goto LABEL_10;
    if ( v11 == 2 )
    {
LABEL_15:
      v8 = sub_10035314(0);
      goto LABEL_37;
    }
    return 0;
  }
  v8 = sub_10034B6C(1);
LABEL_37:
  if ( !v8 )
    return 0;
  if ( !*(_BYTE *)(v1 + 44) )
  {
    v20 = *(_DWORD *)(v1 + 28);
    v21 = *(_DWORD *)(v1 + 28);
    *(_WORD *)MultiByteStr = 0;
    v49 = 0;
    v22 = 0;
    v47 = 0;
    if ( (v21 >> 4) & 1 )
    {
      if ( (v20 >> 6) & 1 )
      {
        MultiByteStr[0] = 45;
      }
      else
      {
        if ( !(v20 & 1) )
        {
          if ( (v20 >> 1) & 1 )
          {
            MultiByteStr[0] = 32;
            v22 = 1;
            v47 = 1;
          }
          goto LABEL_48;
        }
        MultiByteStr[0] = 43;
      }
      v22 = 1;
      v47 = 1;
    }
LABEL_48:
    v23 = *(_BYTE *)(v1 + 45);
    if ( v23 != 120 && v23 != 88 || (v24 = 1, !((v20 >> 5) & 1)) )
      v24 = 0;
    if ( v23 == 97 || (v25 = 0, v23 == 65) )
      v25 = 1;
    if ( v24 || v25 )
    {
      MultiByteStr[v22] = 48;
      if ( v23 == 88 || v23 == 65 )
        v26 = 88;
      else
        v26 = 120;
      MultiByteStr[v22 + 1] = v26;
      v22 += 2;
      v47 = v22;
    }
    v39 = *(_DWORD *)(v1 + 32) - v22 - *(_DWORD *)(v1 + 52);
    if ( !(v20 & 0xC) )
    {
      v27 = *(_DWORD *)(v1 + 8);
      v40 = *(_DWORD *)(v1 + 8);
      v44 = 0;
      if ( *(_DWORD *)(v1 + 32) - v22 - *(_DWORD *)(v1 + 52) > 0 )
      {
        while ( (unsigned __int8)sub_100338ED(32, v27) )
        {
          v28 = *(_DWORD *)(v1 + 20);
          *(_DWORD *)(v1 + 20) = v28 + 1;
          if ( v28 != -2 )
          {
            v27 = v40;
            if ( ++v44 < v39 )
              continue;
          }
          goto LABEL_69;
        }
        *(_DWORD *)(v1 + 20) = -1;
      }
    }
LABEL_69:
    v29 = (_DWORD *)(v1 + 20);
    sub_10034C7A(MultiByteStr, v47, v1 + 20, *(_DWORD *)(v1 + 8));
    if ( (*(_DWORD *)(v1 + 28) >> 3) & 1 )
    {
      if ( !((*(_DWORD *)(v1 + 28) >> 2) & 1) )
      {
        v30 = *(_DWORD *)(v1 + 8);
        v41 = *(_DWORD *)(v1 + 8);
        v45 = 0;
        if ( v39 > 0 )
        {
          while ( (unsigned __int8)sub_100338ED(48, v30) )
          {
            v31 = (*v29)++;
            if ( v31 != -2 )
            {
              v33 = __OFSUB__(v45 + 1, v39);
              v32 = v45++ + 1 - v39 < 0;
              v30 = v41;
              if ( v32 ^ v33 )
                continue;
            }
            goto LABEL_77;
          }
          *v29 = -1;
        }
      }
    }
LABEL_77:
    if ( *(_BYTE *)(v1 + 56) && *(_DWORD *)(v1 + 52) > 0 )
    {
      v34 = *(WCHAR **)(v1 + 48);
      v46 = 0;
      while ( 1 )
      {
        v35 = *(_DWORD *)(v1 + 8);
        v36 = *v34;
        v47 = 0;
        v42 = (int)(v34 + 1);
        if ( sub_10034E28((int)&v47, MultiByteStr, 6, v36, v35) || !v47 )
          break;
        sub_10034C7A(MultiByteStr, v47, v1 + 20, *(_DWORD *)(v1 + 8));
        v34 = (WCHAR *)v42;
        if ( ++v46 == *(_DWORD *)(v1 + 52) )
          goto LABEL_86;
      }
      *v29 = -1;
    }
    else
    {
      sub_10034C7A(*(_DWORD *)(v1 + 48), *(_DWORD *)(v1 + 52), v1 + 20, *(_DWORD *)(v1 + 8));
    }
LABEL_86:
    if ( *v29 >= 0 )
    {
      if ( (*(_DWORD *)(v1 + 28) >> 2) & 1 )
      {
        v37 = *(_DWORD *)(v1 + 8);
        v43 = *(_DWORD *)(v1 + 8);
        if ( v39 > 0 )
        {
          while ( (unsigned __int8)sub_100338ED(32, v37) )
          {
            v38 = (*v29)++;
            if ( v38 != -2 )
            {
              v37 = v43;
              if ( ++v2 < v39 )
                continue;
            }
            return 1;
          }
          *v29 = -1;
        }
      }
    }
  }
  return 1;
}
// 100338ED: using guessed type _DWORD __stdcall sub_100338ED(char, _DWORD);
// 10033B1D: using guessed type int __thiscall sub_10033B1D(_DWORD);
// 10033B59: using guessed type int __thiscall sub_10033B59(_DWORD);
// 10034B6C: using guessed type _DWORD __stdcall sub_10034B6C(_DWORD);
// 10034BEE: using guessed type int __thiscall sub_10034BEE(_DWORD);
// 10034C34: using guessed type _DWORD __stdcall sub_10034C34(_DWORD);
// 10034C7A: using guessed type _DWORD __stdcall sub_10034C7A(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034FE0: using guessed type int __thiscall sub_10034FE0(_DWORD);
// 10035206: using guessed type int __thiscall sub_10035206(_DWORD);
// 10035314: using guessed type _DWORD __stdcall sub_10035314(_DWORD);
// 10035319: using guessed type int __thiscall sub_10035319(_DWORD);

//----- (10067AF0) --------------------------------------------------------
char __thiscall sub_10067AF0(int this)
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
  unsigned int v20; // edx
  unsigned int v21; // eax
  int v22; // edi
  char v23; // cl
  char v24; // ah
  char v25; // al
  CHAR v26; // al
  int v27; // ecx
  int v28; // ecx
  _DWORD *v29; // edi
  int v30; // eax
  int v31; // ecx
  bool v32; // sf
  unsigned __int8 v33; // of
  WCHAR *v34; // ecx
  int v35; // ST10_4
  WCHAR v36; // ax
  int v37; // eax
  int v38; // ecx
  int v39; // [esp+Ch] [ebp-1Ch]
  int v40; // [esp+10h] [ebp-18h]
  int v41; // [esp+10h] [ebp-18h]
  int v42; // [esp+10h] [ebp-18h]
  int v43; // [esp+10h] [ebp-18h]
  int v44; // [esp+14h] [ebp-14h]
  int v45; // [esp+14h] [ebp-14h]
  int v46; // [esp+14h] [ebp-14h]
  int v47; // [esp+18h] [ebp-10h]
  CHAR MultiByteStr[2]; // [esp+1Ch] [ebp-Ch]
  char v49; // [esp+1Eh] [ebp-Ah]

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
        v8 = sub_10035EF9(this);
        goto LABEL_37;
      }
      v17 = v16 - 3;
      if ( !v17 )
      {
LABEL_35:
        v8 = sub_100339EC(this);
        goto LABEL_37;
      }
      v18 = v17 - 2;
      if ( v18 )
      {
        if ( v18 != 3 )
          return 0;
        v8 = sub_1003398D(0);
        goto LABEL_37;
      }
LABEL_28:
      v8 = sub_1003521A(0);
      goto LABEL_37;
    }
    if ( v3 == 111 )
    {
      v8 = sub_10034B3A(this);
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
        v8 = sub_10036188(this);
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
      v8 = sub_100332E9(this);
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
      v8 = sub_10035D91(this);
      goto LABEL_37;
    }
    v11 = v10 - 7;
    if ( !v11 )
      goto LABEL_10;
    if ( v11 == 2 )
    {
LABEL_15:
      v8 = sub_100356D4(0);
      goto LABEL_37;
    }
    return 0;
  }
  v8 = sub_1003398D(1);
LABEL_37:
  if ( !v8 )
    return 0;
  if ( !(unsigned __int8)sub_10034329(v1) && !*(_BYTE *)(v1 + 44) )
  {
    v20 = *(_DWORD *)(v1 + 28);
    v21 = *(_DWORD *)(v1 + 28);
    *(_WORD *)MultiByteStr = 0;
    v49 = 0;
    v22 = 0;
    v47 = 0;
    if ( (v21 >> 4) & 1 )
    {
      if ( (v20 >> 6) & 1 )
      {
        MultiByteStr[0] = 45;
      }
      else
      {
        if ( !(v20 & 1) )
        {
          if ( (v20 >> 1) & 1 )
          {
            MultiByteStr[0] = 32;
            v22 = 1;
            v47 = 1;
          }
          goto LABEL_49;
        }
        MultiByteStr[0] = 43;
      }
      v22 = 1;
      v47 = 1;
    }
LABEL_49:
    v23 = *(_BYTE *)(v1 + 45);
    if ( v23 != 120 && v23 != 88 || (v24 = 1, !((v20 >> 5) & 1)) )
      v24 = 0;
    if ( v23 == 97 || (v25 = 0, v23 == 65) )
      v25 = 1;
    if ( v24 || v25 )
    {
      MultiByteStr[v22] = 48;
      if ( v23 == 88 || v23 == 65 )
        v26 = 88;
      else
        v26 = 120;
      MultiByteStr[v22 + 1] = v26;
      v22 += 2;
      v47 = v22;
    }
    v39 = *(_DWORD *)(v1 + 32) - v22 - *(_DWORD *)(v1 + 52);
    if ( !(v20 & 0xC) )
    {
      v27 = *(_DWORD *)(v1 + 8);
      v40 = *(_DWORD *)(v1 + 8);
      v44 = 0;
      if ( *(_DWORD *)(v1 + 32) - v22 - *(_DWORD *)(v1 + 52) > 0 )
      {
        while ( (unsigned __int8)sub_100338ED(32, v27) )
        {
          v28 = *(_DWORD *)(v1 + 20);
          *(_DWORD *)(v1 + 20) = v28 + 1;
          if ( v28 != -2 )
          {
            v27 = v40;
            if ( ++v44 < v39 )
              continue;
          }
          goto LABEL_70;
        }
        *(_DWORD *)(v1 + 20) = -1;
      }
    }
LABEL_70:
    v29 = (_DWORD *)(v1 + 20);
    sub_10034C7A(MultiByteStr, v47, v1 + 20, *(_DWORD *)(v1 + 8));
    if ( (*(_DWORD *)(v1 + 28) >> 3) & 1 )
    {
      if ( !((*(_DWORD *)(v1 + 28) >> 2) & 1) )
      {
        v30 = *(_DWORD *)(v1 + 8);
        v41 = *(_DWORD *)(v1 + 8);
        v45 = 0;
        if ( v39 > 0 )
        {
          while ( (unsigned __int8)sub_100338ED(48, v30) )
          {
            v31 = (*v29)++;
            if ( v31 != -2 )
            {
              v33 = __OFSUB__(v45 + 1, v39);
              v32 = v45++ + 1 - v39 < 0;
              v30 = v41;
              if ( v32 ^ v33 )
                continue;
            }
            goto LABEL_78;
          }
          *v29 = -1;
        }
      }
    }
LABEL_78:
    if ( *(_BYTE *)(v1 + 56) && *(_DWORD *)(v1 + 52) > 0 )
    {
      v34 = *(WCHAR **)(v1 + 48);
      v46 = 0;
      while ( 1 )
      {
        v35 = *(_DWORD *)(v1 + 8);
        v36 = *v34;
        v47 = 0;
        v42 = (int)(v34 + 1);
        if ( sub_10034E28((int)&v47, MultiByteStr, 6, v36, v35) || !v47 )
          break;
        sub_10034C7A(MultiByteStr, v47, v1 + 20, *(_DWORD *)(v1 + 8));
        v34 = (WCHAR *)v42;
        if ( ++v46 == *(_DWORD *)(v1 + 52) )
          goto LABEL_87;
      }
      *v29 = -1;
    }
    else
    {
      sub_10034C7A(*(_DWORD *)(v1 + 48), *(_DWORD *)(v1 + 52), v1 + 20, *(_DWORD *)(v1 + 8));
    }
LABEL_87:
    if ( *v29 >= 0 )
    {
      if ( (*(_DWORD *)(v1 + 28) >> 2) & 1 )
      {
        v37 = *(_DWORD *)(v1 + 8);
        v43 = *(_DWORD *)(v1 + 8);
        if ( v39 > 0 )
        {
          while ( (unsigned __int8)sub_100338ED(32, v37) )
          {
            v38 = (*v29)++;
            if ( v38 != -2 )
            {
              v37 = v43;
              if ( ++v2 < v39 )
                continue;
            }
            return 1;
          }
          *v29 = -1;
        }
      }
    }
  }
  return 1;
}
// 100332E9: using guessed type int __thiscall sub_100332E9(_DWORD);
// 100338ED: using guessed type _DWORD __stdcall sub_100338ED(char, _DWORD);
// 1003398D: using guessed type _DWORD __stdcall sub_1003398D(_DWORD);
// 100339EC: using guessed type int __thiscall sub_100339EC(_DWORD);
// 10034329: using guessed type int __thiscall sub_10034329(_DWORD);
// 10034B3A: using guessed type int __thiscall sub_10034B3A(_DWORD);
// 10034C7A: using guessed type _DWORD __stdcall sub_10034C7A(_DWORD, _DWORD, _DWORD, _DWORD);
// 1003521A: using guessed type _DWORD __stdcall sub_1003521A(_DWORD);
// 100356D4: using guessed type _DWORD __stdcall sub_100356D4(_DWORD);
// 10035D91: using guessed type int __thiscall sub_10035D91(_DWORD);
// 10035EF9: using guessed type int __thiscall sub_10035EF9(_DWORD);
// 10036188: using guessed type int __thiscall sub_10036188(_DWORD);

//----- (10067F15) --------------------------------------------------------
char __thiscall sub_10067F15(int this)
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
  unsigned int v20; // edx
  unsigned int v21; // eax
  int v22; // edi
  char v23; // cl
  char v24; // ah
  char v25; // al
  CHAR v26; // al
  int v27; // ecx
  int v28; // ecx
  _DWORD *v29; // edi
  int v30; // eax
  int v31; // ecx
  bool v32; // sf
  unsigned __int8 v33; // of
  WCHAR *v34; // ecx
  int v35; // ST10_4
  WCHAR v36; // ax
  int v37; // eax
  int v38; // ecx
  int v39; // [esp+Ch] [ebp-1Ch]
  int v40; // [esp+10h] [ebp-18h]
  int v41; // [esp+10h] [ebp-18h]
  int v42; // [esp+10h] [ebp-18h]
  int v43; // [esp+10h] [ebp-18h]
  int v44; // [esp+14h] [ebp-14h]
  int v45; // [esp+14h] [ebp-14h]
  int v46; // [esp+14h] [ebp-14h]
  int v47; // [esp+18h] [ebp-10h]
  CHAR MultiByteStr[2]; // [esp+1Ch] [ebp-Ch]
  char v49; // [esp+1Eh] [ebp-Ah]

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
        v8 = sub_100330CD(this);
        goto LABEL_37;
      }
      v17 = v16 - 3;
      if ( !v17 )
      {
LABEL_35:
        v8 = sub_10033A00(this);
        goto LABEL_37;
      }
      v18 = v17 - 2;
      if ( v18 )
      {
        if ( v18 != 3 )
          return 0;
        v8 = sub_100358A5(0);
        goto LABEL_37;
      }
LABEL_28:
      v8 = sub_1003477A(0);
      goto LABEL_37;
    }
    if ( v3 == 111 )
    {
      v8 = sub_10033CE9(this);
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
        v8 = sub_10034EE6(this);
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
      v8 = sub_10034860(this);
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
      v8 = sub_100337C6(this);
      goto LABEL_37;
    }
    v11 = v10 - 7;
    if ( !v11 )
      goto LABEL_10;
    if ( v11 == 2 )
    {
LABEL_15:
      v8 = sub_1003391A(0);
      goto LABEL_37;
    }
    return 0;
  }
  v8 = sub_100358A5(1);
LABEL_37:
  if ( !v8 )
    return 0;
  if ( !*(_BYTE *)(v1 + 44) )
  {
    v20 = *(_DWORD *)(v1 + 28);
    v21 = *(_DWORD *)(v1 + 28);
    *(_WORD *)MultiByteStr = 0;
    v49 = 0;
    v22 = 0;
    v47 = 0;
    if ( (v21 >> 4) & 1 )
    {
      if ( (v20 >> 6) & 1 )
      {
        MultiByteStr[0] = 45;
      }
      else
      {
        if ( !(v20 & 1) )
        {
          if ( (v20 >> 1) & 1 )
          {
            MultiByteStr[0] = 32;
            v22 = 1;
            v47 = 1;
          }
          goto LABEL_48;
        }
        MultiByteStr[0] = 43;
      }
      v22 = 1;
      v47 = 1;
    }
LABEL_48:
    v23 = *(_BYTE *)(v1 + 45);
    if ( v23 != 120 && v23 != 88 || (v24 = 1, !((v20 >> 5) & 1)) )
      v24 = 0;
    if ( v23 == 97 || (v25 = 0, v23 == 65) )
      v25 = 1;
    if ( v24 || v25 )
    {
      MultiByteStr[v22] = 48;
      if ( v23 == 88 || v23 == 65 )
        v26 = 88;
      else
        v26 = 120;
      MultiByteStr[v22 + 1] = v26;
      v22 += 2;
      v47 = v22;
    }
    v39 = *(_DWORD *)(v1 + 32) - v22 - *(_DWORD *)(v1 + 52);
    if ( !(v20 & 0xC) )
    {
      v27 = *(_DWORD *)(v1 + 8);
      v40 = *(_DWORD *)(v1 + 8);
      v44 = 0;
      if ( *(_DWORD *)(v1 + 32) - v22 - *(_DWORD *)(v1 + 52) > 0 )
      {
        while ( (unsigned __int8)sub_100338ED(32, v27) )
        {
          v28 = *(_DWORD *)(v1 + 20);
          *(_DWORD *)(v1 + 20) = v28 + 1;
          if ( v28 != -2 )
          {
            v27 = v40;
            if ( ++v44 < v39 )
              continue;
          }
          goto LABEL_69;
        }
        *(_DWORD *)(v1 + 20) = -1;
      }
    }
LABEL_69:
    v29 = (_DWORD *)(v1 + 20);
    sub_10034C7A(MultiByteStr, v47, v1 + 20, *(_DWORD *)(v1 + 8));
    if ( (*(_DWORD *)(v1 + 28) >> 3) & 1 )
    {
      if ( !((*(_DWORD *)(v1 + 28) >> 2) & 1) )
      {
        v30 = *(_DWORD *)(v1 + 8);
        v41 = *(_DWORD *)(v1 + 8);
        v45 = 0;
        if ( v39 > 0 )
        {
          while ( (unsigned __int8)sub_100338ED(48, v30) )
          {
            v31 = (*v29)++;
            if ( v31 != -2 )
            {
              v33 = __OFSUB__(v45 + 1, v39);
              v32 = v45++ + 1 - v39 < 0;
              v30 = v41;
              if ( v32 ^ v33 )
                continue;
            }
            goto LABEL_77;
          }
          *v29 = -1;
        }
      }
    }
LABEL_77:
    if ( *(_BYTE *)(v1 + 56) && *(_DWORD *)(v1 + 52) > 0 )
    {
      v34 = *(WCHAR **)(v1 + 48);
      v46 = 0;
      while ( 1 )
      {
        v35 = *(_DWORD *)(v1 + 8);
        v36 = *v34;
        v47 = 0;
        v42 = (int)(v34 + 1);
        if ( sub_10034E28((int)&v47, MultiByteStr, 6, v36, v35) || !v47 )
          break;
        sub_10034C7A(MultiByteStr, v47, v1 + 20, *(_DWORD *)(v1 + 8));
        v34 = (WCHAR *)v42;
        if ( ++v46 == *(_DWORD *)(v1 + 52) )
          goto LABEL_86;
      }
      *v29 = -1;
    }
    else
    {
      sub_10034C7A(*(_DWORD *)(v1 + 48), *(_DWORD *)(v1 + 52), v1 + 20, *(_DWORD *)(v1 + 8));
    }
LABEL_86:
    if ( *v29 >= 0 )
    {
      if ( (*(_DWORD *)(v1 + 28) >> 2) & 1 )
      {
        v37 = *(_DWORD *)(v1 + 8);
        v43 = *(_DWORD *)(v1 + 8);
        if ( v39 > 0 )
        {
          while ( (unsigned __int8)sub_100338ED(32, v37) )
          {
            v38 = (*v29)++;
            if ( v38 != -2 )
            {
              v37 = v43;
              if ( ++v2 < v39 )
                continue;
            }
            return 1;
          }
          *v29 = -1;
        }
      }
    }
  }
  return 1;
}
// 100330CD: using guessed type int __thiscall sub_100330CD(_DWORD);
// 100337C6: using guessed type int __thiscall sub_100337C6(_DWORD);
// 100338ED: using guessed type _DWORD __stdcall sub_100338ED(char, _DWORD);
// 1003391A: using guessed type _DWORD __stdcall sub_1003391A(_DWORD);
// 10033A00: using guessed type int __thiscall sub_10033A00(_DWORD);
// 10033CE9: using guessed type int __thiscall sub_10033CE9(_DWORD);
// 1003477A: using guessed type _DWORD __stdcall sub_1003477A(_DWORD);
// 10034860: using guessed type int __thiscall sub_10034860(_DWORD);
// 10034C7A: using guessed type _DWORD __stdcall sub_10034C7A(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034EE6: using guessed type int __thiscall sub_10034EE6(_DWORD);
// 100358A5: using guessed type _DWORD __stdcall sub_100358A5(_DWORD);
