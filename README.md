В данном коде мы напишем конвертор валют на c++ ，
сразу говорю :
 в коде не используется парсер ， поэтому курс валют может отличаться ;

Наш код будет представлять функцию Contert(a,b,c):

    a-валюта , которую мы хотим конвертировать;
    b-численное количество a;
    c-то, во что мы хотим конвертировать ;

пример: 
    std::cout<<Converter("DOLLAR",1,"RUB"); // Вывод->92.29 (Рублей)
    std::cout << Converter("RUB", 1, "YEN"); //Вывод->1.6861 (日国的元)
