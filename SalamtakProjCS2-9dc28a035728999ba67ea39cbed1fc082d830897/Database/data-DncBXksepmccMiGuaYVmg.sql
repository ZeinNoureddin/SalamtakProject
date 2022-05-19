
USE [HospitalDB]
GO
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO 
SET ANSI_PADDING ON
GO
CREATE TABLE `myTable` (
  `id` mediumint(8) unsigned NOT NULL auto_increment,
  `Name` varchar(255) default NULL,
  `phone` varchar(100) default NULL,
  `email` varchar(255) default NULL,
  `country` varchar(100) default NULL,
  `region` varchar(50) default NULL,
  `address` varchar(10) default NULL,
  `alphanumeric` varchar(255),
  `UserName` varchar(255),
  PRIMARY KEY (`id`)
) AUTO_INCREMENT=1;

INSERT INTO `myTable` (`Name`,`phone`,`email`,`country`,`region`,`address`,`alphanumeric`,`UserName`)
VALUES
  ("Palmer","0100 492 1303","palmer@outlook.couk","Turkey","Konya","16954","GHO40VPN7TG","UserNameC75"),
  ("Vivien","0100 350 2792","vivien@hotmail.org","Turkey","Diyarbakır","50381","XGB46NDF9SZ","UserNameR70"),
  ("Yetta","0100 448 0208","yetta@yahoo.ca","Turkey","Istanbul","35724","NFM12IDP3BH","UserNameN81"),
  ("Phelan","0100 683 7263","phelan@hotmail.org","Turkey","Ankara","22473","ILK72SZP6BH","UserNameQ38"),
  ("Jaquelyn","0100 425 8708","jaquelyn@yahoo.com","Turkey","İzmir","32571","WNJ69JRX4FP","UserNameB49"),
  ("Deirdre","0100 683 1304","deirdre5322@icloud.com","Turkey","Adana","67444","FEE82YTY6DX","UserNameR89"),
  ("Nell","0100 361 2614","nell@google.ca","Turkey","Kahramanmaraş","48616","ZVW60LDK6XG","UserNameK11"),
  ("Adara","0100 044 5362","adara@outlook.ca","Turkey","Mersin","73846","VAT92FBL7SR","UserNameO32"),
  ("Moana","0100 203 2373","moana@outlook.org","Turkey","Manisa","28732","CDQ72USO5UQ","UserNameD37"),
  ("Hilel","0100 623 7362","hilel2642@icloud.ca","Turkey","Gaziantep","17845","KXD89FDW1FB","UserNameM66");
INSERT INTO `myTable` (`Name`,`phone`,`email`,`country`,`region`,`address`,`alphanumeric`,`UserName`)
VALUES
  ("Lenore","0100 504 4739","lenore@outlook.couk","Turkey","Samsun","21613","HAI89GFP0NK","UserNameF36"),
  ("Emerald","0100 511 1356","emerald9512@yahoo.org","Turkey","Ankara","32541","VER95DWV1PP","UserNameD48"),
  ("Violet","0100 497 8203","violet@hotmail.org","Turkey","İzmir","62523","LYC46OJK1QM","UserNameY97"),
  ("Jasper","0100 475 9193","jasper6782@hotmail.org","Turkey","Aydın","11173","ILQ47GCU3LZ","UserNameJ36"),
  ("Kamal","0100 542 7136","kamal5250@google.org","Turkey","Van","44777","MMB55IPT9VZ","UserNameX64"),
  ("Iris","0100 326 7681","iris@outlook.org","Turkey","Kocaeli","11873","YDU59FXD3UA","UserNameF79"),
  ("Jason","0100 240 1271","jason1069@aol.com","Turkey","Bursa","52974","IKL33FTQ9LH","UserNameK69"),
  ("Benjamin","0100 557 6468","benjamin@protonmail.ca","Turkey","Şanlıurfa","59422","WXT22MRO2LG","UserNameR24"),
  ("Armand","0100 687 0262","armand@hotmail.net","Turkey","Kocaeli","57336","QNW53EGH2XH","UserNameS18"),
  ("Leandra","0100 556 4741","leandra6886@icloud.couk","Turkey","Ankara","67208","IST21GAN5IE","UserNameX82");
