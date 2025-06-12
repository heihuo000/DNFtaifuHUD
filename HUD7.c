
//----- (100876DA) --------------------------------------------------------
int __cdecl sub_100876DA(double a1, int a2, int a3, int a4, int a5, int a6)
{
  signed int v6; // ebx
  int v7; // esi
  signed int v8; // eax
  signed int *v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // st7
  signed __int64 v16; // rax
  unsigned __int64 v17; // rdi
  int v18; // ST18_4
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // edx
  bool v24; // zf
  int v25; // eax
  unsigned int v26; // ecx
  _BYTE *v27; // eax
  int *v28; // eax
  unsigned int v29; // edi
  int *v30; // ecx
  signed int v31; // eax
  signed int v32; // eax
  int *v33; // ecx
  int *v34; // eax
  int v35; // eax
  unsigned int v36; // edx
  int v37; // eax
  unsigned int v38; // ecx
  _BYTE *v39; // eax
  int *v40; // eax
  unsigned int v41; // edi
  int *v42; // ecx
  signed int v43; // eax
  signed int v44; // eax
  int *v45; // ecx
  int *v46; // eax
  int v47; // edx
  int v48; // eax
  int v49; // eax
  unsigned int v50; // esi
  unsigned int v51; // edx
  unsigned int v52; // ebx
  unsigned int v53; // edi
  signed int v54; // eax
  unsigned int v55; // ecx
  char v56; // bl
  unsigned int v57; // edi
  int v58; // eax
  int v59; // eax
  unsigned int v60; // esi
  unsigned int v61; // edx
  unsigned int v62; // ebx
  unsigned int v63; // edi
  signed int v64; // eax
  unsigned int v65; // ecx
  char v66; // bl
  unsigned __int64 v67; // rax
  unsigned int v68; // eax
  int v69; // ecx
  int v70; // esi
  int v71; // edi
  unsigned int v72; // edx
  int v73; // edi
  char v74; // al
  unsigned int v75; // ecx
  int v76; // esi
  unsigned __int64 v77; // rax
  int v78; // kr04_4
  unsigned __int64 v79; // rax
  int v80; // edi
  unsigned int v81; // ecx
  int v82; // edi
  unsigned __int64 v83; // rax
  int v84; // kr08_4
  unsigned __int64 v85; // rax
  int *v86; // esi
  unsigned int v87; // ecx
  int *v88; // eax
  int v89; // edi
  int v90; // eax
  int v91; // esi
  int *v92; // edx
  int v93; // ecx
  unsigned __int64 v94; // rax
  unsigned __int8 v95; // cf
  int v96; // ecx
  int *v97; // eax
  int *v98; // ecx
  _BYTE *v99; // eax
  int v100; // eax
  unsigned int v101; // ecx
  int v102; // edi
  unsigned __int64 v103; // rax
  int v104; // edx
  unsigned int v105; // eax
  int v106; // ecx
  int v107; // esi
  int v108; // edi
  unsigned int v109; // edx
  int v110; // edi
  char v111; // al
  unsigned int v112; // ecx
  int v113; // esi
  unsigned __int64 v114; // rax
  int v115; // kr0C_4
  unsigned __int64 v116; // rax
  unsigned int v117; // edi
  unsigned int v118; // ecx
  int v119; // edi
  unsigned __int64 v120; // rax
  int v121; // kr10_4
  unsigned __int64 v122; // rax
  int *v123; // esi
  unsigned int v124; // ecx
  int *v125; // eax
  int v126; // edi
  int v127; // eax
  int v128; // esi
  int *v129; // edx
  int v130; // ecx
  unsigned __int64 v131; // rax
  int v132; // ecx
  int *v133; // eax
  int *v134; // ecx
  _BYTE *v135; // eax
  int v136; // eax
  unsigned int v137; // ecx
  int v138; // edi
  unsigned __int64 v139; // rax
  int v140; // edx
  unsigned int v141; // ecx
  _BYTE *v142; // edi
  int v143; // edi
  signed __int64 v144; // rax
  int v145; // kr14_4
  unsigned int v146; // kr18_4
  unsigned __int64 v147; // rax
  int v148; // eax
  _BYTE *v149; // ecx
  unsigned int v150; // eax
  unsigned int v151; // edi
  int v152; // ecx
  signed __int64 v153; // rax
  signed int v154; // eax
  unsigned int v155; // edx
  int v156; // eax
  char v157; // dl
  unsigned int v158; // edi
  int v159; // ecx
  signed __int64 v160; // rax
  int v161; // kr20_4
  unsigned __int64 v162; // rax
  _BYTE *v163; // edi
  unsigned int v164; // eax
  unsigned int v165; // ecx
  unsigned int v166; // eax
  char v167; // dl
  unsigned int v168; // eax
  int v169; // eax
  char v171; // [esp+18h] [ebp-970h]
  int v172; // [esp+1E4h] [ebp-7A4h]
  int v173; // [esp+1E8h] [ebp-7A0h]
  char v174; // [esp+1F0h] [ebp-798h]
  __int64 v175; // [esp+1F4h] [ebp-794h]
  signed int *v176; // [esp+1FCh] [ebp-78Ch]
  unsigned int v177; // [esp+200h] [ebp-788h]
  unsigned int v178; // [esp+204h] [ebp-784h]
  int *v179; // [esp+208h] [ebp-780h]
  double v180; // [esp+20Ch] [ebp-77Ch]
  unsigned int v181; // [esp+218h] [ebp-770h]
  unsigned int v182; // [esp+21Ch] [ebp-76Ch]
  int *v183; // [esp+220h] [ebp-768h]
  unsigned int v184; // [esp+224h] [ebp-764h]
  _BYTE *v185; // [esp+228h] [ebp-760h]
  char v186; // [esp+22Fh] [ebp-759h]
  unsigned int v187; // [esp+230h] [ebp-758h]
  unsigned int v188; // [esp+234h] [ebp-754h]
  unsigned int v189; // [esp+238h] [ebp-750h]
  int *v190; // [esp+23Ch] [ebp-74Ch]
  _BYTE *v191; // [esp+240h] [ebp-748h]
  int *v192; // [esp+244h] [ebp-744h]
  int v193[115]; // [esp+248h] [ebp-740h]
  unsigned int v194; // [esp+414h] [ebp-574h]
  int v195; // [esp+418h] [ebp-570h]
  int v196; // [esp+41Ch] [ebp-56Ch]
  unsigned int v197; // [esp+5E4h] [ebp-3A4h]
  int v198[115]; // [esp+5E8h] [ebp-3A0h]
  unsigned int v199; // [esp+7B4h] [ebp-1D4h]
  unsigned int v200; // [esp+7B8h] [ebp-1D0h]
  int v201; // [esp+7BCh] [ebp-1CCh]

  v176 = (signed int *)a4;
  v185 = (_BYTE *)a5;
  sub_10034347(&v173);
  v6 = 1;
  if ( (v173 & 0x1F) == 31 )
  {
    v174 = 0;
  }
  else
  {
    sub_10035B34(&v173);
    v174 = 1;
  }
  v7 = HIDWORD(a1);
  if ( a1 >= 0.0 )
    v8 = 32;
  else
    v8 = 45;
  v9 = v176;
  *v176 = v8;
  v9[2] = (signed int)v185;
  sub_10035B89(&v172, 0, 0);
  if ( !(v7 & 0x7FF00000) && (!(v7 & 0xFFFFF | LODWORD(a1)) || v172 & 0x1000000) )
  {
    v176[1] = 0;
    v10 = sub_10035E22(v185, a6, &unk_100A83EC);
    goto LABEL_19;
  }
  v11 = sub_10034EFA(&a1);
  if ( !v11 )
    goto LABEL_23;
  v176[1] = 1;
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( !sub_10035E22(v185, a6, "1#INF") )
    {
      v6 = 0;
      goto LABEL_299;
    }
    goto LABEL_302;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v10 = sub_10035E22(v185, a6, "1#QNAN");
LABEL_19:
    if ( !v10 )
      goto LABEL_299;
LABEL_302:
    sub_1003465D(0, 0, 0, 0, 0);
    JUMPOUT(*(_DWORD *)byte_10088CC1);
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v10 = sub_10035E22(v185, a6, "1#SNAN");
    goto LABEL_19;
  }
  if ( v14 == 1 )
  {
    v10 = sub_10035E22(v185, a6, "1#IND");
    goto LABEL_19;
  }
LABEL_23:
  HIDWORD(a1) = v7 & 0x7FFFFFFF;
  HIDWORD(v175) = 524319;
  sub_10035B89(&v175, 0, 0);
  sub_10035B89((char *)&v180 + 4, 524319, HIDWORD(v175));
  *(double *)&v15 = a1;
  v181 = 0;
  v180 = a1;
  v177 = a2 + 1;
  if ( (HIDWORD(v180) >> 20) & 0x7FF )
  {
    v16 = 0x10000000000000i64;
    v189 = 0;
  }
  else
  {
    v16 = 0i64;
    v189 = 1;
  }
  v181 = v16 + LODWORD(v180);
  v17 = v16 + __PAIR__(HIDWORD(v180) & 0xFFFFF, LODWORD(v180));
  v190 = (int *)(((HIDWORD(v180) >> 20) & 0x7FF) + v189);
  sub_100356F2();
  sub_10035F94(v15);
  v19 = sub_100337E4(v18);
  v178 = v19;
  if ( v19 == 0x7FFFFFFF || v19 == 0x80000000 )
    v178 = 0;
  v200 = v181;
  v201 = HIDWORD(v17);
  v20 = (HIDWORD(v17) != 0) + 1;
  v189 = (HIDWORD(v17) != 0) + 1;
  v199 = (HIDWORD(v17) != 0) + 1;
  if ( (unsigned int)v190 < 0x433 )
  {
    if ( v190 != (int *)53 )
    {
      v195 = 0;
      v196 = 0x100000;
      v194 = 2;
      if ( HIDWORD(v17) )
      {
        v47 = 0;
        while ( *(int *)((char *)&v195 + v47) == *(unsigned int *)((char *)&v200 + v47) )
        {
          v47 += 4;
          if ( v47 == 8 )
          {
            v24 = !_BitScanReverse((unsigned int *)&v48, HIDWORD(v17));
            HIDWORD(v180) = 0;
            if ( v24 )
              v49 = 0;
            else
              v49 = v48 + 1;
            v50 = v20 + ((unsigned int)(32 - v49) < 2);
            if ( v50 <= 0x73 )
            {
              v51 = v50 - 1;
              if ( v50 )
              {
                v52 = v50 - 2;
                while ( 1 )
                {
                  v53 = v51;
                  v54 = v51 >= v20 ? 0 : *(&v200 + v51);
                  v55 = v52-- >= v20 ? 0 : *(&v199 + v51--);
                  *(&v200 + v53) = 4 * v54 | (v55 >> 30);
                  if ( v51 == -1 )
                    break;
                  v20 = v199;
                }
              }
              v199 = v50;
            }
            else
            {
              v194 = 0;
              v199 = 0;
              sub_1008923C((int)&v200, 0x1CCu, (int)&v195, 0);
            }
            v56 = 53 - (_BYTE)v190;
            v57 = (unsigned int)(1077 - (_DWORD)v190) >> 5;
            sub_10034388(&v195, 0, 4 * v57);
            *(&v195 + v57) = 1 << (v56 & 0x1F);
            goto LABEL_116;
          }
        }
      }
    }
    HIDWORD(v180) = 0;
    v24 = !_BitScanReverse((unsigned int *)&v58, *(&v199 + (HIDWORD(v17) != 0) + 1));
    if ( v24 )
      v59 = 0;
    else
      v59 = v58 + 1;
    v60 = v20 + ((unsigned int)(32 - v59) < 1);
    if ( v60 <= 0x73 )
    {
      v61 = v60 - 1;
      if ( v60 )
      {
        v62 = v60 - 2;
        while ( 1 )
        {
          v63 = v61;
          v64 = v61 >= v20 ? 0 : *(&v200 + v61);
          v65 = v62-- >= v20 ? 0 : *(&v199 + v61--);
          *(&v200 + v63) = 2 * v64 | (v65 >> 31);
          if ( v61 == -1 )
            break;
          v20 = v199;
        }
      }
      v199 = v60;
    }
    else
    {
      v194 = 0;
      v199 = 0;
      sub_1008923C((int)&v200, 0x1CCu, (int)&v195, 0);
    }
    v66 = 52 - (_BYTE)v190;
    v57 = (unsigned int)(1076 - (_DWORD)v190) >> 5;
    sub_10034388(&v195, 0, 4 * v57);
    *(&v195 + v57) = 1 << (v66 & 0x1F);
LABEL_116:
    v194 = v57 + 1;
    v197 = v57 + 1;
    sub_1008923C((int)v198, 0x1CCu, (int)&v195, 4 * (v57 + 1));
    v6 = 1;
  }
  else
  {
    v195 = 0;
    v196 = 0x100000;
    v194 = 2;
    if ( HIDWORD(v17) )
    {
      v21 = 0;
      while ( *(int *)((char *)&v195 + v21) == *(unsigned int *)((char *)&v200 + v21) )
      {
        v21 += 4;
        if ( v21 == 8 )
        {
          v184 = ((unsigned int)v190 - 1073) >> 5;
          v187 = ((unsigned int)v190 - 1073) & 0x1F;
          v188 = 32 - v187;
          v22 = sub_10034CAC(32 - v187, 0);
          v23 = v189;
          v25 = v22 - 1;
          HIDWORD(v180) = 0;
          v182 = v25;
          v181 = ~v25;
          v24 = !_BitScanReverse((unsigned int *)&v25, *(&v199 + v189));
          if ( v24 )
            v189 = 0;
          else
            v189 = v25 + 1;
          v26 = v184;
          if ( v23 + v184 > 0x73
            || (v27 = (_BYTE *)(v184 + v23 + (32 - v189 < v187)), v191 = v27, (unsigned int)v27 > 0x73) )
          {
            v194 = 0;
            v199 = 0;
            sub_1008923C((int)&v200, 0x1CCu, (int)&v195, 0);
          }
          else
          {
            v28 = (int *)(v27 - 1);
            v179 = (int *)(v184 - 1);
            v190 = v28;
            if ( v28 != (int *)(v184 - 1) )
            {
              v29 = (unsigned int)v28 - v184;
              v30 = (int *)(&v199 + (_DWORD)v28 - v184);
              v183 = (int *)(&v199 + (_DWORD)v28 - v184);
              while ( 1 )
              {
                v31 = v29 >= v23 ? 0 : v30[1];
                v189 = v31;
                v32 = v29 - 1 >= v23 ? 0 : *v30;
                v33 = v190;
                *(&v200 + (_DWORD)v190) = ((v182 & v189) << v187) | ((v181 & v32) >> v188);
                v34 = (int *)((char *)v33 - 1);
                v30 = v183 - 1;
                v190 = v34;
                --v29;
                --v183;
                if ( v34 == v179 )
                  break;
                v23 = v199;
              }
              v26 = v184;
            }
            if ( v26 )
              memset(&v200, 0, 4 * v26);
            v199 = (unsigned int)v191;
          }
          v195 = 4;
          goto LABEL_55;
        }
      }
    }
    v184 = ((unsigned int)v190 - 1074) >> 5;
    v187 = ((unsigned int)v190 - 1074) & 0x1F;
    v188 = 32 - v187;
    v35 = sub_10034CAC(32 - v187, 0);
    v36 = v189;
    v37 = v35 - 1;
    HIDWORD(v180) = 0;
    v182 = v37;
    v181 = ~v37;
    v24 = !_BitScanReverse((unsigned int *)&v37, *(&v199 + v189));
    if ( v24 )
      v189 = 0;
    else
      v189 = v37 + 1;
    v38 = v184;
    if ( v36 + v184 > 0x73 || (v39 = (_BYTE *)(v184 + v36 + (32 - v189 < v187)), v191 = v39, (unsigned int)v39 > 0x73) )
    {
      v194 = 0;
      v199 = 0;
      sub_1008923C((int)&v200, 0x1CCu, (int)&v195, 0);
    }
    else
    {
      v40 = (int *)(v39 - 1);
      v179 = (int *)(v184 - 1);
      v190 = v40;
      if ( v40 != (int *)(v184 - 1) )
      {
        v41 = (unsigned int)v40 - v184;
        v42 = (int *)(&v199 + (_DWORD)v40 - v184);
        v183 = (int *)(&v199 + (_DWORD)v40 - v184);
        while ( 1 )
        {
          v43 = v41 >= v36 ? 0 : v42[1];
          v189 = v43;
          v44 = v41 - 1 >= v36 ? 0 : *v42;
          v45 = v190;
          *(&v200 + (_DWORD)v190) = ((v182 & v189) << v187) | ((v181 & v44) >> v188);
          v46 = (int *)((char *)v45 - 1);
          v42 = v183 - 1;
          v190 = v46;
          --v41;
          --v183;
          if ( v46 == v179 )
            break;
          v36 = v199;
        }
        v38 = v184;
      }
      if ( v38 )
        memset(&v200, 0, 4 * v38);
      v199 = (unsigned int)v191;
    }
    v195 = 2;
LABEL_55:
    v196 = 0;
    v197 = 1;
    v194 = 1;
    sub_1008923C((int)v198, 0x1CCu, (int)&v195, 4u);
  }
  v67 = v178;
  v189 = 10;
  if ( (v178 & 0x80000000) != 0 )
  {
    LODWORD(v67) = -v178;
    HIDWORD(v180) = -v178;
    v105 = v67 / 0xA;
    v181 = v105;
    if ( !v105 )
      goto LABEL_239;
    while ( 1 )
    {
      if ( v105 > 0x26 )
        v105 = 38;
      v106 = (unsigned __int8)byte_100A8306[4 * v105];
      v107 = (unsigned __int8)byte_100A8307[4 * v105];
      v108 = (unsigned __int8)byte_100A8306[4 * v105];
      v187 = v105;
      v108 *= 4;
      v194 = v106 + v107;
      sub_10034388(&v195, 0, v108);
      sub_100359C2(
        (char *)&v195 + v108,
        (char *)&unk_100A7830 + 4 * (unsigned __int16)word_100A8304[2 * v187],
        4 * v107);
      v109 = v194;
      v182 = v194;
      if ( v194 <= 1 )
      {
        v110 = v195;
        if ( v195 )
        {
          if ( v195 != 1 )
          {
            if ( v199 )
            {
              v112 = 0;
              v188 = v199;
              v113 = 0;
              do
              {
                v114 = *(&v200 + v113) * (unsigned __int64)(unsigned int)v110;
                v115 = *(&v200 + v113) * v110;
                *(&v200 + v113) = v112 + v115;
                v116 = __PAIR__(HIDWORD(v114), v112) + (unsigned int)v115;
                ++v113;
                v112 = HIDWORD(v116);
              }
              while ( v113 != v188 );
              if ( HIDWORD(v116) )
              {
                if ( v199 >= 0x73 )
                {
                  v199 = 0;
                  sub_1008923C((int)&v200, 0x1CCu, (int)&v171, 0);
                  v111 = 0;
                  goto LABEL_237;
                }
                *(&v200 + v199++) = HIDWORD(v116);
              }
            }
          }
        }
        else
        {
          v199 = 0;
          sub_1008923C((int)&v200, 0x1CCu, (int)&v171, 0);
        }
        v111 = 1;
        goto LABEL_237;
      }
      if ( v199 <= 1 )
      {
        v117 = v200;
        v188 = v200;
        v199 = v194;
        sub_1008923C((int)&v200, 0x1CCu, (int)&v195, 4 * v194);
        if ( v117 )
        {
          if ( v117 != 1 )
          {
            if ( v199 )
            {
              v118 = 0;
              v182 = v199;
              v119 = 0;
              do
              {
                v120 = *(&v200 + v119) * (unsigned __int64)v188;
                v121 = *(&v200 + v119) * v188;
                *(&v200 + v119) = v118 + v121;
                v122 = __PAIR__(HIDWORD(v120), v118) + (unsigned int)v121;
                ++v119;
                v118 = HIDWORD(v122);
              }
              while ( v119 != v182 );
              if ( HIDWORD(v122) )
              {
                if ( v199 >= 0x73 )
                  goto LABEL_248;
                *(&v200 + v199++) = HIDWORD(v122);
              }
            }
          }
        }
        else
        {
          v199 = 0;
          sub_1008923C((int)&v200, 0x1CCu, (int)&v171, 0);
        }
        goto LABEL_236;
      }
      v123 = &v195;
      if ( v194 >= v199 )
        v123 = (int *)&v200;
      v184 = (unsigned int)v123;
      if ( v194 < v199 )
      {
        v124 = v194;
        v179 = (int *)v194;
        v109 = v199;
        v125 = (int *)&v200;
        v182 = v199;
      }
      else
      {
        v124 = v199;
        v125 = &v195;
        v179 = (int *)v199;
      }
      v188 = (unsigned int)v125;
      v126 = 0;
      v127 = 0;
      v192 = 0;
      if ( !v124 )
      {
LABEL_235:
        v199 = v127;
        sub_1008923C((int)&v200, 0x1CCu, (int)v193, 4 * v127);
LABEL_236:
        v111 = 1;
        goto LABEL_237;
      }
      while ( !v123[v126] )
      {
        if ( v126 == v127 )
        {
          v193[v126] = 0;
          v127 = v126 + 1;
          v192 = (int *)(v126 + 1);
        }
LABEL_234:
        if ( ++v126 == v124 )
          goto LABEL_235;
      }
      v191 = 0;
      v128 = v126;
      v190 = 0;
      if ( !v109 )
        break;
      do
      {
        if ( v128 == 115 )
          break;
        v129 = v190;
        v130 = v128;
        if ( v128 == v127 )
        {
          v193[v130] = 0;
          v192 = (int *)((char *)v129 + v126 + 1);
        }
        v131 = (unsigned __int64)&v191[*(unsigned int *)(v184 + 4 * v126)
                                     * (unsigned __int64)*(unsigned int *)(v188 + 4 * (_DWORD)v129)];
        v95 = __CFADD__((_DWORD)v131, v193[v130]);
        v193[v130] += v131;
        v127 = (int)v192;
        v191 = (_BYTE *)(v95 + HIDWORD(v131));
        v109 = v182;
        ++v128;
        v190 = (int *)((char *)v190 + 1);
      }
      while ( v190 != (int *)v182 );
      if ( !v191 )
        break;
      v183 = &v193[v128];
      while ( v128 != 115 )
      {
        v132 = v128 + 1;
        v24 = v128 == v127;
        v133 = v183;
        ++v128;
        if ( v24 )
        {
          *v183 = 0;
          v192 = (int *)v132;
        }
        v134 = v133;
        v183 = v133 + 1;
        v135 = v191;
        v191 = 0;
        v95 = __CFADD__(v135, *v134);
        *v134 += (int)v135;
        v127 = (int)v192;
        v191 += v95;
        if ( !v191 )
          goto LABEL_232;
      }
LABEL_248:
      v199 = 0;
      sub_1008923C((int)&v200, 0x1CCu, (int)&v171, 0);
      v111 = 0;
LABEL_237:
      if ( !v111 )
      {
        v199 = 0;
        goto LABEL_251;
      }
      v105 = v181 - v187;
      v181 -= v187;
      if ( !v181 )
      {
LABEL_239:
        if ( !(HIDWORD(v180) % 0xA) )
          goto LABEL_252;
        v136 = dword_100A83BC[HIDWORD(v180) % 0xA];
        HIDWORD(v180) = v136;
        if ( v136 )
        {
          if ( v136 == 1 )
            goto LABEL_252;
          v137 = v199;
          if ( !v199 )
            goto LABEL_252;
          v181 = 0;
          v138 = 0;
          do
          {
            v139 = *(&v200 + v138) * (unsigned __int64)(unsigned int)v136;
            v95 = __CFADD__(v181, (_DWORD)v139);
            *(&v200 + v138) = v181 + v139;
            v136 = HIDWORD(v180);
            v140 = v95 + HIDWORD(v139);
            ++v138;
            v181 = v140;
          }
          while ( v138 != v137 );
          if ( !v140 )
            goto LABEL_252;
          if ( v199 < 0x73 )
          {
            *(&v200 + v199++) = v140;
            goto LABEL_252;
          }
        }
        v199 = 0;
LABEL_251:
        sub_1008923C((int)&v200, 0x1CCu, (int)&v171, 0);
        goto LABEL_252;
      }
    }
LABEL_232:
    if ( v128 == 115 )
      goto LABEL_248;
    v124 = (unsigned int)v179;
    v123 = (int *)v184;
    goto LABEL_234;
  }
  v68 = v178 / 0xA;
  v188 = v178 / 0xA;
  if ( !(v178 / 0xA) )
    goto LABEL_172;
  do
  {
    if ( v68 > 0x26 )
      v68 = 38;
    v69 = (unsigned __int8)byte_100A8306[4 * v68];
    v70 = (unsigned __int8)byte_100A8307[4 * v68];
    v71 = (unsigned __int8)byte_100A8306[4 * v68];
    v183 = (int *)v68;
    v71 *= 4;
    v194 = v69 + v70;
    sub_10034388(&v195, 0, v71);
    sub_100359C2(
      (char *)&v195 + v71,
      (char *)&unk_100A7830 + 4 * (unsigned __int16)word_100A8304[2 * (_DWORD)v183],
      4 * v70);
    v72 = v194;
    v179 = (int *)v194;
    if ( v194 <= 1 )
    {
      v73 = v195;
      if ( v195 )
      {
        if ( v195 != 1 )
        {
          if ( v197 )
          {
            v75 = 0;
            v181 = v197;
            v76 = 0;
            do
            {
              v77 = (unsigned int)v198[v76] * (unsigned __int64)(unsigned int)v73;
              v78 = v198[v76] * v73;
              v198[v76] = v75 + v78;
              v79 = __PAIR__(HIDWORD(v77), v75) + (unsigned int)v78;
              ++v76;
              v75 = HIDWORD(v79);
            }
            while ( v76 != v181 );
            if ( HIDWORD(v79) )
            {
              if ( v197 >= 0x73 )
              {
                v194 = 0;
                v197 = 0;
                sub_1008923C((int)v198, 0x1CCu, (int)&v195, 0);
                v74 = 0;
                goto LABEL_170;
              }
              v198[v197++] = HIDWORD(v79);
            }
          }
        }
      }
      else
      {
        v192 = 0;
        v197 = 0;
        sub_1008923C((int)v198, 0x1CCu, (int)v193, 0);
      }
      v74 = 1;
      goto LABEL_170;
    }
    if ( v197 <= 1 )
    {
      v80 = v198[0];
      v181 = v198[0];
      v197 = v194;
      sub_1008923C((int)v198, 0x1CCu, (int)&v195, 4 * v194);
      if ( v80 )
      {
        if ( v80 != 1 )
        {
          if ( v197 )
          {
            v81 = 0;
            v182 = v197;
            v82 = 0;
            do
            {
              v83 = (unsigned int)v198[v82] * (unsigned __int64)v181;
              v84 = v198[v82] * v181;
              v198[v82] = v81 + v84;
              v85 = __PAIR__(HIDWORD(v83), v81) + (unsigned int)v84;
              ++v82;
              v81 = HIDWORD(v85);
            }
            while ( v82 != v182 );
            if ( HIDWORD(v85) )
            {
              if ( v197 >= 0x73 )
              {
                v194 = 0;
                v197 = 0;
                sub_1008923C((int)v198, 0x1CCu, (int)&v195, 0);
                goto LABEL_176;
              }
              v198[v197++] = HIDWORD(v85);
            }
          }
        }
      }
      else
      {
        v194 = 0;
        v197 = 0;
        sub_1008923C((int)v198, 0x1CCu, (int)&v195, 0);
      }
      goto LABEL_169;
    }
    v86 = &v195;
    if ( v194 >= v197 )
      v86 = v198;
    v184 = (unsigned int)v86;
    if ( v194 < v197 )
    {
      v87 = v194;
      v182 = v194;
      v72 = v197;
      v88 = v198;
      v179 = (int *)v197;
    }
    else
    {
      v87 = v197;
      v88 = &v195;
      v182 = v197;
    }
    v187 = (unsigned int)v88;
    v89 = 0;
    v90 = 0;
    v192 = 0;
    if ( !v87 )
    {
LABEL_168:
      v197 = v90;
      sub_1008923C((int)v198, 0x1CCu, (int)v193, 4 * v90);
LABEL_169:
      v74 = 1;
      goto LABEL_170;
    }
    while ( 1 )
    {
      if ( !v86[v89] )
      {
        if ( v89 == v90 )
        {
          v193[v89] = 0;
          v90 = v89 + 1;
          v192 = (int *)(v89 + 1);
        }
        goto LABEL_167;
      }
      v191 = 0;
      v91 = v89;
      v190 = 0;
      if ( v72 )
      {
        do
        {
          if ( v91 == 115 )
            break;
          v92 = v190;
          v93 = v91;
          if ( v91 == v90 )
          {
            v193[v93] = 0;
            v192 = (int *)((char *)v92 + v89 + 1);
          }
          v94 = (unsigned __int64)&v191[*(unsigned int *)(v184 + 4 * v89)
                                      * (unsigned __int64)*(unsigned int *)(v187 + 4 * (_DWORD)v92)];
          v95 = __CFADD__((_DWORD)v94, v193[v93]);
          v193[v93] += v94;
          v90 = (int)v192;
          v191 = (_BYTE *)(v95 + HIDWORD(v94));
          v72 = (unsigned int)v179;
          ++v91;
          v190 = (int *)((char *)v190 + 1);
        }
        while ( v190 != v179 );
        if ( v191 )
          break;
      }
LABEL_165:
      if ( v91 == 115 )
        goto LABEL_175;
      v87 = v182;
      v86 = (int *)v184;
LABEL_167:
      if ( ++v89 == v87 )
        goto LABEL_168;
    }
    v190 = &v193[v91];
    while ( v91 != 115 )
    {
      v96 = v91 + 1;
      v24 = v91 == v90;
      v97 = v190;
      ++v91;
      if ( v24 )
      {
        *v190 = 0;
        v192 = (int *)v96;
      }
      v98 = v97;
      v190 = v97 + 1;
      v99 = v191;
      v191 = 0;
      v95 = __CFADD__(v99, *v98);
      *v98 += (int)v99;
      v90 = (int)v192;
      v191 += v95;
      if ( !v191 )
        goto LABEL_165;
    }
LABEL_175:
    v197 = 0;
    sub_1008923C((int)v198, 0x1CCu, (int)&v171, 0);
LABEL_176:
    v74 = 0;
LABEL_170:
    if ( !v74 )
    {
      v197 = 0;
      goto LABEL_178;
    }
    v68 = v188 - (_DWORD)v183;
    v188 -= (unsigned int)v183;
  }
  while ( v188 );
LABEL_172:
  if ( v178 % 0xA )
  {
    v100 = dword_100A83BC[v178 % 0xA];
    v181 = v100;
    if ( !v100 )
      goto LABEL_174;
    if ( v100 != 1 )
    {
      v101 = v197;
      if ( v197 )
      {
        v188 = 0;
        v102 = 0;
        do
        {
          v103 = (unsigned int)v198[v102] * (unsigned __int64)(unsigned int)v100;
          v95 = __CFADD__(v188, (_DWORD)v103);
          v198[v102] = v188 + v103;
          v100 = v181;
          v104 = v95 + HIDWORD(v103);
          ++v102;
          v188 = v104;
        }
        while ( v102 != v101 );
        if ( v104 )
        {
          if ( v197 < 0x73 )
          {
            v198[v197++] = v104;
            goto LABEL_252;
          }
LABEL_174:
          v197 = 0;
LABEL_178:
          sub_1008923C((int)v198, 0x1CCu, (int)&v171, 0);
        }
      }
    }
  }
LABEL_252:
  v141 = v199;
  v142 = v185;
  v191 = v185;
  if ( v199 )
  {
    v181 = 0;
    v143 = 0;
    do
    {
      v144 = 10i64 * *(&v200 + v143);
      v145 = 10 * *(&v200 + v143);
      v146 = v181;
      *(&v200 + v143) = v181 + 10 * *(&v200 + v143);
      v147 = __PAIR__(HIDWORD(v144), v146) + (unsigned int)v145;
      ++v143;
      v181 = HIDWORD(v147);
    }
    while ( v143 != v141 );
    v142 = v191;
    if ( HIDWORD(v147) )
    {
      if ( v199 >= 0x73 )
      {
        v199 = 0;
        sub_1008923C((int)&v200, 0x1CCu, (int)&v171, 0);
      }
      else
      {
        *(&v200 + v199++) = HIDWORD(v147);
      }
    }
  }
  v148 = sub_100350BC(&v199, &v197);
  v149 = v185;
  if ( v148 == 10 )
  {
    v150 = v197;
    v142 = v185 + 1;
    ++v178;
    *v185 = 49;
    v191 = v149 + 1;
    HIDWORD(v180) = v150;
    if ( v150 )
    {
      v151 = 0;
      v152 = 0;
      do
      {
        v153 = 10i64 * (unsigned int)v198[v152];
        v198[v152++] = v151 + v153;
        v151 = (v153 + (unsigned __int64)v151) >> 32;
      }
      while ( v152 != HIDWORD(v180) );
      HIDWORD(v180) = v151;
      v24 = v151 == 0;
      v142 = v191;
      if ( !v24 )
      {
        if ( v197 >= 0x73 )
        {
          v197 = 0;
          sub_1008923C((int)v198, 0x1CCu, (int)&v171, 0);
        }
        else
        {
          v198[v197++] = HIDWORD(v180);
        }
      }
      v149 = v185;
    }
  }
  else if ( v148 )
  {
    v142 = v185 + 1;
    *v185 = v148 + 48;
    v191 = v149 + 1;
  }
  else
  {
    --v178;
  }
  v154 = v178;
  v176[1] = v178;
  v155 = v177;
  if ( v154 >= 0 && v177 <= 0x7FFFFFFF && !a3 )
    v155 = v154 + v177;
  v156 = a6 - 1;
  if ( a6 - 1 >= v155 )
    v156 = v155;
  v157 = 0;
  v188 = (unsigned int)&v149[v156];
  v186 = 0;
  if ( v142 != &v149[v156] )
  {
LABEL_274:
    HIDWORD(v180) = v199;
    if ( !v199 )
      goto LABEL_295;
    v158 = 0;
    v159 = 0;
    do
    {
      v160 = 1000000000i64 * *(&v200 + v159);
      v161 = 1000000000 * *(&v200 + v159);
      *(&v200 + v159) = v158 + 1000000000 * *(&v200 + v159);
      v162 = __PAIR__(HIDWORD(v160), v158) + (unsigned int)v161;
      ++v159;
      v158 = HIDWORD(v162);
    }
    while ( v159 != HIDWORD(v180) );
    HIDWORD(v180) = HIDWORD(v162);
    v163 = v191;
    if ( HIDWORD(v162) )
    {
      if ( v199 >= 0x73 )
      {
        v199 = 0;
        sub_1008923C((int)&v200, 0x1CCu, (int)&v171, 0);
      }
      else
      {
        *(&v200 + v199++) = HIDWORD(v162);
      }
    }
    v164 = sub_100350BC(&v199, &v197);
    v187 = v164;
    v165 = v188 - (_DWORD)v163;
    v181 = 8;
    while ( 1 )
    {
      v166 = v164 % v189;
      LOBYTE(v166) = v166 + 48;
      v177 = v166;
      v167 = v166;
      v187 /= v189;
      v168 = v181;
      if ( v165 > v181 )
        break;
      if ( v167 == 48 )
        goto LABEL_290;
      v157 = 1;
      v186 = 1;
LABEL_291:
      v169 = v168 - 1;
      v181 = v169;
      v24 = v169 == -1;
      v164 = v187;
      if ( v24 )
      {
        if ( v165 > 9 )
          v165 = 9;
        v142 = &v163[v165];
        v191 = v142;
        if ( v142 == (_BYTE *)v188 )
          goto LABEL_295;
        goto LABEL_274;
      }
    }
    v163[v181] = v167;
LABEL_290:
    v157 = v186;
    goto LABEL_291;
  }
LABEL_295:
  *v142 = 0;
  if ( v199 || v157 )
    v6 = 0;
  sub_10035B89((char *)&v180 + 4, v175, HIDWORD(v175));
LABEL_299:
  if ( v174 )
    sub_10034F09(&v173);
  return v6;
}
// 100337E4: using guessed type int __thiscall sub_100337E4(_DWORD);
// 10034347: using guessed type _DWORD __cdecl sub_10034347(_DWORD);
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034CAC: using guessed type int __fastcall sub_10034CAC(_DWORD, _DWORD);
// 10034EFA: using guessed type _DWORD __cdecl sub_10034EFA(_DWORD);
// 10034F09: using guessed type _DWORD __cdecl sub_10034F09(_DWORD);
// 100350BC: using guessed type _DWORD __cdecl sub_100350BC(_DWORD, _DWORD);
// 100356F2: using guessed type double sub_100356F2(void);
// 100359C2: using guessed type _DWORD __cdecl sub_100359C2(_DWORD, _DWORD, _DWORD);
// 10035B34: using guessed type _DWORD __cdecl sub_10035B34(_DWORD);
// 10035B89: using guessed type _DWORD __cdecl sub_10035B89(_DWORD, _DWORD, _DWORD);
// 10035E22: using guessed type _DWORD __cdecl sub_10035E22(_DWORD, _DWORD, _DWORD);
// 10035F94: using guessed type double __cdecl sub_10035F94(__int64);
// 100A8304: using guessed type __int16 word_100A8304[];
// 100876DA: using guessed type int var_3A0[115];
// 100876DA: using guessed type int var_740[115];

//----- (1008923C) --------------------------------------------------------
signed int __cdecl sub_1008923C(int a1, unsigned int a2, int a3, unsigned int a4)
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

//----- (1008931E) --------------------------------------------------------
int sub_1008931E()
{
  int v0; // eax

  v0 = sub_10035C06();
  return sub_10034BD5(v0);
}
// 10034BD5: using guessed type _DWORD __cdecl sub_10034BD5(_DWORD);
// 10035C06: using guessed type int sub_10035C06(void);

//----- (10089472) --------------------------------------------------------
int __thiscall sub_10089472(_DWORD *this)
{
  int v1; // eax
  _DWORD *v3; // [esp+0h] [ebp-4h]

  v3 = this;
  v1 = sub_10034E4B();
  v3 = *(_DWORD **)(v1 + 76);
  sub_10034EB4(v1, &v3);
  return v3[1];
}
// 10034EB4: using guessed type _DWORD __cdecl sub_10034EB4(_DWORD, _DWORD);

