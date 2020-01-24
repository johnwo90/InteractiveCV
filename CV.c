// Bruk specialChars = 1 om du kjoerer dette i en moderne kommandolinje. (For ae, oe, aa...)
const int specialChars = 0;





                                %:define           a(b,c,d) d##b##c
                                %:define           b(a,c,d) a##d##c
                                %:define         con(c,o,n) n##o##c
                                %:define db(i,j) j##i
                                %:define      _ a(o,n,c)(ef,ped,ty)
                                %:define       p b(c,n,o)(rn,tu,re)
                                %:define             __ db(eof,siz)
                                %:define        R db(n,co)(ak,re,b)
                                %:define dc db(loc,cal)(l+1,__(C));
                                %:define         I b(c,n,o)(e,s,ca)
                                %:define           tsnoc db(st,con)
                                %:define           uwc specialChars
                                %:define               l a(A8,4,0x)
                                %:include                 <stdio.h>
                                %:include                <stdlib.h>
                                %:include                <string.h>
 _ a(   o,n,c)(t,n,i)q;_ b(c,n,o)(r,a,ch)C;_ a(o,id,v)V;con(c,no,ts)C a(T,X,S)='\002',a(T,X,E)=
 '\003';C _13(C c) <%if(c>='A'&&c<='Z')<%if(c+13<='Z')p 13;p -13;%>else{if(c+13<='z')p 13;p -13
 ;%>%>C*__13(con(c,no,ts) C*s){q w=db(len,str)(s);C*r=db(loc,cal)(w+1,__(C));q i=r-r;for(;i<w;i
 ++)*(r++)=i[s]+_13(s[i]);p(C*)(r-i);}q X(con(c,no,ts)V *a,con(c,no,ts)V *b)<%C*aa=*(C**)a;C*bb
 =*(C**)b;p db(cmp,str)(aa,bb);}C*x(con(c,no,ts)C*r)<%C*res=db(loc,cal)(l+3,__(C));C*strt=res;C
 lc=' ';b(c,n,o)(le,hi,w)(*r!=0)<%C c=*r;db(f,i)(c>='0'&&c<='9')<%q i=(*r)-'0';r++;con(r,o,f)(q
 j=0;j<i-1;j++)<%*res=lc;res++;%>%>db(se,el)<%*(res++)=*(r++);%>lc=c; %> *res=0; p strt;%>V z (
 con(c,no,ts)C*r,C s[])<%q i,j,w=db(len,str)(r);C**t=db(loc,mal)(w*__(con(c,no,ts)C*));for(i=0;
 i<w;++i)i[t]=db(loc,cal)(w+1,__(C));for(i=0;i<w;++i)<%for(j=0;j<w;++j)<%a(mmo,ve,me)(j[t:>+1,j
 [t:>,w);t[j:><:0]=j[r];%>db(ort,qs)(t,w,__(con(c,no,ts)C*),X);%>for(i=0;i<w;++i)<%db(f,i)(t<:i
 :> <:w-1:>==a(T,X,E))<%con(y,ncp,str)(s,i<:t:>+1,w-2);R;%> %>for (i=0;i<w;++i)db(ee,fr)(i[t]);
 db(ee,fr)(t);%>q                                                       a(o,n,c)(n,ai,m)()<%C*r=
"\003!2ne!.).g.2!.NsP):nC:.#tL+:t2.,g:)n!.!.!3.2!:.2!.:.!,Sr;p,4g,2wQn!mC!9!8&8!&!&5!&!5&9&9&3!"\
"&Z!8&!3&!&Z!&2!9!3_5.srk>+C&2hr2kr2urLP2UkP2nv)Ertleda)Htr2erdsrervl&9&8lCn4getav.mht=r2.decm."\
"lcsf_etvaqclem2Vjkg.lged.n.t2drP_2Q_2&3!_4PT_2FU&TN_3!R_!r&2(_SP_2&2_2&4_(_QM_G_&_2\002._P_2&!"\
"HTDTCO_4PC&_2oS_(_&AS_2/EA&(_&_RTFH_&!_2P_P&C-_2FnsS_f5mjhjm_4.&-kw<k2-nCal,-3Segs+,-,-3_:,-d:"\
"-h2e-_g-.-,-,-m-sr,e2-r3+_&:4_e.gtkvgtirigrtzeitetrg2trzgn2,rnearanrnrt2rmtr2gt;er2itidrgn2tzm"\
"kdtgtdn,te2i,3e2ge,nepg3re2ren2egelgz2gkregnzg2ngzgtrnptrb,ser2grgt2rgrore,zr3arartranmrtitrtl"\
"n2enze_zmgzgenl,mngmgezm2gn2tr2,gt,2zr2eg2sgemreme,3re,rte,rztezm,eretzSU,t,ltrle,lot.tretzntn"\
"t2kte2vmg2ndngr_nrnteszg2.dgntrgetere4.urtrmge2,te2tgztetcestetetrgrernaz2gete_leglr2lzr5erdgl"\
"drd2vln2rv2lmri2k_r4Rkmk2mkmbt_2i2gmv_gki_v5h2v2lHh5t_3Blf5rvcgrlm_4lslh2_2JgN_2b_o4_3r4b3_im2"\
"_2re2y_e_n_2t3e-leu.sniae2n2aoe2_&_2o3z_n_2i2_2n_u_2v_9irna_inern3ri4oXoi2_Xrtr2jnrdrng3rtktdl"\
"s2dktrsnrdkr2oknjlrlr2tsntkr2ytdrorotstktdgklolnrty2wp2tm3bmj5Jj5Jmj6mJj2m2j4lb6_lgpgdWdr5ns2j"\
"Ls2ldn_m3d_m3_3dgn3rvr_t2_2dmrTmsrv-hg2r2v2gklvds_tmvl_2k_k_s_br_r_stpm_l_mk2Kvdmtmadnm2dt2_s_"\
"3d_mptv_hk2agtrdl2_r2m3nNknkdgkDdtbd3t2_bdtsd_3sgd2_l5mrn2lu4_r5_4n2_5r2_6t2_t_n_2n3ineo2ue5oe"\
"9oeoe5nie2o2eonione4oeo2ep_2npgz2gn7adyey_g_4n@_2o4e_icv_t2_9_eo3t_6s2_&2gdcsr2tsestwbete2W2dl"\
"tl3sf2l_3&_s2l3vmatvt3Ttbv2p2tmvr_2aglr5nr2_8r2lvdrlsl2rs2l3nlZdr(g2lk_9_9_4s_&_3s2g2.v/lrz2kc"\
"kok2_6k2sksk2nsni2k5si9i5_rinrX2_o_3eienus_2e2ali2e2i2aiXi3b2_k2p2_ebl2bl&fegl2_2e5Trn_2b4kb_3"\
"i_2fioeiauioaIilFO2iklsle2_2k_o.2_2m_oOo7Oo4g_5E2_8r_2&_&le_3m5_3m_2a3u2a2eoY_seo2e2o2h2v_e2ne"\
"5ie2aeaEa2e2ne2ae3ne2a2k2iauaeUeAia2en3vnon4o_n_2i9iea2i3auatse2iuae2ieiu2i2Aaue_2&_2ea2ea2eya"\
"3va2i3nh_2wf2j4GNkig2n4_9_3r4J2jntfkcs8_Ss_khj_2jp_6fsfFf4v3f4Ff4vf2jkjpkHhspBspr_5lp3s2mz_2pS"\
"2_bmpE_o4uo2_4Ssp2ies_4oe5Xe2XeXe2Xeo5e2zaeoazae5a4e3oae4Xo2e2aeieoe2ae8Xe3ao4eo2dftBg4eta4eo3"\
"edxeXdaXax2d2Xed2e_4uezgte7xe5oeT2e2a4daeceKteoexopPp3e2oexeo2xoeobgebp2jaek_o2seit_am_sea_2l2"\
"_eskdn_3ok_u_3-2a2inirn_v_v_9n_e_3dae2oe3ylei2oi3uad2p2n_n_&_&_&_2epQndnkpsdrete3ratae3nre2n2e"\
"2aerserkrersedntete2sneaestresre3ntiXrts2its2_2tsrn2onoistu2ad2ys_2t_5neous2_ea3i2e2uei2u_jdfl"\
"_s2_arks3fpk2rs_Ml_3l3ilia2hz_2e5_saido2ao3eMt_e_2grae2h4a2_4o_2nlv2l_vlXmX2brtlP_2s_3sps_s_2s"\
"_pm_s3pb-2r2Hfn_n";C*Y<::>={"Xwbrere","Ehaavat","yratgu","qrxbqvat","Sreqvt","Oheebjf","Jurryre"
,"genafsbez",     "pyf",         "pyrne",     "Gelxx",     "RAGRE",      "sbe",     "sbegfrggr"};
C*s=dc;C*c=dc;C*(*re)(con(c,no,ts)C*)=&x;a(in,tf,pr)("%s %c%s-%s%c %s... ",__13(Y[0]),'"',__13(Y[
1]),__13(Y[2]),'"',__13(Y[3]));fflush(stdout);c=(*re)(r);a(in,tf,pr)("%s!\n",__13(Y[4:>));V(*ib)(
con(c,no,ts)C*,C s<::>)=&z;a(in,tf,pr)("%s %s-%s %s... ",__13(Y[0]),__13(Y[5]),__13(Y[6]),__13(Y[
7]));fflush(stdout);(*ib)(c,s);a(in,tf,pr)("%s!\n",__13(Y[4]));C*S=calloc(12,sizeof(char));db(ntf
,spri)(S,"@%s||%s",__13(Y[8]),__13(Y[9]));q _0=db(tem,sys)(S);for(;*s;++s)<%q Q=0;db(tch,swi)(*s)
<%I'z':db(f,i)(!uwc)a(in,tf,pr)("aa");db(se,el)Q='\x86';R;I'X':db(f,i)(!uwc)a(in,tf,pr)("oe");db(
se,el)Q='\x9B';R;I'x':db(f,i)(!uwc)a(in,tf,pr)("ae");db(se,el)Q='\x91';R;I'Z':if(*(s+1)!='i')<%a(
in,tf,pr)("\n\n%s %s %s %s %s...",__13(Y[10]),__13(Y<:11]),__13(Y[12]),(uwc)?"\x86":"aa",__13(Y<:
13]));   getchar();q _1=db(tem,sys)(S);%>db(se,el)<%Q='Z';%>R;I'!':Q=(*(s+1)=='!'&&*(s+2)=='!'&&*
(s+3)=='!'&&*(s+4)=='&'&&*(s+5)=='M')?'!':'\n';R;I'&':Q='\t';R;I'_':Q=' ';R;I'q':a(in,tf,pr)("%d"
,0x14);R;I'Q':db(f,i)(*(s+1)!='L' && *(s+1)!='t')a(in,tf,pr)("%d",0x7C6);db(se,el)Q='Q';R;I'=':a(
in,tf,pr)("%d",0x7DF);R;I'<':a(in,tf,pr)("%d",7%4);R;I'>':a(in,tf,pr)("%d",0x793);R;I'w':db(f,i)(
*(s+1)=='!')a(in,tf,pr)("%d %d %d",0x1A0,0x21,0x227);db(se,el)Q='w';R;con(ult,fa,de):Q=*s;R;}if(!
Q)con(ue,in,cont);a(                                                    in,tf,pr)("%c",Q);}p 0;%>