INSERT INTO `myTable` (`Name`,`phone`,`email`,`country`,`region`,`address`,`alphanumeric`,`UserName`)
VALUES
  ("Uma","0100 251 6246","uma@aol.edu","Turkey","Samsun","23673","ZRC42NNY5XJ","UserNameA43"),
  ("Abel","0100 866 0118","abel@icloud.net","Turkey","Konya","15232","SHM71IIL7QP","UserNameH85"),
  ("Zelenia","0100 688 8187","zelenia@protonmail.com","Turkey","Istanbul","33885","YHW27KGR3LR","UserNameD36"),
  ("Nero","0100 625 1574","nero3095@yahoo.couk","Turkey","Kocaeli","36479","BWH18ZWG9FC","UserNameE64"),
  ("Gannon","0100 584 3348","gannon@aol.ca","Turkey","Mersin","48233","LNC83MSM0BJ","UserNameU23"),
  ("Evelyn","0100 519 6316","evelyn2554@outlook.edu","Turkey","Gaziantep","23124","WPN65PNB7OD","UserNameH20"),
  ("Ashton","0100 146 0110","ashton@protonmail.org","Turkey","Ankara","49341","SJI64OUF9UX","UserNameG54"),
  ("Abdul","0100 248 6412","abdul@yahoo.edu","Turkey","Bursa","18112","JBA57PJT6CW","UserNameF32"),
  ("Sydnee","0100 527 6737","sydnee4541@aol.net","Turkey","Hatay","19264","GOC52LGD3VT","UserNameC63"),
  ("Lucian","0100 324 8142","lucian4728@icloud.com","Turkey","Balıkesir","30856","OWX54DRF5JD","UserNameH35");
INSERT INTO `myTable` (`Name`,`phone`,`email`,`country`,`region`,`address`,`alphanumeric`,`UserName`)
VALUES
  ("Brian","0100 668 7396","brian@icloud.ca","Turkey","Manisa","43846","COD75OVT7NI","UserNameM39"),
  ("Paloma","0100 239 4483","paloma9038@icloud.net","Turkey","Ankara","17799","IBZ79JLO4QT","UserNameE52"),
  ("Olympia","0100 492 8331","olympia8180@icloud.com","Turkey","Antalya","74349","VTB60WMS6DX","UserNameT22"),
  ("Noel","0100 662 0095","noel4447@icloud.net","Turkey","Gaziantep","61757","JFT73NTW5PA","UserNameM76"),
  ("Ray","0100 585 2662","ray5523@protonmail.edu","Turkey","Kocaeli","26032","CTZ71NYN4HT","UserNameF70"),
  ("Maya","0100 239 4931","maya@yahoo.org","Turkey","Adana","06456","TMK56FYH4LY","UserNameE76"),
  ("Ivy","0100 347 7181","ivy@aol.edu","Turkey","Gaziantep","13244","SHC85FJM4HH","UserNameL22"),
  ("Darrel","0100 746 1875","darrel@icloud.com","Turkey","Kahramanmaraş","15163","EXT57IDV6XS","UserNameY12"),
  ("Ferris","0100 323 1058","ferris@hotmail.couk","Turkey","Antalya","37146","SQK88ZFE9JH","UserNameG73"),
  ("Brady","0100 538 2652","brady9953@icloud.couk","Turkey","Van","13527","BLG32VCB5XP","UserNameQ50");
INSERT INTO `myTable` (`Name`,`phone`,`email`,`country`,`region`,`address`,`alphanumeric`,`UserName`)
VALUES
  ("Noelani","0100 659 7652","noelani@yahoo.couk","Turkey","Samsun","61786","DNM33INX9UA","UserNameX75"),
  ("Jennifer","0100 353 3550","jennifer@protonmail.org","Turkey","Bursa","22215","WYF30VTW2RF","UserNameZ95"),
  ("Zenaida","0100 028 8667","zenaida@icloud.ca","Turkey","Van","64827","KWR74GHY9PH","UserNameL59"),
  ("Buffy","0100 357 9218","buffy8075@aol.ca","Turkey","Istanbul","10313","XTN67KJM3LK","UserNameU48"),
  ("Levi","0100 051 4206","levi@protonmail.edu","Turkey","Kocaeli","56772","DVM67CLX1BE","UserNameL75"),
  ("Cynthia","0100 618 2047","cynthia3779@protonmail.com","Turkey","Konya","22637","HCN92WRU8EB","UserNameQ06"),
  ("Illiana","0100 914 1485","illiana@yahoo.com","Turkey","Mersin","25777","YFK77REF7GD","UserNameH26"),
  ("Melyssa","0100 422 0766","melyssa3615@yahoo.edu","Turkey","Bursa","17824","MIK38ODH0QQ","UserNameQ88"),
  ("Odette","0100 551 6245","odette9843@protonmail.edu","Turkey","Kahramanmaraş","04223","WAS59FNM3GX","UserNameT06"),
  ("Uma","0100 247 7764","uma8588@icloud.com","Turkey","Adana","11924","SHI41KYW2QR","UserNameH82");
