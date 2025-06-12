
//----- (1003E7A0) --------------------------------------------------------
__int64 __cdecl sub_1003E7A0(int a1, LPCWSTR lpAppName, LPCWSTR lpKeyName, INT nDefault)
{
  int v4; // eax
  int v5; // edx
  __int64 v6; // ST08_8
  WCHAR Buffer; // [esp+190h] [ebp-210h]
  int savedregs; // [esp+3A0h] [ebp+0h]

  sub_10035BE3(&unk_100B4002);
  GetCurrentDirectoryW(0x104u, &Buffer);
  sub_10034F2C();
  sub_1003407C(&Buffer, L"\\");
  sub_1003407C(&Buffer, a1);
  GetPrivateProfileIntW(lpAppName, lpKeyName, nDefault, &Buffer);
  v4 = sub_10034F2C();
  sub_10034A5E(&savedregs, &dword_1003E868, v4, v5);
  return v6;
}
// 1003407C: using guessed type _DWORD __cdecl sub_1003407C(_DWORD, _DWORD);
// 10034A5E: using guessed type int __fastcall sub_10034A5E(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034F2C: using guessed type int sub_10034F2C(void);
// 10035BE3: using guessed type int __thiscall sub_10035BE3(_DWORD);
// 1003E868: using guessed type int dword_1003E868;
// 100A3114: using guessed type wchar_t asc_100A3114[2];

//----- (1003E9F0) --------------------------------------------------------
__int64 __stdcall StartAddress_0(int a1)
{
  float v1; // xmm0_4
  int v2; // edx
  __int64 v3; // ST08_8
  signed int v5; // [esp+Ch] [ebp-ECh]
  signed int v6; // [esp+Ch] [ebp-ECh]
  signed int v7; // [esp+Ch] [ebp-ECh]
  signed int v8; // [esp+Ch] [ebp-ECh]
  int v9; // [esp+D4h] [ebp-24h]
  int v10; // [esp+E0h] [ebp-18h]
  int v11; // [esp+ECh] [ebp-Ch]
  int savedregs; // [esp+F8h] [ebp+0h]

  sub_10035BE3(&unk_100B4002);
  v11 = sub_100362C3((int)L"HUD.ini", "絒O\\", "絒O\\Lub桯", 0);
  dword_100B00E8 = sub_100362C3((int)L"HUD.ini", "絒O\\", &word_100A367C, 1066);
  if ( dword_100B00E8 >= 800 )
    v5 = dword_100B00E8;
  else
    v5 = 800;
  dword_100B00E8 = v5;
  dword_100B014C = sub_100362C3((int)L"HUD.ini", "絒O\\", &word_100A3688, 1365);
  if ( dword_100B014C >= 800 )
    v6 = dword_100B014C;
  else
    v6 = 800;
  dword_100B014C = v6;
  dword_100B0150 = sub_100362C3((int)L"HUD.ini", "絒O\\", &word_100A3698, 1706);
  if ( dword_100B0150 >= 800 )
    v7 = dword_100B0150;
  else
    v7 = 800;
  dword_100B0150 = v7;
  dword_100B0154 = sub_100362C3((int)L"HUD.ini", "絒O\\", "篘ir-N縹", 533);
  if ( dword_100B0150 >= 400 )
    v8 = dword_100B0154;
  else
    v8 = 400;
  dword_100B0154 = v8;
  dword_100B1128 = (dword_100B00E8 - 800) / 2;
  if ( v11 > 0 )
  {
    sub_10034D9C(17889363, &sub_10036174);
    sub_10034D9C(17889332, &sub_10034E23);
    sub_10034D9C(17943880, &sub_100337C1);
    sub_10034D9C(6959035, &sub_100360E3);
    sub_10034D9C(6541333, sub_1003476B);
    sub_1003504E(17880148, &sub_100335BE);
    sub_10034D9C(16246337, &sub_10033BD1);
    sub_10034D9C(16246981, &sub_10033BD1);
    sub_10034D9C(17857857, &sub_10033BD1);
    sub_10034D9C(17857974, &sub_10033BD1);
    sub_10034D9C(17858133, &sub_1003599F);
    sub_10034D9C(7292317, &sub_1003418F);
    sub_10034D9C(4547237, &sub_1003517A);
    sub_10034D9C(4547342, &sub_1003517A);
    sub_10034D9C(14874283, sub_1003540E);
    sub_10034D9C(14874366, sub_1003540E);
    sub_10034D9C(16935672, sub_100342E3);
  }
  sub_10034851(4555005, (int)&dword_100B0154, 4);
  sub_10034851(4555229, (int)&dword_100B0154, 4);
  sub_10034851(6358007, (int)&dword_100B0154, 4);
  sub_10034851(6358121, (int)&dword_100B0154, 4);
  sub_10034851(6358359, (int)&dword_100B0154, 4);
  sub_10034851(6358542, (int)&dword_100B0154, 4);
  sub_10034851(6544440, (int)&dword_100B0154, 4);
  sub_10034851(8217089, (int)&dword_100B0154, 4);
  sub_10034851(15824090, (int)&dword_100B0154, 4);
  sub_10034851(16249496, (int)&dword_100B0154, 4);
  sub_10034851(17857928, (int)&dword_100B0154, 4);
  MEMORY[0x8E5A2F] = 2 * dword_100B1128 + 675;
  MEMORY[0x8E5B12] = 2 * dword_100B1128 + 670;
  MEMORY[0x8E33E3] = 2 * dword_100B1128 + 728;
  MEMORY[0x8E3439] = 2 * dword_100B1128 + 711;
  MEMORY[0x8E3473] = 2 * dword_100B1128 + 711;
  MEMORY[0x8E34D1] = 2 * dword_100B1128 + 767;
  MEMORY[0x8E363C] = 2 * dword_100B1128 + 766;
  MEMORY[0x8E3704] = 2 * dword_100B1128 + 737;
  MEMORY[0x8E3759] = 2 * dword_100B1128 + 716;
  MEMORY[0x8E3785] = 2 * dword_100B1128 + 716;
  MEMORY[0x8E3821] = 2 * dword_100B1128 + 765;
  MEMORY[0x8E3876] = 2 * dword_100B1128 + 744;
  MEMORY[0x8E38A2] = 2 * dword_100B1128 + 744;
  MEMORY[0x8E3A13] = 2 * dword_100B1128 + 753;
  MEMORY[0x8E3A69] = 2 * dword_100B1128 + 736;
  MEMORY[0x8E3A88] = 2 * dword_100B1128 + 736;
  MEMORY[0x8E3BE3] = 2 * dword_100B1128 + 753;
  MEMORY[0x8E3C39] = 2 * dword_100B1128 + 736;
  MEMORY[0x8E3C55] = 2 * dword_100B1128 + 736;
  sub_10034851(4436143, (int)&dword_100B00E8, 4);
  sub_10034851(4436538, (int)&dword_100B00E8, 4);
  sub_10034851(4919896, (int)&dword_100B00E8, 4);
  sub_10034851(5078524, (int)&dword_100B00E8, 4);
  sub_10034851(5078529, (int)&dword_100B00E8, 4);
  sub_10034851(5079081, (int)&dword_100B00E8, 4);
  sub_10034851(5079131, (int)&dword_100B00E8, 4);
  sub_10034851(5588206, (int)&dword_100B00E8, 4);
  sub_10034851(5588862, (int)&dword_100B00E8, 4);
  sub_10034851(6473786, (int)&dword_100B00E8, 4);
  sub_10034851(6473799, (int)&dword_100B00E8, 4);
  sub_10034851(6473819, (int)&dword_100B00E8, 4);
  sub_10034851(6474891, (int)&dword_100B00E8, 4);
  sub_10034851(6634982, (int)&dword_100B00E8, 4);
  sub_10034851(6635001, (int)&dword_100B00E8, 4);
  sub_10034851(7291787, (int)&dword_100B00E8, 4);
  sub_10034851(7291794, (int)&dword_100B00E8, 4);
  sub_10034851(7291852, (int)&dword_100B00E8, 4);
  sub_10034851(7313913, (int)&dword_100B00E8, 4);
  sub_10034851(8182071, (int)&dword_100B00E8, 4);
  sub_10034851(8185200, (int)&dword_100B00E8, 4);
  sub_10034851(8185560, (int)&dword_100B00E8, 4);
  sub_10034851(8185614, (int)&dword_100B00E8, 4);
  sub_10034851(8186183, (int)&dword_100B00E8, 4);
  sub_10034851(8205313, (int)&dword_100B00E8, 4);
  sub_10034851(8216809, (int)&dword_100B00E8, 4);
  sub_10034851(9301984, (int)&dword_100B00E8, 4);
  sub_10034851(9305991, (int)&dword_100B00E8, 4);
  sub_10034851(9313714, (int)&dword_100B00E8, 4);
  sub_10034851(9348137, (int)&dword_100B00E8, 4);
  sub_10034851(9909708, (int)&dword_100B00E8, 4);
  sub_10034851(15129284, (int)&dword_100B00E8, 4);
  sub_10034851(15129470, (int)&dword_100B00E8, 4);
  sub_10034851(15129946, (int)&dword_100B00E8, 4);
  sub_10034851(15130080, (int)&dword_100B00E8, 4);
  sub_10034851(15130238, (int)&dword_100B00E8, 4);
  sub_10034851(15795180, (int)&dword_100B00E8, 4);
  sub_10034851(15797383, (int)&dword_100B00E8, 4);
  sub_10034851(15814038, (int)&dword_100B00E8, 4);
  sub_10034851(15885080, (int)&dword_100B00E8, 4);
  sub_10034851(15894862, (int)&dword_100B00E8, 4);
  sub_10034851(16010866, (int)&dword_100B00E8, 4);
  sub_10034851(16122771, (int)&dword_100B00E8, 4);
  sub_10034851(16125112, (int)&dword_100B00E8, 4);
  sub_10034851(16179941, (int)&dword_100B00E8, 4);
  sub_10034851(16344581, (int)&dword_100B00E8, 4);
  sub_10034851(16344600, (int)&dword_100B00E8, 4);
  sub_10034851(16524643, (int)&dword_100B00E8, 4);
  sub_10034851(16769597, (int)&dword_100B00E8, 4);
  sub_10034851(16777782, (int)&dword_100B00E8, 4);
  sub_10034851(16937991, (int)&dword_100B00E8, 4);
  sub_10034851(16938137, (int)&dword_100B00E8, 4);
  sub_10034851(16961403, (int)&dword_100B00E8, 4);
  sub_10034851(16962644, (int)&dword_100B00E8, 4);
  sub_10034851(16962659, (int)&dword_100B00E8, 4);
  sub_10034851(16981151, (int)&dword_100B00E8, 4);
  sub_10034851(16981281, (int)&dword_100B00E8, 4);
  sub_10034851(16981303, (int)&dword_100B00E8, 4);
  sub_10034851(16982413, (int)&dword_100B00E8, 4);
  sub_10034851(16982428, (int)&dword_100B00E8, 4);
  sub_10034851(17159404, (int)&dword_100B00E8, 4);
  sub_10034851(17159434, (int)&dword_100B00E8, 4);
  sub_10034851(17805682, (int)&dword_100B00E8, 4);
  sub_10034851(17858093, (int)&dword_100B00E8, 4);
  sub_10034851(17890417, (int)&dword_100B00E8, 4);
  sub_10034851(18515514, (int)&dword_100B00E8, 4);
  sub_10034851(18565988, (int)&dword_100B00E8, 4);
  sub_10034851(18603830, (int)&dword_100B00E8, 4);
  sub_10034851(18603837, (int)&dword_100B00E8, 4);
  sub_10034851(18629479, (int)&dword_100B00E8, 4);
  sub_10034851(18635532, (int)&dword_100B00E8, 4);
  sub_10034851(18635883, (int)&dword_100B00E8, 4);
  sub_10034851(18666970, (int)&dword_100B00E8, 4);
  sub_10034851(18666977, (int)&dword_100B00E8, 4);
  sub_10034851(18899391, (int)&dword_100B00E8, 4);
  sub_10034851(18512482, (int)&dword_100B00E8, 4);
  sub_10034851(18512489, (int)&dword_100B00E8, 4);
  sub_10034851(18514231, (int)&dword_100B00E8, 4);
  sub_10034851(18514268, (int)&dword_100B00E8, 4);
  sub_10034851(6732331, (int)&dword_100B00E8, 4);
  sub_10034851(6732363, (int)&dword_100B00E8, 4);
  sub_10034851(6732119, (int)&dword_100B00E8, 4);
  sub_10034851(6732127, (int)&dword_100B00E8, 4);
  sub_10034851(9082618, (int)&dword_100B00E8, 4);
  sub_10034851(16484402, (int)&dword_100B00E8, 4);
  sub_10034851(16600382, (int)&dword_100B00E8, 4);
  sub_10034851(16600294, (int)&dword_100B00E8, 4);
  sub_10034851(16484314, (int)&dword_100B00E8, 4);
  sub_10034851(18507747, (int)&dword_100B00E8, 4);
  sub_10034851(18777325, (int)&dword_100B00E8, 4);
  sub_10034851(4365334, (int)&dword_100B00E8, 4);
  sub_10034851(4404735, (int)&dword_100B00E8, 4);
  sub_10034851(4419022, (int)&dword_100B00E8, 4);
  sub_10034851(4776090, (int)&dword_100B00E8, 4);
  sub_10034851(4784986, (int)&dword_100B00E8, 4);
  sub_10034851(4921482, (int)&dword_100B00E8, 4);
  sub_10034851(4944650, (int)&dword_100B00E8, 4);
  sub_10034851(5271921, (int)&dword_100B00E8, 4);
  sub_10034851(6548400, (int)&dword_100B00E8, 4);
  sub_10034851(6548412, (int)&dword_100B00E8, 4);
  sub_10034851(6647801, (int)&dword_100B00E8, 4);
  sub_10034851(6648133, (int)&dword_100B00E8, 4);
  sub_10034851(6759072, (int)&dword_100B00E8, 4);
  sub_10034851(10670409, (int)&dword_100B00E8, 4);
  sub_10034851(11253282, (int)&dword_100B00E8, 4);
  sub_10034851(16549531, (int)&dword_100B00E8, 4);
  sub_10034851(16550330, (int)&dword_100B00E8, 4);
  sub_10034851(16819394, (int)&dword_100B00E8, 4);
  sub_10034851(16831059, (int)&dword_100B00E8, 4);
  sub_10034851(16861939, (int)&dword_100B00E8, 4);
  sub_10034851(16956194, (int)&dword_100B00E8, 4);
  sub_10034851(16966870, (int)&dword_100B00E8, 4);
  sub_10034851(17130376, (int)&dword_100B00E8, 4);
  sub_10034851(17133058, (int)&dword_100B00E8, 4);
  sub_10034851(17277298, (int)&dword_100B00E8, 4);
  sub_10034851(17277539, (int)&dword_100B00E8, 4);
  sub_10034851(17651883, (int)&dword_100B00E8, 4);
  sub_10034851(17652051, (int)&dword_100B00E8, 4);
  sub_10034851(17652118, (int)&dword_100B00E8, 4);
  sub_10034851(17666499, (int)&dword_100B00E8, 4);
  sub_10034851(17724060, (int)&dword_100B00E8, 4);
  sub_10034851(17766916, (int)&dword_100B00E8, 4);
  sub_10034851(17807750, (int)&dword_100B00E8, 4);
  sub_10034851(17904519, (int)&dword_100B00E8, 4);
  MEMORY[0x102C414] = dword_100B00E8;
  MEMORY[0x104CEC3] = dword_100B00E8;
  MEMORY[0x104DB52] = dword_100B00E8;
  MEMORY[0x1053FBC] = dword_100B00E8;
  MEMORY[0x10566E1] = dword_100B00E8;
  MEMORY[0x455EB7] = 883;
  MEMORY[0x455F44] = 883;
  MEMORY[0x4BD770] = 883;
  MEMORY[0x4C629B] = 938;
  MEMORY[0x4C62CD] = 1076;
  MEMORY[0x4CE260] = 576;
  MEMORY[0x4CE257] = 144;
  MEMORY[0x4D7E35] = 1066;
  MEMORY[0x4D7E3A] = -1066;
  MEMORY[0x4DA861] = 328;
  MEMORY[0x4DA87D] = 495;
  MEMORY[0x612E40] = 658;
  MEMORY[0x6554B2] = 419;
  MEMORY[0x6A3517] = 1031;
  MEMORY[0x6F45FB] = 504;
  MEMORY[0x6F4683] = 286;
  MEMORY[0x7CE26A] = 583;
  MEMORY[0x7CE26F] = 483;
  MEMORY[0x8DFFF0] = 367;
  MEMORY[0x8E001C] = 367;
  MEMORY[0xE7B435] = 774;
  MEMORY[0xF60B75] = -1056;
  MEMORY[0xF7DD80] = 967;
  MEMORY[0xFAC9B4] = 427;
  MEMORY[0xFAC9B9] = 174;
  MEMORY[0xFBB6E5] = 876;
  MEMORY[0x100023D] = 968;
  MEMORY[0x1004581] = 1116;
  MEMORY[0x1029F3C] = 256;
  MEMORY[0x102A216] = 256;
  MEMORY[0x10F1BB4] = 1000;
  MEMORY[0x10F1BB9] = 1000;
  MEMORY[0x10FB352] = 964;
  MEMORY[0x10FB572] = 536;
  MEMORY[0x110CE6B] = 966;
  v10 = dword_100B00E8 - 3;
  sub_10034851(16981166, (int)&v10, 4);
  v9 = dword_100B00E8 - 182;
  sub_10034851(7293532, (int)&v9, 4);
  sub_10034851(17857394, (int)&v9, 4);
  MEMORY[0x1595710] = qword_100A3858;
  MEMORY[0x1595708] = qword_100A3868;
  MEMORY[0x157DCA0] = qword_100A3878;
  MEMORY[0x1595700] = qword_100A3888;
  *(double *)&qword_100B0168 = (double)dword_100B00E8;
  MEMORY[0x1595720] = (double)dword_100B00E8;
  v1 = (double)dword_100B00E8;
  MEMORY[0x155ACDC] = LODWORD(v1);
  sub_10034851(8198814, (int)&dword_100B0154, 4);
  sub_10034851(8198824, (int)&dword_100B0154, 4);
  sub_10034851(5080206, (int)&dword_100B00E8, 4);
  sub_10034851(5080213, (int)&unk_100B0158, 4);
  sub_10034851(5080220, (int)&dword_100B014C, 4);
  sub_10034851(5080227, (int)&unk_100B015C, 4);
  sub_10034851(5080234, (int)&dword_100B0150, 4);
  sub_10034851(5080241, (int)&unk_100B0160, 4);
  sub_10034851(18851666, (int)&dword_100B00E8, 4);
  sub_10034A5E(&savedregs, &dword_1003FBE8, 0, v2);
  return v3;
}
// 100342E3: using guessed type int __stdcall sub_100342E3(int, int, int, int, int, int, int, int, int);
// 1003476B: using guessed type int sub_1003476B();
// 10034A5E: using guessed type int __fastcall sub_10034A5E(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034D9C: using guessed type _DWORD __cdecl sub_10034D9C(_DWORD, _DWORD);
// 1003504E: using guessed type _DWORD __cdecl sub_1003504E(_DWORD, _DWORD);
// 1003540E: using guessed type int __stdcall sub_1003540E(int, int, int, int, int);
// 10035BE3: using guessed type int __thiscall sub_10035BE3(_DWORD);
// 1003FBE8: using guessed type int dword_1003FBE8;
// 100A3134: using guessed type wchar_t aHudIni[8];
// 100A3858: using guessed type __int64 qword_100A3858;
// 100A3868: using guessed type __int64 qword_100A3868;
// 100A3878: using guessed type __int64 qword_100A3878;
// 100A3888: using guessed type __int64 qword_100A3888;
// 100B00E8: using guessed type int dword_100B00E8;
// 100B014C: using guessed type int dword_100B014C;
// 100B0150: using guessed type int dword_100B0150;
// 100B0154: using guessed type int dword_100B0154;
// 100B0168: using guessed type __int64 qword_100B0168;
// 100B1128: using guessed type int dword_100B1128;

//----- (100400B0) --------------------------------------------------------
_DWORD *__cdecl sub_100400B0(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_10035BE3(&unk_100B4002);
  if ( a1 && a2 )
  {
    switch ( a3 )
    {
      case 4:
        result = a1;
        *a1 = *a2;
        break;
      case 1:
        result = a1;
        *(_BYTE *)a1 = *(_BYTE *)a2;
        break;
      case 2:
        result = a1;
        *(_WORD *)a1 = *(_WORD *)a2;
        break;
      case 8:
        result = a1;
        *(_QWORD *)a1 = *(_QWORD *)a2;
        break;
      default:
        result = (_DWORD *)sub_100359C2(a1, a2, a3);
        break;
    }
  }
  return result;
}
// 100359C2: using guessed type _DWORD __cdecl sub_100359C2(_DWORD, _DWORD, _DWORD);
// 10035BE3: using guessed type int __thiscall sub_10035BE3(_DWORD);

//----- (10040190) --------------------------------------------------------
int __cdecl sub_10040190(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  sub_10035BE3(&unk_100B4002);
  return sub_10034851(
           a8
         + *(_DWORD *)(a7 + *(_DWORD *)(a6 + *(_DWORD *)(a5 + *(_DWORD *)(a4 + *(_DWORD *)(a3 + *(_DWORD *)(a2 + *a1)))))),
           a9,
           a10);
}
// 10035BE3: using guessed type int __thiscall sub_10035BE3(_DWORD);

//----- (10040260) --------------------------------------------------------
int __cdecl sub_10040260(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  sub_10035BE3(&unk_100B4002);
  return sub_10034851(
           a7 + *(_DWORD *)(a6 + *(_DWORD *)(a5 + *(_DWORD *)(a4 + *(_DWORD *)(a3 + *(_DWORD *)(a2 + *a1))))),
           a8,
           a9);
}
// 10035BE3: using guessed type int __thiscall sub_10035BE3(_DWORD);

//----- (10040470) --------------------------------------------------------
int __cdecl sub_10040470(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  sub_10035BE3(&unk_100B4002);
  return sub_10034851(a4 + *(_DWORD *)(a3 + *(_DWORD *)(a2 + *a1)), a5, a6);
}
// 10035BE3: using guessed type int __thiscall sub_10035BE3(_DWORD);

//----- (10040510) --------------------------------------------------------
int __cdecl sub_10040510(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  sub_10035BE3(&unk_100B4002);
  return sub_10034851(a3 + *(_DWORD *)(a2 + *a1), a4, a5);
}
// 10035BE3: using guessed type int __thiscall sub_10035BE3(_DWORD);

//----- (10040620) --------------------------------------------------------
int __usercall sub_10040620@<eax>(int a1@<esi>)
{
  int result; // eax

  if ( (unsigned int)(dword_100B1120 + a1) > 0x1E )
    result = dword_100B00C4();
  else
    result = dword_100B00C8();
  return result;
}
// 100B00C4: using guessed type int (*dword_100B00C4)(void);
// 100B00C8: using guessed type int (*dword_100B00C8)(void);
// 100B1120: using guessed type int dword_100B1120;
// 100B1124: using guessed type int dword_100B1124;

//----- (10040650) --------------------------------------------------------
int sub_10040650()
{
  dword_100B0004(dword_100B00B0, dword_100B00B4);
  return dword_100B00B8();
}
// 100B0004: using guessed type int (__stdcall *dword_100B0004)(_DWORD, _DWORD);
// 100B00B0: using guessed type int dword_100B00B0;
// 100B00B4: using guessed type int dword_100B00B4;
// 100B00B8: using guessed type int (*dword_100B00B8)(void);

//----- (10040670) --------------------------------------------------------
int sub_10040670()
{
  dword_100B0004(dword_100B00B0, dword_100B00B4);
  return dword_100B00BC();
}
// 100B0004: using guessed type int (__stdcall *dword_100B0004)(_DWORD, _DWORD);
// 100B00BC: using guessed type int (*dword_100B00BC)(void);

//----- (10040690) --------------------------------------------------------
int __usercall sub_10040690@<eax>(int a1@<ebx>)
{
  return dword_100B00C0(*(_DWORD *)(a1 + 300));
}
// 100B00C0: using guessed type int (__thiscall *dword_100B00C0)(_DWORD);

//----- (100406B0) --------------------------------------------------------
#error "100406BC: positive sp value has been found (funcsize=2)"

//----- (100406D0) --------------------------------------------------------
int sub_100406D0()
{
  return dword_100B0058();
}
// 100B0054: using guessed type int dword_100B0054;
// 100B0058: using guessed type int (*dword_100B0058)(void);

//----- (100406F0) --------------------------------------------------------
int sub_100406F0()
{
  return dword_100B005C();
}
// 100B0054: using guessed type int dword_100B0054;
// 100B005C: using guessed type int (*dword_100B005C)(void);

//----- (100407E0) --------------------------------------------------------
__int64 __stdcall sub_100407E0(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // eax
  int v5; // eax
  __int64 v6; // ST10_8
  int v8; // [esp+Ch] [ebp-194h]
  int v9; // [esp+D4h] [ebp-CCh]
  int v10; // [esp+E0h] [ebp-C0h]
  int v11; // [esp+ECh] [ebp-B4h]
  int v12; // [esp+F8h] [ebp-A8h]
  int v13; // [esp+104h] [ebp-9Ch]
  int v14; // [esp+110h] [ebp-90h]
  int v15; // [esp+11Ch] [ebp-84h]
  int v16; // [esp+128h] [ebp-78h]
  int v17; // [esp+134h] [ebp-6Ch]
  int v18; // [esp+140h] [ebp-60h]
  int v19; // [esp+14Ch] [ebp-54h]
  char v20; // [esp+15Bh] [ebp-45h]
  int v21; // [esp+164h] [ebp-3Ch]
  char v22; // [esp+173h] [ebp-2Dh]
  int v23; // [esp+17Ch] [ebp-24h]
  int v24; // [esp+188h] [ebp-18h]
  int v25; // [esp+194h] [ebp-Ch]
  int savedregs; // [esp+1A0h] [ebp+0h]

  sub_10035BE3(&unk_100B4002);
  v25 = sub_100362C3((int)L"HUD.ini", L"HUD", "/T(u", 0);
  v24 = sub_100362C3((int)L"HUD.ini", "絒O\\", "/T(u", 0);
  v8 = a2;
  if ( a2 == 1 )
  {
    if ( v24 > 0 )
    {
      CreateThread(0, 0, StartAddress, 0, 0, 0);
      sub_10034F2C();
    }
    if ( v25 > 0 )
    {
      dword_100B00CC = sub_100362C3((int)L"HUD.ini", L"HUD", &word_100A36BC, 765);
      dword_100B00D0 = sub_100362C3((int)L"HUD.ini", L"HUD", &word_100A36CC, 0);
      dword_100B00D8 = dword_100B00CC;
      dword_100B00DC = dword_100B00D0 + 16;
      sub_1003504E(5040491, sub_100347D4);
      sub_1003504E(5006446, sub_10033C5D);
      v23 = sub_100362C3((int)L"HUD.ini", L"HUD", "qSi枽^X", 733);
      v22 = sub_100362C3((int)L"HUD.ini", L"HUD", "qSi枽^Y", 0);
      v21 = v23 + 35;
      v20 = v22 + 30;
      sub_10034851(15128416, (int)&v23, 4);
      sub_10034851(15128414, (int)&v22, 1);
      sub_10034851(15128691, (int)&v23, 4);
      sub_10034851(15128689, (int)&v22, 1);
      sub_10034851(15128830, (int)&v23, 4);
      sub_10034851(15128828, (int)&v22, 1);
      sub_10034851(15128469, (int)&v23, 4);
      sub_10034851(15128467, (int)&v22, 1);
      sub_10034851(15128886, (int)&v23, 4);
      sub_10034851(15128881, (int)&v22, 1);
      sub_10034851(15128894, (int)&v21, 4);
      sub_10034851(15128906, (int)&v20, 1);
      dword_100B1118 = sub_100362C3((int)L"HUD.ini", L"HUD", "@堼i虁ofX", 0);
      sub_1003504E(5021774, sub_10034A13);
      v19 = sub_100362C3((int)L"HUD.ini", L"HUD", &word_100A370C, 0);
      v18 = sub_100362C3((int)L"HUD.ini", L"HUD", &word_100A371C, 0);
      sub_10034851(5037996, (int)&v19, 4);
      sub_10034851(5037991, (int)&v18, 4);
      v17 = sub_100362C3((int)L"HUD.ini", L"HUD", "/e鬰uQX", 0);
      v16 = sub_100362C3((int)L"HUD.ini", L"HUD", "/e鬰uQY", 0);
      sub_10034851(7247082, (int)&v17, 4);
      sub_10034851(7247077, (int)&v16, 4);
      dword_100B00B0 = sub_100362C3((int)L"HUD.ini", L"HUD", "IQ痵齣X", 0);
      dword_100B00B4 = sub_100362C3((int)L"HUD.ini", L"HUD", "IQ痵齣Y", 0);
      sub_1003504E(4949933, sub_10034F54);
      sub_1003504E(4950059, sub_10034F3B);
      sub_1003504E(4950158, sub_1003554E);
      sub_1003504E(4950653, sub_10036179);
      dword_100B009C = sub_100362C3((int)L"HUD.ini", L"HUD", L"PL条X轴", 0);
      dword_100B00A0 = sub_100362C3((int)L"HUD.ini", L"HUD", L"PL条Y轴", 0);
      sub_10034851(4962582, (int)&dword_100B009C, 4);
      sub_10034851(4962577, (int)&dword_100B00A0, 4);
      sub_10034851(4962768, (int)&dword_100B009C, 4);
      sub_10034851(4962763, (int)&dword_100B00A0, 4);
      sub_10034851(4962678, (int)&dword_100B009C, 4);
      sub_10034851(4962673, (int)&dword_100B00A0, 4);
      v15 = 600;
      sub_10034851(4962667, (int)&dword_100B009C, 4);
      sub_10034851(4962662, (int)&v15, 4);
      sub_1003504E(5008019, sub_10033CA3);
      sub_1003504E(5008037, sub_100353EB);
      v14 = dword_100B009C + 69;
      if ( dword_100B00A0 >= 3 )
        v8 = dword_100B00A0 - 3;
      else
        v8 = 0;
      v13 = v8;
      sub_10034851(5008389, (int)&v14, 4);
      sub_10034851(5008384, (int)&v13, 4);
      dword_100B0000 = sub_100362C3((int)L"HUD.ini", L"HUD", &word_100A378C, 0);
      sub_1003504E(4436177, sub_100332AD);
      sub_1003504E(4436260, sub_10035FB7);
      sub_1003504E(4436391, sub_10036386);
      dword_100B111C = dword_100B0000 + 27;
      sub_1003504E(5006761, sub_10033384);
      dword_100B001C = dword_100B0000 + 8;
      sub_1003504E(5006582, sub_10034BB2);
      dword_100B0024 = sub_100362C3((int)L"HUD.ini", L"HUD", &word_100A3798, 0);
      v4 = sub_100362C3((int)L"HUD.ini", L"HUD", &word_100A3590, 0);
      dword_100B0028 = dword_100B0024 + v4;
      dword_100B002C = dword_100B0024 + v4;
      sub_1003504E(4436125, sub_10033910);
      dword_100B0034 = sub_100362C3((int)L"HUD.ini", L"HUD", &word_100A359C, 0);
      sub_1003504E(5006784, sub_10033960);
      dword_100B003C = sub_100362C3((int)L"HUD.ini", L"HUD", &word_100A37A4, 0);
      v5 = sub_100362C3((int)L"HUD.ini", L"HUD", &word_100A35A8, 0);
      dword_100B0040 = dword_100B003C + v5;
      dword_100B0044 = dword_100B003C + v5;
      sub_1003504E(4436520, sub_10034CA7);
      dword_100B0054 = sub_100362C3((int)L"HUD.ini", L"HUD", L"BUFF图标X轴", 0);
      sub_1003504E(4978014, sub_1003392E);
      sub_1003504E(5016596, sub_10033A23);
      v12 = sub_100362C3((int)L"HUD.ini", L"HUD", L"BUFF图标Y轴", 0);
      sub_10034851(5016565, (int)&v12, 4);
      sub_10034851(4978010, (int)&v12, 4);
      dword_100B004C = (unsigned int)sub_100362C3((int)L"HUD.ini", L"HUD", &word_100A37E0, 0) >> 2;
      sub_1003504E(5105452, sub_10033B3B);
      v11 = sub_100362C3((int)L"HUD.ini", L"HUD", &word_100A37F0, 0);
      sub_10034851(5105439, (int)&v11, 4);
      sub_1003504E(5008947, sub_10033532);
      dword_100B0070 = sub_100362C3((int)L"HUD.ini", L"HUD", "蟸寶agX", 0);
      dword_100B0074 = sub_100362C3((int)L"HUD.ini", L"HUD", "蟸寶agY", 0);
      if ( dword_100B0074 >= 3 )
        v8 = dword_100B0074 - 3;
      else
        v8 = 0;
      dword_100B0078 = v8;
      dword_100B0088 = sub_100362C3((int)L"HUD.ini", L"HUD", "蟸寶ag\x7F暒^", 0);
      *(float *)&dword_100B0094 = (float)dword_100B0088;
      MEMORY[0x4B8541] = dword_100B0088;
      sub_10034851(4949328, (int)&dword_100B0088, 4);
      MEMORY[0x4B8569] = dword_100B0088;
      sub_1003504E(4949390, sub_10036192);
      sub_1003504E(4949486, sub_100346A3);
      sub_1003504E(4949560, sub_10035EEF);
      sub_1003504E(4949623, sub_10033438);
      sub_1003504E(4949430, sub_10033D61);
      sub_1003504E(5006995, sub_1003334D);
      v10 = sub_100362C3((int)L"HUD.ini", L"HUD", "蚥VSL堒僓SX", 0);
      v9 = sub_100362C3((int)L"HUD.ini", L"HUD", "蚥VSL堒僓SY", 0);
      sub_10034851(15191054, (int)&v10, 4);
      sub_10034851(15191043, (int)&v9, 4);
      CreateThread(0, 0, sub_1003378A, 0, 0, 0);
      sub_10034F2C();
    }
  }
  sub_10034A5E(&savedregs, &dword_10041190, 1, v3);
  return v6;
}
// 100332AD: using guessed type int sub_100332AD();
// 1003334D: using guessed type int sub_1003334D();
// 10033384: using guessed type int sub_10033384();
// 10033438: using guessed type int sub_10033438();
// 10033532: using guessed type int sub_10033532();
// 10033910: using guessed type int sub_10033910();
// 1003392E: using guessed type int sub_1003392E();
// 10033960: using guessed type int sub_10033960();
// 10033A23: using guessed type int sub_10033A23();
// 10033B3B: using guessed type int sub_10033B3B();
// 10033C5D: using guessed type int sub_10033C5D();
// 10033CA3: using guessed type int sub_10033CA3();
// 10033D61: using guessed type void __noreturn sub_10033D61();
// 100346A3: using guessed type int sub_100346A3();
// 100347D4: using guessed type int sub_100347D4();
// 10034A13: using guessed type int sub_10034A13();
// 10034A5E: using guessed type int __fastcall sub_10034A5E(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034BB2: using guessed type int sub_10034BB2();
// 10034CA7: using guessed type int sub_10034CA7();
// 10034F2C: using guessed type int sub_10034F2C(void);
// 10034F3B: using guessed type int sub_10034F3B();
// 10034F54: using guessed type int sub_10034F54();
// 1003504E: using guessed type _DWORD __cdecl sub_1003504E(_DWORD, _DWORD);
// 100353EB: using guessed type int sub_100353EB();
// 1003554E: using guessed type int sub_1003554E();
// 10035BE3: using guessed type int __thiscall sub_10035BE3(_DWORD);
// 10035EEF: using guessed type int sub_10035EEF();
// 10035FB7: using guessed type int sub_10035FB7();
// 10036179: using guessed type int sub_10036179();
// 10036192: using guessed type int sub_10036192();
// 10036386: using guessed type int sub_10036386();
// 10041190: using guessed type int dword_10041190;
// 100A3134: using guessed type wchar_t aHudIni[8];
// 100B001C: using guessed type int dword_100B001C;
// 100B0024: using guessed type int dword_100B0024;
// 100B0028: using guessed type int dword_100B0028;
// 100B002C: using guessed type int dword_100B002C;
// 100B0034: using guessed type int dword_100B0034;
// 100B003C: using guessed type int dword_100B003C;
// 100B0040: using guessed type int dword_100B0040;
// 100B0044: using guessed type int dword_100B0044;
// 100B004C: using guessed type int dword_100B004C;
// 100B0054: using guessed type int dword_100B0054;
// 100B0070: using guessed type int dword_100B0070;
// 100B0074: using guessed type int dword_100B0074;
// 100B0078: using guessed type int dword_100B0078;
// 100B0088: using guessed type int dword_100B0088;
// 100B0094: using guessed type int dword_100B0094;
// 100B009C: using guessed type int dword_100B009C;
// 100B00A0: using guessed type int dword_100B00A0;
// 100B00CC: using guessed type int dword_100B00CC;
// 100B00D0: using guessed type int dword_100B00D0;
// 100B00D8: using guessed type int dword_100B00D8;
// 100B00DC: using guessed type int dword_100B00DC;
// 100B111C: using guessed type int dword_100B111C;

//----- (100415D0) --------------------------------------------------------
int sub_100415D0()
{
  return dword_100B0050();
}
// 100B004C: using guessed type int dword_100B004C;
// 100B0050: using guessed type int (*dword_100B0050)(void);

//----- (100415F0) --------------------------------------------------------
int __usercall sub_100415F0@<eax>(int a1@<edi>)
{
  int result; // eax

  if ( a1 - dword_100B0070 > (unsigned int)dword_100B0088 )
    result = dword_100B008C();
  else
    result = dword_100B0090();
  return result;
}
// 100B0070: using guessed type int dword_100B0070;
// 100B0078: using guessed type int dword_100B0078;
// 100B0088: using guessed type int dword_100B0088;
// 100B008C: using guessed type int (*dword_100B008C)(void);
// 100B0090: using guessed type int (*dword_100B0090)(void);

//----- (10041620) --------------------------------------------------------
int sub_10041620()
{
  return dword_100B007C();
}
// 100B0070: using guessed type int dword_100B0070;
// 100B0074: using guessed type int dword_100B0074;
// 100B007C: using guessed type int (*dword_100B007C)(void);

//----- (10041640) --------------------------------------------------------
int sub_10041640()
{
  return dword_100B0080();
}
// 100B0070: using guessed type int dword_100B0070;
// 100B0074: using guessed type int dword_100B0074;
// 100B0080: using guessed type int (*dword_100B0080)(void);

//----- (10041660) --------------------------------------------------------
int sub_10041660()
{
  return dword_100B0084();
}
// 100B0070: using guessed type int dword_100B0070;
// 100B0074: using guessed type int dword_100B0074;
// 100B0084: using guessed type int (*dword_100B0084)(void);

//----- (10041680) --------------------------------------------------------
void __noreturn sub_10041680()
{
  JUMPOUT(0x4B85BCu);
}
// 100B0070: using guessed type int dword_100B0070;

//----- (100416A0) --------------------------------------------------------
int __usercall sub_100416A0@<eax>(int a1@<ebp>)
{
  int v1; // ST00_4

  v1 = dword_100B0028 - dword_100B0024 * *(_DWORD *)(a1 + 8) / 56;
  return dword_100B0030(
           dword_100B002C - dword_100B0024 * *(_DWORD *)(a1 + 12) / 56,
           dword_100B0024 * *(_DWORD *)(a1 + 12) % 56);
}
// 100B0024: using guessed type int dword_100B0024;
// 100B0028: using guessed type int dword_100B0028;
// 100B002C: using guessed type int dword_100B002C;
// 100B0030: using guessed type int (__fastcall *dword_100B0030)(_DWORD, _DWORD);

//----- (100416F0) --------------------------------------------------------
int sub_100416F0()
{
  return dword_100B0020();
}
// 100B001C: using guessed type int dword_100B001C;
// 100B0020: using guessed type int (*dword_100B0020)(void);

//----- (10041710) --------------------------------------------------------
int sub_10041710()
{
  return dword_100B0018();
}
// 100B0018: using guessed type int (*dword_100B0018)(void);
// 100B111C: using guessed type int dword_100B111C;

//----- (10041720) --------------------------------------------------------
int sub_10041720()
{
  dword_100B000C(dword_100B0000);
  return dword_100B0010();
}
// 100B000C: using guessed type int (__stdcall *dword_100B000C)(_DWORD);
// 100B0010: using guessed type int (*dword_100B0010)(void);

//----- (10041740) --------------------------------------------------------
int sub_10041740()
{
  dword_100B000C(dword_100B0000);
  return dword_100B0014();
}
// 100B000C: using guessed type int (__stdcall *dword_100B000C)(_DWORD);
// 100B0014: using guessed type int (*dword_100B0014)(void);

//----- (10041760) --------------------------------------------------------
#error "1004176C: positive sp value has been found (funcsize=2)"

//----- (100419D0) --------------------------------------------------------
int sub_100419D0()
{
  dword_100B00E4(dword_100B00D8, dword_100B00DC);
  return dword_100B00E0();
}
// 100B00D8: using guessed type int dword_100B00D8;
// 100B00DC: using guessed type int dword_100B00DC;
// 100B00E0: using guessed type int (*dword_100B00E0)(void);
// 100B00E4: using guessed type int (__stdcall *dword_100B00E4)(_DWORD, _DWORD);

//----- (100419F0) --------------------------------------------------------
int sub_100419F0()
{
  return dword_100B00D4();
}
// 100B00CC: using guessed type int dword_100B00CC;
// 100B00D0: using guessed type int dword_100B00D0;
// 100B00D4: using guessed type int (*dword_100B00D4)(void);

//----- (10041A10) --------------------------------------------------------
int __usercall sub_10041A10@<eax>(int a1@<ebp>)
{
  int v1; // ST00_4

  v1 = dword_100B0040 - dword_100B003C * *(_DWORD *)(a1 + 8) / 56;
  return dword_100B0048(
           dword_100B0044 - dword_100B003C * *(_DWORD *)(a1 + 12) / 56,
           dword_100B003C * *(_DWORD *)(a1 + 12) % 56);
}
// 100B003C: using guessed type int dword_100B003C;
// 100B0040: using guessed type int dword_100B0040;
// 100B0044: using guessed type int dword_100B0044;
// 100B0048: using guessed type int (__fastcall *dword_100B0048)(_DWORD, _DWORD);

//----- (10041A60) --------------------------------------------------------
int sub_10041A60()
{
  return dword_100B0038();
}
// 100B0034: using guessed type int dword_100B0034;
// 100B0038: using guessed type int (*dword_100B0038)(void);

//----- (10041A80) --------------------------------------------------------
int __usercall sub_10041A80@<eax>(int a1@<ecx>, int a2@<edi>)
{
  return dword_100B00A4(a1, a2 - dword_100B009C);
}
// 100B009C: using guessed type int dword_100B009C;
// 100B00A4: using guessed type int (__fastcall *dword_100B00A4)(_DWORD, _DWORD);

//----- (10041AA0) --------------------------------------------------------
int sub_10041AA0()
{
  return dword_100B00A8();
}
// 100B00A0: using guessed type int dword_100B00A0;
// 100B00A8: using guessed type int (*dword_100B00A8)(void);

//----- (10041AC0) --------------------------------------------------------
int sub_10041AC0()
{
  return dword_100B0098();
}
// 100B0094: using guessed type int dword_100B0094;
// 100B0098: using guessed type int (*dword_100B0098)(void);

//----- (10041AE0) --------------------------------------------------------
int __usercall sub_10041AE0@<eax>(int a1@<edi>)
{
  int result; // eax

  if ( (unsigned int)(a1 - dword_100B0060) > 0x3D )
    result = dword_100B0068();
  else
    result = dword_100B006C();
  return result;
}
// 100B0060: using guessed type int dword_100B0060;
// 100B0064: using guessed type int dword_100B0064;
// 100B0068: using guessed type int (*dword_100B0068)(void);
// 100B006C: using guessed type int (*dword_100B006C)(void);

//----- (10041D10) --------------------------------------------------------
int __thiscall sub_10041D10(void *this, int a2, int a3, int a4, int a5, int a6)
{
  void *v6; // esi

  v6 = this;
  MEMORY[0x10896E0]((float)dword_100B00E8 / *(float *)&dword_100B0148, 1065353216);
  return MEMORY[0x108B770](v6, a2, a3, a4, 0, 1);
}
// 100B00E8: using guessed type int dword_100B00E8;
// 100B0148: using guessed type int dword_100B0148;

//----- (10041D70) --------------------------------------------------------
int __thiscall sub_10041D70(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return MEMORY[0x11A97E0](
           this,
           a2 - dword_100B1128,
           a3,
           a4,
           (float)dword_100B00E8 / (float)*(unsigned __int16 *)(a4 + 28),
           1065353216,
           0,
           -1,
           0,
           0);
}
// 100B00E8: using guessed type int dword_100B00E8;
// 100B1128: using guessed type int dword_100B1128;

//----- (10042170) --------------------------------------------------------
int __cdecl sub_10042170(int a1, int a2)
{
  int result; // eax

  result = a2 - a1 - 5;
  *(_BYTE *)a1 = -24;
  *(_DWORD *)(a1 + 1) = result;
  return result;
}

//----- (10042190) --------------------------------------------------------
int __cdecl sub_10042190(int a1, int a2)
{
  int result; // eax

  result = a2 - a1 - 5;
  *(_BYTE *)a1 = -23;
  *(_DWORD *)(a1 + 1) = result;
  return result;
}

//----- (100421E0) --------------------------------------------------------
int __thiscall sub_100421E0(_DWORD *this)
{
  _DWORD *v1; // edi
  int v2; // ebx
  int v3; // esi
  int v4; // ST04_4

  v1 = this;
  MEMORY[0x63CEA0]();
  v2 = v1[3];
  v3 = *(_DWORD *)(v2 + 20);
  MEMORY[0x11B4030](v2, v3 + dword_100B1128, *(_DWORD *)(v2 + 24), 1);
  *((_BYTE *)v1 + 24) = 100;
  v4 = dword_100B00E8;
  *(_DWORD *)(v2 + 20) = v3 - dword_100B1128;
  return MEMORY[0x11B38E0](v2, v4, 600);
}
// 100B00E8: using guessed type int dword_100B00E8;
// 100B1128: using guessed type int dword_100B1128;

//----- (10042394) --------------------------------------------------------
int __fastcall sub_10042394(int a1, _DWORD *a2)
{
  _DWORD *v2; // ebx
  int v3; // edx
  int v4; // esi
  int v5; // edi
  int v6; // ecx
  int result; // eax
  int v8; // [esp+8h] [ebp-4h]
  void *retaddr; // [esp+10h] [ebp+4h]

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v8 = a1;
  if ( *v2 > 0 )
  {
    v5 = 0;
    do
    {
      v6 = v2[1];
      if ( *(_DWORD *)(*(_DWORD *)(v5 + v6) + v3 - 4) != -858993460
        || (result = *(_DWORD *)(v5 + v6) + *(_DWORD *)(v5 + v6 + 4), *(_DWORD *)(result + v3) != -858993460) )
      {
        result = sub_10035CE2(retaddr, *(_DWORD *)(v5 + v6 + 8));
        v3 = v8;
      }
      ++v4;
      v5 += 12;
    }
    while ( v4 < *v2 );
  }
  return result;
}
// 10035CE2: using guessed type _DWORD __cdecl sub_10035CE2(_DWORD, _DWORD);

//----- (100423FD) --------------------------------------------------------
void __usercall __spoils<edx,ecx> sub_100423FD(char a1@<zf>)
{
  void *retaddr; // [esp+0h] [ebp+0h]

  if ( !a1 )
    sub_10033C2B(retaddr, 0);
}
// 10033C2B: using guessed type _DWORD __cdecl sub_10033C2B(_DWORD, _DWORD);

//----- (10042428) --------------------------------------------------------
DWORD __thiscall sub_10042428(_BYTE *this)
{
  DWORD result; // eax

  result = (unsigned __int8)*this;
  if ( *this )
  {
    if ( dword_100B2A28 )
      result = GetCurrentThreadId();
  }
  return result;
}
// 100B2A28: using guessed type int dword_100B2A28;

//----- (1004247D) --------------------------------------------------------
int sub_1004247D()
{
  int result; // eax

  if ( !byte_100B13A0 )
  {
    byte_100B13A0 = 1;
    result = sub_10035C15(0);
  }
  return result;
}
// 10035C15: using guessed type _DWORD __cdecl sub_10035C15(_DWORD);
// 100B13A0: using guessed type char byte_100B13A0;

//----- (1004249F) --------------------------------------------------------
int __stdcall sub_1004249F(int a1, int a2, int a3)
{
  int result; // eax

  switch ( a2 )
  {
    case 0:
      return sub_1004264E(a3 != 0);
    case 1:
      return sub_10042506(a1, a3);
    case 2:
      LOBYTE(result) = sub_10034E91();
      break;
    case 3:
      LOBYTE(result) = sub_100351CA();
      break;
    default:
      return 1;
  }
  return (unsigned __int8)result;
}
// 10034E91: using guessed type int sub_10034E91(void);
// 100351CA: using guessed type int sub_100351CA(void);

//----- (10042506) --------------------------------------------------------
signed int __cdecl sub_10042506(int a1, int a2)
{
  char v2; // bl
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  char v6; // [esp+13h] [ebp-1Dh]

  if ( !(unsigned __int8)sub_100355E4(0) )
    return 0;
  v6 = sub_1003589B();
  v2 = 1;
  if ( dword_100B179C )
  {
    sub_1003490A(7);
    JUMPOUT(*(_DWORD *)byte_1004260C);
  }
  dword_100B179C = 1;
  if ( (unsigned __int8)sub_100339DD() )
  {
    sub_100330A0();
    sub_10033870();
    sub_10034473();
    if ( !sub_100336D6(&unk_100A231C, &unk_100A2530) )
    {
      if ( (unsigned __int8)sub_10034270() )
      {
        sub_10035EDB(&unk_100A2000, &unk_100A2218);
        dword_100B179C = 2;
        v2 = 0;
      }
    }
  }
  sub_100345A9(v6);
  if ( v2 )
    return 0;
  v3 = (_DWORD *)sub_10033361();
  v4 = v3;
  if ( *v3 )
  {
    if ( (unsigned __int8)sub_10034045(v3) )
      ((void (__thiscall *)(_DWORD, int, signed int, int))*v4)(*v4, a1, 2, a2);
  }
  ++dword_100B13A4;
  return 1;
}
// 100330A0: using guessed type int sub_100330A0(void);
// 10033361: using guessed type int sub_10033361(void);
// 100336D6: using guessed type _DWORD __cdecl sub_100336D6(_DWORD, _DWORD);
// 10033870: using guessed type int sub_10033870(void);
// 100339DD: using guessed type int sub_100339DD(void);
// 10034045: using guessed type _DWORD __cdecl sub_10034045(_DWORD);
// 10034270: using guessed type int sub_10034270(void);
// 10034473: using guessed type int sub_10034473(void);
// 100345A9: using guessed type _DWORD __cdecl sub_100345A9(char);
// 1003490A: using guessed type _DWORD __cdecl sub_1003490A(_DWORD);
// 100355E4: using guessed type _DWORD __cdecl sub_100355E4(_DWORD);
// 1003589B: using guessed type int sub_1003589B(void);
// 10035EDB: using guessed type _DWORD __cdecl sub_10035EDB(_DWORD, _DWORD);
// 100B13A4: using guessed type int dword_100B13A4;
// 100B179C: using guessed type int dword_100B179C;

//----- (1004264E) --------------------------------------------------------
int __cdecl sub_1004264E(int a1)
{
  int v2; // esi
  int v3; // [esp+0h] [ebp-30h]
  int v4; // [esp+4h] [ebp-2Ch]
  int v5; // [esp+8h] [ebp-28h]
  int v6; // [esp+Ch] [ebp-24h]
  int v7; // [esp+10h] [ebp-20h]
  int ms_exc; // [esp+18h] [ebp-18h]
  int ms_exc_4; // [esp+1Ch] [ebp-14h]
  int ms_exc_8; // [esp+20h] [ebp-10h]
  int ms_exc_12; // [esp+24h] [ebp-Ch]
  int ms_exc_16; // [esp+28h] [ebp-8h]

  if ( dword_100B13A4 <= 0 )
    return 0;
  --dword_100B13A4;
  LOBYTE(v7) = sub_1003589B();
  if ( dword_100B179C != 2 )
  {
    sub_1003490A(7);
    JUMPOUT(*(_DWORD *)byte_100426FD);
  }
  sub_10033E60();
  sub_100351C5();
  sub_1003472A();
  dword_100B179C = 0;
  sub_100345A9(v7);
  v2 = (unsigned __int8)sub_1003463F(a1, 0) != 0 ? 1 : 0;
  sub_100334E2(268707534, v3, v4, v5, v6, v7, v2, ms_exc, ms_exc_4, ms_exc_8, ms_exc_12, ms_exc_16, -2);
  return v2;
}
// 100334E2: using guessed type int __stdcall sub_100334E2(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10033E60: using guessed type int sub_10033E60(void);
// 100345A9: using guessed type _DWORD __cdecl sub_100345A9(char);
// 1003463F: using guessed type _DWORD __cdecl sub_1003463F(_DWORD, char);
// 1003472A: using guessed type int sub_1003472A(void);
// 1003490A: using guessed type _DWORD __cdecl sub_1003490A(_DWORD);
// 100351C5: using guessed type int sub_100351C5(void);
// 1003589B: using guessed type int sub_1003589B(void);
// 100B13A4: using guessed type int dword_100B13A4;
// 100B179C: using guessed type int dword_100B179C;

//----- (1004272A) --------------------------------------------------------
int __cdecl sub_1004272A(int a1, int a2, int a3)
{
  int v4; // ebx
  int v5; // esi
  int v6; // eax

  if ( !a2 && dword_100B13A4 <= 0 )
    return 0;
  if ( a2 != 1 && a2 != 2 )
  {
    v4 = a3;
LABEL_9:
    v6 = sub_10034973(a1, a2, v4);
    v5 = v6;
    if ( a2 == 1 && !v6 )
    {
      sub_10034973(a1, 0, v4);
      sub_1004264E(v4 != 0);
      sub_10042877(a1, 0, v4);
    }
    if ( !a2 || a2 == 3 )
    {
      v5 = sub_1004249F(a1, a2, v4);
      if ( v5 )
        v5 = sub_10042877(a1, a2, v4);
    }
    return v5;
  }
  v4 = a3;
  v5 = sub_10042877(a1, a2, a3);
  if ( v5 )
  {
    v5 = sub_1004249F(a1, a2, a3);
    if ( v5 )
      goto LABEL_9;
  }
  return v5;
}
// 100B13A4: using guessed type int dword_100B13A4;

//----- (10042877) --------------------------------------------------------
signed int __stdcall sub_10042877(int a1, int a2, int a3)
{
  return 1;
}

//----- (10042970) --------------------------------------------------------
void __cdecl sub_10042970(int a1, int a2, int a3)
{
  int v3; // edi
  char v4; // [esp+Ch] [ebp-140h]
  char v5; // [esp+100h] [ebp-4Ch]
  char v6; // [esp+134h] [ebp-18h]

  v3 = dword_100B0228;
  if ( dword_100B0228 != -1 )
  {
    if ( a2 )
    {
      sub_10042B99(&v6, (int)&v5, a2 + 32, *(_DWORD *)(a2 + 12) - 36);
      sub_10035850(
        &v4,
        244,
        "%s%s%p%s%zd%s%d%s%s%s%s%s",
        "Stack area around _alloca memory reserved by this function is corrupted",
        "\nAddress: 0x",
        a2 + 32,
        "\nSize: ",
        *(_DWORD *)(a2 + 12) - 36,
        "\nAllocation number within this function: ",
        a3,
        "\nData: <",
        &v6,
        "> ",
        &v5,
        "\n");
      sub_10042C2F(a1, v3, 4, &v4);
    }
    else
    {
      sub_10042C2F(a1, dword_100B0228, 4, "Stack area around _alloca memory reserved by this function is corrupted\n");
    }
  }
}
// 10035850: using guessed type _DWORD sub_10035850(_DWORD, _DWORD, const char *, ...);
// 100B0228: using guessed type int dword_100B0228;

//----- (10042A7F) --------------------------------------------------------
void __cdecl sub_10042A7F(int a1, unsigned int a2)
{
  int v2; // eax
  int v3; // ecx
  const CHAR *v4; // edx

  v2 = a2;
  if ( a2 > 4 )
  {
    v4 = "Unknown Runtime Check Error\r\n";
    v3 = 1;
    v2 = 5;
  }
  else
  {
    v3 = dword_100B0218[a2];
    v4 = off_100A3898[a2];
    if ( v3 == -1 )
      return;
  }
  sub_10042C2F(a1, v3, v2, v4);
}
// 100A3898: using guessed type char *off_100A3898[6];

//----- (10042ACA) --------------------------------------------------------
void __cdecl sub_10042ACA(int a1, const char *a2)
{
  int v2; // edi
  const CHAR *v3; // eax
  char v4; // [esp+Ch] [ebp-404h]

  v2 = dword_100B0220;
  if ( dword_100B0220 != -1 )
  {
    if ( *a2 && strlen(a2) + 45 <= 0x400 )
    {
      sub_10035E22(&v4, 1024, "Stack around the variable '");
      sub_10035CB5(&v4, 1024, a2);
      sub_10035CB5(&v4, 1024, "' was corrupted.");
      v3 = &v4;
    }
    else
    {
      v3 = "Stack corrupted near unknown variable";
    }
    sub_10042C2F(a1, v2, 2, v3);
  }
}
// 10035CB5: using guessed type _DWORD __cdecl sub_10035CB5(_DWORD, _DWORD, _DWORD);
// 10035E22: using guessed type _DWORD __cdecl sub_10035E22(_DWORD, _DWORD, _DWORD);
// 100B0220: using guessed type int dword_100B0220;

//----- (10042B99) --------------------------------------------------------
unsigned int __cdecl sub_10042B99(_BYTE *a1, int a2, int a3, unsigned int a4)
{
  _BYTE *v4; // esi
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // edi
  unsigned int result; // eax
  char v9; // bl
  int v10; // [esp+Ch] [ebp-8h]
  unsigned int v11; // [esp+10h] [ebp-4h]

  v4 = a1;
  v5 = 0;
  v6 = 0;
  v7 = a3 - (_DWORD)a1;
  while ( 1 )
  {
    v10 = v6;
    v11 = v5;
    result = a4 >= 0x10 ? 16 : a4;
    if ( v5 >= result )
      break;
    v9 = v4[v7];
    sub_10035850(v6 + a2, 49 - v6, "%.2X ", v4[v7]);
    *v4 = v9;
    v5 = v11 + 1;
    ++v4;
    v6 = v10 + 3;
  }
  *v4 = 0;
  *(_BYTE *)(v6 + a2) = 0;
  return result;
}
// 10035850: using guessed type _DWORD sub_10035850(_DWORD, _DWORD, const char *, ...);

//----- (10042C2F) --------------------------------------------------------
void __cdecl sub_10042C2F(int a1, int a2, int a3, const CHAR *a4)
{
  int (__cdecl *v4)(int, CHAR *, int, CHAR *, const char *, int, LPCSTR); // ebx
  int (__thiscall *v5)(_DWORD, int, WCHAR *, int, WCHAR *, const wchar_t *, int, WCHAR *); // esi
  unsigned int v6; // eax
  char v7; // al
  int v8; // eax
  CHAR *v9; // edi
  CHAR *v10; // esi
  ULONG_PTR Arguments; // [esp+Ch] [ebp-E58h]
  int v12; // [esp+10h] [ebp-E54h]
  char *v13; // [esp+14h] [ebp-E50h]
  int v14; // [esp+18h] [ebp-E4Ch]
  char *v15; // [esp+1Ch] [ebp-E48h]
  WCHAR *v16; // [esp+20h] [ebp-E44h]
  int v17; // [esp+24h] [ebp-E40h]
  int v18; // [esp+28h] [ebp-E3Ch]
  LPCSTR lpMultiByteStr; // [esp+2Ch] [ebp-E38h]
  WCHAR *v20; // [esp+30h] [ebp-E34h]
  char v21; // [esp+37h] [ebp-E2Dh]
  WCHAR WideCharStr; // [esp+38h] [ebp-E2Ch]
  CHAR v23; // [esp+438h] [ebp-A2Ch]
  CHAR MultiByteStr; // [esp+744h] [ebp-720h]
  WCHAR Filename; // [esp+A50h] [ebp-414h]
  WCHAR v26; // [esp+C58h] [ebp-20Ch]

  v4 = 0;
  v18 = a3;
  lpMultiByteStr = a4;
  v5 = (int (__thiscall *)(_DWORD, int, WCHAR *, int, WCHAR *, const wchar_t *, int, WCHAR *))sub_10036066(a1);
  if ( !v5 )
    v4 = (int (__cdecl *)(int, CHAR *, int, CHAR *, const char *, int, LPCSTR))sub_1003376C(a1);
  v6 = MultiByteToWideChar(0xFDE9u, 0, lpMultiByteStr, -1, 0, 0);
  if ( v6 < 0x200 && MultiByteToWideChar(0xFDE9u, 0, lpMultiByteStr, -1, &WideCharStr, v6) )
    v20 = &WideCharStr;
  else
    v20 = L"Runtime Check Error.\r\n Unable to display RTC Message.";
  v21 = 0;
  v13 = &v21;
  Arguments = 4097;
  v12 = 4098;
  sub_10042F2F(&Arguments);
  if ( v21 )
  {
    v12 = v18;
    v21 = 0;
    Arguments = 4098;
    v13 = (char *)dword_100A38B0[v18];
    v15 = &v21;
    v16 = v20;
    v14 = a1;
    sub_10042F2F(&Arguments);
    if ( v21 )
      return;
    v7 = 0;
  }
  else
  {
    v7 = 1;
  }
  if ( !v4 && !v5 || v7 && IsDebuggerPresent() )
    goto LABEL_26;
  sub_1003374E(a1 - 5, (int)&v26, 4, (int)&v17, &Filename, 0x104u);
  if ( v5 )
  {
    v8 = v5(v5, a2, &v26, v17, &Filename, L"Run-Time Check Failure #%d - %s", v18, v20);
  }
  else
  {
    v9 = "Unknown Filename";
    if ( WideCharToMultiByte(0xFDE9u, 0, &v26, -1, &MultiByteStr, 778, 0, 0) )
      v9 = &MultiByteStr;
    v10 = "Unknown Module Name";
    if ( WideCharToMultiByte(0xFDE9u, 0, &Filename, -1, &v23, 778, 0, 0) )
      v10 = &v23;
    v8 = v4(a2, v9, v17, v10, "Run-Time Check Failure #%d - %s", v18, lpMultiByteStr);
  }
  if ( v8 == 1 )
LABEL_26:
    __debugbreak();
}
// 1003376C: using guessed type int __cdecl sub_1003376C(_DWORD);
// 10036066: using guessed type int __cdecl sub_10036066(_DWORD);
// 100A38B0: using guessed type int dword_100A38B0[];
// 100A3C80: using guessed type wchar_t aRuntimeCheckEr[54];
// 100A3D08: using guessed type wchar_t aRunTimeCheckFa[32];
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10042F2F) --------------------------------------------------------
void __cdecl sub_10042F2F(ULONG_PTR *lpArguments)
{
  RaiseException(0x406D1388u, 0, 6u, lpArguments);
}

//----- (1004305A) --------------------------------------------------------
void *sub_1004305A()
{
  return &unk_100B13A8;
}

//----- (10043060) --------------------------------------------------------
signed int __cdecl sub_10043060(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // eax
  signed int result; // eax

  v5 = (_DWORD *)sub_10035A6C();
  result = sub_10033898(*v5, v5[1], a1, a2, a3, a4, a5);
  if ( result < 0 )
    result = -1;
  return result;
}
// 10033898: using guessed type _DWORD __cdecl sub_10033898(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10035A6C: using guessed type int sub_10035A6C(void);

//----- (10043098) --------------------------------------------------------
int sub_10043098(int a1, int a2, int a3, ...)
{
  va_list va; // [esp+14h] [ebp+14h]

  va_start(va, a3);
  return sub_100348C9(a1, a2, a3, 0, va);
}
// 100348C9: using guessed type _DWORD __cdecl sub_100348C9(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (100430BB) --------------------------------------------------------
BOOL __cdecl sub_100430BB(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE v1; // eax

  SetUnhandledExceptionFilter(0);
  UnhandledExceptionFilter(ExceptionInfo);
  v1 = GetCurrentProcess();
  return TerminateProcess(v1, 0xC0000409);
}

//----- (100430ED) --------------------------------------------------------
int __usercall sub_100430ED@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, char a4)
{
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // et0
  int vars0; // [esp+324h] [ebp+0h]
  int retaddr; // [esp+328h] [ebp+4h]

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  dword_100B14B8 = 0;
  dword_100B14B4 = v5;
  dword_100B14B0 = v4;
  dword_100B14AC = a1;
  dword_100B14A8 = a3;
  dword_100B14A4 = a2;
  word_100B14D0 = __SS__;
  word_100B14C4 = __CS__;
  word_100B14A0 = __DS__;
  word_100B149C = __ES__;
  word_100B1498 = __FS__;
  word_100B1494 = __GS__;
  v6 = __readeflags();
  dword_100B14C8 = v6;
  dword_100B14BC = vars0;
  dword_100B14C0 = retaddr;
  dword_100B14CC = (int)&a4;
  dword_100B1408 = 65537;
  dword_100B13C4 = retaddr;
  dword_100B13B8 = -1073740791;
  dword_100B13BC = 1;
  dword_100B13C8 = 1;
  dword_100B13CC = 2;
  return sub_1003629B(&ExceptionInfo);
}
// 100B0200: using guessed type int dword_100B0200;
// 100B13B8: using guessed type int dword_100B13B8;
// 100B13BC: using guessed type int dword_100B13BC;
// 100B13C4: using guessed type int dword_100B13C4;
// 100B13C8: using guessed type int dword_100B13C8;
// 100B13CC: using guessed type int dword_100B13CC;
// 100B1408: using guessed type int dword_100B1408;
// 100B1494: using guessed type __int16 word_100B1494;
// 100B1498: using guessed type __int16 word_100B1498;
// 100B149C: using guessed type __int16 word_100B149C;
// 100B14A0: using guessed type __int16 word_100B14A0;
// 100B14A4: using guessed type int dword_100B14A4;
// 100B14A8: using guessed type int dword_100B14A8;
// 100B14AC: using guessed type int dword_100B14AC;
// 100B14B0: using guessed type int dword_100B14B0;
// 100B14B4: using guessed type int dword_100B14B4;
// 100B14B8: using guessed type int dword_100B14B8;
// 100B14BC: using guessed type int dword_100B14BC;
// 100B14C0: using guessed type int dword_100B14C0;
// 100B14C4: using guessed type __int16 word_100B14C4;
// 100B14C8: using guessed type int dword_100B14C8;
// 100B14CC: using guessed type int dword_100B14CC;
// 100B14D0: using guessed type __int16 word_100B14D0;

//----- (10043225) --------------------------------------------------------
int sub_10043225()
{
  return sub_10035F71(8);
}
// 10035F71: using guessed type _DWORD __cdecl sub_10035F71(_DWORD);

//----- (10043234) --------------------------------------------------------
int __usercall sub_10043234@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, unsigned int a4)
{
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // et0
  int vars0; // [esp+31Ch] [ebp+0h]
  int retaddr; // [esp+320h] [ebp+4h]

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(a4);
  dword_100B14B8 = 0;
  dword_100B14B4 = v5;
  dword_100B14B0 = v4;
  dword_100B14AC = a1;
  dword_100B14A8 = a3;
  dword_100B14A4 = a2;
  word_100B14D0 = __SS__;
  word_100B14C4 = __CS__;
  word_100B14A0 = __DS__;
  word_100B149C = __ES__;
  word_100B1498 = __FS__;
  word_100B1494 = __GS__;
  v6 = __readeflags();
  dword_100B14C8 = v6;
  dword_100B14BC = vars0;
  dword_100B14C0 = retaddr;
  dword_100B14CC = (int)&a4;
  dword_100B13C4 = retaddr;
  dword_100B13B8 = -1073740791;
  dword_100B13BC = 1;
  dword_100B13C8 = 1;
  dword_100B13CC = a4;
  return sub_1003629B(&ExceptionInfo);
}
// 100B13B8: using guessed type int dword_100B13B8;
// 100B13BC: using guessed type int dword_100B13BC;
// 100B13C4: using guessed type int dword_100B13C4;
// 100B13C8: using guessed type int dword_100B13C8;
// 100B13CC: using guessed type int dword_100B13CC;
// 100B1494: using guessed type __int16 word_100B1494;
// 100B1498: using guessed type __int16 word_100B1498;
// 100B149C: using guessed type __int16 word_100B149C;
// 100B14A0: using guessed type __int16 word_100B14A0;
// 100B14A4: using guessed type int dword_100B14A4;
// 100B14A8: using guessed type int dword_100B14A8;
// 100B14AC: using guessed type int dword_100B14AC;
// 100B14B0: using guessed type int dword_100B14B0;
// 100B14B4: using guessed type int dword_100B14B4;
// 100B14B8: using guessed type int dword_100B14B8;
// 100B14BC: using guessed type int dword_100B14BC;
// 100B14C0: using guessed type int dword_100B14C0;
// 100B14C4: using guessed type __int16 word_100B14C4;
// 100B14C8: using guessed type int dword_100B14C8;
// 100B14CC: using guessed type int dword_100B14CC;
// 100B14D0: using guessed type __int16 word_100B14D0;

//----- (10043490) --------------------------------------------------------
int sub_10043490()
{
  return dword_100B1774;
}
// 100B1774: using guessed type int dword_100B1774;

//----- (10043496) --------------------------------------------------------
int sub_10043496()
{
  return dword_100B1778;
}
// 100B1778: using guessed type int dword_100B1778;

//----- (100434DE) --------------------------------------------------------
int __cdecl sub_100434DE(int a1)
{
  int result; // eax

  result = dword_100B1778;
  dword_100B1774 = 0;
  dword_100B1778 = a1;
  return result;
}
// 100B1774: using guessed type int dword_100B1774;
// 100B1778: using guessed type int dword_100B1778;

//----- (10043529) --------------------------------------------------------
unsigned int sub_10043529()
{
  LARGE_INTEGER PerformanceCount; // [esp+0h] [ebp-14h]
  struct _FILETIME SystemTimeAsFileTime; // [esp+8h] [ebp-Ch]
  DWORD v3; // [esp+10h] [ebp-4h]

  SystemTimeAsFileTime.dwLowDateTime = 0;
  SystemTimeAsFileTime.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v3 = SystemTimeAsFileTime.dwLowDateTime ^ SystemTimeAsFileTime.dwHighDateTime;
  v3 ^= GetCurrentThreadId();
  v3 ^= GetCurrentProcessId();
  QueryPerformanceCounter(&PerformanceCount);
  return (unsigned int)&v3 ^ v3 ^ PerformanceCount.LowPart ^ PerformanceCount.HighPart;
}

//----- (10043589) --------------------------------------------------------
void sub_10043589()
{
  int v0; // ecx
  unsigned int v1; // eax

  v0 = __security_cookie;
  if ( __security_cookie == -1153374642 || !(__security_cookie & 0xFFFF0000) )
  {
    v1 = sub_10043529();
    v0 = v1;
    if ( v1 == -1153374642 )
    {
      v0 = -1153374641;
    }
    else if ( !(v1 & 0xFFFF0000) )
    {
      v0 = ((v1 | 0x4711) << 16) | v1;
    }
    __security_cookie = v0;
  }
  dword_100B0200 = ~v0;
}
// 100B0200: using guessed type int dword_100B0200;

//----- (100435E6) --------------------------------------------------------
void sub_100435E6()
{
  InitializeSListHead(&ListHead);
}

//----- (100435F5) --------------------------------------------------------
int sub_100435F5()
{
  return sub_1003595E(&ListHead);
}

//----- (10043604) --------------------------------------------------------
void *sub_10043604()
{
  return &unk_100B1790;
}

//----- (1004360A) --------------------------------------------------------
_DWORD *sub_1004360A()
{
  _DWORD *v0; // eax
  int v1; // ecx
  _DWORD *result; // eax
  int v3; // ecx

  v0 = (_DWORD *)sub_10035A6C();
  v1 = v0[1];
  *v0 |= 0x24u;
  v0[1] = v1;
  result = (_DWORD *)sub_10035DD7();
  v3 = result[1];
  *result |= 2u;
  result[1] = v3;
  return result;
}
// 10035A6C: using guessed type int sub_10035A6C(void);
// 10035DD7: using guessed type int sub_10035DD7(void);

//----- (1004363E) --------------------------------------------------------
int __cdecl sub_1004363E(int a1, unsigned int a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // esi

  v2 = a1 + *(_DWORD *)(a1 + 60);
  v3 = *(unsigned __int16 *)(v2 + 20) + v2 + 24;
  v4 = v3 + 40 * *(unsigned __int16 *)(v2 + 6);
  if ( v3 == v4 )
    return 0;
  while ( a2 < *(_DWORD *)(v3 + 12) || a2 >= *(_DWORD *)(v3 + 12) + *(_DWORD *)(v3 + 8) )
  {
    v3 += 40;
    if ( v3 == v4 )
      return 0;
  }
  return v3;
}

//----- (100436DE) --------------------------------------------------------
char sub_100436DE()
{
  signed __int32 v0; // edx
  signed __int32 v1; // eax

  if ( sub_10034761() )
  {
    v0 = *(_DWORD *)(__readfsdword(0x18u) + 4);
    while ( 1 )
    {
      v1 = _InterlockedCompareExchange((volatile signed __int32 *)&unk_100B17A0, v0, 0);
      if ( !v1 )
        break;
      if ( v0 == v1 )
        return 1;
    }
  }
  return 0;
}
// 10034761: using guessed type int sub_10034761(void);

//----- (1004371C) --------------------------------------------------------
char sub_1004371C()
{
  int v0; // eax

  if ( sub_10034761() )
  {
    sub_10034766();
  }
  else
  {
    v0 = sub_100353E1();
    if ( sub_1003600C(v0) )
      return 0;
    sub_10033749();
  }
  return 1;
}
// 10033749: using guessed type int sub_10033749(void);
// 10034761: using guessed type int sub_10034761(void);
// 10034766: using guessed type int sub_10034766(void);
// 100353E1: using guessed type int sub_100353E1(void);
// 1003600C: using guessed type int __cdecl sub_1003600C(_DWORD);

//----- (10043751) --------------------------------------------------------
bool sub_10043751()
{
  return (unsigned __int8)sub_100340AE(0) != 0;
}
// 100340AE: using guessed type _DWORD __cdecl sub_100340AE(_DWORD);

//----- (10043762) --------------------------------------------------------
char sub_10043762()
{
  if ( !(unsigned __int8)sub_10034F36() )
    return 0;
  if ( !(unsigned __int8)sub_10035233() )
  {
    sub_10033F41();
    return 0;
  }
  return 1;
}
// 10033F41: using guessed type int sub_10033F41(void);
// 10034F36: using guessed type int sub_10034F36(void);
// 10035233: using guessed type int sub_10035233(void);

//----- (10043788) --------------------------------------------------------
char sub_10043788()
{
  sub_1003471B();
  sub_10033F41();
  return 1;
}
// 10033F41: using guessed type int sub_10033F41(void);
// 1003471B: using guessed type int sub_1003471B(void);

//----- (10043798) --------------------------------------------------------
int __cdecl sub_10043798(int a1, int a2, int a3, void (__thiscall *a4)(_DWORD, int, _DWORD, int), int a5, int a6)
{
  if ( !sub_10034761() && a2 == 1 )
    a4(a4, a1, 0, a3);
  return sub_10034464(a5, a6);
}
// 10034464: using guessed type _DWORD __cdecl sub_10034464(_DWORD, _DWORD);
// 10034761: using guessed type int sub_10034761(void);

//----- (100437D9) --------------------------------------------------------
int sub_100437D9()
{
  int result; // eax

  if ( sub_10034761() )
    return sub_100338FC((unsigned int)&dword_100B17A8);
  result = sub_10034B1C();
  if ( !result )
    result = sub_10072AD4(0, 0, 1);
  return result;
}
// 100338FC: using guessed type _DWORD __cdecl sub_100338FC(char);
// 10034761: using guessed type int sub_10034761(void);
// 10034B1C: using guessed type int sub_10034B1C(void);
// 100B17A8: using guessed type int dword_100B17A8;

//----- (10043804) --------------------------------------------------------
char sub_10043804()
{
  sub_10036200(0);
  sub_10033DDE();
  return 1;
}
// 10033DDE: using guessed type int sub_10033DDE(void);
// 10036200: using guessed type _DWORD __cdecl sub_10036200(_DWORD);

//----- (10043814) --------------------------------------------------------
char __cdecl sub_10043814(int a1)
{
  if ( !a1 )
    byte_100B17A4 = 1;
  sub_10034766();
  if ( !(unsigned __int8)sub_100352A1() )
    return 0;
  if ( !(unsigned __int8)sub_100352C9() )
  {
    sub_10033136(0);
    return 0;
  }
  return 1;
}
// 10033136: using guessed type _DWORD __cdecl sub_10033136(char);
// 10034766: using guessed type int sub_10034766(void);
// 100352A1: using guessed type int sub_100352A1(void);
// 100352C9: using guessed type int sub_100352C9(void);
// 100B17A4: using guessed type char byte_100B17A4;

//----- (1004385B) --------------------------------------------------------
char __cdecl sub_1004385B(int a1)
{
  if ( byte_100B17A5 )
    return 1;
  if ( a1 && a1 != 1 )
  {
    sub_1003490A(5);
    JUMPOUT(*(_DWORD *)byte_100438E1);
  }
  if ( !sub_10034761() || a1 )
  {
    dword_100B17A8 = -1;
    dword_100B17AC = -1;
    dword_100B17B0 = -1;
    dword_100B17B4 = -1;
    dword_100B17B8 = -1;
    dword_100B17BC = -1;
  }
  else if ( sub_100337E9(&dword_100B17A8) || sub_100337E9(&dword_100B17B4) )
  {
    return 0;
  }
  byte_100B17A5 = 1;
  return 1;
}
// 100337E9: using guessed type _DWORD __cdecl sub_100337E9(_DWORD);
// 10034761: using guessed type int sub_10034761(void);
// 1003490A: using guessed type _DWORD __cdecl sub_1003490A(_DWORD);
// 100B17A5: using guessed type char byte_100B17A5;
// 100B17A8: using guessed type int dword_100B17A8;
// 100B17AC: using guessed type int dword_100B17AC;
// 100B17B0: using guessed type int dword_100B17B0;
// 100B17B4: using guessed type int dword_100B17B4;
// 100B17B8: using guessed type int dword_100B17B8;
// 100B17BC: using guessed type int dword_100B17BC;

//----- (10043903) --------------------------------------------------------
bool __cdecl sub_10043903(int a1)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( MEMORY[0x10000000] == 23117
    && *(_DWORD *)(MEMORY[0x1000003C] + 0x10000000) == 17744
    && *(_WORD *)(MEMORY[0x1000003C] + 268435480) == 267 )
  {
    v1 = sub_1004363E(0x10000000, a1 - 0x10000000);
    if ( v1 )
    {
      if ( *(_DWORD *)(v1 + 36) >= 0 )
        result = 1;
    }
  }
  return result;
}

//----- (100439BC) --------------------------------------------------------
int __cdecl sub_100439BC(char a1)
{
  int result; // eax

  result = sub_10034761();
  if ( result )
  {
    if ( !a1 )
      result = _InterlockedExchange((volatile signed __int32 *)&unk_100B17A0, 0);
  }
  return result;
}
// 10034761: using guessed type int sub_10034761(void);

//----- (100439E0) --------------------------------------------------------
char __cdecl sub_100439E0(char a1, char a2)
{
  if ( !byte_100B17A4 || !a2 )
  {
    sub_10034095(a1);
    sub_10033136(a1);
  }
  return 1;
}
// 10033136: using guessed type _DWORD __cdecl sub_10033136(char);
// 10034095: using guessed type _DWORD __cdecl sub_10034095(char);
// 100B17A4: using guessed type char byte_100B17A4;

//----- (10043A12) --------------------------------------------------------
int __cdecl sub_10043A12(int a1)
{
  int v1; // eax

  if ( dword_100B17A8 == -1 )
    v1 = sub_10033EF6(a1);
  else
    v1 = sub_1003310E((unsigned int)&dword_100B17A8, a1);
  return v1 == 0 ? a1 : 0;
}
// 1003310E: using guessed type _DWORD __cdecl sub_1003310E(char, char);
// 10033EF6: using guessed type _DWORD __cdecl sub_10033EF6(_DWORD);
// 100B17A8: using guessed type int dword_100B17A8;

//----- (10043A8F) --------------------------------------------------------
void *sub_10043A8F()
{
  return &unk_100B2A1C;
}

//----- (10043A95) --------------------------------------------------------
LONG __usercall sub_10043A95@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, unsigned int a4)
{
  int v4; // ecx
  int v5; // edx
  unsigned int v6; // et0
  BOOL v7; // esi
  LONG result; // eax
  int v9; // [esp+8h] [ebp-324h]
  __int16 v10; // [esp+94h] [ebp-298h]
  __int16 v11; // [esp+98h] [ebp-294h]
  __int16 v12; // [esp+9Ch] [ebp-290h]
  __int16 v13; // [esp+A0h] [ebp-28Ch]
  int v14; // [esp+A4h] [ebp-288h]
  int v15; // [esp+A8h] [ebp-284h]
  int v16; // [esp+ACh] [ebp-280h]
  int v17; // [esp+B0h] [ebp-27Ch]
  int v18; // [esp+B4h] [ebp-278h]
  int v19; // [esp+B8h] [ebp-274h]
  int v20; // [esp+BCh] [ebp-270h]
  int v21; // [esp+C0h] [ebp-26Ch]
  __int16 v22; // [esp+C4h] [ebp-268h]
  unsigned int v23; // [esp+C8h] [ebp-264h]
  int *v24; // [esp+CCh] [ebp-260h]
  __int16 v25; // [esp+D0h] [ebp-25Ch]
  int v26; // [esp+2D4h] [ebp-58h]
  int v27; // [esp+2D8h] [ebp-54h]
  int v28; // [esp+2E0h] [ebp-4Ch]
  struct _EXCEPTION_POINTERS ExceptionInfo; // [esp+324h] [ebp-8h]
  int savedregs; // [esp+32Ch] [ebp+0h]
  int retaddr; // [esp+330h] [ebp+4h]

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(a4);
  sub_10035571(3);
  v19 = sub_10034388(&v9, 0, 716);
  v18 = v4;
  v17 = v5;
  v16 = a1;
  v15 = a3;
  v14 = a2;
  v25 = __SS__;
  v22 = __CS__;
  v13 = __DS__;
  v12 = __ES__;
  v11 = __FS__;
  v10 = __GS__;
  v6 = __readeflags();
  v23 = v6;
  v21 = retaddr;
  v24 = &retaddr;
  v9 = 65537;
  v20 = savedregs;
  sub_10034388(&v26, 0, 80);
  v26 = 1073741845;
  v27 = 1;
  v28 = retaddr;
  v7 = IsDebuggerPresent();
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)&v26;
  ExceptionInfo.ContextRecord = (PCONTEXT)&v9;
  SetUnhandledExceptionFilter(0);
  result = UnhandledExceptionFilter(&ExceptionInfo);
  if ( !result && v7 != 1 )
    result = sub_10035571(3);
  return result;
}
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 10035571: using guessed type int __cdecl sub_10035571(_DWORD);

//----- (10043C98) --------------------------------------------------------
int __stdcall sub_10043C98(_DWORD *a1)
{
  _DWORD *v1; // esi
  int v2; // eax
  int v4; // esi

  v1 = (_DWORD *)*a1;
  if ( *(_DWORD *)*a1 == -529697949 && v1[4] == 3 )
  {
    v2 = v1[5];
    if ( v2 == 429065504 || v2 == 429065505 || v2 == 429065506 || v2 == 26820608 )
    {
      *(_DWORD *)sub_10033A55() = v1;
      v4 = a1[1];
      *(_DWORD *)sub_10035F6C() = v4;
      sub_10033069();
    }
  }
  return 0;
}
// 10033069: using guessed type int sub_10033069(void);
// 10033A55: using guessed type int sub_10033A55(void);
// 10035F6C: using guessed type int sub_10035F6C(void);

//----- (10043D03) --------------------------------------------------------
void sub_10043D03()
{
  dword_100B17C8 = 0;
}
// 100B17C8: using guessed type int dword_100B17C8;

//----- (10043D0D) --------------------------------------------------------
int sub_10043D0D()
{
  _DWORD *v0; // esi
  int result; // eax

  v0 = &unk_100ADDA8;
  if ( &unk_100ADDA8 < &unk_100ADFAC )
  {
    do
    {
      if ( *v0 )
        result = ((int (__thiscall *)(_DWORD))*v0)(*v0);
      ++v0;
    }
    while ( v0 < (_DWORD *)&unk_100ADFAC );
  }
  return result;
}

//----- (10043D44) --------------------------------------------------------
int sub_10043D44()
{
  _DWORD *v0; // esi
  int result; // eax

  v0 = &unk_100AE0B4;
  if ( &unk_100AE0B4 < &unk_100AE2B8 )
  {
    do
    {
      if ( *v0 )
        result = ((int (__thiscall *)(_DWORD))*v0)(*v0);
      ++v0;
    }
    while ( v0 < (_DWORD *)&unk_100AE2B8 );
  }
  return result;
}

//----- (100440BB) --------------------------------------------------------
int sub_100440BB()
{
  HMODULE v0; // edi
  FARPROC v1; // esi
  FARPROC v2; // ebx
  int v4; // esi
  unsigned int v5; // eax
  unsigned int v6; // ecx
  int v7; // esi
  int v8; // [esp+Ch] [ebp-21Ch]
  FARPROC v9; // [esp+10h] [ebp-218h]
  unsigned int v10; // [esp+14h] [ebp-214h]
  int v11; // [esp+18h] [ebp-210h]
  WCHAR LibFileName[260]; // [esp+1Ch] [ebp-20Ch]

  v0 = (HMODULE)sub_10034941(L"api-ms-win-core-registry-l1-1-0.dll", 0, 0x800u);
  if ( !v0 )
  {
    v0 = (HMODULE)sub_10034941(L"advapi32.dll", 0, 0x800u);
    if ( !v0 )
    {
      if ( GetLastError() != 87 )
        return 0;
      v0 = (HMODULE)sub_10034941(L"advapi32.dll", 0, 0);
      if ( !v0 )
        return 0;
    }
  }
  v1 = GetProcAddress(v0, "RegOpenKeyExW");
  if ( !v1 )
    return 0;
  v2 = GetProcAddress(v0, "RegQueryValueExW");
  if ( !v2 )
    return 0;
  v9 = GetProcAddress(v0, "RegCloseKey");
  if ( !v9 )
    return 0;
  if ( ((int (__thiscall *)(FARPROC, signed int, const wchar_t *, _DWORD, signed int, int *))v1)(
         v1,
         -2147483646,
         L"SOFTWARE\\Wow6432Node\\Microsoft\\VisualStudio\\14.0\\Setup\\VC",
         0,
         1,
         &v11) )
  {
    FreeLibrary(v0);
    return 0;
  }
  v10 = 520;
  v4 = ((int (__thiscall *)(FARPROC, int, const wchar_t *, _DWORD, int *, WCHAR *, unsigned int *))v2)(
         v2,
         v11,
         L"ProductDir",
         0,
         &v8,
         LibFileName,
         &v10);
  ((void (__thiscall *)(FARPROC, int))v9)(v9, v11);
  FreeLibrary(v0);
  if ( v4 )
    return 0;
  if ( v8 != 1 )
    return 0;
  if ( v10 & 1 )
    return 0;
  v5 = v10 >> 1;
  if ( v10 >> 1 < 2 )
    return 0;
  v6 = (v10 >> 1) - 1;
  if ( LibFileName[v6] )
    return 0;
  if ( *((_WORD *)&v11 + v6 + 1) != 92 )
  {
    LibFileName[v6] = 92;
    v6 = v5;
  }
  if ( ~v6 < 0x12 || v6 + 17 > 0x104 )
    return 0;
  qmemcpy(&LibFileName[v6], L"bin\\MSPDB140.DLL", 0x22u);
  v7 = sub_10034941(LibFileName, 0, 0x900u);
  if ( !v7 && GetLastError() == 87 )
    v7 = sub_10034941(LibFileName, 0, 8u);
  return v7;
}
// 100A4048: using guessed type wchar_t aBinMspdb140Dll[17];
// 100A4120: using guessed type wchar_t aSoftwareWow643[58];
// 100A41AC: using guessed type wchar_t aProductdir[11];
// 100440BB: using guessed type WCHAR LibFileName[260];

//----- (10044322) --------------------------------------------------------
int __cdecl sub_10044322(int a1, int a2, char a3, int a4, LPWSTR lpFilename, DWORD nSize)
{
  int v6; // ecx
  char *v7; // ecx
  unsigned int v8; // esi
  unsigned int v9; // edx
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int *v12; // ecx
  HMODULE v13; // eax
  FARPROC v15; // esi
  int v16; // edi
  LPVOID v17; // ecx
  void *v18; // ST1C_4
  HANDLE v19; // eax
  SIZE_T v20; // esi
  HANDLE v21; // eax
  void *v22; // eax
  char v23; // al
  unsigned int v24; // ebx
  unsigned int i; // eax
  int v26; // edi
  char v27; // al
  struct _MEMORY_BASIC_INFORMATION Buffer; // [esp+Ch] [ebp-4Ch]
  char v29; // [esp+28h] [ebp-30h]
  int v30; // [esp+2Ch] [ebp-2Ch]
  int v31; // [esp+30h] [ebp-28h]
  int v32; // [esp+34h] [ebp-24h]
  unsigned int v33; // [esp+38h] [ebp-20h]
  unsigned int v34; // [esp+3Ch] [ebp-1Ch]
  _DWORD *v35; // [esp+40h] [ebp-18h]
  int v36; // [esp+44h] [ebp-14h]
  unsigned int v37; // [esp+48h] [ebp-10h]
  int v38; // [esp+4Ch] [ebp-Ch]
  LPVOID lpMem; // [esp+50h] [ebp-8h]
  unsigned __int16 v40; // [esp+54h] [ebp-4h]

  *(_DWORD *)a4 = 0;
  *(_WORD *)a2 = 0;
  if ( !VirtualQuery((LPCVOID)(a1 - 1), &Buffer, 0x1Cu) )
    return 0;
  if ( !sub_10035F99((HMODULE)Buffer.AllocationBase, lpFilename, nSize) )
    return 0;
  if ( *(_WORD *)Buffer.AllocationBase != 23117 )
    return 0;
  v6 = *((_DWORD *)Buffer.AllocationBase + 15);
  if ( v6 <= 0 )
    return 0;
  v7 = (char *)Buffer.AllocationBase + v6;
  if ( *(_DWORD *)v7 != 17744 )
    return 0;
  v8 = a1 - 1 - (unsigned int)Buffer.AllocationBase;
  v9 = *((unsigned __int16 *)v7 + 3);
  v10 = 0;
  v11 = 0;
  if ( *((_WORD *)v7 + 3) )
  {
    v12 = (unsigned int *)&v7[*((unsigned __int16 *)v7 + 10) + 32];
    do
    {
      if ( v8 >= v12[1] )
      {
        v10 = v8 - v12[1];
        if ( v8 < *v12 )
          break;
      }
      ++v11;
      v12 += 10;
    }
    while ( v11 < v9 );
  }
  if ( v11 == v9 )
    return 0;
  v34 = v11 + 1;
  if ( byte_100B17D5 )
  {
    v13 = (HMODULE)dword_100B17D0;
    goto LABEL_21;
  }
  if ( dword_100B17D0 )
    return 0;
  if ( byte_100B17D4 || (byte_100B17D4 = 1, (v13 = (HMODULE)sub_100440BB()) == 0) )
  {
    dword_100B17D0 = 0;
    return 0;
  }
  dword_100B17D0 = (int)v13;
  byte_100B17D5 = 1;
LABEL_21:
  v15 = GetProcAddress(v13, "PDBOpenValidate5");
  if ( !v15
    || !((int (__cdecl *)(LPWSTR, _DWORD, _DWORD, _DWORD, char *, _DWORD, _DWORD, _DWORD **))v15)(
          lpFilename,
          0,
          0,
          0,
          &v29,
          0,
          0,
          &v35) )
  {
    return 0;
  }
  v38 = 0;
  v31 = 0;
  lpMem = 0;
  if ( (*(int (__thiscall **)(_DWORD *))*v35)(v35) == 20091201
    && (*(int (__thiscall **)(_DWORD *, _DWORD, const char *, int *))(*v35 + 28))(v35, 0, "r", &v32) )
  {
    if ( (*(int (__thiscall **)(int, unsigned int, unsigned int, int *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v32 + 32))(
           v32,
           v34,
           v10,
           &v36,
           0,
           0,
           0) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, int *))(*(_DWORD *)v36 + 104))(v36, &v38) )
      {
        v16 = v38;
        if ( v38 )
        {
          while ( 1 )
          {
            if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16) )
            {
              v17 = lpMem;
LABEL_36:
              v18 = v17;
              v19 = GetProcessHeap();
              HeapFree(v19, 0, v18);
              goto LABEL_37;
            }
            if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD, unsigned int *, unsigned __int16 *, int *, unsigned int *, _DWORD))(*(_DWORD *)v38 + 12))(
                    v38,
                    0,
                    &v33,
                    &v40,
                    &v30,
                    &v37,
                    0) )
              goto LABEL_37;
            if ( v40 == v34 && v33 <= v10 && v10 < v33 + v30 )
              break;
            v16 = v38;
          }
          if ( v37 )
          {
            if ( v37 < 0x1FFFFFFF )
            {
              v20 = 8 * v37;
              v21 = GetProcessHeap();
              v22 = HeapAlloc(v21, 0, v20);
              lpMem = v22;
              if ( v22 )
              {
                v23 = (*(int (__thiscall **)(int, unsigned int *, _DWORD, _DWORD, _DWORD, unsigned int *, void *))(*(_DWORD *)v38 + 12))(
                        v38,
                        &v34,
                        0,
                        0,
                        0,
                        &v37,
                        v22);
                v17 = lpMem;
                if ( v23 )
                {
                  v24 = v10 - v33;
                  if ( v24 >= *(_DWORD *)lpMem )
                  {
                    for ( i = 1; i < v37; ++i )
                    {
                      if ( v24 < *((_DWORD *)lpMem + 2 * i) )
                        break;
                    }
                    v26 = v36;
                    *(_DWORD *)a4 = *((_DWORD *)lpMem + 2 * i - 1) & 0xFFFFFF;
                    v27 = (*(int (__thiscall **)(int, unsigned int, int, char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v26 + 112))(
                            v26,
                            v34,
                            a2,
                            &a3,
                            0,
                            0,
                            0);
                    v17 = lpMem;
                    if ( v27 )
                      v31 = 1;
                  }
                }
                goto LABEL_36;
              }
            }
          }
LABEL_37:
          (**(void (__thiscall ***)(int))v38)(v38);
        }
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v36 + 64))(v36);
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v32 + 56))(v32);
  }
  (*(void (__fastcall **)(_DWORD *, _DWORD))(*v35 + 44))(v35, *v35);
  return v31;
}
// 100B17D0: using guessed type int dword_100B17D0;
// 100B17D4: using guessed type char byte_100B17D4;
// 100B17D5: using guessed type char byte_100B17D5;
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10044798) --------------------------------------------------------
int sub_10044798()
{
  int v5; // edi
  int v11; // eax
  int v12; // edi
  int v13; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v22; // [esp+0h] [ebp-24h]
  int v23; // [esp+4h] [ebp-20h]
  int v24; // [esp+8h] [ebp-1Ch]
  int v25; // [esp+Ch] [ebp-18h]
  int v26; // [esp+10h] [ebp-14h]
  int v27; // [esp+14h] [ebp-10h]
  int v28; // [esp+18h] [ebp-Ch]
  int v29; // [esp+1Ch] [ebp-8h]
  int v30; // [esp+20h] [ebp-4h]

  dword_100B17D8 = 0;
  dword_100B0240 |= 1u;
  if ( IsProcessorFeaturePresent(0xAu) )
  {
    v27 = 0;
    _EAX = 0;
    __asm { cpuid }
    v28 = _EAX;
    v5 = _EBX ^ 0x756E6547;
    v30 = _EDX ^ 0x49656E69;
    v29 = _ECX ^ 0x6C65746E;
    _EAX = 1;
    __asm { cpuid }
    v22 = _EAX;
    v23 = _EBX;
    v24 = _ECX;
    v25 = _EDX;
    if ( v5 | v29 | v30
      || (v11 = v22 & 0xFFF3FF0, (v22 & 0xFFF3FF0) != 67264)
      && v11 != 132704
      && v11 != 132720
      && v11 != 198224
      && v11 != 198240
      && v11 != 198256 )
    {
      v12 = dword_100B17DC;
    }
    else
    {
      v12 = dword_100B17DC | 1;
      dword_100B17DC |= 1u;
    }
    v13 = v24;
    _EAX = 7;
    v30 = v24;
    if ( v28 < 7 )
    {
      _EBX = v27;
    }
    else
    {
      __asm { cpuid }
      v22 = _EAX;
      v23 = _EBX;
      v24 = _ECX;
      v13 = v30;
      v25 = _EDX;
      if ( _EBX & 0x200 )
        dword_100B17DC = v12 | 2;
    }
    v18 = dword_100B0240 | 2;
    dword_100B17D8 = 1;
    dword_100B0240 |= 2u;
    if ( v13 & 0x100000 )
    {
      v19 = v18 | 4;
      dword_100B17D8 = 2;
      dword_100B0240 = v19;
      if ( v13 & 0x8000000 )
      {
        if ( v13 & 0x10000000 )
        {
          __asm { xgetbv }
          v26 = v19;
          v27 = _EDX;
          if ( (v19 & 6) == 6 )
          {
            v20 = dword_100B0240 | 8;
            dword_100B17D8 = 3;
            dword_100B0240 |= 8u;
            if ( _EBX & 0x20 )
            {
              dword_100B17D8 = 5;
              dword_100B0240 = v20 | 0x20;
              if ( (_EBX & 0xD0030000) == -805109760 && (v26 & 0xE0) == 224 )
              {
                dword_100B0240 |= 0x40u;
                dword_100B17D8 = 6;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
// 100B0240: using guessed type int dword_100B0240;
// 100B17D8: using guessed type int dword_100B17D8;
// 100B17DC: using guessed type int dword_100B17DC;

//----- (100449E1) --------------------------------------------------------
signed int sub_100449E1()
{
  return 1;
}

//----- (100449E5) --------------------------------------------------------
BOOL sub_100449E5()
{
  return dword_100B2A10 != 0;
}
// 100B2A10: using guessed type int dword_100B2A10;

//----- (10044A00) --------------------------------------------------------
unsigned int __cdecl sub_10044A00(unsigned int a1, unsigned int a2, unsigned int a3)
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
              JUMPOUT(__CS__, off_10044C64[v4]);
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
// 10044C64: using guessed type void *off_10044C64[4];
// 100B0240: using guessed type int dword_100B0240;
// 100B17DC: using guessed type int dword_100B17DC;

//----- (100450E0) --------------------------------------------------------
int __cdecl sub_100450E0(_DWORD *a1, int a2)
{
  int v2; // ecx
  int result; // eax
  int v4; // ecx

  if ( *a1 != -2 )
    v2 = *(_DWORD *)(*a1 + a2) ^ (a2 + a1[1]);
  result = a1[2];
  v4 = *(_DWORD *)(result + a2) ^ (a2 + a1[3]);
  return result;
}

//----- (10045120) --------------------------------------------------------
int __cdecl SEH_1009A010(PEXCEPTION_RECORD ExceptionRecord, PVOID TargetFrame, int a3)
{
  DWORD v3; // ST0C_4
  char *v4; // esi
  _DWORD *v5; // ST04_4
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  char v12; // cl
  EXCEPTION_RECORD *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // ST08_4
  PEXCEPTION_RECORD v17; // [esp+Ch] [ebp-1Ch]
  int v18; // [esp+10h] [ebp-18h]
  int v19; // [esp+14h] [ebp-14h]
  char *v20; // [esp+18h] [ebp-10h]
  int v21; // [esp+1Ch] [ebp-Ch]
  _DWORD *v22; // [esp+20h] [ebp-8h]
  char v23; // [esp+27h] [ebp-1h]

  v23 = 0;
  v3 = ExceptionRecord->ExceptionCode;
  v21 = 1;
  ExceptionRecord->ExceptionCode = sub_100360D9(v3);
  v4 = (char *)TargetFrame + 16;
  v5 = (_DWORD *)(__security_cookie ^ *((_DWORD *)TargetFrame + 2));
  v20 = (char *)TargetFrame + 16;
  v22 = v5;
  sub_100450E0(v5, (int)TargetFrame + 16);
  sub_10033DF2(a3);
  v6 = *((_DWORD *)TargetFrame + 3);
  if ( ExceptionRecord->ExceptionFlags & 0x66 )
  {
    if ( v6 != -2 )
    {
      sub_1003434C(v4, &__security_cookie);
LABEL_14:
      sub_100450E0(v22, (int)v4);
      return v21;
    }
  }
  else
  {
    v17 = ExceptionRecord;
    v18 = a3;
    *((_DWORD *)TargetFrame - 1) = &v17;
    if ( v6 != -2 )
    {
      do
      {
        v7 = v6 + 2 * (v6 + 2);
        v8 = v22[v7];
        v9 = (int)&v22[v7];
        v10 = *(_DWORD *)(v9 + 4);
        v19 = v9;
        if ( v10 )
        {
          v11 = sub_10035CB0(v10, v4);
          v12 = 1;
          v23 = 1;
          if ( v11 < 0 )
          {
            v21 = 0;
            goto LABEL_14;
          }
          if ( v11 > 0 )
          {
            v14 = ExceptionRecord;
            if ( ExceptionRecord->ExceptionCode == -529697949 && sub_10034400 )
            {
              if ( sub_10033A46(&off_100A41E0) )
              {
                sub_10034400(ExceptionRecord, 1);
                v4 = v20;
              }
              v14 = ExceptionRecord;
            }
            sub_10035B0C(TargetFrame, v14);
            v15 = TargetFrame;
            if ( *((_DWORD *)TargetFrame + 3) != v6 )
            {
              sub_1003434C(v4, &__security_cookie);
              v15 = TargetFrame;
            }
            v16 = v22;
            v15[3] = v8;
            sub_100450E0(v16, (int)v4);
            sub_10035215(*(_DWORD *)(v19 + 8), v4);
            JUMPOUT(*(_DWORD *)byte_1004527D);
          }
        }
        else
        {
          v12 = v23;
        }
        v6 = v8;
      }
      while ( v8 != -2 );
      if ( !v12 )
        return v21;
      goto LABEL_14;
    }
  }
  return v21;
}
// 10033A46: using guessed type _DWORD __cdecl sub_10033A46(_DWORD);
// 10033DF2: using guessed type _DWORD __cdecl sub_10033DF2(_DWORD);
// 1003434C: using guessed type _DWORD __stdcall sub_1003434C(_DWORD, _DWORD);
// 10034400: using guessed type _DWORD __cdecl sub_10034400(_DWORD, _DWORD);
// 10035215: using guessed type int __fastcall sub_10035215(_DWORD, _DWORD);
// 10035CB0: using guessed type int __fastcall sub_10035CB0(_DWORD, _DWORD);
// 100360D9: using guessed type _DWORD __cdecl sub_100360D9(_DWORD);
// 100A41E0: using guessed type int (__cdecl *off_100A41E0)(int, int);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (100452D5) --------------------------------------------------------
int __cdecl sub_100452D5(int a1)
{
  return sub_10033366(a1);
}
// 10033366: using guessed type int __cdecl sub_10033366(_DWORD);

//----- (100453FF) --------------------------------------------------------
int __cdecl sub_100453FF(int a1, int a2)
{
  _BYTE *v3; // ecx
  _BYTE *v4; // eax
  bool v5; // cf
  unsigned __int8 v6; // dl

  if ( a1 == a2 )
    return 0;
  v3 = (_BYTE *)(a2 + 5);
  v4 = (_BYTE *)(a1 + 5);
  while ( 1 )
  {
    v5 = *v4 < *v3;
    if ( *v4 != *v3 )
      break;
    if ( !*v4 )
      return 0;
    v6 = v4[1];
    v5 = v6 < v3[1];
    if ( v6 != v3[1] )
      break;
    v4 += 2;
    v3 += 2;
    if ( !v6 )
      return 0;
  }
  return -v5 | 1;
}

//----- (1004544A) --------------------------------------------------------
PSINGLE_LIST_ENTRY __cdecl sub_1004544A(PSLIST_HEADER ListHead)
{
  PSINGLE_LIST_ENTRY result; // eax
  PSINGLE_LIST_ENTRY v2; // esi

  result = InterlockedFlushSList(ListHead);
  if ( result )
  {
    do
    {
      v2 = result->Next;
      sub_10034CD4(result);
      result = v2;
    }
    while ( v2 );
  }
  return result;
}

//----- (1004559B) --------------------------------------------------------
char sub_1004559B()
{
  if ( !(unsigned __int8)sub_10033811() )
    return 0;
  if ( !(unsigned __int8)sub_10034FA9() )
  {
    sub_1003556C();
    return 0;
  }
  return 1;
}
// 10033811: using guessed type int sub_10033811(void);
// 10034FA9: using guessed type int sub_10034FA9(void);
// 1003556C: using guessed type int sub_1003556C(void);

//----- (100455C1) --------------------------------------------------------
bool sub_100455C1()
{
  return sub_10034A2C() != 0;
}
// 10034A2C: using guessed type int sub_10034A2C(void);

//----- (100455CE) --------------------------------------------------------
char sub_100455CE()
{
  sub_100343CE();
  return 1;
}
// 100343CE: using guessed type int sub_100343CE(void);

//----- (100455D8) --------------------------------------------------------
char __cdecl sub_100455D8(char a1)
{
  if ( !a1 )
  {
    sub_10033DDE();
    sub_1003556C();
  }
  return 1;
}
// 10033DDE: using guessed type int sub_10033DDE(void);
// 1003556C: using guessed type int sub_1003556C(void);

//----- (10045601) --------------------------------------------------------
_DWORD *__cdecl sub_10045601(_DWORD *a1)
{
  _DWORD *result; // eax
  int v2; // ecx
  int v3; // edx

  result = a1;
  if ( a1 && *a1 == -529697949 && a1[4] == 3 && (a1[5] == 429065504 || a1[5] == 429065505 || a1[5] == 429065506) )
  {
    v2 = a1[7];
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 4);
      if ( v3 )
      {
        result = (_DWORD *)sub_10033F32(a1[6], v3);
      }
      else if ( *(_BYTE *)v2 & 0x10 )
      {
        result = (_DWORD *)a1[6];
        if ( *result )
          result = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*result + 8))(
                               *(_DWORD *)(*(_DWORD *)*result + 8),
                               *result);
      }
    }
  }
  return result;
}
// 10033F32: using guessed type _DWORD __stdcall sub_10033F32(_DWORD, _DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (100456CA) --------------------------------------------------------
int __stdcall sub_100456CA(int a1, int (__thiscall *a2)(int))
{
  return a2(a1);
}

//----- (100456DA) --------------------------------------------------------
int __cdecl sub_100456DA(_DWORD *a1, char a2)
{
  int v2; // esi
  int v4; // esi

  if ( a2 )
  {
    v2 = *a1;
    if ( *(_DWORD *)*a1 == -529697949
      && *(_DWORD *)(v2 + 16) == 3
      && (*(_DWORD *)(v2 + 20) == 429065504 || *(_DWORD *)(v2 + 20) == 429065505 || *(_DWORD *)(v2 + 20) == 429065506) )
    {
      *(_DWORD *)(sub_10033FF0() + 16) = v2;
      v4 = a1[1];
      *(_DWORD *)(sub_10033FF0() + 20) = v4;
      sub_10033069();
    }
  }
  return 0;
}
// 10033069: using guessed type int sub_10033069(void);

//----- (1004574C) --------------------------------------------------------
signed int __cdecl sub_1004574C(int a1)
{
  _DWORD *v1; // eax

  v1 = *(_DWORD **)(sub_10033FF0() + 36);
  if ( !v1 )
    return 1;
  while ( *v1 != a1 )
  {
    v1 = (_DWORD *)v1[1];
    if ( !v1 )
      return 1;
  }
  return 0;
}

//----- (1004578B) --------------------------------------------------------
int __cdecl sub_1004578B(int a1, _DWORD *a2)
{
  int v2; // esi
  int result; // eax

  v2 = a2[1];
  result = a1 + *a2;
  if ( v2 >= 0 )
    result += v2 + *(_DWORD *)(*(_DWORD *)(v2 + a1) + a2[2]);
  return result;
}

//----- (100457B9) --------------------------------------------------------
int __cdecl sub_100457B9(int a1)
{
  _DWORD *v1; // edi
  int v2; // eax
  int v4; // esi

  v1 = *(_DWORD **)a1;
  if ( **(_DWORD **)a1 == -532462766 || *v1 == -532459699 )
  {
    if ( *(_DWORD *)(sub_10033FF0() + 24) > 0 )
    {
      v2 = sub_10033FF0();
      --*(_DWORD *)(v2 + 24);
    }
  }
  else if ( *v1 == -529697949 )
  {
    *(_DWORD *)(sub_10033FF0() + 16) = v1;
    v4 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(sub_10033FF0() + 20) = v4;
    sub_10033069();
  }
  return 0;
}
// 10033069: using guessed type int sub_10033069(void);

//----- (10045883) --------------------------------------------------------
int sub_10045883()
{
  return sub_10033FF0() + 16;
}

//----- (1004588E) --------------------------------------------------------
int sub_1004588E()
{
  return sub_10033FF0() + 20;
}

//----- (100458A9) --------------------------------------------------------
signed int __usercall sub_100458A9@<eax>(int edx0@<edx>, int ecx0@<ecx>, int a1, _DWORD **a2)
{
  _DWORD *v4; // eax
  int *v5; // eax
  int v6; // ecx
  int v7; // esi
  int v8; // eax

  if ( !a2
    || (v4 = *a2) == 0
    || *v4 != -529697949
    || v4[4] != 3
    || v4[5] != 429065504 && v4[5] != 429065505 && v4[5] != 429065506 )
  {
    sub_100354D1(ecx0, edx0);
  }
  v5 = *(int **)(v4[7] + 12);
  v6 = *v5;
  v7 = (int)(v5 + 1);
  if ( *v5 <= 0 )
    return 0;
  while ( 1 )
  {
    v8 = strcmp((const char *)(a1 + 8), (const char *)(*(_DWORD *)(*(_DWORD *)v7 + 4) + 8));
    if ( v8 )
      v8 = -(v8 < 0) | 1;
    if ( !v8 )
      break;
    --v6;
    v7 += 4;
    if ( v6 <= 0 )
      return 0;
  }
  return 1;
}
// 100354D1: using guessed type int __fastcall sub_100354D1(_DWORD, _DWORD);

//----- (10045980) --------------------------------------------------------
__m128i *__cdecl sub_10045980(__m128i *a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned int v3; // ecx
  __m128i *v4; // edi
  unsigned int v5; // eax
  __m128i v7; // xmm0
  __m128i *v8; // edi

  v3 = a3;
  v4 = a1;
  if ( !a3 )
    return a1;
  v5 = 16843009 * a2;
  if ( a3 <= 0x20 )
    goto LABEL_16;
  if ( a3 >= 0x80 )
  {
    if ( _bittest(&dword_100B17DC, 1u) )
    {
      memset(a1, a2, a3);
      return a1;
    }
    if ( !_bittest(&dword_100B0240, 1u) )
      goto LABEL_16;
    v7 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
    *a1 = v7;
    v4 = (__m128i *)((unsigned int)&a1[1] & 0xFFFFFFF0);
    v3 = &a1->m128i_i8[a3] - (__int8 *)v4;
    if ( v3 > 0x80 )
    {
      do
      {
        _mm_store_si128(v4, v7);
        _mm_store_si128(v4 + 1, v7);
        _mm_store_si128(v4 + 2, v7);
        _mm_store_si128(v4 + 3, v7);
        _mm_store_si128(v4 + 4, v7);
        _mm_store_si128(v4 + 5, v7);
        _mm_store_si128(v4 + 6, v7);
        _mm_store_si128(v4 + 7, v7);
        v4 += 8;
        v3 -= 128;
      }
      while ( v3 & 0xFFFFFF00 );
      goto LABEL_12;
    }
  }
  if ( !_bittest(&dword_100B0240, 1u) )
  {
LABEL_16:
    while ( v3 & 3 )
    {
      LOBYTE(v4->m128i_i32[0]) = a2;
      v4 = (__m128i *)((char *)v4 + 1);
      --v3;
    }
    if ( v3 & 4 )
    {
      v4->m128i_i32[0] = v5;
      v4 = (__m128i *)((char *)v4 + 4);
      v3 -= 4;
    }
    for ( ; v3 & 0xFFFFFFF8; v3 -= 8 )
    {
      v4->m128i_i32[0] = v5;
      v4->m128i_i32[1] = v5;
      v4 = (__m128i *)((char *)v4 + 8);
    }
    return a1;
  }
  v7 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v5), 0);
LABEL_12:
  if ( v3 < 0x20 )
    goto LABEL_25;
  do
  {
    _mm_storeu_si128(v4, v7);
    _mm_storeu_si128(v4 + 1, v7);
    v4 += 2;
    v3 -= 32;
  }
  while ( v3 >= 0x20 );
  if ( v3 & 0x1F )
  {
LABEL_25:
    v8 = (__m128i *)((char *)v4 + v3 - 32);
    _mm_storeu_si128(v8, v7);
    _mm_storeu_si128(v8 + 1, v7);
    return a1;
  }
  return a1;
}
// 100B0240: using guessed type int dword_100B0240;
// 100B17DC: using guessed type int dword_100B17DC;

//----- (10045B30) --------------------------------------------------------
DWORD __cdecl sub_10045B30(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)
{
  return GetModuleFileNameW(hModule, lpFilename, nSize);
}

//----- (10045B5A) --------------------------------------------------------
HMODULE __cdecl sub_10045B5A(LPCWSTR lpLibFileName, HANDLE hFile, DWORD dwFlags)
{
  return LoadLibraryExW(lpLibFileName, hFile, dwFlags);
}

//----- (10045B80) --------------------------------------------------------
int __cdecl sub_10045B80(_DWORD *a1, int a2, unsigned int a3)
{
  int result; // eax
  unsigned int v4; // esi
  int v5; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // [esp-8h] [ebp-28h]
  signed int (__cdecl *v10)(int, unsigned int, int, unsigned int *); // [esp-4h] [ebp-24h]
  unsigned int v11; // [esp+0h] [ebp-20h]
  unsigned int v12; // [esp+4h] [ebp-1Ch]
  int v13; // [esp+8h] [ebp-18h]
  _DWORD *v14; // [esp+Ch] [ebp-14h]

  v14 = a1;
  v13 = a2;
  v12 = a3;
  v10 = sub_10045C50;
  v11 = (unsigned int)&v9 ^ __security_cookie;
  while ( 1 )
  {
    result = a2;
    v4 = *(_DWORD *)(a2 + 12);
    if ( v4 == -2 || a3 != -2 && v4 <= a3 )
      break;
    v5 = 3 * v4;
    v6 = (*a1 ^ *(_DWORD *)(a2 + 8)) + 4 * v5 + 16;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)((*a1 ^ *(_DWORD *)(a2 + 8)) + 4 * v5 + 0x10);
    if ( !*(_DWORD *)(v6 + 4) )
    {
      v7 = *(_DWORD *)(v6 + 8);
      sub_10035DA0(257);
      v8 = *(_DWORD *)(v6 + 8);
      sub_100349E6(1);
    }
  }
  return result;
}
// 100349E6: using guessed type int __thiscall sub_100349E6(_DWORD);
// 10035DA0: using guessed type _DWORD __stdcall sub_10035DA0(_DWORD);

//----- (10045C50) --------------------------------------------------------
signed int __cdecl sub_10045C50(int a1, unsigned int a2, int a3, unsigned int *a4)
{
  signed int result; // eax
  int v5; // ecx
  int v6; // ebp

  result = 1;
  if ( *(_DWORD *)(a1 + 4) & 6 )
  {
    v5 = a2 ^ *(_DWORD *)(a2 + 8);
    v6 = *(_DWORD *)(a2 + 24);
    sub_1003420C(*(_DWORD *)(a2 + 20), *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 12));
    *a4 = a2;
    result = 3;
  }
  return result;
}
// 1003420C: using guessed type _DWORD __cdecl sub_1003420C(_DWORD, _DWORD, _DWORD);

//----- (10045CF0) --------------------------------------------------------
int __thiscall sub_10045CF0(int (__fastcall *this)(_DWORD, _DWORD))
{
  return this(this, 0);
}

//----- (10045D10) --------------------------------------------------------
int __thiscall sub_10045D10(int (__fastcall *this)(_DWORD, _DWORD))
{
  int (__fastcall *v1)(_DWORD, _DWORD); // esi

  v1 = this;
  sub_10035DA0(1);
  return v1(0, 0);
}
// 10035DA0: using guessed type _DWORD __stdcall sub_10035DA0(_DWORD);

//----- (10045D30) --------------------------------------------------------
void __fastcall sub_10045D30(PVOID TargetFrame, PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, &loc_10045D45, ExceptionRecord, 0);
}

//----- (10045D50) --------------------------------------------------------
int __fastcall sub_10045D50(int a1, int a2, int a3, int a4)
{
  return sub_1003420C(a4, a1, a2);
}
// 1003420C: using guessed type _DWORD __cdecl sub_1003420C(_DWORD, _DWORD, _DWORD);

//----- (10045D79) --------------------------------------------------------
int (*__cdecl sub_10045D79(int a1))()
{
  int (*result)(); // eax
  unsigned int v2; // ecx

  result = __guard_check_icall_fptr[0];
  if ( __guard_check_icall_fptr[0] != j_nullsub_1 )
  {
    v2 = __readfsdword(0x18u);
    result = *(int (**)())(a1 + 196);
    if ( (unsigned int)result < *(_DWORD *)(v2 + 8) || (unsigned int)result > *(_DWORD *)(v2 + 4) )
      __fastfail(0xDu);
  }
  return result;
}
// 1003524C: using guessed type int j_nullsub_1();
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10045DB5) --------------------------------------------------------
int (*__cdecl sub_10045DB5(int a1))()
{
  int (*result)(); // eax
  unsigned int v2; // ecx

  result = __guard_check_icall_fptr[0];
  if ( __guard_check_icall_fptr[0] != j_nullsub_1 )
  {
    v2 = __readfsdword(0x18u);
    result = *(int (**)())(a1 + 16);
    if ( (unsigned int)result < *(_DWORD *)(v2 + 8) || (unsigned int)result > *(_DWORD *)(v2 + 4) )
      __fastfail(0xDu);
  }
  return result;
}
// 1003524C: using guessed type int j_nullsub_1();
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10045E34) --------------------------------------------------------
_DWORD *__thiscall sub_10045E34(_DWORD *this, _BYTE *a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // eax

  v3 = this;
  v4 = 0;
  *this = 0;
  this[1] = 0;
  if ( a2 && *a2 )
  {
    do
      ++v4;
    while ( a2[v4] );
    if ( v4 )
      sub_10035B02(a2, v4);
  }
  return v3;
}
// 10035B02: using guessed type _DWORD __stdcall sub_10035B02(_DWORD, _DWORD);

//----- (10045E94) --------------------------------------------------------
_DWORD *__thiscall sub_10045E94(_DWORD *this, _BYTE *a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // eax

  v3 = this;
  v4 = 0;
  *this = 0;
  this[1] = 0;
  if ( a2 && *a2 )
  {
    do
      ++v4;
    while ( a2[v4] );
    if ( v4 )
      sub_1003626E(a2, v4);
  }
  return v3;
}
// 1003626E: using guessed type _DWORD __stdcall sub_1003626E(_DWORD, _DWORD);

//----- (10045ED3) --------------------------------------------------------
_DWORD *__thiscall sub_10045ED3(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v4; // esi
  _BYTE *v5; // eax

  v4 = this;
  *this = &pcharNode::`vftable';
  v5 = (_BYTE *)sub_100356B6(a3);
  v4[1] = v5;
  v4[2] = a3;
  if ( v5 )
    sub_1004E83E(v5, a2, a3);
  else
    v4[2] = 0;
  return v4;
}
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 100A5230: using guessed type void *pcharNode::`vftable';

//----- (10045F23) --------------------------------------------------------
_DWORD *__thiscall sub_10045F23(_DWORD *this, _BYTE *a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // eax

  v3 = this;
  v4 = 0;
  *this = 0;
  this[1] = 0;
  if ( a2 && *a2 )
  {
    do
      ++v4;
    while ( a2[v4] );
    if ( v4 )
      sub_10033654(a2, v4);
  }
  return v3;
}
// 10033654: using guessed type _DWORD __stdcall sub_10033654(_DWORD, _DWORD);

//----- (10045F62) --------------------------------------------------------
_DWORD *__thiscall sub_10045F62(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v4; // esi
  _BYTE *v5; // eax

  v4 = this;
  *this = &pcharNode::`vftable';
  v5 = (_BYTE *)sub_100356B6(a3);
  v4[1] = v5;
  v4[2] = a3;
  if ( v5 )
    sub_1004E83E(v5, a2, a3);
  else
    v4[2] = 0;
  return v4;
}
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 100A5230: using guessed type void *pcharNode::`vftable';

//----- (10046012) --------------------------------------------------------
void __thiscall sub_10046012(_BYTE *this, int a2)
{
  _BYTE *v2; // esi
  _DWORD *v3; // eax
  int v4; // ecx

  v2 = this;
  if ( a2 )
  {
    v3 = (_DWORD *)sub_100356B6(16);
    if ( v3 )
    {
      v4 = *(_DWORD *)v2;
      v3[3] = -1;
      *v3 = &pairNode::`vftable';
      v3[1] = v4;
      v3[2] = a2;
      *(_DWORD *)v2 = v3;
      return;
    }
    *(_DWORD *)v2 = 0;
  }
  v2[4] = 3;
}
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 100A5278: using guessed type void *pairNode::`vftable';

//----- (10046063) --------------------------------------------------------
void __thiscall sub_10046063(_BYTE *this, int a2)
{
  _BYTE *v2; // esi
  _DWORD *v3; // eax
  int v4; // ecx

  v2 = this;
  if ( a2 )
  {
    v3 = (_DWORD *)sub_100356B6(16);
    if ( v3 )
    {
      v4 = *(_DWORD *)v2;
      v3[3] = -1;
      *v3 = &pairNode::`vftable';
      v3[1] = v4;
      v3[2] = a2;
      *(_DWORD *)v2 = v3;
      return;
    }
    *(_DWORD *)v2 = 0;
  }
  v2[4] = 3;
}
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 100A5278: using guessed type void *pairNode::`vftable';

//----- (100460B4) --------------------------------------------------------
void __thiscall sub_100460B4(_BYTE *this, int a2)
{
  _BYTE *v2; // esi
  _DWORD *v3; // eax
  int v4; // ecx

  v2 = this;
  if ( a2 )
  {
    v3 = (_DWORD *)sub_100356B6(16);
    if ( v3 )
    {
      v4 = *(_DWORD *)v2;
      v3[3] = -1;
      *v3 = &pairNode::`vftable';
      v3[1] = v4;
      v3[2] = a2;
      *(_DWORD *)v2 = v3;
      return;
    }
    *(_DWORD *)v2 = 0;
  }
  v2[4] = 3;
}
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 100A5278: using guessed type void *pairNode::`vftable';

//----- (10046105) --------------------------------------------------------
void __thiscall sub_10046105(_BYTE *this, int a2)
{
  _BYTE *v2; // esi
  _DWORD *v3; // eax
  int v4; // ecx

  v2 = this;
  if ( a2 )
  {
    v3 = (_DWORD *)sub_100356B6(16);
    if ( v3 )
    {
      v4 = *(_DWORD *)v2;
      v3[3] = -1;
      *v3 = &pairNode::`vftable';
      v3[1] = v4;
      v3[2] = a2;
      *(_DWORD *)v2 = v3;
      return;
    }
    *(_DWORD *)v2 = 0;
  }
  v2[4] = 3;
}
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 100A5278: using guessed type void *pairNode::`vftable';

//----- (10046156) --------------------------------------------------------
void __thiscall sub_10046156(_BYTE *this, int a2)
{
  _BYTE *v2; // esi
  _DWORD *v3; // eax
  int v4; // ecx

  v2 = this;
  if ( a2 )
  {
    v3 = (_DWORD *)sub_100356B6(16);
    if ( v3 )
    {
      v4 = *(_DWORD *)v2;
      v3[3] = -1;
      *v3 = &pairNode::`vftable';
      v3[1] = v4;
      v3[2] = a2;
      *(_DWORD *)v2 = v3;
      return;
    }
    *(_DWORD *)v2 = 0;
  }
  v2[4] = 3;
}
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 100A5278: using guessed type void *pairNode::`vftable';

//----- (100461A7) --------------------------------------------------------
void __thiscall sub_100461A7(_BYTE *this, char *a2, int a3)
{
  _BYTE *v3; // esi
  int v4; // eax
  char v5; // cl

  v3 = this;
  if ( a2 && a3 > 0 )
  {
    if ( a3 == 1 )
    {
      v4 = sub_100356B6(8);
      if ( v4 )
      {
        v5 = *a2;
        *(_DWORD *)v4 = &charNode::`vftable';
        *(_BYTE *)(v4 + 4) = v5;
        goto LABEL_8;
      }
    }
    else
    {
      v4 = sub_100356B6(12);
      if ( v4 )
      {
        *(_DWORD *)v4 = &pcharNode::`vftable';
        *(_DWORD *)(v4 + 4) = a2;
        *(_DWORD *)(v4 + 8) = a3;
LABEL_8:
        *(_DWORD *)v3 = v4;
        return;
      }
    }
    *(_DWORD *)v3 = 0;
    v3[4] = 3;
  }
  else
  {
    this[4] = 2;
  }
}
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 100A5218: using guessed type void *charNode::`vftable';
// 100A5230: using guessed type void *pcharNode::`vftable';

//----- (1004622C) --------------------------------------------------------
void __thiscall sub_1004622C(_BYTE *this, char *a2, int a3)
{
  _BYTE *v3; // esi
  int v4; // eax
  char v5; // cl
  int v6; // [esp+8h] [ebp-4h]

  v3 = this;
  if ( !a2 || a3 <= 0 )
  {
    this[4] = 2;
    return;
  }
  if ( a3 != 1 )
  {
    if ( sub_100356B6(12) )
    {
      LOBYTE(v6) = 0;
      v4 = sub_100330C8(a2, a3, v6);
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v4 = sub_100356B6(8);
  if ( !v4 )
  {
LABEL_6:
    v4 = 0;
    goto LABEL_7;
  }
  v5 = *a2;
  *(_DWORD *)v4 = &charNode::`vftable';
  *(_BYTE *)(v4 + 4) = v5;
LABEL_7:
  *(_DWORD *)v3 = v4;
  if ( !v4 )
    v3[4] = 3;
}
// 100330C8: using guessed type _DWORD __stdcall sub_100330C8(_DWORD, _DWORD, _DWORD);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 100A5218: using guessed type void *charNode::`vftable';

//----- (100462B9) --------------------------------------------------------
void __thiscall sub_100462B9(_BYTE *this, char *a2, int a3)
{
  _BYTE *v3; // esi
  int v4; // eax
  char v5; // cl
  int v6; // [esp+8h] [ebp-4h]

  v3 = this;
  if ( !a2 || a3 <= 0 )
  {
    this[4] = 2;
    return;
  }
  if ( a3 != 1 )
  {
    if ( sub_100356B6(12) )
    {
      LOBYTE(v6) = 0;
      v4 = sub_10035977(a2, a3, v6);
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  v4 = sub_100356B6(8);
  if ( !v4 )
  {
LABEL_6:
    v4 = 0;
    goto LABEL_7;
  }
  v5 = *a2;
  *(_DWORD *)v4 = &charNode::`vftable';
  *(_BYTE *)(v4 + 4) = v5;
LABEL_7:
  *(_DWORD *)v3 = v4;
  if ( !v4 )
    v3[4] = 3;
}
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 10035977: using guessed type _DWORD __stdcall sub_10035977(_DWORD, _DWORD, _DWORD);
// 100A5218: using guessed type void *charNode::`vftable';

//----- (10046350) --------------------------------------------------------
int __cdecl sub_10046350(int a1, float a2)
{
  double v2; // ST20_8
  double v3; // ST0C_8
  int v4; // esi
  int v5; // edi

  v2 = a2;
  v3 = a2;
  v4 = sub_10034D38(0, 0, "%lf", SLOBYTE(v3)) + 1;
  v5 = sub_100356B6(v4);
  sub_10035850(v5, v4, "%lf", a2);
  BYTE4(v2) = 0;
  sub_10034432(v5, HIDWORD(v2));
  return a1;
}
// 10034432: using guessed type _DWORD __stdcall sub_10034432(_DWORD, _DWORD);
// 10034D38: using guessed type _DWORD sub_10034D38(_DWORD, _DWORD, const char *, ...);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 10035850: using guessed type _DWORD sub_10035850(_DWORD, _DWORD, const char *, ...);

//----- (100463C8) --------------------------------------------------------
int __cdecl sub_100463C8(int a1, double a2)
{
  int v2; // ecx
  int v3; // ST20_4
  int v4; // esi
  int v5; // edi

  v3 = v2;
  v4 = sub_10034D38(0, 0, "%lf", a2) + 1;
  v5 = sub_100356B6(v4);
  sub_10035850(v5, v4, "%lf", a2);
  LOBYTE(v3) = 0;
  sub_10034432(v5, v3);
  return a1;
}
// 10034432: using guessed type _DWORD __stdcall sub_10034432(_DWORD, _DWORD);
// 10034D38: using guessed type _DWORD sub_10034D38(_DWORD, _DWORD, const char *, ...);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 10035850: using guessed type _DWORD sub_10035850(_DWORD, _DWORD, const char *, ...);

//----- (1004645A) --------------------------------------------------------
_DWORD *__thiscall sub_1004645A(_DWORD *this, unsigned __int8 **a2, char a3)
{
  _DWORD *v3; // esi
  unsigned __int8 *v4; // ecx
  unsigned __int8 v5; // al
  int v6; // ebx
  unsigned __int8 *v7; // edx
  unsigned __int8 v8; // cl

  v3 = this;
  *this = 0;
  this[1] = 0;
  v4 = *a2;
  v5 = **a2;
  if ( !v5 )
    goto LABEL_12;
  v6 = 0;
  v7 = *a2;
  do
  {
    if ( v5 == a3 )
      break;
    if ( !byte_100A5290[v5] && !(dword_100B17FC & 0x10000) )
    {
      *((_BYTE *)v3 + 4) = 2;
      return v3;
    }
    ++v6;
    *a2 = ++v7;
    v5 = *v7;
  }
  while ( *v7 );
  sub_10035B02(v4, v6);
  v8 = **a2;
  if ( !v8 )
  {
    if ( *((_BYTE *)v3 + 4) )
      return v3;
LABEL_12:
    *((_BYTE *)v3 + 4) = 1;
    return v3;
  }
  ++*a2;
  if ( v8 != a3 )
  {
    *v3 = 0;
    *((_BYTE *)v3 + 4) = 3;
  }
  return v3;
}
// 10035B02: using guessed type _DWORD __stdcall sub_10035B02(_DWORD, _DWORD);
// 100B17FC: using guessed type int dword_100B17FC;

//----- (100464FA) --------------------------------------------------------
_DWORD *__thiscall sub_100464FA(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi

  v2 = this;
  *this = 0;
  this[1] = 0;
  if ( a2[1] > 0 )
    sub_10035B02(*a2, a2[1]);
  return v2;
}
// 10035B02: using guessed type _DWORD __stdcall sub_10035B02(_DWORD, _DWORD);

//----- (10046568) --------------------------------------------------------
_DWORD *__thiscall sub_10046568(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // ebx
  char v4; // al

  v2 = this;
  v3 = 0;
  this[1] = 0;
  if ( a2 )
  {
    if ( sub_100356B6(8) )
      v3 = sub_1003482E(a2);
    this = v2;
    v4 = v3 != 0 ? 0 : 3;
  }
  else
  {
    v4 = 0;
  }
  *this = v3;
  *((_BYTE *)v2 + 4) = v4;
  return v2;
}
// 1003482E: using guessed type _DWORD __stdcall sub_1003482E(_DWORD);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);

//----- (100465C3) --------------------------------------------------------
_DWORD *__thiscall sub_100465C3(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  char v3; // cl
  int v4; // eax

  v2 = this;
  this[1] = 0;
  if ( a2 == 2 || a2 == 3 )
    v3 = a2;
  else
    v3 = 0;
  *v2 = 0;
  *((_BYTE *)v2 + 4) = v3;
  if ( a2 == 1 )
  {
    v4 = sub_10035157(1);
    *v2 = v4;
    if ( !v4 )
      *((_BYTE *)v2 + 4) = 3;
  }
  return v2;
}
// 10035157: using guessed type _DWORD __cdecl sub_10035157(_DWORD);

//----- (1004661F) --------------------------------------------------------
_DWORD *__thiscall sub_1004661F(_DWORD *this, __int64 a2)
{
  __int64 v2; // rax
  char *v3; // esi
  int v4; // edi
  char v5; // cl
  _DWORD *v7; // [esp+10h] [ebp-24h]
  char v8; // [esp+17h] [ebp-1Dh]
  char v9[3]; // [esp+2Dh] [ebp-7h]

  HIDWORD(v2) = HIDWORD(a2);
  v7 = this;
  v9[0] = 0;
  v8 = 0;
  *this = 0;
  this[1] = 0;
  v3 = v9;
  v4 = a2;
  if ( a2 < 0 )
  {
    v4 = -(signed int)a2;
    v8 = 1;
    HIDWORD(v2) = (unsigned __int64)-a2 >> 32;
  }
  do
  {
    --v3;
    LODWORD(v2) = sub_100334CE(v4, HIDWORD(v2), 10, 0);
    v4 = v2;
    *v3 = v5 + 48;
  }
  while ( v2 );
  if ( v8 )
    *--v3 = 45;
  sub_1003626E(v3, v9 - v3);
  return v7;
}
// 100334CE: using guessed type _DWORD __stdcall sub_100334CE(_DWORD, _DWORD, _DWORD, _DWORD);
// 1003626E: using guessed type _DWORD __stdcall sub_1003626E(_DWORD, _DWORD);
// 1004661F: using guessed type char var_7[3];

//----- (100466CB) --------------------------------------------------------
_DWORD *__thiscall sub_100466CB(_DWORD *this, int a2, int a3)
{
  __int64 v3; // rax
  int v4; // ebx
  _DWORD *v5; // esi
  char *v6; // edi
  char v7; // cl
  char v9[4]; // [esp+28h] [ebp-8h]

  HIDWORD(v3) = a3;
  v4 = a2;
  v5 = this;
  v9[0] = 0;
  v6 = v9;
  *this = 0;
  this[1] = 0;
  do
  {
    --v6;
    LODWORD(v3) = sub_100334CE(v4, HIDWORD(v3), 10, 0);
    v4 = v3;
    *v6 = v7 + 48;
  }
  while ( v3 );
  sub_1003626E(v6, v9 - v6);
  return v5;
}
// 100334CE: using guessed type _DWORD __stdcall sub_100334CE(_DWORD, _DWORD, _DWORD, _DWORD);
// 1003626E: using guessed type _DWORD __stdcall sub_1003626E(_DWORD, _DWORD);
// 100466CB: using guessed type char var_8[4];

//----- (10046748) --------------------------------------------------------
_DWORD *__thiscall sub_10046748(_DWORD *this)
{
  *this = &DNameNode::`vftable';
  return this;
}
// 100A5200: using guessed type void *DNameNode::`vftable';

//----- (10046777) --------------------------------------------------------
_DWORD *__thiscall sub_10046777(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *result; // eax

  memset(this + 1, 0, 0x28u);
  *this = -1;
  memset(this + 12, 0, 0x28u);
  this[11] = -1;
  dword_100B17F8 = a2;
  dword_100B17F4 = a2;
  dword_100B17FC = a4;
  dword_100B1804 = (int (__cdecl *)(_DWORD))a3;
  byte_100B1800 = 0;
  dword_100B1808 = 0;
  dword_100B180C = 0;
  result = this;
  dword_100B17E8 = (int)this;
  dword_100B17EC = (int)(this + 11);
  return result;
}
// 100B17E8: using guessed type int dword_100B17E8;
// 100B17EC: using guessed type int dword_100B17EC;
// 100B17F4: using guessed type int dword_100B17F4;
// 100B17F8: using guessed type int dword_100B17F8;
// 100B17FC: using guessed type int dword_100B17FC;
// 100B1800: using guessed type char byte_100B1800;
// 100B1804: using guessed type int (__cdecl *dword_100B1804)(_DWORD);
// 100B1808: using guessed type int dword_100B1808;
// 100B180C: using guessed type int dword_100B180C;

//----- (10046811) --------------------------------------------------------
_DWORD *__thiscall sub_10046811(_DWORD *this, int a2)
{
  int v2; // eax
  char v3; // dl

  v2 = a2;
  *this = &pDNameNode::`vftable';
  if ( a2 )
  {
    v3 = *(_BYTE *)(a2 + 4);
    if ( v3 == 2 || v3 == 3 )
      v2 = 0;
  }
  this[1] = v2;
  return this;
}
// 100A5248: using guessed type void *pDNameNode::`vftable';

//----- (10046843) --------------------------------------------------------
_DWORD *__thiscall sub_10046843(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax

  this[3] = -1;
  this[1] = a2;
  this[2] = a3;
  result = this;
  *this = &pairNode::`vftable';
  return result;
}
// 100A5278: using guessed type void *pairNode::`vftable';

//----- (10046870) --------------------------------------------------------
int __cdecl sub_10046870(int a1, int a2, int a3)
{
  int result; // eax

  if ( a3 )
    result = sub_1003620A(a1);
  else
    result = sub_100356B6(a1);
  return result;
}
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 1003620A: using guessed type _DWORD __stdcall sub_1003620A(_DWORD);

//----- (10046896) --------------------------------------------------------
_DWORD *__thiscall sub_10046896(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi

  v2 = this;
  *this = 0;
  this[1] = 0;
  sub_10035B02(*a2, a2[1]);
  return v2;
}
// 10035B02: using guessed type _DWORD __stdcall sub_10035B02(_DWORD, _DWORD);

//----- (100468FD) --------------------------------------------------------
_DWORD *__thiscall sub_100468FD(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax

  v2 = this;
  *this = 0;
  this[1] = 0;
  if ( !a2 )
    goto LABEL_6;
  if ( !sub_100356B6(8) )
  {
    *v2 = 0;
LABEL_6:
    *((_BYTE *)v2 + 4) = 3;
    return v2;
  }
  v3 = sub_1003482E(a2);
  *v2 = v3;
  if ( !v3 )
    goto LABEL_6;
  return v2;
}
// 1003482E: using guessed type _DWORD __stdcall sub_1003482E(_DWORD);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);

//----- (10046950) --------------------------------------------------------
_DWORD *__thiscall sub_10046950(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax

  v2 = this;
  this[1] = 0;
  *((_BYTE *)this + 4) = a2;
  if ( a2 == 1 )
  {
    v3 = sub_10035157(1);
    *v2 = v3;
    if ( !v3 )
      *((_BYTE *)v2 + 4) = 3;
  }
  else
  {
    *this = 0;
  }
  return v2;
}
// 10035157: using guessed type _DWORD __cdecl sub_10035157(_DWORD);

//----- (1004698E) --------------------------------------------------------
_DWORD *__thiscall sub_1004698E(_DWORD *this, _DWORD *a2, unsigned int a3)
{
  _DWORD *v3; // edx
  _DWORD *result; // eax

  if ( a3 > 9 )
  {
    sub_100334A6(3);
  }
  else
  {
    if ( *this != -1 && (signed int)a3 <= *this )
    {
      v3 = (_DWORD *)this[a3 + 1];
      result = a2;
      *a2 = *v3;
      a2[1] = v3[1];
      return result;
    }
    sub_100334A6(2);
  }
  return a2;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);

//----- (100469E0) --------------------------------------------------------
int __cdecl sub_100469E0(int a1, int a2, int a3)
{
  sub_1003413A(a2);
  sub_10035742(a1, a3);
  return a1;
}
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);

//----- (10046A0A) --------------------------------------------------------
int __cdecl sub_10046A0A(int a1, char a2, int a3)
{
  sub_10034F31(a2);
  sub_10035742(a1, a3);
  return a1;
}
// 10034F31: using guessed type _DWORD __stdcall sub_10034F31(char);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);

//----- (10046A3F) --------------------------------------------------------
int __cdecl sub_10046A3F(int a1, int a2, int a3)
{
  sub_100334A6(a2);
  sub_10035742(a1, a3);
  return a1;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);

//----- (10046A69) --------------------------------------------------------
_DWORD *__thiscall sub_10046A69(_DWORD *this, _DWORD *a2, int a3)
{
  *a2 = *this;
  a2[1] = this[1];
  sub_10035CA1(a3);
  return a2;
}
// 10035CA1: using guessed type _DWORD __stdcall sub_10035CA1(_DWORD);

//----- (10046A93) --------------------------------------------------------
_DWORD *__thiscall sub_10046A93(_DWORD *this, _DWORD *a2, int a3)
{
  *a2 = *this;
  a2[1] = this[1];
  sub_10034234(a3);
  return a2;
}
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);

//----- (10046ABD) --------------------------------------------------------
_DWORD *__thiscall sub_10046ABD(_DWORD *this, _DWORD *a2, int a3)
{
  *a2 = *this;
  a2[1] = this[1];
  sub_10034A7C(a3);
  return a2;
}
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);

//----- (10046B11) --------------------------------------------------------
_DWORD *__thiscall sub_10046B11(_DWORD *this, _DWORD *a2, int a3)
{
  *a2 = *this;
  a2[1] = this[1];
  sub_10036133(a3);
  return a2;
}
// 10036133: using guessed type _DWORD __stdcall sub_10036133(_DWORD);

//----- (10046B5B) --------------------------------------------------------
_BYTE *__thiscall sub_10046B5B(_BYTE *this, int *a2)
{
  _BYTE *v2; // esi
  _DWORD *v3; // eax
  int v4; // edx
  int v5; // ecx

  v2 = this;
  if ( this[4] <= 1 && a2[1] > 0 )
  {
    if ( *(_DWORD *)this )
    {
      v3 = (_DWORD *)sub_100356B6(12);
      if ( v3 )
      {
        v4 = a2[1];
        v5 = *a2;
        *v3 = &pcharNode::`vftable';
        v3[1] = v5;
        v3[2] = v4;
      }
      else
      {
        v3 = 0;
      }
      sub_1003433D(v3);
    }
    else
    {
      sub_10033AF0(a2);
    }
  }
  return v2;
}
// 10033AF0: using guessed type _DWORD __stdcall sub_10033AF0(_DWORD);
// 1003433D: using guessed type _DWORD __stdcall sub_1003433D(_DWORD);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 100A5230: using guessed type void *pcharNode::`vftable';

//----- (10046BC9) --------------------------------------------------------
_DWORD *__thiscall sub_10046BC9(_DWORD *this, int *a2)
{
  _DWORD *v2; // esi
  int v3; // eax

  v2 = this;
  if ( *((_BYTE *)this + 4) <= 1 )
  {
    v3 = *a2;
    if ( *this )
    {
      if ( v3 )
      {
        sub_100331E5(*a2);
      }
      else if ( *((_BYTE *)a2 + 4) )
      {
        sub_10036133(*((char *)a2 + 4));
      }
    }
    else if ( v3 )
    {
      *this = v3;
      this[1] = a2[1];
    }
    else
    {
      sub_10034216(*((char *)a2 + 4));
    }
  }
  return v2;
}
// 100331E5: using guessed type _DWORD __stdcall sub_100331E5(_DWORD);
// 10034216: using guessed type _DWORD __stdcall sub_10034216(_DWORD);
// 10036133: using guessed type _DWORD __stdcall sub_10036133(_DWORD);

//----- (10046C35) --------------------------------------------------------
_DWORD *__thiscall sub_10046C35(_DWORD *this, char a2)
{
  _DWORD *v2; // esi
  int v3; // eax

  v2 = this;
  if ( *((_BYTE *)this + 4) <= 1 && a2 )
  {
    if ( *this )
    {
      v3 = sub_100356B6(8);
      if ( v3 )
      {
        *(_DWORD *)v3 = &charNode::`vftable';
        *(_BYTE *)(v3 + 4) = a2;
      }
      else
      {
        v3 = 0;
      }
      sub_10035959(v3);
    }
    else
    {
      *this = 0;
      this[1] = 0;
      sub_10034F31(a2);
    }
  }
  return v2;
}
// 10034F31: using guessed type _DWORD __stdcall sub_10034F31(char);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 10035959: using guessed type _DWORD __stdcall sub_10035959(_DWORD);
// 100A5218: using guessed type void *charNode::`vftable';

//----- (10046C9F) --------------------------------------------------------
_BYTE *__thiscall sub_10046C9F(_BYTE *this, int a2)
{
  _BYTE *v2; // esi
  int v3; // ebx
  char v4; // al

  v2 = this;
  if ( this[4] <= 1 && a2 )
  {
    v3 = 0;
    if ( *(_DWORD *)this )
    {
      v4 = *(_BYTE *)(a2 + 4);
      if ( v4 && v4 != 1 )
      {
        sub_10036133(v4);
      }
      else
      {
        if ( sub_100356B6(8) )
          v3 = sub_1003482E(a2);
        sub_10035FF8(v3);
      }
    }
    else
    {
      sub_10033B63(a2);
    }
  }
  return v2;
}
// 10033B63: using guessed type _DWORD __stdcall sub_10033B63(_DWORD);
// 1003482E: using guessed type _DWORD __stdcall sub_1003482E(_DWORD);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 10035FF8: using guessed type _DWORD __stdcall sub_10035FF8(_DWORD);
// 10036133: using guessed type _DWORD __stdcall sub_10036133(_DWORD);

//----- (10046D1C) --------------------------------------------------------
_BYTE *__thiscall sub_10046D1C(_BYTE *this, int a2)
{
  _BYTE *v2; // esi
  int v3; // eax

  v2 = this;
  if ( this[4] <= 1 )
  {
    if ( *(_DWORD *)this && a2 != 2 && a2 != 3 )
    {
      if ( a2 )
      {
        v3 = sub_10035157(a2);
        sub_1003592C(v3);
      }
    }
    else
    {
      sub_10034216(a2);
    }
  }
  return v2;
}
// 10034216: using guessed type _DWORD __stdcall sub_10034216(_DWORD);
// 10035157: using guessed type _DWORD __cdecl sub_10035157(_DWORD);
// 1003592C: using guessed type _DWORD __stdcall sub_1003592C(_DWORD);

//----- (10046D6C) --------------------------------------------------------
_DWORD *__thiscall sub_10046D6C(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax

  v2 = this;
  if ( *this != 9 )
  {
    if ( *a2 )
    {
      v3 = (_DWORD *)sub_100356B6(8);
      if ( v3 )
      {
        *v3 = *a2;
        v3[1] = a2[1];
        v2[++*v2 + 1] = v3;
      }
    }
  }
  return v2;
}
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);

//----- (10046DBC) --------------------------------------------------------
_BYTE *__thiscall sub_10046DBC(_BYTE *this, int a2)
{
  char v2; // al

  if ( this[4] != 3 )
  {
    v2 = *(_BYTE *)(a2 + 4);
    if ( v2 > 1 )
    {
      *(_DWORD *)this = 0;
      this[4] = v2;
    }
  }
  return this;
}

//----- (10046E13) --------------------------------------------------------
int __thiscall sub_10046E13(_DWORD *this)
{
  _DWORD *v1; // edi
  _DWORD *v2; // ecx
  int (__cdecl *v3)(_DWORD *); // esi
  int result; // eax

  v1 = this;
  if ( this[1] )
  {
    v2 = (_DWORD *)this[2];
    for ( v1[3] = v2; v2; v1[3] = v2 )
    {
      v3 = (int (__cdecl *)(_DWORD *))v1[1];
      v1[2] = *v2;
      result = v3(v2);
      v2 = (_DWORD *)v1[2];
    }
  }
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (10046E67) --------------------------------------------------------
char *__cdecl sub_10046E67(int a1)
{
  char *result; // eax
  int v2; // edx

  result = (&off_100A41E8)[2 * a1];
  if ( !(~(_BYTE)dword_100B17FC & 1) )
  {
    result += 2;
    v2 = dword_100A41EC[2 * a1] - 2;
  }
  return result;
}
// 100A41E8: using guessed type char *off_100A41E8;
// 100A41EC: using guessed type int dword_100A41EC[];
// 100B17FC: using guessed type int dword_100B17FC;

//----- (10046E97) --------------------------------------------------------
const char **__cdecl sub_10046E97(const char **a1, const char **a2)
{
  const char **v2; // edi
  int v3; // ebx
  const char *v4; // edx
  bool v5; // zf
  const char **result; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  const char **v12; // eax
  const char *v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  const char **v19; // eax
  const char *v20; // ecx
  int v21; // eax
  int v22; // eax
  int *v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  const char **v27; // eax
  const char *v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  const char **v34; // eax
  int *v35; // eax
  int v36; // ecx
  int v37; // esi
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // edx
  const char **v57; // eax
  const char *v58; // ecx
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  BOOL v67; // ecx
  int v68; // eax
  BOOL v69; // ecx
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  char v74; // [esp+Ch] [ebp-78h]
  char v75; // [esp+14h] [ebp-70h]
  char v76; // [esp+1Ch] [ebp-68h]
  char v77; // [esp+24h] [ebp-60h]
  char v78; // [esp+2Ch] [ebp-58h]
  const char *v79; // [esp+34h] [ebp-50h]
  const char *v80; // [esp+38h] [ebp-4Ch]
  const char *v81; // [esp+3Ch] [ebp-48h]
  const char *v82; // [esp+40h] [ebp-44h]
  int v83; // [esp+44h] [ebp-40h]
  int v84; // [esp+48h] [ebp-3Ch]
  const char *v85; // [esp+4Ch] [ebp-38h]
  const char *v86; // [esp+50h] [ebp-34h]
  const char *v87; // [esp+54h] [ebp-30h]
  const char *v88; // [esp+58h] [ebp-2Ch]
  int v89; // [esp+5Ch] [ebp-28h]
  const char *v90; // [esp+60h] [ebp-24h]
  const char *v91; // [esp+64h] [ebp-20h]
  char v92; // [esp+68h] [ebp-1Ch]
  const char *v93; // [esp+6Ch] [ebp-18h]
  const char *v94; // [esp+70h] [ebp-14h]
  int v95; // [esp+74h] [ebp-10h]
  char v96; // [esp+78h] [ebp-Ch]
  const char *v97; // [esp+7Ch] [ebp-8h]
  const char *v98; // [esp+80h] [ebp-4h]

  v2 = 0;
  v89 = dword_100B17F4 - dword_100B17F8;
  v87 = 0;
  v88 = 0;
  v3 = sub_10033785();
  v4 = *a2;
  if ( !*a2 || (v5 = ((unsigned int)a2[1] & 0x200) == 0, v95 = 1, v5) )
    v95 = 0;
  if ( v3 == 0xFFFF )
  {
    sub_100334A6(2);
    return a1;
  }
  if ( v3 == 65534 )
  {
    sub_100331C7(a1, 1, a2);
    return a1;
  }
  if ( v3 != 65533 )
  {
    if ( v3 & 0x8000 )
    {
      v8 = (v3 & 0x1800) == 2048 ? v3 & 0x400 : v3 & 0x1000;
      if ( !v8 || (v3 & 0x1B00) != 4096 )
      {
        v9 = (v3 & 0x1800) == 2048 ? v3 & 0x400 : v3 & 0x1000;
        if ( !v9 || (v10 = v3 & 0x1B00, v10 != 4352) && v10 != 4608 )
        {
          if ( v3 & 0x4000 )
          {
            if ( ~((dword_100B17FC | ((unsigned int)dword_100B17FC >> 2)) >> 1) & 1 )
            {
              v11 = sub_10035611(&v79);
              v12 = (const char **)sub_10034211(&v81, 32, v11);
              v13 = *v12;
              v14 = (int)v12[1];
              v87 = v13;
              v88 = (const char *)v14;
            }
            else
            {
              v15 = sub_10035611(&v79);
              sub_100363B3(v15);
            }
          }
          if ( (v3 & 0x1800) == 2048 )
            v16 = v3 & 0x400;
          else
            v16 = v3 & 0x1000;
          if ( v16 && (v3 & 0x1800) == 6144 )
          {
            sub_1003446E(&v81, 123);
            sub_100345D1(&v79, 0);
            v17 = sub_10035742(&v83, &v79);
            sub_10034234(v17);
            sub_10034A04(&v79);
            if ( !(dword_100B17FC & 0x1000) )
            {
              sub_10034211(&v81, 44, &v79);
              v79 = "}' ";
              v80 = (const char *)3;
              v18 = sub_100355E9(&v83, &v79);
              sub_10034234(v18);
            }
            v79 = "}'";
            v80 = (const char *)2;
            sub_10035CA1(&v79);
            sub_10034856(&v79);
            if ( ~((dword_100B17FC | ((unsigned int)dword_100B17FC >> 3)) >> 1) & 1 && !(dword_100B17FC & 0x1000) )
            {
              sub_10034211(&v81, 32, &v79);
              sub_1003446E(&v83, 32);
              v19 = (const char **)sub_10035742(&v85, &v87);
              v20 = *v19;
              v21 = (int)v19[1];
              v87 = v20;
LABEL_98:
              v88 = (const char *)v21;
              goto LABEL_150;
            }
            sub_100363B3(&v79);
LABEL_150:
            v59 = (v3 & 0x1800) - 2048;
            goto LABEL_152;
          }
          v81 = 0;
          v82 = 0;
          v79 = 0;
          v80 = 0;
          v85 = 0;
          v86 = 0;
          v98 = 0;
          v97 = 0;
          v83 = 0;
          v84 = 0;
          if ( 2048 == (v3 & 0x1800) )
            v22 = v3 & 0x400;
          else
            v22 = v3 & 0x1000;
          if ( !v22 )
            goto LABEL_50;
          if ( (v3 & 0x1800) != 2048 || (v3 & 0x700) != 1536 )
          {
            if ( (v3 & 0x1800) != 2048 || (v3 & 0x700) != 1280 )
              goto LABEL_49;
            sub_100345D1(&v90, 1);
          }
          else
          {
            sub_100345D1(&v90, 1);
            v81 = v90;
            v82 = v91;
            sub_100345D1(&v90, 1);
            v79 = v90;
            v80 = v91;
            sub_100345D1(&v90, 1);
          }
          v85 = v90;
          v86 = v91;
LABEL_49:
          sub_100345D1(&v90, 1);
          v98 = v90;
          v97 = v91;
LABEL_50:
          if ( (v3 & 0x1800) == 2048 && (v3 & 0x700) != 512 )
          {
            if ( (dword_100B17FC & 0x60) == 96 )
            {
              v26 = sub_100359EA(&v90);
              sub_100363B3(v26);
            }
            else
            {
              v23 = (int *)sub_100359EA(&v90);
              v24 = *v23;
              v25 = v23[1];
              v83 = v24;
              v84 = v25;
            }
          }
          if ( ~(unsigned __int8)((unsigned int)dword_100B17FC >> 1) & 1 && ~((unsigned int)dword_100B17FC >> 4) & 1 )
          {
            sub_10034856(&v90);
            v27 = (const char **)sub_10035742(&v92, &v87);
            v28 = *v27;
            v29 = (int)v27[1];
            v87 = v28;
            v88 = (const char *)v29;
          }
          else
          {
            v30 = sub_10034856(&v90);
            sub_100363B3(v30);
          }
          if ( *a2 )
          {
            if ( !v87 || dword_100B17FC & 0x1000 )
            {
              v87 = *a2;
              v88 = a2[1];
            }
            else
            {
              v31 = sub_10034211(&v90, 32, a2);
              sub_10034234(v31);
            }
          }
          v93 = 0;
          v91 = 0;
          if ( !v95 )
          {
            v34 = (const char **)sub_100356B6(8);
            if ( v34 )
            {
              *v34 = 0;
              v34[1] = 0;
              v2 = v34;
            }
            v35 = (int *)sub_10034D2E(&v78, v2);
            v36 = *v35;
            v91 = (const char *)v35[1];
            v93 = (const char *)v36;
LABEL_70:
            v37 = (int)v97;
            if ( (v3 & 0x1800) == 2048 )
              v38 = v3 & 0x400;
            else
              v38 = v3 & 0x1000;
            if ( !v38 )
              goto LABEL_83;
            if ( (v3 & 0x1800) != 2048 || (v3 & 0x700) != 1536 )
            {
              if ( (v3 & 0x1800) != 2048 || (v3 & 0x700) != 1280 )
              {
                v79 = "`adjustor{";
                v80 = (const char *)10;
                sub_10035CA1(&v79);
                goto LABEL_82;
              }
              v79 = "`vtordisp{";
              v80 = (const char *)10;
              sub_1003413A(&v79);
              sub_10035742(&v79, &v85);
              v39 = sub_1003446E(&v75, 44);
            }
            else
            {
              v94 = "`vtordispex{";
              v95 = 12;
              sub_1003413A(&v94);
              sub_10035742(&v94, &v81);
              sub_1003446E(&v96, 44);
              sub_10035742(&v77, &v79);
              sub_1003446E(&v76, 44);
              sub_10035742(&v75, &v85);
              v39 = sub_1003446E(&v74, 44);
            }
            sub_10034234(v39);
LABEL_82:
            v79 = v98;
            v81 = "}' ";
            v82 = (const char *)3;
            v80 = (const char *)v37;
            sub_10035CA1(&v81);
            sub_10034234(&v79);
LABEL_83:
            if ( dword_100B180C == 1 && !dword_100B1808 )
              dword_100B1808 = v89;
            v40 = sub_100362F0(&v74);
            sub_10034211(&v75, 40, v40);
            v41 = sub_1003446E(&v76, 41);
            sub_10034234(v41);
            if ( (v3 & 0x1800) == 2048 && (v3 & 0x700) != 512 )
              sub_10034234(&v83);
            if ( ~(unsigned __int8)((unsigned int)dword_100B17FC >> 19) & 1 )
            {
              v42 = sub_10033B22(&v74);
              sub_10034234(v42);
            }
            else
            {
              v43 = sub_10033B22(&v74);
              sub_100363B3(v43);
            }
            v44 = sub_1003382F(&v74);
            sub_10034234(v44);
            if ( ~BYTE1(dword_100B17FC) & 1 )
            {
              v45 = sub_10035B39(&v74);
              sub_10034234(v45);
            }
            else
            {
              v46 = sub_10035B39(&v74);
              sub_100363B3(v46);
            }
            v47 = sub_10034F7C(&v74);
            sub_100363B3(v47);
            if ( !(~((unsigned int)dword_100B17FC >> 2) & 1) || !v2 )
              goto LABEL_150;
            *v2 = v87;
            v2[1] = v88;
            v87 = v93;
            v21 = (int)v91;
            goto LABEL_98;
          }
          v32 = sub_10034D2E(&v94, 0);
          v33 = sub_10034211(&v78, 32, v32);
          sub_10034234(v33);
          if ( !(dword_100B17FC & 0x1000) )
            goto LABEL_70;
LABEL_226:
          result = a1;
          *a1 = v87;
          v7 = (int)v88;
          goto LABEL_227;
        }
      }
    }
    sub_10034234(a2);
    if ( !(v3 & 0x8000) )
    {
      if ( (v3 & 0x7C00) == 26624 || (v3 & 0x7C00) == 28672 )
      {
        sub_10035210(a1, &v87);
        return a1;
      }
      if ( (v3 & 0x7C00) == 24576 )
      {
        v79 = v87;
        v80 = v88;
        sub_10034A7C(123);
        sub_100345D1(&v81, 0);
        sub_10035742(&v74, &v81);
        v79 = "}'";
        v80 = (const char *)2;
        sub_100355E9(a1, &v79);
        return a1;
      }
    }
    if ( (v3 & 0xFC00) == 31744 )
    {
      sub_10035A4E(a1, &v87);
      return a1;
    }
    if ( v3 & 0x8000 )
      v48 = (v3 & 0x1800) - 2048;
    else
      v48 = v3 & 0x6000;
    if ( v48 )
      v49 = v3 & 0x1000;
    else
      v49 = v3 & 0x400;
    if ( v49 && ((v3 & 0x8000) != 0 ? (v3 & 0x1B00) == 4096 : 0) )
    {
      v79 = "`local static destructor helper'";
      v80 = (const char *)32;
    }
    else
    {
      if ( v3 & 0x8000 )
        v50 = (v3 & 0x1800) - 2048;
      else
        v50 = v3 & 0x6000;
      if ( v50 )
        v51 = v3 & 0x1000;
      else
        v51 = v3 & 0x400;
      if ( v51 && ((v3 & 0x8000) != 0 ? (v3 & 0x1B00) == 4352 : 0) )
      {
        v79 = "`template static data member constructor helper'";
        v80 = (const char *)48;
      }
      else
      {
        if ( v3 & 0x8000 )
          v52 = (v3 & 0x1800) - 2048;
        else
          v52 = v3 & 0x6000;
        if ( v52 )
          v53 = v3 & 0x1000;
        else
          v53 = v3 & 0x400;
        if ( !v53 || !((v3 & 0x8000) != 0 ? (v3 & 0x1B00) == 4608 : 0) )
        {
          if ( v3 & 0x8000 )
            goto LABEL_137;
          if ( (v3 & 0x7C00) == 30720 )
            goto LABEL_226;
          goto LABEL_140;
        }
        v79 = "`template static data member destructor helper'";
        v80 = (const char *)47;
      }
    }
    sub_10035CA1(&v79);
    if ( v3 & 0x8000 )
    {
LABEL_137:
      v54 = (v3 & 0x1800) - 2048;
      goto LABEL_141;
    }
LABEL_140:
    v54 = v3 & 0x6000;
LABEL_141:
    if ( v54 )
      v55 = v3 & 0x1000;
    else
      v55 = v3 & 0x400;
    if ( v55 && ((v56 = v3 & 0x1B00, (v3 & 0x8000) != 0 ? v56 == 4352 : 0) || ((v3 & 0x8000) != 0 ? v56 == 4608 : 0)) )
      v57 = (const char **)sub_10034211(&v74, 32, &v87);
    else
      v57 = (const char **)sub_10033456(&v74, &v87);
    v58 = *v57;
    v88 = v57[1];
    v87 = v58;
    if ( !(v3 & 0x8000) )
    {
      v59 = v3 & 0x6000;
LABEL_152:
      if ( v59 != 0 )
        goto LABEL_215;
      if ( !(~((unsigned int)dword_100B17FC >> 9) & 1) )
        goto LABEL_186;
      if ( v3 & 0x8000 )
        v60 = (v3 & 0x1800) - 2048;
      else
        v60 = v3 & 0x6000;
      if ( v60 == 0 )
      {
        if ( v3 & 0x8000 && (v3 & 0x700) != 512 )
        {
LABEL_162:
          if ( (v3 & 0x700) == 256 )
          {
LABEL_185:
            v79 = "virtual ";
            v80 = (const char *)8;
            sub_1003413A(&v79);
            sub_10035742(&v79, &v87);
            v87 = v79;
            v88 = v80;
            goto LABEL_186;
          }
          if ( v3 & 0x8000 )
          {
            v61 = (v3 & 0x1800) - 2048;
            goto LABEL_166;
          }
LABEL_165:
          v61 = v3 & 0x6000;
LABEL_166:
          if ( v61 )
            v62 = v3 & 0x1000;
          else
            v62 = v3 & 0x400;
          if ( v62 )
          {
            v63 = v3 & 0x8000 ? (v3 & 0x1800) - 2048 : v3 & 0x6000;
            if ( v63 == 0 && (v3 & 0x700) == 1280 )
              goto LABEL_185;
            v64 = v3 & 0x8000 ? (v3 & 0x1800) - 2048 : v3 & 0x6000;
            if ( v64 == 0 && (v3 & 0x700) == 1536 )
              goto LABEL_185;
            v65 = v3 & 0x8000 ? (v3 & 0x1800) - 2048 : v3 & 0x6000;
            if ( v65 == 0 && (v3 & 0x700) == 1024 )
              goto LABEL_185;
          }
LABEL_186:
          if ( ~((unsigned int)dword_100B17FC >> 7) & 1 )
          {
            if ( v3 & 0x8000 )
              v66 = (v3 & 0x1800) - 2048;
            else
              v66 = v3 & 0x6000;
            if ( v66 == 0 && (!(v3 & 0x8000) ? (v67 = (v3 & 0x1800) == 2048) : (v67 = (v3 & 0xC0) == 64), v67) )
            {
              v79 = "private: ";
              v80 = (const char *)9;
            }
            else
            {
              if ( v3 & 0x8000 )
                v68 = (v3 & 0x1800) - 2048;
              else
                v68 = v3 & 0x6000;
              if ( v68 == 0 && (!(v3 & 0x8000) ? (v69 = (v3 & 0x1800) == 4096) : (v69 = (v3 & 0xC0) == -128), v69) )
              {
                v79 = "protected: ";
                v80 = (const char *)11;
              }
              else
              {
                if ( v3 & 0x8000 )
                  v70 = (v3 & 0x1800) - 2048;
                else
                  v70 = v3 & 0x6000;
                if ( v70 != 0 )
                  goto LABEL_215;
                v71 = v3 & 0x8000 ? (unsigned __int8)((v3 & 0xC0) == 0) : (unsigned __int8)((v3 & 0x1800) == 0);
                if ( !v71 )
                  goto LABEL_215;
                v79 = "public: ";
                v80 = (const char *)8;
              }
            }
            sub_1003413A(&v79);
            sub_10035742(&v79, &v87);
            v87 = v79;
            v88 = v80;
          }
LABEL_215:
          if ( v3 & 0x8000 )
            v72 = (v3 & 0x1800) - 2048;
          else
            v72 = v3 & 0x6000;
          if ( v72 )
            v73 = v3 & 0x1000;
          else
            v73 = v3 & 0x400;
          if ( v73 && !(dword_100B17FC & 0x1000) )
          {
            v79 = "[thunk]:";
            v80 = (const char *)8;
            sub_1003413A(&v79);
            sub_10035742(&v79, &v87);
            v87 = v79;
            v88 = v80;
          }
          if ( v3 & 0x10000 )
          {
            v79 = "extern \"C\" ";
            v80 = (const char *)11;
            sub_1003413A(&v79);
            sub_10035742(&v79, &v87);
            v87 = v79;
            v88 = v80;
          }
          goto LABEL_226;
        }
        v79 = "static ";
        v80 = (const char *)7;
        sub_1003413A(&v79);
        sub_10035742(&v79, &v87);
        v87 = v79;
        v88 = v80;
      }
      if ( !(v3 & 0x8000) )
        goto LABEL_165;
      goto LABEL_162;
    }
    goto LABEL_150;
  }
  result = a1;
  *a1 = v4;
  v7 = (int)a2[1];
LABEL_227:
  result[1] = (const char *)v7;
  return result;
}
// 100331C7: using guessed type _DWORD __cdecl sub_100331C7(_DWORD, _DWORD, _DWORD);
// 10033456: using guessed type _DWORD __cdecl sub_10033456(_DWORD, _DWORD);
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10033785: using guessed type int sub_10033785(void);
// 1003382F: using guessed type _DWORD __cdecl sub_1003382F(_DWORD);
// 10033B22: using guessed type _DWORD __cdecl sub_10033B22(_DWORD);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 10034211: using guessed type _DWORD __cdecl sub_10034211(_DWORD, _DWORD, _DWORD);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 1003446E: using guessed type _DWORD __stdcall sub_1003446E(_DWORD, _DWORD);
// 100345D1: using guessed type _DWORD __cdecl sub_100345D1(_DWORD, char);
// 10034856: using guessed type _DWORD __cdecl sub_10034856(_DWORD);
// 10034A04: using guessed type _DWORD __cdecl sub_10034A04(_DWORD);
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 10034D2E: using guessed type _DWORD __cdecl sub_10034D2E(_DWORD, _DWORD);
// 10034F7C: using guessed type _DWORD __cdecl sub_10034F7C(_DWORD);
// 10035210: using guessed type _DWORD __cdecl sub_10035210(_DWORD, _DWORD);
// 100355E9: using guessed type _DWORD __stdcall sub_100355E9(_DWORD, _DWORD);
// 10035611: using guessed type _DWORD __cdecl sub_10035611(_DWORD);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 100359EA: using guessed type _DWORD __cdecl sub_100359EA(_DWORD);
// 10035A4E: using guessed type _DWORD __cdecl sub_10035A4E(_DWORD, _DWORD);
// 10035B39: using guessed type _DWORD __cdecl sub_10035B39(_DWORD);
// 10035CA1: using guessed type _DWORD __stdcall sub_10035CA1(_DWORD);
// 100362F0: using guessed type _DWORD __cdecl sub_100362F0(_DWORD);
// 100363B3: using guessed type _DWORD __stdcall sub_100363B3(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;
// 100B17F8: using guessed type int dword_100B17F8;
// 100B17FC: using guessed type int dword_100B17FC;
// 100B1808: using guessed type int dword_100B1808;
// 100B180C: using guessed type int dword_100B180C;

//----- (1004802C) --------------------------------------------------------
void __thiscall sub_1004802C(_BYTE *this, char a2)
{
  _BYTE *v2; // esi
  int v3; // eax

  v2 = this;
  if ( a2 )
  {
    v3 = sub_100356B6(8);
    if ( v3 )
    {
      *(_DWORD *)v3 = &charNode::`vftable';
      *(_BYTE *)(v3 + 4) = a2;
      *(_DWORD *)v2 = v3;
    }
    else
    {
      *(_DWORD *)v2 = 0;
      v2[4] = 3;
    }
  }
}
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 100A5218: using guessed type void *charNode::`vftable';

//----- (100480D5) --------------------------------------------------------
_DWORD *__cdecl sub_100480D5(_DWORD *a1)
{
  int v1; // eax
  _DWORD *result; // eax
  char v3; // [esp+0h] [ebp-10h]
  int v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  if ( *(_BYTE *)dword_100B17F4 )
  {
    v4 = 0;
    v5 = 0;
    sub_10034F31(38);
    v1 = sub_10034B26(&v3);
    sub_10034234(v1);
    if ( *(_BYTE *)dword_100B17F4 == 64 )
    {
      ++dword_100B17F4;
      result = a1;
      *a1 = v4;
      a1[1] = v5;
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
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 10034B26: using guessed type _DWORD __cdecl sub_10034B26(_DWORD);
// 10034F31: using guessed type _DWORD __stdcall sub_10034F31(char);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (10048157) --------------------------------------------------------
_DWORD *__cdecl sub_10048157(_DWORD *a1)
{
  signed int v1; // ebx
  _BYTE *v2; // ecx
  unsigned int v3; // eax
  int v4; // eax
  _BYTE *v5; // edi
  char v7; // [esp+Ch] [ebp-18h]
  char v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+1Ch] [ebp-8h]
  int v10; // [esp+20h] [ebp-4h]

  v1 = 1;
  *a1 = 0;
  a1[1] = 0;
  v2 = (_BYTE *)dword_100B17F4;
  while ( *v2 != 64 && *v2 != 90 )
  {
    if ( v1 )
    {
      v1 = 0;
    }
    else
    {
      sub_10034A7C(44);
      v2 = (_BYTE *)dword_100B17F4;
    }
    if ( !*v2 )
    {
      if ( *((_BYTE *)a1 + 4) <= 1 )
      {
        if ( *a1 )
          sub_1003592C(&off_100A53D8);
        else
          sub_10034216(1);
      }
      return a1;
    }
    v3 = (char)*v2 - 48;
    if ( v3 > 9 )
    {
      v9 = 0;
      v10 = 0;
      v5 = v2;
      sub_10034676(&v8, &v9);
      if ( dword_100B17F4 - (signed int)v5 > 1 && *(_DWORD *)dword_100B17E8 != 9 )
        sub_100359AE(&v8);
      sub_10034234(&v8);
      v2 = (_BYTE *)dword_100B17F4;
      if ( (_BYTE *)dword_100B17F4 != v5 )
        goto LABEL_16;
      a1[1] = 0;
      *a1 = 0;
      *((_BYTE *)a1 + 4) = 2;
    }
    else
    {
      dword_100B17F4 = (int)(v2 + 1);
      v4 = sub_100338D4(&v7, v3);
      sub_10034234(v4);
    }
    v2 = (_BYTE *)dword_100B17F4;
LABEL_16:
    if ( *((_BYTE *)a1 + 4) )
      return a1;
  }
  return a1;
}
// 100338D4: using guessed type _DWORD __stdcall sub_100338D4(_DWORD, _DWORD);
// 10034216: using guessed type _DWORD __stdcall sub_10034216(_DWORD);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 10034676: using guessed type _DWORD __cdecl sub_10034676(_DWORD, _DWORD);
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 1003592C: using guessed type _DWORD __stdcall sub_1003592C(_DWORD);
// 100359AE: using guessed type _DWORD __stdcall sub_100359AE(_DWORD);
// 100A53D8: using guessed type int (*(*off_100A53D8)[3])();
// 100B17E8: using guessed type int dword_100B17E8;
// 100B17F4: using guessed type int dword_100B17F4;

//----- (100482A7) --------------------------------------------------------
_DWORD *__cdecl sub_100482A7(_DWORD *a1)
{
  int v1; // edx
  char v2; // cl
  _DWORD *result; // eax
  const char *v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+4h] [ebp-Ch]
  int v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  if ( *(_BYTE *)dword_100B17F4 == 88 )
  {
    v4 = "void";
    ++dword_100B17F4;
    v5 = 4;
  }
  else
  {
    if ( *(_BYTE *)dword_100B17F4 != 90 )
    {
      sub_10034F81(&v6);
      v1 = v7;
      if ( !(_BYTE)v7 )
      {
        v2 = *(_BYTE *)dword_100B17F4;
        if ( *(_BYTE *)dword_100B17F4 )
        {
          if ( v2 != 64 )
          {
            if ( v2 == 90 )
            {
              ++dword_100B17F4;
              if ( ~(unsigned __int8)((unsigned int)dword_100B17FC >> 18) & 1 )
              {
                v4 = ",...";
                v5 = 4;
              }
              else
              {
                v4 = ",<ellipsis>";
                v5 = 11;
              }
              sub_100355E9(a1, &v4);
            }
            else
            {
              sub_100334A6(2);
            }
            return a1;
          }
          ++dword_100B17F4;
        }
      }
      result = a1;
      *a1 = v6;
      a1[1] = v1;
      return result;
    }
    ++dword_100B17F4;
    if ( ~(unsigned __int8)((unsigned int)dword_100B17FC >> 18) & 1 )
    {
      v4 = "...";
      v5 = 3;
    }
    else
    {
      v4 = "<ellipsis>";
      v5 = 10;
    }
  }
  sub_1003413A(&v4);
  return a1;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 10034F81: using guessed type _DWORD __cdecl sub_10034F81(_DWORD);
// 100355E9: using guessed type _DWORD __stdcall sub_100355E9(_DWORD, _DWORD);
// 100B17F4: using guessed type int dword_100B17F4;
// 100B17FC: using guessed type int dword_100B17FC;

//----- (100483F1) --------------------------------------------------------
_DWORD *__cdecl sub_100483F1(_DWORD *a1)
{
  int v1; // eax
  _DWORD *result; // eax
  char v3; // [esp+0h] [ebp-10h]
  int v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  if ( *(_BYTE *)dword_100B17F4 )
  {
    sub_10034B26(&v4);
    sub_10034A7C(91);
    v1 = sub_10034B26(&v3);
    sub_10034234(v1);
    sub_10034A7C(93);
    if ( *(_BYTE *)dword_100B17F4 == 64 )
    {
      ++dword_100B17F4;
      result = a1;
      *a1 = v4;
      a1[1] = v5;
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
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 10034B26: using guessed type _DWORD __cdecl sub_10034B26(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (10048482) --------------------------------------------------------
_DWORD *__cdecl sub_10048482(_DWORD *a1)
{
  int v1; // eax
  _BYTE *v2; // eax
  _DWORD *result; // eax
  char v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+8h] [ebp-8h]
  int v6; // [esp+Ch] [ebp-4h]

  if ( *(_BYTE *)dword_100B17F4 )
  {
    sub_100357CE(&v4);
    sub_1003446E(&v5, 123);
    if ( *(_BYTE *)dword_100B17F4 )
    {
      while ( 1 )
      {
        v1 = sub_10034B26(&v4);
        sub_10034234(v1);
        if ( *(_BYTE *)dword_100B17F4 != 64 )
          break;
        v2 = (_BYTE *)(dword_100B17F4 + 1);
        dword_100B17F4 = (int)v2;
        if ( *v2 == 64 )
        {
          dword_100B17F4 = (int)(v2 + 1);
          sub_10034A7C(125);
          result = a1;
          *a1 = v5;
          a1[1] = v6;
          return result;
        }
        if ( !*v2 )
          break;
        sub_10034A7C(44);
      }
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
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 1003446E: using guessed type _DWORD __stdcall sub_1003446E(_DWORD, _DWORD);
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 10034B26: using guessed type _DWORD __cdecl sub_10034B26(_DWORD);
// 100357CE: using guessed type _DWORD __cdecl sub_100357CE(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (10048547) --------------------------------------------------------
const char **__cdecl sub_10048547(const char **a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int *v7; // eax
  const char **result; // eax
  int v9; // edx
  int *v10; // ecx
  int v11; // eax
  char v12; // [esp+8h] [ebp-28h]
  char v13; // [esp+10h] [ebp-20h]
  const char *v14; // [esp+18h] [ebp-18h]
  int v15; // [esp+1Ch] [ebp-14h]
  const char *v16; // [esp+20h] [ebp-10h]
  int v17; // [esp+24h] [ebp-Ch]
  int v18; // [esp+28h] [ebp-8h]
  int v19; // [esp+2Ch] [ebp-4h]

  if ( !*(_BYTE *)dword_100B17F4 )
  {
    if ( *a2 )
    {
      sub_10034211(&v12, 40, a2);
      v14 = ")[";
      v15 = 2;
      sub_100355E9(&v13, &v14);
      sub_10035F85(&v16, 1);
      v10 = &v18;
      goto LABEL_17;
    }
LABEL_16:
    v18 = 0;
    v19 = 0;
    sub_10034F31(91);
    sub_10035F85(&v12, 1);
    v10 = (int *)&v13;
LABEL_17:
    v11 = sub_1003446E(v10, 93);
    sub_10035BDE(a1, v11);
    return a1;
  }
  v2 = sub_1003498C();
  v3 = v2;
  if ( v2 < 0 || !v2 )
    goto LABEL_16;
  v18 = 0;
  v19 = 0;
  if ( !(a2[1] & 0x800) )
    goto LABEL_6;
  v16 = "[]";
  v17 = 2;
  sub_10035CA1(&v16);
  while ( (char)v19 <= 1 )
  {
LABEL_6:
    v4 = v3--;
    if ( !v4 || !*(_BYTE *)dword_100B17F4 )
      break;
    v5 = sub_100345D1(&v16, 0);
    sub_10034211(&v13, 91, v5);
    v6 = sub_1003446E(&v12, 93);
    sub_10034234(v6);
  }
  if ( *a2 )
  {
    if ( a2[1] & 0x800 )
    {
      v7 = (int *)sub_10035742(&v12, &v18);
    }
    else
    {
      sub_10034211(&v12, 40, a2);
      sub_1003446E(&v13, 41);
      v7 = (int *)sub_10035742(&v16, &v18);
    }
    v18 = *v7;
    v19 = v7[1];
  }
  sub_10034676(&v14, &v18);
  result = a1;
  v9 = v15 | 0x800;
  *a1 = v14;
  a1[1] = (const char *)v9;
  return result;
}
// 10034211: using guessed type _DWORD __cdecl sub_10034211(_DWORD, _DWORD, _DWORD);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 1003446E: using guessed type _DWORD __stdcall sub_1003446E(_DWORD, _DWORD);
// 100345D1: using guessed type _DWORD __cdecl sub_100345D1(_DWORD, char);
// 10034676: using guessed type _DWORD __cdecl sub_10034676(_DWORD, _DWORD);
// 1003498C: using guessed type int sub_1003498C(void);
// 10034F31: using guessed type _DWORD __stdcall sub_10034F31(char);
// 100355E9: using guessed type _DWORD __stdcall sub_100355E9(_DWORD, _DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 10035BDE: using guessed type _DWORD __cdecl sub_10035BDE(_DWORD, _DWORD);
// 10035CA1: using guessed type _DWORD __stdcall sub_10035CA1(_DWORD);
// 10035F85: using guessed type _DWORD __stdcall sub_10035F85(_DWORD, _DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004874B) --------------------------------------------------------
_DWORD *__cdecl sub_1004874B(_DWORD *a1)
{
  int v1; // edx
  int v2; // eax
  int v3; // eax
  int v4; // eax
  _DWORD *result; // eax
  int v6; // eax
  const char *v7; // [esp+4h] [ebp-10h]
  int v8; // [esp+8h] [ebp-Ch]
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  v7 = (const char *)sub_10034130(0);
  v8 = v1;
  sub_1003413A(&v7);
  v2 = (char)sub_10034A81();
  if ( (_BYTE)v2 )
  {
    v3 = v2 - 48;
    if ( v3 )
    {
      v4 = v3 - 2;
      if ( v4 )
      {
        if ( v4 == 3 )
        {
          sub_100334A6(2);
          return a1;
        }
      }
      else
      {
        v6 = sub_100360AC(&v7);
        sub_10034234(v6);
      }
    }
    else
    {
      v7 = "void";
      v8 = 4;
      sub_10035CA1(&v7);
    }
  }
  else
  {
    sub_10036133(1);
  }
  v7 = ") ";
  v8 = 2;
  sub_10035CA1(&v7);
  result = a1;
  *a1 = v9;
  a1[1] = v10;
  return result;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10034130: using guessed type _DWORD __cdecl sub_10034130(_DWORD);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 10034A81: using guessed type int sub_10034A81(void);
// 10035CA1: using guessed type _DWORD __stdcall sub_10035CA1(_DWORD);
// 100360AC: using guessed type _DWORD __cdecl sub_100360AC(_DWORD);
// 10036133: using guessed type _DWORD __stdcall sub_10036133(_DWORD);

//----- (10048825) --------------------------------------------------------
const char **__cdecl sub_10048825(const char **a1, const char **a2)
{
  unsigned __int8 v2; // cl
  int v3; // edx
  int v4; // ebx
  int v5; // ebx
  const char **v6; // eax
  const char *v7; // ecx
  int v8; // edx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  unsigned __int8 v14; // al
  int v15; // eax
  const char *v16; // ecx
  int v17; // eax
  int v18; // esi
  const char **v19; // eax
  const char **result; // eax
  int v21; // eax
  char v22; // [esp+Ch] [ebp-24h]
  const char *v23; // [esp+14h] [ebp-1Ch]
  const char *v24; // [esp+18h] [ebp-18h]
  const char *v25; // [esp+1Ch] [ebp-14h]
  int v26; // [esp+20h] [ebp-10h]
  const char *v27; // [esp+24h] [ebp-Ch]
  const char *v28; // [esp+28h] [ebp-8h]
  unsigned __int8 v29; // [esp+2Fh] [ebp-1h]

  v2 = *(_BYTE *)dword_100B17F4;
  if ( !*(_BYTE *)dword_100B17F4 )
  {
    sub_100331C7(a1, 1, a2);
    return a1;
  }
  v3 = dword_100B17F4 + 1;
  v4 = v2;
  ++dword_100B17F4;
  v29 = 0;
  v27 = 0;
  v28 = 0;
  if ( v2 <= 0x58u )
  {
    if ( v2 == 88 )
    {
      v23 = "void";
      v24 = (const char *)4;
LABEL_12:
      sub_10033AF0(&v23);
      goto LABEL_86;
    }
    switch ( v2 )
    {
      case 0x43u:
      case 0x44u:
      case 0x45u:
        v23 = "char";
        goto LABEL_6;
      case 0x46u:
      case 0x47u:
        v23 = "short";
        v24 = (const char *)5;
        goto LABEL_7;
      case 0x48u:
      case 0x49u:
        v23 = "int";
        v24 = (const char *)3;
        goto LABEL_7;
      case 0x4Au:
      case 0x4Bu:
        v23 = "long";
LABEL_6:
        v24 = (const char *)4;
LABEL_7:
        sub_10033AF0(&v23);
        goto LABEL_19;
      case 0x4Du:
        v23 = "float";
        v24 = (const char *)5;
        goto LABEL_12;
      case 0x4Eu:
        goto LABEL_14;
      case 0x4Fu:
        v23 = "long ";
        v24 = (const char *)5;
        sub_10033AF0(&v23);
LABEL_14:
        v23 = "double";
        v24 = (const char *)6;
        sub_10035CA1(&v23);
        goto LABEL_19;
      case 0x50u:
      case 0x51u:
      case 0x52u:
      case 0x53u:
        v5 = v2 & 3;
        goto LABEL_55;
      default:
        goto LABEL_18;
    }
    goto LABEL_18;
  }
  if ( v2 == 95 )
  {
    v14 = sub_10034A81();
    v29 = v14;
    if ( v14 > 0x4Eu )
    {
      switch ( v14 )
      {
        case 0x4Fu:
          v5 = -2;
LABEL_55:
          v27 = 0;
          v28 = 0;
          v16 = *a2;
          v17 = (int)a2[1];
          v23 = *a2;
          v24 = (const char *)v17;
          if ( v5 == -2 )
          {
            v24 = (const char *)(v17 | 0x800);
            sub_1003535A(&v25, &v27, &v23, 0);
            v8 = v26;
            if ( !(v26 & 0x800) )
            {
              v23 = "[]";
              v24 = (const char *)2;
              sub_10035CA1(&v23);
              v8 = v26;
            }
            v7 = v25;
            goto LABEL_75;
          }
          if ( !v16 )
          {
            if ( v5 & 1 )
            {
              v25 = "const";
              v26 = 5;
              sub_10033AF0(&v25);
              if ( v5 & 2 )
              {
                v25 = " volatile";
                v26 = 9;
                sub_10035CA1(&v25);
              }
            }
            else if ( v5 & 2 )
            {
              v25 = "volatile";
              v26 = 8;
              sub_10033AF0(&v25);
            }
          }
          sub_1003535A(a1, &v27, &v23, 1);
          break;
        case 0x50u:
          v23 = "auto";
          goto LABEL_52;
        case 0x51u:
          v23 = "char8_t";
          goto LABEL_77;
        case 0x52u:
          v23 = "<unknown>";
          v24 = (const char *)9;
          goto LABEL_78;
        case 0x53u:
          v23 = "char16_t";
          goto LABEL_48;
        case 0x54u:
          v23 = "decltype(auto)";
          v24 = (const char *)14;
          goto LABEL_78;
        case 0x55u:
          v23 = "char32_t";
          goto LABEL_48;
        case 0x56u:
          v18 = sub_10034676(&v25, a2);
          v23 = "this ";
          v24 = (const char *)5;
          sub_1003413A(&v23);
          sub_10035742(&v23, v18);
          v27 = v23;
          v28 = v24;
          goto LABEL_79;
        case 0x57u:
          v23 = "wchar_t";
          goto LABEL_77;
        case 0x58u:
        case 0x59u:
          --dword_100B17F4;
          v19 = (const char **)sub_10033221(&v22);
          v7 = *v19;
          v8 = (int)v19[1];
          v27 = v7;
          v28 = (const char *)v8;
          if ( !v7 )
            goto LABEL_75;
          goto LABEL_79;
        default:
          goto LABEL_76;
      }
      return a1;
    }
    if ( v14 == 78 )
    {
      v23 = "bool";
LABEL_52:
      v24 = (const char *)4;
      goto LABEL_78;
    }
    if ( v14 > 0x48u )
    {
      if ( v14 != 73 )
      {
        if ( v14 == 74 || v14 == 75 )
        {
          v23 = "__int64";
          goto LABEL_77;
        }
        if ( v14 == 76 || v14 == 77 )
        {
          v23 = "__int128";
LABEL_48:
          v24 = (const char *)8;
          goto LABEL_78;
        }
LABEL_76:
        v23 = "UNKNOWN";
        goto LABEL_77;
      }
    }
    else if ( v14 != 72 )
    {
      if ( !v14 )
      {
        sub_10034216(1);
        goto LABEL_79;
      }
      if ( v14 != 36 )
      {
        if ( v14 == 68 || v14 == 69 )
        {
          v23 = "__int8";
          v24 = (const char *)6;
LABEL_78:
          sub_10033AF0(&v23);
          goto LABEL_79;
        }
        if ( v14 == 70 || v14 == 71 )
        {
          v23 = "__int16";
LABEL_77:
          v24 = (const char *)7;
          goto LABEL_78;
        }
        goto LABEL_76;
      }
      v15 = sub_10035BDE(&v25, a2);
      v23 = "__w64 ";
      v24 = (const char *)6;
      sub_10034C61(a1, &v23, v15);
      return a1;
    }
    v23 = "__int32";
    goto LABEL_77;
  }
LABEL_18:
  dword_100B17F4 = v3 - 1;
  v6 = (const char **)sub_10033221(&v23);
  v7 = *v6;
  v8 = (int)v6[1];
  v27 = v7;
  v28 = (const char *)v8;
  if ( !v7 )
  {
LABEL_75:
    result = a1;
    *a1 = v7;
    a1[1] = (const char *)v8;
    return result;
  }
LABEL_19:
  v9 = v4 - 67;
  if ( !v9 )
  {
    v23 = "signed ";
    v24 = (const char *)7;
LABEL_85:
    sub_1003413A(&v23);
    sub_10035742(&v23, &v27);
    v27 = v23;
    v28 = v24;
    goto LABEL_86;
  }
  v10 = v9 - 2;
  if ( !v10 || (v11 = v10 - 2) == 0 || (v12 = v11 - 2) == 0 || (v13 = v12 - 2) == 0 )
  {
LABEL_84:
    v23 = "unsigned ";
    v24 = (const char *)9;
    goto LABEL_85;
  }
  if ( v13 != 20 )
    goto LABEL_86;
LABEL_79:
  if ( v29 == 69 || v29 == 71 || v29 == 73 || v29 == 75 || v29 == 77 )
    goto LABEL_84;
LABEL_86:
  if ( *a2 )
  {
    v21 = sub_10034211(&v22, 32, a2);
    sub_10034234(v21);
  }
  result = a1;
  *a1 = v27;
  a1[1] = v28;
  return result;
}
// 100331C7: using guessed type _DWORD __cdecl sub_100331C7(_DWORD, _DWORD, _DWORD);
// 10033221: using guessed type _DWORD __cdecl sub_10033221(_DWORD);
// 10033AF0: using guessed type _DWORD __stdcall sub_10033AF0(_DWORD);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 10034211: using guessed type _DWORD __cdecl sub_10034211(_DWORD, _DWORD, _DWORD);
// 10034216: using guessed type _DWORD __stdcall sub_10034216(_DWORD);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 10034676: using guessed type _DWORD __cdecl sub_10034676(_DWORD, _DWORD);
// 10034A81: using guessed type int sub_10034A81(void);
// 10034C61: using guessed type _DWORD __cdecl sub_10034C61(_DWORD, _DWORD, _DWORD);
// 1003535A: using guessed type _DWORD __cdecl sub_1003535A(_DWORD, _DWORD, _DWORD, _DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 10035BDE: using guessed type _DWORD __cdecl sub_10035BDE(_DWORD, _DWORD);
// 10035CA1: using guessed type _DWORD __stdcall sub_10035CA1(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (10048ED8) --------------------------------------------------------
int __stdcall sub_10048ED8(int a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // kr00_4
  unsigned int v4; // eax
  int v5; // ebx
  char v7; // [esp+Ch] [ebp-Ch]
  char v8; // [esp+10h] [ebp-8h]
  int v9; // [esp+14h] [ebp-4h]

  sub_10033163(&v7);
  if ( v8 )
    return 0;
  if ( !dword_100B1808 )
    return 0;
  v2 = strlen((const char *)dword_100B17F8);
  if ( dword_100B1808 >= v2 )
    return 0;
  v9 = 6824996;
  v3 = strlen((const char *)&v9);
  if ( !sub_100362EB(dword_100B17F8 + dword_100B1808, &v9, v3) )
    return 0;
  v4 = v3 + v2 + 1;
  if ( v4 < v2 )
    return 0;
  v5 = a1;
  if ( a1 )
  {
    if ( v4 >= a2 )
      return 0;
  }
  else
  {
    v5 = sub_1003620A(v3 + v2 + 1);
    if ( !v5 )
      return 0;
  }
  sub_100359C2(v5, dword_100B17F8, dword_100B1808);
  sub_100359C2(v5 + dword_100B1808, &v9, v3);
  sub_100359C2(v5 + dword_100B1808 + v3, dword_100B1808 + dword_100B17F8, v2 - dword_100B1808 + 1);
  return v5;
}
// 10033163: using guessed type _DWORD __cdecl sub_10033163(_DWORD);
// 100359C2: using guessed type _DWORD __cdecl sub_100359C2(_DWORD, _DWORD, _DWORD);
// 1003620A: using guessed type _DWORD __stdcall sub_1003620A(_DWORD);
// 100362EB: using guessed type _DWORD __cdecl sub_100362EB(_DWORD, _DWORD, _DWORD);
// 100B17F8: using guessed type int dword_100B17F8;
// 100B1808: using guessed type int dword_100B1808;

//----- (10049005) --------------------------------------------------------
_DWORD *__cdecl sub_10049005(_DWORD *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _DWORD *result; // eax
  signed int v13; // [esp-4h] [ebp-14h]
  int v14; // [esp+0h] [ebp-10h]
  int v15; // [esp+4h] [ebp-Ch]
  int v16; // [esp+8h] [ebp-8h]
  int v17; // [esp+Ch] [ebp-4h]

  if ( *(_BYTE *)dword_100B17F4 )
  {
    v1 = *(char *)dword_100B17F4++ - 65;
    v13 = 2;
    if ( v1 <= 0x16 )
    {
      v16 = 0;
      v2 = v1 & 0xFFFFFFFE;
      v17 = 2;
      if ( v2 > 0xC )
      {
        v8 = v2 - 14;
        if ( v8 )
        {
          v9 = v8 - 2;
          if ( !v9 )
          {
            v6 = sub_10034130(6);
            goto LABEL_27;
          }
          v10 = v9 - 2;
          if ( !v10 )
          {
            v6 = sub_10034130(9);
            goto LABEL_27;
          }
          v11 = v10 - 2;
          if ( !v11 )
          {
            v6 = sub_10034130(10);
            goto LABEL_27;
          }
          if ( v11 == 2 )
          {
            v6 = sub_10034130(11);
            goto LABEL_27;
          }
          goto LABEL_28;
        }
        v13 = 8;
      }
      else
      {
        if ( v2 == 12 )
        {
          v6 = sub_10034130(7);
          goto LABEL_27;
        }
        if ( !v2 )
        {
          v6 = sub_10034130(1);
          goto LABEL_27;
        }
        v3 = v2 - 2;
        if ( v3 )
        {
          v4 = v3 - 2;
          if ( !v4 )
          {
            v6 = sub_10034130(4);
            goto LABEL_27;
          }
          v5 = v4 - 2;
          if ( !v5 )
          {
            v6 = sub_10034130(3);
            goto LABEL_27;
          }
          if ( v5 == 2 )
          {
            v6 = sub_10034130(5);
LABEL_27:
            v14 = v6;
            v15 = v7;
            sub_10033AF0(&v14);
          }
LABEL_28:
          result = a1;
          *a1 = v16;
          a1[1] = v17;
          return result;
        }
      }
      v6 = sub_10034130(v13);
      goto LABEL_27;
    }
  }
  else
  {
    v13 = 1;
  }
  sub_100334A6(v13);
  return a1;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10033AF0: using guessed type _DWORD __stdcall sub_10033AF0(_DWORD);
// 10034130: using guessed type _DWORD __cdecl sub_10034130(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (10049101) --------------------------------------------------------
const char **__cdecl sub_10049101(const char **a1, const char **a2, int a3, _DWORD *a4, int a5)
{
  char v5; // al
  int v6; // ebx
  const char **result; // eax
  int v8; // ecx
  unsigned int v9; // edx
  const char *v10; // esi
  int v11; // edi
  const char *v12; // ecx
  int v13; // edx
  const char **v14; // eax
  const char **v15; // eax
  int v16; // edx
  char v17; // al
  int v18; // edx
  int *v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // edx
  int v24; // edx
  char *v25; // eax
  char v26; // al
  int v27; // edi
  int v28; // ebx
  int v29; // eax
  int v30; // esi
  int *v31; // eax
  int *v32; // eax
  char v33; // al
  int *v34; // eax
  int v35; // eax
  char v36; // al
  int v37; // ecx
  int *v38; // eax
  int v39; // eax
  char v40; // al
  _DWORD *v41; // eax
  _DWORD *v42; // esi
  _DWORD *v43; // eax
  _DWORD *v44; // esi
  int v45; // eax
  _DWORD *v46; // edi
  char v47; // [esp+Ch] [ebp-88h]
  int v48; // [esp+14h] [ebp-80h]
  int v49; // [esp+18h] [ebp-7Ch]
  int v50; // [esp+1Ch] [ebp-78h]
  int v51; // [esp+20h] [ebp-74h]
  int v52; // [esp+24h] [ebp-70h]
  int v53; // [esp+28h] [ebp-6Ch]
  int v54; // [esp+2Ch] [ebp-68h]
  int v55; // [esp+30h] [ebp-64h]
  int v56; // [esp+34h] [ebp-60h]
  int v57; // [esp+38h] [ebp-5Ch]
  char v58; // [esp+3Ch] [ebp-58h]
  const char *v59; // [esp+44h] [ebp-50h]
  int v60; // [esp+48h] [ebp-4Ch]
  const char *v61; // [esp+4Ch] [ebp-48h]
  int v62; // [esp+50h] [ebp-44h]
  const char *v63; // [esp+54h] [ebp-40h]
  int v64; // [esp+58h] [ebp-3Ch]
  const char *v65; // [esp+5Ch] [ebp-38h]
  int v66; // [esp+60h] [ebp-34h]
  char v67; // [esp+64h] [ebp-30h]
  unsigned int v68; // [esp+6Ch] [ebp-28h]
  const char *v69; // [esp+70h] [ebp-24h]
  int v70; // [esp+74h] [ebp-20h]
  char v71; // [esp+7Bh] [ebp-19h]
  const char *v72; // [esp+7Ch] [ebp-18h]
  int v73; // [esp+80h] [ebp-14h]
  char v74; // [esp+87h] [ebp-Dh]
  const char *v75; // [esp+88h] [ebp-Ch]
  int v76; // [esp+8Ch] [ebp-8h]
  char v77; // [esp+93h] [ebp-1h]

  v5 = *(_BYTE *)dword_100B17F4;
  v71 = 0;
  if ( !v5 )
  {
    if ( a5 )
      goto LABEL_119;
    if ( *a2 )
    {
      if ( (unsigned int)a2[1] & 0x100 || (v46 = a4, !*a4) )
      {
        sub_100331C7(a1, 1, a2);
      }
      else
      {
        sub_100334A6(1);
        sub_10035742(&v59, v46);
        sub_1003446E(&v58, 32);
        sub_10035742(a1, a2);
      }
      return a1;
    }
    if ( !*a4 )
LABEL_119:
      sub_100334A6(1);
    else
      sub_100331C7(a1, 1, a4);
    return a1;
  }
  v6 = a5;
  if ( v5 == 36 )
  {
    sub_100343C4(&v63, &a3, &v71, a5);
    if ( v63 )
    {
      result = a1;
      *a1 = v63;
      v8 = v64;
      goto LABEL_5;
    }
  }
  v9 = *(char *)dword_100B17F4 - (*(_BYTE *)dword_100B17F4 < 65 ? 22 : 65);
  v10 = 0;
  v62 = 0;
  v11 = 0;
  v65 = 0;
  v12 = 0;
  v66 = 0;
  v61 = 0;
  v77 = 0;
  v74 = 0;
  while ( 1 )
  {
    v68 = v9;
    if ( v9 == 4 )
    {
      if ( ~((dword_100B17FC | (unsigned int)HIWORD(dword_100B17FC)) >> 1) & 1 )
      {
        if ( !v10 )
        {
          v72 = (const char *)sub_10034130(12);
          v15 = &v72;
          v73 = v24;
          goto LABEL_29;
        }
        v63 = v10;
        v64 = v11;
        sub_10034A7C(32);
        v48 = sub_10034130(12);
        v49 = v23;
        v14 = (const char **)sub_100355E9(&v67, &v48);
LABEL_15:
        v10 = *v14;
        v11 = (int)v14[1];
        v65 = *v14;
        v66 = v11;
      }
LABEL_30:
      v17 = v77;
      goto LABEL_31;
    }
    if ( v9 == 5 )
    {
      if ( ~((unsigned int)dword_100B17FC >> 1) & 1 )
      {
        if ( v12 )
        {
          v75 = v12;
          v76 = v62;
          sub_10034A7C(32);
          v52 = sub_10034130(14);
          v53 = v18;
          v19 = (int *)sub_100355E9(&v58, &v52);
          v20 = *v19;
          v21 = v19[1];
          v61 = (const char *)v20;
          v62 = v21;
        }
        else
        {
          v50 = sub_10034130(14);
          v51 = v22;
          sub_10033AF0(&v50);
        }
      }
      goto LABEL_30;
    }
    if ( v9 != 6 )
    {
      if ( v9 == 7 )
      {
        if ( !v6 )
          goto LABEL_108;
        v74 = 1;
        goto LABEL_30;
      }
      if ( v9 == 8 )
      {
        if ( ~((unsigned int)dword_100B17FC >> 1) & 1 )
        {
          if ( v10 )
          {
            v69 = v10;
            v70 = v11;
            sub_10034A7C(32);
            v56 = sub_10034130(13);
            v57 = v13;
            v14 = (const char **)sub_100355E9(&v47, &v56);
            goto LABEL_15;
          }
          v54 = sub_10034130(13);
          v15 = (const char **)&v54;
          v55 = v16;
LABEL_29:
          sub_10033AF0(v15);
          v10 = v65;
          v11 = v66;
        }
        goto LABEL_30;
      }
      if ( *(_BYTE *)dword_100B17F4 )
        ++dword_100B17F4;
      if ( v9 <= 0x1F )
      {
        v27 = dword_100A4534[2 * a3];
        v72 = (const char *)*(&off_100A4530 + 2 * a3);
        v73 = v27;
        sub_1003413A(&v72);
        v69 = 0;
        v70 = 0;
        sub_10034234(&v75);
        v28 = v70;
        v75 = v69;
        v76 = v70;
        if ( v10 )
        {
          if ( (char)v70 <= 1 )
          {
            if ( v69 )
            {
              v29 = sub_100356B6(8);
              v30 = v29;
              if ( v29 )
              {
                sub_100334B0(v29);
                *(_DWORD *)v30 = &charNode::`vftable';
                *(_BYTE *)(v30 + 4) = 32;
              }
              else
              {
                v30 = 0;
              }
              sub_10035959(v30);
            }
            else
            {
              v69 = 0;
              v70 = 0;
              sub_10034F31(32);
            }
          }
          v31 = (int *)sub_10035742(&v67, &v65);
          v28 = v31[1];
          v75 = (const char *)*v31;
          v76 = v28;
        }
        if ( v61 )
        {
          v63 = v61;
          v64 = v62;
          sub_10034A7C(32);
          v32 = (int *)sub_10035742(&v67, &v75);
          v28 = v32[1];
          v75 = (const char *)*v32;
          v76 = v28;
        }
        v33 = v68;
        if ( v68 & 0x10 )
        {
          if ( a5 )
            goto LABEL_108;
          if ( v27 <= 0 )
          {
            if ( *(_BYTE *)dword_100B17F4 )
            {
              v35 = sub_100348BA(&v67);
              sub_100363B3(v35);
              v28 = v76;
            }
          }
          else
          {
            v72 = "::";
            v73 = 2;
            sub_1003413A(&v72);
            sub_10035742(&v72, &v75);
            v75 = v72;
            v76 = v73;
            if ( *(_BYTE *)dword_100B17F4 )
            {
              sub_100348BA(&v67);
              v34 = (int *)sub_10035742(&v58, &v75);
              v28 = v34[1];
              v75 = (const char *)*v34;
            }
            else
            {
              sub_100334A6(1);
              sub_10035742(&v72, &v75);
              v28 = v73;
              v75 = v72;
            }
            v76 = v28;
          }
          v36 = sub_10034A81();
          if ( v36 )
          {
            if ( v36 != 64 )
              goto LABEL_108;
          }
          else if ( (char)v28 <= 1 )
          {
            if ( v75 )
              sub_1003592C(&off_100A53D8);
            else
              sub_10034216(1);
            v28 = v76;
          }
          v33 = v68;
        }
        v37 = v33 & 0xC;
        if ( !(~((unsigned int)dword_100B17FC >> 1) & 1) )
        {
          if ( v37 == 12 )
          {
            v39 = sub_10035611(&v67);
            sub_100363B3(v39);
            v28 = v76;
          }
LABEL_72:
          v40 = v68;
          if ( v68 & 2 )
          {
            v72 = "volatile ";
            v73 = 9;
            sub_1003413A(&v72);
            sub_10035742(&v72, &v75);
            v28 = v73;
            v75 = v72;
            v40 = v68;
            v76 = v73;
          }
          if ( v40 & 1 )
          {
            v72 = "const ";
            v73 = 6;
            sub_1003413A(&v72);
            sub_10035742(&v72, &v75);
            v28 = v73;
            v75 = v72;
            v76 = v73;
          }
          if ( v77 )
          {
            v72 = "& ";
            v73 = 2;
            v69 = v75;
            v70 = v28;
            if ( (char)v28 <= 1 )
            {
              if ( v75 )
              {
                v41 = (_DWORD *)sub_100356B6(12);
                v42 = v41;
                if ( v41 )
                {
                  sub_100334B0(v41);
                  *v42 = &pcharNode::`vftable';
                  v42[1] = "& ";
                  v42[2] = 2;
                }
                else
                {
                  v42 = 0;
                }
                sub_1003433D(v42);
              }
              else
              {
                sub_10033AF0(&v72);
              }
            }
            v28 = v70;
            v75 = v69;
            v76 = v70;
          }
          if ( v74 )
          {
            v72 = "&& ";
            v73 = 3;
            v69 = v75;
            v70 = v28;
            if ( (char)v28 <= 1 )
            {
              if ( v75 )
              {
                v43 = (_DWORD *)sub_100356B6(12);
                v44 = v43;
                if ( v43 )
                {
                  sub_100334B0(v43);
                  *v44 = &pcharNode::`vftable';
                  v44[1] = "&& ";
                  v44[2] = 3;
                }
                else
                {
                  v44 = 0;
                }
                sub_1003433D(v44);
              }
              else
              {
                sub_10033AF0(&v72);
              }
            }
            v28 = v70;
            v75 = v69;
            v76 = v70;
          }
          if ( a5 )
            goto LABEL_105;
          if ( *a2 )
          {
            v28 = (int)a2[1];
            if ( !(v28 & 0x100) && *a4 )
            {
              sub_10034211(&v67, 32, a4);
              sub_1003446E(&v58, 32);
              v45 = sub_10035742(&v47, a2);
LABEL_104:
              sub_10034234(v45);
              v28 = v76;
              goto LABEL_105;
            }
            if ( !(v28 & 0x800) )
            {
              v45 = sub_10034211(&v67, 32, a2);
              goto LABEL_104;
            }
            v75 = *a2;
          }
          else if ( *a4 )
          {
            v45 = sub_10034211(&v67, 32, a4);
            goto LABEL_104;
          }
LABEL_105:
          if ( v71 )
          {
            v75 = 0;
            v76 = 0;
            sub_10034F31(62);
            v28 = v76 | 0x2000;
          }
          result = a1;
          *a1 = v75;
          a1[1] = (const char *)(v28 | 0x100);
          return result;
        }
        if ( v37 != 12 )
          goto LABEL_72;
        if ( !a5 )
        {
          sub_10035611(&v67);
          v38 = (int *)sub_10035742(&v58, &v75);
          v28 = v38[1];
          v75 = (const char *)*v38;
          v76 = v28;
          goto LABEL_72;
        }
      }
LABEL_108:
      sub_100334A6(2);
      return a1;
    }
    if ( !v6 )
      goto LABEL_108;
    v17 = 1;
LABEL_31:
    v77 = v17;
    v25 = (char *)(dword_100B17F4 + 1);
    dword_100B17F4 = (int)v25;
    v26 = *v25;
    if ( !v26 )
      goto LABEL_119;
    if ( v26 == 36 )
    {
      sub_100343C4(&v59, &a3, &v71, v6);
      if ( v59 )
        break;
    }
    v9 = *(char *)dword_100B17F4 - (*(_BYTE *)dword_100B17F4 < 65 ? 22 : 65);
    v12 = v61;
  }
  result = a1;
  *a1 = v59;
  v8 = v60;
LABEL_5:
  result[1] = (const char *)v8;
  return result;
}
// 100331C7: using guessed type _DWORD __cdecl sub_100331C7(_DWORD, _DWORD, _DWORD);
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 100334B0: using guessed type int __thiscall sub_100334B0(_DWORD);
// 10033AF0: using guessed type _DWORD __stdcall sub_10033AF0(_DWORD);
// 10034130: using guessed type _DWORD __cdecl sub_10034130(_DWORD);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 10034211: using guessed type _DWORD __cdecl sub_10034211(_DWORD, _DWORD, _DWORD);
// 10034216: using guessed type _DWORD __stdcall sub_10034216(_DWORD);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 1003433D: using guessed type _DWORD __stdcall sub_1003433D(_DWORD);
// 100343C4: using guessed type _DWORD __cdecl sub_100343C4(_DWORD, _DWORD, _DWORD, _DWORD);
// 1003446E: using guessed type _DWORD __stdcall sub_1003446E(_DWORD, _DWORD);
// 100348BA: using guessed type _DWORD __cdecl sub_100348BA(_DWORD);
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 10034A81: using guessed type int sub_10034A81(void);
// 10034F31: using guessed type _DWORD __stdcall sub_10034F31(char);
// 100355E9: using guessed type _DWORD __stdcall sub_100355E9(_DWORD, _DWORD);
// 10035611: using guessed type _DWORD __cdecl sub_10035611(_DWORD);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 1003592C: using guessed type _DWORD __stdcall sub_1003592C(_DWORD);
// 10035959: using guessed type _DWORD __stdcall sub_10035959(_DWORD);
// 100363B3: using guessed type _DWORD __stdcall sub_100363B3(_DWORD);
// 100A4530: using guessed type void *off_100A4530;
// 100A4534: using guessed type int dword_100A4534[];
// 100A5218: using guessed type void *charNode::`vftable';
// 100A5230: using guessed type void *pcharNode::`vftable';
// 100A53D8: using guessed type int (*(*off_100A53D8)[3])();
// 100B17F4: using guessed type int dword_100B17F4;
// 100B17FC: using guessed type int dword_100B17FC;

//----- (10049A68) --------------------------------------------------------
int __cdecl sub_10049A68(int a1)
{
  int v2; // [esp+0h] [ebp-10h]
  int v3; // [esp+4h] [ebp-Ch]
  int v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  v4 = 0;
  v5 = 0;
  v2 = 0;
  v3 = 0;
  sub_1003324E(a1, &v2, 0, &v4, 0);
  return a1;
}
// 1003324E: using guessed type _DWORD __cdecl sub_1003324E(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10049AA1) --------------------------------------------------------
int __cdecl sub_10049AA1(int a1, int a2)
{
  char v2; // cl
  int *v3; // eax
  char v5; // [esp+0h] [ebp-18h]
  const char *v6; // [esp+8h] [ebp-10h]
  int v7; // [esp+Ch] [ebp-Ch]
  int v8; // [esp+10h] [ebp-8h]
  int v9; // [esp+14h] [ebp-4h]

  sub_10035B57(a2);
  v2 = *(_BYTE *)dword_100B17F4;
  if ( !*(_BYTE *)dword_100B17F4 )
  {
    sub_100334A6(1);
    goto LABEL_10;
  }
  if ( v2 == 63 )
  {
    ++dword_100B17F4;
    v6 = 0;
    v7 = 0;
    v3 = (int *)sub_1003324E(&v5, &v8, 0, &v6, 0);
    v8 = *v3;
    v9 = v3[1];
    sub_10034676(a1, &v8);
    return a1;
  }
  if ( v2 == 88 )
  {
    ++dword_100B17F4;
    if ( !v8 )
    {
      v6 = "void";
      v7 = 4;
      sub_1003413A(&v6);
      return a1;
    }
    v6 = "void ";
    v7 = 5;
    sub_1003413A(&v6);
LABEL_10:
    sub_10035742(a1, &v8);
    return a1;
  }
  sub_10034676(a1, &v8);
  return a1;
}
// 1003324E: using guessed type _DWORD __cdecl sub_1003324E(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 10034676: using guessed type _DWORD __cdecl sub_10034676(_DWORD, _DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 10035B57: using guessed type _DWORD __stdcall sub_10035B57(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (10049BAD) --------------------------------------------------------
const char **__cdecl sub_10049BAD(const char **a1)
{
  const char **result; // eax
  int v2; // ecx
  _BYTE *i; // eax
  const char *v4; // esi
  unsigned int v5; // ebx
  unsigned int v6; // edi
  bool v7; // zf
  const char **v8; // eax
  const char *v9; // ecx
  const char **v10; // eax
  unsigned int v11; // [esp+14h] [ebp-30h]
  int v12; // [esp+18h] [ebp-2Ch]
  const char *v13; // [esp+1Ch] [ebp-28h]
  unsigned int v14; // [esp+20h] [ebp-24h]
  const char *v15; // [esp+24h] [ebp-20h]
  unsigned int v16; // [esp+28h] [ebp-1Ch]
  const char *v17; // [esp+2Ch] [ebp-18h]
  unsigned int v18; // [esp+30h] [ebp-14h]
  BOOL v19; // [esp+34h] [ebp-10h]
  int v20; // [esp+40h] [ebp-4h]

  ++dword_100B180C;
  v20 = 0;
  if ( !(dword_100B17FC & 0x2000) )
  {
    v2 = dword_100B17F4;
    if ( *(_BYTE *)dword_100B17F4 != 63 )
    {
      if ( !*(_BYTE *)dword_100B17F4 )
      {
        sub_100334A6(1);
        goto LABEL_43;
      }
      goto LABEL_34;
    }
    ++dword_100B17F4;
    if ( *(_BYTE *)(v2 + 1) == 63 && *(_BYTE *)(v2 + 2) == 63 )
    {
      sub_100337DA(&v13);
      for ( i = (_BYTE *)dword_100B17F4; *i; dword_100B17F4 = (int)i )
        ++i;
      goto LABEL_3;
    }
    sub_100332A8(&v17);
    v4 = v17;
    v5 = v18;
    v19 = v17 && v18 & 0x200;
    v6 = (v18 >> 15) & 1;
    if ( (char)v18 > 1 )
    {
LABEL_16:
      result = a1;
      *a1 = v4;
      a1[1] = (const char *)v5;
      goto LABEL_44;
    }
    if ( *(_BYTE *)dword_100B17F4 )
    {
      if ( *(_BYTE *)dword_100B17F4 != 64 )
      {
        sub_100348BA(&v13);
        if ( v13 )
        {
          if ( !byte_100B1800 )
          {
            v15 = v13;
            v16 = v14;
            v11 = (unsigned int)"::";
            v12 = 2;
            sub_10035CA1(&v11);
            v10 = (const char **)sub_10035742(&v13, &v17);
            goto LABEL_24;
          }
          byte_100B1800 = 0;
          v15 = v4;
          v16 = v5;
          sub_10034234(&v13);
          v4 = v15;
          v5 = v16;
          v17 = v15;
          v7 = *(_BYTE *)dword_100B17F4 == 64;
          v18 = v16;
          if ( !v7 )
          {
            v8 = (const char **)sub_100348BA(&v11);
            v13 = "::";
            v14 = 2;
            v9 = *v8;
            v16 = (unsigned int)v8[1];
            v15 = v9;
            sub_10035CA1(&v13);
            v10 = (const char **)sub_10035742(&v11, &v17);
LABEL_24:
            v5 = (unsigned int)v10[1];
            v4 = *v10;
            v18 = (unsigned int)v10[1];
            v17 = v4;
            goto LABEL_25;
          }
        }
      }
    }
LABEL_25:
    if ( v19 && v4 )
    {
      v5 |= 0x200u;
      v18 = v5;
    }
    if ( v6 )
    {
      v5 |= 0x8000u;
      v18 = v5;
    }
    if ( !v4 || v5 & 0x1000 )
      goto LABEL_16;
    if ( *(_BYTE *)dword_100B17F4 )
    {
      if ( *(_BYTE *)dword_100B17F4 != 64 )
      {
LABEL_34:
        sub_100334A6(2);
        goto LABEL_43;
      }
      ++dword_100B17F4;
    }
    if ( dword_100B17FC & 0x1000 && !v19 && !(v5 & 0x8000) )
    {
      v11 &= v19;
      v12 &= v19;
      sub_1003438D(&v13, &v11);
      goto LABEL_16;
    }
    sub_1003438D(a1, &v17);
LABEL_43:
    result = a1;
    goto LABEL_44;
  }
  dword_100B17FC &= 0xFFFFDFFF;
  sub_10035328(&v13, 0);
  dword_100B17FC |= 0x2000u;
LABEL_3:
  result = a1;
  *a1 = v13;
  a1[1] = (const char *)v14;
LABEL_44:
  --dword_100B180C;
  return result;
}
// 100332A8: using guessed type _DWORD __cdecl sub_100332A8(_DWORD);
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 100337DA: using guessed type _DWORD __cdecl sub_100337DA(_DWORD);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 1003438D: using guessed type _DWORD __cdecl sub_1003438D(_DWORD, _DWORD);
// 100348BA: using guessed type _DWORD __cdecl sub_100348BA(_DWORD);
// 10035328: using guessed type _DWORD __cdecl sub_10035328(_DWORD, _DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 10035CA1: using guessed type _DWORD __stdcall sub_10035CA1(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;
// 100B17F8: using guessed type int dword_100B17F8;
// 100B17FC: using guessed type int dword_100B17FC;
// 100B1800: using guessed type char byte_100B1800;
// 100B180C: using guessed type int dword_100B180C;

//----- (10049E96) --------------------------------------------------------
int *__cdecl sub_10049E96(int *a1, char a2)
{
  char *v2; // ecx
  int v3; // ebx
  char v4; // al
  int *result; // eax
  int v6; // eax
  int v7; // esi
  int *v8; // edx
  int *v9; // eax
  int v10; // ecx
  int *v11; // ecx
  signed __int64 v12; // [esp-Ch] [ebp-3Ch]
  __int64 v13; // [esp+4h] [ebp-2Ch]
  char v14; // [esp+Ch] [ebp-24h]
  int v15; // [esp+24h] [ebp-Ch]
  int v16; // [esp+28h] [ebp-8h]
  char v17; // [esp+2Fh] [ebp-1h]

  v2 = (char *)dword_100B17F4;
  v3 = 0;
  v17 = 0;
  if ( *(_BYTE *)dword_100B17F4 == 81 )
  {
    v2 = (char *)(dword_100B17F4 + 1);
    v17 = 1;
    ++dword_100B17F4;
  }
  v4 = *v2;
  if ( !*v2 )
  {
    sub_100334A6(1);
    return a1;
  }
  if ( v4 < 48 || v4 > 57 )
  {
    sub_10033555(&v13);
    if ( !v14 )
    {
      if ( *(_BYTE *)dword_100B17F4 )
      {
        v16 = 2;
        v11 = &v15;
        v15 = 0;
      }
      else
      {
        v11 = (int *)sub_100334A6(1);
        v3 = *v11;
      }
      result = a1;
      *a1 = v3;
      v10 = v11[1];
      goto LABEL_24;
    }
    ++dword_100B17F4;
    v12 = v13;
    if ( a2 )
    {
      if ( v17 )
      {
        v6 = sub_100351F2(v13);
        goto LABEL_9;
      }
      v9 = (int *)sub_100351F2(v13);
LABEL_11:
      v8 = v9;
      goto LABEL_12;
    }
    if ( v17 )
      goto LABEL_8;
LABEL_10:
    v9 = (int *)sub_100331B3(v12, HIDWORD(v12));
    goto LABEL_11;
  }
  dword_100B17F4 = (int)(v2 + 1);
  v12 = (char)(v4 - 48) + 1i64;
  if ( !v17 )
    goto LABEL_10;
LABEL_8:
  v6 = sub_100331B3(v12, HIDWORD(v12));
LABEL_9:
  v7 = v6;
  sub_1003413A(&off_100B0250);
  sub_10035742(&v15, v7);
  v8 = &v15;
LABEL_12:
  result = a1;
  *a1 = *v8;
  v10 = v8[1];
LABEL_24:
  result[1] = v10;
  return result;
}
// 100331B3: using guessed type _DWORD __stdcall sub_100331B3(_DWORD, _DWORD);
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10033555: using guessed type _DWORD __cdecl sub_10033555(_DWORD);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 100351F2: using guessed type _DWORD __stdcall sub_100351F2(__int64);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 100B0250: using guessed type char *off_100B0250;
// 100B17F4: using guessed type int dword_100B17F4;

//----- (10049FF2) --------------------------------------------------------
_DWORD *__cdecl sub_10049FF2(_DWORD *a1)
{
  char *v1; // eax
  char v2; // cl
  _DWORD *result; // eax

  if ( *(_BYTE *)dword_100B17F4 == 95 && *(_BYTE *)(dword_100B17F4 + 1) == 95 )
  {
    v1 = (char *)(dword_100B17F4 + 2);
    dword_100B17F4 = (int)v1;
    v2 = *v1;
    if ( !*v1 )
    {
      sub_100334A6(1);
      return a1;
    }
    dword_100B17F4 = (int)(v1 + 1);
    if ( (unsigned int)(v2 - 65) > 3 )
    {
      sub_100334A6(2);
      return a1;
    }
  }
  result = a1;
  *a1 = 0;
  a1[1] = 0;
  return result;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004A070) --------------------------------------------------------
const char **__cdecl sub_1004A070(const char **a1)
{
  char v1; // dl
  const char **result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // esi
  char v10; // [esp+0h] [ebp-28h]
  char v11; // [esp+8h] [ebp-20h]
  const char *v12; // [esp+10h] [ebp-18h]
  const char *v13; // [esp+14h] [ebp-14h]
  const char *v14; // [esp+18h] [ebp-10h]
  const char *v15; // [esp+1Ch] [ebp-Ch]
  const char *v16; // [esp+20h] [ebp-8h]
  const char *v17; // [esp+24h] [ebp-4h]

  v1 = *(_BYTE *)dword_100B17F4;
  if ( !*(_BYTE *)dword_100B17F4 )
  {
    v14 = "`unknown ecsu'";
    v15 = (const char *)14;
    sub_1003413A(&v14);
    sub_10035F85(a1, 1);
    return a1;
  }
  v14 = 0;
  v15 = 0;
  if ( v1 == 87 )
  {
    if ( !(~((unsigned int)dword_100B17FC >> 15) & 1) )
    {
LABEL_5:
      ++dword_100B17F4;
      if ( v1 == 87 )
        sub_10033E65(&v10);
      goto LABEL_7;
    }
  }
  else if ( !(~((unsigned int)dword_100B17FC >> 15) & 1) || dword_100B17FC & 0x1000 )
  {
    goto LABEL_5;
  }
  v16 = 0;
  v17 = 0;
  v3 = (char)sub_10034A81();
  if ( (_BYTE)v3 )
  {
    v4 = v3 - 84;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( !v5 )
      {
        v12 = "struct ";
        v13 = (const char *)7;
        goto LABEL_25;
      }
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( !v8 )
          {
            v12 = "coclass ";
            v13 = (const char *)8;
            goto LABEL_25;
          }
          if ( v8 == 1 )
          {
            v12 = "cointerface ";
            v13 = (const char *)12;
LABEL_25:
            sub_10033AF0(&v12);
            goto LABEL_26;
          }
        }
        else
        {
          v9 = sub_10033E65(&v11);
          v12 = "enum ";
          v13 = (const char *)5;
          sub_1003413A(&v12);
          sub_10035742(&v12, v9);
          v16 = v12;
          v17 = v13;
        }
LABEL_26:
        v14 = v16;
        v15 = v17;
LABEL_7:
        sub_100360AC(&v12);
        sub_10034234(&v12);
        result = a1;
        *a1 = v14;
        a1[1] = v15;
        return result;
      }
      v12 = "class ";
    }
    else
    {
      v12 = "union ";
    }
    v13 = (const char *)6;
    goto LABEL_25;
  }
  sub_100334A6(1);
  return a1;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10033AF0: using guessed type _DWORD __stdcall sub_10033AF0(_DWORD);
// 10033E65: using guessed type _DWORD __cdecl sub_10033E65(_DWORD);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 10034A81: using guessed type int sub_10034A81(void);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 10035F85: using guessed type _DWORD __stdcall sub_10035F85(_DWORD, _DWORD);
// 100360AC: using guessed type _DWORD __cdecl sub_100360AC(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;
// 100B17FC: using guessed type int dword_100B17FC;

//----- (1004A299) --------------------------------------------------------
const char **__cdecl sub_1004A299(const char **a1)
{
  const char **result; // eax
  const char *v2; // [esp+8h] [ebp-10h]
  const char *v3; // [esp+Ch] [ebp-Ch]
  const char *v4; // [esp+10h] [ebp-8h]
  const char *v5; // [esp+14h] [ebp-4h]

  v4 = 0;
  v5 = 0;
  if ( *(_BYTE *)dword_100B17F4 )
  {
    switch ( *(char *)dword_100B17F4 )
    {
      case 48:
      case 49:
        v2 = "char ";
        goto LABEL_7;
      case 50:
      case 51:
        v2 = "short ";
        v3 = (const char *)6;
        break;
      case 52:
        goto LABEL_9;
      case 53:
        v2 = "int ";
        v3 = (const char *)4;
        break;
      case 54:
      case 55:
        v2 = "long ";
LABEL_7:
        v3 = (const char *)5;
        break;
      default:
        sub_100334A6(2);
        goto LABEL_17;
    }
    sub_10033AF0(&v2);
LABEL_9:
    if ( *(_BYTE *)dword_100B17F4 == 49
      || *(_BYTE *)dword_100B17F4 == 51
      || *(_BYTE *)dword_100B17F4 == 53
      || *(_BYTE *)dword_100B17F4 == 55 )
    {
      v2 = "unsigned ";
      v3 = (const char *)9;
      sub_1003413A(&v2);
      sub_10035742(&v2, &v4);
      v4 = v2;
      v5 = v3;
    }
    result = a1;
    ++dword_100B17F4;
    *a1 = v4;
    a1[1] = v5;
  }
  else
  {
    sub_100334A6(1);
LABEL_17:
    result = a1;
  }
  return result;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10033AF0: using guessed type _DWORD __stdcall sub_10033AF0(_DWORD);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004A3F2) --------------------------------------------------------
int *__cdecl sub_1004A3F2(int *a1, _DWORD *a2, _BYTE *a3, int a4)
{
  char *v4; // edx
  int v5; // esi
  int v6; // ebx
  char v7; // al
  unsigned int v8; // edi
  int v9; // eax
  int *v10; // eax
  int v11; // edx
  bool v12; // zf
  _BYTE *v13; // ecx
  int v14; // edx
  int *v15; // eax
  int *result; // eax
  int v17; // eax
  char v18; // [esp+Ch] [ebp-20h]
  int v19; // [esp+14h] [ebp-18h]
  int v20; // [esp+18h] [ebp-14h]
  int v21; // [esp+1Ch] [ebp-10h]
  int v22; // [esp+20h] [ebp-Ch]
  int v23; // [esp+24h] [ebp-8h]
  int v24; // [esp+28h] [ebp-4h]

  v4 = (char *)(dword_100B17F4 + 1);
  dword_100B17F4 = (int)v4;
  v5 = 0;
  v6 = 0;
  switch ( *v4 )
  {
    case 65:
      if ( !a4 )
      {
        if ( *a2 == 2 || *a2 == 3 )
        {
          *a2 = 5;
          goto LABEL_37;
        }
        if ( *a2 == 1 )
        {
          *a2 = 4;
LABEL_37:
          v4 = (char *)dword_100B17F4;
          goto LABEL_38;
        }
      }
LABEL_38:
      v17 = (int)(v4 + 1);
      goto LABEL_39;
    case 66:
      if ( a4 )
        goto LABEL_27;
      *a3 = 1;
      break;
    case 67:
      *a2 = 5;
      break;
    default:
      if ( !*v4 || (v7 = v4[1]) == 0 )
      {
        sub_100334A6(1);
        return a1;
      }
      if ( !a4 )
      {
        v8 = 16 * (*v4 - 48) + v7 - 48;
        dword_100B17F4 = (int)(v4 + 2);
        if ( v8 > 1 )
        {
          v23 = 0;
          v24 = 0;
          sub_10034F31(44);
          v9 = sub_100331B3(v8, 0);
          v10 = (int *)sub_10035742(&v21, v9);
          v5 = *v10;
          v6 = v10[1];
        }
        v21 = v5;
        v22 = v6;
        sub_10034A7C(62);
        v5 = v21;
        v11 = v22;
        v23 = v21;
        v12 = *(_BYTE *)dword_100B17F4 == 36;
        v24 = v22;
        if ( v12 )
        {
          v13 = (_BYTE *)(dword_100B17F4++ + 1);
        }
        else
        {
          sub_10034A7C(94);
          v5 = v21;
          v11 = v22;
          v13 = (_BYTE *)dword_100B17F4;
          v23 = v21;
          v24 = v22;
        }
        if ( *v13 == 69 )
        {
          if ( ~((dword_100B17FC | (unsigned int)HIWORD(dword_100B17FC)) >> 1) & 1 )
          {
            v21 = v5;
            v22 = v11;
            sub_10034A7C(32);
            v19 = sub_10034130(12);
            v20 = v14;
            v15 = (int *)sub_100355E9(&v18, &v19);
            v13 = (_BYTE *)dword_100B17F4;
            v5 = *v15;
            v11 = v15[1];
            v23 = *v15;
            v24 = v11;
          }
          dword_100B17F4 = (int)++v13;
        }
        if ( *v13 )
        {
          dword_100B17F4 = (int)(v13 + 1);
        }
        else if ( (char)v11 <= 1 )
        {
          if ( v5 )
            sub_1003592C(&off_100A53D8);
          else
            sub_10034216(1);
          v5 = v23;
          v11 = v24;
        }
        result = a1;
        a1[1] = v11 | 0x4000;
        goto LABEL_40;
      }
LABEL_27:
      sub_100334A6(2);
      return a1;
  }
  v17 = dword_100B17F4 + 1;
LABEL_39:
  dword_100B17F4 = v17;
  result = a1;
  a1[1] = 0;
LABEL_40:
  *result = v5;
  return result;
}
// 100331B3: using guessed type _DWORD __stdcall sub_100331B3(_DWORD, _DWORD);
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10034130: using guessed type _DWORD __cdecl sub_10034130(_DWORD);
// 10034216: using guessed type _DWORD __stdcall sub_10034216(_DWORD);
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 10034F31: using guessed type _DWORD __stdcall sub_10034F31(char);
// 100355E9: using guessed type _DWORD __stdcall sub_100355E9(_DWORD, _DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 1003592C: using guessed type _DWORD __stdcall sub_1003592C(_DWORD);
// 100A53D8: using guessed type int (*(*off_100A53D8)[3])();
// 100B17F4: using guessed type int dword_100B17F4;
// 100B17FC: using guessed type int dword_100B17FC;

//----- (1004A677) --------------------------------------------------------
int __cdecl sub_1004A677(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  int v5; // ecx
  int result; // eax
  char v7; // [esp+4h] [ebp-18h]
  char v8; // [esp+Ch] [ebp-10h]
  char v9; // [esp+14h] [ebp-8h]

  v2 = (_DWORD *)sub_100356B6(8);
  v3 = v2;
  if ( v2 )
  {
    *v2 = 0;
    v2[1] = 0;
  }
  else
  {
    v3 = 0;
  }
  sub_10035328(a1, v3);
  sub_100333C5(&v9);
  sub_1003446E(&v8, 32);
  v4 = (_DWORD *)sub_10035742(&v7, a2);
  *v3 = *v4;
  v5 = v4[1];
  result = a1;
  v3[1] = v5;
  return result;
}
// 100333C5: using guessed type _DWORD __cdecl sub_100333C5(_DWORD);
// 1003446E: using guessed type _DWORD __stdcall sub_1003446E(_DWORD, _DWORD);
// 10035328: using guessed type _DWORD __cdecl sub_10035328(_DWORD, _DWORD);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);

//----- (1004A6F5) --------------------------------------------------------
int *__cdecl sub_1004A6F5(int *a1, int a2)
{
  char v2; // al
  int *result; // eax
  _BYTE *v4; // eax
  int *v5; // edx
  int v6; // ecx
  double v7; // [esp+0h] [ebp-10h]
  int v8; // [esp+8h] [ebp-8h]
  int v9; // [esp+Ch] [ebp-4h]

  v2 = *(_BYTE *)dword_100B17F4;
  if ( !*(_BYTE *)dword_100B17F4 )
  {
    sub_100334A6(1);
    return a1;
  }
  if ( v2 >= 48 && v2 <= 57 )
  {
    ++dword_100B17F4;
    sub_100331B3((char)(v2 - 48) + 1, (unsigned __int64)((char)(v2 - 48) + 1i64) >> 32);
    return a1;
  }
  sub_10033555(&v7);
  v4 = (_BYTE *)dword_100B17F4;
  if ( (_BYTE)v8 )
  {
    v4 = (_BYTE *)(dword_100B17F4++ + 1);
    if ( a2 == 66 )
    {
      sub_100463C8((int)a1, v7);
      return a1;
    }
    if ( a2 == 65 )
    {
      sub_10046350((int)a1, *(float *)&v7);
      return a1;
    }
  }
  if ( *v4 )
  {
    v6 = 0;
    v9 = 2;
    v8 = 0;
    v5 = &v8;
  }
  else
  {
    v5 = (int *)sub_100334A6(1);
    v6 = *v5;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v5[1];
  return result;
}
// 100331B3: using guessed type _DWORD __stdcall sub_100331B3(_DWORD, _DWORD);
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10033555: using guessed type _DWORD __cdecl sub_10033555(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004A7E8) --------------------------------------------------------
_DWORD *__cdecl sub_1004A7E8(_DWORD *a1, int *a2)
{
  char v2; // al
  int v3; // ebx
  _BYTE *v4; // ecx
  int v5; // eax
  const char **v6; // eax
  const char *v7; // ecx
  int v8; // eax
  _BYTE *v9; // ecx
  int *v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  const char **v14; // eax
  const char *v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  const char **v19; // eax
  const char *v20; // ecx
  int v21; // eax
  int v22; // eax
  const char **v23; // eax
  const char *v24; // ecx
  int v25; // eax
  const char **v26; // eax
  const char **v27; // esi
  int v28; // eax
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  _DWORD *result; // eax
  char v37; // [esp+Ch] [ebp-30h]
  char v38; // [esp+14h] [ebp-28h]
  int v39; // [esp+1Ch] [ebp-20h]
  int v40; // [esp+20h] [ebp-1Ch]
  const char *v41; // [esp+24h] [ebp-18h]
  const char *v42; // [esp+28h] [ebp-14h]
  int v43; // [esp+2Ch] [ebp-10h]
  int v44; // [esp+30h] [ebp-Ch]
  const char *v45; // [esp+34h] [ebp-8h]
  const char *v46; // [esp+38h] [ebp-4h]

  v2 = *(_BYTE *)dword_100B17F4;
  if ( !*(_BYTE *)dword_100B17F4 )
    goto LABEL_52;
  if ( (v2 < 54 || v2 > 57) && v2 != 95 )
    goto LABEL_51;
  v3 = v2 - 54;
  v4 = (_BYTE *)(dword_100B17F4++ + 1);
  if ( v3 == 41 )
  {
    if ( *v4 )
    {
      v3 = (char)*v4++ - 61;
      dword_100B17F4 = (int)v4;
      if ( v3 < 4 || v3 > 7 )
        v3 = -1;
      goto LABEL_12;
    }
LABEL_52:
    sub_100331C7(a1, 1, a2);
    return a1;
  }
  if ( v3 < 0 || v3 > 3 )
    goto LABEL_51;
LABEL_12:
  if ( v3 == -1 )
    goto LABEL_51;
  v43 = 0;
  v44 = 0;
  v45 = (const char *)*a2;
  v46 = (const char *)a2[1];
  if ( v3 & 2 )
  {
    if ( *v4 == 64 )
    {
      v9 = v4 + 1;
      dword_100B17F4 = (int)v9;
    }
    else
    {
      v41 = "::";
      v42 = (const char *)2;
      sub_1003413A(&v41);
      sub_10035742(&v41, &v45);
      v45 = v41;
      v46 = v42;
      if ( *(_BYTE *)dword_100B17F4 )
      {
        v5 = sub_100348BA(&v38);
        sub_10034211(&v41, 32, v5);
        v6 = (const char **)sub_10035742(&v37, &v45);
        v7 = *v6;
        v8 = (int)v6[1];
        v45 = v7;
      }
      else
      {
        sub_100334A6(1);
        sub_10035742(&v41, &v45);
        v45 = v41;
        v8 = (int)v42;
      }
      v9 = (_BYTE *)dword_100B17F4;
      v46 = (const char *)v8;
    }
    if ( !*v9 )
    {
      sub_100334A6(1);
      sub_10035742(a1, &v45);
      return a1;
    }
    if ( *v9 == 64 )
    {
      dword_100B17F4 = (int)(v9 + 1);
      if ( (dword_100B17FC & 0x60) == 96 )
      {
        v17 = sub_100359EA(&v37);
        sub_100363B3(v17);
      }
      else
      {
        v10 = (int *)sub_100359EA(&v37);
        v11 = *v10;
        v12 = v10[1];
        v43 = v11;
        v44 = v12;
      }
      goto LABEL_24;
    }
LABEL_51:
    sub_100334A6(2);
    return a1;
  }
LABEL_24:
  if ( v3 & 4 )
  {
    if ( ~(unsigned __int8)((unsigned int)dword_100B17FC >> 1) & 1 )
    {
      v13 = sub_10035611(&v37);
      sub_10034211(&v38, 32, v13);
      v14 = (const char **)sub_10035742(&v41, &v45);
      v15 = *v14;
      v16 = (int)v14[1];
      v45 = v15;
      v46 = (const char *)v16;
    }
    else
    {
      v18 = sub_10035611(&v37);
      sub_100363B3(v18);
    }
  }
  if ( ~(unsigned __int8)((unsigned int)dword_100B17FC >> 1) & 1 )
  {
    sub_10034856(&v37);
    v19 = (const char **)sub_10035742(&v38, &v45);
    v20 = *v19;
    v21 = (int)v19[1];
    v45 = v20;
    v46 = (const char *)v21;
  }
  else
  {
    v22 = sub_10034856(&v37);
    sub_100363B3(v22);
  }
  if ( *a2 )
  {
    sub_10034211(&v37, 40, &v45);
    v23 = (const char **)sub_1003446E(&v38, 41);
    v24 = *v23;
    v25 = (int)v23[1];
    v45 = v24;
    v46 = (const char *)v25;
  }
  v26 = (const char **)sub_100356B6(8);
  v27 = v26;
  if ( v26 )
  {
    *v26 = 0;
    v26[1] = 0;
  }
  else
  {
    v27 = 0;
  }
  sub_10034D2E(&v39, v27);
  v28 = sub_100362F0(&v37);
  sub_10034211(&v38, 40, v28);
  v29 = sub_1003446E(&v41, 41);
  sub_10034234(v29);
  v30 = dword_100B17FC;
  if ( (dword_100B17FC & 0x60) != 96 && v3 & 2 )
  {
    sub_10034234(&v43);
    v30 = dword_100B17FC;
  }
  if ( ~(v30 >> 19) & 1 )
  {
    v31 = sub_10033B22(&v37);
    sub_10034234(v31);
  }
  else
  {
    v32 = sub_10033B22(&v37);
    sub_100363B3(v32);
  }
  v33 = sub_1003382F(&v37);
  sub_10034234(v33);
  if ( ~BYTE1(dword_100B17FC) & 1 )
  {
    v34 = sub_10035B39(&v37);
    sub_10034234(v34);
  }
  else
  {
    v35 = sub_10035B39(&v37);
    sub_100363B3(v35);
  }
  if ( v27 )
  {
    *v27 = v45;
    v27[1] = v46;
    result = a1;
    *a1 = v39;
    a1[1] = v40;
    return result;
  }
  sub_100334A6(3);
  return a1;
}
// 100331C7: using guessed type _DWORD __cdecl sub_100331C7(_DWORD, _DWORD, _DWORD);
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 1003382F: using guessed type _DWORD __cdecl sub_1003382F(_DWORD);
// 10033B22: using guessed type _DWORD __cdecl sub_10033B22(_DWORD);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 10034211: using guessed type _DWORD __cdecl sub_10034211(_DWORD, _DWORD, _DWORD);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 1003446E: using guessed type _DWORD __stdcall sub_1003446E(_DWORD, _DWORD);
// 10034856: using guessed type _DWORD __cdecl sub_10034856(_DWORD);
// 100348BA: using guessed type _DWORD __cdecl sub_100348BA(_DWORD);
// 10034D2E: using guessed type _DWORD __cdecl sub_10034D2E(_DWORD, _DWORD);
// 10035611: using guessed type _DWORD __cdecl sub_10035611(_DWORD);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 100359EA: using guessed type _DWORD __cdecl sub_100359EA(_DWORD);
// 10035B39: using guessed type _DWORD __cdecl sub_10035B39(_DWORD);
// 100362F0: using guessed type _DWORD __cdecl sub_100362F0(_DWORD);
// 100363B3: using guessed type _DWORD __stdcall sub_100363B3(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;
// 100B17FC: using guessed type int dword_100B17FC;

//----- (1004ACBD) --------------------------------------------------------
char __thiscall sub_1004ACBD(_DWORD *this)
{
  return this[1] != 1 ? 0 : 0x20;
}

//----- (1004ACCC) --------------------------------------------------------
char __thiscall sub_1004ACCC(_BYTE *this)
{
  return this[4];
}

//----- (1004ACD0) --------------------------------------------------------
char __thiscall sub_1004ACD0(_DWORD *this)
{
  _DWORD *v1; // ecx

  v1 = (_DWORD *)this[1];
  if ( !v1 )
    return 0;
  if ( *v1 )
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v1 + 8))(*v1);
  return 0;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004ACE1) --------------------------------------------------------
int __thiscall sub_1004ACE1(_DWORD **this)
{
  _DWORD **v1; // ebx
  int result; // eax

  v1 = this;
  result = (*(int (__thiscall **)(_DWORD *))(*this[2] + 8))(this[2]);
  if ( !(_BYTE)result )
    result = (*(int (__thiscall **)(_DWORD *))(*v1[1] + 8))(v1[1]);
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004AD23) --------------------------------------------------------
char __thiscall sub_1004AD23(_DWORD *this)
{
  int v1; // edx
  char result; // al

  v1 = this[2];
  if ( v1 )
    result = *(_BYTE *)(this[1] + v1 - 1);
  else
    result = 0;
  return result;
}

//----- (1004AD39) --------------------------------------------------------
int __cdecl sub_1004AD39(int a1)
{
  int v1; // eax
  char v3; // [esp+0h] [ebp-10h]
  char v4; // [esp+8h] [ebp-8h]

  v1 = sub_100345D1(&v4, 0);
  sub_10034211(&v3, 96, v1);
  sub_1003446E(a1, 39);
  return a1;
}
// 10034211: using guessed type _DWORD __cdecl sub_10034211(_DWORD, _DWORD, _DWORD);
// 1003446E: using guessed type _DWORD __stdcall sub_1003446E(_DWORD, _DWORD);
// 100345D1: using guessed type _DWORD __cdecl sub_100345D1(_DWORD, char);

//----- (1004AD76) --------------------------------------------------------
_DWORD *__cdecl sub_1004AD76(_DWORD *a1)
{
  int v1; // eax
  _DWORD *result; // eax
  char v3; // [esp+0h] [ebp-10h]
  int v4; // [esp+8h] [ebp-8h]
  int v5; // [esp+Ch] [ebp-4h]

  if ( *(_BYTE *)dword_100B17F4 )
  {
    sub_10034B26(&v4);
    sub_10034A7C(46);
    v1 = sub_10033EF1(&v3, 0, 0);
    sub_10034234(v1);
    if ( *(_BYTE *)dword_100B17F4 == 64 )
    {
      ++dword_100B17F4;
      result = a1;
      *a1 = v4;
      a1[1] = v5;
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
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 10034B26: using guessed type _DWORD __cdecl sub_10034B26(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004AE02) --------------------------------------------------------
int __thiscall sub_1004AE02(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  unsigned int v3; // edi
  unsigned int v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // esi

  v2 = this;
  v3 = (a2 + 7) & 0xFFFFFFF8;
  if ( !v3 )
    v3 = 8;
  v4 = this[4];
  if ( v4 >= v3 )
    goto LABEL_10;
  v4 = 4096;
  if ( v3 <= 0x1000 )
  {
    v5 = (_DWORD *)sub_100346C6(4100, &dword_100B1810, 1);
    if ( v5 )
    {
      *v5 = 0;
      v6 = (_DWORD *)v2[3];
      if ( v6 )
        *v6 = v5;
      else
        v2[2] = v5;
      v2[3] = v5;
LABEL_10:
      v7 = v4 - v3;
      v2[4] = v7;
      return v7 + v2[3] + 4;
    }
  }
  return 0;
}
// 100346C6: using guessed type _DWORD __cdecl sub_100346C6(_DWORD, _DWORD, _DWORD);
// 100B1810: using guessed type int dword_100B1810;

//----- (1004AE86) --------------------------------------------------------
int __thiscall sub_1004AE86(int (__cdecl **this)(unsigned int), int a2)
{
  return (*this)((a2 + 7) & 0xFFFFFFF8);
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004AEAE) --------------------------------------------------------
_DWORD *__cdecl sub_1004AEAE(_DWORD *a1)
{
  _DWORD *result; // eax
  const char *v2; // [esp+0h] [ebp-8h]
  int v3; // [esp+4h] [ebp-4h]

  if ( *(_BYTE *)dword_100B17F4 != 95 || *(_BYTE *)(dword_100B17F4 + 1) != 69 )
  {
    result = a1;
    *a1 = 0;
    a1[1] = 0;
  }
  else
  {
    dword_100B17F4 += 2;
    v2 = " noexcept";
    v3 = 9;
    sub_1003413A(&v2);
    result = a1;
  }
  return result;
}
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004AF08) --------------------------------------------------------
int sub_1004AF08()
{
  char *v0; // ecx
  char v1; // dl
  int result; // eax
  int v3; // esi

  v0 = (char *)dword_100B17F4;
  v1 = *(_BYTE *)dword_100B17F4;
  if ( (unsigned __int8)(*(_BYTE *)dword_100B17F4 - 48) > 9u )
  {
    v3 = 0;
    while ( 1 )
    {
      if ( v1 == 64 )
      {
        result = v3;
        dword_100B17F4 = (int)(v0 + 1);
        return result;
      }
      if ( !v1 )
        break;
      if ( (unsigned __int8)(v1 - 65) > 0xFu )
        return -1;
      v3 = v1 + 16 * v3 - 65;
      dword_100B17F4 = (int)++v0;
      v1 = *v0;
    }
    result = 0;
  }
  else
  {
    ++dword_100B17F4;
    result = v1 - 47;
  }
  return result;
}
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004AF78) --------------------------------------------------------
_DWORD *__cdecl sub_1004AF78(_DWORD *a1, char a2, _BYTE *a3)
{
  char *v3; // edi
  signed int v4; // eax
  int v5; // eax
  int v6; // eax
  _DWORD *result; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  int *v12; // eax
  int v13; // esi
  unsigned int v14; // ebx
  int *v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  char **v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  CHAR *v24; // eax
  int v25; // eax
  int v26; // eax
  signed int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  char **v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  char v38; // al
  int v39; // edx
  int *v40; // eax
  int v41; // ecx
  unsigned int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  const char **v49; // eax
  const char *v50; // ecx
  int v51; // eax
  unsigned int v52; // eax
  int v53; // eax
  const char **v54; // eax
  const char *v55; // ecx
  int v56; // eax
  unsigned int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  char *v63; // eax
  char v64; // cl
  char v65; // dl
  char v66; // [esp+Ch] [ebp-28h]
  const char *v67; // [esp+14h] [ebp-20h]
  unsigned int v68; // [esp+18h] [ebp-1Ch]
  const char *v69; // [esp+1Ch] [ebp-18h]
  unsigned int v70; // [esp+20h] [ebp-14h]
  char *v71; // [esp+24h] [ebp-10h]
  unsigned int v72; // [esp+28h] [ebp-Ch]
  const char *v73; // [esp+2Ch] [ebp-8h]
  unsigned int v74; // [esp+30h] [ebp-4h]

  v3 = 0;
  v71 = 0;
  v72 = 0;
  v69 = 0;
  v70 = 0;
  v4 = (char)sub_10034A81();
  if ( (char)v4 > 73 )
  {
    switch ( v4 )
    {
      case 74:
      case 75:
      case 76:
      case 77:
      case 78:
      case 79:
      case 80:
      case 81:
      case 82:
      case 83:
      case 84:
      case 85:
      case 86:
      case 87:
      case 88:
      case 89:
      case 90:
        goto LABEL_52;
      case 95:
        v27 = (char)sub_10034A81();
        if ( (char)v27 <= 71 )
        {
          if ( (char)v27 != 71 )
          {
            if ( v27 <= 56 )
            {
              if ( v27 != 56 )
              {
                if ( v27 <= 51 )
                {
                  if ( v27 != 51 )
                  {
                    if ( !v27 )
                      goto LABEL_87;
                    v28 = v27 - 48;
                    if ( v28 )
                    {
                      v29 = v28 - 1;
                      if ( v29 )
                      {
                        if ( v29 != 1 )
                          goto LABEL_11;
                      }
                    }
                  }
LABEL_69:
                  v20 = &(&off_100A4200)[2 * *(char *)(dword_100B17F4 - 1)];
                  goto LABEL_41;
                }
                v30 = v27 - 52;
                if ( !v30 )
                  goto LABEL_69;
                v31 = v30 - 1;
                if ( !v31 )
                  goto LABEL_69;
                v32 = v31 - 1;
                if ( !v32 )
                  goto LABEL_69;
                if ( v32 != 1 )
                  goto LABEL_11;
              }
              v33 = &(&off_100A4200)[2 * *(char *)(dword_100B17F4 - 1)];
LABEL_75:
              sub_1003413A(v33);
              return a1;
            }
            if ( v27 <= 67 )
            {
              if ( v27 == 67 )
              {
                sub_100345A4(&v69, 0);
              }
              else
              {
                v34 = v27 - 57;
                if ( !v34 )
                {
                  sub_1003413A(&(&off_100A4200)[2 * *(char *)(dword_100B17F4 - 1)]);
                  v39 = v70 | 0x8000;
LABEL_89:
                  result = a1;
                  *a1 = v69;
                  a1[1] = v39;
                  return result;
                }
                v35 = v34 - 6;
                if ( v35 )
                {
                  v36 = v35 - 1;
LABEL_81:
                  v37 = v36 - 1;
                  if ( v37 && v37 != 1 )
                    goto LABEL_11;
                  goto LABEL_83;
                }
                v38 = sub_10034A81();
                if ( !v38 )
                  goto LABEL_87;
                if ( v38 != 48 )
                  goto LABEL_11;
                sub_100345A4(&v69, 1);
              }
              v39 = v70 | 0x1000;
              goto LABEL_89;
            }
            v36 = v27 - 68;
            if ( v36 )
              goto LABEL_81;
          }
LABEL_83:
          v33 = (char **)&aPdbopenvalidat[8 * *(char *)(dword_100B17F4 - 1)];
          goto LABEL_75;
        }
        break;
      default:
        goto LABEL_11;
    }
    switch ( v27 )
    {
      case 72:
      case 73:
      case 74:
      case 75:
      case 76:
      case 77:
      case 78:
      case 79:
      case 83:
      case 84:
      case 88:
      case 89:
        goto LABEL_83;
      case 80:
        sub_10033AF0(&aPdbopenvalidat[8 * *(char *)(dword_100B17F4 - 1)]);
        v40 = (int *)sub_1003417B(&v67, 0, 0);
        v41 = *v40;
        v42 = v40[1];
        v69 = (const char *)v41;
        v70 = v42;
        if ( v41 && v42 & 0x400 )
          goto LABEL_11;
        goto LABEL_107;
      case 81:
        goto LABEL_43;
      case 82:
        sub_10033AF0(&aPdbopenvalidat[8 * *(char *)(dword_100B17F4 - 1)]);
        if ( !*(_BYTE *)dword_100B17F4 )
        {
          sub_10035F85(a1, 1);
          return a1;
        }
        v43 = *(char *)dword_100B17F4 - 48;
        if ( v43 < 0 || (unsigned int)v43 >= 5 )
          goto LABEL_11;
        sub_10033AF0(&(&off_100A4508)[2 * v43]);
        v44 = (char)sub_10034A81() - 48;
        if ( !v44 )
        {
          sub_10035328(&v67, 0);
          v73 = v67;
          v74 = v68;
          sub_10034A7C(32);
          sub_10035742(&v66, &v71);
          sub_10035742(a1, &v69);
          return a1;
        }
        v45 = v44 - 1;
        if ( v45 )
        {
          v46 = v45 - 1;
          if ( !v46 || (v47 = v46 - 1) == 0 || v47 == 1 )
          {
LABEL_107:
            sub_10035742(a1, &v69);
            return a1;
          }
          goto LABEL_42;
        }
        v73 = v71;
        v74 = v72;
        if ( (char)v72 <= 1 )
        {
          if ( v71 )
          {
            if ( v69 )
            {
              if ( sub_100346C6(16, &dword_100B1810, 0) )
                v73 = (const char *)sub_10034C89(v71, v69);
              else
                v73 = 0;
              if ( !v73 )
                v74 = v72 & 0xFFFFFF03 | 3;
            }
            else if ( (_BYTE)v70 && sub_1003341A(&v73) )
            {
              if ( sub_100349F5(&v73) || (char)v70 == 2 || (char)v70 == 3 )
              {
                sub_10034216((char)v70);
              }
              else
              {
                v48 = sub_10035157((char)v70);
                sub_1003592C(v48);
              }
            }
          }
          else if ( v69 )
          {
            v73 = v69;
            v74 = v70;
          }
          else
          {
            sub_10034216((char)v70);
          }
        }
        sub_10035FAD(&v67);
        v49 = (const char **)sub_1003446E(&v69, 44);
        if ( (char)v74 > 1 )
          goto LABEL_140;
        v50 = *v49;
        if ( v73 )
        {
          if ( v50 )
          {
            sub_100331E5(*v49);
          }
          else
          {
            v51 = *((char *)v49 + 4);
            if ( v51 )
            {
              if ( v51 == 2 || v51 == 3 )
                goto LABEL_132;
              v53 = sub_10035157(v51);
              sub_1003592C(v53);
            }
          }
        }
        else
        {
          if ( !v50 )
          {
            v51 = *((char *)v49 + 4);
LABEL_132:
            sub_10034216(v51);
            goto LABEL_140;
          }
          v52 = (unsigned int)v49[1];
          v73 = v50;
          v74 = v52;
        }
LABEL_140:
        sub_10035FAD(&v67);
        v54 = (const char **)sub_1003446E(&v69, 44);
        if ( (char)v74 <= 1 )
        {
          v55 = *v54;
          if ( !v73 )
          {
            if ( v55 )
            {
              v57 = (unsigned int)v54[1];
              v73 = v55;
              v74 = v57;
              goto LABEL_152;
            }
            v56 = *((char *)v54 + 4);
            goto LABEL_144;
          }
          if ( v55 )
          {
            sub_100331E5(*v54);
            goto LABEL_152;
          }
          v56 = *((char *)v54 + 4);
          if ( v56 )
          {
            if ( v56 != 2 && v56 != 3 )
            {
              v58 = sub_10035157(v56);
              sub_1003592C(v58);
              goto LABEL_152;
            }
LABEL_144:
            sub_10034216(v56);
            goto LABEL_152;
          }
        }
LABEL_152:
        sub_10035FAD(&v67);
        v59 = sub_1003446E(&v69, 44);
        sub_10034234(v59);
        sub_100345D1(&v67, 0);
        v60 = sub_1003446E(&v69, 41);
        sub_10034234(v60);
        sub_1003446E(a1, 39);
        return a1;
      case 85:
      case 86:
        v24 = &aPdbopenvalidat[8 * *(char *)(dword_100B17F4 - 1)];
        goto LABEL_155;
      case 95:
        switch ( (char)sub_10034A81() )
        {
          case 65:
          case 66:
          case 67:
          case 68:
          case 71:
          case 72:
          case 73:
          case 74:
          case 76:
          case 77:
            v33 = &(&off_100A4290)[2 * *(char *)(dword_100B17F4 - 1)];
            goto LABEL_75;
          case 69:
          case 70:
            sub_1003413A(&(&off_100A4290)[2 * *(char *)(dword_100B17F4 - 1)]);
            if ( *(_BYTE *)dword_100B17F4 == 63 )
            {
              v61 = sub_100337DA(&v66);
              sub_10034234(v61);
              if ( *(_BYTE *)dword_100B17F4 == 64 )
                ++dword_100B17F4;
            }
            else
            {
              v62 = sub_100332A8(&v66);
              sub_10034234(v62);
            }
            v67 = "''";
            v68 = 2;
            sub_10035CA1(&v67);
            goto LABEL_21;
          case 75:
            sub_1003413A(&(&off_100A4290)[2 * *(char *)(dword_100B17F4 - 1)]);
            v63 = (char *)dword_100B17F4;
            v64 = *(_BYTE *)dword_100B17F4;
            if ( !*(_BYTE *)dword_100B17F4 )
              goto LABEL_11;
            LOBYTE(v74) = *(_BYTE *)dword_100B17F4;
            do
            {
              v65 = v64;
              if ( v64 == 64 )
                break;
              sub_10034A7C(v74);
              v63 = (char *)(dword_100B17F4 + 1);
              dword_100B17F4 = (int)v63;
              v64 = *v63;
              LOBYTE(v74) = v64;
              v65 = v64;
            }
            while ( v64 );
            if ( v65 == 64 )
              dword_100B17F4 = (int)(v63 + 1);
            goto LABEL_21;
          case 78:
            if ( (unsigned __int8)sub_10034A81() != 50 )
              goto LABEL_11;
            sub_1003630E(a1);
            return a1;
          default:
            goto LABEL_11;
        }
        goto LABEL_11;
      default:
        goto LABEL_11;
    }
  }
  if ( (char)v4 == 73 )
    goto LABEL_52;
  if ( v4 > 56 )
  {
    if ( v4 > 68 )
    {
      v25 = v4 - 69;
      if ( !v25 )
        goto LABEL_52;
      v26 = v25 - 1;
      if ( !v26 )
        goto LABEL_52;
      v23 = v26 - 1;
      if ( !v23 )
        goto LABEL_52;
    }
    else
    {
      if ( v4 == 68 )
        goto LABEL_52;
      v21 = v4 - 57;
      if ( !v21 )
        goto LABEL_40;
      v22 = v21 - 8;
      if ( !v22 )
      {
LABEL_52:
        v24 = (CHAR *)&LibFileName[4 * *(char *)(dword_100B17F4 - 1) + 28];
LABEL_155:
        sub_10033AF0(v24);
        if ( v3 )
        {
          v3 = v71;
          if ( v71 )
            v72 |= 0x200u;
LABEL_45:
          result = a1;
          v10 = v72;
          *a1 = v3;
          goto LABEL_22;
        }
LABEL_42:
        v3 = v71;
LABEL_43:
        if ( v3 )
        {
          v67 = "operator";
          v68 = 8;
          sub_1003413A(&v67);
          sub_10035742(&v67, &v71);
          v3 = (char *)v67;
          v72 = v68;
        }
        goto LABEL_45;
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
        v3 = (char *)1;
        goto LABEL_52;
      }
    }
    if ( v23 != 1 )
      goto LABEL_11;
    goto LABEL_52;
  }
  if ( v4 == 56 )
    goto LABEL_40;
  if ( v4 > 51 )
  {
    v18 = v4 - 52;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( v19 )
      {
        v6 = v19 - 1;
        if ( v6 )
        {
LABEL_10:
          if ( v6 != 1 )
          {
LABEL_11:
            sub_100334A6(2);
            return a1;
          }
          goto LABEL_40;
        }
      }
    }
LABEL_40:
    v20 = (char **)&aAdvapi32Dll[4 * *(char *)(dword_100B17F4 - 1) + 12];
LABEL_41:
    sub_10033AF0(v20);
    goto LABEL_42;
  }
  if ( v4 == 51 )
    goto LABEL_40;
  if ( !v4 )
  {
LABEL_87:
    sub_100334A6(1);
    return a1;
  }
  v5 = v4 - 48;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
      goto LABEL_10;
  }
  v69 = 0;
  v70 = 0;
  if ( a2 )
  {
    v8 = sub_10034B67(&v67);
    v9 = sub_10034211(&v73, 60, v8);
    sub_10034234(v9);
    if ( v69 && (*(unsigned __int8 (__thiscall **)(const char *))(*(_DWORD *)v69 + 8))(v69) == 62 )
      sub_10034A7C(32);
    sub_10034A7C(62);
    if ( a3 )
      *a3 = 1;
    if ( !*(_BYTE *)dword_100B17F4 )
    {
LABEL_21:
      result = a1;
      *a1 = v69;
      v10 = v70;
LABEL_22:
      result[1] = v10;
      return result;
    }
    v11 = dword_100B17F4++ + 1;
  }
  else
  {
    v11 = dword_100B17F4;
  }
  v74 = v11;
  v12 = (int *)sub_10033EF1(&v67, 0, 0);
  v13 = *v12;
  v14 = v12[1];
  v71 = (char *)v13;
  v72 = v14;
  dword_100B17F4 = v74;
  if ( v13 && *(_BYTE *)(v74 - 1) == 49 )
  {
    v15 = (int *)sub_10034211(&v67, 126, &v71);
    v13 = *v15;
    v14 = v15[1];
  }
  if ( v69 && (char)v14 <= 1 )
  {
    if ( v13 )
    {
      v16 = sub_100356B6(16);
      v74 = v16;
      if ( v16 )
      {
        v3 = (char *)v16;
        sub_100334B0(v16);
        v17 = (int)v69;
        *((_DWORD *)v3 + 3) = -1;
        *(_DWORD *)v3 = &pairNode::`vftable';
        *((_DWORD *)v3 + 1) = v13;
        *((_DWORD *)v3 + 2) = v17;
      }
      v13 = (int)v3;
      if ( !v3 )
        v14 = v14 & 0xFFFFFF03 | 3;
    }
    else
    {
      v14 = v70;
      v13 = (int)v69;
    }
  }
  result = a1;
  *a1 = v13;
  a1[1] = v14;
  return result;
}
// 100331E5: using guessed type _DWORD __stdcall sub_100331E5(_DWORD);
// 100332A8: using guessed type _DWORD __cdecl sub_100332A8(_DWORD);
// 1003341A: using guessed type int __thiscall sub_1003341A(_DWORD);
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 100334B0: using guessed type int __thiscall sub_100334B0(_DWORD);
// 100337DA: using guessed type _DWORD __cdecl sub_100337DA(_DWORD);
// 10033AF0: using guessed type _DWORD __stdcall sub_10033AF0(_DWORD);
// 10033EF1: using guessed type _DWORD __cdecl sub_10033EF1(_DWORD, char, char);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 1003417B: using guessed type _DWORD __cdecl sub_1003417B(_DWORD, char, _DWORD);
// 10034211: using guessed type _DWORD __cdecl sub_10034211(_DWORD, _DWORD, _DWORD);
// 10034216: using guessed type _DWORD __stdcall sub_10034216(_DWORD);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 1003446E: using guessed type _DWORD __stdcall sub_1003446E(_DWORD, _DWORD);
// 100345A4: using guessed type _DWORD __cdecl sub_100345A4(_DWORD, _DWORD);
// 100345D1: using guessed type _DWORD __cdecl sub_100345D1(_DWORD, char);
// 100346C6: using guessed type _DWORD __cdecl sub_100346C6(_DWORD, _DWORD, _DWORD);
// 100349F5: using guessed type int __thiscall sub_100349F5(_DWORD);
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 10034A81: using guessed type int sub_10034A81(void);
// 10034B67: using guessed type _DWORD __cdecl sub_10034B67(_DWORD);
// 10034C89: using guessed type _DWORD __stdcall sub_10034C89(_DWORD, _DWORD);
// 10035157: using guessed type _DWORD __cdecl sub_10035157(_DWORD);
// 10035328: using guessed type _DWORD __cdecl sub_10035328(_DWORD, _DWORD);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 1003592C: using guessed type _DWORD __stdcall sub_1003592C(_DWORD);
// 10035CA1: using guessed type _DWORD __stdcall sub_10035CA1(_DWORD);
// 10035F85: using guessed type _DWORD __stdcall sub_10035F85(_DWORD, _DWORD);
// 10035FAD: using guessed type _DWORD __cdecl sub_10035FAD(_DWORD);
// 1003630E: using guessed type _DWORD __cdecl sub_1003630E(_DWORD);
// 100A4200: using guessed type char *off_100A4200;
// 100A4290: using guessed type char *off_100A4290;
// 100A4508: using guessed type char *off_100A4508;
// 100A5278: using guessed type void *pairNode::`vftable';
// 100B17F4: using guessed type int dword_100B17F4;
// 100B1810: using guessed type int dword_100B1810;
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004BA6F) --------------------------------------------------------
_DWORD *__cdecl sub_1004BA6F(_DWORD *a1)
{
  _DWORD *result; // eax
  int v2; // eax
  int v3; // eax
  const char *v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+4h] [ebp-Ch]
  int v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  if ( *(_BYTE *)dword_100B17F4 )
  {
    v6 = 0;
    v7 = 0;
    sub_10034F31(38);
    v2 = sub_100348BA(&v4);
    sub_10034234(v2);
    if ( (char)v7 > 1
      || *(_BYTE *)dword_100B17F4 != 64
      || (v4 = "::",
          ++dword_100B17F4,
          v5 = 2,
          sub_10035CA1(&v4),
          v3 = sub_10033EF1(&v4, 0, 0),
          sub_10034234(v3),
          *(_BYTE *)dword_100B17F4 != 64) )
    {
      sub_100334A6(2);
      result = a1;
    }
    else
    {
      ++dword_100B17F4;
      result = a1;
      *a1 = v6;
      a1[1] = v7;
    }
  }
  else
  {
    sub_100334A6(1);
    result = a1;
  }
  return result;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10033EF1: using guessed type _DWORD __cdecl sub_10033EF1(_DWORD, char, char);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 100348BA: using guessed type _DWORD __cdecl sub_100348BA(_DWORD);
// 10034F31: using guessed type _DWORD __stdcall sub_10034F31(char);
// 10035CA1: using guessed type _DWORD __stdcall sub_10035CA1(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004BB9C) --------------------------------------------------------
const char **__cdecl sub_1004BB9C(const char **a1, const char **a2)
{
  _BYTE *v2; // ecx
  const char **v3; // esi
  int v4; // eax
  char v5; // al
  const char **result; // eax
  signed int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  signed int v15; // [esp-4h] [ebp-18h]
  const char *v16; // [esp+4h] [ebp-10h]
  int v17; // [esp+8h] [ebp-Ch]
  int v18; // [esp+Ch] [ebp-8h]
  int v19; // [esp+10h] [ebp-4h]

  v2 = (_BYTE *)dword_100B17F4;
  v18 = 0;
  v19 = 0;
  if ( !*(_BYTE *)dword_100B17F4 )
    goto LABEL_15;
  if ( *(_BYTE *)dword_100B17F4 != 36 )
  {
    v3 = a2;
    if ( *(_BYTE *)dword_100B17F4 != 65 )
    {
      if ( *(_BYTE *)dword_100B17F4 != 66 )
      {
        sub_10035BDE(a1, a2);
        return a1;
      }
      if ( *a2 )
      {
        v16 = "volatile ";
        v17 = 9;
      }
      else
      {
        v16 = "volatile";
        v17 = 8;
      }
      sub_10033AF0(&v16);
      v2 = (_BYTE *)dword_100B17F4;
    }
    v15 = 2;
    goto LABEL_12;
  }
  v5 = *(_BYTE *)(dword_100B17F4 + 1);
  if ( v5 != 36 )
  {
    if ( !v5 )
    {
LABEL_15:
      sub_100331C7(a1, 1, a2);
      return a1;
    }
    goto LABEL_38;
  }
  v2 = (_BYTE *)(dword_100B17F4 + 2);
  dword_100B17F4 = (int)v2;
  v7 = (char)*v2;
  if ( v7 <= 82 )
  {
    v3 = a2;
    if ( v7 == 82 )
    {
      if ( *a2 )
      {
        v16 = "volatile ";
        v17 = 9;
      }
      else
      {
        v16 = "volatile";
        v17 = 8;
      }
      sub_10033AF0(&v16);
      v2 = (_BYTE *)dword_100B17F4;
    }
    else
    {
      if ( !*v2 )
        goto LABEL_15;
      v8 = v7 - 65;
      if ( !v8 )
      {
        dword_100B17F4 = (int)(v2 + 1);
        sub_10036359(a1, a2);
        return a1;
      }
      v9 = v8 - 1;
      if ( !v9 )
      {
        dword_100B17F4 = (int)(v2 + 1);
        sub_100355D5(a1, a2, 1);
        return a1;
      }
      v10 = v9 - 1;
      if ( !v10 )
      {
        v16 = 0;
        dword_100B17F4 = (int)(v2 + 1);
        v17 = 0;
        v11 = sub_1003324E(&v18, a2, 0, &v16, 0);
        sub_10035BDE(a1, v11);
        return a1;
      }
      if ( v10 != 14 )
      {
LABEL_38:
        sub_100334A6(2);
        return a1;
      }
    }
    v15 = 3;
LABEL_12:
    v16 = *v3;
    v4 = (unsigned int)v3[1] | 0x100;
    dword_100B17F4 = (int)(v2 + 1);
    v17 = v4;
    sub_1003535A(a1, &v18, &v16, v15);
    return a1;
  }
  v12 = v7 - 83;
  if ( !v12 )
  {
    dword_100B17F4 = (int)(v2 + 1);
    goto LABEL_38;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    dword_100B17F4 = (int)(v2 + 1);
    if ( *a2 )
    {
      v16 = "std::nullptr_t ";
      v17 = 15;
      sub_10034C61(a1, &v16, a2);
    }
    else
    {
      v16 = "std::nullptr_t";
      v17 = 14;
      sub_1003413A(&v16);
    }
    return a1;
  }
  v14 = v13 - 2;
  if ( v14 )
  {
    if ( v14 == 3 )
    {
      dword_100B17F4 = (int)(v2 + 1);
      sub_100360AC(a1);
      return a1;
    }
    goto LABEL_38;
  }
  dword_100B17F4 = (int)(v2 + 1);
  result = a1;
  *a1 = *a2;
  a1[1] = a2[1];
  return result;
}
// 100331C7: using guessed type _DWORD __cdecl sub_100331C7(_DWORD, _DWORD, _DWORD);
// 1003324E: using guessed type _DWORD __cdecl sub_1003324E(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10033AF0: using guessed type _DWORD __stdcall sub_10033AF0(_DWORD);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 10034C61: using guessed type _DWORD __cdecl sub_10034C61(_DWORD, _DWORD, _DWORD);
// 1003535A: using guessed type _DWORD __cdecl sub_1003535A(_DWORD, _DWORD, _DWORD, _DWORD);
// 100355D5: using guessed type _DWORD __cdecl sub_100355D5(_DWORD, _DWORD, _DWORD);
// 10035BDE: using guessed type _DWORD __cdecl sub_10035BDE(_DWORD, _DWORD);
// 100360AC: using guessed type _DWORD __cdecl sub_100360AC(_DWORD);
// 10036359: using guessed type _DWORD __cdecl sub_10036359(_DWORD, _DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004BE7D) --------------------------------------------------------
const char **__cdecl sub_1004BE7D(const char **a1, _DWORD *a2, int a3)
{
  _BYTE *v3; // eax
  char v4; // cl
  _DWORD *v5; // eax
  const char *v6; // ecx
  int v7; // edx
  const char **result; // eax
  const char *v9; // [esp+8h] [ebp-10h]
  int v10; // [esp+Ch] [ebp-Ch]
  const char *v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v3 = (_BYTE *)dword_100B17F4;
  v4 = *(_BYTE *)dword_100B17F4;
  if ( !*(_BYTE *)dword_100B17F4 )
  {
    sub_100331C7(a1, 1, a2);
    return a1;
  }
  if ( !a3 )
  {
LABEL_13:
    if ( *v3 == 36 )
    {
      if ( v3[1] == 36 && v3[2] == 84 )
      {
        dword_100B17F4 = (int)(v3 + 3);
        v5 = a2;
        if ( !*a2 )
        {
          v9 = "std::nullptr_t";
          v10 = 14;
          goto LABEL_6;
        }
        v9 = "std::nullptr_t ";
        v10 = 15;
LABEL_8:
        sub_10034C61(a1, &v9, v5);
        return a1;
      }
    }
    else if ( *v3 == 89 )
    {
      dword_100B17F4 = (int)(v3 + 1);
      sub_10033514(a1, a2);
      return a1;
    }
    sub_10035BDE(&v11, a2);
    if ( a2[1] & 0x4000 )
    {
      v9 = "cli::array<";
      v10 = 11;
    }
    else
    {
      if ( !(a2[1] & 0x2000) )
      {
        v7 = v12;
        v6 = v11;
        goto LABEL_27;
      }
      v9 = "cli::pin_ptr<";
      v10 = 13;
    }
    sub_1003413A(&v9);
    sub_10035742(&v9, &v11);
    v6 = v9;
    v7 = v10;
LABEL_27:
    result = a1;
    *a1 = v6;
    a1[1] = (const char *)v7;
    return result;
  }
  if ( v4 != 88 )
  {
    if ( v4 == 95 && *(_BYTE *)(dword_100B17F4 + 1) == 95 && *(_BYTE *)(dword_100B17F4 + 2) == 90 )
    {
      v3 = (_BYTE *)(dword_100B17F4 + 3);
      dword_100B17F4 += 3;
    }
    goto LABEL_13;
  }
  ++dword_100B17F4;
  v5 = a2;
  if ( *a2 )
  {
    v9 = "void ";
    v10 = 5;
    goto LABEL_8;
  }
  v9 = "void";
  v10 = 4;
LABEL_6:
  sub_1003413A(&v9);
  return a1;
}
// 100331C7: using guessed type _DWORD __cdecl sub_100331C7(_DWORD, _DWORD, _DWORD);
// 10033514: using guessed type _DWORD __cdecl sub_10033514(_DWORD, _DWORD);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 10034C61: using guessed type _DWORD __cdecl sub_10034C61(_DWORD, _DWORD, _DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 10035BDE: using guessed type _DWORD __cdecl sub_10035BDE(_DWORD, _DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004C045) --------------------------------------------------------
_DWORD *__cdecl sub_1004C045(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v4; // ecx
  char v5; // al
  _DWORD *result; // eax
  int v7; // [esp+8h] [ebp-10h]
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  v4 = dword_100A4534[2 * a4];
  v7 = (int)*(&off_100A4530 + 2 * a4);
  v8 = v4;
  v5 = *(_BYTE *)dword_100B17F4;
  if ( *(_BYTE *)dword_100B17F4 )
  {
    if ( (v5 < 54 || v5 > 57) && v5 != 95 )
    {
      sub_1003324E(&v7, a3, a4, a2, 0);
      sub_100355D5(a1, &v7, a4 == 1);
    }
    else
    {
      sub_1003413A(&v7);
      if ( *a2 && (!*a3 || !(a3[1] & 0x100)) )
        sub_10034234(a2);
      if ( *a3 )
        sub_10034234(a3);
      sub_10036359(a1, &v9);
    }
    result = a1;
  }
  else
  {
    sub_100334A6(1);
    sub_10035CA1(&v7);
    if ( *a2 )
      sub_10034234(a2);
    if ( *a3 )
    {
      if ( *a2 )
        sub_10034A7C(32);
      sub_10034234(a3);
    }
    result = a1;
    *a1 = v9;
    a1[1] = v10;
  }
  return result;
}
// 1003324E: using guessed type _DWORD __cdecl sub_1003324E(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 100355D5: using guessed type _DWORD __cdecl sub_100355D5(_DWORD, _DWORD, _DWORD);
// 10035CA1: using guessed type _DWORD __stdcall sub_10035CA1(_DWORD);
// 10036359: using guessed type _DWORD __cdecl sub_10036359(_DWORD, _DWORD);
// 100A4530: using guessed type void *off_100A4530;
// 100A4534: using guessed type int dword_100A4534[];
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004C1BD) --------------------------------------------------------
int *__cdecl sub_1004C1BD(int *a1)
{
  char *v1; // eax
  unsigned int v2; // edi
  int v3; // ecx
  int v4; // edx
  int v5; // edx
  const char **v6; // eax
  int *result; // eax
  const char *v8; // [esp+Ch] [ebp-20h]
  int v9; // [esp+10h] [ebp-1Ch]
  const char *v10; // [esp+14h] [ebp-18h]
  int v11; // [esp+18h] [ebp-14h]
  const char *v12; // [esp+1Ch] [ebp-10h]
  int v13; // [esp+20h] [ebp-Ch]
  int v14; // [esp+24h] [ebp-8h]
  int v15; // [esp+28h] [ebp-4h]

  if ( *(_BYTE *)dword_100B17F4 == 95
    && (v1 = (char *)(dword_100B17F4 + 1), *(_BYTE *)(dword_100B17F4 + 1))
    && *(_BYTE *)(dword_100B17F4 + 1) <= 68 )
  {
    ++dword_100B17F4;
    v2 = *v1 - 65;
    dword_100B17F4 = (int)(v1 + 1);
    if ( v2 > 3 )
    {
LABEL_15:
      sub_100334A6(2);
      return a1;
    }
    v3 = 0;
    v4 = 0;
    v14 = 0;
    v15 = 0;
    if ( ~((unsigned int)dword_100B17FC >> 1) & 1 )
    {
      sub_10034A7C(32);
      v12 = (const char *)sub_10034130(15);
      v13 = v5;
      sub_10035CA1(&v12);
      if ( v2 )
      {
        while ( 1 )
        {
          if ( (v2 & -v2) == 1 )
          {
            v10 = "cpu";
            v6 = &v10;
            v11 = 3;
          }
          else
          {
            if ( (v2 & -v2) != 2 )
              goto LABEL_15;
            v12 = "amp";
            v6 = &v12;
            v13 = 3;
          }
          sub_10035CA1(v6);
          v2 &= ~(v2 & -v2);
          if ( !v2 )
            break;
          v8 = ", ";
          v9 = 2;
          sub_10035CA1(&v8);
        }
      }
      sub_10034A7C(41);
      v4 = v15;
      v3 = v14;
    }
    result = a1;
    a1[1] = v4;
  }
  else
  {
    result = a1;
    v3 = 0;
    a1[1] = 0;
  }
  *result = v3;
  return result;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10034130: using guessed type _DWORD __cdecl sub_10034130(_DWORD);
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 10035CA1: using guessed type _DWORD __stdcall sub_10035CA1(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;
// 100B17FC: using guessed type int dword_100B17FC;

//----- (1004C31C) --------------------------------------------------------
int __cdecl sub_1004C31C(int a1, int a2)
{
  if ( *(_BYTE *)dword_100B17F4 == 64 )
  {
    ++dword_100B17F4;
    sub_10035B57(a2);
  }
  else
  {
    sub_10035328(a1, a2);
  }
  return a1;
}
// 10035328: using guessed type _DWORD __cdecl sub_10035328(_DWORD, _DWORD);
// 10035B57: using guessed type _DWORD __stdcall sub_10035B57(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004C356) --------------------------------------------------------
const char **__cdecl sub_1004C356(const char **a1)
{
  char v1; // bl
  const char **v2; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  char *v10; // ecx
  int v11; // edi
  signed int v12; // ecx
  int *v13; // eax
  const char **v14; // eax
  const char **v15; // eax
  const char **v16; // eax
  int v17; // eax
  const char **v18; // eax
  char v20; // [esp+Ch] [ebp-F0h]
  char v21; // [esp+1Ch] [ebp-E0h]
  char v22; // [esp+24h] [ebp-D8h]
  char v23; // [esp+2Ch] [ebp-D0h]
  char v24; // [esp+34h] [ebp-C8h]
  char v25; // [esp+3Ch] [ebp-C0h]
  char v26; // [esp+44h] [ebp-B8h]
  char v27; // [esp+4Ch] [ebp-B0h]
  char v28; // [esp+54h] [ebp-A8h]
  char v29; // [esp+5Ch] [ebp-A0h]
  char v30; // [esp+64h] [ebp-98h]
  char v31; // [esp+6Ch] [ebp-90h]
  char v32; // [esp+74h] [ebp-88h]
  char v33; // [esp+7Ch] [ebp-80h]
  char v34; // [esp+84h] [ebp-78h]
  char v35; // [esp+8Ch] [ebp-70h]
  char v36; // [esp+9Ch] [ebp-60h]
  char v37; // [esp+A4h] [ebp-58h]
  char v38; // [esp+ACh] [ebp-50h]
  char v39; // [esp+B4h] [ebp-48h]
  const char *v40; // [esp+BCh] [ebp-40h]
  int v41; // [esp+C0h] [ebp-3Ch]
  const char *v42; // [esp+C4h] [ebp-38h]
  int v43; // [esp+C8h] [ebp-34h]
  const char *v44; // [esp+CCh] [ebp-30h]
  const char *v45; // [esp+D0h] [ebp-2Ch]
  const char *v46; // [esp+D4h] [ebp-28h]
  int v47; // [esp+D8h] [ebp-24h]
  int v48; // [esp+DCh] [ebp-20h]
  int v49; // [esp+E0h] [ebp-1Ch]
  int v50; // [esp+E4h] [ebp-18h]
  int v51; // [esp+E8h] [ebp-14h]
  const char *v52; // [esp+ECh] [ebp-10h]
  const char *v53; // [esp+F0h] [ebp-Ch]
  int v54; // [esp+F4h] [ebp-8h]
  int v55; // [esp+F8h] [ebp-4h]

  *a1 = 0;
  a1[1] = 0;
  v1 = 0;
  while ( *(_BYTE *)dword_100B17F4 && *(_BYTE *)dword_100B17F4 != 64 )
  {
    if ( byte_100B1800 && !byte_100B1801 )
      return a1;
    if ( *a1 )
    {
      v46 = "::";
      v47 = 2;
      sub_1003413A(&v46);
      sub_10035742(&v44, a1);
      *a1 = v44;
      a1[1] = v45;
      if ( v1 )
      {
        v2 = (const char **)sub_10034211(&v35, 91, a1);
        v1 = 0;
        *a1 = *v2;
        a1[1] = v2[1];
      }
    }
    v3 = dword_100B17F4;
    if ( *(_BYTE *)dword_100B17F4 != 63 )
    {
      sub_10033EF1(&v37, 1, 0);
      v10 = &v36;
      goto LABEL_37;
    }
    v4 = dword_100B17F4++ + 1;
    v5 = *(char *)(v3 + 1) - 36;
    if ( !v5 )
    {
      dword_100B17F4 = v4 - 1;
      sub_10033EF1(&v20, 1, 0);
      v10 = &v38;
LABEL_37:
      v15 = (const char **)sub_10035742(v10, a1);
      goto LABEL_38;
    }
    v6 = v5 - 1;
    if ( !v6 )
      goto LABEL_33;
    v7 = v6 - 26;
    if ( !v7 )
    {
      if ( *(_BYTE *)(v4 + 1) == 95 && *(_BYTE *)(v4 + 2) == 63 )
      {
        dword_100B17F4 = v4 + 1;
        sub_1003417B(&v26, 0, 0);
        v16 = (const char **)sub_10035742(&v25, a1);
        *a1 = *v16;
        a1[1] = v16[1];
        if ( *(_BYTE *)dword_100B17F4 == 64 )
LABEL_31:
          ++dword_100B17F4;
        goto LABEL_39;
      }
      v17 = sub_100337DA(&v24);
      sub_10034211(&v23, 96, v17);
      sub_1003446E(&v22, 39);
      v10 = &v21;
      goto LABEL_37;
    }
    v8 = v7 - 2;
    if ( !v8 )
    {
LABEL_33:
      sub_100362B9(&dword_100B17F4, 64);
      v40 = "`anonymous namespace'";
      v41 = 21;
      sub_1003413A(&v40);
      sub_10035742(&v52, a1);
      *a1 = v52;
      a1[1] = v53;
      if ( *(_DWORD *)dword_100B17EC != 9 )
        sub_100359AE(&v39);
      goto LABEL_39;
    }
    v9 = v8 - 8;
    if ( v9 )
    {
      if ( v9 == 8 )
      {
        v54 = 0;
        v55 = 0;
        v11 = 0;
        dword_100B17F4 = v4 + 1;
        while ( 1 )
        {
          sub_10033EF1(&v48, 1, 0);
          v12 = v49;
          if ( (_BYTE)v49 )
          {
            v54 = 0;
            v11 = 0;
            v12 = 2;
          }
          else if ( v11 )
          {
            v50 = v48;
            v51 = v49;
            v42 = "::";
            v43 = 2;
            sub_10035CA1(&v42);
            v13 = (int *)sub_10035742(&v32, &v54);
            v11 = *v13;
            v12 = v13[1];
            v54 = *v13;
          }
          else
          {
            v11 = v48;
            v54 = v48;
          }
          v55 = v12;
          if ( (_BYTE)v12 )
            break;
          if ( *(_BYTE *)dword_100B17F4 == 64 )
          {
            sub_10034211(&v31, 91, &v54);
            v14 = (const char **)sub_1003446E(&v30, 93);
            *a1 = *v14;
            a1[1] = v14[1];
            goto LABEL_31;
          }
        }
        a1[1] = 0;
        *a1 = 0;
        *((_BYTE *)a1 + 4) = 2;
        goto LABEL_39;
      }
      sub_100352E7(&v34);
      v10 = &v33;
      goto LABEL_37;
    }
    dword_100B17F4 = v4 + 1;
    sub_10033EF1(&v29, 1, 0);
    sub_1003446E(&v28, 93);
    v15 = (const char **)sub_10035742(&v27, a1);
    v1 = 1;
LABEL_38:
    *a1 = *v15;
    a1[1] = v15[1];
LABEL_39:
    if ( *((_BYTE *)a1 + 4) )
      break;
  }
  if ( *(_BYTE *)dword_100B17F4 )
  {
    if ( *(_BYTE *)dword_100B17F4 != 64 )
    {
      a1[1] = 0;
      *a1 = 0;
      *((_BYTE *)a1 + 4) = 2;
    }
  }
  else if ( *a1 )
  {
    sub_100334A6(1);
    v52 = "::";
    v53 = (const char *)2;
    sub_100355E9(&v37, &v52);
    v18 = (const char **)sub_10035742(&v38, a1);
    *a1 = *v18;
    a1[1] = v18[1];
  }
  else
  {
    sub_10034216(1);
  }
  return a1;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 100337DA: using guessed type _DWORD __cdecl sub_100337DA(_DWORD);
// 10033EF1: using guessed type _DWORD __cdecl sub_10033EF1(_DWORD, char, char);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 1003417B: using guessed type _DWORD __cdecl sub_1003417B(_DWORD, char, _DWORD);
// 10034211: using guessed type _DWORD __cdecl sub_10034211(_DWORD, _DWORD, _DWORD);
// 10034216: using guessed type _DWORD __stdcall sub_10034216(_DWORD);
// 1003446E: using guessed type _DWORD __stdcall sub_1003446E(_DWORD, _DWORD);
// 100352E7: using guessed type _DWORD __cdecl sub_100352E7(_DWORD);
// 100355E9: using guessed type _DWORD __stdcall sub_100355E9(_DWORD, _DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 100359AE: using guessed type _DWORD __stdcall sub_100359AE(_DWORD);
// 10035CA1: using guessed type _DWORD __stdcall sub_10035CA1(_DWORD);
// 100362B9: using guessed type _DWORD __stdcall sub_100362B9(_DWORD, char);
// 100B17EC: using guessed type int dword_100B17EC;
// 100B17F4: using guessed type int dword_100B17F4;
// 100B1800: using guessed type char byte_100B1800;
// 100B1801: using guessed type char byte_100B1801;

//----- (1004C803) --------------------------------------------------------
int *__cdecl sub_1004C803(int *a1)
{
  int *v1; // eax
  int v2; // edx
  _BYTE *v3; // eax
  int *v4; // eax
  int *v5; // eax
  char v7; // [esp+Ch] [ebp-20h]
  char v8; // [esp+14h] [ebp-18h]
  char v9; // [esp+1Ch] [ebp-10h]
  const char *v10; // [esp+24h] [ebp-8h]
  int v11; // [esp+28h] [ebp-4h]

  *a1 = 0;
  a1[1] = 0;
  v1 = (int *)sub_10033EF1(&v10, 1, 0);
  v2 = *v1;
  *a1 = *v1;
  a1[1] = v1[1];
  v3 = (_BYTE *)dword_100B17F4;
  if ( !*((_BYTE *)a1 + 4) && *(_BYTE *)dword_100B17F4 && *(_BYTE *)dword_100B17F4 != 64 )
  {
    sub_100348BA(&v9);
    v10 = "::";
    v11 = 2;
    sub_100355E9(&v8, &v10);
    v4 = (int *)sub_10035742(&v7, a1);
    v2 = *v4;
    *a1 = *v4;
    a1[1] = v4[1];
    v3 = (_BYTE *)dword_100B17F4;
  }
  if ( *v3 == 64 )
  {
    dword_100B17F4 = (int)(v3 + 1);
  }
  else if ( *v3 )
  {
    a1[1] = 0;
    *((_BYTE *)a1 + 4) = 2;
    *a1 = 0;
  }
  else if ( v2 )
  {
    sub_100334A6(1);
    v10 = "::";
    v11 = 2;
    sub_100355E9(&v8, &v10);
    v5 = (int *)sub_10035742(&v9, a1);
    *a1 = *v5;
    a1[1] = v5[1];
  }
  else
  {
    sub_10034216(1);
  }
  return a1;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10033EF1: using guessed type _DWORD __cdecl sub_10033EF1(_DWORD, char, char);
// 10034216: using guessed type _DWORD __stdcall sub_10034216(_DWORD);
// 100348BA: using guessed type _DWORD __cdecl sub_100348BA(_DWORD);
// 100355E9: using guessed type _DWORD __stdcall sub_100355E9(_DWORD, _DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004C935) --------------------------------------------------------
int __cdecl sub_1004C935(int a1)
{
  int v1; // eax
  char v3; // [esp+0h] [ebp-8h]

  if ( *(_BYTE *)dword_100B17F4 )
  {
    if ( *(_BYTE *)dword_100B17F4 == 63 )
    {
      ++dword_100B17F4;
      v1 = sub_100345D1(&v3, 0);
      sub_10034211(a1, 45, v1);
    }
    else
    {
      sub_100345D1(a1, 0);
    }
  }
  else
  {
    sub_100334A6(1);
  }
  return a1;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10034211: using guessed type _DWORD __cdecl sub_10034211(_DWORD, _DWORD, _DWORD);
// 100345D1: using guessed type _DWORD __cdecl sub_100345D1(_DWORD, char);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004C9AF) --------------------------------------------------------
int __thiscall sub_1004C9AF(_DWORD *this, int a2, int a3)
{
  int result; // eax

  if ( *this )
    result = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*this + 12))(*this, a2, a3);
  else
    result = a2;
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004C9E7) --------------------------------------------------------
_BYTE *__thiscall sub_1004C9E7(_DWORD *this, _BYTE *a2, int a3)
{
  _BYTE *v3; // esi
  int v4; // edi

  v3 = a2;
  if ( *this )
  {
    if ( a2 )
    {
      v4 = a3;
LABEL_6:
      *(_BYTE *)sub_100339B5(v3, &v3[v4 - 1]) = 0;
      return v3;
    }
    v4 = sub_10034DB0() + 1;
    v3 = (_BYTE *)sub_100356B6(v4);
    if ( v3 )
      goto LABEL_6;
  }
  else if ( a2 )
  {
    *a2 = 0;
  }
  return v3;
}
// 100339B5: using guessed type _DWORD __stdcall sub_100339B5(_DWORD, _DWORD);
// 10034DB0: using guessed type int sub_10034DB0(void);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);

//----- (1004CA51) --------------------------------------------------------
int __thiscall sub_1004CA51(_DWORD *this, _BYTE *a2, _BYTE *a3)
{
  int v3; // ecx
  _BYTE *v4; // esi
  int v5; // ebx

  if ( this[1] != 1 )
    return (int)a2;
  v3 = 4;
  if ( a3 - a2 >= 4 || (v3 = a3 - a2, a3 != a2) )
  {
    v4 = a2;
    v5 = v3;
    do
    {
      *v4 = v4[" ?? " - a2];
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  return (int)&a2[v3];
}

//----- (1004CAA9) --------------------------------------------------------
int __thiscall sub_1004CAA9(_BYTE *this, _BYTE *a2, unsigned int a3)
{
  int result; // eax

  result = (int)a2;
  if ( (unsigned int)a2 < a3 )
  {
    *a2 = this[4];
    result = (int)(a2 + 1);
  }
  return result;
}

//----- (1004CAC3) --------------------------------------------------------
int __thiscall sub_1004CAC3(_DWORD *this, int a2, int a3)
{
  int result; // eax

  if ( this[1] )
    result = sub_100339B5(a2, a3);
  else
    result = a2;
  return result;
}
// 100339B5: using guessed type _DWORD __stdcall sub_100339B5(_DWORD, _DWORD);

//----- (1004CADF) --------------------------------------------------------
unsigned int __thiscall sub_1004CADF(_DWORD **this, int a2, unsigned int a3)
{
  _DWORD **v3; // ebx
  unsigned int result; // eax

  v3 = this;
  result = (*(int (__thiscall **)(_DWORD *, int, unsigned int))(*this[1] + 12))(this[1], a2, a3);
  if ( result < a3 )
    result = (*(int (__fastcall **)(_DWORD *, _DWORD, unsigned int, unsigned int))(*v3[2] + 12))(
               v3[2],
               *v3[2],
               result,
               a3);
  return result;
}
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004CB36) --------------------------------------------------------
int __thiscall sub_1004CB36(_DWORD *this, int a2, int a3)
{
  return sub_100341C1(a2, a3, this[1], this[2]);
}
// 100341C1: using guessed type _DWORD __cdecl sub_100341C1(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1004CB57) --------------------------------------------------------
_DWORD *__cdecl sub_1004CB57(_DWORD *a1, int a2)
{
  char *v2; // eax
  char v3; // cl
  _DWORD *result; // eax
  char v5; // [esp+0h] [ebp-10h]
  int v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+Ch] [ebp-4h]

  sub_1003413A(&(&off_100A4560)[2 * a2]);
  if ( (unsigned __int8)sub_10034A81() != 64 || (unsigned __int8)sub_10034A81() != 95 )
  {
    sub_100334A6(2);
    return a1;
  }
  if ( !(unsigned __int8)sub_100343DD(1) )
  {
LABEL_4:
    sub_100334A6(1);
    return a1;
  }
  sub_100345D1(&v5, 0);
  sub_100345D1(&v5, 0);
  v2 = (char *)dword_100B17F4;
  do
  {
    v3 = *v2;
    if ( !*v2 )
    {
      dword_100B17F4 = (int)(v2 - 1);
      goto LABEL_4;
    }
    dword_100B17F4 = (int)++v2;
  }
  while ( v3 != 64 );
  result = a1;
  *a1 = v6;
  a1[1] = v7;
  return result;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 100343DD: using guessed type _DWORD __cdecl sub_100343DD(_DWORD);
// 100345D1: using guessed type _DWORD __cdecl sub_100345D1(_DWORD, char);
// 10034A81: using guessed type int sub_10034A81(void);
// 100A4560: using guessed type char *off_100A4560;
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004CC0E) --------------------------------------------------------
int __cdecl sub_1004CC0E(_BYTE *a1, int a2, int a3, int a4)
{
  int v4; // esi

  v4 = a4;
  if ( a4 > a2 - (signed int)a1 )
    v4 = a2 - (_DWORD)a1;
  sub_1004E83E(a1, a3, v4);
  return (int)&a1[v4];
}

//----- (1004CC42) --------------------------------------------------------
_DWORD *__cdecl sub_1004CC42(_DWORD *a1)
{
  _DWORD *result; // eax
  int v2; // [esp+0h] [ebp-8h]
  int v3; // [esp+4h] [ebp-4h]

  if ( *(_BYTE *)dword_100B17F4 )
  {
    if ( !sub_100362EB(dword_100B17F4, "??_C", 4) )
    {
      dword_100B17F4 += 4;
      sub_100345A4(&v2, 0);
      if ( *(_BYTE *)dword_100B17F4 == 64 )
      {
        ++dword_100B17F4;
        result = a1;
        *a1 = v2;
        a1[1] = v3;
        return result;
      }
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
// 100345A4: using guessed type _DWORD __cdecl sub_100345A4(_DWORD, _DWORD);
// 100362EB: using guessed type _DWORD __cdecl sub_100362EB(_DWORD, _DWORD, _DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004CCC9) --------------------------------------------------------
int __cdecl sub_1004CCC9(int a1)
{
  if ( *(_BYTE *)dword_100B17F4 == 63 )
  {
    if ( *(_BYTE *)(dword_100B17F4 + 1) == 36 )
    {
      sub_100340EF(a1, 1);
    }
    else
    {
      ++dword_100B17F4;
      sub_1003417B(a1, 0, 0);
    }
  }
  else
  {
    sub_10033EF1(a1, 1, 0);
  }
  return a1;
}
// 10033EF1: using guessed type _DWORD __cdecl sub_10033EF1(_DWORD, char, char);
// 100340EF: using guessed type _DWORD __cdecl sub_100340EF(_DWORD, char);
// 1003417B: using guessed type _DWORD __cdecl sub_1003417B(_DWORD, char, _DWORD);
// 100B17F4: using guessed type int dword_100B17F4;

//----- (1004CD23) --------------------------------------------------------
_DWORD *__cdecl sub_1004CD23(_DWORD *a1)
{
  int v1; // ebx
  char v2; // dl
  int *v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // esi
  int v7; // ecx
  _BYTE *v8; // ecx
  int *v9; // eax
  int v10; // eax
  _DWORD *v11; // esi
  int *v12; // eax
  _DWORD *result; // eax
  char v14; // [esp+Ch] [ebp-34h]
  char v15; // [esp+14h] [ebp-2Ch]
  char v16; // [esp+1Ch] [ebp-24h]
  const char *v17; // [esp+24h] [ebp-1Ch]
  int v18; // [esp+28h] [ebp-18h]
  int v19; // [esp+2Ch] [ebp-14h]
  int v20; // [esp+30h] [ebp-10h]
  int v21; // [esp+34h] [ebp-Ch]
  int v22; // [esp+38h] [ebp-8h]
  char v23; // [esp+3Eh] [ebp-2h]
  char v24; // [esp+3Fh] [ebp-1h]

  v23 = 1;
  v21 = 0;
  v1 = 0;
  v22 = 0;
  byte_100B1801 = 1;
  while ( 1 )
  {
    v2 = *(_BYTE *)dword_100B17F4;
    if ( !*(_BYTE *)dword_100B17F4 || v2 == 64 )
    {
LABEL_36:
      result = a1;
      byte_100B1801 = 0;
      *a1 = v21;
      a1[1] = v1;
      return result;
    }
    v19 = 0;
    v20 = 0;
    v24 = 0;
    if ( (unsigned int)(v2 - 48) <= 9 )
    {
      ++dword_100B17F4;
      v3 = (int *)sub_100338D4(&v16, v2 - 48);
      v4 = *v3;
      v5 = v3[1];
      v19 = *v3;
      v20 = v5;
      goto LABEL_28;
    }
    v6 = dword_100B17F4;
    v7 = dword_100B17F4;
    if ( v2 != 36 || *(_BYTE *)(dword_100B17F4 + 1) != 36 )
      goto LABEL_13;
    if ( *(_BYTE *)(dword_100B17F4 + 2) != 36 )
      break;
    if ( *(_BYTE *)(dword_100B17F4 + 3) != 86 )
      goto LABEL_13;
    v10 = dword_100B17F4 + 4;
LABEL_21:
    dword_100B17F4 = v10;
LABEL_35:
    v23 = 0;
    if ( (_BYTE)v1 )
      goto LABEL_36;
  }
  if ( *(_BYTE *)(dword_100B17F4 + 2) == 85 )
    goto LABEL_17;
  if ( *(_BYTE *)(dword_100B17F4 + 2) == 86 )
  {
LABEL_18:
    v10 = dword_100B17F4 + 3;
    goto LABEL_21;
  }
  if ( *(_BYTE *)(dword_100B17F4 + 2) != 87 )
  {
    if ( *(_BYTE *)(dword_100B17F4 + 2) != 90 )
      goto LABEL_13;
    goto LABEL_18;
  }
  v24 = 1;
LABEL_17:
  v7 = dword_100B17F4 + 3;
  dword_100B17F4 += 3;
LABEL_13:
  if ( *(_BYTE *)dword_100B17F4 != 36 || (v8 = (_BYTE *)(v7 + 1), *v8 == 36) )
  {
    v9 = (int *)sub_100357CE(&v14);
  }
  else
  {
    dword_100B17F4 = (int)v8;
    v9 = (int *)sub_10034B26(&v15);
  }
  v5 = v9[1];
  v4 = *v9;
  v20 = v9[1];
  v19 = v4;
  if ( dword_100B17F4 - v6 <= 1 || (v11 = (_DWORD *)dword_100B17F0, *(_DWORD *)dword_100B17F0 == 9) )
  {
LABEL_28:
    if ( !v4 )
      goto LABEL_33;
    if ( !v23 )
      sub_10034A7C(44);
    sub_10034234(&v19);
    if ( v24 )
    {
      v17 = "...";
      v18 = 3;
      sub_10035CA1(&v17);
    }
LABEL_34:
    v1 = v22;
    goto LABEL_35;
  }
  if ( v4 )
  {
    v12 = (int *)sub_100356B6(8);
    if ( v12 )
    {
      *v12 = v4;
      v12[1] = v5;
      v11[++*v11 + 1] = v12;
    }
    goto LABEL_28;
  }
LABEL_33:
  if ( (char)v5 <= 1 )
    goto LABEL_34;
  sub_100334A6(2);
  return a1;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 100338D4: using guessed type _DWORD __stdcall sub_100338D4(_DWORD, _DWORD);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 10034B26: using guessed type _DWORD __cdecl sub_10034B26(_DWORD);
// 100356B6: using guessed type _DWORD __stdcall sub_100356B6(_DWORD);
// 100357CE: using guessed type _DWORD __cdecl sub_100357CE(_DWORD);
// 10035CA1: using guessed type _DWORD __stdcall sub_10035CA1(_DWORD);
// 100B17F0: using guessed type int dword_100B17F0;
// 100B17F4: using guessed type int dword_100B17F4;
// 100B1801: using guessed type char byte_100B1801;

//----- (1004CF3F) --------------------------------------------------------
int *__cdecl sub_1004CF3F(int *a1, char a2)
{
  int v2; // esi
  _BYTE *v3; // edx
  char v4; // bl
  bool v5; // zf
  int *v6; // eax
  int v7; // ecx
  int v8; // eax
  int *result; // eax
  int v10; // [esp+0h] [ebp-A4h]
  char v11; // [esp+4h] [ebp-A0h]
  int v12; // [esp+2Ch] [ebp-78h]
  char v13; // [esp+30h] [ebp-74h]
  int v14; // [esp+58h] [ebp-4Ch]
  char v15; // [esp+5Ch] [ebp-48h]
  char v16; // [esp+84h] [ebp-20h]
  int v17; // [esp+8Ch] [ebp-18h]
  int v18; // [esp+90h] [ebp-14h]
  int v19; // [esp+94h] [ebp-10h]
  int v20; // [esp+98h] [ebp-Ch]
  int v21; // [esp+9Ch] [ebp-8h]
  char v22; // [esp+A3h] [ebp-1h]

  if ( *(_BYTE *)dword_100B17F4 != 63 || *(_BYTE *)(dword_100B17F4 + 1) != 36 )
  {
    sub_100334A6(2);
    result = a1;
  }
  else
  {
    v2 = dword_100B17E8;
    v3 = (_BYTE *)(dword_100B17F4 + 2);
    v4 = 0;
    v18 = dword_100B17EC;
    v17 = dword_100B17F0;
    memset(&v15, 0, 0x28u);
    v14 = -1;
    memset(&v13, 0, 0x28u);
    v12 = -1;
    memset(&v11, 0, 0x28u);
    v10 = -1;
    dword_100B17E8 = (int)&v14;
    dword_100B17EC = (int)&v12;
    dword_100B17F4 = (int)v3;
    dword_100B17F0 = (int)&v10;
    v5 = *v3 == 63;
    v19 = v2;
    v22 = 0;
    if ( v5 )
    {
      dword_100B17F4 = (int)(v3 + 1);
      v6 = (int *)sub_1003417B(&v16, 1, &v22);
      v4 = v22;
    }
    else
    {
      v6 = (int *)sub_10033EF1(&v16, 1, 1);
    }
    v7 = *v6;
    v21 = v6[1];
    v20 = v7;
    if ( !v7 )
      byte_100B1800 = 1;
    if ( !v4 )
    {
      sub_10034A7C(60);
      v8 = sub_10034B67(&v16);
      sub_10034234(v8);
      if ( v20 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v20 + 8))(v20) == 62 )
          sub_10034A7C(32);
        v2 = v19;
      }
      sub_10034A7C(62);
      if ( a2 )
      {
        if ( *(_BYTE *)dword_100B17F4 )
          ++dword_100B17F4;
      }
      v7 = v20;
    }
    dword_100B17EC = v18;
    dword_100B17F0 = v17;
    result = a1;
    dword_100B17E8 = v2;
    *a1 = v7;
    a1[1] = v21;
  }
  return result;
}
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 10033EF1: using guessed type _DWORD __cdecl sub_10033EF1(_DWORD, char, char);
// 1003417B: using guessed type _DWORD __cdecl sub_1003417B(_DWORD, char, _DWORD);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 10034B67: using guessed type _DWORD __cdecl sub_10034B67(_DWORD);
// 100B17E8: using guessed type int dword_100B17E8;
// 100B17EC: using guessed type int dword_100B17EC;
// 100B17F0: using guessed type int dword_100B17F0;
// 100B17F4: using guessed type int dword_100B17F4;
// 100B1800: using guessed type char byte_100B1800;
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();

//----- (1004D118) --------------------------------------------------------
_DWORD *__cdecl sub_1004D118(_DWORD *a1)
{
  char v1; // al
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int16 v12; // ax
  __int16 v13; // si
  int v14; // eax
  char v16; // [esp+Ch] [ebp-2Ch]
  char v17; // [esp+14h] [ebp-24h]
  int v18; // [esp+18h] [ebp-20h]
  const char *v19; // [esp+1Ch] [ebp-1Ch]
  int v20; // [esp+20h] [ebp-18h]
  int v21; // [esp+24h] [ebp-14h]
  int v22; // [esp+28h] [ebp-10h]
  int v23; // [esp+2Ch] [ebp-Ch]
  int v24; // [esp+30h] [ebp-8h]

  v1 = sub_10034A81();
  v2 = v1;
  v20 = v1;
  if ( v1 > 70 )
  {
    switch ( v1 )
    {
      case 71:
      case 72:
      case 73:
      case 74:
        goto LABEL_34;
      case 77:
        sub_100357CE(&v19);
        if ( (char)v20 > 1 )
          goto LABEL_66;
        sub_10034B26(a1);
        return a1;
      case 78:
        v19 = "nullptr";
        v20 = 7;
        goto LABEL_17;
      case 80:
        sub_100345D1(&v16, 0);
        v19 = "lambda";
        v20 = 6;
        goto LABEL_17;
      case 82:
      case 84:
      case 85:
      case 86:
        sub_10035FAD(&v17);
        v21 = 0;
        v22 = 0;
        v23 = 0;
        v24 = 0;
        sub_10034B12(&v21, 16);
        v12 = sub_1003625F(&v21);
        v13 = v12;
        if ( dword_100B17FC & 0x4000 )
        {
          if ( dword_100B1804 )
          {
            v14 = dword_100B1804(v12 & 0xFFF);
            if ( v14 )
            {
              LOBYTE(v18) = 0;
              sub_10035346(v14, v18);
              return a1;
            }
          }
        }
        sub_10035850(&v21, 16, "%d", v13 & 0xFFF);
        LOBYTE(v18) = 0;
        sub_10034432(&v21, v18);
        switch ( v20 )
        {
          case 82:
          case 84:
            v19 = "`template-type-parameter-";
            break;
          case 85:
            v19 = "`generic-class-parameter-";
            break;
          case 86:
            v19 = "`generic-method-parameter-";
            v20 = 26;
LABEL_58:
            sub_1003413A(&v19);
            sub_10035742(&v19, &v17);
            sub_1003446E(a1, 39);
            return a1;
          default:
            goto LABEL_66;
        }
        v20 = 25;
        goto LABEL_58;
      case 83:
        *a1 = 0;
        a1[1] = 0;
        return a1;
      default:
        goto LABEL_66;
    }
  }
  if ( v1 == 70 )
  {
LABEL_34:
    v19 = 0;
    v20 = 0;
    sub_10034F31(123);
    if ( v2 == 72 || v2 == 73 || v2 == 74 )
    {
      v4 = sub_100337DA(&v17);
      sub_10034234(v4);
      sub_10034A7C(44);
    }
    v5 = v2 - 70;
    if ( !v5 )
      goto LABEL_44;
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( !v7 )
      {
LABEL_45:
        v11 = sub_10035FAD(&v17);
        sub_10034234(v11);
        goto LABEL_46;
      }
      v8 = v7 - 1;
      if ( !v8 )
      {
LABEL_44:
        v10 = sub_10035FAD(&v17);
        sub_10034234(v10);
        sub_10034A7C(44);
        goto LABEL_45;
      }
      if ( v8 != 1 )
      {
LABEL_46:
        sub_1003446E(a1, 125);
        return a1;
      }
    }
    v9 = sub_10035FAD(&v17);
    sub_10034234(v9);
    sub_10034A7C(44);
    goto LABEL_44;
  }
  if ( v1 > 54 )
  {
    switch ( v1 )
    {
      case 55:
        sub_100347B1(a1);
        return a1;
      case 56:
        sub_100362E6(a1);
        return a1;
      case 65:
      case 66:
        sub_1003344C(a1, v1);
        return a1;
      case 67:
        sub_10035A30(a1);
        return a1;
      case 69:
        sub_100337DA(a1);
        return a1;
    }
LABEL_66:
    sub_100334A6(2);
    return a1;
  }
  if ( v1 == 54 )
  {
    sub_10034BFD(a1);
    return a1;
  }
  if ( v1 )
  {
    if ( v1 == 48 )
    {
      sub_10035FAD(a1);
      return a1;
    }
    if ( v1 != 49 )
    {
      switch ( v1 )
      {
        case 50:
          sub_1003630E(a1);
          return a1;
        case 52:
          sub_10033E79(a1);
          return a1;
        case 53:
          sub_1003569D(a1);
          return a1;
      }
      goto LABEL_66;
    }
    if ( *(_BYTE *)dword_100B17F4 == 64 )
    {
      v19 = "NULL";
      ++dword_100B17F4;
      v20 = 4;
LABEL_17:
      sub_1003413A(&v19);
    }
    else
    {
      v19 = 0;
      v20 = 0;
      sub_10034F31(38);
      v3 = sub_100337DA(&v17);
      sub_10035742(a1, v3);
    }
  }
  else
  {
    sub_100334A6(1);
  }
  return a1;
}
// 100B1804: invalid function type has been ignored
// 1003344C: using guessed type _DWORD __cdecl sub_1003344C(_DWORD, _DWORD);
// 100334A6: using guessed type _DWORD __stdcall sub_100334A6(_DWORD);
// 100337DA: using guessed type _DWORD __cdecl sub_100337DA(_DWORD);
// 10033E79: using guessed type _DWORD __cdecl sub_10033E79(_DWORD);
// 1003413A: using guessed type _DWORD __stdcall sub_1003413A(_DWORD);
// 10034234: using guessed type _DWORD __stdcall sub_10034234(_DWORD);
// 10034432: using guessed type _DWORD __stdcall sub_10034432(_DWORD, _DWORD);
// 1003446E: using guessed type _DWORD __stdcall sub_1003446E(_DWORD, _DWORD);
// 100345D1: using guessed type _DWORD __cdecl sub_100345D1(_DWORD, char);
// 100347B1: using guessed type _DWORD __cdecl sub_100347B1(_DWORD);
// 10034A7C: using guessed type _DWORD __stdcall sub_10034A7C(_DWORD);
// 10034A81: using guessed type int sub_10034A81(void);
// 10034B12: using guessed type _DWORD __stdcall sub_10034B12(_DWORD, _DWORD);
// 10034B26: using guessed type _DWORD __cdecl sub_10034B26(_DWORD);
// 10034BFD: using guessed type _DWORD __cdecl sub_10034BFD(_DWORD);
// 10034F31: using guessed type _DWORD __stdcall sub_10034F31(char);
// 10035346: using guessed type _DWORD __stdcall sub_10035346(_DWORD, _DWORD);
// 1003569D: using guessed type _DWORD __cdecl sub_1003569D(_DWORD);
// 10035742: using guessed type _DWORD __stdcall sub_10035742(_DWORD, _DWORD);
// 100357CE: using guessed type _DWORD __cdecl sub_100357CE(_DWORD);
// 10035850: using guessed type _DWORD sub_10035850(_DWORD, _DWORD, const char *, ...);
// 10035A30: using guessed type _DWORD __cdecl sub_10035A30(_DWORD);
// 10035FAD: using guessed type _DWORD __cdecl sub_10035FAD(_DWORD);
// 1003625F: using guessed type _DWORD __cdecl sub_1003625F(_DWORD);
// 100362E6: using guessed type _DWORD __cdecl sub_100362E6(_DWORD);
// 1003630E: using guessed type _DWORD __cdecl sub_1003630E(_DWORD);
// 100B17F4: using guessed type int dword_100B17F4;
// 100B17FC: using guessed type int dword_100B17FC;
// 100B1804: using guessed type int (__cdecl *dword_100B1804)(_DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();