//----- (100894BF) --------------------------------------------------------
signed int __cdecl sub_100894BF(_DWORD *a1)
{
  int v1; // esi
  signed int v2; // ebx
  int v3; // edi
  int v4; // ecx
  LPCSTR v5; // ecx
  signed int v6; // eax
  BYTE *v7; // edx
  LPCSTR v8; // ecx
  BYTE v9; // al
  signed int v10; // esi
  UINT v11; // ST34_4
  int v12; // ST1C_4
  UINT v13; // ST34_4
  _WORD *v14; // ecx
  bool v15; // cf
  bool v16; // zf
  _BYTE *v17; // edi
  _WORD *v18; // eax
  _BYTE *v19; // edx
  _BYTE *v20; // ecx
  int v21; // edi
  _WORD *v22; // ebx
  const CHAR *v23; // ebx
  char v24; // al
  BYTE *v25; // esi
  char *v26; // ebx
  BYTE v27; // al
  signed int v28; // ecx
  int v29; // eax
  _BYTE *v30; // ebx
  _WORD *v31; // edi
  int v32; // edx
  _WORD *v33; // edi
  char *v34; // eax
  int v35; // esi
  volatile signed __int32 *v36; // ecx
  LPVOID v37; // eax
  signed int result; // eax
  volatile signed __int32 *v39; // eax
  int v40; // [esp+Ch] [ebp-58h]
  int v41; // [esp+10h] [ebp-54h]
  _BYTE *v42; // [esp+14h] [ebp-50h]
  char *v43; // [esp+18h] [ebp-4Ch]
  _WORD *v44; // [esp+1Ch] [ebp-48h]
  char *v45; // [esp+20h] [ebp-44h]
  int v46; // [esp+24h] [ebp-40h]
  int v47; // [esp+28h] [ebp-3Ch]
  unsigned int v48; // [esp+2Ch] [ebp-38h]
  _DWORD *v49; // [esp+30h] [ebp-34h]
  LPVOID lpMem; // [esp+34h] [ebp-30h]
  const CHAR *v51; // [esp+38h] [ebp-2Ch]
  _BYTE *v52; // [esp+3Ch] [ebp-28h]
  LPCSTR lpMultiByteStr; // [esp+40h] [ebp-24h]
  LPVOID v54; // [esp+44h] [ebp-20h]
  LPVOID v55; // [esp+48h] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+4Ch] [ebp-18h]

  v1 = (int)a1;
  v2 = 0;
  v49 = a1;
  v3 = 0;
  v55 = 0;
  v4 = a1[42];
  v54 = 0;
  lpMultiByteStr = 0;
  v40 = (int)a1;
  v41 = 0;
  if ( v4 )
  {
    lpMem = 0;
    if ( !a1[2] && sub_10033659((int)&v40, 0, v4, 0x1004u, (int)(a1 + 2)) )
      goto LABEL_51;
    lpMem = (LPVOID)sub_1003558A(1, 4);
    sub_1003603E(0);
    v55 = (LPVOID)sub_1003558A(384, 2);
    sub_1003603E(0);
    v54 = (LPVOID)sub_1003558A(384, 1);
    sub_1003603E(0);
    v3 = sub_1003558A(384, 1);
    v52 = (_BYTE *)v3;
    sub_1003603E(0);
    lpMultiByteStr = (LPCSTR)sub_1003558A(257, 1);
    sub_1003603E(0);
    if ( !lpMem )
      goto LABEL_51;
    if ( !v55 )
      goto LABEL_51;
    v5 = lpMultiByteStr;
    if ( !lpMultiByteStr )
      goto LABEL_51;
    if ( !v54 )
      goto LABEL_51;
    if ( !v3 )
      goto LABEL_51;
    v6 = 0;
    do
    {
      v5[v6] = v6;
      ++v6;
    }
    while ( v6 < 256 );
    if ( !GetCPInfo(a1[2], &CPInfo) || CPInfo.MaxCharSize > 5 )
      goto LABEL_51;
    v48 = LOWORD(CPInfo.MaxCharSize);
    if ( LOWORD(CPInfo.MaxCharSize) > 1u )
    {
      if ( a1[2] == 65001 )
      {
        sub_10034388(lpMultiByteStr + 128, 32, 128);
      }
      else
      {
        v7 = CPInfo.LeadByte;
        if ( CPInfo.LeadByte[0] )
        {
          v8 = lpMultiByteStr;
          do
          {
            v9 = v7[1];
            if ( !v9 )
              break;
            v10 = *v7;
            if ( v10 <= (unsigned int)v9 )
            {
              do
                v8[v10++] = 32;
              while ( v10 <= v7[1] );
            }
            v7 += 2;
          }
          while ( *v7 );
          v1 = (int)v49;
        }
      }
    }
    v11 = *(_DWORD *)(v1 + 8);
    v12 = *(_DWORD *)(v1 + 168);
    v51 = lpMultiByteStr + 1;
    if ( !sub_10035D23(0, v12, 0x100u, lpMultiByteStr + 1, 255, (LPWSTR)((char *)v54 + 129), 255, v11, 0)
      || !sub_10035D23(0, *(_DWORD *)(v1 + 168), 0x200u, v51, 255, (LPWSTR)(v3 + 129), 255, *(_DWORD *)(v1 + 8), 0)
      || (v13 = *(_DWORD *)(v1 + 8),
          v45 = (char *)v55 + 256,
          !sub_100331CC(0, 1u, lpMultiByteStr, 256, (LPWORD)v55 + 128, v13, 0)) )
    {
LABEL_51:
      sub_1003603E(lpMem);
      sub_1003603E(v55);
      sub_1003603E(v54);
      sub_1003603E((LPVOID)v3);
      v2 = 1;
LABEL_45:
      sub_1003603E((LPVOID)lpMultiByteStr);
      return v2;
    }
    v14 = v55;
    v15 = v48 < 1;
    v16 = v48 == 1;
    v17 = v54;
    v18 = (char *)v55 + 254;
    *v18 = 0;
    v19 = v52;
    v44 = v18;
    v17[127] = 0;
    v43 = v17 + 128;
    v19[127] = 0;
    v17[128] = 0;
    v42 = v19 + 128;
    v19[128] = 0;
    if ( !v15 && !v16 )
    {
      if ( *(_DWORD *)(v1 + 8) == 65001 )
      {
        v52 = v14 + 256;
        v20 = v19 + 256;
        v21 = v17 - v19;
        v51 = (const CHAR *)(-128 - (_DWORD)v19);
        do
        {
          v22 = v52;
          v52 += 2;
          *v22 = (unsigned int)&v20[-322 - (_DWORD)v19] > 0x32 ? 0 : -32768;
          v23 = v51;
          v24 = (_BYTE)v20 + (_BYTE)v51;
          v20[v21] = (_BYTE)v20 + (_BYTE)v51;
          *v20++ = v24;
        }
        while ( (_DWORD)&v20[(signed int)v23] <= 255 );
LABEL_39:
        v14 = v55;
        v2 = 0;
        goto LABEL_40;
      }
      v25 = CPInfo.LeadByte;
      if ( CPInfo.LeadByte[0] )
      {
        v26 = (char *)v55;
        do
        {
          v27 = v25[1];
          if ( !v27 )
            break;
          v28 = *v25;
          if ( v28 <= (unsigned int)v27 )
          {
            v51 = &v19[v28 + 128];
            v29 = (int)(v26 + 256);
            v30 = &v19[v28 + 128];
            v46 = v17 - v19;
            v31 = (_WORD *)(v29 + 2 * v28);
            v32 = v46;
            v47 = v29 + 2 * v28;
            do
            {
              *v31 = -32768;
              ++v31;
              v30[v32] = v28;
              *v30++ = v28++;
            }
            while ( v28 <= v25[1] );
            v19 = v52;
            v17 = v54;
            v26 = (char *)v55;
          }
          v25 += 2;
        }
        while ( *v25 );
        goto LABEL_39;
      }
    }
LABEL_40:
    v33 = v55;
    v34 = (char *)v54;
    qmemcpy(v55, v14 + 256, 0xFCu);
    v33[126] = v14[382];
    qmemcpy(v34, v34 + 256, 0x7Fu);
    qmemcpy(v19, v19 + 256, 0x7Fu);
    v35 = (int)v49;
    v36 = (volatile signed __int32 *)v49[35];
    if ( v36 )
    {
      if ( !_InterlockedExchangeAdd(v36, 0xFFFFFFFF) )
      {
        sub_1003603E((LPVOID)(*(_DWORD *)(v35 + 144) - 254));
        sub_1003603E((LPVOID)(*(_DWORD *)(v35 + 148) - 128));
        sub_1003603E((LPVOID)(*(_DWORD *)(v35 + 152) - 128));
        sub_1003603E(*(LPVOID *)(v35 + 140));
      }
    }
    v37 = lpMem;
    *(_DWORD *)lpMem = 1;
    *(_DWORD *)(v35 + 140) = v37;
    *(_DWORD *)v35 = v45;
    *(_DWORD *)(v35 + 144) = v44;
    *(_DWORD *)(v35 + 148) = v43;
    *(_DWORD *)(v35 + 152) = v42;
    *(_DWORD *)(v35 + 4) = v48;
    goto LABEL_45;
  }
  v39 = (volatile signed __int32 *)a1[35];
  if ( v39 )
    _InterlockedDecrement(v39);
  a1[35] = 0;
  result = 0;
  a1[36] = 0;
  *a1 = asc_100A6F80;
  a1[37] = &unk_100A72A0;
  a1[38] = &unk_100A7470;
  a1[1] = 1;
  return result;
}
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 100A6F80: using guessed type wchar_t asc_100A6F80[33];

//----- (10089A33) --------------------------------------------------------
signed int __cdecl sub_10089A33(_BYTE *a1, unsigned int a2, unsigned int *a3, int a4)
{
  unsigned int v4; // ecx
  char v6; // bl
  signed int v7; // esi
  signed int v8; // edi
  char v9; // al
  signed int v10; // [esp-Ch] [ebp-Ch]

  if ( !a1 )
  {
    v4 = 0;
LABEL_3:
    *a3 = v4;
    a3[1] = v4;
    return 1;
  }
  v4 = a2;
  if ( !a2 )
  {
    *a1 = a2;
    goto LABEL_3;
  }
  if ( !(a2 & 0xFFFFFF80) )
  {
    *a1 = a2;
    return 1;
  }
  if ( !(a2 & 0xFFFFF800) )
  {
    v6 = -64;
    v7 = 1;
    goto LABEL_19;
  }
  if ( a2 & 0xFFFF0000 )
  {
    if ( !(a2 & 0xFFE00000) && a2 <= 0x10FFFF )
    {
      v10 = 3;
      v6 = -16;
      goto LABEL_18;
    }
    return sub_10035EEA(a3, a4);
  }
  if ( a2 >= 0xD800 && a2 <= 0xDFFF )
    return sub_10035EEA(a3, a4);
  v10 = 2;
  v6 = -32;
LABEL_18:
  v7 = v10;
LABEL_19:
  v8 = v7;
  do
  {
    v9 = v4;
    v4 >>= 6;
    a1[v8--] = v9 & 0x3F | 0x80;
  }
  while ( v8 );
  *a1 = v6 | v4;
  return sub_100362B4(v7 + 1, a3);
}
// 10035EEA: using guessed type _DWORD __cdecl sub_10035EEA(_DWORD, _DWORD);
// 100362B4: using guessed type _DWORD __cdecl sub_100362B4(_DWORD, _DWORD);

//----- (10089B53) --------------------------------------------------------
int __stdcall sub_10089B53(_BYTE *a1)
{
  if ( !*a1 )
    return 1;
  if ( a1[1] )
    return (a1[2] != 0) + 3;
  return 2;
}

//----- (10089B8A) --------------------------------------------------------
unsigned int __cdecl sub_10089B8A(signed __int16 *a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // ecx
  unsigned int v6; // edx
  signed __int16 v7; // cx
  unsigned int v9; // [esp+0h] [ebp-4h]

  v9 = v5;
  v6 = sub_100347F7(&v9, a2, a3, a4, a5);
  if ( v6 <= 4 )
  {
    v7 = v9;
    if ( v9 > 0xFFFF )
      v7 = -3;
    if ( a1 )
      *a1 = v7;
  }
  return v6;
}
// 100347F7: using guessed type _DWORD __cdecl sub_100347F7(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10089BDD) --------------------------------------------------------
signed int __cdecl sub_10089BDD(_WORD *a1, _BYTE **a2, unsigned int a3, int a4, int a5)
{
  _BYTE *v5; // edi
  unsigned int v6; // ebx
  _WORD *v7; // esi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // esi
  signed int result; // eax
  int i; // eax
  unsigned int v14; // [esp+Ch] [ebp-8h]

  v5 = *a2;
  if ( a1 )
  {
    v6 = a3;
    v7 = a1;
    if ( a3 )
    {
      while ( 1 )
      {
        v8 = sub_10089B53(v5);
        v9 = sub_100347F7(&v14, v5, v8, a4, a5);
        if ( v9 == -1 )
          break;
        if ( !v9 )
        {
          v5 = 0;
          *v7 = 0;
          goto LABEL_9;
        }
        LOWORD(v10) = v14;
        if ( v14 > 0xFFFF )
        {
          if ( v6 <= 1 )
            goto LABEL_9;
          v10 = v14 - 0x10000;
          --v6;
          v14 = v10;
          *v7 = (v10 >> 10) | 0xD800;
          ++v7;
          LOWORD(v10) = v10 & 0x3FF | 0xDC00;
        }
        *v7 = v10;
        v5 += v9;
        ++v7;
        if ( !--v6 )
          goto LABEL_9;
      }
      *a2 = v5;
      *(_BYTE *)(a5 + 28) = 1;
      *(_DWORD *)(a5 + 24) = 42;
      result = -1;
    }
    else
    {
LABEL_9:
      v11 = v7 - a1;
      *a2 = v5;
LABEL_10:
      result = v11;
    }
  }
  else
  {
    v11 = 0;
    for ( i = sub_10089B53(v5); ; i = sub_10089B53(v5) )
    {
      result = sub_100347F7(0, v5, i, a4, a5);
      if ( result == -1 )
        break;
      if ( !result )
        goto LABEL_10;
      if ( result == 4 )
        ++v11;
      v5 += result;
      ++v11;
    }
    *(_BYTE *)(a5 + 28) = 1;
    *(_DWORD *)(a5 + 24) = 42;
  }
  return result;
}
// 100347F7: using guessed type _DWORD __cdecl sub_100347F7(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10089D27) --------------------------------------------------------
int __cdecl sub_10089D27(int a1, LPWSTR lpWideCharStr, LPCSTR a3, int a4, LPCSTR lpMultiByteStr, int a6)
{
  _DWORD *v6; // eax
  int v7; // eax
  int result; // eax
  signed int v9; // ecx
  CHAR *v10; // edx
  int v11; // ecx
  UINT CodePage; // [esp+14h] [ebp-18h]
  unsigned int v13; // [esp+18h] [ebp-14h]

  if ( lpWideCharStr )
    *lpWideCharStr = 0;
  if ( !a3 || !a4 || !*a3 )
  {
    if ( a1 )
      *(_DWORD *)a1 = 0;
    return 0;
  }
  if ( !*(_BYTE *)(a6 + 20) )
    sub_100343EC(a6);
  v6 = *(_DWORD **)(a6 + 12);
  CodePage = v6[2];
  if ( CodePage == 65001 )
  {
    v7 = sub_1003345B(lpWideCharStr, a3, a4, lpMultiByteStr, a6);
    if ( a1 )
      *(_DWORD *)a1 = v7;
    if ( *(_BYTE *)(a6 + 28) )
      return *(_DWORD *)(a6 + 24);
    return 0;
  }
  v9 = v6[1];
  v13 = v6[1];
  if ( !v6[42] )
  {
    if ( lpWideCharStr )
      *lpWideCharStr = *(unsigned __int8 *)a3;
    goto LABEL_40;
  }
  v10 = (CHAR *)lpMultiByteStr;
  if ( *(_DWORD *)lpMultiByteStr )
  {
    *((_BYTE *)lpMultiByteStr + 1) = *a3;
    if ( v9 > 1 )
    {
      if ( sub_100336B8(*(_DWORD *)(*(_DWORD *)(a6 + 12) + 8), 9, lpMultiByteStr, 2, lpWideCharStr, lpWideCharStr != 0) )
      {
        *(_DWORD *)lpMultiByteStr = 0;
        goto LABEL_37;
      }
      v10 = (CHAR *)lpMultiByteStr;
    }
LABEL_21:
    *(_DWORD *)v10 = 0;
    goto LABEL_22;
  }
  v10 = (CHAR *)lpMultiByteStr;
  if ( *(_WORD *)(*v6 + 2 * *(unsigned __int8 *)a3) < 0 )
  {
    if ( a4 < v13 )
    {
      *lpMultiByteStr = *a3;
      if ( a1 )
        *(_DWORD *)a1 = -2;
      return 0;
    }
    if ( (signed int)v13 > 1 )
    {
      v11 = 0x7FFFFFFF;
      if ( strlen(a3) < 0x7FFFFFFF )
        v11 = strlen(a3);
      if ( sub_100336B8(CodePage, 9, a3, v11, lpWideCharStr, lpWideCharStr != 0) )
        goto LABEL_37;
      v10 = (CHAR *)lpMultiByteStr;
    }
    if ( a3[1] )
    {
LABEL_37:
      if ( a1 )
        *(_DWORD *)a1 = v13;
      return 0;
    }
    goto LABEL_21;
  }
  if ( sub_100336B8(CodePage, 9, a3, 1, lpWideCharStr, lpWideCharStr != 0) )
  {
LABEL_40:
    if ( a1 )
      *(_DWORD *)a1 = 1;
    return 0;
  }
LABEL_22:
  if ( lpWideCharStr )
    *lpWideCharStr = 0;
  if ( a1 )
    *(_DWORD *)a1 = -1;
  result = 42;
  *(_BYTE *)(a6 + 28) = 1;
  *(_DWORD *)(a6 + 24) = 42;
  return result;
}
// 1003345B: using guessed type _DWORD __cdecl sub_1003345B(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);

//----- (10089FC5) --------------------------------------------------------
int __cdecl sub_10089FC5(LPWSTR lpWideCharStr, int a2, int a3, LPCSTR lpMultiByteStr, int a5)
{
  int v5; // edx
  const CHAR *v7; // edi
  signed int v8; // ebx
  int v9; // ecx
  WCHAR *v10; // eax
  int v11; // eax
  bool v12; // zf
  int v13; // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h]
  WCHAR WideCharStr[2]; // [esp+18h] [ebp-10h]

  v5 = a2;
  if ( !a2 )
  {
    *(_BYTE *)(a5 + 28) = 1;
    *(_DWORD *)(a5 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a5);
    return -1;
  }
  v7 = *(const CHAR **)a2;
  v8 = 0;
  v14 = 0;
  if ( !lpMultiByteStr )
    lpMultiByteStr = (LPCSTR)&unk_100B2280;
  v9 = a5;
  if ( !*(_BYTE *)(a5 + 20) )
  {
    sub_100343EC(a5);
    v9 = a5;
    v5 = a2;
  }
  if ( *(_DWORD *)(*(_DWORD *)(v9 + 12) + 8) == 65001 )
    return sub_10034D01(lpWideCharStr, v5, a3, lpMultiByteStr, v9);
  v10 = lpWideCharStr;
  *(_DWORD *)WideCharStr = lpWideCharStr;
  if ( lpWideCharStr )
  {
    v13 = a3;
    if ( a3 )
    {
      while ( 1 )
      {
        sub_10089D27((int)&v14, v10, v7, 0x7FFFFFFF, lpMultiByteStr, v9);
        if ( v14 < 0 )
          break;
        if ( !v14 )
        {
          v7 = 0;
          goto LABEL_22;
        }
        v9 = a5;
        v7 += v14;
        ++v8;
        v10 = (WCHAR *)(*(_DWORD *)WideCharStr + 2);
        v12 = v13-- == 1;
        *(_DWORD *)WideCharStr += 2;
        if ( v12 )
          goto LABEL_22;
      }
      v8 = -1;
    }
LABEL_22:
    *(_DWORD *)a2 = v7;
  }
  else
  {
    sub_10089D27((int)&v14, WideCharStr, v7, 0x7FFFFFFF, lpMultiByteStr, v9);
    v11 = v14;
    v12 = v14 == 0;
    if ( v14 < 0 )
      return -1;
    while ( !v12 )
    {
      v7 += v11;
      ++v8;
      sub_10089D27((int)&v14, WideCharStr, v7, 0x7FFFFFFF, lpMultiByteStr, a5);
      v11 = v14;
      v12 = v14 == 0;
      if ( v14 < 0 )
        return -1;
    }
  }
  return v8;
}
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034D01: using guessed type _DWORD __cdecl sub_10034D01(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1008A17A) --------------------------------------------------------
int __cdecl sub_1008A17A(int a1, LPWSTR lpWideCharStr, int a3, int a4, int a5, LPCSTR lpMultiByteStr, int a7)
{
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax

  if ( a1 )
    *(_DWORD *)a1 = -1;
  if ( lpWideCharStr )
  {
    if ( !a3 )
    {
LABEL_7:
      *(_BYTE *)(a7 + 28) = 1;
      *(_DWORD *)(a7 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, a7);
      return 22;
    }
    *lpWideCharStr = 0;
  }
  else if ( a3 )
  {
    goto LABEL_7;
  }
  if ( !a4 )
  {
    *(_BYTE *)(a7 + 28) = 1;
    *(_DWORD *)(a7 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a7);
    return 22;
  }
  v8 = a5;
  if ( a5 > (unsigned int)a3 )
    v8 = a3;
  v9 = sub_10089FC5(lpWideCharStr, a4, v8, lpMultiByteStr, a7);
  if ( v9 == -1 )
  {
    if ( lpWideCharStr )
      *lpWideCharStr = 0;
    if ( *(_BYTE *)(a7 + 28) )
      return *(_DWORD *)(a7 + 24);
  }
  else
  {
    v10 = v9 + 1;
    if ( lpWideCharStr )
    {
      if ( v10 <= a3 )
        lpWideCharStr[v10 - 1] = 0;
      else
        *lpWideCharStr = 0;
    }
    if ( a1 )
      *(_DWORD *)a1 = v10;
  }
  return 0;
}
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (1008A473) --------------------------------------------------------
int sub_1008A473()
{
  signed int i; // esi
  int v1; // eax
  int v3; // [esp+14h] [ebp-1Ch]

  v3 = 0;
  sub_100360E8(8);
  for ( i = 3; i != dword_100B1CB8; ++i )
  {
    v1 = *((_DWORD *)lpMem + i);
    if ( v1 )
    {
      if ( (*(_DWORD *)(v1 + 12) >> 13) & 1 )
      {
        if ( sub_10033F55(*((_DWORD *)lpMem + i)) != -1 )
          ++v3;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)lpMem + i) + 32));
      sub_1003603E(*((LPVOID *)lpMem + i));
      *((_DWORD *)lpMem + i) = 0;
    }
  }
  sub_10033799(8);
  return v3;
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 10033F55: using guessed type _DWORD __cdecl sub_10033F55(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);
// 100B1CB8: using guessed type int dword_100B1CB8;

//----- (1008A557) --------------------------------------------------------
unsigned __int32 __cdecl sub_1008A557(int a1)
{
  volatile signed __int32 *v1; // edi
  volatile unsigned __int32 result; // eax

  v1 = (volatile signed __int32 *)(a1 + 12);
  result = *(_DWORD *)(a1 + 12) >> 13;
  if ( result & 1 )
  {
    result = (volatile unsigned __int32)*v1 >> 6;
    if ( result & 1 )
    {
      sub_1003603E(*(LPVOID *)(a1 + 4));
      _InterlockedAnd(v1, 0xFFFFFEBF);
      result = 0;
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
  }
  return result;
}

//----- (1008A5A7) --------------------------------------------------------
signed int __cdecl sub_1008A5A7(unsigned __int8 a1, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  char v6; // al
  bool v7; // zf

  sub_10035DFA(a2);
  if ( !(*(_DWORD *)(a2 + 12) & 6) )
  {
    v3 = a3;
    *(_DWORD *)(a3 + 24) = 9;
LABEL_3:
    *(_BYTE *)(v3 + 28) = 1;
    v4 = a2;
LABEL_4:
    _InterlockedOr((volatile signed __int32 *)(v4 + 12), 0x10u);
    return -1;
  }
  if ( (*(_DWORD *)(a2 + 12) >> 12) & 1 )
  {
    v3 = a3;
    *(_DWORD *)(a3 + 24) = 34;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a2 + 12) & 1 )
  {
    v6 = sub_1008AA30((_DWORD *)a2);
    *(_DWORD *)(a2 + 8) = 0;
    v7 = v6 == 0;
    v4 = a2;
    if ( v7 )
      goto LABEL_4;
    *(_DWORD *)a2 = *(_DWORD *)(a2 + 4);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 12), 0xFFFFFFFE);
  }
  _InterlockedOr((volatile signed __int32 *)(a2 + 12), 2u);
  _InterlockedAnd((volatile signed __int32 *)(a2 + 12), 0xFFFFFFF7);
  *(_DWORD *)(a2 + 8) = 0;
  if ( !(*(_DWORD *)(a2 + 12) & 0x4C0) && !(unsigned __int8)sub_1003571A(a2) )
    sub_10033933(a2);
  if ( sub_1008A812(a1, a2, a3) )
    return a1;
  _InterlockedOr((volatile signed __int32 *)(a2 + 12), 0x10u);
  return -1;
}
// 10033933: using guessed type _DWORD __cdecl sub_10033933(_DWORD);
// 1003571A: using guessed type _DWORD __cdecl sub_1003571A(_DWORD);
// 10035DFA: using guessed type _DWORD __cdecl sub_10035DFA(_DWORD);

//----- (1008A6DA) --------------------------------------------------------
signed int __cdecl sub_1008A6DA(unsigned __int16 a1, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  char v6; // al
  bool v7; // zf

  sub_10035DFA(a2);
  if ( !(*(_DWORD *)(a2 + 12) & 6) )
  {
    v3 = a3;
    *(_DWORD *)(a3 + 24) = 9;
LABEL_3:
    *(_BYTE *)(v3 + 28) = 1;
    v4 = a2;
LABEL_4:
    _InterlockedOr((volatile signed __int32 *)(v4 + 12), 0x10u);
    return 0xFFFF;
  }
  if ( (*(_DWORD *)(a2 + 12) >> 12) & 1 )
  {
    v3 = a3;
    *(_DWORD *)(a3 + 24) = 34;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a2 + 12) & 1 )
  {
    v6 = sub_1008AA30((_DWORD *)a2);
    *(_DWORD *)(a2 + 8) = 0;
    v7 = v6 == 0;
    v4 = a2;
    if ( v7 )
      goto LABEL_4;
    *(_DWORD *)a2 = *(_DWORD *)(a2 + 4);
    _InterlockedAnd((volatile signed __int32 *)(a2 + 12), 0xFFFFFFFE);
  }
  _InterlockedOr((volatile signed __int32 *)(a2 + 12), 2u);
  _InterlockedAnd((volatile signed __int32 *)(a2 + 12), 0xFFFFFFF7);
  *(_DWORD *)(a2 + 8) = 0;
  if ( !(*(_DWORD *)(a2 + 12) & 0x4C0) && !(unsigned __int8)sub_1003571A(a2) )
    sub_10033933(a2);
  if ( sub_1008A918(a1, a2, a3) )
    return a1;
  _InterlockedOr((volatile signed __int32 *)(a2 + 12), 0x10u);
  return 0xFFFF;
}
// 10033933: using guessed type _DWORD __cdecl sub_10033933(_DWORD);
// 1003571A: using guessed type _DWORD __cdecl sub_1003571A(_DWORD);
// 10035DFA: using guessed type _DWORD __cdecl sub_10035DFA(_DWORD);

//----- (1008A812) --------------------------------------------------------
char __cdecl sub_1008A812(char a1, int a2, int a3)
{
  int v3; // edx
  int v4; // edi
  int v5; // eax
  int v6; // esi
  char *v8; // eax
  int v9; // eax
  int v10; // edx

  v3 = sub_10035DFA(a2);
  if ( !(*(_DWORD *)(a2 + 12) & 0xC0) )
    return sub_10034B76(v3, &a1, 1, a3) == 1;
  v4 = 0;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)a2 - v5;
  *(_DWORD *)a2 = v5 + 1;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 24) - 1;
  if ( v6 > 0 )
  {
    v4 = sub_10034B76(v3, *(_DWORD *)(a2 + 4), v6, a3);
LABEL_4:
    **(_BYTE **)(a2 + 4) = a1;
    return v4 == v6;
  }
  if ( v3 == -1 || v3 == -2 )
    v8 = (char *)&unk_100B0460;
  else
    v8 = (char *)lpCriticalSection[v3 >> 6] + 56 * (v3 & 0x3F);
  if ( !(v8[40] & 0x20) )
    goto LABEL_4;
  v9 = sub_10034F9A(v3, 0, 0, 2);
  if ( (v10 & v9) != -1 )
    goto LABEL_4;
  _InterlockedOr((volatile signed __int32 *)(a2 + 12), 0x10u);
  return 1;
}
// 10034B76: using guessed type _DWORD __cdecl sub_10034B76(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034F9A: using guessed type _DWORD __cdecl sub_10034F9A(_DWORD, _DWORD, _DWORD, _DWORD);
// 10035DFA: using guessed type _DWORD __cdecl sub_10035DFA(_DWORD);

//----- (1008A918) --------------------------------------------------------
bool __cdecl sub_1008A918(__int16 a1, int a2, int a3)
{
  int v3; // edx
  int v4; // edi
  int v5; // eax
  int v6; // esi
  bool v7; // zf
  char *v8; // eax
  int v9; // eax
  int v10; // edx

  v3 = sub_10035DFA(a2);
  if ( !(*(_DWORD *)(a2 + 12) & 0xC0) )
    return sub_10034B76(v3, &a1, 2, a3) == 2;
  v4 = 0;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)a2 - v5;
  *(_DWORD *)a2 = v5 + 2;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 24) - 2;
  if ( v6 <= 0 )
  {
    if ( v3 == -1 || v3 == -2 )
      v8 = (char *)&unk_100B0460;
    else
      v8 = (char *)lpCriticalSection[v3 >> 6] + 56 * (v3 & 0x3F);
    if ( v8[40] & 0x20 )
    {
      v9 = sub_10034F9A(v3, 0, 0, 2);
      if ( (v10 & v9) == -1 )
      {
        _InterlockedOr((volatile signed __int32 *)(a2 + 12), 0x10u);
        return 1;
      }
    }
  }
  else
  {
    v4 = sub_10034B76(v3, *(_DWORD *)(a2 + 4), v6, a3);
  }
  v7 = v4 == v6;
  **(_WORD **)(a2 + 4) = a1;
  return v7;
}
// 10034B76: using guessed type _DWORD __cdecl sub_10034B76(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034F9A: using guessed type _DWORD __cdecl sub_10034F9A(_DWORD, _DWORD, _DWORD, _DWORD);
// 10035DFA: using guessed type _DWORD __cdecl sub_10035DFA(_DWORD);

//----- (1008AA30) --------------------------------------------------------
char __cdecl sub_1008AA30(_DWORD *a1)
{
  void *v2; // esi
  char v3; // bl
  LARGE_INTEGER FileSize; // [esp+0h] [ebp-10h]
  LARGE_INTEGER NewFilePointer; // [esp+8h] [ebp-8h]

  if ( (a1[3] >> 3) & 1 )
    return 1;
  if ( a1[3] & 0xC0 && *a1 == a1[1] )
    return 0;
  v2 = (void *)sub_10034F63(a1[4]);
  if ( v2 == (void *)-1 )
    return 0;
  v3 = 1;
  if ( !SetFilePointerEx(v2, 0i64, &NewFilePointer, 1u) || !GetFileSizeEx(v2, &FileSize) )
    return 0;
  if ( NewFilePointer.QuadPart != FileSize.QuadPart )
    v3 = 0;
  return v3;
}
// 10034F63: using guessed type _DWORD __cdecl sub_10034F63(_DWORD);

//----- (1008AAD6) --------------------------------------------------------
signed int __cdecl sub_1008AAD6(unsigned __int8 a1, int a2, int a3)
{
  return sub_1008A5A7(a1, a2, a3);
}

//----- (1008AAE3) --------------------------------------------------------
signed int __cdecl sub_1008AAE3(unsigned __int16 a1, int a2, int a3)
{
  return sub_1008A6DA(a1, a2, a3);
}

