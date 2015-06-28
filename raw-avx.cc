#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <sys/time.h>
#include <emmintrin.h>
#include <immintrin.h>

void randomize_region(void * pr, size_t size){
    size_t i;
    unsigned char *ppt = (unsigned char *)pr;

    for(i = 0; i < size; ++i){
        *(ppt+i) = rand()%256;
    }   
}

int region_xor_raw_4kb(unsigned char *pt1, unsigned char *pt2, size_t size){
    size_t i;

    for(i = 0; i<(size/512); i=i+512){
		*(pt1+i+0) = (*(pt1+i+0))^(*(pt2+i+0));
		*(pt1+i+1) = (*(pt1+i+1))^(*(pt2+i+1));
		*(pt1+i+2) = (*(pt1+i+2))^(*(pt2+i+2));
		*(pt1+i+3) = (*(pt1+i+3))^(*(pt2+i+3));
		*(pt1+i+4) = (*(pt1+i+4))^(*(pt2+i+4));
		*(pt1+i+5) = (*(pt1+i+5))^(*(pt2+i+5));
		*(pt1+i+6) = (*(pt1+i+6))^(*(pt2+i+6));
		*(pt1+i+7) = (*(pt1+i+7))^(*(pt2+i+7));
		*(pt1+i+8) = (*(pt1+i+8))^(*(pt2+i+8));
		*(pt1+i+9) = (*(pt1+i+9))^(*(pt2+i+9));
		*(pt1+i+10) = (*(pt1+i+10))^(*(pt2+i+10));
		*(pt1+i+11) = (*(pt1+i+11))^(*(pt2+i+11));
		*(pt1+i+12) = (*(pt1+i+12))^(*(pt2+i+12));
		*(pt1+i+13) = (*(pt1+i+13))^(*(pt2+i+13));
		*(pt1+i+14) = (*(pt1+i+14))^(*(pt2+i+14));
		*(pt1+i+15) = (*(pt1+i+15))^(*(pt2+i+15));
		*(pt1+i+16) = (*(pt1+i+16))^(*(pt2+i+16));
		*(pt1+i+17) = (*(pt1+i+17))^(*(pt2+i+17));
		*(pt1+i+18) = (*(pt1+i+18))^(*(pt2+i+18));
		*(pt1+i+19) = (*(pt1+i+19))^(*(pt2+i+19));
		*(pt1+i+20) = (*(pt1+i+20))^(*(pt2+i+20));
		*(pt1+i+21) = (*(pt1+i+21))^(*(pt2+i+21));
		*(pt1+i+22) = (*(pt1+i+22))^(*(pt2+i+22));
		*(pt1+i+23) = (*(pt1+i+23))^(*(pt2+i+23));
		*(pt1+i+24) = (*(pt1+i+24))^(*(pt2+i+24));
		*(pt1+i+25) = (*(pt1+i+25))^(*(pt2+i+25));
		*(pt1+i+26) = (*(pt1+i+26))^(*(pt2+i+26));
		*(pt1+i+27) = (*(pt1+i+27))^(*(pt2+i+27));
		*(pt1+i+28) = (*(pt1+i+28))^(*(pt2+i+28));
		*(pt1+i+29) = (*(pt1+i+29))^(*(pt2+i+29));
		*(pt1+i+30) = (*(pt1+i+30))^(*(pt2+i+30));
		*(pt1+i+31) = (*(pt1+i+31))^(*(pt2+i+31));
		*(pt1+i+32) = (*(pt1+i+32))^(*(pt2+i+32));
		*(pt1+i+33) = (*(pt1+i+33))^(*(pt2+i+33));
		*(pt1+i+34) = (*(pt1+i+34))^(*(pt2+i+34));
		*(pt1+i+35) = (*(pt1+i+35))^(*(pt2+i+35));
		*(pt1+i+36) = (*(pt1+i+36))^(*(pt2+i+36));
		*(pt1+i+37) = (*(pt1+i+37))^(*(pt2+i+37));
		*(pt1+i+38) = (*(pt1+i+38))^(*(pt2+i+38));
		*(pt1+i+39) = (*(pt1+i+39))^(*(pt2+i+39));
		*(pt1+i+40) = (*(pt1+i+40))^(*(pt2+i+40));
		*(pt1+i+41) = (*(pt1+i+41))^(*(pt2+i+41));
		*(pt1+i+42) = (*(pt1+i+42))^(*(pt2+i+42));
		*(pt1+i+43) = (*(pt1+i+43))^(*(pt2+i+43));
		*(pt1+i+44) = (*(pt1+i+44))^(*(pt2+i+44));
		*(pt1+i+45) = (*(pt1+i+45))^(*(pt2+i+45));
		*(pt1+i+46) = (*(pt1+i+46))^(*(pt2+i+46));
		*(pt1+i+47) = (*(pt1+i+47))^(*(pt2+i+47));
		*(pt1+i+48) = (*(pt1+i+48))^(*(pt2+i+48));
		*(pt1+i+49) = (*(pt1+i+49))^(*(pt2+i+49));
		*(pt1+i+50) = (*(pt1+i+50))^(*(pt2+i+50));
		*(pt1+i+51) = (*(pt1+i+51))^(*(pt2+i+51));
		*(pt1+i+52) = (*(pt1+i+52))^(*(pt2+i+52));
		*(pt1+i+53) = (*(pt1+i+53))^(*(pt2+i+53));
		*(pt1+i+54) = (*(pt1+i+54))^(*(pt2+i+54));
		*(pt1+i+55) = (*(pt1+i+55))^(*(pt2+i+55));
		*(pt1+i+56) = (*(pt1+i+56))^(*(pt2+i+56));
		*(pt1+i+57) = (*(pt1+i+57))^(*(pt2+i+57));
		*(pt1+i+58) = (*(pt1+i+58))^(*(pt2+i+58));
		*(pt1+i+59) = (*(pt1+i+59))^(*(pt2+i+59));
		*(pt1+i+60) = (*(pt1+i+60))^(*(pt2+i+60));
		*(pt1+i+61) = (*(pt1+i+61))^(*(pt2+i+61));
		*(pt1+i+62) = (*(pt1+i+62))^(*(pt2+i+62));
		*(pt1+i+63) = (*(pt1+i+63))^(*(pt2+i+63));
		*(pt1+i+64) = (*(pt1+i+64))^(*(pt2+i+64));
		*(pt1+i+65) = (*(pt1+i+65))^(*(pt2+i+65));
		*(pt1+i+66) = (*(pt1+i+66))^(*(pt2+i+66));
		*(pt1+i+67) = (*(pt1+i+67))^(*(pt2+i+67));
		*(pt1+i+68) = (*(pt1+i+68))^(*(pt2+i+68));
		*(pt1+i+69) = (*(pt1+i+69))^(*(pt2+i+69));
		*(pt1+i+70) = (*(pt1+i+70))^(*(pt2+i+70));
		*(pt1+i+71) = (*(pt1+i+71))^(*(pt2+i+71));
		*(pt1+i+72) = (*(pt1+i+72))^(*(pt2+i+72));
		*(pt1+i+73) = (*(pt1+i+73))^(*(pt2+i+73));
		*(pt1+i+74) = (*(pt1+i+74))^(*(pt2+i+74));
		*(pt1+i+75) = (*(pt1+i+75))^(*(pt2+i+75));
		*(pt1+i+76) = (*(pt1+i+76))^(*(pt2+i+76));
		*(pt1+i+77) = (*(pt1+i+77))^(*(pt2+i+77));
		*(pt1+i+78) = (*(pt1+i+78))^(*(pt2+i+78));
		*(pt1+i+79) = (*(pt1+i+79))^(*(pt2+i+79));
		*(pt1+i+80) = (*(pt1+i+80))^(*(pt2+i+80));
		*(pt1+i+81) = (*(pt1+i+81))^(*(pt2+i+81));
		*(pt1+i+82) = (*(pt1+i+82))^(*(pt2+i+82));
		*(pt1+i+83) = (*(pt1+i+83))^(*(pt2+i+83));
		*(pt1+i+84) = (*(pt1+i+84))^(*(pt2+i+84));
		*(pt1+i+85) = (*(pt1+i+85))^(*(pt2+i+85));
		*(pt1+i+86) = (*(pt1+i+86))^(*(pt2+i+86));
		*(pt1+i+87) = (*(pt1+i+87))^(*(pt2+i+87));
		*(pt1+i+88) = (*(pt1+i+88))^(*(pt2+i+88));
		*(pt1+i+89) = (*(pt1+i+89))^(*(pt2+i+89));
		*(pt1+i+90) = (*(pt1+i+90))^(*(pt2+i+90));
		*(pt1+i+91) = (*(pt1+i+91))^(*(pt2+i+91));
		*(pt1+i+92) = (*(pt1+i+92))^(*(pt2+i+92));
		*(pt1+i+93) = (*(pt1+i+93))^(*(pt2+i+93));
		*(pt1+i+94) = (*(pt1+i+94))^(*(pt2+i+94));
		*(pt1+i+95) = (*(pt1+i+95))^(*(pt2+i+95));
		*(pt1+i+96) = (*(pt1+i+96))^(*(pt2+i+96));
		*(pt1+i+97) = (*(pt1+i+97))^(*(pt2+i+97));
		*(pt1+i+98) = (*(pt1+i+98))^(*(pt2+i+98));
		*(pt1+i+99) = (*(pt1+i+99))^(*(pt2+i+99));
		*(pt1+i+100) = (*(pt1+i+100))^(*(pt2+i+100));
		*(pt1+i+101) = (*(pt1+i+101))^(*(pt2+i+101));
		*(pt1+i+102) = (*(pt1+i+102))^(*(pt2+i+102));
		*(pt1+i+103) = (*(pt1+i+103))^(*(pt2+i+103));
		*(pt1+i+104) = (*(pt1+i+104))^(*(pt2+i+104));
		*(pt1+i+105) = (*(pt1+i+105))^(*(pt2+i+105));
		*(pt1+i+106) = (*(pt1+i+106))^(*(pt2+i+106));
		*(pt1+i+107) = (*(pt1+i+107))^(*(pt2+i+107));
		*(pt1+i+108) = (*(pt1+i+108))^(*(pt2+i+108));
		*(pt1+i+109) = (*(pt1+i+109))^(*(pt2+i+109));
		*(pt1+i+110) = (*(pt1+i+110))^(*(pt2+i+110));
		*(pt1+i+111) = (*(pt1+i+111))^(*(pt2+i+111));
		*(pt1+i+112) = (*(pt1+i+112))^(*(pt2+i+112));
		*(pt1+i+113) = (*(pt1+i+113))^(*(pt2+i+113));
		*(pt1+i+114) = (*(pt1+i+114))^(*(pt2+i+114));
		*(pt1+i+115) = (*(pt1+i+115))^(*(pt2+i+115));
		*(pt1+i+116) = (*(pt1+i+116))^(*(pt2+i+116));
		*(pt1+i+117) = (*(pt1+i+117))^(*(pt2+i+117));
		*(pt1+i+118) = (*(pt1+i+118))^(*(pt2+i+118));
		*(pt1+i+119) = (*(pt1+i+119))^(*(pt2+i+119));
		*(pt1+i+120) = (*(pt1+i+120))^(*(pt2+i+120));
		*(pt1+i+121) = (*(pt1+i+121))^(*(pt2+i+121));
		*(pt1+i+122) = (*(pt1+i+122))^(*(pt2+i+122));
		*(pt1+i+123) = (*(pt1+i+123))^(*(pt2+i+123));
		*(pt1+i+124) = (*(pt1+i+124))^(*(pt2+i+124));
		*(pt1+i+125) = (*(pt1+i+125))^(*(pt2+i+125));
		*(pt1+i+126) = (*(pt1+i+126))^(*(pt2+i+126));
		*(pt1+i+127) = (*(pt1+i+127))^(*(pt2+i+127));
		*(pt1+i+128) = (*(pt1+i+128))^(*(pt2+i+128));
		*(pt1+i+129) = (*(pt1+i+129))^(*(pt2+i+129));
		*(pt1+i+130) = (*(pt1+i+130))^(*(pt2+i+130));
		*(pt1+i+131) = (*(pt1+i+131))^(*(pt2+i+131));
		*(pt1+i+132) = (*(pt1+i+132))^(*(pt2+i+132));
		*(pt1+i+133) = (*(pt1+i+133))^(*(pt2+i+133));
		*(pt1+i+134) = (*(pt1+i+134))^(*(pt2+i+134));
		*(pt1+i+135) = (*(pt1+i+135))^(*(pt2+i+135));
		*(pt1+i+136) = (*(pt1+i+136))^(*(pt2+i+136));
		*(pt1+i+137) = (*(pt1+i+137))^(*(pt2+i+137));
		*(pt1+i+138) = (*(pt1+i+138))^(*(pt2+i+138));
		*(pt1+i+139) = (*(pt1+i+139))^(*(pt2+i+139));
		*(pt1+i+140) = (*(pt1+i+140))^(*(pt2+i+140));
		*(pt1+i+141) = (*(pt1+i+141))^(*(pt2+i+141));
		*(pt1+i+142) = (*(pt1+i+142))^(*(pt2+i+142));
		*(pt1+i+143) = (*(pt1+i+143))^(*(pt2+i+143));
		*(pt1+i+144) = (*(pt1+i+144))^(*(pt2+i+144));
		*(pt1+i+145) = (*(pt1+i+145))^(*(pt2+i+145));
		*(pt1+i+146) = (*(pt1+i+146))^(*(pt2+i+146));
		*(pt1+i+147) = (*(pt1+i+147))^(*(pt2+i+147));
		*(pt1+i+148) = (*(pt1+i+148))^(*(pt2+i+148));
		*(pt1+i+149) = (*(pt1+i+149))^(*(pt2+i+149));
		*(pt1+i+150) = (*(pt1+i+150))^(*(pt2+i+150));
		*(pt1+i+151) = (*(pt1+i+151))^(*(pt2+i+151));
		*(pt1+i+152) = (*(pt1+i+152))^(*(pt2+i+152));
		*(pt1+i+153) = (*(pt1+i+153))^(*(pt2+i+153));
		*(pt1+i+154) = (*(pt1+i+154))^(*(pt2+i+154));
		*(pt1+i+155) = (*(pt1+i+155))^(*(pt2+i+155));
		*(pt1+i+156) = (*(pt1+i+156))^(*(pt2+i+156));
		*(pt1+i+157) = (*(pt1+i+157))^(*(pt2+i+157));
		*(pt1+i+158) = (*(pt1+i+158))^(*(pt2+i+158));
		*(pt1+i+159) = (*(pt1+i+159))^(*(pt2+i+159));
		*(pt1+i+160) = (*(pt1+i+160))^(*(pt2+i+160));
		*(pt1+i+161) = (*(pt1+i+161))^(*(pt2+i+161));
		*(pt1+i+162) = (*(pt1+i+162))^(*(pt2+i+162));
		*(pt1+i+163) = (*(pt1+i+163))^(*(pt2+i+163));
		*(pt1+i+164) = (*(pt1+i+164))^(*(pt2+i+164));
		*(pt1+i+165) = (*(pt1+i+165))^(*(pt2+i+165));
		*(pt1+i+166) = (*(pt1+i+166))^(*(pt2+i+166));
		*(pt1+i+167) = (*(pt1+i+167))^(*(pt2+i+167));
		*(pt1+i+168) = (*(pt1+i+168))^(*(pt2+i+168));
		*(pt1+i+169) = (*(pt1+i+169))^(*(pt2+i+169));
		*(pt1+i+170) = (*(pt1+i+170))^(*(pt2+i+170));
		*(pt1+i+171) = (*(pt1+i+171))^(*(pt2+i+171));
		*(pt1+i+172) = (*(pt1+i+172))^(*(pt2+i+172));
		*(pt1+i+173) = (*(pt1+i+173))^(*(pt2+i+173));
		*(pt1+i+174) = (*(pt1+i+174))^(*(pt2+i+174));
		*(pt1+i+175) = (*(pt1+i+175))^(*(pt2+i+175));
		*(pt1+i+176) = (*(pt1+i+176))^(*(pt2+i+176));
		*(pt1+i+177) = (*(pt1+i+177))^(*(pt2+i+177));
		*(pt1+i+178) = (*(pt1+i+178))^(*(pt2+i+178));
		*(pt1+i+179) = (*(pt1+i+179))^(*(pt2+i+179));
		*(pt1+i+180) = (*(pt1+i+180))^(*(pt2+i+180));
		*(pt1+i+181) = (*(pt1+i+181))^(*(pt2+i+181));
		*(pt1+i+182) = (*(pt1+i+182))^(*(pt2+i+182));
		*(pt1+i+183) = (*(pt1+i+183))^(*(pt2+i+183));
		*(pt1+i+184) = (*(pt1+i+184))^(*(pt2+i+184));
		*(pt1+i+185) = (*(pt1+i+185))^(*(pt2+i+185));
		*(pt1+i+186) = (*(pt1+i+186))^(*(pt2+i+186));
		*(pt1+i+187) = (*(pt1+i+187))^(*(pt2+i+187));
		*(pt1+i+188) = (*(pt1+i+188))^(*(pt2+i+188));
		*(pt1+i+189) = (*(pt1+i+189))^(*(pt2+i+189));
		*(pt1+i+190) = (*(pt1+i+190))^(*(pt2+i+190));
		*(pt1+i+191) = (*(pt1+i+191))^(*(pt2+i+191));
		*(pt1+i+192) = (*(pt1+i+192))^(*(pt2+i+192));
		*(pt1+i+193) = (*(pt1+i+193))^(*(pt2+i+193));
		*(pt1+i+194) = (*(pt1+i+194))^(*(pt2+i+194));
		*(pt1+i+195) = (*(pt1+i+195))^(*(pt2+i+195));
		*(pt1+i+196) = (*(pt1+i+196))^(*(pt2+i+196));
		*(pt1+i+197) = (*(pt1+i+197))^(*(pt2+i+197));
		*(pt1+i+198) = (*(pt1+i+198))^(*(pt2+i+198));
		*(pt1+i+199) = (*(pt1+i+199))^(*(pt2+i+199));
		*(pt1+i+200) = (*(pt1+i+200))^(*(pt2+i+200));
		*(pt1+i+201) = (*(pt1+i+201))^(*(pt2+i+201));
		*(pt1+i+202) = (*(pt1+i+202))^(*(pt2+i+202));
		*(pt1+i+203) = (*(pt1+i+203))^(*(pt2+i+203));
		*(pt1+i+204) = (*(pt1+i+204))^(*(pt2+i+204));
		*(pt1+i+205) = (*(pt1+i+205))^(*(pt2+i+205));
		*(pt1+i+206) = (*(pt1+i+206))^(*(pt2+i+206));
		*(pt1+i+207) = (*(pt1+i+207))^(*(pt2+i+207));
		*(pt1+i+208) = (*(pt1+i+208))^(*(pt2+i+208));
		*(pt1+i+209) = (*(pt1+i+209))^(*(pt2+i+209));
		*(pt1+i+210) = (*(pt1+i+210))^(*(pt2+i+210));
		*(pt1+i+211) = (*(pt1+i+211))^(*(pt2+i+211));
		*(pt1+i+212) = (*(pt1+i+212))^(*(pt2+i+212));
		*(pt1+i+213) = (*(pt1+i+213))^(*(pt2+i+213));
		*(pt1+i+214) = (*(pt1+i+214))^(*(pt2+i+214));
		*(pt1+i+215) = (*(pt1+i+215))^(*(pt2+i+215));
		*(pt1+i+216) = (*(pt1+i+216))^(*(pt2+i+216));
		*(pt1+i+217) = (*(pt1+i+217))^(*(pt2+i+217));
		*(pt1+i+218) = (*(pt1+i+218))^(*(pt2+i+218));
		*(pt1+i+219) = (*(pt1+i+219))^(*(pt2+i+219));
		*(pt1+i+220) = (*(pt1+i+220))^(*(pt2+i+220));
		*(pt1+i+221) = (*(pt1+i+221))^(*(pt2+i+221));
		*(pt1+i+222) = (*(pt1+i+222))^(*(pt2+i+222));
		*(pt1+i+223) = (*(pt1+i+223))^(*(pt2+i+223));
		*(pt1+i+224) = (*(pt1+i+224))^(*(pt2+i+224));
		*(pt1+i+225) = (*(pt1+i+225))^(*(pt2+i+225));
		*(pt1+i+226) = (*(pt1+i+226))^(*(pt2+i+226));
		*(pt1+i+227) = (*(pt1+i+227))^(*(pt2+i+227));
		*(pt1+i+228) = (*(pt1+i+228))^(*(pt2+i+228));
		*(pt1+i+229) = (*(pt1+i+229))^(*(pt2+i+229));
		*(pt1+i+230) = (*(pt1+i+230))^(*(pt2+i+230));
		*(pt1+i+231) = (*(pt1+i+231))^(*(pt2+i+231));
		*(pt1+i+232) = (*(pt1+i+232))^(*(pt2+i+232));
		*(pt1+i+233) = (*(pt1+i+233))^(*(pt2+i+233));
		*(pt1+i+234) = (*(pt1+i+234))^(*(pt2+i+234));
		*(pt1+i+235) = (*(pt1+i+235))^(*(pt2+i+235));
		*(pt1+i+236) = (*(pt1+i+236))^(*(pt2+i+236));
		*(pt1+i+237) = (*(pt1+i+237))^(*(pt2+i+237));
		*(pt1+i+238) = (*(pt1+i+238))^(*(pt2+i+238));
		*(pt1+i+239) = (*(pt1+i+239))^(*(pt2+i+239));
		*(pt1+i+240) = (*(pt1+i+240))^(*(pt2+i+240));
		*(pt1+i+241) = (*(pt1+i+241))^(*(pt2+i+241));
		*(pt1+i+242) = (*(pt1+i+242))^(*(pt2+i+242));
		*(pt1+i+243) = (*(pt1+i+243))^(*(pt2+i+243));
		*(pt1+i+244) = (*(pt1+i+244))^(*(pt2+i+244));
		*(pt1+i+245) = (*(pt1+i+245))^(*(pt2+i+245));
		*(pt1+i+246) = (*(pt1+i+246))^(*(pt2+i+246));
		*(pt1+i+247) = (*(pt1+i+247))^(*(pt2+i+247));
		*(pt1+i+248) = (*(pt1+i+248))^(*(pt2+i+248));
		*(pt1+i+249) = (*(pt1+i+249))^(*(pt2+i+249));
		*(pt1+i+250) = (*(pt1+i+250))^(*(pt2+i+250));
		*(pt1+i+251) = (*(pt1+i+251))^(*(pt2+i+251));
		*(pt1+i+252) = (*(pt1+i+252))^(*(pt2+i+252));
		*(pt1+i+253) = (*(pt1+i+253))^(*(pt2+i+253));
		*(pt1+i+254) = (*(pt1+i+254))^(*(pt2+i+254));
		*(pt1+i+255) = (*(pt1+i+255))^(*(pt2+i+255));
		*(pt1+i+256) = (*(pt1+i+256))^(*(pt2+i+256));
		*(pt1+i+257) = (*(pt1+i+257))^(*(pt2+i+257));
		*(pt1+i+258) = (*(pt1+i+258))^(*(pt2+i+258));
		*(pt1+i+259) = (*(pt1+i+259))^(*(pt2+i+259));
		*(pt1+i+260) = (*(pt1+i+260))^(*(pt2+i+260));
		*(pt1+i+261) = (*(pt1+i+261))^(*(pt2+i+261));
		*(pt1+i+262) = (*(pt1+i+262))^(*(pt2+i+262));
		*(pt1+i+263) = (*(pt1+i+263))^(*(pt2+i+263));
		*(pt1+i+264) = (*(pt1+i+264))^(*(pt2+i+264));
		*(pt1+i+265) = (*(pt1+i+265))^(*(pt2+i+265));
		*(pt1+i+266) = (*(pt1+i+266))^(*(pt2+i+266));
		*(pt1+i+267) = (*(pt1+i+267))^(*(pt2+i+267));
		*(pt1+i+268) = (*(pt1+i+268))^(*(pt2+i+268));
		*(pt1+i+269) = (*(pt1+i+269))^(*(pt2+i+269));
		*(pt1+i+270) = (*(pt1+i+270))^(*(pt2+i+270));
		*(pt1+i+271) = (*(pt1+i+271))^(*(pt2+i+271));
		*(pt1+i+272) = (*(pt1+i+272))^(*(pt2+i+272));
		*(pt1+i+273) = (*(pt1+i+273))^(*(pt2+i+273));
		*(pt1+i+274) = (*(pt1+i+274))^(*(pt2+i+274));
		*(pt1+i+275) = (*(pt1+i+275))^(*(pt2+i+275));
		*(pt1+i+276) = (*(pt1+i+276))^(*(pt2+i+276));
		*(pt1+i+277) = (*(pt1+i+277))^(*(pt2+i+277));
		*(pt1+i+278) = (*(pt1+i+278))^(*(pt2+i+278));
		*(pt1+i+279) = (*(pt1+i+279))^(*(pt2+i+279));
		*(pt1+i+280) = (*(pt1+i+280))^(*(pt2+i+280));
		*(pt1+i+281) = (*(pt1+i+281))^(*(pt2+i+281));
		*(pt1+i+282) = (*(pt1+i+282))^(*(pt2+i+282));
		*(pt1+i+283) = (*(pt1+i+283))^(*(pt2+i+283));
		*(pt1+i+284) = (*(pt1+i+284))^(*(pt2+i+284));
		*(pt1+i+285) = (*(pt1+i+285))^(*(pt2+i+285));
		*(pt1+i+286) = (*(pt1+i+286))^(*(pt2+i+286));
		*(pt1+i+287) = (*(pt1+i+287))^(*(pt2+i+287));
		*(pt1+i+288) = (*(pt1+i+288))^(*(pt2+i+288));
		*(pt1+i+289) = (*(pt1+i+289))^(*(pt2+i+289));
		*(pt1+i+290) = (*(pt1+i+290))^(*(pt2+i+290));
		*(pt1+i+291) = (*(pt1+i+291))^(*(pt2+i+291));
		*(pt1+i+292) = (*(pt1+i+292))^(*(pt2+i+292));
		*(pt1+i+293) = (*(pt1+i+293))^(*(pt2+i+293));
		*(pt1+i+294) = (*(pt1+i+294))^(*(pt2+i+294));
		*(pt1+i+295) = (*(pt1+i+295))^(*(pt2+i+295));
		*(pt1+i+296) = (*(pt1+i+296))^(*(pt2+i+296));
		*(pt1+i+297) = (*(pt1+i+297))^(*(pt2+i+297));
		*(pt1+i+298) = (*(pt1+i+298))^(*(pt2+i+298));
		*(pt1+i+299) = (*(pt1+i+299))^(*(pt2+i+299));
		*(pt1+i+300) = (*(pt1+i+300))^(*(pt2+i+300));
		*(pt1+i+301) = (*(pt1+i+301))^(*(pt2+i+301));
		*(pt1+i+302) = (*(pt1+i+302))^(*(pt2+i+302));
		*(pt1+i+303) = (*(pt1+i+303))^(*(pt2+i+303));
		*(pt1+i+304) = (*(pt1+i+304))^(*(pt2+i+304));
		*(pt1+i+305) = (*(pt1+i+305))^(*(pt2+i+305));
		*(pt1+i+306) = (*(pt1+i+306))^(*(pt2+i+306));
		*(pt1+i+307) = (*(pt1+i+307))^(*(pt2+i+307));
		*(pt1+i+308) = (*(pt1+i+308))^(*(pt2+i+308));
		*(pt1+i+309) = (*(pt1+i+309))^(*(pt2+i+309));
		*(pt1+i+310) = (*(pt1+i+310))^(*(pt2+i+310));
		*(pt1+i+311) = (*(pt1+i+311))^(*(pt2+i+311));
		*(pt1+i+312) = (*(pt1+i+312))^(*(pt2+i+312));
		*(pt1+i+313) = (*(pt1+i+313))^(*(pt2+i+313));
		*(pt1+i+314) = (*(pt1+i+314))^(*(pt2+i+314));
		*(pt1+i+315) = (*(pt1+i+315))^(*(pt2+i+315));
		*(pt1+i+316) = (*(pt1+i+316))^(*(pt2+i+316));
		*(pt1+i+317) = (*(pt1+i+317))^(*(pt2+i+317));
		*(pt1+i+318) = (*(pt1+i+318))^(*(pt2+i+318));
		*(pt1+i+319) = (*(pt1+i+319))^(*(pt2+i+319));
		*(pt1+i+320) = (*(pt1+i+320))^(*(pt2+i+320));
		*(pt1+i+321) = (*(pt1+i+321))^(*(pt2+i+321));
		*(pt1+i+322) = (*(pt1+i+322))^(*(pt2+i+322));
		*(pt1+i+323) = (*(pt1+i+323))^(*(pt2+i+323));
		*(pt1+i+324) = (*(pt1+i+324))^(*(pt2+i+324));
		*(pt1+i+325) = (*(pt1+i+325))^(*(pt2+i+325));
		*(pt1+i+326) = (*(pt1+i+326))^(*(pt2+i+326));
		*(pt1+i+327) = (*(pt1+i+327))^(*(pt2+i+327));
		*(pt1+i+328) = (*(pt1+i+328))^(*(pt2+i+328));
		*(pt1+i+329) = (*(pt1+i+329))^(*(pt2+i+329));
		*(pt1+i+330) = (*(pt1+i+330))^(*(pt2+i+330));
		*(pt1+i+331) = (*(pt1+i+331))^(*(pt2+i+331));
		*(pt1+i+332) = (*(pt1+i+332))^(*(pt2+i+332));
		*(pt1+i+333) = (*(pt1+i+333))^(*(pt2+i+333));
		*(pt1+i+334) = (*(pt1+i+334))^(*(pt2+i+334));
		*(pt1+i+335) = (*(pt1+i+335))^(*(pt2+i+335));
		*(pt1+i+336) = (*(pt1+i+336))^(*(pt2+i+336));
		*(pt1+i+337) = (*(pt1+i+337))^(*(pt2+i+337));
		*(pt1+i+338) = (*(pt1+i+338))^(*(pt2+i+338));
		*(pt1+i+339) = (*(pt1+i+339))^(*(pt2+i+339));
		*(pt1+i+340) = (*(pt1+i+340))^(*(pt2+i+340));
		*(pt1+i+341) = (*(pt1+i+341))^(*(pt2+i+341));
		*(pt1+i+342) = (*(pt1+i+342))^(*(pt2+i+342));
		*(pt1+i+343) = (*(pt1+i+343))^(*(pt2+i+343));
		*(pt1+i+344) = (*(pt1+i+344))^(*(pt2+i+344));
		*(pt1+i+345) = (*(pt1+i+345))^(*(pt2+i+345));
		*(pt1+i+346) = (*(pt1+i+346))^(*(pt2+i+346));
		*(pt1+i+347) = (*(pt1+i+347))^(*(pt2+i+347));
		*(pt1+i+348) = (*(pt1+i+348))^(*(pt2+i+348));
		*(pt1+i+349) = (*(pt1+i+349))^(*(pt2+i+349));
		*(pt1+i+350) = (*(pt1+i+350))^(*(pt2+i+350));
		*(pt1+i+351) = (*(pt1+i+351))^(*(pt2+i+351));
		*(pt1+i+352) = (*(pt1+i+352))^(*(pt2+i+352));
		*(pt1+i+353) = (*(pt1+i+353))^(*(pt2+i+353));
		*(pt1+i+354) = (*(pt1+i+354))^(*(pt2+i+354));
		*(pt1+i+355) = (*(pt1+i+355))^(*(pt2+i+355));
		*(pt1+i+356) = (*(pt1+i+356))^(*(pt2+i+356));
		*(pt1+i+357) = (*(pt1+i+357))^(*(pt2+i+357));
		*(pt1+i+358) = (*(pt1+i+358))^(*(pt2+i+358));
		*(pt1+i+359) = (*(pt1+i+359))^(*(pt2+i+359));
		*(pt1+i+360) = (*(pt1+i+360))^(*(pt2+i+360));
		*(pt1+i+361) = (*(pt1+i+361))^(*(pt2+i+361));
		*(pt1+i+362) = (*(pt1+i+362))^(*(pt2+i+362));
		*(pt1+i+363) = (*(pt1+i+363))^(*(pt2+i+363));
		*(pt1+i+364) = (*(pt1+i+364))^(*(pt2+i+364));
		*(pt1+i+365) = (*(pt1+i+365))^(*(pt2+i+365));
		*(pt1+i+366) = (*(pt1+i+366))^(*(pt2+i+366));
		*(pt1+i+367) = (*(pt1+i+367))^(*(pt2+i+367));
		*(pt1+i+368) = (*(pt1+i+368))^(*(pt2+i+368));
		*(pt1+i+369) = (*(pt1+i+369))^(*(pt2+i+369));
		*(pt1+i+370) = (*(pt1+i+370))^(*(pt2+i+370));
		*(pt1+i+371) = (*(pt1+i+371))^(*(pt2+i+371));
		*(pt1+i+372) = (*(pt1+i+372))^(*(pt2+i+372));
		*(pt1+i+373) = (*(pt1+i+373))^(*(pt2+i+373));
		*(pt1+i+374) = (*(pt1+i+374))^(*(pt2+i+374));
		*(pt1+i+375) = (*(pt1+i+375))^(*(pt2+i+375));
		*(pt1+i+376) = (*(pt1+i+376))^(*(pt2+i+376));
		*(pt1+i+377) = (*(pt1+i+377))^(*(pt2+i+377));
		*(pt1+i+378) = (*(pt1+i+378))^(*(pt2+i+378));
		*(pt1+i+379) = (*(pt1+i+379))^(*(pt2+i+379));
		*(pt1+i+380) = (*(pt1+i+380))^(*(pt2+i+380));
		*(pt1+i+381) = (*(pt1+i+381))^(*(pt2+i+381));
		*(pt1+i+382) = (*(pt1+i+382))^(*(pt2+i+382));
		*(pt1+i+383) = (*(pt1+i+383))^(*(pt2+i+383));
		*(pt1+i+384) = (*(pt1+i+384))^(*(pt2+i+384));
		*(pt1+i+385) = (*(pt1+i+385))^(*(pt2+i+385));
		*(pt1+i+386) = (*(pt1+i+386))^(*(pt2+i+386));
		*(pt1+i+387) = (*(pt1+i+387))^(*(pt2+i+387));
		*(pt1+i+388) = (*(pt1+i+388))^(*(pt2+i+388));
		*(pt1+i+389) = (*(pt1+i+389))^(*(pt2+i+389));
		*(pt1+i+390) = (*(pt1+i+390))^(*(pt2+i+390));
		*(pt1+i+391) = (*(pt1+i+391))^(*(pt2+i+391));
		*(pt1+i+392) = (*(pt1+i+392))^(*(pt2+i+392));
		*(pt1+i+393) = (*(pt1+i+393))^(*(pt2+i+393));
		*(pt1+i+394) = (*(pt1+i+394))^(*(pt2+i+394));
		*(pt1+i+395) = (*(pt1+i+395))^(*(pt2+i+395));
		*(pt1+i+396) = (*(pt1+i+396))^(*(pt2+i+396));
		*(pt1+i+397) = (*(pt1+i+397))^(*(pt2+i+397));
		*(pt1+i+398) = (*(pt1+i+398))^(*(pt2+i+398));
		*(pt1+i+399) = (*(pt1+i+399))^(*(pt2+i+399));
		*(pt1+i+400) = (*(pt1+i+400))^(*(pt2+i+400));
		*(pt1+i+401) = (*(pt1+i+401))^(*(pt2+i+401));
		*(pt1+i+402) = (*(pt1+i+402))^(*(pt2+i+402));
		*(pt1+i+403) = (*(pt1+i+403))^(*(pt2+i+403));
		*(pt1+i+404) = (*(pt1+i+404))^(*(pt2+i+404));
		*(pt1+i+405) = (*(pt1+i+405))^(*(pt2+i+405));
		*(pt1+i+406) = (*(pt1+i+406))^(*(pt2+i+406));
		*(pt1+i+407) = (*(pt1+i+407))^(*(pt2+i+407));
		*(pt1+i+408) = (*(pt1+i+408))^(*(pt2+i+408));
		*(pt1+i+409) = (*(pt1+i+409))^(*(pt2+i+409));
		*(pt1+i+410) = (*(pt1+i+410))^(*(pt2+i+410));
		*(pt1+i+411) = (*(pt1+i+411))^(*(pt2+i+411));
		*(pt1+i+412) = (*(pt1+i+412))^(*(pt2+i+412));
		*(pt1+i+413) = (*(pt1+i+413))^(*(pt2+i+413));
		*(pt1+i+414) = (*(pt1+i+414))^(*(pt2+i+414));
		*(pt1+i+415) = (*(pt1+i+415))^(*(pt2+i+415));
		*(pt1+i+416) = (*(pt1+i+416))^(*(pt2+i+416));
		*(pt1+i+417) = (*(pt1+i+417))^(*(pt2+i+417));
		*(pt1+i+418) = (*(pt1+i+418))^(*(pt2+i+418));
		*(pt1+i+419) = (*(pt1+i+419))^(*(pt2+i+419));
		*(pt1+i+420) = (*(pt1+i+420))^(*(pt2+i+420));
		*(pt1+i+421) = (*(pt1+i+421))^(*(pt2+i+421));
		*(pt1+i+422) = (*(pt1+i+422))^(*(pt2+i+422));
		*(pt1+i+423) = (*(pt1+i+423))^(*(pt2+i+423));
		*(pt1+i+424) = (*(pt1+i+424))^(*(pt2+i+424));
		*(pt1+i+425) = (*(pt1+i+425))^(*(pt2+i+425));
		*(pt1+i+426) = (*(pt1+i+426))^(*(pt2+i+426));
		*(pt1+i+427) = (*(pt1+i+427))^(*(pt2+i+427));
		*(pt1+i+428) = (*(pt1+i+428))^(*(pt2+i+428));
		*(pt1+i+429) = (*(pt1+i+429))^(*(pt2+i+429));
		*(pt1+i+430) = (*(pt1+i+430))^(*(pt2+i+430));
		*(pt1+i+431) = (*(pt1+i+431))^(*(pt2+i+431));
		*(pt1+i+432) = (*(pt1+i+432))^(*(pt2+i+432));
		*(pt1+i+433) = (*(pt1+i+433))^(*(pt2+i+433));
		*(pt1+i+434) = (*(pt1+i+434))^(*(pt2+i+434));
		*(pt1+i+435) = (*(pt1+i+435))^(*(pt2+i+435));
		*(pt1+i+436) = (*(pt1+i+436))^(*(pt2+i+436));
		*(pt1+i+437) = (*(pt1+i+437))^(*(pt2+i+437));
		*(pt1+i+438) = (*(pt1+i+438))^(*(pt2+i+438));
		*(pt1+i+439) = (*(pt1+i+439))^(*(pt2+i+439));
		*(pt1+i+440) = (*(pt1+i+440))^(*(pt2+i+440));
		*(pt1+i+441) = (*(pt1+i+441))^(*(pt2+i+441));
		*(pt1+i+442) = (*(pt1+i+442))^(*(pt2+i+442));
		*(pt1+i+443) = (*(pt1+i+443))^(*(pt2+i+443));
		*(pt1+i+444) = (*(pt1+i+444))^(*(pt2+i+444));
		*(pt1+i+445) = (*(pt1+i+445))^(*(pt2+i+445));
		*(pt1+i+446) = (*(pt1+i+446))^(*(pt2+i+446));
		*(pt1+i+447) = (*(pt1+i+447))^(*(pt2+i+447));
		*(pt1+i+448) = (*(pt1+i+448))^(*(pt2+i+448));
		*(pt1+i+449) = (*(pt1+i+449))^(*(pt2+i+449));
		*(pt1+i+450) = (*(pt1+i+450))^(*(pt2+i+450));
		*(pt1+i+451) = (*(pt1+i+451))^(*(pt2+i+451));
		*(pt1+i+452) = (*(pt1+i+452))^(*(pt2+i+452));
		*(pt1+i+453) = (*(pt1+i+453))^(*(pt2+i+453));
		*(pt1+i+454) = (*(pt1+i+454))^(*(pt2+i+454));
		*(pt1+i+455) = (*(pt1+i+455))^(*(pt2+i+455));
		*(pt1+i+456) = (*(pt1+i+456))^(*(pt2+i+456));
		*(pt1+i+457) = (*(pt1+i+457))^(*(pt2+i+457));
		*(pt1+i+458) = (*(pt1+i+458))^(*(pt2+i+458));
		*(pt1+i+459) = (*(pt1+i+459))^(*(pt2+i+459));
		*(pt1+i+460) = (*(pt1+i+460))^(*(pt2+i+460));
		*(pt1+i+461) = (*(pt1+i+461))^(*(pt2+i+461));
		*(pt1+i+462) = (*(pt1+i+462))^(*(pt2+i+462));
		*(pt1+i+463) = (*(pt1+i+463))^(*(pt2+i+463));
		*(pt1+i+464) = (*(pt1+i+464))^(*(pt2+i+464));
		*(pt1+i+465) = (*(pt1+i+465))^(*(pt2+i+465));
		*(pt1+i+466) = (*(pt1+i+466))^(*(pt2+i+466));
		*(pt1+i+467) = (*(pt1+i+467))^(*(pt2+i+467));
		*(pt1+i+468) = (*(pt1+i+468))^(*(pt2+i+468));
		*(pt1+i+469) = (*(pt1+i+469))^(*(pt2+i+469));
		*(pt1+i+470) = (*(pt1+i+470))^(*(pt2+i+470));
		*(pt1+i+471) = (*(pt1+i+471))^(*(pt2+i+471));
		*(pt1+i+472) = (*(pt1+i+472))^(*(pt2+i+472));
		*(pt1+i+473) = (*(pt1+i+473))^(*(pt2+i+473));
		*(pt1+i+474) = (*(pt1+i+474))^(*(pt2+i+474));
		*(pt1+i+475) = (*(pt1+i+475))^(*(pt2+i+475));
		*(pt1+i+476) = (*(pt1+i+476))^(*(pt2+i+476));
		*(pt1+i+477) = (*(pt1+i+477))^(*(pt2+i+477));
		*(pt1+i+478) = (*(pt1+i+478))^(*(pt2+i+478));
		*(pt1+i+479) = (*(pt1+i+479))^(*(pt2+i+479));
		*(pt1+i+480) = (*(pt1+i+480))^(*(pt2+i+480));
		*(pt1+i+481) = (*(pt1+i+481))^(*(pt2+i+481));
		*(pt1+i+482) = (*(pt1+i+482))^(*(pt2+i+482));
		*(pt1+i+483) = (*(pt1+i+483))^(*(pt2+i+483));
		*(pt1+i+484) = (*(pt1+i+484))^(*(pt2+i+484));
		*(pt1+i+485) = (*(pt1+i+485))^(*(pt2+i+485));
		*(pt1+i+486) = (*(pt1+i+486))^(*(pt2+i+486));
		*(pt1+i+487) = (*(pt1+i+487))^(*(pt2+i+487));
		*(pt1+i+488) = (*(pt1+i+488))^(*(pt2+i+488));
		*(pt1+i+489) = (*(pt1+i+489))^(*(pt2+i+489));
		*(pt1+i+490) = (*(pt1+i+490))^(*(pt2+i+490));
		*(pt1+i+491) = (*(pt1+i+491))^(*(pt2+i+491));
		*(pt1+i+492) = (*(pt1+i+492))^(*(pt2+i+492));
		*(pt1+i+493) = (*(pt1+i+493))^(*(pt2+i+493));
		*(pt1+i+494) = (*(pt1+i+494))^(*(pt2+i+494));
		*(pt1+i+495) = (*(pt1+i+495))^(*(pt2+i+495));
		*(pt1+i+496) = (*(pt1+i+496))^(*(pt2+i+496));
		*(pt1+i+497) = (*(pt1+i+497))^(*(pt2+i+497));
		*(pt1+i+498) = (*(pt1+i+498))^(*(pt2+i+498));
		*(pt1+i+499) = (*(pt1+i+499))^(*(pt2+i+499));
		*(pt1+i+500) = (*(pt1+i+500))^(*(pt2+i+500));
		*(pt1+i+501) = (*(pt1+i+501))^(*(pt2+i+501));
		*(pt1+i+502) = (*(pt1+i+502))^(*(pt2+i+502));
		*(pt1+i+503) = (*(pt1+i+503))^(*(pt2+i+503));
		*(pt1+i+504) = (*(pt1+i+504))^(*(pt2+i+504));
		*(pt1+i+505) = (*(pt1+i+505))^(*(pt2+i+505));
		*(pt1+i+506) = (*(pt1+i+506))^(*(pt2+i+506));
		*(pt1+i+507) = (*(pt1+i+507))^(*(pt2+i+507));
		*(pt1+i+508) = (*(pt1+i+508))^(*(pt2+i+508));
		*(pt1+i+509) = (*(pt1+i+509))^(*(pt2+i+509));
		*(pt1+i+510) = (*(pt1+i+510))^(*(pt2+i+510));
		*(pt1+i+511) = (*(pt1+i+511))^(*(pt2+i+511));
    }

    return 0;
}

