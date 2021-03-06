Barcode Scanner

Трябва да имплементирате софтуер за скенер на баркодове. Скенерите за баркодове
представляват линейна поредица от сензори за светлина. Светлината се излъчва от
устройството, в което се намира сензорът, и се отразява от материала, върху който е
отпечатан баркодът.
Баркодът е поредица от бели и черни ивици, като всяка ивица е или широка, или тясна. Всяка
черна ивица кодира един бит информация, като широките ивици кодират 1, а тесните – 0. Чрез
баркодове се кодират цифрите от 0 до 9, символът тире (–), както и специална
последователност, маркираща началото и края на кода (start/stop code). Всеки символ се
кодира чрез пет бита, като в баркода винаги се започва с тъмна ивица (широка или тясна). Два
символа са разделени само от светла ивица.
Побитовото кодиране на символите е дадено в следната таблица:
символ     0     1     2     3     4     5
кодиране 00001 10001 01001 11001 00101 10100
символ     6     7     8     9   -  10 start/stop
кодиране 01100 00011 10010 10000 00100 00110
Така числото 1 ще се представи като широка тъмна ивица, следвана от светла ивица, тясна
тъмна ивица, светла ивица, тясна тъмна ивица, светла ивица, тясна тъмна ивица, светла
ивица и накрая широка тъмна ивица. Всеки код има поне един символ извън старт/стоп
последователностите.

За да се справи с възможни грешки при четенето, всеки баркод включва два контролни
символа – C и K, добавени в края на текста преди стоп-последователността.
Ако кодът се състои от n символа – c1, c2, … cn, то символът C трябва да има стойност,
получена по формулата:
Стойността на K се получава по формулата:
,
където w(ci) е теглото на символа ci. Теглото на всяка цифра е нейната стойност (за 0 – 0, за 1
– 1 и т.н.), а теглото на символа „тире“ е 10. Във формулата за K cn+1 е стойността на
контролния символ C.
Така например, ако искаме да кодираме 123-45, то стойността на C ще е 5, а на K – 2. Така
стойността 123-45 реално ще се кодира като последователност от кодовете за 123-4552,
предшествана и следвана от кода на старт/стоп последователността.
Задачата на вашата програма е да обработва данните от сензор в устройства за сканиране на
баркодове. Такъв сензор се характеризира с резолюция – брой индивидуални светлинни
сензори, от които е съставен. Тези светлинни сензори са разположени в линия, като всеки от
тях засича само интензитета на отразената светлина, попаднала върху него. В този смисъл,
входът за вашата програма е поредица от реални числа със стойности в интервала [0, 1]. В
тези данни поредица от високи стойности (близки или равни на 1) се интерпретират като бяла
ивица, а поредица от ниски стойности (близки или равни на 0) се интерпретират като черна
ивица.
Идеалните условия за работа на устройството за четене на баркод са следните:
● няма светлинен шум от околната среда;
● баркодът е отпечатан на равна повърхност;
● устройството е директно срещу кода и е позиционирано в средата му;
● равнината на сензорите е успоредна на равнината на баркода.
При идеални условия във входните данни всяка бяла и всяка черна ивица ще са поредици от
1 или 0, съответно и всички тесни ивици ще са с еднаква ширина, както и всички широки ивици
ще са с еднаква ширина помежду си.
В общия случай обаче устройството не работи в идеални условия:
● повърхността, върху която е отпечатан баркодът, може да е част от цилиндър
(например бутилка или буркан);
● в средата, в която се извършва сканирането, може да има светлинен шум, който
повишава или намалява всички стойности, получени от сензора;
● устройството може да не е насочено към средата на баркода, както и може да не е
перпендикулярно срещу него;
● баркодът може да е обърнат и реално да го четете отзад-напред.
Всички тези ефекти водят до различни изменения във входните данни.
Вашата задача е да интерпретирате данните, получени от сензора, за да разберете какъв е
баркодът, към който е насочено устройството. Има възможност входните данни да са твърде
неточни и интерпретирането им да не е възможно – тогава трябва да изведете, че това е така.
Ако данните могат да се интерпретират, то трябва да изведете кодирания текст. Ако не можете
да интерпретирате данните като валиден баркод, трябва да изведете кратко съобщение,
описващо проблема.
Като вход вашата програма ще получи множество тестови данни на стандартния си вход.
Всеки тест се състои от два елемента – първо ще има цяло число N (броя на сензорите), а
след него ще са подадени N реални числа, разделени с празни символи. Самите тестове са
предшествани от число K на отделен ред – броя на тестовете.
Примерни входни данни:

Вход:
128
1 1 0 1 0 1 0 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0
1 0 1 0 0 1 0 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 1 0 1
0 1 0 0 1 0 1 0 0 1 0 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 0 1 0 1
0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 1 0 1 0 0 1 0 0 1 0 1 1 1 1 1 1 1
Изход:
123-45
Коментар:
Тази последователност кодира битовете
00110 10001 01001 11001 00100 00101 10100 10100 01001 00110
След маркера за край има отчетен ярък участък. Така точно (без шум) се прочитат символите
123-4552, оградени с маркери за начало/край, които вярно кодират текста 123-45.

Вход:
90
0.9 0.9 0.88 0.82 0.80 - светъл участък
0.22 0.77 0.27 0.20 0.78 0.21 0.18 0.80 0.20 0.82 0.17 0.77 - 0 1 1 0 0 /START_STOP/ <-
0.2 0.17 0.7 0.15 0.68 0.13 0.66 0.11 0.12 0.61 0.12 0.62 - 1 0 0 1 0  /2/ <-
0.14 0.61 0.16 0.15 0.64 0.14 0.62 0.13 0.60 0.14 0.10 0.59 - 0 1 0 0 1 /8/ <-
0.11 0.1 0.56 0.1 0.52 0.09 0.51 0.1 0.07 0.48 0.1 0.48 - 1 0 0 1 0 /2/ <-
0.11 0.1 0.5 0.14 0.57 0.18 0.21 0.63 0.21 0.68 0.26 0.74  - 1 0 1 0 0 /4/ <-
0.31 0.82 0.38 0.39 0.92 0.42 0.48 0.93 0.51 0.94 0.61 0.92  - 0 1 1 0 0 /START_STOP/ <-
0.93 0.91 0.98 0.91 0.12 0.97 0.92 0.91 0.97 0.94 0.88 0.86 0.81 - светъл участък
Изход:
42
Коментар:
Горната последователност от стойности на светлинен интензитет кодира битовете
0 1 1 0 0 1 0 0 1 0 0 1 0 0 1 1 0 0 1 0 1 0 1 0 0 0 1 1 0 0
като в началото и края има серия светли стойности – информация извън самия баркод. В
последователността от стойности в края има една тъмна стойност, която е резултат от шум.
Прочетена наобратно, горната последователност кодира следните символи
start - 4 - 2 - 8 - 2 – start,
което е валиден баркод със стойност 42.

Вход:
50
0.91 0.92 0.99 0.97 0.91 0.97 0.94 0.88 0.86 0.81
0.91 0.62 0.97 0.92 0.91 0.97 0.94 0.88 0.86 0.81
0.90 0.82 0.91 0.91 0.91 0.92 0.94 0.98 0.96 0.99
0.9 0.9 0.88 0.82 0.80 0.22 0.77 0.27 0.20 0.78
0.21 0.18 0.80 0.20 0.82 0.17 0.77 0.2 0.17 0.7
Изход:
Barcode truncated. Move the scanner to the left.
Коментар:
Тук след дълга серия ярки пиксели може да се прочете следната последователност от битове:
0 1 1 0 0 1, кодирана чрез пикселите 0.80 0.22 0.77 0.27 0.20 0.78
0.21 0.18 0.80 0.20 0.82 0.17 0.77 0.2 0.17 0.7
Тази последователност е прекалено къса, за да съдържа валиден баркод, но последните пет
бита кодират обърната старт-стоп дума, което предполага, че баркодът е обърнат и сме
прочели само края му.