//----- (1008AAF0) --------------------------------------------------------
int __cdecl sub_1008AAF0(unsigned int a1)
{
  if ( a1 == -2 )
  {
    *(_DWORD *)sub_10034888(-2) = 9;
  }
  else
  {
    if ( (a1 & 0x80000000) == 0 && a1 < dword_100B1F48 )
      return *(_BYTE *)(&lpCriticalSection[a1 >> 6][1].LockSemaphore + 14 * (a1 & 0x3F)) & 0x40;
    *(_DWORD *)sub_10034888(a1) = 9;
    sub_10034711();
  }
  return 0;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 100B1F48: using guessed type int dword_100B1F48;

//----- (1008ABB7) --------------------------------------------------------
LPVOID __cdecl sub_1008ABB7(LPVOID *a1)
{
  LPVOID result; // eax

  if ( a1 )
  {
    if ( a1[3] != off_100B0AE4 )
      sub_1003603E(a1[3]);
    if ( a1[4] != off_100B0AE8 )
      sub_1003603E(a1[4]);
    if ( a1[5] != off_100B0AEC )
      sub_1003603E(a1[5]);
    if ( a1[6] != off_100B0AF0 )
      sub_1003603E(a1[6]);
    if ( a1[7] != off_100B0AF4 )
      sub_1003603E(a1[7]);
    if ( a1[8] != off_100B0AF8 )
      sub_1003603E(a1[8]);
    if ( a1[9] != off_100B0AFC )
      sub_1003603E(a1[9]);
    if ( a1[14] != off_100B0B10 )
      sub_1003603E(a1[14]);
    if ( a1[15] != off_100B0B14 )
      sub_1003603E(a1[15]);
    if ( a1[16] != off_100B0B18 )
      sub_1003603E(a1[16]);
    if ( a1[17] != off_100B0B1C )
      sub_1003603E(a1[17]);
    if ( a1[18] != off_100B0B20 )
      sub_1003603E(a1[18]);
    result = a1[19];
    if ( result != off_100B0B24 )
      result = (LPVOID)sub_1003603E(a1[19]);
  }
  return result;
}
// 100B0AE4: using guessed type void *off_100B0AE4;
// 100B0AE8: using guessed type void *off_100B0AE8;
// 100B0AEC: using guessed type void *off_100B0AEC;
// 100B0AF0: using guessed type void *off_100B0AF0;
// 100B0AF4: using guessed type void *off_100B0AF4;
// 100B0AF8: using guessed type void *off_100B0AF8;
// 100B0AFC: using guessed type void *off_100B0AFC;
// 100B0B10: using guessed type void *off_100B0B10;
// 100B0B14: using guessed type void *off_100B0B14;
// 100B0B18: using guessed type void *off_100B0B18;
// 100B0B1C: using guessed type void *off_100B0B1C;
// 100B0B20: using guessed type void *off_100B0B20;
// 100B0B24: using guessed type void *off_100B0B24;

//----- (1008ACF4) --------------------------------------------------------
signed int __cdecl sub_1008ACF4(int a1)
{
  int v1; // esi
  void **v2; // ebx
  LPVOID *v3; // edi
  signed int result; // eax
  int v5; // edi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  int v25; // esi
  _BYTE *v26; // edx
  char v27; // al
  _BYTE *v28; // esi
  char v29; // cl
  volatile signed __int32 *v30; // eax
  volatile signed __int32 *v31; // ecx
  int v32; // [esp+Ch] [ebp-10h]
  int v33; // [esp+10h] [ebp-Ch]
  LPVOID lpMem; // [esp+14h] [ebp-8h]
  LPVOID v35; // [esp+18h] [ebp-4h]

  v1 = a1;
  v32 = a1;
  v35 = 0;
  v33 = 0;
  if ( *(_DWORD *)(a1 + 172) || *(_DWORD *)(a1 + 176) )
  {
    v2 = (void **)sub_1003558A(1, 80);
    sub_1003603E(0);
    if ( !v2 )
      return 1;
    lpMem = (LPVOID)sub_1003558A(1, 4);
    sub_1003603E(0);
    if ( !lpMem )
    {
      sub_1003603E(v2);
      return 1;
    }
    if ( !*(_DWORD *)(a1 + 172) )
    {
      qmemcpy(v2, &off_100B0AD8, 0x50u);
LABEL_25:
      v1 = a1;
      v3 = (LPVOID *)(a1 + 136);
      *v2 = **(void ***)(a1 + 136);
      v2[1] = *(void **)(*(_DWORD *)(a1 + 136) + 4);
      v2[2] = *(void **)(*(_DWORD *)(a1 + 136) + 8);
      v2[12] = *(void **)(*(_DWORD *)(a1 + 136) + 48);
      v2[13] = *(void **)(*(_DWORD *)(a1 + 136) + 52);
      *(_DWORD *)lpMem = 1;
      if ( v35 )
        *(_DWORD *)v35 = 1;
      goto LABEL_27;
    }
    v35 = (LPVOID)sub_1003558A(1, 4);
    sub_1003603E(0);
    if ( !v35 )
    {
      sub_1003603E(v2);
      sub_1003603E(lpMem);
      return 1;
    }
    v5 = *(_DWORD *)(a1 + 172);
    v6 = sub_10033659((int)&v32, 1, *(_DWORD *)(a1 + 172), 0x15u, (int)(v2 + 3));
    v7 = sub_10033659((int)&v32, 1, v5, 0x14u, (int)(v2 + 4)) | v6;
    v8 = sub_10033659((int)&v32, 1, v5, 0x16u, (int)(v2 + 5)) | v7;
    v9 = sub_10033659((int)&v32, 1, v5, 0x17u, (int)(v2 + 6)) | v8;
    v10 = sub_10033659((int)&v32, 1, v5, 0x18u, (int)(v2 + 7)) | v9;
    v11 = sub_10033659((int)&v32, 1, v5, 0x50u, (int)(v2 + 8)) | v10;
    v12 = sub_10033659((int)&v32, 1, v5, 0x51u, (int)(v2 + 9)) | v11;
    v13 = sub_10033659((int)&v32, 0, v5, 0x1Au, (int)(v2 + 10)) | v12;
    v14 = sub_10033659((int)&v32, 0, v5, 0x19u, (int)v2 + 41) | v13;
    v15 = sub_10033659((int)&v32, 0, v5, 0x54u, (int)v2 + 42) | v14;
    v16 = sub_10033659((int)&v32, 0, v5, 0x55u, (int)v2 + 43) | v15;
    v17 = sub_10033659((int)&v32, 0, v5, 0x56u, (int)(v2 + 11)) | v16;
    v18 = sub_10033659((int)&v32, 0, v5, 0x57u, (int)v2 + 45) | v17;
    v19 = sub_10033659((int)&v32, 0, v5, 0x52u, (int)v2 + 46) | v18;
    v20 = sub_10033659((int)&v32, 0, v5, 0x53u, (int)v2 + 47) | v19;
    v21 = sub_10033659((int)&v32, 2, v5, 0x15u, (int)(v2 + 14)) | v20;
    v22 = sub_10033659((int)&v32, 2, v5, 0x14u, (int)(v2 + 15)) | v21;
    v23 = sub_10033659((int)&v32, 2, v5, 0x16u, (int)(v2 + 16)) | v22;
    v24 = sub_10033659((int)&v32, 2, v5, 0x17u, (int)(v2 + 17)) | v23;
    v25 = sub_10033659((int)&v32, 2, v5, 0x50u, (int)(v2 + 18)) | v24;
    if ( v25 | sub_10033659((int)&v32, 2, v5, 0x51u, (int)(v2 + 19)) )
    {
      sub_10034509(v2);
      sub_1003603E(v2);
      sub_1003603E(lpMem);
      sub_1003603E(v35);
      return 1;
    }
    v26 = v2[7];
    while ( 1 )
    {
      v27 = *v26;
      if ( !*v26 )
        goto LABEL_25;
      if ( (unsigned __int8)(v27 - 48) <= 9u )
        break;
      if ( v27 == 59 )
      {
        v28 = v26;
        do
        {
          v29 = v28[1];
          *v28++ = v29;
        }
        while ( v29 );
      }
      else
      {
LABEL_17:
        ++v26;
      }
    }
    *v26 = v27 - 48;
    goto LABEL_17;
  }
  v35 = 0;
  v2 = &off_100B0AD8;
  lpMem = 0;
  v3 = (LPVOID *)(a1 + 136);
LABEL_27:
  v30 = *(volatile signed __int32 **)(v1 + 132);
  if ( v30 )
    _InterlockedDecrement(v30);
  v31 = *(volatile signed __int32 **)(v1 + 124);
  if ( v31 )
  {
    if ( !_InterlockedExchangeAdd(v31, 0xFFFFFFFF) )
    {
      sub_1003603E(*v3);
      sub_1003603E(*(LPVOID *)(v1 + 124));
    }
  }
  *(_DWORD *)(v1 + 132) = v35;
  *(_DWORD *)(v1 + 124) = lpMem;
  result = 0;
  *v3 = v2;
  return result;
}
// 10034509: using guessed type _DWORD __cdecl sub_10034509(_DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 100B0AD8: using guessed type void *off_100B0AD8;

//----- (1008B171) --------------------------------------------------------
LPVOID __cdecl sub_1008B171(LPVOID *a1)
{
  LPVOID result; // eax

  if ( a1 )
  {
    if ( *a1 != off_100B0AD8 )
      sub_1003603E(*a1);
    if ( a1[1] != off_100B0ADC )
      sub_1003603E(a1[1]);
    if ( a1[2] != off_100B0AE0 )
      sub_1003603E(a1[2]);
    if ( a1[12] != off_100B0B08 )
      sub_1003603E(a1[12]);
    result = a1[13];
    if ( result != off_100B0B0C )
      result = (LPVOID)sub_1003603E(a1[13]);
  }
  return result;
}
// 100B0AD8: using guessed type void *off_100B0AD8;
// 100B0ADC: using guessed type void *off_100B0ADC;
// 100B0AE0: using guessed type void *off_100B0AE0;
// 100B0B08: using guessed type void *off_100B0B08;
// 100B0B0C: using guessed type void *off_100B0B0C;

//----- (1008B1F4) --------------------------------------------------------
int __cdecl sub_1008B1F4(int a1)
{
  int v1; // edi
  LPVOID v2; // esi
  void **v3; // ebx
  _DWORD *v5; // ecx
  int v6; // edi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  _BYTE *v11; // edx
  char v12; // al
  _BYTE *v13; // esi
  char v14; // cl
  volatile signed __int32 *v15; // eax
  volatile signed __int32 *v16; // ecx
  LPVOID *v17; // eax
  int v18; // [esp+Ch] [ebp-18h]
  int v19; // [esp+10h] [ebp-14h]
  int v20; // [esp+14h] [ebp-10h]
  LPVOID lpMem; // [esp+18h] [ebp-Ch]
  LPVOID *v22; // [esp+1Ch] [ebp-8h]
  LPVOID v23; // [esp+20h] [ebp-4h]

  v1 = a1;
  v2 = 0;
  v18 = a1;
  v19 = 0;
  if ( !*(_DWORD *)(a1 + 176) && !*(_DWORD *)(a1 + 172) )
  {
    v23 = 0;
    v3 = &off_100B0AD8;
    goto LABEL_25;
  }
  v20 = 1;
  v3 = (void **)sub_1003558A(1, 80);
  if ( !v3 )
    return 1;
  qmemcpy(v3, *(const void **)(a1 + 136), 0x50u);
  v22 = (LPVOID *)(a1 + 136);
  v2 = 0;
  v23 = (LPVOID)sub_10034C52(4u);
  sub_1003603E(0);
  v5 = v23;
  if ( !v23 )
  {
    sub_1003603E(v3);
    return 1;
  }
  v1 = a1;
  *(_DWORD *)v23 = 0;
  if ( *(_DWORD *)(a1 + 176) )
  {
    lpMem = (LPVOID)sub_10034C52(4u);
    sub_1003603E(0);
    if ( !lpMem )
    {
      sub_1003603E(v3);
LABEL_13:
      sub_1003603E(v23);
      return v20;
    }
    *(_DWORD *)lpMem = 0;
    v6 = *(_DWORD *)(a1 + 176);
    v7 = sub_10033659((int)&v18, 1, v6, 0xEu, (int)v3);
    v8 = sub_10033659((int)&v18, 1, v6, 0xFu, (int)(v3 + 1)) | v7;
    v9 = sub_10033659((int)&v18, 1, v6, 0x10u, (int)(v3 + 2)) | v8;
    v10 = sub_10033659((int)&v18, 2, v6, 0xEu, (int)(v3 + 12)) | v9;
    if ( v10 | sub_10033659((int)&v18, 2, v6, 0xFu, (int)(v3 + 13)) )
    {
      sub_100339A6(v3);
      sub_1003603E(v3);
      sub_1003603E(lpMem);
      v20 = -1;
      goto LABEL_13;
    }
    v11 = v3[2];
    while ( 1 )
    {
      v12 = *v11;
      if ( !*v11 )
      {
        v1 = a1;
        *(_DWORD *)v23 = 1;
        v2 = lpMem;
        *(_DWORD *)lpMem = 1;
        goto LABEL_26;
      }
      if ( (unsigned __int8)(v12 - 48) <= 9u )
        break;
      if ( v12 == 59 )
      {
        v13 = v11;
        do
        {
          v14 = v13[1];
          *v13++ = v14;
        }
        while ( v14 );
      }
      else
      {
LABEL_17:
        ++v11;
      }
    }
    *v11 = v12 - 48;
    goto LABEL_17;
  }
  *v3 = off_100B0AD8;
  v3[1] = off_100B0ADC;
  v3[2] = off_100B0AE0;
  v3[12] = off_100B0B08;
  v3[13] = off_100B0B0C;
  *v5 = 1;
LABEL_25:
  v22 = (LPVOID *)(v1 + 136);
LABEL_26:
  v15 = *(volatile signed __int32 **)(v1 + 128);
  if ( v15 )
    _InterlockedDecrement(v15);
  v16 = *(volatile signed __int32 **)(v1 + 124);
  if ( v16 )
  {
    if ( !_InterlockedExchangeAdd(v16, 0xFFFFFFFF) )
    {
      sub_1003603E(*(LPVOID *)(v1 + 124));
      sub_1003603E(*v22);
    }
  }
  *(_DWORD *)(v1 + 124) = v23;
  v17 = v22;
  *(_DWORD *)(v1 + 128) = v2;
  *v17 = v3;
  return 0;
}
// 100339A6: using guessed type _DWORD __cdecl sub_100339A6(_DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 100B0AD8: using guessed type void *off_100B0AD8;
// 100B0ADC: using guessed type void *off_100B0ADC;
// 100B0AE0: using guessed type void *off_100B0AE0;
// 100B0B08: using guessed type void *off_100B0B08;
// 100B0B0C: using guessed type void *off_100B0B0C;

//----- (1008B5B3) --------------------------------------------------------
int __cdecl sub_1008B5B3(LPVOID *a1, int a2)
{
  int result; // eax
  LPVOID *i; // esi

  result = a2;
  for ( i = a1; i != &a1[a2]; ++i )
    result = sub_1003603E(*i);
  return result;
}

//----- (1008B66B) --------------------------------------------------------
bool __cdecl sub_1008B66B(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // ecx
  int v5; // ebx
  LCTYPE v6; // eax
  unsigned int v7; // edi
  int v8; // ebx
  LCTYPE v9; // esi
  int v10; // ebx
  int v11; // ebx
  int v12; // eax
  int v13; // edi
  bool v14; // zf
  LCTYPE v15; // esi
  int v16; // eax
  LCTYPE v17; // esi
  int v18; // ebx
  int v19; // ebx
  int v20; // eax
  LCTYPE v21; // esi
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v33; // [esp+Ch] [ebp-14h]
  int v34; // [esp+10h] [ebp-10h]
  int v35; // [esp+14h] [ebp-Ch]
  LCTYPE v36; // [esp+18h] [ebp-8h]
  LCTYPE LCType; // [esp+1Ch] [ebp-4h]

  v34 = 0;
  v36 = *(_DWORD *)(a2 + 180);
  v2 = v36;
  v33 = a2;
  v3 = sub_1003478E(v36);
  v4 = a1;
  v5 = 0;
  *(_DWORD *)(a1 + 352) = v3;
  v6 = 49;
  LCType = 49;
  v35 = 7;
  while ( 1 )
  {
    v7 = (v6 - 48) % 7;
    v8 = sub_10033659((int)&v33, 1, v2, LCType, v4 + 4 * v7) | v5;
    v9 = LCType - 7;
    v10 = sub_10033659((int)&v33, 1, v36, LCType - 7, a1 + 4 * v7 + 28) | v8;
    v11 = sub_10033659((int)&v33, 2, v36, LCType, a1 + 4 * v7 + 180) | v10;
    v12 = a1 + 4 * v7;
    v13 = v36;
    v5 = sub_10033659((int)&v33, 2, v36, v9, v12 + 208) | v11;
    v6 = LCType + 1;
    v14 = v35-- == 1;
    ++LCType;
    if ( v14 )
      break;
    v4 = a1;
    v2 = v13;
  }
  v15 = 56;
  v16 = a1 + 104;
  v36 = 56;
  LCType = a1 + 104;
  v35 = 12;
  do
  {
    v17 = v15 + 12;
    v18 = sub_10033659((int)&v33, 1, v13, v17, v16 - 48) | v5;
    v19 = sub_10033659((int)&v33, 1, v13, v36, LCType) | v18;
    v20 = sub_10033659((int)&v33, 2, v13, v17, LCType + 132);
    v21 = v36;
    v5 = sub_10033659((int)&v33, 2, v13, v36, LCType + 180) | v20 | v19;
    v16 = LCType + 4;
    v15 = v21 + 1;
    v14 = v35-- == 1;
    LCType += 4;
    v36 = v15;
  }
  while ( !v14 );
  v22 = sub_10033659((int)&v33, 1, v13, 0x28u, a1 + 152) | v5;
  v23 = sub_10033659((int)&v33, 1, v13, 0x29u, a1 + 156) | v22;
  v24 = sub_10033659((int)&v33, 2, v13, 0x28u, a1 + 332) | v23;
  v25 = sub_10033659((int)&v33, 2, v13, 0x29u, a1 + 336) | v24;
  v26 = sub_10033659((int)&v33, 1, v13, 0x1Fu, a1 + 160) | v25;
  v27 = sub_10033659((int)&v33, 1, v13, 0x20u, a1 + 164) | v26;
  v28 = sub_10033659((int)&v33, 1, v13, 0x1003u, a1 + 168) | v27;
  v29 = sub_10033659((int)&v33, 0, v13, 0x1009u, a1 + 172) | v28;
  v30 = sub_10033659((int)&v33, 2, v13, 0x1Fu, a1 + 340) | v29;
  v31 = sub_10033659((int)&v33, 2, v13, 0x20u, a1 + 344) | v30;
  return (v31 | sub_10033659((int)&v33, 2, v13, 0x1003u, a1 + 348)) == 0;
}
// 1003478E: using guessed type _DWORD __cdecl sub_1003478E(_DWORD);

//----- (1008B9A3) --------------------------------------------------------
int __cdecl sub_1008B9A3(LPVOID *a1)
{
  int result; // eax

  if ( a1 )
  {
    sub_1008B5B3(a1, 7);
    sub_1008B5B3(a1 + 7, 7);
    sub_1008B5B3(a1 + 14, 12);
    sub_1008B5B3(a1 + 26, 12);
    sub_1008B5B3(a1 + 38, 2);
    sub_1003603E(a1[40]);
    sub_1003603E(a1[41]);
    sub_1003603E(a1[42]);
    sub_1008B5B3(a1 + 45, 7);
    sub_1008B5B3(a1 + 52, 7);
    sub_1008B5B3(a1 + 59, 12);
    sub_1008B5B3(a1 + 71, 12);
    sub_1008B5B3(a1 + 83, 2);
    sub_1003603E(a1[85]);
    sub_1003603E(a1[86]);
    sub_1003603E(a1[87]);
    result = sub_1003603E(a1[88]);
  }
  return result;
}

//----- (1008BAC0) --------------------------------------------------------
signed int __cdecl sub_1008BAC0(int a1)
{
  void **v1; // edi
  void **v2; // esi
  int v3; // eax

  v1 = 0;
  if ( *(_DWORD *)(a1 + 180) )
  {
    v3 = sub_1003558A(1, 356);
    v2 = (void **)v3;
    if ( v3 )
    {
      if ( sub_1008B66B(v3, a1) )
      {
        v2[44] = (void *)1;
        sub_1003603E(0);
        goto LABEL_8;
      }
      sub_10036381(v2);
      v1 = v2;
    }
    sub_1003603E(v1);
    return 1;
  }
  v2 = &off_100A5DD8;
LABEL_8:
  sub_1003320D(*(_DWORD *)(a1 + 156));
  *(_DWORD *)(a1 + 156) = v2;
  return 0;
}
// 1003320D: using guessed type _DWORD __cdecl sub_1003320D(_DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 10036381: using guessed type _DWORD __cdecl sub_10036381(_DWORD);
// 100A5DD8: using guessed type void *off_100A5DD8;

//----- (1008BB59) --------------------------------------------------------
signed int __cdecl sub_1008BB59(char *a1, int a2, __int16 *a3, int a4)
{
  signed int *v4; // eax
  __int16 *v6; // ebx
  int v7; // esi
  char *v8; // edx
  int v9; // eax
  int v10; // ebx
  __int16 v11; // ax
  __int16 v12; // ax
  signed int v13; // [esp-4h] [ebp-14h]
  int v14; // [esp+Ch] [ebp-4h]

  if ( a4 )
  {
    if ( !a1 )
      goto LABEL_4;
  }
  else if ( !a1 )
  {
    if ( a2 )
    {
LABEL_4:
      v4 = (signed int *)sub_10034888(a1);
      v13 = 22;
LABEL_5:
      *v4 = v13;
      sub_10034711();
      return v13;
    }
    return 0;
  }
  if ( !a2 )
    goto LABEL_4;
  v6 = a3;
  if ( a4 && !a3 )
  {
LABEL_11:
    *(_WORD *)a1 = 0;
    goto LABEL_4;
  }
  v7 = a2;
  v14 = a4;
  v8 = a1;
  v9 = a4;
  while ( *(_WORD *)v8 )
  {
    v8 += 2;
    if ( !--v7 )
      goto LABEL_11;
  }
  if ( a4 == -1 )
  {
    v10 = (char *)a3 - v8;
    do
    {
      v11 = *(_WORD *)&v8[v10];
      *(_WORD *)v8 = v11;
      v8 += 2;
      if ( !v11 )
        break;
      --v7;
    }
    while ( v7 );
  }
  else
  {
    if ( a4 )
    {
      while ( 1 )
      {
        v12 = *v6;
        ++v6;
        *(_WORD *)v8 = v12;
        v8 += 2;
        if ( !v12 )
          return 0;
        v9 = v14;
        if ( --v7 )
        {
          v9 = v14 - 1;
          v14 = v9;
          if ( v9 )
            continue;
        }
        break;
      }
    }
    if ( !v9 )
      *(_WORD *)v8 = 0;
  }
  if ( v7 )
    return 0;
  if ( a4 != -1 )
  {
    *(_WORD *)a1 = 0;
    v4 = (signed int *)sub_10034888(a1);
    v13 = 34;
    goto LABEL_5;
  }
  *(_WORD *)&a1[2 * a2 - 2] = 0;
  return 80;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (1008BC7B) --------------------------------------------------------
signed int __cdecl sub_1008BC7B(char *a1, int a2, __int16 *a3, int a4)
{
  return sub_1008BB59(a1, a2, a3, a4);
}

//----- (1008BC88) --------------------------------------------------------
signed int __cdecl sub_1008BC88(_WORD *a1, int a2, int a3, int a4)
{
  signed int *v4; // eax
  int v6; // ebx
  _WORD *v7; // edx
  int v8; // edi
  __int16 v9; // ax
  __int16 v10; // ax
  int v11; // eax
  signed int v12; // [esp-4h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-4h]

  if ( a4 )
  {
    if ( !a1 )
      goto LABEL_4;
  }
  else if ( !a1 )
  {
    if ( a2 )
      goto LABEL_4;
    return 0;
  }
  if ( a2 )
  {
    if ( !a4 )
    {
      *a1 = 0;
      return 0;
    }
    if ( a3 )
    {
      v6 = a3 - (_DWORD)a1;
      v13 = a4;
      v7 = a1;
      v8 = a2;
      if ( a4 == -1 )
      {
        while ( 1 )
        {
          v9 = *(_WORD *)((char *)v7 + v6);
          *v7 = v9;
          ++v7;
          if ( !v9 )
            break;
          if ( !--v8 )
            goto LABEL_23;
        }
      }
      else
      {
        while ( 1 )
        {
          v10 = *(_WORD *)((char *)v7 + v6);
          *v7 = v10;
          ++v7;
          if ( !v10 )
            break;
          v11 = v13;
          if ( --v8 )
          {
            v11 = v13 - 1;
            v13 = v11;
            if ( v11 )
              continue;
          }
          if ( !v11 )
            *v7 = 0;
LABEL_23:
          if ( v8 )
            return 0;
          if ( a4 == -1 )
          {
            a1[a2 - 1] = 0;
            return 80;
          }
          *a1 = 0;
          v4 = (signed int *)sub_10034888(a1);
          v12 = 34;
          goto LABEL_5;
        }
      }
      return 0;
    }
    *a1 = 0;
  }
LABEL_4:
  v4 = (signed int *)sub_10034888(a1);
  v12 = 22;
LABEL_5:
  *v4 = v12;
  sub_10034711();
  return v12;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (1008BD89) --------------------------------------------------------
signed int __cdecl sub_1008BD89(_WORD *a1, int a2, int a3, int a4)
{
  return sub_1008BC88(a1, a2, a3, a4);
}

//----- (1008BD96) --------------------------------------------------------
int __cdecl sub_1008BD96(_WORD *a1, __int16 *a2)
{
  _WORD *v2; // edx
  _WORD *v3; // ecx
  __int16 *v4; // edi
  __int16 v5; // ax

  v2 = a1;
  v3 = a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v4 = a2;
      if ( *a2 )
        break;
LABEL_6:
      ++v3;
      if ( !*v3 )
        return v3 - v2;
    }
    v5 = *a2;
    while ( *v3 != v5 )
    {
      ++v4;
      v5 = *v4;
      v2 = a1;
      if ( !*v4 )
        goto LABEL_6;
    }
  }
  return v3 - v2;
}

//----- (1008BE05) --------------------------------------------------------
__int16 *__cdecl sub_1008BE05(__int16 *a1, __int16 *a2)
{
  __int16 *v2; // ecx
  __int16 *v3; // esi
  __int16 v4; // ax
  __int16 v5; // bx

  v2 = a1;
  if ( !*a1 )
    return 0;
  while ( 1 )
  {
    v3 = a2;
    if ( *a2 )
      break;
LABEL_6:
    ++v2;
    if ( !*v2 )
      return 0;
  }
  v4 = *v2;
  v5 = *a2;
  while ( v5 != v4 )
  {
    ++v3;
    v5 = *v3;
    v4 = *v2;
    if ( !*v3 )
      goto LABEL_6;
  }
  return v2;
}

//----- (1008BECE) --------------------------------------------------------
BOOL __cdecl sub_1008BECE(int a1, DWORD dwInfoType, LPCSTR lpMultiByteStr, int cbMultiByte, LPWORD lpCharType, UINT CodePage, int a7)
{
  UINT v7; // ebx
  BOOL v8; // edi
  int v9; // eax
  unsigned int v10; // eax
  SIZE_T v11; // eax
  WCHAR *v12; // esi
  WCHAR *v13; // eax
  int v14; // eax
  char v16; // [esp+0h] [ebp-28h]
  int v17; // [esp+Ch] [ebp-1Ch]
  int v18; // [esp+10h] [ebp-18h]
  char v19; // [esp+18h] [ebp-10h]
  int cchWideChar; // [esp+1Ch] [ebp-Ch]
  unsigned int v21; // [esp+20h] [ebp-8h]

  sub_10035A08(a1);
  v7 = CodePage;
  if ( !CodePage )
    v7 = *(_DWORD *)(v18 + 8);
  v8 = 0;
  v9 = sub_100336B8(v7, 8 * (a7 != 0) + 1, lpMultiByteStr, cbMultiByte, 0, 0);
  cchWideChar = v9;
  if ( v9 )
  {
    v10 = 2 * v9;
    v21 = v10;
    v11 = v10 < v10 + 8 ? v10 + 8 : 0;
    if ( v11 )
    {
      if ( v11 > 0x400 )
      {
        v13 = (WCHAR *)sub_10034C52(v11);
        v12 = v13;
        if ( v13 )
        {
          *(_DWORD *)v13 = 56797;
          goto LABEL_10;
        }
      }
      else
      {
        sub_10034572(v16);
        v12 = (WCHAR *)&v16;
        if ( &v16 )
        {
          *(_DWORD *)&v16 = 52428;
LABEL_10:
          v12 += 4;
          if ( v12 )
          {
            sub_10034388(v12, 0, v21);
            v14 = sub_100336B8(v7, 1, lpMultiByteStr, cbMultiByte, v12, cchWideChar);
            if ( v14 )
              v8 = GetStringTypeW(dwInfoType, v12, v14, lpCharType);
          }
          goto LABEL_14;
        }
      }
    }
    else
    {
      v12 = 0;
    }
LABEL_14:
    sub_10033249(v12);
  }
  if ( v19 )
    *(_DWORD *)(v17 + 848) &= 0xFFFFFFFD;
  return v8;
}
// 10033249: using guessed type _DWORD __cdecl sub_10033249(_DWORD);
// 10034388: using guessed type _DWORD __cdecl sub_10034388(_DWORD, char, _DWORD);
// 10034572: using guessed type _DWORD __cdecl sub_10034572(char);
// 10035A08: using guessed type _DWORD __stdcall sub_10035A08(_DWORD);

//----- (1008C00F) --------------------------------------------------------
char *__cdecl sub_1008C00F(char *a1)
{
  char *result; // eax

  result = a1;
  if ( a1 )
  {
    result = a1 - 8;
    if ( *((_DWORD *)a1 - 2) == 56797 )
      result = (char *)sub_1003603E(result);
  }
  return result;
}

//----- (1008C037) --------------------------------------------------------
int __cdecl sub_1008C037(int a1)
{
  int result; // eax
  char v2; // [esp+4h] [ebp-B0h]

  *(_DWORD *)(a1 + 8) |= 0x104u;
  result = sub_1003530A(&v2, 85);
  if ( result > 1 )
  {
    result = sub_10035B93(a1 + 592, 85, &v2, wcslen((const unsigned __int16 *)&v2) + 1);
    if ( result )
    {
      sub_1003465D(0, 0, 0, 0, 0);
      JUMPOUT(*(_DWORD *)byte_1008C0BD);
    }
  }
  return result;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 1003530A: using guessed type _DWORD __stdcall sub_1003530A(_DWORD, _DWORD);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1008C0DF) --------------------------------------------------------
unsigned __int8 __cdecl sub_1008C0DF(int a1)
{
  int v1; // edi
  unsigned __int16 *v2; // ecx
  unsigned __int16 v3; // ax
  __int16 *v4; // edx
  int v5; // ecx
  int v6; // ebx
  __int16 v7; // ax
  int v8; // ecx
  unsigned __int8 result; // al

  v1 = 2;
  v2 = *(unsigned __int16 **)a1;
  do
  {
    v3 = *v2;
    ++v2;
  }
  while ( v3 );
  v4 = *(__int16 **)(a1 + 4);
  v5 = (signed int)((char *)v2 - *(_DWORD *)a1 - 2) >> 1;
  v6 = (int)(v4 + 1);
  *(_DWORD *)(a1 + 16) = v5 == 3;
  do
  {
    v7 = *v4;
    ++v4;
  }
  while ( v7 );
  *(_DWORD *)(a1 + 20) = ((signed int)v4 - v6) >> 1 == 3;
  if ( v5 != 3 )
    v1 = sub_1008C20D(*(unsigned __int16 **)a1);
  *(_DWORD *)(a1 + 12) = v1;
  sub_10033DD4(sub_1008C24E, 3, 0, 0);
  v8 = *(_DWORD *)(a1 + 8);
  result = _bittest(&v8, 8u);
  if ( !(_bittest(&v8, 9u) & ((v8 & 7) != 0) & result) )
    *(_DWORD *)(a1 + 8) = 0;
  return result;
}
// 10033DD4: using guessed type _DWORD __stdcall sub_10033DD4(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1008C19E) --------------------------------------------------------
int __cdecl sub_1008C19E(int a1)
{
  int v1; // edx
  unsigned __int16 *v2; // ecx
  unsigned __int16 v3; // ax
  int v4; // ecx
  int result; // eax

  v1 = 2;
  v2 = *(unsigned __int16 **)a1;
  do
  {
    v3 = *v2;
    ++v2;
  }
  while ( v3 );
  v4 = (signed int)((char *)v2 - *(_DWORD *)a1 - 2) >> 1;
  *(_DWORD *)(a1 + 16) = v4 == 3;
  if ( v4 != 3 )
    v1 = sub_1008C20D(*(unsigned __int16 **)a1);
  *(_DWORD *)(a1 + 12) = v1;
  result = sub_10033DD4(sub_1008C5E7, 3, 0, 0);
  if ( !(*(_BYTE *)(a1 + 8) & 4) )
    *(_DWORD *)(a1 + 8) = 0;
  return result;
}
// 10033DD4: using guessed type _DWORD __stdcall sub_10033DD4(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1008C20D) --------------------------------------------------------
int __cdecl sub_1008C20D(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // ecx
  int v2; // edx
  unsigned __int16 v4; // ax

  v1 = a1;
  v2 = 0;
  if ( !a1 )
    return 0;
  while ( 1 )
  {
    v4 = *v1;
    ++v1;
    if ( (v4 < 0x41u || v4 > 0x5Au) && (unsigned __int16)(v4 - 97) > 0x19u )
      break;
    ++v2;
  }
  return v2;
}

//----- (1008C24E) --------------------------------------------------------
signed int __stdcall sub_1008C24E(int a1, int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  int v6; // ecx
  __int16 *v7; // ecx
  int v8; // edx
  __int16 v9; // ax
  __int16 v10; // ax
  __int16 v11; // ax
  int v12; // ecx
  int v13; // edx
  __int16 *v14; // ecx
  int v15; // ebx
  __int16 v16; // ax
  __int16 *v17; // edx
  int v18; // ebx
  __int16 v19; // ax
  __int16 *v20; // ebx
  int v21; // ecx
  __int16 v22; // ax
  __int16 v23; // ax
  __int16 v24; // ax
  WCHAR LCData; // [esp+Ch] [ebp-84h]

  v3 = sub_10034E4B();
  if ( !sub_100350B7(a1, *(_DWORD *)(v3 + 100) != 0 ? 7 : 4098, &LCData, 64) )
  {
    *(_DWORD *)(v3 + 88) = 0;
    return 1;
  }
  if ( sub_100346DF(*(_DWORD *)(v3 + 84), &LCData) )
    goto LABEL_21;
  if ( !sub_100350B7(a1, *(_DWORD *)(v3 + 96) != 0 ? 3 : 4097, &LCData, 64) )
  {
    *(_DWORD *)(v3 + 88) = 0;
    return 1;
  }
  v5 = sub_100346DF(*(_DWORD *)(v3 + 80), &LCData);
  v6 = *(_DWORD *)(v3 + 88);
  if ( v5 )
  {
    if ( v6 & 2 )
      goto LABEL_21;
    if ( !*(_DWORD *)(v3 + 92) || sub_100337CB(*(_DWORD *)(v3 + 80), &LCData, *(_DWORD *)(v3 + 92)) )
    {
      if ( *(_BYTE *)(v3 + 88) & 1 || !sub_1008C801(a1) )
        goto LABEL_21;
      *(_DWORD *)(v3 + 88) |= 1u;
      v7 = (__int16 *)a1;
      v8 = a1 + 2;
      do
      {
        v11 = *v7;
        ++v7;
      }
      while ( v11 );
    }
    else
    {
      *(_DWORD *)(v3 + 88) |= 2u;
      v7 = (__int16 *)a1;
      v8 = a1 + 2;
      do
      {
        v10 = *v7;
        ++v7;
      }
      while ( v10 );
    }
  }
  else
  {
    *(_DWORD *)(v3 + 88) = v6 | 0x304;
    v7 = (__int16 *)a1;
    v8 = a1 + 2;
    do
    {
      v9 = *v7;
      ++v7;
    }
    while ( v9 );
  }
  if ( sub_10035B93(v3 + 672, 85, a1, (((signed int)v7 - v8) >> 1) + 1) )
    goto LABEL_49;
LABEL_21:
  if ( (*(_DWORD *)(v3 + 88) & 0x300) != 768 )
  {
    if ( !sub_100350B7(a1, *(_DWORD *)(v3 + 96) != 0 ? 3 : 4097, &LCData, 64) )
    {
      *(_DWORD *)(v3 + 88) = 0;
      return 1;
    }
    if ( !sub_100346DF(*(_DWORD *)(v3 + 80), &LCData) )
    {
      v12 = *(_DWORD *)(v3 + 88) | 0x200;
      *(_DWORD *)(v3 + 88) = v12;
      if ( !*(_DWORD *)(v3 + 96) )
      {
        if ( !*(_DWORD *)(v3 + 92) )
          goto LABEL_53;
        v17 = *(__int16 **)(v3 + 80);
        v18 = (int)(v17 + 1);
        do
        {
          v19 = *v17;
          ++v17;
        }
        while ( v19 );
        if ( ((signed int)v17 - v18) >> 1 == *(_DWORD *)(v3 + 92) )
        {
          if ( !sub_1008C801(a1) )
          {
            v20 = *(__int16 **)(v3 + 80);
            v21 = (int)(v20 + 1);
            do
            {
              v22 = *v20;
              ++v20;
            }
            while ( v22 );
            if ( sub_1008C20D(*(unsigned __int16 **)(v3 + 80)) == ((signed int)v20 - v21) >> 1 )
              return ~(unsigned __int8)(*(_DWORD *)(v3 + 88) >> 2) & 1;
          }
          *(_DWORD *)(v3 + 88) |= 0x100u;
          v13 = v3 + 672;
          if ( *(_WORD *)(v3 + 672) )
            return ~(unsigned __int8)(*(_DWORD *)(v3 + 88) >> 2) & 1;
          v14 = (__int16 *)a1;
          v15 = a1 + 2;
          do
          {
            v23 = *v14;
            ++v14;
          }
          while ( v23 );
        }
        else
        {
LABEL_53:
          v13 = v3 + 672;
          *(_DWORD *)(v3 + 88) = v12 | 0x100;
          if ( *(_WORD *)(v3 + 672) )
            return ~(unsigned __int8)(*(_DWORD *)(v3 + 88) >> 2) & 1;
          v14 = (__int16 *)a1;
          v15 = a1 + 2;
          do
          {
            v24 = *v14;
            ++v14;
          }
          while ( v24 );
        }
LABEL_42:
        if ( !sub_10035B93(v13, 85, a1, (((signed int)v14 - v15) >> 1) + 1) )
          return ~(unsigned __int8)(*(_DWORD *)(v3 + 88) >> 2) & 1;
LABEL_49:
        sub_1003465D(0, 0, 0, 0, 0);
        JUMPOUT(*(_DWORD *)byte_1008C52E);
      }
      v13 = v3 + 672;
      *(_DWORD *)(v3 + 88) = v12 | 0x100;
      if ( !*(_WORD *)(v3 + 672) )
      {
        v14 = (__int16 *)a1;
        v15 = a1 + 2;
        do
        {
          v16 = *v14;
          ++v14;
        }
        while ( v16 );
        goto LABEL_42;
      }
    }
  }
  return ~(unsigned __int8)(*(_DWORD *)(v3 + 88) >> 2) & 1;
}
// 100337CB: using guessed type _DWORD __cdecl sub_100337CB(_DWORD, _DWORD, _DWORD);
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100346DF: using guessed type _DWORD __cdecl sub_100346DF(_DWORD, _DWORD);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1008C5E7) --------------------------------------------------------
int __stdcall sub_1008C5E7(const unsigned __int16 *a1, int a2, int a3)
{
  _DWORD *v3; // esi
  int result; // eax
  WCHAR LCData; // [esp+8h] [ebp-F4h]

  v3 = (_DWORD *)sub_10034E4B();
  if ( sub_100350B7((int)a1, v3[24] != 0 ? 3 : 4097, &LCData, 120) )
  {
    if ( !sub_100346DF(v3[20], &LCData) )
    {
      if ( sub_10035B93(v3 + 168, 85, a1, wcslen(a1) + 1) )
      {
        sub_1003465D(0, 0, 0, 0, 0);
        JUMPOUT(*(_DWORD *)byte_1008C6A5);
      }
      v3[22] |= 4u;
    }
    result = ~(unsigned __int8)(v3[22] >> 2) & 1;
  }
  else
  {
    v3[22] = 0;
    result = 1;
  }
  return result;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100346DF: using guessed type _DWORD __cdecl sub_100346DF(_DWORD, _DWORD);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (1008C6D5) --------------------------------------------------------
int __cdecl sub_1008C6D5(const unsigned __int16 *a1, int a2)
{
  int v2; // edi
  int v3; // eax
  const wchar_t *v4; // ecx
  const unsigned __int16 *v5; // eax
  bool v6; // cf
  wchar_t v7; // dx
  int result; // eax
  WCHAR LCData[2]; // [esp+8h] [ebp-4h]

  if ( !a1 )
    goto LABEL_26;
  v2 = 0;
  if ( !*a1 )
    goto LABEL_26;
  v3 = wcscmp(a1, L"ACP");
  if ( v3 )
    v3 = -(v3 < 0) | 1;
  if ( v3 )
  {
    if ( !sub_100346DF(a1, L"utf8") || !sub_100346DF(a1, L"utf-8") )
      return 65001;
    v4 = L"OCP";
    v5 = a1;
    while ( 1 )
    {
      v6 = *v5 < *v4;
      if ( *v5 != *v4 )
        break;
      if ( !*v5 )
        goto LABEL_15;
      v7 = v5[1];
      v6 = v7 < v4[1];
      if ( v7 != v4[1] )
        break;
      v5 += 2;
      v4 += 2;
      if ( !v7 )
        goto LABEL_15;
    }
    v2 = -v6 | 1;
LABEL_15:
    if ( v2 )
      return sub_10035B4D(a1);
    result = sub_100350B7(a2 + 592, 0x2000000Bu, LCData, 2);
  }
  else
  {
LABEL_26:
    result = sub_100350B7(a2 + 592, 0x20001004u, LCData, 2);
  }
  if ( result )
  {
    result = *(_DWORD *)LCData;
    if ( *(_DWORD *)LCData < 3 )
      return 65001;
  }
  return result;
}
// 100346DF: using guessed type _DWORD __cdecl sub_100346DF(_DWORD, _DWORD);
// 10035B4D: using guessed type _DWORD __cdecl sub_10035B4D(_DWORD);
// 100A9450: using guessed type wchar_t aUtf8[5];
// 100A945C: using guessed type wchar_t aAcp[4];
// 100A9468: using guessed type wchar_t aUtf8_0[6];
// 100A9478: using guessed type wchar_t aOcp[4];

//----- (1008C801) --------------------------------------------------------
BOOL __cdecl sub_1008C801(int a1)
{
  BOOL result; // eax
  WCHAR LCData; // [esp+4h] [ebp-18h]

  if ( sub_100350B7(a1, 0x59u, &LCData, 9) )
    result = sub_100358A0(&LCData, a1, 9) == 0;
  else
    result = 0;
  return result;
}
// 100358A0: using guessed type _DWORD __cdecl sub_100358A0(_DWORD, _DWORD, _DWORD);

//----- (1008C8BC) --------------------------------------------------------
BOOL __cdecl sub_1008C8BC(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  signed int v4; // edx
  int v5; // edi
  int v6; // ebx
  signed int v7; // eax

  v3 = a2;
  v4 = 1;
  v5 = 0;
  while ( v5 <= v3 )
  {
    if ( !v4 )
      break;
    v6 = (v5 + v3) / 2;
    v7 = sub_100346DF(*a3, *(_DWORD *)(12 * v6 + a1));
    v4 = v7;
    if ( v7 )
    {
      if ( v7 >= 0 )
        v5 = v6 + 1;
      else
        v3 = v6 - 1;
    }
    else
    {
      *a3 = a1 + 4 + 12 * ((v5 + v3) / 2);
    }
  }
  return v4 == 0;
}
// 100346DF: using guessed type _DWORD __cdecl sub_100346DF(_DWORD, _DWORD);

//----- (1008C944) --------------------------------------------------------
int __cdecl sub_1008C944(int a1, int a2, LPWSTR lpLCData)
{
  _WORD *v3; // eax
  int *v4; // esi
  _WORD **v5; // ebx
  int v6; // eax
  int v7; // esi
  LPWSTR v8; // edi
  const unsigned __int16 *v10; // [esp+10h] [ebp-4h]

  v3 = (_WORD *)sub_10034E4B();
  v4 = (int *)(v3 + 40);
  v3 += 336;
  v4[2] = 0;
  *v3 = 0;
  v5 = (_WORD **)(v4 + 1);
  v10 = v3;
  *v4 = a1;
  v4[1] = a1 + 128;
  if ( *(_WORD *)(a1 + 128) )
    sub_1008C8BC((int)&off_100A87C0, 22, v4 + 1);
  if ( *(_WORD *)*v4 )
  {
    if ( **v5 )
      sub_1008C0DF((int)v4);
    else
      sub_1008C19E((int)v4);
    if ( !v4[2] && sub_1008C8BC((int)&off_100A8410, 64, v4) )
    {
      if ( **v5 )
        sub_1008C0DF((int)v4);
      else
        sub_1008C19E((int)v4);
    }
  }
  else
  {
    sub_1008C037((int)v4);
  }
  if ( v4[2] )
  {
    v6 = !a1 || *(_WORD *)a1 || *(_WORD *)(a1 + 256) ? sub_1008C6D5(
                                                         (const unsigned __int16 *)(a1 != 0 ? a1 + 256 : 0),
                                                         (int)v4) : GetACP();
    v7 = v6;
    if ( v6 )
    {
      if ( v6 != 65000 && IsValidCodePage((unsigned __int16)v6) )
      {
        if ( a2 )
          *(_DWORD *)a2 = v7;
        if ( !lpLCData )
          return 1;
        lpLCData[144] = 0;
        if ( sub_10035B93(lpLCData + 144, 85, v10, wcslen(v10) + 1) )
          goto LABEL_37;
        if ( sub_100350B7((int)(lpLCData + 144), 0x1001u, lpLCData, 64)
          && sub_100350B7((int)(lpLCData + 144), 0x1002u, lpLCData + 64, 64)
          && (!sub_100355AD(lpLCData + 64, 95) && !sub_100355AD(lpLCData + 64, 46)
           || sub_100350B7((int)(lpLCData + 144), 7u, lpLCData + 64, 64)) )
        {
          v8 = lpLCData + 128;
          if ( v7 != 65001 )
          {
            sub_10034F18(v7, v8, 16, 10);
            return 1;
          }
          if ( !sub_10035B93(v8, 16, L"utf8", 5) )
            return 1;
LABEL_37:
          sub_1003465D(0, 0, 0, 0, 0);
          JUMPOUT(*(_DWORD *)byte_1008CB48);
        }
      }
    }
  }
  return 0;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034F18: using guessed type _DWORD __cdecl sub_10034F18(_DWORD, _DWORD, _DWORD, _DWORD);
// 100355AD: using guessed type _DWORD __cdecl sub_100355AD(_DWORD, __int16);
// 10035B93: using guessed type int __cdecl sub_10035B93(_DWORD, _DWORD, _DWORD, _DWORD);
// 100A8410: using guessed type wchar_t *off_100A8410;
// 100A87C0: using guessed type wchar_t *off_100A87C0;
// 100A9450: using guessed type wchar_t aUtf8[5];

//----- (1008CBCA) --------------------------------------------------------
BOOL __stdcall sub_1008CBCA(LPWSTR a1)
{
  int v1; // ebx
  _DWORD *v2; // edi
  int v3; // esi
  BOOL result; // eax
  WCHAR LCData; // [esp+Ch] [ebp-F4h]

  v1 = sub_10034E4B();
  v2 = *(_DWORD **)(sub_10034E4B() + 844);
  v3 = sub_1008D27B(a1);
  if ( GetLocaleInfoW(v3, *(_DWORD *)(v1 + 100) != 0 ? 7 : 4098, &LCData, 120) )
  {
    if ( !sub_100346DF(*(_DWORD *)(v1 + 84), &LCData) )
    {
      if ( sub_1008D3FD(v3) )
      {
        *v2 |= 4u;
        v2[2] = v3;
        v2[1] = v3;
      }
    }
    result = ~(unsigned __int8)(*v2 >> 2) & 1;
  }
  else
  {
    *v2 = 0;
    result = 1;
  }
  return result;
}
// 100346DF: using guessed type _DWORD __cdecl sub_100346DF(_DWORD, _DWORD);

//----- (1008CC9A) --------------------------------------------------------
_DWORD *__cdecl sub_1008CC9A(_DWORD *a1)
{
  int v1; // edx
  __int16 *v2; // ecx
  int v3; // esi
  __int16 v4; // ax
  _DWORD *result; // eax

  v1 = sub_10034E4B();
  v2 = *(__int16 **)(v1 + 84);
  v3 = (int)(v2 + 1);
  do
  {
    v4 = *v2;
    ++v2;
  }
  while ( v4 );
  *(_DWORD *)(v1 + 100) = ((signed int)v2 - v3) >> 1 == 3;
  EnumSystemLocalesW(sub_1008CBCA, 1u);
  result = a1;
  if ( !(*(_BYTE *)a1 & 4) )
    *a1 = 0;
  return result;
}

//----- (1008CD1C) --------------------------------------------------------
unsigned __int8 __cdecl sub_1008CD1C(int *a1)
{
  int v1; // esi
  int v2; // edx
  __int16 *v3; // ecx
  int v4; // edi
  __int16 v5; // ax
  bool v6; // zf
  __int16 *v7; // ecx
  int v8; // edi
  __int16 v9; // ax
  int v10; // ecx
  unsigned __int8 result; // al

  v1 = sub_10034E4B();
  v2 = 2;
  v3 = *(__int16 **)(v1 + 80);
  v4 = (int)(v3 + 1);
  do
  {
    v5 = *v3;
    ++v3;
  }
  while ( v5 );
  v6 = ((signed int)v3 - v4) >> 1 == 3;
  v7 = *(__int16 **)(v1 + 84);
  *(_DWORD *)(v1 + 96) = v6;
  v8 = (int)(v7 + 1);
  do
  {
    v9 = *v7;
    ++v7;
  }
  while ( v9 );
  *(_DWORD *)(v1 + 100) = ((signed int)v7 - v8) >> 1 == 3;
  a1[1] = 0;
  if ( !*(_DWORD *)(v1 + 96) )
    v2 = sub_1008CE53(*(unsigned __int16 **)(v1 + 80));
  *(_DWORD *)(v1 + 92) = v2;
  EnumSystemLocalesW(sub_1008CE8A, 1u);
  v10 = *a1;
  result = _bittest(&v10, 8u);
  if ( !(_bittest(&v10, 9u) & ((*a1 & 7) != 0) & result) )
    *a1 = 0;
  return result;
}

//----- (1008CDDD) --------------------------------------------------------
_DWORD *__cdecl sub_1008CDDD(_DWORD *a1)
{
  int v1; // esi
  int v2; // edx
  __int16 *v3; // ecx
  int v4; // edi
  __int16 v5; // ax
  int v6; // ecx
  _DWORD *result; // eax

  v1 = sub_10034E4B();
  v2 = 2;
  v3 = *(__int16 **)(v1 + 80);
  v4 = (int)(v3 + 1);
  do
  {
    v5 = *v3;
    ++v3;
  }
  while ( v5 );
  v6 = ((signed int)v3 - v4) >> 1;
  *(_DWORD *)(v1 + 96) = v6 == 3;
  if ( v6 != 3 )
    v2 = sub_1008CE53(*(unsigned __int16 **)(v1 + 80));
  *(_DWORD *)(v1 + 92) = v2;
  EnumSystemLocalesW(sub_1008D171, 1u);
  result = a1;
  if ( !(*(_BYTE *)a1 & 4) )
    *a1 = 0;
  return result;
}

//----- (1008CE53) --------------------------------------------------------
int __cdecl sub_1008CE53(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // ecx
  int i; // edx
  unsigned __int16 v3; // ax

  v1 = a1;
  for ( i = 0; ; ++i )
  {
    v3 = *v1;
    ++v1;
    if ( (v3 < 0x41u || v3 > 0x5Au) && (unsigned __int16)(v3 - 97) > 0x19u )
      break;
  }
  return i;
}

//----- (1008CE8A) --------------------------------------------------------
BOOL __stdcall sub_1008CE8A(LPWSTR a1)
{
  _DWORD *v1; // ebx
  int *v2; // edi
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  __int16 *v6; // ecx
  int v7; // edx
  __int16 v8; // ax
  int v9; // edx
  int v10; // ecx
  bool v11; // zf
  __int16 *v12; // edx
  __int16 v13; // ax
  int v15; // [esp+Ch] [ebp-FCh]
  WCHAR LCData; // [esp+14h] [ebp-F4h]

  v1 = (_DWORD *)sub_10034E4B();
  v2 = *(int **)(sub_10034E4B() + 844);
  v3 = sub_1008D27B(a1);
  if ( !GetLocaleInfoW(v3, v1[25] != 0 ? 7 : 4098, &LCData, 120) )
    goto LABEL_38;
  if ( sub_100346DF(v1[21], &LCData) )
    goto LABEL_17;
  if ( !GetLocaleInfoW(v3, v1[24] != 0 ? 3 : 4097, &LCData, 120) )
    goto LABEL_38;
  v4 = sub_100346DF(v1[20], &LCData);
  v5 = *v2;
  if ( !v4 )
  {
    v2[1] = v3;
    *v2 = v5 | 0x304;
LABEL_16:
    v2[2] = v3;
    goto LABEL_17;
  }
  if ( !(v5 & 2) )
  {
    if ( v1[23] && !sub_100337CB(v1[20], &LCData, v1[23]) )
    {
      *v2 |= 2u;
      v2[2] = v3;
      v6 = (__int16 *)v1[20];
      v7 = (int)(v6 + 1);
      do
      {
        v8 = *v6;
        ++v6;
      }
      while ( v8 );
      if ( ((signed int)v6 - v7) >> 1 == v1[23] )
        v2[1] = v3;
      goto LABEL_17;
    }
    if ( !(*v2 & 1) && sub_1008D3FD(v3) )
    {
      *v2 = v9 | 1;
      goto LABEL_16;
    }
  }
LABEL_17:
  if ( (*v2 & 0x300) == 768 )
    return ~(unsigned __int8)((unsigned int)*v2 >> 2) & 1;
  if ( GetLocaleInfoW(v3, v1[24] != 0 ? 3 : 4097, &LCData, 120) )
  {
    if ( sub_100346DF(v1[20], &LCData) )
    {
      if ( v1[24] || !v1[23] || sub_100346DF(v1[20], &LCData) || !sub_1008D42B(v3, 0) )
        return ~(unsigned __int8)((unsigned int)*v2 >> 2) & 1;
      *v2 |= 0x100u;
      v11 = v2[1] == 0;
      goto LABEL_35;
    }
    v10 = *v2 | 0x200;
    *v2 = v10;
    if ( v1[24] )
      goto LABEL_41;
    if ( !v1[23] )
      goto LABEL_41;
    v12 = (__int16 *)v1[20];
    v15 = (int)(v12 + 1);
    do
    {
      v13 = *v12;
      ++v12;
    }
    while ( v13 );
    if ( ((signed int)v12 - v15) >> 1 != v1[23] )
    {
LABEL_41:
      *v2 = v10 | 0x100;
LABEL_22:
      v11 = v2[1] == 0;
LABEL_35:
      if ( v11 )
        v2[1] = v3;
      return ~(unsigned __int8)((unsigned int)*v2 >> 2) & 1;
    }
    if ( sub_1008D42B(v3, 1) )
    {
      *v2 |= 0x100u;
      goto LABEL_22;
    }
    return ~(unsigned __int8)((unsigned int)*v2 >> 2) & 1;
  }
LABEL_38:
  *v2 = 0;
  return 1;
}
// 100337CB: using guessed type _DWORD __cdecl sub_100337CB(_DWORD, _DWORD, _DWORD);
// 100346DF: using guessed type _DWORD __cdecl sub_100346DF(_DWORD, _DWORD);

//----- (1008D171) --------------------------------------------------------
BOOL __stdcall sub_1008D171(LPWSTR a1)
{
  _DWORD *v1; // ebx
  _DWORD *v2; // edi
  int v3; // esi
  int v5; // eax
  int v6; // ecx
  BOOL v7; // eax
  WCHAR LCData; // [esp+Ch] [ebp-F4h]

  v1 = (_DWORD *)sub_10034E4B();
  v2 = *(_DWORD **)(sub_10034E4B() + 844);
  v3 = sub_1008D27B(a1);
  if ( !GetLocaleInfoW(v3, v1[24] != 0 ? 3 : 4097, &LCData, 120) )
  {
    *v2 = 0;
    return 1;
  }
  v5 = sub_100346DF(v1[20], &LCData);
  v6 = v1[24];
  if ( v5 )
  {
    if ( v6 || !v1[23] || sub_100346DF(v1[20], &LCData) )
      return ~(unsigned __int8)(*v2 >> 2) & 1;
    v7 = sub_1008D42B(v3, 0);
  }
  else
  {
    if ( v6 )
    {
LABEL_11:
      *v2 |= 4u;
      v2[1] = v3;
      v2[2] = v3;
      return ~(unsigned __int8)(*v2 >> 2) & 1;
    }
    v7 = sub_1008D42B(v3, 1);
  }
  if ( v7 )
    goto LABEL_11;
  return ~(unsigned __int8)(*v2 >> 2) & 1;
}
// 100346DF: using guessed type _DWORD __cdecl sub_100346DF(_DWORD, _DWORD);

//----- (1008D27B) --------------------------------------------------------
int __cdecl sub_1008D27B(unsigned __int16 *a1)
{
  int v1; // esi
  unsigned __int16 v2; // cx
  unsigned __int16 *i; // edx
  int v4; // eax

  v1 = 0;
  v2 = *a1;
  for ( i = a1 + 1; v2; ++i )
  {
    if ( (unsigned __int16)(v2 - 97) > 5u )
    {
      if ( (unsigned __int16)(v2 - 65) <= 5u )
        v2 -= 7;
    }
    else
    {
      v2 -= 39;
    }
    v4 = v2;
    v2 = *i;
    v1 = v4 + 16 * v1 - 48;
  }
  return v1;
}

//----- (1008D2E4) --------------------------------------------------------
UINT __cdecl sub_1008D2E4(const unsigned __int16 *a1, int a2)
{
  int v2; // eax
  int v3; // edx
  const wchar_t *v4; // esi
  const unsigned __int16 *v5; // edx
  bool v6; // cf
  wchar_t v7; // di
  UINT result; // eax
  WCHAR LCData[2]; // [esp+8h] [ebp-4h]

  if ( a1 )
  {
    v2 = 0;
    if ( *a1 )
    {
      v3 = wcscmp(a1, L"ACP");
      if ( v3 )
        v3 = -(v3 < 0) | 1;
      if ( v3 )
      {
        v4 = L"OCP";
        v5 = a1;
        while ( 1 )
        {
          v6 = *v5 < *v4;
          if ( *v5 != *v4 )
            break;
          if ( !*v5 )
            goto LABEL_13;
          v7 = v5[1];
          v6 = v7 < v4[1];
          if ( v7 != v4[1] )
            break;
          v5 += 2;
          v4 += 2;
          if ( !v7 )
            goto LABEL_13;
        }
        v2 = -v6 | 1;
LABEL_13:
        if ( v2 )
          return sub_10035B4D(a1);
        if ( GetLocaleInfoW(*(_DWORD *)(a2 + 8), 0x2000000Bu, LCData, 2) )
          return *(_DWORD *)LCData;
        return 0;
      }
    }
  }
  if ( !GetLocaleInfoW(*(_DWORD *)(a2 + 8), 0x20001004u, LCData, 2) )
    return 0;
  result = *(_DWORD *)LCData;
  if ( !*(_DWORD *)LCData )
    result = GetACP();
  return result;
}
// 10035B4D: using guessed type _DWORD __cdecl sub_10035B4D(_DWORD);
// 100A945C: using guessed type wchar_t aAcp[4];
// 100A9478: using guessed type wchar_t aOcp[4];

//----- (1008D3FD) --------------------------------------------------------
signed int __cdecl sub_1008D3FD(__int16 a1)
{
  unsigned int v1; // eax

  v1 = 0;
  while ( a1 != word_100A9484[v1] )
  {
    ++v1;
    if ( v1 >= 10 )
      return 1;
  }
  return 0;
}
// 100A9484: using guessed type __int16 word_100A9484[];

//----- (1008D42B) --------------------------------------------------------
BOOL __cdecl sub_1008D42B(int a1, int a2)
{
  int v2; // edi
  __int16 *v3; // esi
  int v4; // ecx
  __int16 v5; // ax
  WCHAR LCData[2]; // [esp+8h] [ebp-4h]

  v2 = sub_10034E4B();
  if ( !GetLocaleInfoW(a1 & 0x3FF | 0x400, 0x20000001u, LCData, 2) )
    return 0;
  if ( a1 == *(_DWORD *)LCData || !a2 )
    return 1;
  v3 = *(__int16 **)(v2 + 80);
  v4 = (int)(v3 + 1);
  do
  {
    v5 = *v3;
    ++v3;
  }
  while ( v5 );
  return sub_1008CE53(*(unsigned __int16 **)(v2 + 80)) != ((signed int)v3 - v4) >> 1;
}

//----- (1008D4BD) --------------------------------------------------------
char __cdecl sub_1008D4BD(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // ebx
  int v6; // eax

  v3 = a2;
  v4 = 0;
  if ( a2 < 0 )
    return 0;
  while ( 1 )
  {
    v5 = (v4 + v3) / 2;
    v6 = sub_100346DF(*a3, *(_DWORD *)(12 * v5 + a1));
    if ( !v6 )
      break;
    if ( v6 >= 0 )
      v4 = v5 + 1;
    else
      v3 = v5 - 1;
    if ( v4 > v3 )
      return 0;
  }
  *a3 = 12 * ((v4 + v3) / 2) + 4 + a1;
  return 1;
}
// 100346DF: using guessed type _DWORD __cdecl sub_100346DF(_DWORD, _DWORD);

//----- (1008D536) --------------------------------------------------------
int __cdecl sub_1008D536(int a1, int a2, LPWSTR lpLCData)
{
  int *v3; // eax
  _DWORD *v4; // edi
  _WORD *v5; // eax
  UINT v6; // eax
  UINT v7; // esi
  int *v9; // [esp+10h] [ebp-14h]
  int v10; // [esp+14h] [ebp-10h]
  LCID Locale; // [esp+18h] [ebp-Ch]
  LCID v12; // [esp+1Ch] [ebp-8h]

  v9 = (int *)(sub_10034E4B() + 80);
  v10 = 0;
  Locale = 0;
  v12 = 0;
  *(_DWORD *)(sub_10034E4B() + 844) = &v10;
  v3 = v9;
  *v9 = a1;
  v4 = v9 + 1;
  v9[1] = a1 + 128;
  if ( a1 != -128 && *(_WORD *)(a1 + 128) )
  {
    sub_1008D4BD((int)&off_100A87C0, 22, v9 + 1);
    v3 = v9;
  }
  v10 = 0;
  v5 = (_WORD *)*v3;
  if ( v5 && *v5 )
  {
    if ( *v4 && *(_WORD *)*v4 )
      sub_1008CD1C(&v10);
    else
      sub_1008CDDD(&v10);
    if ( !v10 && sub_1008D4BD((int)&off_100A8410, 64, v9) )
    {
      if ( *v4 && *(_WORD *)*v4 )
        sub_1008CD1C(&v10);
      else
        sub_1008CDDD(&v10);
    }
  }
  else if ( *v4 && *(_WORD *)*v4 )
  {
    sub_1008CC9A(&v10);
  }
  else
  {
    v10 = 260;
    v12 = GetUserDefaultLCID();
    Locale = v12;
  }
  if ( v10 )
  {
    v6 = sub_1008D2E4((const unsigned __int16 *)(a1 != 0 ? a1 + 256 : 0), (int)&v10);
    v7 = v6;
    if ( v6 )
    {
      if ( IsValidCodePage((unsigned __int16)v6) && IsValidLocale(Locale, 1u) )
      {
        if ( a2 )
          *(_DWORD *)a2 = v7;
        sub_10035521(Locale, v9 + 148, 85, 0);
        if ( !lpLCData )
          return 1;
        sub_10035521(Locale, lpLCData + 144, 85, 0);
        if ( GetLocaleInfoW(Locale, 0x1001u, lpLCData, 64) && GetLocaleInfoW(v12, 0x1002u, lpLCData + 64, 64) )
        {
          sub_10034F18(v7, lpLCData + 128, 16, 10);
          return 1;
        }
      }
    }
  }
  return 0;
}
// 10034F18: using guessed type _DWORD __cdecl sub_10034F18(_DWORD, _DWORD, _DWORD, _DWORD);
// 10035521: using guessed type _DWORD __stdcall sub_10035521(_DWORD, _DWORD, _DWORD, _DWORD);
// 100A8410: using guessed type wchar_t *off_100A8410;
// 100A87C0: using guessed type wchar_t *off_100A87C0;

//----- (1008D841) --------------------------------------------------------
int sub_1008D841()
{
  int v0; // esi
  int v1; // edi
  int v2; // esi
  int v4; // [esp+8h] [ebp-8h]

  v0 = sub_1003558A(64, 56);
  v4 = v0;
  if ( v0 )
  {
    if ( v0 != v0 + 3584 )
    {
      v1 = v0 + 32;
      v2 = v0 + 3584;
      do
      {
        sub_10035477((LPCRITICAL_SECTION)(v1 - 32), 0xFA0u, 0);
        *(_DWORD *)(v1 - 8) = -1;
        *(_BYTE *)(v1 + 13) &= 0xF8u;
        *(_DWORD *)v1 = 0;
        v1 += 56;
        *(_DWORD *)(v1 - 52) = 0;
        *(_DWORD *)(v1 - 48) = 168427520;
        *(_BYTE *)(v1 - 44) = 10;
        *(_DWORD *)(v1 - 42) = 0;
        *(_BYTE *)(v1 - 38) = 0;
      }
      while ( v1 - 32 != v2 );
      v0 = v4;
    }
  }
  else
  {
    v0 = 0;
  }
  sub_1003603E(0);
  return v0;
}
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);

//----- (1008D8DA) --------------------------------------------------------
int __cdecl sub_1008D8DA(LPCRITICAL_SECTION lpCriticalSection)
{
  struct _RTL_CRITICAL_SECTION *i; // edi
  int result; // eax

  if ( lpCriticalSection )
  {
    for ( i = lpCriticalSection;
          i != (struct _RTL_CRITICAL_SECTION *)&lpCriticalSection[149].RecursionCount;
          i = (struct _RTL_CRITICAL_SECTION *)((char *)i + 56) )
    {
      DeleteCriticalSection(i);
    }
    result = sub_1003603E(lpCriticalSection);
  }
  return result;
}

//----- (1008D91C) --------------------------------------------------------
signed int __cdecl sub_1008D91C(unsigned int a1)
{
  int v1; // ecx
  signed int v2; // esi
  int v4; // edi
  int v5; // eax
  struct _RTL_CRITICAL_SECTION *v6; // eax

  if ( a1 < 0x2000 )
  {
    v2 = 0;
    sub_100360E8(7);
    v4 = 0;
    v5 = dword_100B1F48;
    while ( (signed int)a1 >= v5 )
    {
      if ( !lpCriticalSection[v4] )
      {
        v6 = (struct _RTL_CRITICAL_SECTION *)sub_10035FF3();
        lpCriticalSection[v4] = v6;
        if ( !v6 )
        {
          v2 = 12;
          break;
        }
        v5 = dword_100B1F48 + 64;
        dword_100B1F48 += 64;
      }
      ++v4;
    }
    sub_10033799(7);
  }
  else
  {
    v2 = 9;
    *(_DWORD *)sub_10034888(v1) = 9;
    sub_10034711();
  }
  return v2;
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10035FF3: using guessed type int sub_10035FF3(void);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);
// 100B1F48: using guessed type int dword_100B1F48;

//----- (1008D9E1) --------------------------------------------------------
void __cdecl sub_1008D9E1(int a1)
{
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)lpCriticalSection[a1 >> 6] + 56 * (a1 & 0x3F)));
}