int region_xor_avx_4kb(void *dst, void *src, size_t len){
    long unsigned int k;
    long unsigned int len256 = len/512;

    __m256i *_buf1 = (__m256i *)src;
    __m256i *_buf2 = (__m256i *)dst;

    for(k = 0; k < len256; k=k+16){
		_buf2[k+0] = _mm256_xor_si256(_buf1[k+0], _buf2[k+0]);
		_buf2[k+1] = _mm256_xor_si256(_buf1[k+1], _buf2[k+1]);
		_buf2[k+2] = _mm256_xor_si256(_buf1[k+2], _buf2[k+2]);
		_buf2[k+3] = _mm256_xor_si256(_buf1[k+3], _buf2[k+3]);
		_buf2[k+4] = _mm256_xor_si256(_buf1[k+4], _buf2[k+4]);
		_buf2[k+5] = _mm256_xor_si256(_buf1[k+5], _buf2[k+5]);
		_buf2[k+6] = _mm256_xor_si256(_buf1[k+6], _buf2[k+6]);
		_buf2[k+7] = _mm256_xor_si256(_buf1[k+7], _buf2[k+7]);
		_buf2[k+8] = _mm256_xor_si256(_buf1[k+8], _buf2[k+8]);
		_buf2[k+9] = _mm256_xor_si256(_buf1[k+9], _buf2[k+9]);
		_buf2[k+10] = _mm256_xor_si256(_buf1[k+10], _buf2[k+10]);
		_buf2[k+11] = _mm256_xor_si256(_buf1[k+11], _buf2[k+11]);
		_buf2[k+12] = _mm256_xor_si256(_buf1[k+12], _buf2[k+12]);
		_buf2[k+13] = _mm256_xor_si256(_buf1[k+13], _buf2[k+13]);
		_buf2[k+14] = _mm256_xor_si256(_buf1[k+14], _buf2[k+14]);
		_buf2[k+15] = _mm256_xor_si256(_buf1[k+15], _buf2[k+15]);
    }

    return 1;
}