INSERT INTO `myTable` (`Name`,`phone`,`email`,`country`,`region`,`address`,`alphanumeric`,`UserName`)
VALUES
  ("Noble","0100 346 6632","noble@protonmail.couk","Turkey","İzmir","21486","CGL54OTM9VJ","UserNameW46"),
  ("Lacota","0100 481 6228","lacota1848@google.couk","Turkey","Gaziantep","71784","GRC26TGY6RH","UserNameJ44"),
  ("Madonna","0100 781 2255","madonna4547@google.ca","Turkey","Adana","10627","PQM45WJM2CH","UserNameK64"),
  ("Shelly","0100 587 2258","shelly4557@icloud.org","Turkey","Aydın","17224","TJT27XXK2DZ","UserNameP21"),
  ("Hope","0100 069 7968","hope@hotmail.ca","Turkey","Gaziantep","31678","CUB36NCR2KI","UserNameV64"),
  ("Salvador","0100 566 2682","salvador3850@aol.com","Turkey","Şanlıurfa","15472","QBQ70IIT7KX","UserNameZ83"),
  ("Quail","0100 115 1503","quail@icloud.org","Turkey","Aydın","39767","EHX41UDH6YX","UserNameM38"),
  ("Caleb","0100 522 1226","caleb5535@protonmail.ca","Turkey","Kayseri","23150","HPC36OOE0JS","UserNameS16"),
  ("Marshall","0100 060 1703","marshall@outlook.edu","Turkey","Van","20997","GLM01OLU2FG","UserNameB87"),
  ("Silas","0100 845 7745","silas1185@protonmail.net","Turkey","Ankara","54627","SUU75AGX8QL","UserNameN47");
INSERT INTO `myTable` (`Name`,`phone`,`email`,`country`,`region`,`address`,`alphanumeric`,`UserName`)
VALUES
  ("Colin","0100 429 1662","colin9669@icloud.com","Turkey","Şanlıurfa","32773","GOU41WRS8SX","UserNameJ32"),
  ("Sonia","0100 423 8252","sonia1349@protonmail.net","Turkey","Şanlıurfa","21424","PFO61FWD1MD","UserNameG53"),
  ("Dalton","0100 556 5784","dalton9203@google.ca","Turkey","Bursa","06689","PKS88DLR6HC","UserNameG36"),
  ("Dora","0100 548 8801","dora@protonmail.edu","Turkey","Hatay","57223","KZJ51RUI2DR","UserNameC75"),
  ("Kevin","0100 526 4531","kevin@icloud.couk","Turkey","Diyarbakır","41611","KEF55RWF8PT","UserNameQ56"),
  ("Gavin","0100 122 0255","gavin8666@protonmail.couk","Turkey","Konya","68534","IBY35YME8VX","UserNameN02"),
  ("Cassady","0100 537 5220","cassady5279@yahoo.org","Turkey","Manisa","44765","RFR75EBV2OW","UserNameQ76"),
  ("Hadassah","0100 379 4948","hadassah@yahoo.net","Turkey","Mersin","03417","HQH44XXZ4XF","UserNameO16"),
  ("Zephania","0100 483 3530","zephania4980@icloud.com","Turkey","Manisa","43096","WGZ87WBK6SL","UserNameC73"),
  ("Chester","0100 562 1648","chester@google.ca","Turkey","Ankara","18777","LXS22VOP6TL","UserNameM53");