//----- (1008DA0C) --------------------------------------------------------
int __cdecl sub_1008DA0C(int a1, HANDLE hHandle)
{
  int v2; // ecx
  int result; // eax
  int v4; // [esp+8h] [ebp-4h]

  if ( a1 < 0
    || a1 >= (unsigned int)dword_100B1F48
    || (v2 = 56 * (a1 & 0x3F),
        v4 = v2,
        *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&lpCriticalSection[(unsigned int)a1 >> 6][1].DebugInfo + v2) != (PRTL_CRITICAL_SECTION_DEBUG)-1) )
  {
    *(_DWORD *)sub_10034888(v2) = 9;
    *(_DWORD *)sub_100334E7() = 0;
    result = -1;
  }
  else
  {
    if ( sub_100335AA() == 1 )
    {
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(0xFFFFFFF5, hHandle);
        }
        else if ( a1 == 2 )
        {
          SetStdHandle(0xFFFFFFF4, hHandle);
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6, hHandle);
      }
    }
    *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&lpCriticalSection[(unsigned int)a1 >> 6][1].DebugInfo + v4) = (PRTL_CRITICAL_SECTION_DEBUG)hHandle;
    result = 0;
  }
  return result;
}
// 100334E7: using guessed type int sub_100334E7(void);
// 100335AA: using guessed type int sub_100335AA(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 100B1F48: using guessed type int dword_100B1F48;

//----- (1008DAC2) --------------------------------------------------------
void __cdecl sub_1008DAC2(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)lpCriticalSection[a1 >> 6] + 56 * (a1 & 0x3F)));
}

//----- (1008DAED) --------------------------------------------------------
signed int sub_1008DAED()
{
  signed int v0; // ebx
  signed int i; // edi
  LPCRITICAL_SECTION v2; // eax
  struct _RTL_CRITICAL_SECTION *v3; // eax
  int v5; // ecx
  LPCRITICAL_SECTION j; // esi
  int v7; // esi
  int v8; // ecx
  LPCRITICAL_SECTION v9; // [esp+14h] [ebp-28h]
  int v10; // [esp+1Ch] [ebp-20h]

  sub_100360E8(7);
  v0 = -1;
  for ( i = 0; i < 128; ++i )
  {
    v2 = lpCriticalSection[i];
    v9 = v2;
    if ( !v2 )
    {
      v3 = (struct _RTL_CRITICAL_SECTION *)sub_10035FF3();
      lpCriticalSection[i] = v3;
      if ( v3 )
      {
        dword_100B1F48 += 64;
        v0 = i << 6;
        sub_10033325(i << 6);
        LOBYTE(lpCriticalSection[i << 6 >> 6][1].LockSemaphore) = 1;
      }
      break;
    }
    v5 = (int)&v2[149].RecursionCount;
    v10 = (int)&v2[149].RecursionCount;
    for ( j = lpCriticalSection[i]; j != (LPCRITICAL_SECTION)v5; j = (LPCRITICAL_SECTION)((char *)j + 56) )
    {
      if ( !((_DWORD)j[1].LockSemaphore & 1) )
      {
        EnterCriticalSection(j);
        if ( !((_DWORD)j[1].LockSemaphore & 1) )
        {
          v7 = (i << 6) + ((char *)j - (char *)v9) / 56;
          v8 = 56 * (v7 & 0x3F);
          *((_BYTE *)&lpCriticalSection[v7 >> 6][1].LockSemaphore + v8) = 1;
          *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&lpCriticalSection[v7 >> 6][1].DebugInfo + v8) = (PRTL_CRITICAL_SECTION_DEBUG)-1;
          v0 = v7;
          goto LABEL_6;
        }
        LeaveCriticalSection(j);
        v5 = v10;
      }
    }
  }
LABEL_6:
  sub_10033799(7);
  return v0;
}
// 10033325: using guessed type _DWORD __cdecl sub_10033325(_DWORD);
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 10035FF3: using guessed type int sub_10035FF3(void);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);
// 100B1F48: using guessed type int dword_100B1F48;

//----- (1008DC44) --------------------------------------------------------
signed int __cdecl sub_1008DC44(unsigned int a1)
{
  int v1; // ecx
  int v2; // edi
  LPCRITICAL_SECTION v3; // eax
  signed int result; // eax

  if ( (a1 & 0x80000000) == 0
    && a1 < dword_100B1F48
    && (v2 = 56 * (a1 & 0x3F), v3 = lpCriticalSection[a1 >> 6], *((_BYTE *)&v3[1].LockSemaphore + v2) & 1)
    && *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v3[1].DebugInfo + v2) != (PRTL_CRITICAL_SECTION_DEBUG)-1 )
  {
    if ( sub_100335AA() == 1 )
    {
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(0xFFFFFFF5, 0);
        }
        else if ( a1 == 2 )
        {
          SetStdHandle(0xFFFFFFF4, 0);
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6, 0);
      }
    }
    *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&lpCriticalSection[a1 >> 6][1].DebugInfo + v2) = (PRTL_CRITICAL_SECTION_DEBUG)-1;
    result = 0;
  }
  else
  {
    *(_DWORD *)sub_10034888(v1) = 9;
    *(_DWORD *)sub_100334E7() = 0;
    result = -1;
  }
  return result;
}
// 100334E7: using guessed type int sub_100334E7(void);
// 100335AA: using guessed type int sub_100335AA(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 100B1F48: using guessed type int dword_100B1F48;

//----- (1008DCF9) --------------------------------------------------------
signed int __cdecl sub_1008DCF9(unsigned int a1)
{
  int v1; // ecx
  int v2; // ecx
  LPCRITICAL_SECTION v3; // eax
  int v5; // ecx

  if ( a1 == -2 )
  {
    *(_DWORD *)sub_100334E7() = 0;
    *(_DWORD *)sub_10034888(v1) = 9;
  }
  else
  {
    if ( (a1 & 0x80000000) == 0 && a1 < dword_100B1F48 )
    {
      v2 = 56 * (a1 & 0x3F);
      v3 = lpCriticalSection[a1 >> 6];
      if ( *((_BYTE *)&v3[1].LockSemaphore + v2) & 1 )
        return *(signed int *)((char *)&v3[1].DebugInfo + v2);
    }
    *(_DWORD *)sub_100334E7() = 0;
    *(_DWORD *)sub_10034888(v5) = 9;
    sub_10034711();
  }
  return -1;
}
// 100334E7: using guessed type int sub_100334E7(void);
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 100B1F48: using guessed type int dword_100B1F48;

//----- (1008DE68) --------------------------------------------------------
int __usercall sub_1008DE68@<eax>(int a1@<ebp>)
{
  return sub_1008DE6E(*(_BYTE *)(a1 - 25), *(_DWORD *)(a1 - 32));
}

//----- (1008DE6E) --------------------------------------------------------
int __usercall sub_1008DE6E@<eax>(char a1@<al>, int a2@<esi>)
{
  if ( !a1 )
    *((_BYTE *)&lpCriticalSection[a2 >> 6][1].LockSemaphore + 56 * (a2 & 0x3F)) &= 0xFEu;
  return sub_100331E0();
}