int main(void){
    unsigned char  * ptr1, * ptr2;
    void  * ptr1v, * ptr2v;
    int i,j;
    int times;
    size_t buf_size;
    struct timeval begin, end;
    
    ptr1 = (unsigned char*)malloc((size_t)512*1024*1024UL);
    ptr2 = (unsigned char*)malloc((size_t)512*1024*1024UL);

    if(posix_memalign(&ptr1v, 256, (size_t)512*1024*1024UL) != 0){
        printf("Fail to alloc aligned memory!\n");
        return 0;
    }
    if(posix_memalign(&ptr2v, 256, (size_t)512*1024*1024UL) != 0){
        printf("Fail to alloc aligned memory!\n");
        return 0;
    }

    randomize_region(ptr1v, (size_t)512*1024*1024);
    randomize_region(ptr2v, (size_t)512*1024*1024);
    buf_size = 4096;
    printf("size\traw\tavx\n");
    for(i = 0; i < 18; i++){
        if(buf_size > 1024*1024){
            printf("%luMB\t",buf_size/(1048576UL));
        }else{
            printf("%luKB\t",buf_size/(1024));
        }

        times = ((size_t)1024*1024*1024UL)/(buf_size/4);
        
        gettimeofday(&begin, NULL);
        for(j = 0; j < times; ++j){
            region_xor_raw_4kb(ptr1, ptr2, buf_size);
        }
        gettimeofday(&end, NULL);
        printf("%.3f\t",end.tv_sec-begin.tv_sec+(end.tv_usec-begin.tv_usec)/(1000.0*1000.0));

        gettimeofday(&begin, NULL);
        for(j = 0; j < times; ++j){
            region_xor_avx_4kb(ptr1v, ptr2v, buf_size);
        }
        gettimeofday(&end, NULL);
        printf("%.3f\t",end.tv_sec-begin.tv_sec+(end.tv_usec-begin.tv_usec)/(1000.0*1000.0));
        
        printf("\n");

        buf_size *=2;
    }

    free(ptr1);
    free(ptr2);
    free(ptr1v);
    free(ptr2v);
    return 0;
}