INSERT INTO `myTable` (`Name`,`phone`,`email`,`country`,`region`,`address`,`alphanumeric`,`UserName`)
VALUES
  ("Iola","0100 444 2518","iola1341@protonmail.net","Turkey","Ankara","17415","TWW16EJP1MX","UserNameN49"),
  ("Akeem","0100 195 2205","akeem7805@icloud.org","Turkey","Balıkesir","04067","YQO13TJF8ZV","UserNameR49"),
  ("Brian","0100 003 1356","brian475@outlook.ca","Turkey","Diyarbakır","12539","GOV38PGI4QH","UserNameV13"),
  ("Yolanda","0100 732 1357","yolanda7578@outlook.com","Turkey","Manisa","76868","QNJ44LCQ3JC","UserNameJ71"),
  ("Rigel","0100 242 4831","rigel@outlook.edu","Turkey","Aydın","29661","YRR45BWK1XP","UserNameN42"),
  ("Rina","0100 667 7349","rina@aol.com","Turkey","Konya","14747","JYR66KMP5JU","UserNameF30"),
  ("Yuli","0100 823 8851","yuli9444@yahoo.ca","Turkey","Mersin","21777","LCH17PJQ7ZL","UserNameG19"),
  ("Meredith","0100 457 7828","meredith@hotmail.org","Turkey","İzmir","75272","ECV62LDA6GI","UserNameE97"),
  ("Indigo","0100 303 3984","indigo4129@outlook.edu","Turkey","Konya","14387","OQM42BWY1ZK","UserNameY21"),
  ("Amela","0100 337 1854","amela4031@outlook.com","Turkey","Kahramanmaraş","48274","KNP60IMV8YQ","UserNameH78");
INSERT INTO `myTable` (`Name`,`phone`,`email`,`country`,`region`,`address`,`alphanumeric`,`UserName`)
VALUES
  ("Xenos","0100 674 8693","xenos1145@protonmail.couk","Turkey","Balıkesir","07624","VTH61NDS4LD","UserNameR98"),
  ("Rahim","0100 489 8998","rahim2036@google.org","Turkey","Samsun","28114","XOB35JRX4LZ","UserNameP72"),
  ("Katelyn","0100 673 1411","katelyn1667@protonmail.edu","Turkey","Konya","62221","QVM66MOD6QS","UserNameZ69"),
  ("Noah","0100 484 2055","noah@protonmail.com","Turkey","Aydın","34711","WCR88CEO8PI","UserNameC81"),
  ("Preston","0100 802 0353","preston@outlook.com","Turkey","Ankara","15342","MZC30BBB1FA","UserNameL57"),
  ("Charles","0100 208 1302","charles@aol.org","Turkey","Mersin","26425","ECK65JXQ1JY","UserNameE88"),
  ("Dorothy","0100 214 2647","dorothy@hotmail.net","Turkey","Gaziantep","26642","VUJ77LWA8KI","UserNameB41"),
  ("Madison","0100 386 6774","madison6000@protonmail.ca","Turkey","Istanbul","47967","OJH54VDF2NB","UserNameH74"),
  ("Aristotle","0100 589 1507","aristotle2623@yahoo.com","Turkey","Bursa","21239","OPV13JOT5KJ","UserNameA92"),
  ("Palmer","0100 812 4225","palmer@hotmail.couk","Turkey","Samsun","12760","GTT97TQO7BY","UserNameF48");
INSERT INTO `myTable` (`Name`,`phone`,`email`,`country`,`region`,`address`,`alphanumeric`,`UserName`)
VALUES
  ("Alea","0100 664 3796","alea1352@google.couk","Turkey","Samsun","66852","WOG09OGK4QF","UserNameF34"),
  ("Mufutau","0100 640 7744","mufutau2961@outlook.org","Turkey","Bursa","07760","XXI57SXX8UX","UserNameH37"),
  ("Tasha","0100 817 0075","tasha@protonmail.ca","Turkey","Manisa","78862","DES73DLJ1XU","UserNameF62"),
  ("Kiona","0100 620 6177","kiona@aol.net","Turkey","Şanlıurfa","57779","QNX18OAW4MB","UserNameF21"),
  ("Colton","0100 741 6654","colton4556@google.com","Turkey","Bursa","48375","FPC53EME3MJ","UserNameY45"),
  ("Dolan","0100 767 2225","dolan8099@google.ca","Turkey","Balıkesir","55135","HZV67DFN2ES","UserNameX34"),
  ("Orli","0100 287 1622","orli1187@hotmail.ca","Turkey","Van","36894","NEY81TWV5HG","UserNameS68"),
  ("Gray","0100 153 4868","gray@hotmail.edu","Turkey","Adana","53812","TXP71DNB2NO","UserNameU02"),
  ("Jackson","0100 366 7510","jackson2116@aol.org","Turkey","Balıkesir","40332","QZC84RJJ4JB","UserNameU41"),
  ("Jade","0100 253 1235","jade8505@aol.ca","Turkey","Gaziantep","25376","CGP62EOV8RH","UserNameS65");