//----- (1008DFF0) --------------------------------------------------------
void __cdecl sub_1008DFF0(unsigned int a1, unsigned int a2, int a3, int (__cdecl *a4)(unsigned int, unsigned int))
{
  int (__cdecl *v4)(unsigned int, unsigned int); // ebx
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // ebx
  char v15; // cl
  unsigned int v16; // edi
  int v17; // eax
  int v18; // esi
  bool v19; // zf
  bool v20; // sf
  unsigned int v21; // eax
  int v22; // ebx
  _BYTE *v23; // esi
  char v24; // cl
  int v25; // eax
  unsigned int v26; // edx
  char *v27; // esi
  int v28; // ebx
  int v29; // edx
  char v30; // al
  char v31; // cl
  int v32; // eax
  unsigned int v33; // edx
  int v34; // eax
  int v35; // ebx
  char *v36; // esi
  int v37; // edx
  char v38; // al
  char v39; // cl
  _BYTE *v40; // ebx
  int v41; // eax
  int v42; // eax
  unsigned int v43; // ecx
  char *v44; // edx
  int v45; // esi
  int v46; // ebx
  char v47; // al
  char v48; // cl
  int v49; // eax
  unsigned int v50; // ecx
  int v51; // eax
  int v52; // eax
  int v53; // [esp+Ch] [ebp-118h]
  int v54; // [esp+10h] [ebp-114h]
  int v55; // [esp+10h] [ebp-114h]
  int v56; // [esp+14h] [ebp-110h]
  unsigned int v57; // [esp+18h] [ebp-10Ch]
  unsigned int v58; // [esp+20h] [ebp-104h]
  unsigned int v59; // [esp+28h] [ebp-FCh]
  int v60; // [esp+28h] [ebp-FCh]
  int v61; // [esp+28h] [ebp-FCh]
  _BYTE *v62; // [esp+28h] [ebp-FCh]
  unsigned int v63; // [esp+28h] [ebp-FCh]
  unsigned int v64; // [esp+28h] [ebp-FCh]
  unsigned int v65; // [esp+2Ch] [ebp-F8h]
  int v66[30]; // [esp+30h] [ebp-F4h]
  int v67[30]; // [esp+A8h] [ebp-7Ch]

  v4 = a4;
  v5 = a1;
  v58 = a1;
  v6 = a3;
  if ( (a1 || !a2) && a3 && a4 )
  {
    v53 = 0;
    if ( a2 >= 2 )
    {
      v7 = a1 + a3 * (a2 - 1);
      while ( 2 )
      {
        while ( 2 )
        {
          v65 = v7;
          while ( 1 )
          {
            v8 = (v7 - v5) / v6 + 1;
            if ( v8 <= 8 )
            {
              if ( v7 > v5 )
              {
                v9 = v6 + v5;
                v56 = v6 + v5;
                do
                {
                  v10 = v5;
                  v11 = v9;
                  v59 = v10;
                  if ( v9 <= v7 )
                  {
                    do
                    {
                      if ( v4(v11, v10) <= 0 )
                      {
                        v10 = v59;
                      }
                      else
                      {
                        v10 = v11;
                        v59 = v11;
                      }
                      v7 = v65;
                      v11 += v6;
                    }
                    while ( v11 <= v65 );
                  }
                  v12 = v7;
                  if ( v10 != v7 )
                  {
                    v13 = v10 - v7;
                    v14 = v6;
                    v60 = v13;
                    do
                    {
                      v15 = *(_BYTE *)(v13 + v12++);
                      *(_BYTE *)(v60 + v12 - 1) = *(_BYTE *)(v12 - 1);
                      v13 = v60;
                      *(_BYTE *)(v12 - 1) = v15;
                      --v14;
                    }
                    while ( v14 );
                    v4 = a4;
                    v7 = v65;
                  }
                  v5 = v58;
                  v7 -= v6;
                  v9 = v56;
                  v65 = v7;
                }
                while ( v7 > v58 );
              }
              goto LABEL_77;
            }
            v61 = v6 * (v8 >> 1);
            v16 = v61 + v5;
            v54 = v61 + v5;
            v17 = v4(v5, v61 + v5);
            v18 = a3;
            v19 = v17 == 0;
            v20 = v17 < 0;
            v21 = v58;
            if ( !v20 && !v19 && v58 != v16 )
            {
              v22 = a3;
              v23 = (_BYTE *)v16;
              do
              {
                v24 = v23[-v61];
                v23[-v61] = *v23;
                *v23++ = v24;
                --v22;
              }
              while ( v22 );
              v16 = v54;
              v4 = a4;
              v18 = a3;
              v21 = v58;
            }
            v25 = v4(v21, v65);
            v26 = v65;
            if ( v25 > 0 )
            {
              v55 = v18;
              v27 = (char *)v65;
              if ( v58 != v65 )
              {
                v28 = v55;
                v29 = v58 - v65;
                do
                {
                  v30 = *v27++;
                  v31 = v27[v29 - 1];
                  v27[v29 - 1] = v30;
                  *(v27 - 1) = v31;
                  --v28;
                }
                while ( v28 );
                v4 = a4;
                v26 = v65;
              }
            }
            v32 = v4(v16, v26);
            v33 = v65;
            v19 = v32 == 0;
            v20 = v32 < 0;
            v34 = a3;
            if ( !v20 && !v19 )
            {
              v35 = a3;
              v36 = (char *)v65;
              if ( v16 != v65 )
              {
                v37 = v16 - v65;
                do
                {
                  v38 = *v36++;
                  v39 = v36[v37 - 1];
                  v36[v37 - 1] = v38;
                  *(v36 - 1) = v39;
                  --v35;
                }
                while ( v35 );
                v34 = a3;
                v33 = v65;
              }
            }
            v5 = v58;
            v40 = (_BYTE *)v33;
            v62 = (_BYTE *)v33;
            while ( 1 )
            {
              if ( v16 > v5 )
              {
                while ( 1 )
                {
                  v5 += v34;
                  v57 = v5;
                  if ( v5 >= v16 )
                    break;
                  v41 = a4(v5, v16);
                  v19 = v41 == 0;
                  v20 = v41 < 0;
                  v34 = a3;
                  if ( !v20 && !v19 )
                    goto LABEL_48;
                }
                v33 = v65;
              }
              do
              {
                v5 += v34;
                if ( v5 > v33 )
                  break;
                v42 = a4(v5, v16);
                v33 = v65;
                v19 = v42 == 0;
                v20 = v42 < 0;
                v34 = a3;
              }
              while ( v20 || v19 );
              v40 = v62;
              v57 = v5;
LABEL_48:
              while ( 1 )
              {
                v34 = a3;
                v43 = (unsigned int)v40;
                v40 -= a3;
                v63 = v43;
                if ( (unsigned int)v40 <= v16 )
                  break;
                if ( a4((unsigned int)v40, v16) <= 0 )
                {
                  v34 = a3;
                  v43 = v63;
                  break;
                }
              }
              v5 = v57;
              v62 = v40;
              if ( (unsigned int)v40 < v57 )
                break;
              v44 = v40;
              if ( v40 != (_BYTE *)v57 )
              {
                v45 = v57 - (_DWORD)v40;
                v46 = v34;
                do
                {
                  v47 = *v44++;
                  v48 = v44[v45 - 1];
                  v44[v45 - 1] = v47;
                  *(v44 - 1) = v48;
                  --v46;
                }
                while ( v46 );
                v5 = v57;
                v40 = v62;
                v34 = a3;
              }
              v33 = v65;
              if ( (_BYTE *)v16 == v40 )
                v16 = v5;
            }
            if ( v16 < v43 )
            {
              v4 = a4;
              while ( 1 )
              {
                v43 -= v34;
                v64 = v43;
                if ( v43 <= v16 )
                  break;
                v49 = a4(v43, v16);
                v43 = v64;
                v19 = v49 == 0;
                v34 = a3;
                if ( !v19 )
                  goto LABEL_67;
              }
            }
            v4 = a4;
            do
            {
              v50 = v43 - v34;
              v64 = v50;
              if ( v50 <= v58 )
                break;
              v51 = a4(v50, v16);
              v43 = v64;
              v19 = v51 == 0;
              v34 = a3;
            }
            while ( v19 );
            v5 = v57;
LABEL_67:
            if ( (signed int)(v64 - v58) < (signed int)(v65 - v5) )
              break;
            if ( v58 < v64 )
            {
              v67[v53] = v58;
              v66[v53++] = v64;
            }
            v7 = v65;
            v6 = a3;
            if ( v5 >= v65 )
              goto LABEL_77;
            v58 = v5;
          }
          if ( v5 < v65 )
          {
            v67[v53] = v5;
            v66[v53++] = v65;
          }
          v5 = v58;
          if ( v58 < v64 )
          {
            v7 = v64;
            v6 = a3;
            continue;
          }
          break;
        }
        v6 = a3;
LABEL_77:
        v52 = v53-- - 1;
        if ( v53 >= 0 )
        {
          v5 = v67[v52];
          v7 = v66[v52];
          v58 = v67[v52];
          continue;
        }
        break;
      }
    }
  }
  else
  {
    *(_DWORD *)sub_10034888(a2) = 22;
    sub_10034711();
  }
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 100B5000: using guessed type int (*__guard_check_icall_fptr[2])();
// 1008DFF0: using guessed type int var_7C[30];
// 1008DFF0: using guessed type int var_F4[30];

//----- (1008E619) --------------------------------------------------------
signed int __cdecl sub_1008E619(_BYTE *a1, int a2, int a3, int a4)
{
  signed int *v4; // eax
  int v6; // ebx
  _BYTE *v7; // edx
  int v8; // edi
  char v9; // al
  char v10; // al
  int v11; // eax
  signed int v12; // [esp-4h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-4h]

  if ( a4 )
  {
    if ( !a1 )
      goto LABEL_4;
  }
  else if ( !a1 )
  {
    if ( a2 )
      goto LABEL_4;
    return 0;
  }
  if ( a2 )
  {
    if ( !a4 )
    {
      *a1 = 0;
      return 0;
    }
    if ( a3 )
    {
      v6 = a3 - (_DWORD)a1;
      v13 = a4;
      v7 = a1;
      v8 = a2;
      if ( a4 == -1 )
      {
        while ( 1 )
        {
          v9 = v7[v6];
          *v7++ = v9;
          if ( !v9 )
            break;
          if ( !--v8 )
            goto LABEL_23;
        }
      }
      else
      {
        while ( 1 )
        {
          v10 = v7[v6];
          *v7++ = v10;
          if ( !v10 )
            break;
          v11 = v13;
          if ( --v8 )
          {
            v11 = v13 - 1;
            v13 = v11;
            if ( v11 )
              continue;
          }
          if ( !v11 )
            *v7 = 0;
LABEL_23:
          if ( v8 )
            return 0;
          if ( a4 == -1 )
          {
            a1[a2 - 1] = 0;
            return 80;
          }
          *a1 = 0;
          v4 = (signed int *)sub_10034888(a1);
          v12 = 34;
          goto LABEL_5;
        }
      }
      return 0;
    }
    *a1 = 0;
  }
LABEL_4:
  v4 = (signed int *)sub_10034888(a1);
  v12 = 22;
LABEL_5:
  *v4 = v12;
  sub_10034711();
  return v12;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (1008E6FD) --------------------------------------------------------
signed int __cdecl sub_1008E6FD(_BYTE *a1, int a2, int a3, int a4)
{
  return sub_1008E619(a1, a2, a3, a4);
}

//----- (1008E710) --------------------------------------------------------
char __cdecl sub_1008E710(_BYTE *a1, _BYTE *a2)
{
  unsigned int v2; // eax
  _BYTE *v3; // edx
  _BYTE *v4; // esi
  int v6; // [esp+0h] [ebp-24h]
  int v7; // [esp+4h] [ebp-20h]
  int v8; // [esp+8h] [ebp-1Ch]
  int v9; // [esp+Ch] [ebp-18h]
  int v10; // [esp+10h] [ebp-14h]
  int v11; // [esp+14h] [ebp-10h]
  int v12; // [esp+18h] [ebp-Ch]
  int v13; // [esp+1Ch] [ebp-8h]

  v2 = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  v8 = 0;
  v7 = 0;
  v6 = 0;
  v3 = a2;
  while ( 1 )
  {
    LOBYTE(v2) = *v3;
    if ( !*v3 )
      break;
    ++v3;
    _bittestandset(&v6, v2);
  }
  v4 = a1;
  while ( 1 )
  {
    LOBYTE(v2) = *v4;
    if ( !*v4 )
      break;
    ++v4;
    if ( _bittest(&v6, v2) )
    {
      LOBYTE(v2) = (_BYTE)v4 - 1;
      return v2;
    }
  }
  return v2;
}

//----- (1008E760) --------------------------------------------------------
int __cdecl sub_1008E760(int a1, int a2)
{
  return sub_100353CD(a1, a2, 0);
}
// 100353CD: using guessed type _DWORD __cdecl sub_100353CD(_DWORD, _DWORD, _DWORD);

//----- (1008E77C) --------------------------------------------------------
unsigned __int8 *__cdecl sub_1008E77C(unsigned int a1, unsigned int a2, int a3)
{
  int v3; // ecx
  unsigned __int8 *v5; // edx
  int v6; // [esp+0h] [ebp-10h]
  int v7; // [esp+8h] [ebp-8h]
  char v8; // [esp+Ch] [ebp-4h]

  if ( !a1 )
  {
    *(_DWORD *)sub_10034888(v3) = 22;
    sub_10034711();
    return 0;
  }
  if ( !a2 )
  {
    *(_DWORD *)sub_10034888(v3) = 22;
    sub_10034711();
    return 0;
  }
  if ( a1 >= a2 )
    return 0;
  sub_10035A08(a3);
  v5 = (unsigned __int8 *)(a2 - 1);
  if ( *(_DWORD *)(v7 + 8) )
  {
    do
      --v5;
    while ( a1 <= (unsigned int)v5 && *(_BYTE *)(*v5 + v7 + 25) & 4 );
    v5 = (unsigned __int8 *)(a2 - (((_BYTE)a2 - (_BYTE)v5) & 1) - 1);
  }
  if ( v8 )
    *(_DWORD *)(v6 + 848) &= 0xFFFFFFFD;
  return v5;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10035A08: using guessed type _DWORD __stdcall sub_10035A08(_DWORD);

//----- (1008E833) --------------------------------------------------------
int __cdecl sub_1008E833(int a1, int a2, DWORD dwMapFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPWSTR lpDestStr, int cchDest, UINT CodePage, int a9)
{
  int v9; // edi
  int v10; // eax
  UINT v11; // ebx
  int result; // eax
  SIZE_T v13; // eax
  WCHAR *v14; // esi
  WCHAR *v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // ebx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  WCHAR *v21; // edi
  WCHAR *v22; // eax
  int v23; // eax
  char v24; // [esp+0h] [ebp-14h]
  int cchWideChar; // [esp+Ch] [ebp-8h]

  v9 = cbMultiByte;
  if ( cbMultiByte > 0 )
  {
    v10 = sub_10033E1F(lpMultiByteStr, cbMultiByte);
    v9 = v10 + 1;
    if ( v10 >= cbMultiByte )
      v9 = v10;
  }
  v11 = CodePage;
  if ( !CodePage )
  {
    v11 = *(_DWORD *)(*(_DWORD *)a1 + 8);
    CodePage = *(_DWORD *)(*(_DWORD *)a1 + 8);
  }
  result = sub_100336B8(v11, 8 * (a9 != 0) + 1, lpMultiByteStr, v9, 0, 0);
  cchWideChar = result;
  if ( result )
  {
    v13 = 2 * result < (unsigned int)(2 * result + 8) ? 2 * result + 8 : 0;
    if ( !v13 )
    {
      v14 = 0;
      goto LABEL_37;
    }
    if ( v13 > 0x400 )
    {
      v15 = (WCHAR *)sub_10034C52(v13);
      v14 = v15;
      if ( v15 )
      {
        *(_DWORD *)v15 = 56797;
        goto LABEL_13;
      }
    }
    else
    {
      sub_10034572(v24);
      v14 = (WCHAR *)&v24;
      if ( &v24 )
      {
        *(_DWORD *)&v24 = 52428;
LABEL_13:
        v14 += 4;
        if ( !v14 )
          goto LABEL_37;
        if ( !sub_100336B8(v11, 1, lpMultiByteStr, v9, v14, cchWideChar) )
          goto LABEL_37;
        v16 = cchWideChar;
        v17 = sub_10033389(a2, dwMapFlags, v14, cchWideChar, 0, 0, 0, 0, 0);
        v18 = v17;
        if ( !v17 )
          goto LABEL_37;
        if ( dwMapFlags & 0x400 )
        {
          if ( !cchDest )
            goto LABEL_38;
          if ( v17 <= cchDest )
          {
            v18 = sub_10033389(a2, dwMapFlags, v14, v16, lpDestStr, cchDest, 0, 0, 0);
            if ( v18 )
              goto LABEL_38;
          }
          goto LABEL_37;
        }
        v19 = 2 * v17 + 8;
        v20 = 2 * v17 < v19 ? v19 : 0;
        if ( 2 * v18 < v19 ? v19 : 0 )
        {
          if ( v20 > 0x400 )
          {
            v22 = (WCHAR *)sub_10034C52(2 * v18 < v19 ? v19 : 0);
            v21 = v22;
            if ( v22 )
            {
              *(_DWORD *)v22 = 56797;
LABEL_27:
              v21 += 4;
              if ( v21 && sub_10033389(a2, dwMapFlags, v14, cchWideChar, v21, v18, 0, 0, 0) )
              {
                v23 = cchDest ? sub_100361AB(CodePage, 0, v21, v18, (LPSTR)lpDestStr, cchDest, 0, 0) : sub_100361AB(CodePage, 0, v21, v18, 0, 0, 0, 0);
                v18 = v23;
                if ( v23 )
                {
                  sub_10033249(v21);
LABEL_38:
                  sub_10033249(v14);
                  return v18;
                }
              }
              goto LABEL_35;
            }
          }
          else
          {
            sub_10034572(v24);
            v21 = (WCHAR *)&v24;
            if ( &v24 )
            {
              *(_DWORD *)&v24 = 52428;
              goto LABEL_27;
            }
          }
        }
        else
        {
          v21 = 0;
        }
LABEL_35:
        sub_10033249(v21);
        goto LABEL_37;
      }
    }
LABEL_37:
    v18 = 0;
    goto LABEL_38;
  }
  return result;
}
// 10033249: using guessed type _DWORD __cdecl sub_10033249(_DWORD);
// 10033E1F: using guessed type _DWORD __cdecl sub_10033E1F(_DWORD, _DWORD);
// 10034572: using guessed type _DWORD __cdecl sub_10034572(char);

//----- (1008EA9D) --------------------------------------------------------
int __cdecl sub_1008EA9D(int a1, int a2, DWORD dwMapFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPWSTR lpDestStr, int cchDest, UINT CodePage, int a9)
{
  int result; // eax
  int v10; // [esp+0h] [ebp-10h]
  int v11; // [esp+4h] [ebp-Ch]
  char v12; // [esp+Ch] [ebp-4h]

  sub_10035A08(a1);
  result = sub_1008E833((int)&v11, a2, dwMapFlags, lpMultiByteStr, cbMultiByte, lpDestStr, cchDest, CodePage, a9);
  if ( v12 )
    *(_DWORD *)(v10 + 848) &= 0xFFFFFFFD;
  return result;
}
// 10035A08: using guessed type _DWORD __stdcall sub_10035A08(_DWORD);

//----- (1008EAF8) --------------------------------------------------------
BOOL sub_1008EAF8()
{
  return (unsigned __int8)sub_1003513E() == 0;
}
// 1003513E: using guessed type int sub_1003513E(void);

//----- (1008EB0A) --------------------------------------------------------
int __cdecl sub_1008EB0A(PCNZWCH lpString1, PCNZWCH lpString2, int cchCount1)
{
  int v3; // ecx
  int result; // eax

  if ( dword_100B1CD4 )
    return sub_100355DA(lpString1, lpString2, cchCount1, 0);
  if ( lpString1 && lpString2 )
  {
    if ( (unsigned int)cchCount1 <= 0x7FFFFFFF )
    {
      result = sub_10033AFF(lpString1, lpString2, cchCount1);
    }
    else
    {
      *(_DWORD *)sub_10034888(v3) = 22;
      sub_10034711();
      result = 0x7FFFFFFF;
    }
  }
  else
  {
    *(_DWORD *)sub_10034888(v3) = 22;
    sub_10034711();
    result = 0x7FFFFFFF;
  }
  return result;
}
// 10033AFF: using guessed type _DWORD __cdecl sub_10033AFF(_DWORD, _DWORD, _DWORD);
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 100B1CD4: using guessed type int dword_100B1CD4;

//----- (1008EB92) --------------------------------------------------------
int __cdecl sub_1008EB92(PCNZWCH lpString1, PCNZWCH lpString2, int cchCount1, int a4)
{
  int v4; // ecx
  int result; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // [esp+4h] [ebp-10h]
  int v11; // [esp+8h] [ebp-Ch]
  char v12; // [esp+10h] [ebp-4h]

  if ( !cchCount1 )
    return 0;
  if ( lpString1 && lpString2 )
  {
    v6 = 0x7FFFFFFF;
    if ( (unsigned int)cchCount1 <= 0x7FFFFFFF )
    {
      sub_10035A08(a4);
      v7 = *(_DWORD *)(v11 + 164);
      if ( v7 )
      {
        v8 = sub_10035B9D(v7, 0x1001u, lpString1, cchCount1, lpString2, cchCount1);
        if ( v8 )
          v6 = v8 - 2;
        else
          *(_DWORD *)sub_10034888(v9) = 22;
      }
      else
      {
        v6 = sub_10033AFF(lpString1, lpString2, cchCount1);
      }
      if ( v12 )
        *(_DWORD *)(v10 + 848) &= 0xFFFFFFFD;
    }
    else
    {
      *(_DWORD *)sub_10034888(v4) = 22;
      sub_10034711();
    }
    result = v6;
  }
  else
  {
    *(_DWORD *)sub_10034888(v4) = 22;
    sub_10034711();
    result = 0x7FFFFFFF;
  }
  return result;
}
// 10033AFF: using guessed type _DWORD __cdecl sub_10033AFF(_DWORD, _DWORD, _DWORD);
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10035A08: using guessed type _DWORD __stdcall sub_10035A08(_DWORD);

//----- (1008EC82) --------------------------------------------------------
int __cdecl sub_1008EC82(int a1, int a2, int a3)
{
  int result; // eax

  if ( dword_100B1CD4 )
    result = sub_1003481F(a1, a2, a3, 0);
  else
    result = sub_10034194(a1, a2, a3);
  return result;
}
// 10034194: using guessed type _DWORD __cdecl sub_10034194(_DWORD, _DWORD, _DWORD);
// 1003481F: using guessed type _DWORD __cdecl sub_1003481F(_DWORD, _DWORD, _DWORD, _DWORD);
// 100B1CD4: using guessed type int dword_100B1CD4;

//----- (1008ECB5) --------------------------------------------------------
int __cdecl sub_1008ECB5(int a1, int a2, unsigned int a3, int a4)
{
  int v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v9; // [esp+Ch] [ebp-10h]
  int v10; // [esp+10h] [ebp-Ch]
  char v11; // [esp+18h] [ebp-4h]

  sub_10035A08(a4);
  if ( a3 )
  {
    if ( a1 && a2 )
    {
      v4 = 0x7FFFFFFF;
      if ( a3 <= 0x7FFFFFFF )
      {
        v5 = *(_DWORD *)(v10 + 164);
        if ( v5 )
        {
          v6 = sub_10033F19((int)&v10, v5, 0x1001u, a1, a3, a2, a3, *(_DWORD *)(v10 + 16));
          if ( v6 )
            v4 = v6 - 2;
          else
            *(_DWORD *)sub_10034888(v7) = 22;
        }
        else
        {
          v4 = sub_10034644(a1, a2, a3, &v10);
        }
      }
      else
      {
        *(_DWORD *)sub_10034888(a1) = 22;
        sub_10034711();
      }
    }
    else
    {
      *(_DWORD *)sub_10034888(a1) = 22;
      sub_10034711();
      v4 = 0x7FFFFFFF;
    }
  }
  else
  {
    v4 = 0;
  }
  if ( v11 )
    *(_DWORD *)(v9 + 848) &= 0xFFFFFFFD;
  return v4;
}
// 10034644: using guessed type _DWORD __cdecl sub_10034644(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10035A08: using guessed type _DWORD __stdcall sub_10035A08(_DWORD);

//----- (1008EDAF) --------------------------------------------------------
BOOL __cdecl sub_1008EDAF(LPCSTR lpMultiByteStr, LPCSTR a2)
{
  BOOL v2; // ebx
  WCHAR *v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // [esp+8h] [ebp-30h]
  int v9; // [esp+Ch] [ebp-2Ch]
  LPCWSTR lpName; // [esp+10h] [ebp-28h]
  int v11; // [esp+14h] [ebp-24h]
  int v12; // [esp+18h] [ebp-20h]
  char v13; // [esp+1Ch] [ebp-1Ch]
  int v14; // [esp+20h] [ebp-18h]
  int v15; // [esp+24h] [ebp-14h]
  LPCWSTR lpValue; // [esp+28h] [ebp-10h]
  int v17; // [esp+2Ch] [ebp-Ch]
  int v18; // [esp+30h] [ebp-8h]
  char v19; // [esp+34h] [ebp-4h]

  v2 = 0;
  v3 = 0;
  v8 = 0;
  v9 = 0;
  lpName = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  lpValue = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v4 = sub_1003495F();
  if ( !sub_100354A4(lpMultiByteStr, (int)&v8, v4) )
  {
    v5 = sub_1003495F();
    v6 = sub_100354A4(a2, (int)&v14, v5);
    v3 = (WCHAR *)lpValue;
    if ( !v6 )
      v2 = SetEnvironmentVariableW(lpName, lpValue);
  }
  if ( v19 )
    sub_1003603E(v3);
  if ( v13 )
    sub_1003603E((LPVOID)lpName);
  return v2;
}

//----- (1008EE76) --------------------------------------------------------
SIZE_T __cdecl sub_1008EE76(LPCVOID lpMem)
{
  int v1; // ecx

  if ( lpMem )
    return HeapSize(hHeap, 0, lpMem);
  *(_DWORD *)sub_10034888(v1) = 22;
  sub_10034711();
  return -1;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (1008EEB5) --------------------------------------------------------
LPVOID __cdecl sub_1008EEB5(LPVOID lpMem, SIZE_T dwBytes)
{
  int v2; // ecx
  LPVOID result; // eax
  int v4; // eax
  int v5; // ST0C_4

  if ( !lpMem )
    return (LPVOID)sub_10034C52(dwBytes);
  if ( !dwBytes )
  {
    sub_1003603E(lpMem);
    return 0;
  }
  if ( dwBytes > 0xFFFFFFE0 )
  {
LABEL_6:
    *(_DWORD *)sub_10034888(v2) = 12;
    return 0;
  }
  while ( 1 )
  {
    result = HeapReAlloc(hHeap, 0, lpMem, dwBytes);
    if ( result )
      return result;
    if ( sub_10035139() )
    {
      v4 = sub_10034CD9(dwBytes);
      v2 = v5;
      if ( v4 )
        continue;
    }
    goto LABEL_6;
  }
}
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10034CD9: using guessed type _DWORD __cdecl sub_10034CD9(_DWORD);
// 10035139: using guessed type int sub_10035139(void);

//----- (1008EF7C) --------------------------------------------------------
int __cdecl sub_1008EF7C(int a1)
{
  int v1; // edi
  int v2; // ebx
  int v3; // esi
  int v4; // eax

  v1 = 0;
  v2 = 227;
  while ( 1 )
  {
    v3 = (v2 + v1) / 2;
    v4 = sub_10033AFF(a1, *(&off_100AA970 + 2 * v3), 85);
    if ( !v4 )
      break;
    if ( v4 >= 0 )
      v1 = v3 + 1;
    else
      v2 = v3 - 1;
    if ( v1 > v2 )
      return -1;
  }
  return dword_100AA974[2 * v3];
}
// 10033AFF: using guessed type _DWORD __cdecl sub_10033AFF(_DWORD, _DWORD, _DWORD);
// 100AA970: using guessed type void *off_100AA970;
// 100AA974: using guessed type int dword_100AA974[];

//----- (1008EFE0) --------------------------------------------------------
int __cdecl sub_1008EFE0(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  wchar_t *v7; // ebx
  int v8; // eax
  int v9; // edi

  if ( !a1 || a1 == 1024 || a1 == 2048 || !a2 && a3 > 0 || a3 < 0 )
    return 0;
  v3 = 0;
  v4 = 227;
  while ( 1 )
  {
    v5 = (v4 + v3) / 2;
    if ( a1 == dword_100A94A0[2 * v5] )
      break;
    if ( a1 - dword_100A94A0[2 * v5] >= 0 )
      v3 = v5 + 1;
    else
      v4 = v5 - 1;
    if ( v3 > v4 )
      return 0;
  }
  if ( v5 < 0 )
    return 0;
  v7 = off_100A94A4[2 * v5];
  v8 = sub_10034B3F(off_100A94A4[2 * v5], 85);
  v9 = v8;
  if ( a3 > 0 )
  {
    if ( v8 < a3 )
    {
      if ( sub_10034824(a2, a3, v7) )
      {
        sub_1003465D(0, 0, 0, 0, 0);
        JUMPOUT(*(_DWORD *)byte_1008F082);
      }
      return v9 + 1;
    }
    return 0;
  }
  return v9 + 1;
}
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034824: using guessed type _DWORD __cdecl sub_10034824(_DWORD, _DWORD, _DWORD);
// 10034B3F: using guessed type _DWORD __cdecl sub_10034B3F(_DWORD, _DWORD);
// 100A94A0: using guessed type int dword_100A94A0[];

//----- (1008F0AB) --------------------------------------------------------
int __cdecl sub_1008F0AB(int a1)
{
  int v1; // eax
  int result; // eax

  if ( a1 && (v1 = sub_1008EF7C(a1), v1 >= 0) && (unsigned int)v1 < 0xE4 )
    result = dword_100A94A0[2 * v1];
  else
    result = 0;
  return result;
}
// 100A94A0: using guessed type int dword_100A94A0[];

//----- (1008F0E2) --------------------------------------------------------
signed int __stdcall sub_1008F0E2(_DWORD *a1, _DWORD **a2, _DWORD *a3)
{
  signed int v3; // esi
  int v4; // ecx
  void *v5; // eax
  DWORD v6; // esi
  int v8; // ST00_4

  v3 = 0;
  sub_10033325(*a1);
  v4 = 56 * (**a2 & 0x3F);
  if ( !(*((_BYTE *)&lpCriticalSection[**a2 >> 6][1].LockSemaphore + v4) & 1) )
    goto LABEL_4;
  v5 = (void *)sub_10034F63(**a2);
  if ( !FlushFileBuffers(v5) )
  {
    v6 = GetLastError();
    *(_DWORD *)sub_100334E7() = v6;
LABEL_4:
    *(_DWORD *)sub_10034888(v4) = 9;
    v3 = -1;
  }
  v8 = *a3;
  sub_100331E0();
  return v3;
}
// 10033325: using guessed type _DWORD __cdecl sub_10033325(_DWORD);
// 100334E7: using guessed type int sub_100334E7(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10034F63: using guessed type _DWORD __cdecl sub_10034F63(_DWORD);

//----- (1008F29B) --------------------------------------------------------
signed int __cdecl sub_1008F29B(signed int a1)
{
  int v1; // ecx
  int v3; // [esp+4h] [ebp-10h]
  signed int *v4; // [esp+8h] [ebp-Ch]
  int v5; // [esp+Ch] [ebp-8h]

  if ( a1 == -2 )
  {
    *(_DWORD *)sub_10034888(v1) = 9;
  }
  else
  {
    if ( a1 >= 0 && a1 < (unsigned int)dword_100B1F48 )
    {
      v1 = 56 * (a1 & 0x3F);
      if ( *((_BYTE *)&lpCriticalSection[a1 >> 6][1].LockSemaphore + v1) & 1 )
      {
        v5 = a1;
        v4 = &a1;
        v3 = a1;
        return sub_1008F0E2(&v3, &v4, &v5);
      }
    }
    *(_DWORD *)sub_10034888(v1) = 9;
    sub_10034711();
  }
  return -1;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 100B1F48: using guessed type int dword_100B1F48;

//----- (1008F399) --------------------------------------------------------
DWORD *__cdecl sub_1008F399(DWORD *a1, int a2, const CHAR *a3, int a4, int a5)
{
  LPCRITICAL_SECTION v5; // eax
  int v6; // eax
  bool v7; // zf
  DWORD *v8; // esi
  int v9; // ecx
  LPCSTR v10; // edx
  int v11; // edi
  int v12; // ebx
  signed int v13; // ecx
  _BYTE *v14; // eax
  int v15; // edi
  signed int v16; // edi
  char *v17; // ebx
  signed int v18; // edx
  int v19; // esi
  int v20; // ecx
  LPCSTR v21; // eax
  LPCRITICAL_SECTION v22; // ecx
  char v23; // ah
  int v24; // ST1C_4
  int v25; // eax
  DWORD v26; // eax
  LPCSTR v27; // eax
  int v28; // esi
  char v29; // cl
  char *v30; // edx
  int v31; // esi
  int v33; // [esp+10h] [ebp-80h]
  int v34; // [esp+14h] [ebp-7Ch]
  int v35; // [esp+18h] [ebp-78h]
  int v36; // [esp+1Ch] [ebp-74h]
  int v37; // [esp+20h] [ebp-70h]
  int v38; // [esp+24h] [ebp-6Ch]
  char *v39; // [esp+28h] [ebp-68h]
  HANDLE hFile; // [esp+2Ch] [ebp-64h]
  LPCSTR lpMultiByteStr; // [esp+30h] [ebp-60h]
  DWORD NumberOfBytesWritten; // [esp+34h] [ebp-5Ch]
  __int16 v43; // [esp+38h] [ebp-58h]
  unsigned int v44; // [esp+3Ch] [ebp-54h]
  int v45; // [esp+40h] [ebp-50h]
  LPCRITICAL_SECTION v46; // [esp+44h] [ebp-4Ch]
  char *v47; // [esp+48h] [ebp-48h]
  int v48; // [esp+4Ch] [ebp-44h]
  WCHAR WideCharStr[2]; // [esp+50h] [ebp-40h]
  int v50; // [esp+54h] [ebp-3Ch]
  DWORD v51; // [esp+58h] [ebp-38h]
  int cchWideChar; // [esp+5Ch] [ebp-34h]
  CHAR v53; // [esp+63h] [ebp-2Dh]
  LPCSTR v54; // [esp+64h] [ebp-2Ch]
  char Buffer; // [esp+68h] [ebp-28h]
  char v56; // [esp+70h] [ebp-20h]
  CHAR v57; // [esp+71h] [ebp-1Fh]
  char v58[8]; // [esp+78h] [ebp-18h]

  lpMultiByteStr = a3;
  v50 = a5;
  v48 = a2 >> 6;
  v5 = lpCriticalSection[a2 >> 6];
  v45 = 56 * (a2 & 0x3F);
  hFile = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v5[1].DebugInfo + v45);
  v44 = (unsigned int)&a3[a4];
  v6 = GetConsoleOutputCP();
  v7 = *(_BYTE *)(a5 + 20) == 0;
  v38 = v6;
  if ( v7 )
    sub_100343EC(a5);
  v8 = a1;
  v9 = *(_DWORD *)(*(_DWORD *)(a5 + 12) + 8);
  *a1 = 0;
  v37 = v9;
  a1[1] = 0;
  a1[2] = 0;
  v10 = lpMultiByteStr;
  v54 = lpMultiByteStr;
  if ( (unsigned int)lpMultiByteStr < v44 )
  {
    v11 = v45;
    v12 = 0;
    v47 = 0;
    while ( 1 )
    {
      v53 = *v10;
      *(_DWORD *)WideCharStr = 0;
      cchWideChar = 1;
      if ( v9 == 65001 )
      {
        v13 = 0;
        v14 = (char *)&lpCriticalSection[v48][1].SpinCount + v11 + 2;
        v47 = (char *)&lpCriticalSection[v48][1].SpinCount + v11 + 2;
        do
        {
          if ( !*v14 )
            break;
          ++v13;
          ++v14;
        }
        while ( v13 < 5 );
        v15 = v44 - (_DWORD)v10;
        cchWideChar = v13;
        if ( v13 <= 0 )
        {
          v20 = byte_100B0B50[*(unsigned __int8 *)v10] + 1;
          v46 = (LPCRITICAL_SECTION)v20;
          if ( v20 > v15 )
          {
            if ( v15 > 0 )
            {
              v31 = v45;
              do
              {
                *((_BYTE *)&lpCriticalSection[v48][1].SpinCount + v31 + v12 + 2) = v10[v12];
                ++v12;
              }
              while ( v12 < v15 );
LABEL_44:
              v8 = a1;
            }
LABEL_45:
            v8[1] += v15;
            return v8;
          }
          v33 = 0;
          v34 = 0;
          v51 = (DWORD)v10;
          cchWideChar = (v20 == 4) + 1;
          if ( sub_10034D01(WideCharStr, &v51, cchWideChar, &v33, v50) == -1 )
            return v8;
          v11 = v45;
        }
        else
        {
          v51 = byte_100B0B50[(unsigned __int8)*v47] + 1;
          v46 = (LPCRITICAL_SECTION)(v51 - v13);
          if ( (signed int)(v51 - v13) > v15 )
          {
            if ( v15 > 0 )
            {
              v27 = v54;
              v28 = cchWideChar;
              do
              {
                v29 = v27[v12];
                v30 = (char *)lpCriticalSection[v48] + v45 + v12++;
                v30[v28 + 46] = v29;
              }
              while ( v12 < v15 );
              goto LABEL_44;
            }
            goto LABEL_45;
          }
          v16 = 0;
          v17 = v47;
          do
            v58[v16++] = *v17++;
          while ( v16 < v13 );
          v12 = 0;
          if ( (signed int)v46 > 0 )
          {
            sub_100359C2(&v58[v13], v10, v46);
            v13 = cchWideChar;
          }
          v11 = v45;
          v18 = 0;
          v19 = v48;
          do
            *((_BYTE *)&lpCriticalSection[v19][1].SpinCount + v11 + v18++ + 2) = 0;
          while ( v18 < v13 );
          v8 = a1;
          v39 = v58;
          v35 = 0;
          v36 = 0;
          cchWideChar = (v51 == 4) + 1;
          if ( sub_10034D01(WideCharStr, &v39, cchWideChar, &v35, v50) == -1 )
            return v8;
        }
        v21 = &v54[(_DWORD)v46 - 1];
      }
      else
      {
        v22 = lpCriticalSection[v48];
        v46 = v22;
        v23 = *((_BYTE *)&v22[1].SpinCount + v11 + 1);
        if ( v23 & 4 )
        {
          v24 = v50;
          v56 = *((_BYTE *)&v22[1].SpinCount + v11 + 2);
          v57 = *v10;
          *((_BYTE *)&v22[1].SpinCount + v11 + 1) = v23 & 0xFB;
          v25 = sub_1003323A(WideCharStr, &v56, 2, v24);
LABEL_30:
          if ( v25 == -1 )
            return v8;
          v21 = v54;
          goto LABEL_32;
        }
        if ( *(_WORD *)(**(_DWORD **)(v50 + 12) + 2 * *(unsigned __int8 *)v10) >= 0 )
        {
          v25 = sub_1003323A(WideCharStr, v10, 1, v50);
          goto LABEL_30;
        }
        v51 = (DWORD)(v10 + 1);
        if ( (unsigned int)(v10 + 1) >= v44 )
        {
          *((_BYTE *)&v46[1].SpinCount + v11 + 2) = *v10;
          *((_BYTE *)&lpCriticalSection[v48][1].SpinCount + v11 + 1) |= 4u;
          v8[1] = (DWORD)(v47 + 1);
          return v8;
        }
        if ( sub_1003323A(WideCharStr, v10, 2, v50) == -1 )
          return v8;
        v21 = (LPCSTR)v51;
      }
LABEL_32:
      v54 = v21 + 1;
      v26 = sub_100361AB(v38, 0, WideCharStr, cchWideChar, &Buffer, 5, 0, 0);
      v51 = v26;
      if ( !v26 )
        return v8;
      if ( !WriteFile(hFile, &Buffer, v26, &NumberOfBytesWritten, 0) )
      {
LABEL_51:
        *v8 = GetLastError();
        return v8;
      }
      v10 = v54;
      v47 = (char *)&v54[v8[2] - (_DWORD)lpMultiByteStr];
      v8[1] = (DWORD)v47;
      if ( NumberOfBytesWritten < v51 )
        return v8;
      if ( v53 == 10 )
      {
        v43 = 13;
        if ( !WriteFile(hFile, &v43, 1u, &NumberOfBytesWritten, 0) )
          goto LABEL_51;
        if ( NumberOfBytesWritten < 1 )
          return v8;
        ++v8[2];
        ++v8[1];
        v10 = v54;
        v47 = (char *)v8[1];
      }
      if ( (unsigned int)v10 >= v44 )
        return v8;
      v9 = v37;
    }
  }
  return v8;
}
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10034D01: using guessed type _DWORD __cdecl sub_10034D01(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100359C2: using guessed type _DWORD __cdecl sub_100359C2(_DWORD, _DWORD, _DWORD);
// 1008F399: using guessed type char var_18[8];

//----- (1008F851) --------------------------------------------------------
DWORD *__cdecl sub_1008F851(DWORD *a1, unsigned int a2, int a3)
{
  _DWORD *v3; // edi
  __int16 *v4; // edi
  int v5; // ebx

  *a1 = 0;
  v3 = a1 + 1;
  *v3 = 0;
  v3[1] = 0;
  v4 = (__int16 *)a2;
  if ( a2 < a2 + a3 )
  {
    while ( 1 )
    {
      v5 = (unsigned __int16)*v4;
      if ( (unsigned __int16)sub_1003606B(*v4) != (_WORD)v5 )
        break;
      a1[1] += 2;
      if ( v5 == 10 )
      {
        if ( (unsigned __int16)sub_1003606B(13) != 13 )
          break;
        ++a1[1];
        ++a1[2];
      }
      ++v4;
      if ( (unsigned int)v4 >= a2 + a3 )
        return a1;
    }
    *a1 = GetLastError();
  }
  return a1;
}

//----- (1008F8D3) --------------------------------------------------------
bool __cdecl sub_1008F8D3(int a1, int a2)
{
  int v2; // edi
  int v3; // ebx
  bool result; // al
  DWORD Mode; // [esp+Ch] [ebp-4h]

  if ( !sub_10036246(a1) )
    goto LABEL_11;
  v2 = a1 >> 6;
  v3 = 56 * (a1 & 0x3F);
  if ( *((_BYTE *)&lpCriticalSection[a1 >> 6][1].LockSemaphore + v3) >= 0 )
    goto LABEL_11;
  if ( !*(_BYTE *)(a2 + 20) )
    sub_100343EC(a2);
  if ( *(_DWORD *)(*(_DWORD *)(a2 + 12) + 168) || *((_BYTE *)&lpCriticalSection[v2][1].LockSemaphore + v3 + 1) )
    result = GetConsoleMode(*(HANDLE *)((char *)&lpCriticalSection[v2][1].DebugInfo + v3), &Mode) != 0;
  else
LABEL_11:
    result = 0;
  return result;
}
// 100343EC: using guessed type int __thiscall sub_100343EC(_DWORD);
// 10036246: using guessed type _DWORD __cdecl sub_10036246(_DWORD);

//----- (1008F96F) --------------------------------------------------------
DWORD *__cdecl sub_1008F96F(DWORD *a1, int a2, unsigned int a3, int a4)
{
  int v4; // ecx
  char *v5; // ecx
  unsigned int v6; // edx
  HANDLE v7; // edi
  char *v8; // esi
  char v9; // al
  DWORD v10; // esi
  HANDLE v11; // eax
  unsigned int v13; // [esp+0h] [ebp-140Ch]
  HANDLE hFile; // [esp+4h] [ebp-1408h]
  char Buffer; // [esp+8h] [ebp-1404h]
  char v16; // [esp+1407h] [ebp-5h]
  char *v17; // [esp+141Ch] [ebp+10h]

  j_ _alloca_probe(v4);
  v5 = (char *)a3;
  v6 = a3 + a4;
  hFile = (HANDLE)*((_DWORD *)&lpCriticalSection[a2 >> 6][1].DebugInfo + 14 * (a2 & 0x3F));
  *a1 = 0;
  v13 = a3 + a4;
  a1[1] = 0;
  a1[2] = 0;
  if ( a3 < a3 + a4 )
  {
    v7 = hFile;
    while ( 1 )
    {
      v8 = &Buffer;
      do
      {
        if ( (unsigned int)v5 >= v6 )
          break;
        v9 = *v5++;
        if ( v9 == 10 )
        {
          ++a1[2];
          *v8++ = 13;
        }
        *v8++ = v9;
      }
      while ( v8 < &v16 );
      v17 = v5;
      v10 = v8 - &Buffer;
      if ( !WriteFile(v7, &Buffer, v10, (LPDWORD)&hFile, 0) )
        break;
      v11 = hFile;
      a1[1] += (DWORD)hFile;
      if ( (unsigned int)v11 >= v10 )
      {
        v5 = v17;
        v6 = v13;
        if ( (unsigned int)v17 < v13 )
          continue;
      }
      return a1;
    }
    *a1 = GetLastError();
  }
  return a1;
}
// 1003381B: using guessed type int __thiscall j_ _alloca_probe(_DWORD);

//----- (1008FA80) --------------------------------------------------------
DWORD *__cdecl sub_1008FA80(DWORD *a1, int a2, unsigned __int16 *a3, int a4)
{
  int v4; // ecx
  unsigned __int16 *v5; // ecx
  unsigned __int16 *v6; // edx
  char *v7; // esi
  int v8; // eax
  unsigned int v9; // esi
  DWORD v10; // eax
  unsigned __int16 *v12; // [esp+0h] [ebp-1410h]
  DWORD NumberOfBytesWritten; // [esp+4h] [ebp-140Ch]
  HANDLE hFile; // [esp+8h] [ebp-1408h]
  char Buffer; // [esp+Ch] [ebp-1404h]
  char v16; // [esp+140Ah] [ebp-6h]
  unsigned __int16 *v17; // [esp+1420h] [ebp+10h]

  j_ _alloca_probe(v4);
  v5 = a3;
  v6 = (unsigned __int16 *)((char *)a3 + a4);
  hFile = (HANDLE)*((_DWORD *)&lpCriticalSection[a2 >> 6][1].DebugInfo + 14 * (a2 & 0x3F));
  *a1 = 0;
  v12 = (unsigned __int16 *)((char *)a3 + a4);
  a1[1] = 0;
  a1[2] = 0;
  while ( v5 < v6 )
  {
    v7 = &Buffer;
    do
    {
      if ( v5 >= v6 )
        break;
      v8 = *v5;
      ++v5;
      if ( v8 == 10 )
      {
        a1[2] += 2;
        *(_WORD *)v7 = 13;
        v7 += 2;
      }
      *(_WORD *)v7 = v8;
      v7 += 2;
    }
    while ( v7 < &v16 );
    v17 = v5;
    v9 = (v7 - &Buffer) & 0xFFFFFFFE;
    if ( !WriteFile(hFile, &Buffer, v9, &NumberOfBytesWritten, 0) )
    {
      *a1 = GetLastError();
      return a1;
    }
    v10 = NumberOfBytesWritten;
    a1[1] += NumberOfBytesWritten;
    if ( v10 < v9 )
      return a1;
    v5 = v17;
    v6 = v12;
  }
  return a1;
}
// 1003381B: using guessed type int __thiscall j_ _alloca_probe(_DWORD);

//----- (1008FBA3) --------------------------------------------------------
DWORD *__cdecl sub_1008FBA3(DWORD *a1, int a2, unsigned int a3, int a4)
{
  int v4; // ecx
  DWORD *v5; // esi
  DWORD *v6; // edi
  unsigned __int16 *v7; // edi
  unsigned int v8; // esi
  WCHAR *v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v14; // [esp+0h] [ebp-1418h]
  DWORD NumberOfBytesWritten; // [esp+4h] [ebp-1414h]
  HANDLE hFile; // [esp+8h] [ebp-1410h]
  unsigned int v17; // [esp+Ch] [ebp-140Ch]
  char MultiByteStr[3416]; // [esp+10h] [ebp-1408h]
  WCHAR WideCharStr; // [esp+D68h] [ebp-6B0h]
  int v20; // [esp+13F8h] [ebp-20h]
  char v21; // [esp+1410h] [ebp-8h]

  j_ _alloca_probe(v4);
  v5 = a1;
  hFile = (HANDLE)*((_DWORD *)&lpCriticalSection[a2 >> 6][1].DebugInfo + 14 * (a2 & 0x3F));
  v17 = a3 + a4;
  *a1 = 0;
  v6 = a1 + 1;
  *v6 = 0;
  v6[1] = 0;
  v7 = (unsigned __int16 *)a3;
  if ( a3 < a3 + a4 )
  {
    while ( 1 )
    {
      v8 = v17;
      v9 = &WideCharStr;
      do
      {
        if ( (unsigned int)v7 >= v8 )
          break;
        v10 = *v7;
        ++v7;
        if ( v10 == 10 )
        {
          *v9 = 13;
          ++v9;
        }
        *v9 = v10;
        ++v9;
      }
      while ( v9 < (WCHAR *)&v21 );
      v20 = v9 - &WideCharStr;
      v11 = sub_100361AB(65001, 0, &WideCharStr, v20, MultiByteStr, 3413, 0, 0);
      v5 = a1;
      v14 = v11;
      if ( !v11 )
        break;
      v12 = 0;
      if ( v11 )
      {
        while ( WriteFile(hFile, &MultiByteStr[v12], v11 - v12, &NumberOfBytesWritten, 0) )
        {
          v12 += NumberOfBytesWritten;
          v11 = v14;
          if ( v12 >= v14 )
            goto LABEL_11;
        }
        break;
      }
LABEL_11:
      a1[1] = (DWORD)v7 - a3;
      if ( (unsigned int)v7 >= v17 )
        return v5;
    }
    *a1 = GetLastError();
  }
  return v5;
}
// 1003381B: using guessed type int __thiscall j_ _alloca_probe(_DWORD);
// 1008FBA3: using guessed type CHAR MultiByteStr[3416];

//----- (1008FD7A) --------------------------------------------------------
signed int __cdecl sub_1008FD7A(signed int a1, int a2, int a3, int a4)
{
  BOOL v5; // eax
  signed int v6; // ebx
  int v7; // [esp+10h] [ebp-24h]

  if ( a1 == -2 )
  {
    *(_BYTE *)(a4 + 36) = 1;
    *(_DWORD *)(a4 + 32) = 0;
    *(_BYTE *)(a4 + 28) = 1;
    *(_DWORD *)(a4 + 24) = 9;
    return -1;
  }
  v5 = a1 >= 0 && a1 < (unsigned int)dword_100B1F48;
  if ( !v5 || (v7 = 56 * (a1 & 0x3F), !(*((_BYTE *)&lpCriticalSection[a1 >> 6][1].LockSemaphore + v7) & 1)) )
  {
    *(_BYTE *)(a4 + 36) = 1;
    *(_DWORD *)(a4 + 32) = 0;
    *(_BYTE *)(a4 + 28) = 1;
    *(_DWORD *)(a4 + 24) = 9;
    sub_10034B08(0, 0, 0, 0, 0, a4);
    return -1;
  }
  sub_10033325(a1);
  v6 = -1;
  if ( *((_BYTE *)&lpCriticalSection[a1 >> 6][1].LockSemaphore + v7) & 1 )
  {
    v6 = sub_1003382A(a1, a2, a3, a4);
  }
  else
  {
    *(_BYTE *)(a4 + 28) = 1;
    *(_DWORD *)(a4 + 24) = 9;
    *(_BYTE *)(a4 + 36) = 1;
    *(_DWORD *)(a4 + 32) = 0;
  }
  sub_100331E0();
  return v6;
}
// 10033325: using guessed type _DWORD __cdecl sub_10033325(_DWORD);
// 1003382A: using guessed type _DWORD __cdecl sub_1003382A(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100B1F48: using guessed type int dword_100B1F48;

//----- (1008FECF) --------------------------------------------------------
int __cdecl sub_1008FECF(int a1, const void *a2, DWORD a3, int a4)
{
  int v4; // ecx
  int v6; // edi
  LPCRITICAL_SECTION v7; // eax
  char v8; // al
  int v9; // edi
  DWORD *v10; // eax
  int *v11; // esi
  int v12; // edx
  int v13; // ecx
  LPCRITICAL_SECTION v14; // eax
  void *v15; // ecx
  int *v16; // esi
  DWORD v17; // [esp+Ch] [ebp-30h]
  DWORD NumberOfBytesWritten; // [esp+10h] [ebp-2Ch]
  int v19; // [esp+14h] [ebp-28h]
  int v20; // [esp+18h] [ebp-24h]
  int v21; // [esp+1Ch] [ebp-20h]
  int v22; // [esp+20h] [ebp-1Ch]
  int v23; // [esp+24h] [ebp-18h]
  int v24; // [esp+28h] [ebp-14h]
  int v25; // [esp+2Ch] [ebp-10h]
  DWORD nNumberOfBytesToWrite; // [esp+30h] [ebp-Ch]
  LPCVOID lpBuffer; // [esp+34h] [ebp-8h]
  char v28; // [esp+3Bh] [ebp-1h]

  v4 = a1;
  v25 = a1;
  lpBuffer = a2;
  nNumberOfBytesToWrite = a3;
  if ( a3 )
  {
    if ( !a2
      || ((v6 = 56 * (a1 & 0x3F),
           v24 = a1 >> 6,
           v7 = lpCriticalSection[a1 >> 6],
           v23 = v6,
           v8 = *((_BYTE *)&v7[1].LockSemaphore + v6 + 1),
           v28 = v8,
           v8 == 2)
       || v8 == 1)
      && !(~(_BYTE)a3 & 1) )
    {
      *(_BYTE *)(a4 + 36) = 1;
      *(_DWORD *)(a4 + 32) = 0;
      *(_BYTE *)(a4 + 28) = 1;
      *(_DWORD *)(a4 + 24) = 22;
      sub_10034B08(0, 0, 0, 0, 0, a4);
      return -1;
    }
    if ( *((_BYTE *)&lpCriticalSection[v24][1].LockSemaphore + v6) & 0x20 )
    {
      sub_10034D7E(a1, 0i64, 2u, a4);
      v4 = v25;
    }
    v9 = 0;
    v20 = 0;
    if ( sub_1008F8D3(v4, a4) )
    {
      if ( v28 )
      {
        if ( v28 != 1 && v28 != 2 )
        {
LABEL_30:
          v12 = v24;
          v13 = v23;
LABEL_31:
          if ( v9 )
          {
            if ( v9 == 5 )
            {
              *(_BYTE *)(a4 + 28) = 1;
              *(_DWORD *)(a4 + 24) = 9;
              *(_BYTE *)(a4 + 36) = 1;
              *(_DWORD *)(a4 + 32) = 5;
            }
            else
            {
              sub_10033F5A(v9, a4);
            }
            return -1;
          }
          if ( !(*((_BYTE *)&lpCriticalSection[v12][1].LockSemaphore + v13) & 0x40) || *(_BYTE *)lpBuffer != 26 )
          {
            *(_BYTE *)(a4 + 28) = 1;
            *(_DWORD *)(a4 + 24) = 28;
            *(_BYTE *)(a4 + 36) = 1;
            *(_DWORD *)(a4 + 32) = 0;
            return -1;
          }
          return 0;
        }
        v10 = sub_1008F851(&v17, (unsigned int)lpBuffer, nNumberOfBytesToWrite);
      }
      else
      {
        v10 = sub_1008F399(&v17, v25, (const CHAR *)lpBuffer, nNumberOfBytesToWrite, a4);
      }
    }
    else
    {
      v12 = v24;
      v13 = v23;
      v14 = lpCriticalSection[v24];
      if ( *((_BYTE *)&v14[1].LockSemaphore + v23) >= 0 )
      {
        v15 = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v14[1].DebugInfo + v23);
        v17 = 0;
        NumberOfBytesWritten = 0;
        v19 = 0;
        if ( !WriteFile(v15, lpBuffer, nNumberOfBytesToWrite, &NumberOfBytesWritten, 0) )
          v17 = GetLastError();
        v11 = (int *)&v17;
        goto LABEL_28;
      }
      if ( v28 )
      {
        if ( v28 == 1 )
        {
          v10 = sub_1008FBA3(&v17, v25, (unsigned int)lpBuffer, nNumberOfBytesToWrite);
        }
        else
        {
          if ( v28 != 2 )
            goto LABEL_31;
          v10 = sub_1008FA80(&v17, v25, (unsigned __int16 *)lpBuffer, nNumberOfBytesToWrite);
        }
      }
      else
      {
        v10 = sub_1008F96F(&v17, v25, (unsigned int)lpBuffer, nNumberOfBytesToWrite);
      }
    }
    v11 = (int *)v10;
LABEL_28:
    v20 = *v11;
    v16 = v11 + 1;
    v21 = *v16;
    v22 = v16[1];
    if ( v21 )
      return v21 - v22;
    v9 = v20;
    goto LABEL_30;
  }
  return 0;
}
// 10033F5A: using guessed type _DWORD __cdecl sub_10033F5A(_DWORD, _DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (10090172) --------------------------------------------------------
BOOL __cdecl sub_10090172(DWORD dwInfoType, LPCWSTR lpSrcStr, int cchSrc, LPWORD lpCharType)
{
  return GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType);
}

//----- (10090191) --------------------------------------------------------
signed int __cdecl sub_10090191(_DWORD *a1, int a2, int a3)
{
  unsigned int v3; // ecx
  int v4; // eax
  unsigned int v5; // ST04_4
  signed int result; // eax
  unsigned int v7; // [esp-4h] [ebp-8h]

  v3 = a3 & 0xFFF7FFFF;
  if ( a3 & 0xFFF7FFFF & a2 & 0xFCF0FCE0 )
  {
    if ( a1 )
    {
      v4 = sub_1003573D(0, 0);
      v3 = v5;
      *a1 = v4;
    }
    *(_DWORD *)sub_10034888(v3) = 22;
    sub_10034711();
    result = 22;
  }
  else
  {
    v7 = a3 & 0xFFF7FFFF;
    if ( a1 )
      *a1 = sub_1003573D(a2, v7);
    else
      sub_1003573D(a2, v7);
    result = 0;
  }
  return result;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 1003573D: using guessed type _DWORD __cdecl sub_1003573D(_DWORD, _DWORD);

//----- (10090207) --------------------------------------------------------
int __cdecl sub_10090207(_DWORD *a1)
{
  *a1 = sub_10035C06();
  a1[1] = sub_1003512A();
  return 0;
}
// 1003512A: using guessed type int sub_1003512A(void);
// 10035C06: using guessed type int sub_10035C06(void);

//----- (1009022B) --------------------------------------------------------
BOOL __cdecl sub_1009022B(_DWORD *a1)
{
  BOOL result; // eax
  int v2; // [esp+4h] [ebp-8h]
  int v3; // [esp+8h] [ebp-4h]

  sub_100352B0(*a1);
  sub_10033F23(a1[1]);
  v2 = 0;
  v3 = 0;
  if ( sub_10034347(&v2) || *a1 != v2 )
    result = 1;
  else
    result = a1[1] != v3;
  return result;
}
// 10033F23: using guessed type _DWORD __cdecl sub_10033F23(_DWORD);
// 10034347: using guessed type _DWORD __cdecl sub_10034347(_DWORD);
// 100352B0: using guessed type _DWORD __cdecl sub_100352B0(_DWORD);

//----- (1009028A) --------------------------------------------------------
signed int __cdecl sub_1009028A(_DWORD *a1)
{
  int v1; // edx
  int v2; // ecx
  int v4; // [esp+0h] [ebp-8h]
  int v5; // [esp+4h] [ebp-4h]

  v4 = 0;
  v5 = 0;
  if ( sub_10034347(&v4) )
    return 1;
  v1 = v4;
  v2 = v5;
  *a1 = v4;
  a1[1] = v2;
  v4 = v1 | 0x1F;
  if ( sub_10034F09(&v4) )
    return 1;
  sub_1003423E();
  return 0;
}
// 1003423E: using guessed type int sub_1003423E(void);
// 10034347: using guessed type _DWORD __cdecl sub_10034347(_DWORD);
// 10034F09: using guessed type _DWORD __cdecl sub_10034F09(_DWORD);

//----- (100902F0) --------------------------------------------------------
void __usercall sub_100902F0(double a1@<st0>)
{
  int v1; // eax
  bool v2; // zf
  int v3; // ST00_4
  int v4; // ST04_4
  char v5; // [esp+4h] [ebp-8h]

  if ( !dword_100B2A40 )
    goto LABEL_9;
  v1 = _mm_getcsr() & 0x7F80;
  v2 = v1 == 8064;
  if ( v1 == 8064 )
    v2 = (v5 & 0x7F) == 127;
  if ( v2 )
  {
    sub_100357A6();
  }
  else
  {
LABEL_9:
    sub_10034504(LODWORD(a1), *(unsigned __int64 *)&a1 >> 32);
    sub_10090348(v3, v4);
  }
}
// 10034504: using guessed type _DWORD __cdecl sub_10034504(_DWORD, _DWORD);
// 100357A6: using guessed type int sub_100357A6(void);
// 10090348: using guessed type double __cdecl sub_10090348(_DWORD, _DWORD);
// 100B2A40: using guessed type int dword_100B2A40;

//----- (10090348) --------------------------------------------------------
#error "100903F9: call analysis failed (funcsize=70)"

//----- (10090450) --------------------------------------------------------
double __cdecl sub_10090450(double a1)
{
  int v1; // eax
  bool v2; // zf
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __m128d v5; // xmm0
  int v6; // eax
  __m128i v7; // xmm2
  __m128i v8; // xmm1
  double v9; // xmm1_8
  double result; // st7
  __m128d v11; // xmm1
  __m128d v12; // xmm3
  __int64 v13; // xmm0_8
  char v14; // [esp+8h] [ebp-8h]

  JUMPOUT(dword_100B2A40, 0, sub_100348B5);
  v1 = _mm_getcsr() & 0x7F80;
  v2 = v1 == 8064;
  if ( v1 == 8064 )
    v2 = (v14 & 0x7F) == 127;
  JUMPOUT(!v2, sub_100348B5);
  v3 = _mm_loadl_epi64((const __m128i *)&a1);
  v4 = v3;
  v5 = (__m128d)_mm_srli_epi64(v3, 0x34u);
  v6 = _mm_cvtsi128_si32((__m128i)v5);
  v7 = _mm_sub_epi32((__m128i)xmmword_100ABCA0, (__m128i)_mm_and_pd(v5, (__m128d)xmmword_100ABCC0));
  v8 = _mm_srl_epi64(v4, v7);
  if ( v6 & 0x800 )
  {
    if ( v6 >= 3071 )
    {
      *(_QWORD *)&v9 = v8.m128i_i64[0] << v7.m128i_i8[0];
      if ( v6 <= 3122 )
      {
        a1 = v9;
        return v9;
      }
      return a1;
    }
    result = -0.0;
  }
  else
  {
    v11 = (__m128d)_mm_sll_epi64(v8, v7);
    v12 = (__m128d)_mm_loadl_epi64((const __m128i *)&a1);
    v13 = (unsigned __int128)_mm_cmpnle_pd(v12, v11);
    if ( v6 < 1023 )
    {
      *(_QWORD *)&a1 = *(unsigned __int128 *)&_mm_cmpnle_pd(v12, (__m128d)xmmword_100ABCB0) & xmmword_100ABC90;
      result = a1;
    }
    else
    {
      if ( v6 > 1074 )
        return a1;
      a1 = v11.m128d_f64[0] + COERCE_DOUBLE(v13 & xmmword_100ABC90);
      result = a1;
    }
  }
  return result;
}
// 10034EA0: using guessed type _DWORD __cdecl sub_10034EA0(_DWORD, _DWORD, _DWORD, _DWORD);
// 100ABC90: using guessed type __int128 xmmword_100ABC90;
// 100ABCA0: using guessed type __int128 xmmword_100ABCA0;
// 100ABCB0: using guessed type __int128 xmmword_100ABCB0;
// 100ABCC0: using guessed type __int128 xmmword_100ABCC0;
// 100B2A40: using guessed type int dword_100B2A40;

//----- (10090F3C) --------------------------------------------------------
unsigned int __cdecl sub_10090F3C(unsigned int a1)
{
  signed int v1; // esi
  __int16 v2; // ax
  signed int v3; // ebx
  int v4; // eax

  v1 = 0;
  v2 = a1 & 0x8040;
  if ( (a1 & 0x8040) == -32768 )
  {
    v3 = 3072;
  }
  else if ( v2 == 64 )
  {
    v3 = 2048;
  }
  else
  {
    v3 = 1024;
    if ( v2 != -32704 )
      v3 = 0;
  }
  v4 = a1 & 0x6000;
  if ( a1 & 0x6000 )
  {
    switch ( v4 )
    {
      case 8192:
        v1 = 256;
        break;
      case 16384:
        v1 = 512;
        break;
      case 24576:
        v1 = 768;
        break;
    }
  }
  return v1 | v3 | ((a1 & 0x180 | ((a1 & 0x200 | ((((a1 & 0x800 | (a1 >> 2) & 0x400) >> 2) | a1 & 0x400) >> 2)) >> 3)) >> 3);
}

//----- (10091018) --------------------------------------------------------
unsigned int __cdecl sub_10091018(unsigned int a1)
{
  signed int v1; // esi
  int v2; // eax
  signed int v4; // [esp+Ch] [ebp-4h]

  v4 = 4096;
  v1 = 0;
  if ( a1 & 0x300 )
  {
    if ( (a1 & 0x300) != 512 )
      v4 = 0;
  }
  else
  {
    v4 = 0x2000;
  }
  v2 = a1 & 0xC00;
  if ( a1 & 0xC00 )
  {
    switch ( v2 )
    {
      case 1024:
        v1 = 256;
        break;
      case 2048:
        v1 = 512;
        break;
      case 3072:
        v1 = 768;
        break;
    }
  }
  return v1 | v4 | 4 * (a1 & 0x1000) | 16 * (a1 & 1) | ((a1 & 8 | ((a1 & 0x10 | (a1 >> 2) & 8) >> 2)) >> 1) | 2 * (8 * (a1 & 2) | a1 & 4);
}

//----- (100910F0) --------------------------------------------------------
unsigned int __cdecl sub_100910F0(unsigned int a1)
{
  int v1; // ecx
  signed int v2; // edi
  signed int v3; // ebx
  unsigned int v4; // eax

  v1 = a1 & 0xC00;
  v2 = 0;
  switch ( v1 )
  {
    case 1024:
      v3 = 32832;
      break;
    case 2048:
      v3 = 64;
      break;
    case 3072:
      v3 = 0x8000;
      break;
    default:
      v3 = 0;
      break;
  }
  v4 = (((a1 >> 2) | a1 & 0xC03FFFFF) >> 22) & 0x300;
  if ( (((a1 >> 2) | a1 & 0xC03FFFFF) >> 22) & 0x300 )
  {
    switch ( v4 )
    {
      case 0x100u:
        v2 = 0x2000;
        break;
      case 0x200u:
        v2 = 0x4000;
        break;
      case 0x300u:
        v2 = 24576;
        break;
    }
  }
  return v2 | v3 | 8
                 * ((((a1 >> 2) | a1 & 0xC03FFFFF) >> 22) & 0x30 | 8
                                                                 * ((((a1 >> 2) | a1 & 0xC03FFFFF) >> 22) & 8 | 4 * (4 * ((((a1 >> 2) | a1 & 0xC03FFFFF) >> 22) & 2 | 4 * ((((a1 >> 2) | a1 & 0xC03FFFFF) >> 22) & 1)) | (((a1 >> 2) | a1 & 0xC03FFFFF) >> 22) & 4)));
}

//----- (1009122B) --------------------------------------------------------
unsigned int __cdecl sub_1009122B(unsigned int a1)
{
  signed int v1; // edi
  signed int v2; // ebx
  unsigned int v3; // eax

  v1 = 0;
  if ( a1 & 0x3000 )
  {
    if ( (a1 & 0x3000) == 4096 )
      v2 = 512;
    else
      v2 = 0;
  }
  else
  {
    v2 = 768;
  }
  v3 = ((a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 14) & 0x300;
  if ( ((a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 14) & 0x300 )
  {
    switch ( v3 )
    {
      case 0x100u:
        v1 = 1024;
        break;
      case 0x200u:
        v1 = 2048;
        break;
      case 0x300u:
        v1 = 3072;
        break;
    }
  }
  return v1 | v2 | (a1 >> 2) & 0x1000 | ((a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 15) & 4 | ((a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 18) & 3 | 2 * (4 * (((a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 14) & 2 | 4 * (((a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 14) & 1)) | ((a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 14) & 4);
}

//----- (10091438) --------------------------------------------------------
int __cdecl sub_10091438(unsigned int a1)
{
  int result; // eax

  result = (a1 >> 14) & 0x300;
  if ( result != ((a1 >> 22) & 0x300) )
    result = -1;
  return result;
}

//----- (10091462) --------------------------------------------------------
unsigned int sub_10091462()
{
  unsigned int v0; // esi
  int v1; // ecx
  unsigned int v2; // eax
  int v4; // [esp+8h] [ebp-20h]
  int v5; // [esp+24h] [ebp-4h]

  memset(&v4, 0, 0x1Cu);
  __asm
  {
    fnstenv byte ptr [ebp+var_20]
    fldenv  byte ptr [ebp+var_20]
  }
  v0 = sub_10091018(v4 & 0x1F3F);
  if ( dword_100B17D8 >= 1 )
  {
    v5 = _mm_getcsr();
    v1 = v5 & 0xFFC0;
  }
  else
  {
    v1 = 0;
  }
  v2 = sub_10090F3C(v1);
  return v0 | ((v0 & 0x300 | 4 * (v0 & 0x3F | ((v2 & 0xFFFFFF00 | 4 * (v2 & 0x3F)) << 6))) << 14) | v2;
}
// 100B17D8: using guessed type int dword_100B17D8;

//----- (10091502) --------------------------------------------------------
int __cdecl sub_10091502(int a1)
{
  return a1 | ((a1 & 0x3F | ((a1 & 0x3F) << 8)) << 16);
}

//----- (10091522) --------------------------------------------------------
int __usercall sub_10091522@<eax>(unsigned __int16 a1@<fpstat>)
{
  unsigned int v1; // esi
  unsigned int v2; // edi
  unsigned int v3; // edx

  if ( dword_100B17D8 >= 1 )
    v2 = _mm_getcsr() & 0x3F;
  else
    v2 = 0;
  v3 = 16 * (v2 & 1) | 2 * (v2 & 4 | 8 * (v2 & 2)) | ((v2 & 8 | ((v2 & 0x10 | (v2 >> 2) & 8) >> 2)) >> 1);
  v1 = 16 * (a1 & 1) | 2 * (a1 & 4 | 8 * (a1 & 2)) | ((a1 & 8 | ((a1 & 0x10 | ((unsigned int)a1 >> 2) & 8) >> 2)) >> 1);
  return v1 | v3 | ((v1 | (v3 << 8)) << 16);
}
// 100B17D8: using guessed type int dword_100B17D8;

//----- (100915F6) --------------------------------------------------------
unsigned int __cdecl sub_100915F6(unsigned int a1)
{
  unsigned int result; // eax
  unsigned int v2; // [esp+4h] [ebp-20h]
  int v3; // [esp+20h] [ebp-4h]

  memset(&v2, 0, 0x1Cu);
  __asm { fnstenv byte ptr [ebp+var_20] }
  LOWORD(v3) = sub_1009122B(a1) & 0x1F3F;
  v3 = (unsigned __int16)v3;
  v2 = (unsigned __int16)v3 | v2 & 0xFFFFE0C0;
  __asm { fldenv  byte ptr [ebp+var_20] }
  result = sub_100910F0(a1);
  if ( dword_100B17D8 >= 1 )
  {
    result &= 0xFFC0u;
    _mm_setcsr(result | _mm_getcsr() & 0xFFFF003F);
  }
  return result;
}
// 100B17D8: using guessed type int dword_100B17D8;

//----- (1009168F) --------------------------------------------------------
unsigned int __cdecl sub_1009168F(int a1)
{
  unsigned int result; // eax
  char v2; // [esp+8h] [ebp-20h]
  unsigned int v3; // [esp+Ch] [ebp-1Ch]

  memset(&v2, 0, 0x1Cu);
  __asm { fnstenv [ebp+var_20] }
  v3 = (((a1 & 0x200000) != 0 ? 2 : 0) | ((a1 & 0x100000) != 0) | ((a1 & 0x80000) != 0 ? 4 : 0) | ((a1 & 0x40000) != 0 ? 8 : 0) | ((a1 & 0x20000) != 0 ? 0x10 : 0) | ((a1 & 0x10000) != 0 ? 0x20 : 0)) & 0x3F | v3 & 0xFFFFFFC0;
  __asm { fldenv  [ebp+var_20] }
  result = (a1 & 0x10000000) != 0;
  if ( dword_100B17D8 >= 1 )
  {
    result = (((a1 & 0x20000000) != 0 ? 2 : 0) | (unsigned __int8)(result | ((a1 & 0x8000000) != 0 ? 4 : 0) | ((a1 & 0x4000000) != 0 ? 8 : 0) | ((a1 & 0x2000000) != 0 ? 0x10 : 0) | ((a1 & 0x1000000) != 0 ? 0x20 : 0))) & 0x3F | _mm_getcsr() & 0xFFFFFFC0;
    _mm_setcsr(result);
  }
  return result;
}
// 100B17D8: using guessed type int dword_100B17D8;

//----- (100917CA) --------------------------------------------------------
int __cdecl sub_100917CA(int a1, int a2, LCTYPE LCType, int a4, int cbMultiByte)
{
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  WCHAR *v10; // esi
  WCHAR *v11; // eax
  char v13; // [esp+0h] [ebp-24h]
  int v14; // [esp+Ch] [ebp-18h]
  int v15; // [esp+10h] [ebp-14h]
  char v16; // [esp+18h] [ebp-Ch]
  int v17; // [esp+1Ch] [ebp-8h]

  sub_10035A08(a1);
  v5 = 0;
  v17 = *(_DWORD *)(v15 + 8);
  v6 = sub_100350B7(a2, LCType, 0, 0);
  v7 = v6;
  if ( v6 )
  {
    v8 = 2 * v6 + 8;
    v9 = 2 * v6 < v8 ? v8 : 0;
    if ( 2 * v7 < v8 ? v8 : 0 )
    {
      if ( v9 > 0x400 )
      {
        v11 = (WCHAR *)sub_10034C52(2 * v7 < v8 ? v8 : 0);
        v10 = v11;
        if ( v11 )
        {
          *(_DWORD *)v11 = 56797;
          goto LABEL_8;
        }
      }
      else
      {
        sub_10034572(v13);
        v10 = (WCHAR *)&v13;
        if ( &v13 )
        {
          *(_DWORD *)&v13 = 52428;
LABEL_8:
          v10 += 4;
          if ( v10 && sub_100350B7(a2, LCType, v10, v7) )
            v5 = sub_100361AB(v17, 0, v10, -1, (LPSTR)(cbMultiByte != 0 ? a4 : 0), cbMultiByte, 0, 0);
          goto LABEL_12;
        }
      }
    }
    else
    {
      v10 = 0;
    }
LABEL_12:
    sub_10033249(v10);
  }
  if ( v16 )
    *(_DWORD *)(v14 + 848) &= 0xFFFFFFFD;
  return v5;
}
// 10033249: using guessed type _DWORD __cdecl sub_10033249(_DWORD);
// 10034572: using guessed type _DWORD __cdecl sub_10034572(char);
// 10035A08: using guessed type _DWORD __stdcall sub_10035A08(_DWORD);

//----- (100918E0) --------------------------------------------------------
int __cdecl sub_100918E0(int a1, int a2, int a3, LCTYPE LCType, int a5)
{
  signed int v5; // edi
  int v6; // eax
  int v8; // eax
  int v9; // eax
  WCHAR *v10; // esi
  int v11; // eax
  WCHAR *v12; // eax
  int v13; // eax
  WCHAR *v14; // eax
  int cchData; // [esp+10h] [ebp-8Ch]
  int cchDataa; // [esp+10h] [ebp-8Ch]
  int cchDatab; // [esp+10h] [ebp-8Ch]
  WCHAR LCData[2]; // [esp+14h] [ebp-88h]
  int v19; // [esp+18h] [ebp-84h]

  v5 = 0;
  *(_DWORD *)LCData = a3;
  *(_DWORD *)a5 = 0;
  if ( a2 == 1 )
  {
    v6 = sub_100917CA(a1, a3, LCType, (int)&v19, 128);
    cchData = v6;
    if ( v6 )
    {
      *(_DWORD *)a5 = sub_1003558A(v6, 1);
      sub_1003603E(0);
      if ( *(_DWORD *)a5 )
      {
        if ( sub_10033F3C(*(_DWORD *)a5, cchData, &v19, cchData - 1) )
        {
          sub_1003465D(0, 0, 0, 0, 0);
          JUMPOUT(*(_DWORD *)byte_10091A8F);
        }
        return 0;
      }
      return -1;
    }
    if ( GetLastError() == 122 )
    {
      v8 = sub_100917CA(a1, a3, LCType, 0, 0);
      cchDataa = v8;
      if ( v8 )
      {
        v9 = sub_1003558A(v8, 1);
        v10 = (WCHAR *)v9;
        if ( !v9 )
          goto LABEL_12;
        v11 = sub_100917CA(a1, *(int *)LCData, LCType, v9, cchDataa);
LABEL_10:
        if ( v11 )
        {
          v12 = v10;
          v10 = 0;
          *(_DWORD *)a5 = v12;
LABEL_13:
          sub_1003603E(v10);
          return v5;
        }
LABEL_12:
        v5 = -1;
        goto LABEL_13;
      }
    }
  }
  else
  {
    if ( a2 != 2 )
    {
      if ( !a2 )
      {
        *(_DWORD *)LCData = 0;
        if ( sub_100350B7(a3, LCType | 0x20000000, LCData, 2) )
        {
          *(_BYTE *)a5 = LCData[0];
          return 0;
        }
      }
      return -1;
    }
    v13 = sub_100350B7(a3, LCType, 0, 0);
    cchDatab = v13;
    if ( v13 )
    {
      v14 = (WCHAR *)sub_1003558A(v13, 2);
      v10 = v14;
      if ( !v14 )
        goto LABEL_12;
      v11 = sub_100350B7(*(int *)LCData, LCType, v14, cchDatab);
      goto LABEL_10;
    }
  }
  return -1;
}
// 10033F3C: using guessed type int __cdecl sub_10033F3C(_DWORD, _DWORD, _DWORD, _DWORD);
// 1003465D: using guessed type int __cdecl sub_1003465D(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);

//----- (10091AFC) --------------------------------------------------------
int __cdecl sub_10091AFC(int a1, _DWORD *a2)
{
  *a2 = 0;
  a2[1] = 0;
  return a1;
}

//----- (10091B15) --------------------------------------------------------
signed int __cdecl sub_10091B15(_DWORD *a1, int a2)
{
  *a1 = 0;
  a1[1] = 0;
  *(_BYTE *)(a2 + 28) = 1;
  *(_DWORD *)(a2 + 24) = 42;
  return -1;
}

//----- (10091B3F) --------------------------------------------------------
signed int __cdecl sub_10091B3F(unsigned int *a1, char *a2, unsigned int a3, unsigned __int8 *a4, int a5)
{
  unsigned __int8 *v5; // esi
  char *v6; // edi
  unsigned int *v7; // eax
  unsigned __int8 v9; // bl
  unsigned __int8 v10; // bh
  unsigned int v11; // edx
  unsigned __int8 v12; // bl
  unsigned __int8 v13; // al
  unsigned int v14; // ecx
  unsigned int i; // eax
  char v16; // bl
  char v17; // ah
  unsigned int v18; // [esp+Ch] [ebp-24h]
  int v19; // [esp+10h] [ebp-20h]
  unsigned int *v20; // [esp+18h] [ebp-18h]
  char v21; // [esp+1Eh] [ebp-12h]
  unsigned __int8 v22; // [esp+1Fh] [ebp-11h]
  int v23; // [esp+20h] [ebp-10h]
  int v24; // [esp+24h] [ebp-Ch]
  int v25; // [esp+28h] [ebp-8h]

  v5 = a4;
  v20 = a1;
  if ( !a4 )
    v5 = (unsigned __int8 *)&unk_100B2290;
  if ( a2 )
  {
    v6 = a2;
    if ( !a3 )
      return -2;
    v7 = v20;
  }
  else
  {
    v6 = (char *)&unk_100A46F4;
    a3 = 1;
    v7 = 0;
    v20 = 0;
  }
  if ( !*((_WORD *)v5 + 3) )
  {
    v9 = *v6++;
    if ( (v9 & 0x80u) == 0 )
    {
      if ( v7 )
        *v20 = v9;
      return v9 != 0;
    }
    if ( (v9 & 0xE0) == -64 )
    {
      v10 = 2;
LABEL_19:
      v22 = v10;
      v11 = v9 & ((1 << (7 - v10)) - 1);
      v12 = v10;
      goto LABEL_23;
    }
    if ( (v9 & 0xF0) == -32 )
    {
      v10 = 3;
      goto LABEL_19;
    }
    if ( (v9 & 0xF8) == -16 )
    {
      v10 = 4;
      goto LABEL_19;
    }
    return sub_10035EEA(v5, a5);
  }
  v10 = v5[4];
  v12 = v5[6];
  v11 = *(_DWORD *)v5;
  v13 = v5[4] - 2;
  v22 = v5[6];
  if ( v13 > 2u || v12 < 1u || v12 >= v10 )
    return sub_10035EEA(v5, a5);
LABEL_23:
  v14 = a3;
  v18 = v12;
  if ( v12 < a3 )
    v14 = v12;
  for ( i = v6 - a2; i < v14; i = v19 )
  {
    v16 = *v6++;
    v21 = v16;
    v19 = i + 1;
    v17 = v16;
    v12 = v22;
    if ( (v17 & 0xC0) != -128 )
      return sub_10035EEA(v5, a5);
    v11 = v17 & 0x3F | (v11 << 6);
  }
  if ( v14 < v18 )
  {
    *((_WORD *)v5 + 2) = v10;
    *(_DWORD *)v5 = v11;
    *((_WORD *)v5 + 3) = (unsigned __int8)(v12 - v14);
    return -2;
  }
  if ( v11 >= 0xD800 && v11 <= 0xDFFF )
    return sub_10035EEA(v5, a5);
  if ( v11 > 0x10FFFF )
    return sub_10035EEA(v5, a5);
  v23 = 128;
  v24 = 2048;
  v25 = 0x10000;
  if ( v11 < (unsigned int)(&v20)[v10] )
    return sub_10035EEA(v5, a5);
  if ( v20 )
    *v20 = v11;
  return sub_100362B4(v11 != 0 ? v18 : 0, v5);
}
// 10035EEA: using guessed type _DWORD __cdecl sub_10035EEA(_DWORD, _DWORD);
// 100362B4: using guessed type _DWORD __cdecl sub_100362B4(_DWORD, _DWORD);

//----- (10091DA4) --------------------------------------------------------
signed int __cdecl sub_10091DA4(int a1, int a2)
{
  signed int v3; // edi

  if ( !a1 )
  {
    *(_BYTE *)(a2 + 28) = 1;
    *(_DWORD *)(a2 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a2);
    return -1;
  }
  if ( (*(_DWORD *)(a1 + 12) >> 12) & 1 )
  {
    sub_1003619C(a1);
    return -1;
  }
  sub_10033262(a1);
  v3 = sub_10091E60(a1, a2);
  sub_10033893(a1);
  return v3;
}
// 10033262: using guessed type _DWORD __cdecl sub_10033262(_DWORD);
// 10033893: using guessed type _DWORD __cdecl sub_10033893(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 1003619C: using guessed type _DWORD __cdecl sub_1003619C(_DWORD);

//----- (10091E60) --------------------------------------------------------
signed int __cdecl sub_10091E60(int a1, int a2)
{
  signed int result; // eax
  signed int v3; // edi
  int v4; // eax

  if ( a1 )
  {
    v3 = -1;
    if ( (*(_DWORD *)(a1 + 12) >> 13) & 1 )
    {
      v3 = sub_10034D92(a1, a2);
      sub_10034554(a1);
      v4 = sub_10035DFA(a1);
      if ( sub_100330D2(v4, a2) >= 0 )
      {
        if ( *(_DWORD *)(a1 + 28) )
        {
          sub_1003603E(*(LPVOID *)(a1 + 28));
          *(_DWORD *)(a1 + 28) = 0;
        }
      }
      else
      {
        v3 = -1;
      }
    }
    sub_1003619C(a1);
    result = v3;
  }
  else
  {
    *(_BYTE *)(a2 + 28) = 1;
    *(_DWORD *)(a2 + 24) = 22;
    sub_10034B08(0, 0, 0, 0, 0, a2);
    result = -1;
  }
  return result;
}
// 100330D2: using guessed type _DWORD __cdecl sub_100330D2(_DWORD, _DWORD);
// 10034554: using guessed type _DWORD __cdecl sub_10034554(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 10034D92: using guessed type _DWORD __cdecl sub_10034D92(_DWORD, _DWORD);
// 10035DFA: using guessed type _DWORD __cdecl sub_10035DFA(_DWORD);
// 1003619C: using guessed type _DWORD __cdecl sub_1003619C(_DWORD);

//----- (10091F4D) --------------------------------------------------------
signed int __cdecl sub_10091F4D(int a1)
{
  signed int v1; // esi
  char v3; // [esp+4h] [ebp-28h]

  sub_10033AD2(0);
  v1 = sub_10091DA4(a1, (int)&v3);
  sub_100343D8(&v3);
  return v1;
}
// 10033AD2: using guessed type _DWORD __stdcall sub_10033AD2(_DWORD);
// 100343D8: using guessed type int __thiscall sub_100343D8(_DWORD);

//----- (10091F89) --------------------------------------------------------
signed int __cdecl sub_10091F89(signed int a1, LARGE_INTEGER liDistanceToMove, int a3)
{
  BOOL v4; // eax
  DWORD v5; // ebx
  int v6; // [esp+10h] [ebp-24h]

  if ( a1 == -2 )
  {
    *(_BYTE *)(a3 + 36) = 1;
    *(_DWORD *)(a3 + 32) = 0;
    *(_BYTE *)(a3 + 28) = 1;
    *(_DWORD *)(a3 + 24) = 9;
    return -1;
  }
  v4 = a1 >= 0 && a1 < (unsigned int)dword_100B1F48;
  if ( !v4 || (v6 = 56 * (a1 & 0x3F), !(*((_BYTE *)&lpCriticalSection[a1 >> 6][1].LockSemaphore + v6) & 1)) )
  {
    *(_BYTE *)(a3 + 36) = 1;
    *(_DWORD *)(a3 + 32) = 0;
    *(_BYTE *)(a3 + 28) = 1;
    *(_DWORD *)(a3 + 24) = 9;
    sub_10034B08(0, 0, 0, 0, 0, a3);
    return -1;
  }
  sub_10033325(a1);
  v5 = -1;
  if ( *((_BYTE *)&lpCriticalSection[a1 >> 6][1].LockSemaphore + v6) & 1 )
  {
    v5 = sub_1009224C(a1, liDistanceToMove, a3);
  }
  else
  {
    *(_BYTE *)(a3 + 28) = 1;
    *(_DWORD *)(a3 + 24) = 9;
    *(_BYTE *)(a3 + 36) = 1;
    *(_DWORD *)(a3 + 32) = 0;
  }
  sub_100331E0();
  return v5;
}
// 10033325: using guessed type _DWORD __cdecl sub_10033325(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100B1F48: using guessed type int dword_100B1F48;

//----- (100920DE) --------------------------------------------------------
signed int __cdecl sub_100920DE(signed int a1, LARGE_INTEGER liDistanceToMove, DWORD dwMoveMethod, int a4)
{
  DWORD v4; // edi
  BOOL v5; // eax
  int v7; // [esp+18h] [ebp-20h]

  if ( a1 == -2 )
  {
    *(_BYTE *)(a4 + 36) = 1;
    *(_DWORD *)(a4 + 32) = 0;
    *(_BYTE *)(a4 + 28) = 1;
    *(_DWORD *)(a4 + 24) = 9;
    return -1;
  }
  v5 = a1 >= 0 && a1 < (unsigned int)dword_100B1F48;
  if ( !v5 || (v7 = 56 * (a1 & 0x3F), !(*((_BYTE *)&lpCriticalSection[a1 >> 6][1].LockSemaphore + v7) & 1)) )
  {
    *(_BYTE *)(a4 + 36) = 1;
    *(_DWORD *)(a4 + 32) = 0;
    *(_BYTE *)(a4 + 28) = 1;
    *(_DWORD *)(a4 + 24) = 9;
    sub_10034B08(0, 0, 0, 0, 0, a4);
    return -1;
  }
  sub_10033325(a1);
  v4 = -1;
  if ( *((_BYTE *)&lpCriticalSection[a1 >> 6][1].LockSemaphore + v7) & 1 )
  {
    v4 = sub_100922C0(a1, liDistanceToMove, dwMoveMethod, a4);
  }
  else
  {
    *(_BYTE *)(a4 + 28) = 1;
    *(_DWORD *)(a4 + 24) = 9;
    *(_BYTE *)(a4 + 36) = 1;
    *(_DWORD *)(a4 + 32) = 0;
  }
  sub_100331E0();
  return v4;
}
// 10033325: using guessed type _DWORD __cdecl sub_10033325(_DWORD);
// 10034B08: using guessed type _DWORD __cdecl sub_10034B08(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 100B1F48: using guessed type int dword_100B1F48;

//----- (1009224C) --------------------------------------------------------
DWORD __cdecl sub_1009224C(int a1, LARGE_INTEGER liDistanceToMove, int a3)
{
  void *v3; // eax
  DWORD v5; // edx

  v3 = (void *)sub_10034F63(a1);
  if ( v3 == (void *)-1 )
  {
    *(_BYTE *)(a3 + 28) = 1;
    *(_DWORD *)(a3 + 24) = 9;
    return -1;
  }
  v5 = sub_10092363(v3, liDistanceToMove, a3);
  if ( v5 == -1 )
    return -1;
  *((_BYTE *)&lpCriticalSection[a1 >> 6][1].LockSemaphore + 56 * (a1 & 0x3F)) &= 0xFDu;
  return v5;
}
// 10034F63: using guessed type _DWORD __cdecl sub_10034F63(_DWORD);

//----- (100922C0) --------------------------------------------------------
DWORD __cdecl sub_100922C0(int a1, LARGE_INTEGER liDistanceToMove, DWORD dwMoveMethod, int a4)
{
  void *v4; // eax
  DWORD result; // eax
  DWORD v6; // eax
  LARGE_INTEGER NewFilePointer; // [esp+8h] [ebp-8h]

  v4 = (void *)sub_10034F63(a1);
  if ( v4 == (void *)-1 )
  {
    *(_BYTE *)(a4 + 28) = 1;
    *(_DWORD *)(a4 + 24) = 9;
    return -1;
  }
  if ( !SetFilePointerEx(v4, liDistanceToMove, &NewFilePointer, dwMoveMethod) )
  {
    v6 = GetLastError();
    sub_10033F5A(v6, a4);
    return -1;
  }
  if ( (NewFilePointer.HighPart & NewFilePointer.LowPart) == -1 )
    return -1;
  result = NewFilePointer.LowPart;
  *((_BYTE *)&lpCriticalSection[a1 >> 6][1].LockSemaphore + 56 * (a1 & 0x3F)) &= 0xFDu;
  return result;
}
// 10033F5A: using guessed type _DWORD __cdecl sub_10033F5A(_DWORD, _DWORD);
// 10034F63: using guessed type _DWORD __cdecl sub_10034F63(_DWORD);

//----- (10092363) --------------------------------------------------------
DWORD __cdecl sub_10092363(HANDLE hFile, LARGE_INTEGER liDistanceToMove, int a3)
{
  DWORD v3; // eax
  DWORD result; // eax
  LARGE_INTEGER NewFilePointer; // [esp+4h] [ebp-10h]
  LARGE_INTEGER v6; // [esp+Ch] [ebp-8h]

  if ( SetFilePointerEx(hFile, 0i64, &NewFilePointer, 1u)
    && (v6.QuadPart = 0i64,
        SetFilePointerEx(hFile, (LARGE_INTEGER)(signed int)liDistanceToMove.LowPart, &v6, liDistanceToMove.HighPart)) )
  {
    result = v6.LowPart;
    if ( v6.QuadPart <= 0x7FFFFFFF )
      return result;
    SetFilePointerEx(hFile, NewFilePointer, 0, 0);
    *(_BYTE *)(a3 + 28) = 1;
    *(_DWORD *)(a3 + 24) = 22;
  }
  else
  {
    v3 = GetLastError();
    sub_10033F5A(v3, a3);
  }
  return -1;
}
// 10033F5A: using guessed type _DWORD __cdecl sub_10033F5A(_DWORD, _DWORD);

//----- (10092501) --------------------------------------------------------
signed int __cdecl sub_10092501(signed int a1, LARGE_INTEGER a2, DWORD a3)
{
  signed int v3; // esi
  char v5; // [esp+8h] [ebp-28h]

  sub_10033AD2(0);
  v3 = sub_100920DE(a1, a2, a3, (int)&v5);
  sub_100343D8(&v5);
  return v3;
}
// 10033AD2: using guessed type _DWORD __stdcall sub_10033AD2(_DWORD);
// 100343D8: using guessed type int __thiscall sub_100343D8(_DWORD);

//----- (10092576) --------------------------------------------------------
DWORD __cdecl sub_10092576(int a1, LARGE_INTEGER liDistanceToMove, DWORD dwMoveMethod)
{
  DWORD v3; // esi
  int v5; // [esp+8h] [ebp-28h]

  sub_10033AD2(0);
  v3 = sub_100922C0(a1, liDistanceToMove, dwMoveMethod, (int)&v5);
  sub_100343D8(&v5);
  return v3;
}
// 10033AD2: using guessed type _DWORD __stdcall sub_10033AD2(_DWORD);
// 100343D8: using guessed type int __thiscall sub_100343D8(_DWORD);

//----- (100925C6) --------------------------------------------------------
DWORD __cdecl sub_100925C6(int a1, LARGE_INTEGER liDistanceToMove, DWORD dwMoveMethod, int a4)
{
  return sub_100922C0(a1, liDistanceToMove, dwMoveMethod, a4);
}

//----- (100925EB) --------------------------------------------------------
int __cdecl sub_100925EB(_DWORD *a1)
{
  signed int v1; // edi
  volatile signed __int32 *v2; // eax
  int result; // eax

  ++dword_100B1CC4;
  v1 = 4096;
  a1[1] = sub_1003558A(4096, 1);
  sub_1003603E(0);
  v2 = a1 + 3;
  if ( a1[1] )
  {
    _InterlockedOr(v2, 0x40u);
  }
  else
  {
    _InterlockedOr(v2, 0x400u);
    a1[1] = a1 + 5;
    v1 = 2;
  }
  a1[6] = v1;
  result = a1[1];
  a1[2] = 0;
  *a1 = result;
  return result;
}
// 1003558A: using guessed type _DWORD __cdecl sub_1003558A(_DWORD, _DWORD);
// 100B1CC4: using guessed type int dword_100B1CC4;

//----- (1009265E) --------------------------------------------------------
signed int __cdecl sub_1009265E(unsigned int a1, _BYTE *a2, unsigned int a3, unsigned int a4, char a5)
{
  unsigned int v5; // ebx
  int v6; // esi
  char *v7; // esi
  char *v8; // edi
  unsigned int v9; // ecx
  _BYTE *v10; // edx
  unsigned int v11; // eax
  char *v12; // esi
  signed int result; // eax
  char v14; // cl
  char *v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+10h] [ebp-8h]
  signed int v17; // [esp+14h] [ebp-4h]

  v5 = a1;
  v6 = (int)a2;
  v16 = (int)a2;
  v17 = 0;
  if ( a5 )
  {
    *a2 = 45;
    v6 = (int)(a2 + 1);
    v17 = 1;
    v16 = (int)(a2 + 1);
    v5 = -a1;
  }
  v15 = (char *)v6;
  v7 = (char *)v16;
  do
  {
    v8 = v7;
    v9 = v5 % a4;
    v5 /= a4;
    v10 = v7 + 1;
    *v7 = v9 + (v9 > 9 ? 87 : 48);
    v11 = v17++ + 1;
    if ( !v5 )
      break;
    ++v7;
  }
  while ( v11 < a3 );
  v12 = v15;
  if ( v11 < a3 )
  {
    *v10 = 0;
    do
    {
      v14 = *v8;
      *v8-- = *v12;
      *v12++ = v14;
    }
    while ( v12 < v8 );
    result = 0;
  }
  else
  {
    *a2 = 0;
    *(_DWORD *)sub_10034888(a3) = 34;
    sub_10034711();
    result = 34;
  }
  return result;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (1009272E) --------------------------------------------------------
signed int __cdecl sub_1009272E(unsigned int a1, _WORD *a2, unsigned int a3, unsigned int a4, char a5)
{
  unsigned int v5; // ebx
  int v6; // esi
  __int16 *v7; // esi
  __int16 *v8; // edi
  unsigned int v9; // ecx
  _WORD *v10; // edx
  unsigned int v11; // eax
  __int16 *v12; // esi
  signed int result; // eax
  __int16 v14; // cx
  __int16 *v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+10h] [ebp-8h]
  signed int v17; // [esp+14h] [ebp-4h]

  v5 = a1;
  v6 = (int)a2;
  v16 = (int)a2;
  v17 = 0;
  if ( a5 )
  {
    *a2 = 45;
    v6 = (int)(a2 + 1);
    v16 = (int)(a2 + 1);
    v5 = -a1;
    v17 = 1;
  }
  v15 = (__int16 *)v6;
  v7 = (__int16 *)v16;
  do
  {
    v8 = v7;
    v9 = v5 % a4;
    v5 /= a4;
    v10 = v7 + 1;
    *v7 = v9 + (v9 > 9 ? 87 : 48);
    v11 = v17++ + 1;
    if ( !v5 )
      break;
    ++v7;
  }
  while ( v11 < a3 );
  v12 = v15;
  if ( v11 < a3 )
  {
    *v10 = 0;
    do
    {
      v14 = *v8;
      *v8 = *v12;
      --v8;
      *v12 = v14;
      ++v12;
    }
    while ( v12 < v8 );
    result = 0;
  }
  else
  {
    *a2 = 0;
    *(_DWORD *)sub_10034888(0) = 34;
    sub_10034711();
    result = 34;
  }
  return result;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (10092819) --------------------------------------------------------
signed int __cdecl sub_10092819(__int64 a1, char *a2, unsigned int a3, int a4, char a5)
{
  char *v5; // edx
  int v6; // edi
  int v7; // esi
  int v8; // ebx
  unsigned int v9; // ebx
  int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  char *v13; // esi
  signed int result; // eax
  char *v15; // edx
  char v16; // cl
  char *v17; // [esp+8h] [ebp-18h]
  char *v18; // [esp+Ch] [ebp-14h]
  int v19; // [esp+14h] [ebp-Ch]
  int v20; // [esp+14h] [ebp-Ch]
  char *v21; // [esp+18h] [ebp-8h]
  signed int v22; // [esp+1Ch] [ebp-4h]

  v5 = a2;
  v21 = a2;
  v6 = HIDWORD(a1);
  v22 = 0;
  v19 = a1;
  if ( a5 )
  {
    *a2 = 45;
    v22 = 1;
    v5 = a2 + 1;
    v19 = -(signed int)a1;
    v21 = a2 + 1;
    v6 = (unsigned __int64)-a1 >> 32;
  }
  v7 = v19;
  v8 = a4;
  v18 = v5;
  while ( 1 )
  {
    v17 = v5;
    v9 = sub_10034FAE(v7, v6, v8, 0);
    v7 = sub_100350DA(v7, v6, a4, 0);
    v6 = v10;
    v5 = v21 + 1;
    *v21 = v9 + (v9 > 9 ? 87 : 48);
    v11 = v22 + 1;
    v20 = (int)(v21 + 1);
    ++v22;
    if ( !v6 && !v7 )
      break;
    v12 = a3;
    v8 = a4;
    ++v21;
    if ( v11 >= a3 )
    {
      v5 = (char *)v20;
      goto LABEL_8;
    }
  }
  v12 = a3;
LABEL_8:
  v13 = v18;
  if ( v11 < v12 )
  {
    *v5 = 0;
    v15 = v17;
    do
    {
      v16 = *v15;
      *v15-- = *v13;
      *v13++ = v16;
    }
    while ( v13 < v15 );
    result = 0;
  }
  else
  {
    *a2 = 0;
    *(_DWORD *)sub_10034888(v12) = 34;
    sub_10034711();
    result = 34;
  }
  return result;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10034FAE: using guessed type _DWORD __stdcall sub_10034FAE(_DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (10092933) --------------------------------------------------------
signed int __cdecl sub_10092933(__int64 a1, __int16 *a2, unsigned int a3, int a4, char a5)
{
  __int16 *v5; // edx
  int v6; // ebx
  int v7; // esi
  int v8; // edi
  unsigned int v9; // esi
  int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int16 *v13; // edi
  signed int result; // eax
  __int16 *v15; // edx
  __int16 v16; // cx
  __int16 *v17; // [esp+Ch] [ebp-18h]
  __int16 *v18; // [esp+10h] [ebp-14h]
  int v19; // [esp+18h] [ebp-Ch]
  int v20; // [esp+18h] [ebp-Ch]
  __int16 *v21; // [esp+1Ch] [ebp-8h]
  signed int v22; // [esp+20h] [ebp-4h]

  v5 = a2;
  v6 = HIDWORD(a1);
  v21 = a2;
  v22 = 0;
  v19 = a1;
  if ( a5 )
  {
    *a2 = 45;
    v5 = a2 + 1;
    v22 = 1;
    v21 = a2 + 1;
    v6 = (unsigned __int64)-a1 >> 32;
    v19 = -(signed int)a1;
  }
  v7 = a4;
  v8 = v19;
  v18 = v5;
  while ( 1 )
  {
    v17 = v5;
    v9 = sub_10034FAE(v8, v6, v7, 0);
    v8 = sub_100350DA(v8, v6, a4, 0);
    v6 = v10;
    v5 = v21 + 1;
    *v21 = v9 + (v9 > 9 ? 87 : 48);
    v11 = v22 + 1;
    v20 = (int)(v21 + 1);
    ++v22;
    if ( !v6 && !v8 )
      break;
    v12 = a3;
    v7 = a4;
    ++v21;
    if ( v11 >= a3 )
    {
      v5 = (__int16 *)v20;
      goto LABEL_8;
    }
  }
  v12 = a3;
LABEL_8:
  v13 = v18;
  if ( v11 < v12 )
  {
    *v5 = 0;
    v15 = v17;
    do
    {
      v16 = *v15;
      *v15 = *v13;
      --v15;
      *v13 = v16;
      ++v13;
    }
    while ( v13 < v15 );
    result = 0;
  }
  else
  {
    *a2 = 0;
    *(_DWORD *)sub_10034888(0) = 34;
    sub_10034711();
    result = 34;
  }
  return result;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10034FAE: using guessed type _DWORD __stdcall sub_10034FAE(_DWORD, _DWORD, _DWORD, _DWORD);
// 100350DA: using guessed type _DWORD __stdcall sub_100350DA(_DWORD, _DWORD, _DWORD, _DWORD);

//----- (10092A62) --------------------------------------------------------
signed int __cdecl sub_10092A62(unsigned int a1, _BYTE *a2, unsigned int a3, unsigned int a4, unsigned __int8 a5)
{
  signed int *v6; // eax
  signed int v7; // [esp-8h] [ebp-Ch]

  if ( !a2 )
  {
    *(_DWORD *)sub_10034888(0) = 22;
    sub_10034711();
    return 22;
  }
  if ( !a3 )
    goto LABEL_12;
  *a2 = 0;
  if ( a3 <= (unsigned int)a5 + 1 )
  {
    v6 = (signed int *)sub_10034888(a2);
    v7 = 34;
LABEL_8:
    *v6 = v7;
    sub_10034711();
    return v7;
  }
  if ( a4 - 2 > 0x22 )
  {
LABEL_12:
    v6 = (signed int *)sub_10034888(a2);
    v7 = 22;
    goto LABEL_8;
  }
  return sub_1009265E(a1, a2, a3, a4, a5);
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (10092AEE) --------------------------------------------------------
signed int __cdecl sub_10092AEE(unsigned int a1, _WORD *a2, unsigned int a3, unsigned int a4, unsigned __int8 a5)
{
  signed int *v6; // eax
  signed int v7; // [esp-8h] [ebp-Ch]

  if ( !a2 )
  {
    *(_DWORD *)sub_10034888(0) = 22;
    sub_10034711();
    return 22;
  }
  if ( !a3 )
    goto LABEL_12;
  *a2 = 0;
  if ( a3 <= (unsigned int)a5 + 1 )
  {
    v6 = (signed int *)sub_10034888(a2);
    v7 = 34;
LABEL_8:
    *v6 = v7;
    sub_10034711();
    return v7;
  }
  if ( a4 - 2 > 0x22 )
  {
LABEL_12:
    v6 = (signed int *)sub_10034888(a2);
    v7 = 22;
    goto LABEL_8;
  }
  return sub_1009272E(a1, a2, a3, a4, a5);
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (10092B7C) --------------------------------------------------------
signed int __cdecl sub_10092B7C(__int64 a1, char *a2, unsigned int a3, int a4, unsigned __int8 a5)
{
  signed int *v6; // eax
  signed int v7; // [esp-8h] [ebp-Ch]

  if ( !a2 )
  {
    *(_DWORD *)sub_10034888(0) = 22;
    sub_10034711();
    return 22;
  }
  if ( !a3 )
    goto LABEL_12;
  *a2 = 0;
  if ( a3 <= (unsigned int)a5 + 1 )
  {
    v6 = (signed int *)sub_10034888(a2);
    v7 = 34;
LABEL_8:
    *v6 = v7;
    sub_10034711();
    return v7;
  }
  if ( (unsigned int)(a4 - 2) > 0x22 )
  {
LABEL_12:
    v6 = (signed int *)sub_10034888(a2);
    v7 = 22;
    goto LABEL_8;
  }
  return sub_10092819(a1, a2, a3, a4, a5);
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (10092C0B) --------------------------------------------------------
signed int __cdecl sub_10092C0B(__int64 a1, __int16 *a2, unsigned int a3, int a4, unsigned __int8 a5)
{
  signed int *v6; // eax
  signed int v7; // [esp-8h] [ebp-Ch]

  if ( !a2 )
  {
    *(_DWORD *)sub_10034888(0) = 22;
    sub_10034711();
    return 22;
  }
  if ( !a3 )
    goto LABEL_12;
  *a2 = 0;
  if ( a3 <= (unsigned int)a5 + 1 )
  {
    v6 = (signed int *)sub_10034888(a2);
    v7 = 34;
LABEL_8:
    *v6 = v7;
    sub_10034711();
    return v7;
  }
  if ( (unsigned int)(a4 - 2) > 0x22 )
  {
LABEL_12:
    v6 = (signed int *)sub_10034888(a2);
    v7 = 22;
    goto LABEL_8;
  }
  return sub_10092933(a1, a2, a3, a4, a5);
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);

//----- (10092E9E) --------------------------------------------------------
signed int __cdecl sub_10092E9E(signed int a1, _WORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int8 v5; // [esp+0h] [ebp-4h]

  if ( a4 != 10 || (v5 = 1, a1 >= 0) )
    v5 = 0;
  return sub_10092AEE(a1, a2, a3, a4, v5);
}

//----- (10093117) --------------------------------------------------------
int __cdecl sub_10093117(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // esi
  unsigned __int16 *v3; // edi
  int v4; // ecx
  int v5; // edx
  int result; // eax

  v2 = a1;
  v3 = a2;
  do
  {
    v4 = *v2;
    ++v2;
    if ( (unsigned int)(v4 - 65) <= 0x19 )
      v4 += 32;
    v5 = *v3;
    ++v3;
    if ( (unsigned int)(v5 - 65) <= 0x19 )
      v5 += 32;
    result = v4 - v5;
  }
  while ( v4 == v5 && v4 );
  return result;
}

//----- (10093198) --------------------------------------------------------
int __cdecl sub_10093198(WCHAR SrcStr, int a2)
{
  int result; // eax

  LOBYTE(result) = SrcStr;
  if ( SrcStr >= 0x100u )
    return sub_10033B4F(SrcStr, a2);
  if ( byte_100A75C2[2 * (unsigned __int8)SrcStr] & 1 )
    LOBYTE(result) = *(_BYTE *)((unsigned __int8)SrcStr + *(_DWORD *)(*(_DWORD *)a2 + 148));
  return (unsigned __int8)result;
}

//----- (100931E6) --------------------------------------------------------
signed int __cdecl sub_100931E6(int a1, int a2)
{
  int v2; // ecx

  if ( dword_100B1CD4 )
    return sub_1003576F(a1, a2, 0);
  if ( a1 && a2 )
    return sub_100342CF(a1, a2);
  *(_DWORD *)sub_10034888(v2) = 22;
  sub_10034711();
  return 0x7FFFFFFF;
}
// 100342CF: using guessed type _DWORD __cdecl sub_100342CF(_DWORD, _DWORD);
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 1003576F: using guessed type _DWORD __cdecl sub_1003576F(_DWORD, _DWORD, _DWORD);
// 100B1CD4: using guessed type int dword_100B1CD4;

//----- (10093241) --------------------------------------------------------
signed int __cdecl sub_10093241(WCHAR *a1, WCHAR *a2, int a3)
{
  int v3; // ecx
  WCHAR *v4; // esi
  signed int result; // eax
  WCHAR *v6; // edi
  int v7; // ecx
  WCHAR v8; // ST08_2
  int v9; // ebx
  WCHAR v10; // ax
  unsigned __int16 v11; // ax
  int v12; // [esp+4h] [ebp-10h]
  int v13; // [esp+8h] [ebp-Ch]
  char v14; // [esp+10h] [ebp-4h]

  v4 = a1;
  if ( a1 )
  {
    v6 = a2;
    if ( a2 )
    {
      sub_10035A08(a3);
      if ( *(_DWORD *)(v13 + 168) )
      {
        do
        {
          v8 = *v4;
          ++v4;
          v9 = (unsigned __int16)sub_1003466C(v8, (int)&v13);
          v10 = *v6;
          ++v6;
          v11 = sub_1003466C(v10, (int)&v13);
          v7 = v9 - v11;
        }
        while ( v9 == v11 && v9 );
      }
      else
      {
        v7 = sub_100342CF(a1, a2);
      }
      if ( v14 )
        *(_DWORD *)(v12 + 848) &= 0xFFFFFFFD;
      result = v7;
    }
    else
    {
      *(_DWORD *)sub_10034888(v3) = 22;
      sub_10034711();
      result = 0x7FFFFFFF;
    }
  }
  else
  {
    *(_DWORD *)sub_10034888(v3) = 22;
    sub_10034711();
    result = 0x7FFFFFFF;
  }
  return result;
}
// 100342CF: using guessed type _DWORD __cdecl sub_100342CF(_DWORD, _DWORD);
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10035A08: using guessed type _DWORD __stdcall sub_10035A08(_DWORD);

//----- (10093327) --------------------------------------------------------
int __cdecl sub_10093327(unsigned __int16 *a1, unsigned __int16 *a2, int a3)
{
  int v3; // ecx
  int result; // eax
  unsigned __int16 *v5; // ebx
  unsigned __int16 *v6; // edi
  int v7; // edx
  int v8; // esi

  v3 = a3;
  if ( !a3 )
    return 0;
  v5 = a2;
  v6 = a1;
  do
  {
    v7 = *v6;
    ++v6;
    if ( (unsigned int)(v7 - 65) <= 0x19 )
      v7 += 32;
    v8 = *v5;
    ++v5;
    if ( (unsigned int)(v8 - 65) <= 0x19 )
      v8 += 32;
    result = v7 - v8;
    if ( v7 != v8 )
      break;
    if ( !v7 )
      break;
    --v3;
  }
  while ( v3 );
  return result;
}

//----- (10093389) --------------------------------------------------------
signed int __cdecl sub_10093389(int a1, int a2, int a3)
{
  int v3; // ecx

  if ( dword_100B1CD4 )
    return sub_10035DB9(a1, a2, a3, 0);
  if ( a1 && a2 )
    return sub_10033AFF(a1, a2, a3);
  *(_DWORD *)sub_10034888(v3) = 22;
  sub_10034711();
  return 0x7FFFFFFF;
}
// 10033AFF: using guessed type _DWORD __cdecl sub_10033AFF(_DWORD, _DWORD, _DWORD);
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10035DB9: using guessed type _DWORD __cdecl sub_10035DB9(_DWORD, _DWORD, _DWORD, _DWORD);
// 100B1CD4: using guessed type int dword_100B1CD4;

//----- (100933E8) --------------------------------------------------------
signed int __cdecl sub_100933E8(WCHAR *a1, WCHAR *a2, int a3, int a4)
{
  int v4; // ecx
  WCHAR *v5; // edi
  signed int result; // eax
  WCHAR *v7; // ebx
  int v8; // esi
  int v9; // ecx
  WCHAR v10; // ST08_2
  WCHAR v11; // ax
  unsigned __int16 v12; // ax
  int v13; // [esp+4h] [ebp-14h]
  int v14; // [esp+8h] [ebp-10h]
  char v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  v5 = a1;
  if ( a1 )
  {
    v7 = a2;
    if ( a2 )
    {
      v8 = a3;
      if ( a3 )
      {
        sub_10035A08(a4);
        if ( *(_DWORD *)(v14 + 168) )
        {
          do
          {
            v10 = *v5;
            ++v5;
            v16 = (unsigned __int16)sub_1003466C(v10, (int)&v14);
            v11 = *v7;
            ++v7;
            v12 = sub_1003466C(v11, (int)&v14);
            v9 = v16 - v12;
            if ( v16 != v12 )
              break;
            if ( !v16 )
              break;
            --v8;
          }
          while ( v8 );
        }
        else
        {
          v9 = sub_10033AFF(a1, a2, a3);
        }
        if ( v15 )
          *(_DWORD *)(v13 + 848) &= 0xFFFFFFFD;
        result = v9;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      *(_DWORD *)sub_10034888(v4) = 22;
      sub_10034711();
      result = 0x7FFFFFFF;
    }
  }
  else
  {
    *(_DWORD *)sub_10034888(v4) = 22;
    sub_10034711();
    result = 0x7FFFFFFF;
  }
  return result;
}
// 10033AFF: using guessed type _DWORD __cdecl sub_10033AFF(_DWORD, _DWORD, _DWORD);
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10035A08: using guessed type _DWORD __stdcall sub_10035A08(_DWORD);

//----- (1009370F) --------------------------------------------------------
int sub_1009370F()
{
  return dword_100B229C;
}
// 100B229C: using guessed type int dword_100B229C;

//----- (10093727) --------------------------------------------------------
int __cdecl sub_10093727(_BYTE *a1, int a2)
{
  int result; // eax

  result = 0;
  if ( *a1 )
  {
    do
    {
      if ( result == a2 )
        break;
      ++result;
    }
    while ( a1[result] );
  }
  return result;
}

//----- (1009374A) --------------------------------------------------------
unsigned int __cdecl sub_1009374A(int a1, DWORD dwCmpFlags, PCNZWCH lpString1, int cchCount1, PCNZWCH lpString2, int cchCount2)
{
  int v6; // esi
  int v7; // eax
  int v9; // esi
  unsigned int v10; // esi

  v6 = cchCount1;
  if ( cchCount1 > 0 )
    v6 = sub_10034B3F(lpString1, cchCount1);
  v7 = cchCount2;
  if ( cchCount2 > 0 )
    v7 = sub_10034B3F(lpString2, cchCount2);
  if ( v6 && v7 )
    return sub_1003503F(a1, dwCmpFlags, lpString1, v6, lpString2, v7, 0, 0, 0);
  v9 = v6 - v7;
  if ( v9 )
    v10 = ((v9 >> 31) & 0xFFFFFFFE) + 3;
  else
    v10 = 2;
  return v10;
}
// 10034B3F: using guessed type _DWORD __cdecl sub_10034B3F(_DWORD, _DWORD);

//----- (100937C8) --------------------------------------------------------
signed int __cdecl sub_100937C8(int a1, int a2, unsigned int a3)
{
  int v3; // ecx
  signed int result; // eax

  if ( dword_100B1CD4 )
    return sub_10034644(a1, a2, a3, 0);
  if ( a1 && a2 )
  {
    if ( a3 <= 0x7FFFFFFF )
    {
      result = sub_10033D75(a1, a2, a3);
    }
    else
    {
      *(_DWORD *)sub_10034888(v3) = 22;
      sub_10034711();
      result = 0x7FFFFFFF;
    }
  }
  else
  {
    *(_DWORD *)sub_10034888(v3) = 22;
    sub_10034711();
    result = 0x7FFFFFFF;
  }
  return result;
}
// 10033D75: using guessed type _DWORD __cdecl sub_10033D75(_DWORD, _DWORD, _DWORD);
// 10034644: using guessed type _DWORD __cdecl sub_10034644(_DWORD, _DWORD, _DWORD, _DWORD);
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 100B1CD4: using guessed type int dword_100B1CD4;

//----- (10093850) --------------------------------------------------------
signed int __cdecl sub_10093850(unsigned __int8 *a1, unsigned __int8 *a2, unsigned int a3, int a4)
{
  int v4; // ecx
  unsigned __int8 *v5; // edi
  signed int result; // eax
  unsigned __int8 *v7; // ebx
  unsigned int v8; // esi
  int v9; // ecx
  unsigned __int8 v10; // al
  int v11; // ecx
  unsigned __int8 v12; // al
  int v13; // eax
  int v14; // edx
  int v15; // [esp+4h] [ebp-14h]
  int v16; // [esp+8h] [ebp-10h]
  char v17; // [esp+10h] [ebp-8h]

  v5 = a1;
  if ( a1 )
  {
    v7 = a2;
    if ( a2 )
    {
      v8 = a3;
      if ( a3 <= 0x7FFFFFFF )
      {
        if ( a3 )
        {
          sub_10035A08(a4);
          v9 = *(_DWORD *)(v16 + 148);
          do
          {
            v10 = *v5++;
            v11 = *(unsigned __int8 *)(v10 + v9);
            v12 = *v7++;
            v13 = *(unsigned __int8 *)(v12 + *(_DWORD *)(v16 + 148));
            v14 = v11 - v13;
            if ( v11 != v13 )
              break;
            if ( !v11 )
              break;
            v9 = *(_DWORD *)(v16 + 148);
            --v8;
          }
          while ( v8 );
          if ( v17 )
            *(_DWORD *)(v15 + 848) &= 0xFFFFFFFD;
          result = v14;
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        *(_DWORD *)sub_10034888(v4) = 22;
        sub_10034711();
        result = 0x7FFFFFFF;
      }
    }
    else
    {
      *(_DWORD *)sub_10034888(v4) = 22;
      sub_10034711();
      result = 0x7FFFFFFF;
    }
  }
  else
  {
    *(_DWORD *)sub_10034888(v4) = 22;
    sub_10034711();
    result = 0x7FFFFFFF;
  }
  return result;
}
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10035A08: using guessed type _DWORD __stdcall sub_10035A08(_DWORD);

//----- (1009394D) --------------------------------------------------------
int __cdecl sub_1009394D(int a1, int a2, DWORD dwCmpFlags, int a4, int a5, int a6, int cbMultiByte, UINT CodePage)
{
  LPCSTR v8; // ecx
  signed int v9; // esi
  signed int v10; // eax
  signed int v11; // edi
  UINT v12; // ebx
  BYTE *v13; // eax
  unsigned __int8 v14; // cl
  BYTE *v16; // eax
  unsigned __int8 v17; // cl
  int v18; // eax
  SIZE_T v19; // eax
  char *v20; // ebx
  char *v21; // eax
  WCHAR *v22; // ebx
  const CHAR *v23; // eax
  SIZE_T v24; // eax
  char *v25; // edi
  char *v26; // eax
  WCHAR *v27; // edi
  int v28; // esi
  char v30; // [esp+0h] [ebp-34h]
  int v31; // [esp+Ch] [ebp-28h]
  int cchWideChar; // [esp+10h] [ebp-24h]
  LPCSTR v33; // [esp+14h] [ebp-20h]
  LPCSTR lpMultiByteStr; // [esp+18h] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+1Ch] [ebp-18h]

  v8 = (LPCSTR)a6;
  cchWideChar = a1;
  v9 = a5;
  v31 = a2;
  lpMultiByteStr = (LPCSTR)a4;
  v33 = (LPCSTR)a6;
  if ( a5 <= 0 )
  {
    if ( a5 < -1 )
      return 0;
  }
  else
  {
    v10 = sub_10033E1F(a4, a5);
    v8 = v33;
    v9 = v10;
  }
  v11 = cbMultiByte;
  if ( cbMultiByte <= 0 )
  {
    if ( cbMultiByte < -1 )
      return 0;
  }
  else
  {
    v11 = sub_10033E1F(v8, cbMultiByte);
    cbMultiByte = v11;
  }
  v12 = CodePage;
  if ( !CodePage )
  {
    v12 = *(_DWORD *)(*(_DWORD *)cchWideChar + 8);
    CodePage = *(_DWORD *)(*(_DWORD *)cchWideChar + 8);
  }
  if ( !v9 || !v11 )
  {
    if ( v9 == v11 )
      return 2;
    if ( v11 > 1 )
      return 1;
    if ( v9 > 1 )
      return 3;
    if ( !GetCPInfo(v12, &CPInfo) )
      return 0;
    if ( v9 > 0 )
    {
      if ( CPInfo.MaxCharSize >= 2 )
      {
        v13 = CPInfo.LeadByte;
        if ( CPInfo.LeadByte[0] )
        {
          while ( 1 )
          {
            v14 = v13[1];
            if ( !v14 )
              break;
            if ( *lpMultiByteStr >= *v13 && *lpMultiByteStr <= v14 )
              return 2;
            v13 += 2;
            if ( !*v13 )
              return 3;
          }
        }
      }
      return 3;
    }
    if ( v11 > 0 )
    {
      if ( CPInfo.MaxCharSize >= 2 )
      {
        v16 = CPInfo.LeadByte;
        if ( CPInfo.LeadByte[0] )
        {
          do
          {
            v17 = v16[1];
            if ( !v17 )
              break;
            if ( *v33 >= *v16 && *v33 <= v17 )
              return 2;
            v16 += 2;
          }
          while ( *v16 );
        }
      }
      return 1;
    }
  }
  v18 = sub_100336B8(v12, 9, lpMultiByteStr, v9, 0, 0);
  cchWideChar = v18;
  if ( !v18 )
    return 0;
  v19 = 2 * v18 < (unsigned int)(2 * v18 + 8) ? 2 * v18 + 8 : 0;
  if ( !v19 )
    goto LABEL_58;
  if ( v19 <= 0x400 )
  {
    sub_10034572(v30);
    v20 = &v30;
    if ( &v30 )
    {
      *(_DWORD *)&v30 = 52428;
      goto LABEL_39;
    }
LABEL_58:
    sub_10033249(0);
    return 0;
  }
  v21 = (char *)sub_10034C52(v19);
  v20 = v21;
  if ( !v21 )
    goto LABEL_58;
  *(_DWORD *)v21 = 56797;
LABEL_39:
  v22 = (WCHAR *)(v20 + 8);
  if ( !v22 )
    goto LABEL_58;
  if ( !sub_100336B8(CodePage, 1, lpMultiByteStr, v9, v22, cchWideChar)
    || (v23 = (const CHAR *)sub_100336B8(CodePage, 9, v33, v11, 0, 0), (lpMultiByteStr = v23) == 0) )
  {
    sub_10033249(v22);
    return 0;
  }
  v24 = 2 * (signed int)v23 < (unsigned int)(2 * (_DWORD)v23 + 8) ? 2 * (_DWORD)v23 + 8 : 0;
  if ( !v24 )
    goto LABEL_55;
  if ( v24 <= 0x400 )
  {
    sub_10034572(v30);
    v25 = &v30;
    if ( &v30 )
    {
      *(_DWORD *)&v30 = 52428;
      goto LABEL_48;
    }
LABEL_55:
    sub_10033249(0);
    goto LABEL_51;
  }
  v26 = (char *)sub_10034C52(v24);
  v25 = v26;
  if ( !v26 )
    goto LABEL_55;
  *(_DWORD *)v26 = 56797;
LABEL_48:
  v27 = (WCHAR *)(v25 + 8);
  if ( !v27 )
    goto LABEL_55;
  if ( !sub_100336B8(CodePage, 1, v33, cbMultiByte, v27, (int)lpMultiByteStr) )
  {
    sub_10033249(v27);
LABEL_51:
    sub_10033249(v22);
    return 0;
  }
  v28 = sub_1003503F(v31, dwCmpFlags, v22, cchWideChar, v27, (int)lpMultiByteStr, 0, 0, 0);
  sub_10033249(v27);
  sub_10033249(v22);
  return v28;
}
// 10033249: using guessed type _DWORD __cdecl sub_10033249(_DWORD);
// 10033E1F: using guessed type _DWORD __cdecl sub_10033E1F(_DWORD, _DWORD);
// 10034572: using guessed type _DWORD __cdecl sub_10034572(char);

//----- (10093C93) --------------------------------------------------------
int __cdecl sub_10093C93(int a1, int a2, DWORD dwCmpFlags, int a4, int a5, int a6, int cbMultiByte, UINT CodePage)
{
  int result; // eax
  int v9; // [esp+0h] [ebp-10h]
  int v10; // [esp+4h] [ebp-Ch]
  char v11; // [esp+Ch] [ebp-4h]

  sub_10035A08(a1);
  result = sub_1009394D((int)&v10, a2, dwCmpFlags, a4, a5, a6, cbMultiByte, CodePage);
  if ( v11 )
    *(_DWORD *)(v9 + 848) &= 0xFFFFFFFD;
  return result;
}
// 10035A08: using guessed type _DWORD __stdcall sub_10035A08(_DWORD);

//----- (10093CEA) --------------------------------------------------------
__int16 __stdcall sub_10093CEA(_DWORD *a1, __int16 **a2, _DWORD *a3)
{
  __int16 v3; // si

  sub_100360E8(*a1);
  v3 = sub_1003606B(**a2);
  sub_10033799(*a3);
  return v3;
}
// 10033799: using guessed type _DWORD __cdecl sub_10033799(_DWORD);
// 100360E8: using guessed type _DWORD __cdecl sub_100360E8(_DWORD);

//----- (10093E39) --------------------------------------------------------
__int16 __cdecl sub_10093E39(__int16 Buffer)
{
  int v1; // ecx
  __int16 result; // ax
  DWORD NumberOfCharsWritten; // [esp+0h] [ebp-4h]

  if ( sub_10035305(v1) && sub_10034775(&Buffer, 1u, &NumberOfCharsWritten) )
    result = Buffer;
  else
    result = -1;
  return result;
}
// 10035305: using guessed type int __cdecl sub_10035305(_DWORD);

//----- (10093E8B) --------------------------------------------------------
int __cdecl sub_10093E8B(int a1, _BYTE *a2, int a3)
{
  int v3; // edi
  LPCRITICAL_SECTION v4; // eax
  DWORD v5; // ecx
  _BYTE *v6; // eax
  _BYTE *v7; // esi
  char v8; // dl
  char v9; // cl
  int v10; // ecx
  char v11; // dl
  int v12; // eax
  LPCRITICAL_SECTION v13; // ecx
  char v14; // al
  HANDLE hFile; // [esp+10h] [ebp-14h]
  DWORD NumberOfBytesRead; // [esp+14h] [ebp-10h]
  int v18; // [esp+18h] [ebp-Ch]
  _BYTE *v19; // [esp+1Ch] [ebp-8h]
  char Buffer; // [esp+23h] [ebp-1h]

  v3 = 56 * (a1 & 0x3F);
  v4 = lpCriticalSection[a1 >> 6];
  v18 = a1 >> 6;
  hFile = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v4[1].DebugInfo + v3);
  if ( a3 && *a2 == 10 )
    *((_BYTE *)&v4[1].LockSemaphore + v3) |= 4u;
  else
    *((_BYTE *)&v4[1].LockSemaphore + v3) &= 0xFBu;
  v5 = (DWORD)&a2[a3];
  v6 = a2;
  NumberOfBytesRead = (DWORD)&a2[a3];
  v7 = a2;
  v19 = a2;
  if ( a2 < &a2[a3] )
  {
    do
    {
      v8 = *v6;
      if ( *v6 == 26 )
      {
        v13 = lpCriticalSection[v18];
        v14 = *((_BYTE *)&v13[1].LockSemaphore + v3);
        if ( !(v14 & 0x40) )
        {
          *((_BYTE *)&v13[1].LockSemaphore + v3) = v14 | 2;
          return v7 - a2;
        }
        *v7 = 26;
        goto LABEL_28;
      }
      ++v6;
      if ( v8 == 13 )
      {
        if ( (unsigned int)v6 >= v5 )
        {
          if ( ReadFile(hFile, &Buffer, 1u, &NumberOfBytesRead, 0) && NumberOfBytesRead )
          {
            v10 = v18;
            if ( *((_BYTE *)&lpCriticalSection[v18][1].LockSemaphore + v3) & 0x48 )
            {
              v11 = Buffer;
              v12 = (int)(v7 + 1);
              if ( Buffer == 10 )
              {
                *v7 = Buffer;
              }
              else
              {
                *v7 = 13;
                *((_BYTE *)&lpCriticalSection[v10][1].LockSemaphore + v3 + 2) = v11;
                v12 = (int)(v7 + 1);
              }
              v7 = (_BYTE *)v12;
              return v7 - a2;
            }
            if ( Buffer == 10 && v7 == a2 )
            {
              *v7 = 10;
LABEL_28:
              ++v7;
              return v7 - a2;
            }
            sub_1003356E(a1, (LARGE_INTEGER)-1i64, 1u);
            if ( Buffer == 10 )
              return v7 - a2;
          }
          *v7 = 13;
          goto LABEL_28;
        }
        v9 = *v6;
        v19 += (*v6 == 10) + 1;
        *v7 = v9 == 10 ? 10 : 13;
        v6 = v19;
        v5 = NumberOfBytesRead;
      }
      else
      {
        v19 = v6;
        *v7 = v8;
      }
      ++v7;
    }
    while ( (unsigned int)v6 < v5 );
  }
  return v7 - a2;
}

//----- (1009402B) --------------------------------------------------------
unsigned int __cdecl sub_1009402B(int a1, signed __int16 *a2, int a3)
{
  int v3; // edi
  LPCRITICAL_SECTION v4; // eax
  unsigned __int16 *v5; // eax
  signed __int16 *v6; // esi
  int v7; // ecx
  unsigned int v8; // edx
  unsigned __int16 v9; // ax
  int v10; // edx
  char v11; // ah
  int v12; // edx
  signed __int16 v13; // ax
  LPCRITICAL_SECTION v14; // edx
  char v15; // al
  HANDLE hFile; // [esp+Ch] [ebp-1Ch]
  DWORD NumberOfBytesRead; // [esp+10h] [ebp-18h]
  int v19; // [esp+14h] [ebp-14h]
  int v20; // [esp+18h] [ebp-10h]
  unsigned int v21; // [esp+1Ch] [ebp-Ch]
  int v22; // [esp+20h] [ebp-8h]
  unsigned __int16 *Buffer; // [esp+24h] [ebp-4h]

  v3 = 56 * (a1 & 0x3F);
  v22 = a1 >> 6;
  v4 = lpCriticalSection[a1 >> 6];
  NumberOfBytesRead = 10;
  hFile = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v4[1].DebugInfo + v3);
  if ( a3 && *a2 == 10 )
    *((_BYTE *)&v4[1].LockSemaphore + v3) |= 4u;
  else
    *((_BYTE *)&v4[1].LockSemaphore + v3) &= 0xFBu;
  v5 = (unsigned __int16 *)a2;
  v21 = (unsigned int)&a2[a3];
  v6 = a2;
  Buffer = (unsigned __int16 *)a2;
  if ( (unsigned int)a2 < v21 )
  {
    v20 = 13;
    while ( 1 )
    {
      v7 = *v5;
      v19 = *v5;
      v8 = v21;
      if ( v7 == 26 )
        break;
      ++v5;
      if ( (_WORD)v7 == (_WORD)v20 )
      {
        if ( (unsigned int)v5 >= v21 )
        {
          if ( ReadFile(hFile, &Buffer, 2u, &NumberOfBytesRead, 0) && NumberOfBytesRead )
          {
            v10 = v22;
            if ( *((_BYTE *)&lpCriticalSection[v22][1].LockSemaphore + v3) & 0x48 )
            {
              v11 = BYTE1(Buffer);
              HIWORD(Buffer) = (_WORD)Buffer;
              if ( (_WORD)Buffer == 10 )
              {
                *v6 = 10;
              }
              else
              {
                *v6 = 13;
                *((_BYTE *)&lpCriticalSection[v10][1].LockSemaphore + v3 + 2) = BYTE2(Buffer);
                v12 = v22;
                *((_BYTE *)&lpCriticalSection[v22][1].LockSemaphore + v3 + 3) = v11;
                *((_BYTE *)&lpCriticalSection[v12][1].SpinCount + v3) = 10;
              }
              ++v6;
              return ((char *)v6 - (char *)a2) & 0xFFFFFFFE;
            }
            v13 = 10;
            if ( (_WORD)Buffer == 10 && v6 == a2 )
            {
LABEL_23:
              *v6 = v13;
LABEL_29:
              ++v6;
              return ((char *)v6 - (char *)a2) & 0xFFFFFFFE;
            }
            sub_1003356E(a1, (LARGE_INTEGER)-2i64, 1u);
            if ( (_WORD)Buffer == 10 )
              return ((char *)v6 - (char *)a2) & 0xFFFFFFFE;
          }
          v13 = 13;
          goto LABEL_23;
        }
        v9 = *v5;
        Buffer += (v9 == (_WORD)NumberOfBytesRead) + 1;
        v8 = v21;
        *v6 = v9 == 10 ? 10 : 13;
        v5 = Buffer;
      }
      else
      {
        Buffer = v5;
        *v6 = v7;
      }
      ++v6;
      if ( (unsigned int)v5 >= v8 )
        return ((char *)v6 - (char *)a2) & 0xFFFFFFFE;
    }
    v14 = lpCriticalSection[v22];
    v15 = *((_BYTE *)&v14[1].LockSemaphore + v3);
    if ( !(v15 & 0x40) )
    {
      *((_BYTE *)&v14[1].LockSemaphore + v3) = v15 | 2;
      return ((char *)v6 - (char *)a2) & 0xFFFFFFFE;
    }
    *v6 = 26;
    goto LABEL_29;
  }
  return ((char *)v6 - (char *)a2) & 0xFFFFFFFE;
}

//----- (100942CC) --------------------------------------------------------
int __cdecl sub_100942CC(int a1, LPCSTR lpMultiByteStr, int a3, LPWSTR lpWideCharStr, int cchWideChar)
{
  int result; // eax
  int v6; // ecx
  int v7; // edi
  const CHAR *v8; // eax
  const CHAR *v9; // esi
  int v10; // eax
  unsigned int v11; // edx
  char *v12; // esi
  char v13; // cl
  char v14; // cl
  int v15; // esi
  int v16; // eax
  DWORD v17; // eax
  LPCRITICAL_SECTION v18; // edx
  char v19; // cl
  LPCRITICAL_SECTION v20; // [esp+4h] [ebp-8h]
  int v21; // [esp+8h] [ebp-4h]

  result = sub_10093E8B(a1, lpMultiByteStr, a3);
  v6 = result;
  if ( result )
  {
    v7 = 56 * (a1 & 0x3F);
    v21 = a1 >> 6;
    v20 = lpCriticalSection[a1 >> 6];
    if ( *((_BYTE *)&v20[1].LockSemaphore + v7 + 1) )
    {
      v8 = &lpMultiByteStr[result];
      v9 = &lpMultiByteStr[v6 - 1];
      if ( *v9 < 0 )
      {
        v10 = *(unsigned __int8 *)v9;
        v11 = 1;
        while ( !byte_100B0B50[v10] && v11 <= 4 && v9 >= lpMultiByteStr )
        {
          --v9;
          ++v11;
          v10 = *(unsigned __int8 *)v9;
        }
        LOBYTE(v6) = *v9;
        if ( !byte_100B0B50[*(unsigned __int8 *)v9] )
        {
          *(_DWORD *)sub_10034888(v6) = 42;
          return -1;
        }
        if ( byte_100B0B50[*(unsigned __int8 *)v9] + 1 == v11 )
        {
          v9 += v11;
        }
        else if ( *((_BYTE *)&v20[1].LockSemaphore + v7) & 0x48 )
        {
          v12 = (char *)(v9 + 1);
          *((_BYTE *)&v20[1].LockSemaphore + v7 + 2) = v6;
          if ( v11 >= 2 )
          {
            v13 = *v12++;
            *((_BYTE *)&lpCriticalSection[v21][1].LockSemaphore + v7 + 3) = v13;
          }
          if ( v11 == 3 )
          {
            v14 = *v12++;
            *((_BYTE *)&lpCriticalSection[v21][1].SpinCount + v7) = v14;
          }
          v9 = &v12[-v11];
        }
        else
        {
          sub_1003356E(a1, (LARGE_INTEGER)-v11, 1u);
        }
      }
      else
      {
        v9 = v8;
      }
      v15 = v9 - lpMultiByteStr;
      v16 = sub_100336B8(0xFDE9u, 0, lpMultiByteStr, v15, lpWideCharStr, cchWideChar);
      if ( !v16 )
      {
        v17 = GetLastError();
        sub_10035297(v17);
        return -1;
      }
      v18 = lpCriticalSection[v21];
      v19 = *((_BYTE *)&v18[1].SpinCount + v7 + 1) & 0xFD | (v16 == v15 ? 0 : 2);
      result = 2 * v16;
      *((_BYTE *)&v18[1].SpinCount + v7 + 1) = v19;
    }
  }
  return result;
}
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10035297: using guessed type _DWORD __cdecl sub_10035297(_DWORD);

//----- (10094478) --------------------------------------------------------
unsigned int __cdecl sub_10094478(int a1, char *a2, int a3)
{
  char *v3; // edi
  unsigned __int16 *v4; // ecx
  char *v5; // esi
  unsigned int v6; // edx
  int v7; // eax
  signed int v9; // [esp-8h] [ebp-14h]

  v3 = a2;
  v4 = (unsigned __int16 *)a2;
  v5 = a2;
  v6 = (unsigned int)&a2[2 * a3];
  if ( (unsigned int)a2 < v6 )
  {
    while ( 1 )
    {
      v7 = *v4;
      if ( v7 == 26 )
        break;
      if ( v7 != 13 || (unsigned int)(v4 + 1) >= v6 || v4[1] != 10 )
      {
        v9 = 2;
      }
      else
      {
        LOWORD(v7) = 10;
        v9 = 4;
      }
      *(_WORD *)v5 = v7;
      v4 = (unsigned __int16 *)((char *)v4 + v9);
      v5 += 2;
      v3 = a2;
      if ( (unsigned int)v4 >= v6 )
        return (v5 - v3) & 0xFFFFFFFE;
    }
    *((_BYTE *)&lpCriticalSection[a1 >> 6][1].LockSemaphore + 56 * (a1 & 0x3F)) |= 2u;
  }
  return (v5 - v3) & 0xFFFFFFFE;
}

//----- (10094620) --------------------------------------------------------
int __usercall sub_10094620@<eax>(int a1@<ebp>)
{
  int v1; // esi
  int v2; // ebx

  v1 = *(_DWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 - 28);
  return sub_10094626();
}

//----- (10094626) --------------------------------------------------------
int sub_10094626()
{
  return sub_100331E0();
}

//----- (10094674) --------------------------------------------------------
unsigned int __cdecl sub_10094674(int a1, LPWSTR lpWideCharStr, DWORD nNumberOfBytesToRead)
{
  int v3; // ecx
  int v4; // edi
  LPCRITICAL_SECTION v5; // eax
  int v6; // ecx
  void *v7; // esi
  char v8; // al
  void *v9; // esi
  int v10; // eax
  int v11; // ecx
  DWORD v12; // ebx
  LPWSTR v13; // ecx
  int v14; // ecx
  int v15; // eax
  LPCRITICAL_SECTION v16; // ecx
  void *v17; // edx
  signed int v18; // edi
  int v19; // edx
  char v20; // al
  char *v21; // ecx
  int v22; // edx
  _BYTE *v23; // ecx
  bool v24; // zf
  char v25; // al
  int v26; // edx
  _BYTE *v27; // ecx
  char v28; // al
  DWORD v29; // ST08_4
  const CHAR *v30; // ebx
  DWORD v31; // eax
  unsigned int v32; // edi
  DWORD v34; // ecx
  DWORD v35; // ST08_4
  unsigned int v36; // eax
  int v37; // ecx
  int v38; // ecx
  int v39; // [esp-8h] [ebp-34h]
  DWORD Mode; // [esp+8h] [ebp-24h]
  char *v41; // [esp+Ch] [ebp-20h]
  int v42; // [esp+10h] [ebp-1Ch]
  DWORD NumberOfCharsRead; // [esp+14h] [ebp-18h]
  HANDLE hConsoleHandle; // [esp+18h] [ebp-14h]
  int v45; // [esp+1Ch] [ebp-10h]
  LPVOID lpBuffer; // [esp+20h] [ebp-Ch]
  unsigned int v47; // [esp+24h] [ebp-8h]
  char v48; // [esp+2Bh] [ebp-1h]

  if ( a1 != -2 )
  {
    if ( a1 >= 0
      && a1 < (unsigned int)dword_100B1F48
      && (v4 = 56 * (a1 & 0x3F),
          v47 = (unsigned int)a1 >> 6,
          v42 = 1,
          v5 = lpCriticalSection[(unsigned int)a1 >> 6],
          v45 = v4,
          v48 = *((_BYTE *)&v5[1].LockSemaphore + v4),
          v48 & 1) )
    {
      if ( nNumberOfBytesToRead <= 0x7FFFFFFF )
      {
        if ( !nNumberOfBytesToRead || v48 & 2 )
          return 0;
        if ( lpWideCharStr )
        {
          v7 = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&v5[1].DebugInfo + v4);
          v8 = *((_BYTE *)&v5[1].LockSemaphore + v4 + 1);
          v48 = v8;
          hConsoleHandle = v7;
          v9 = 0;
          v10 = v8 - 1;
          if ( v10 )
          {
            if ( v10 == 1 && !(~(_BYTE)nNumberOfBytesToRead & 1) )
              goto LABEL_14;
            v12 = nNumberOfBytesToRead;
            v13 = lpWideCharStr;
            lpBuffer = lpWideCharStr;
          }
          else
          {
            if ( !(~(_BYTE)nNumberOfBytesToRead & 1) )
            {
LABEL_14:
              *(_DWORD *)sub_100334E7() = 0;
              *(_DWORD *)sub_10034888(v11) = 22;
              sub_10034711();
LABEL_39:
              v32 = -1;
LABEL_40:
              sub_1003603E(v9);
              return v32;
            }
            v12 = 4;
            if ( nNumberOfBytesToRead >> 1 >= 4 )
              v12 = nNumberOfBytesToRead >> 1;
            v9 = (void *)sub_10034C52(v12);
            sub_1003603E(0);
            sub_1003603E(0);
            lpBuffer = v9;
            if ( !v9 )
            {
              *(_DWORD *)sub_10034888(v14) = 12;
              *(_DWORD *)sub_100334E7() = 8;
              goto LABEL_39;
            }
            v15 = sub_1003356E(a1, 0i64, 1u);
            v16 = lpCriticalSection[v47];
            *(LONG *)((char *)&v16[1].RecursionCount + v4) = v15;
            *(HANDLE *)((char *)&v16[1].OwningThread + v4) = v17;
            v13 = (LPWSTR)v9;
          }
          v18 = 0;
          v41 = (char *)v13;
          NumberOfCharsRead = (DWORD)lpCriticalSection[v47];
          v19 = a1;
          if ( *(_BYTE *)(v45 + NumberOfCharsRead + 40) & 0x48 )
          {
            v20 = *(_BYTE *)(v45 + NumberOfCharsRead + 42);
            v21 = (char *)lpBuffer;
            if ( v20 != 10 )
            {
              if ( v12 )
              {
                v22 = v45;
                v18 = 1;
                *(_BYTE *)lpBuffer = v20;
                v23 = v21 + 1;
                --v12;
                v24 = v48 == 0;
                lpBuffer = v23;
                *((_BYTE *)&lpCriticalSection[v47][1].LockSemaphore + v22 + 2) = 10;
                v19 = a1;
                if ( !v24 )
                {
                  v25 = *((_BYTE *)&lpCriticalSection[v47][1].LockSemaphore + v45 + 3);
                  v19 = a1;
                  if ( v25 != 10 )
                  {
                    if ( v12 )
                    {
                      v26 = v45;
                      *v23 = v25;
                      v27 = v23 + 1;
                      --v12;
                      v24 = v48 == 1;
                      lpBuffer = v27;
                      v18 = 2;
                      *((_BYTE *)&lpCriticalSection[v47][1].LockSemaphore + v26 + 3) = 10;
                      v19 = a1;
                      if ( v24 )
                      {
                        v28 = *((_BYTE *)&lpCriticalSection[v47][1].SpinCount + v45);
                        v19 = a1;
                        if ( v28 != 10 )
                        {
                          if ( v12 )
                          {
                            *v27 = v28;
                            --v12;
                            lpBuffer = v27 + 1;
                            v18 = 3;
                            *((_BYTE *)&lpCriticalSection[v47][1].SpinCount + v45) = 10;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if ( sub_10036246(v19)
            && *((_BYTE *)&lpCriticalSection[v47][1].LockSemaphore + v45) < 0
            && GetConsoleMode(hConsoleHandle, &Mode) )
          {
            if ( v48 == 2 )
            {
              v29 = v12 >> 1;
              v30 = (const CHAR *)lpBuffer;
              if ( !ReadConsoleW(hConsoleHandle, lpBuffer, v29, &NumberOfCharsRead, 0) )
              {
                v31 = GetLastError();
LABEL_38:
                sub_10035297(v31);
                goto LABEL_39;
              }
              v34 = nNumberOfBytesToRead;
              v32 = v18 + 2 * NumberOfCharsRead;
              goto LABEL_46;
            }
          }
          else
          {
            LOBYTE(v42) = 0;
          }
          v35 = v12;
          v30 = (const CHAR *)lpBuffer;
          if ( !ReadFile(hConsoleHandle, lpBuffer, v35, &NumberOfCharsRead, 0)
            || (v34 = nNumberOfBytesToRead, NumberOfCharsRead > nNumberOfBytesToRead) )
          {
            v31 = GetLastError();
            if ( v31 == 5 )
            {
              *(_DWORD *)sub_10034888(v37) = 9;
              *(_DWORD *)sub_100334E7() = 5;
              goto LABEL_39;
            }
            if ( v31 == 109 )
            {
              v32 = 0;
              goto LABEL_40;
            }
            goto LABEL_38;
          }
          v32 = NumberOfCharsRead + v18;
LABEL_46:
          if ( *((_BYTE *)&lpCriticalSection[v47][1].LockSemaphore + v45) < 0 )
          {
            if ( v48 == 2 )
            {
              v39 = v32 >> 1;
              if ( (_BYTE)v42 )
                v36 = sub_10094478(a1, v41, v39);
              else
                v36 = sub_1009402B(a1, (signed __int16 *)v41, v39);
            }
            else
            {
              v36 = sub_100942CC(a1, v30, v32, lpWideCharStr, v34 >> 1);
            }
            v32 = v36;
          }
          goto LABEL_40;
        }
      }
      *(_DWORD *)sub_100334E7() = 0;
      *(_DWORD *)sub_10034888(v6) = 22;
    }
    else
    {
      *(_DWORD *)sub_100334E7() = 0;
      *(_DWORD *)sub_10034888(v38) = 9;
    }
    sub_10034711();
    return -1;
  }
  *(_DWORD *)sub_100334E7() = 0;
  *(_DWORD *)sub_10034888(v3) = 9;
  return -1;
}
// 100334E7: using guessed type int sub_100334E7(void);
// 10034711: using guessed type int sub_10034711(void);
// 10034888: using guessed type int __thiscall sub_10034888(_DWORD);
// 10035297: using guessed type _DWORD __cdecl sub_10035297(_DWORD);
// 10036246: using guessed type _DWORD __cdecl sub_10036246(_DWORD);
// 100B1F48: using guessed type int dword_100B1F48;

//----- (10095240) --------------------------------------------------------
int __cdecl sub_10095240(int a1)
{
  int result; // eax
  int v2; // edx
  int v3; // ecx

  result = 8 * (a1 & 0x10);
  if ( a1 & 8 )
    result |= 0x200u;
  if ( a1 & 4 )
    result |= 0x400u;
  if ( a1 & 2 )
    result |= 0x800u;
  if ( a1 & 1 )
    result |= 0x1000u;
  if ( a1 & 0x80000 )
    result |= 0x100u;
  v2 = a1 & 0x300;
  if ( a1 & 0x300 )
  {
    switch ( v2 )
    {
      case 256:
        result |= 0x2000u;
        break;
      case 512:
        result |= 0x4000u;
        break;
      case 768:
        result |= 0x6000u;
        break;
    }
  }
  v3 = a1 & 0x3000000;
  if ( (a1 & 0x3000000) == 0x1000000 )
    return result | 0x8040;
  if ( v3 == 0x2000000 )
    return result | 0x40;
  if ( v3 == 50331648 )
    result |= 0x8000u;
  return result;
}

//----- (10095310) --------------------------------------------------------
int sub_10095310()
{
  char v0; // cl
  int result; // eax

  v0 = sub_100350C1();
  result = 0;
  if ( v0 & 0x3F )
  {
    result = 16 * (v0 & 1);
    if ( v0 & 4 )
      result |= 8u;
    if ( v0 & 8 )
      result |= 4u;
    if ( v0 & 0x10 )
      result |= 2u;
    if ( v0 & 0x20 )
      result |= 1u;
    if ( v0 & 2 )
      result |= 0x80000u;
  }
  return result;
}
// 100350C1: using guessed type int sub_100350C1(void);

//----- (1009547A) --------------------------------------------------------
int __usercall sub_1009547A@<eax>(char a1@<fpstat>)
{
  int v1; // ecx
  int v2; // edx
  int result; // eax
  int v4; // [esp+8h] [ebp-8h]

  __asm { fnclex }
  if ( dword_100B17D8 < 1 )
  {
    result = 0;
    if ( a1 & 0x3F )
    {
      result = 16 * (a1 & 1);
      if ( a1 & 4 )
        result |= 8u;
      if ( a1 & 8 )
        result |= 4u;
      if ( a1 & 0x10 )
        result |= 2u;
      if ( a1 & 0x20 )
        result |= 1u;
      if ( a1 & 2 )
        result |= 0x80000u;
    }
  }
  else
  {
    v1 = 0;
    v2 = 0;
    if ( a1 & 0x3F )
    {
      v2 = 16 * (a1 & 1);
      if ( a1 & 4 )
        v2 |= 8u;
      if ( a1 & 8 )
        v2 |= 4u;
      if ( a1 & 0x10 )
        v2 |= 2u;
      if ( a1 & 0x20 )
        v2 |= 1u;
      if ( a1 & 2 )
        v2 |= 0x80000u;
    }
    v4 = _mm_getcsr();
    _mm_setcsr(v4 & 0xFFFFFFC0);
    if ( v4 & 0x3F )
    {
      v1 = 16 * (v4 & 1);
      if ( v4 & 4 )
        v1 |= 8u;
      if ( v4 & 8 )
        v1 |= 4u;
      if ( v4 & 0x10 )
        v1 |= 2u;
      if ( v4 & 0x20 )
        v1 |= 1u;
      if ( v4 & 2 )
        v1 |= 0x80000u;
    }
    result = v2 | v1;
  }
  return result;
}
// 100B17D8: using guessed type int dword_100B17D8;

//----- (1009558F) --------------------------------------------------------
int __cdecl sub_1009558F(int a1, int a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  __int16 v5; // ax
  int v6; // ecx
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ST18_4
  unsigned int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  __int16 v20; // [esp+8h] [ebp-8h]

  v2 = 16 * (v20 & 1);
  if ( v20 & 4 )
    v2 |= 8u;
  if ( v20 & 8 )
    v2 |= 4u;
  if ( v20 & 0x10 )
    v2 |= 2u;
  if ( v20 & 0x20 )
    v2 |= 1u;
  if ( v20 & 2 )
    v2 |= 0x80000u;
  v3 = v20 & 0xC00;
  if ( v20 & 0xC00 )
  {
    switch ( v3 )
    {
      case 1024:
        v2 |= 0x100u;
        break;
      case 2048:
        v2 |= 0x200u;
        break;
      case 3072:
        v2 |= 0x300u;
        break;
    }
  }
  if ( v20 & 0x300 )
  {
    if ( (v20 & 0x300) == 512 )
      v2 |= 0x10000u;
  }
  else
  {
    v2 |= 0x20000u;
  }
  if ( v20 & 0x1000 )
    v2 |= 0x40000u;
  v4 = a2 & a1 | v2 & ~a2;
  if ( v4 != v2 )
  {
    v5 = sub_100959B6(a2 & a1 | v2 & ~a2);
    v4 = 16 * (v5 & 1);
    if ( v5 & 4 )
      v4 |= 8u;
    if ( v5 & 8 )
      v4 |= 4u;
    if ( v5 & 0x10 )
      v4 |= 2u;
    if ( v5 & 0x20 )
      v4 |= 1u;
    if ( v5 & 2 )
      v4 |= 0x80000u;
    v6 = v5 & 0xC00;
    if ( v5 & 0xC00 )
    {
      switch ( v6 )
      {
        case 1024:
          v4 |= 0x100u;
          break;
        case 2048:
          v4 |= 0x200u;
          break;
        case 3072:
          v4 |= 0x300u;
          break;
      }
    }
    if ( v5 & 0x300 )
    {
      if ( (v5 & 0x300) == 512 )
        v4 |= 0x10000u;
    }
    else
    {
      v4 |= 0x20000u;
    }
    if ( v5 & 0x1000 )
      v4 |= 0x40000u;
  }
  if ( dword_100B17D8 < 1 )
    return v4;
  v7 = _mm_getcsr();
  v8 = (v7 >> 3) & 0x10;
  if ( v7 & 0x200 )
    v8 |= 8u;
  if ( v7 & 0x400 )
    v8 |= 4u;
  if ( v7 & 0x800 )
    v8 |= 2u;
  if ( v7 & 0x1000 )
    v8 |= 1u;
  if ( v7 & 0x100 )
    v8 |= 0x80000u;
  v9 = v7 & 0x6000;
  if ( v7 & 0x6000 )
  {
    switch ( v9 )
    {
      case 8192:
        v8 |= 0x100u;
        break;
      case 16384:
        v8 |= 0x200u;
        break;
      case 24576:
        v8 |= 0x300u;
        break;
    }
  }
  v10 = (unsigned __int16)(v7 & 0x8040) - 64;
  if ( v10 )
  {
    v11 = v10 - 32704;
    if ( v11 )
    {
      if ( v11 == 64 )
        v8 |= 0x1000000u;
    }
    else
    {
      v8 |= 0x3000000u;
    }
  }
  else
  {
    v8 |= 0x2000000u;
  }
  v12 = a1 & a2 & 0x308031F | v8 & ~(a2 & 0x308031F);
  if ( v12 != v8 )
  {
    v13 = sub_10095240(v12);
    sub_1003620F(v13);
    v14 = _mm_getcsr();
    v8 = (v14 >> 3) & 0x10;
    if ( v14 & 0x200 )
      v8 |= 8u;
    if ( v14 & 0x400 )
      v8 |= 4u;
    if ( v14 & 0x800 )
      v8 |= 2u;
    if ( v14 & 0x1000 )
      v8 |= 1u;
    if ( v14 & 0x100 )
      v8 |= 0x80000u;
    v15 = v14 & 0x6000;
    if ( v14 & 0x6000 )
    {
      switch ( v15 )
      {
        case 8192:
          v8 |= 0x100u;
          break;
        case 16384:
          v8 |= 0x200u;
          break;
        case 24576:
          v8 |= 0x300u;
          break;
      }
    }
    v16 = (unsigned __int16)(v14 & 0x8040) - 64;
    if ( v16 )
    {
      v17 = v16 - 32704;
      if ( v17 )
      {
        if ( v17 == 64 )
          v8 |= 0x1000000u;
      }
      else
      {
        v8 |= 0x3000000u;
      }
    }
    else
    {
      v8 |= 0x2000000u;
    }
  }
  v18 = v4 | v8;
  if ( (v4 ^ v8) & 0x8031F )
    v18 |= 0x80000000;
  return v18;
}
// 1003620F: using guessed type _DWORD __cdecl sub_1003620F(_DWORD);
// 100B17D8: using guessed type int dword_100B17D8;

//----- (100959B6) --------------------------------------------------------
int __cdecl sub_100959B6(unsigned int a1)
{
  int result; // eax
  int v2; // edx

  result = (a1 >> 4) & 1;
  if ( a1 & 8 )
    result = (a1 >> 4) & 1 | 4;
  if ( a1 & 4 )
    result |= 8u;
  if ( a1 & 2 )
    result |= 0x10u;
  if ( a1 & 1 )
    result |= 0x20u;
  if ( a1 & 0x80000 )
    result |= 2u;
  v2 = a1 & 0x300;
  if ( a1 & 0x300 )
  {
    switch ( v2 )
    {
      case 256:
        result |= 0x400u;
        break;
      case 512:
        result |= 0x800u;
        break;
      case 768:
        result |= 0xC00u;
        break;
    }
  }
  if ( a1 & 0x30000 )
  {
    if ( (a1 & 0x30000) == 0x10000 )
      result |= 0x200u;
  }
  else
  {
    result |= 0x300u;
  }
  if ( a1 & 0x40000 )
    result |= 0x1000u;
  return result;
}

//----- (10095C46) --------------------------------------------------------
int sub_10095C46()
{
  dword_100B2A40 = IsProcessorFeaturePresent(0xAu);
  return 0;
}
// 100B2A40: using guessed type int dword_100B2A40;

//----- (10095C90) --------------------------------------------------------
void __usercall sub_10095C90(double a1@<st0>)
{
  double v1; // [esp+0h] [ebp-8h]

  v1 = a1;
  sub_10095CAE((__m128d)_mm_loadl_epi64((const __m128i *)&v1), a1);
}

//----- (10095CAE) --------------------------------------------------------
double __usercall sub_10095CAE@<st0>(__m128d a1@<xmm0>, double a2)
{
  signed int i; // edx
  __m128i v3; // xmm5
  __m128i v4; // xmm2
  __m128d v5; // xmm0
  int v6; // eax
  __m128d v7; // xmm4
  __m128d v8; // xmm6
  __m128d v9; // xmm0
  __m128d v10; // xmm6
  __m128d v11; // xmm7
  __m128d v12; // xmm4
  unsigned int v13; // ecx
  int v14; // ecx
  __m128d v15; // xmm6
  signed int v16; // edx
  __m128d v17; // xmm3
  __m128d v18; // xmm7
  __m128d v19; // xmm1
  __m128d v21; // xmm0
  __m128d v22; // xmm1
  __m128i v23; // xmm1
  signed int v24; // edx
  double v25; // [esp+10h] [ebp-Ch]

  for ( i = 0; ; i = -52 )
  {
    v3 = (__m128i)a1;
    v4.m128i_i64[1] = *((_QWORD *)&xmmword_100ABDF0 + 1);
    v5 = _mm_or_pd(_mm_and_pd(_mm_unpckl_pd(a1, a1), (__m128d)xmmword_100ABDE0), (__m128d)xmmword_100ABE50);
    v6 = _mm_extract_epi16((__m128i)_mm_add_pd((__m128d)xmmword_100ABE00, v5), 0) & 0x7F0;
    v7 = *(__m128d *)((char *)&xmmword_100AC620 + v6);
    v11 = *(__m128d *)((char *)&xmmword_100AC140 + v6);
    v8 = _mm_and_pd((__m128d)xmmword_100ABE10, v5);
    v9 = _mm_sub_pd(v5, v8);
    v10 = _mm_sub_pd(_mm_mul_pd(v8, v7), (__m128d)xmmword_100ABDF0);
    v11.m128d_f64[0] = v11.m128d_f64[0] + v10.m128d_f64[0];
    v12 = _mm_mul_pd(v9, v7);
    a1 = _mm_add_pd(v12, v10);
    v13 = (_mm_extract_epi16(_mm_srli_epi64(v3, 0x34u), 0) & 0xFFF) - 1;
    if ( v13 <= 0x7FD )
      break;
    v21.m128d_f64[0] = a2;
    *(_QWORD *)&v22.m128d_f64[0] = xmmword_100ABE60;
    v23 = (__m128i)_mm_cmpeq_sd(v22, v21);
    if ( _mm_extract_epi16(v23, 0) )
    {
      *(double *)v23.m128i_i64 = -1.797693134862316e308/*-Inf*/;
      v24 = 8;
LABEL_16:
      v25 = *(double *)v23.m128i_i64;
      sub_10034EA0(&a2, &a2, &v25, v24);
      return v25;
    }
    if ( v13 != -1 )
    {
      if ( v13 > 0x7FE )
      {
        if ( (((_WORD)v13 + 1) & 0x7FFu) >= 0x7FF
          && (*(double *)v4.m128i_i64 = a2,
              _mm_cvtsi128_si32(_mm_srli_epi64(v4, 0x20u)) & 0xFFFFF | _mm_cvtsi128_si32(v4)) )
        {
          v24 = 1001;
        }
        else
        {
          *(double *)v23.m128i_i64 = 0.0 / 0.0;
          v24 = 9;
        }
      }
      else
      {
        a1.m128d_f64[0] = a2;
        v23.m128i_i64[0] = xmmword_100ABDE0;
        if ( _mm_extract_epi16(
               (__m128i)_mm_cmpeq_sd(
                          (__m128d)xmmword_100ABE50,
                          _mm_or_pd(_mm_and_pd(a1, (__m128d)xmmword_100ABDE0), (__m128d)xmmword_100ABE50)),
               0) )
        {
          return 1.797693134862316e308/*+Inf*/;
        }
        v24 = 1001;
      }
      goto LABEL_16;
    }
    a1.m128d_f64[0] = a2 * 4.503599627370496e15;
  }
  v14 = i + v13 - 1022;
  v10.m128d_f64[0] = (double)v14;
  v15 = _mm_unpckl_pd(v10, v10);
  v16 = 0;
  if ( !((v14 << 10) + v6) )
    v16 = 1;
  v17 = _mm_mul_pd(a1, a1);
  v18 = _mm_add_pd(
          _mm_add_pd(v11, _mm_mul_pd(v15, (__m128d)xmmword_100ABE20)),
          _mm_and_pd(v12, (__m128d)xmmword_100ABE30[v16]));
  v17.m128d_f64[0] = v17.m128d_f64[0] * v17.m128d_f64[0] * a1.m128d_f64[0];
  v19 = _mm_mul_pd(
          _mm_add_pd(
            _mm_mul_pd(_mm_add_pd(_mm_mul_pd((__m128d)xmmword_100ABEA0, a1), (__m128d)xmmword_100ABEB0), a1),
            (__m128d)xmmword_100ABEC0),
          v17);
  return COERCE_DOUBLE(_mm_unpckh_pd(v19, v19))
       + v19.m128d_f64[0]
       + *(double *)&xmmword_100ABED0 * a1.m128d_f64[0]
       + COERCE_DOUBLE(_mm_unpckh_pd(v18, v18))
       + v18.m128d_f64[0];
}
// 10034EA0: using guessed type _DWORD __cdecl sub_10034EA0(_DWORD, _DWORD, _DWORD, _DWORD);
// 100ABDE0: using guessed type __int128 xmmword_100ABDE0;
// 100ABDF0: using guessed type __int128 xmmword_100ABDF0;
// 100ABE00: using guessed type __int128 xmmword_100ABE00;
// 100ABE10: using guessed type __int128 xmmword_100ABE10;
// 100ABE20: using guessed type __int128 xmmword_100ABE20;
// 100ABE30: using guessed type __int128 xmmword_100ABE30[];
// 100ABE50: using guessed type __int128 xmmword_100ABE50;
// 100ABE60: using guessed type __int128 xmmword_100ABE60;
// 100ABEA0: using guessed type __int128 xmmword_100ABEA0;
// 100ABEB0: using guessed type __int128 xmmword_100ABEB0;
// 100ABEC0: using guessed type __int128 xmmword_100ABEC0;
// 100ABED0: using guessed type __int128 xmmword_100ABED0;
// 100AC140: using guessed type __int128 xmmword_100AC140;
// 100AC620: using guessed type __int128 xmmword_100AC620;

//----- (10095FF0) --------------------------------------------------------
double __usercall sub_10095FF0@<st0>(int a1@<ebp>)
{
  char v1; // ch
  double v2; // st6

  *(_BYTE *)(a1 - 144) = -2;
  sub_1009612D();
  v2 = 1.442695040888963387 + 1.0;
  if ( *(_BYTE *)(a1 - 159) & 1 )
    v2 = 1.0 / v2;
  if ( v1 )
    v2 = -v2;
  return v2;
}
// 1009612D: using guessed type int sub_1009612D(void);

//----- (10096120) --------------------------------------------------------
double __fastcall sub_10096120(char a1)
{
  double result; // st7

  if ( a1 )
    result = 0.0;
  else
    result = 1.1897314953572317651e4932/*+Inf*/;
  return result;
}

//----- (1009612D) --------------------------------------------------------
#error "100960E0: positive sp value has been found (funcsize=59)"

//----- (10096170) --------------------------------------------------------
double __usercall sub_10096170@<st0>(double result@<st0>)
{
  _ST6 = result;
  __asm { frndint }
  if ( _ST6 == result )
  {
    _ST5 = result * 0.5;
    __asm { frndint }
  }
  return result;
}

//----- (100963B0) --------------------------------------------------------
double sub_100963B0()
{
  return 1.0;
}

//----- (100963C0) --------------------------------------------------------
double __usercall sub_100963C0@<st0>(int a1@<ebp>, double a2@<st0>)
{
  double result; // st7

  *(double *)(a1 - 158) = a2;
  result = *(double *)(a1 - 158);
  if ( *(_BYTE *)(a1 - 151) & 0x40 )
  {
    *(_BYTE *)(a1 - 144) = 0;
  }
  else
  {
    *(_BYTE *)(a1 - 144) = 0;
    result = result + 1.0;
  }
  return result;
}

//----- (10096483) --------------------------------------------------------
void __usercall sub_10096483(int a1@<ebp>)
{
  *(_BYTE *)(a1 - 144) = 1;
}

//----- (1009659C) --------------------------------------------------------
double __usercall sub_1009659C@<st0>(int a1@<eax>, double result@<st0>)
{
  if ( !(a1 & 0x80000) )
    result = result + 1.0;
  return result;
}
