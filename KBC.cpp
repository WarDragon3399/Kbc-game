//KBC Game Code.....//

#include<iostream>
#include <ctime>
#include <stdlib.h>
#include <limits>
#include<string.h>

using namespace std;
class game
{
    protected:
        //char *name;
        int i;//,len;
        static int score;
        friend int kc();

    public:
        int first();
        int second();
        int third();


};

/*class KBC:public game
{

        friend int kc();
        public:
        KBC(char *n)
        {
            len = strlen(n);
            name = new char[len+1];
            strcpy(name,n);
            cout<<name;
        }



};*/

int game::first()
{
    int kc();
    static int score=0;
    char Ans;
    cout<<"\n\n here is your first question";
    cout<<"\n\n Q1. In which country was Julie Christie born?";
    cout<<"\n A.India \n\n B.U.S.A \n\n C.U.K. \n\n D.Canada\n";
    cout<<"\n Answer: ";
	cin>>Ans;
    if(Ans=='a'||Ans=='A')
    {
        cout<<"\n\n your Answer is Right\n Christie was born on 14 April 1940 at Singlijan Tea Estate, Chabua, Assam, British India, ";
        cout<<"\n\n the elder child of Rosemary (née Ramsden; 1912–1982), a Welsh painter, and Francis Frank St. John Christie (1904–1963).";
        cout<<"\n\n Known for British actress An icon of the swinging London era of the 1960s, she has won the Academy, Golden Globe, BAFTA, and Screen Actors Guild Awards.";
        cout<<"\n\n Christie appeared in six films that were ranked in the British Film Institute's 100 greatest British films of the 20th century,";
        cout<<"\n\n and in 1997 she received the BAFTA Fellowship.";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer is Christie was born on 14 April 1940 at Singlijan Tea Estate, Chabua, Assam, British India, ";
        cout<<"\n\n\n the elder child of Rosemary (née Ramsden; 1912–1982), a Welsh painter, and Francis Frank St. John Christie (1904–1963).";
        cout<<"\n\n Known for British actress An icon of the swinging London era of the 1960s, she has won the Academy, Golden Globe, BAFTA, and Screen Actors Guild Awards.";
        cout<<"\n\n Christie appeared in six films that were ranked in the British Film Institute's 100 greatest British films of the 20th century,";
        cout<<"\n\n and in 1997 she received the BAFTA Fellowship.";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
        system("PAUSE");
        kc();
    }

    system("cls");
    cout<<"\n\n Q2.Persia becomes what or What's a new name of Persia?";
    cout<<"\n A.India \n\n B.Iraq \n\n C.Iran \n\n D.U.A.E\n";
    cout<<"\n Answer: ";
    cin>>Ans;
    if(Ans=='c'||Ans=='C')
    {
        cout<<"\n\n your Answer is Right\n In ancient time Iran know as Persia";
        cout<<"\n\n you heard about Prince of Persia Story or Game didn't you....";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer is In ancient time Iran know as Persia. ";
        cout<<"\n\n\n you heard about Prince of Persia Story or Game didn't you";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
        system("PAUSE");
         kc();
    }

    system("cls");
    cout<<"\n\n Q3.which county has biggest center of manufacturing of automobile by area ?";
    cout<<"\n A.India \n\n B.U.S.A \n\n C.Germany \n\n D.China\n";
    cout<<"\n Answer: ";
        cin>>Ans;

    if(Ans=='b'||Ans=='B')
    {
        cout<<"\n\n you Answer is Right\n Detroit (Michigan, USA) is the birthplace of the US automotive industry";
        cout<<"\n\n and is home to car giants General Motor, Chrysler, and Ford.";
        cout<<"\n\n  The area of Bekasi-Karawang is a strategic location for car manufacturers as it is conveniently";
        cout<<"\n\n located near Indonesia's capital city of Jakarta where car demand is highest.Dec 9, 2016";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer is U.S.A ";
        cout<<"\n\n\nDetroit (Michigan, USA) is the birthplace of the US automotive industry";
        cout<<"\n\n and is home to car giants General Motor, Chrysler, and Ford.";
        cout<<"\n\n  The area of Bekasi-Karawang is a strategic location for car manufacturers as it is conveniently";
        cout<<"\n\n located near Indonesia's capital city of Jakarta where car demand is highest.Dec 9, 2016";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
        system("PAUSE");
        kc();
    }

    system("cls");
    cout<<"\n\n Q4.What did Joseph Priesley discover in 1774 ?";
    cout<<"\n A. Nitrogen \n\n B. Led \n\n C. Oxygen \n\n D. Sodium\n";
    cout<<"\n Answer: ";
    cin>>Ans;

     if(Ans=='c'||Ans=='C')
    {
        cout<<"\n\n your Answer is Right\n Oxygen discovered by Joseph Priesley  in 1774";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer is Oxygen discovered by Joseph Priesley  in 1774";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
        system("PAUSE");
         kc();
    }

    system("cls");
    cout<<"\n\n Q5. Name a famous detective who smoked a pipe and played the violin?";
    cout<<"\n A. C. Auguste Dupin \n\n B. Jams Bond \n\n C. Byomkesh Bakshi \n\n D. Sherlock Holmes\n";
    cout<<"\n Answer: ";
    cin>>Ans;

    if(Ans=='d'||Ans=='D')
    {
        cout<<"\n\n your Answer is Right\n Sherlock Holmes";
        cout<<"\n\n Sherlock Holmes is a fictional private detective created by British author Sir Arthur Conan Doyle.";
        cout<<"\n\n Referring to himself as a 'consulting detective' in the stories";
        cout<<"\n\n Holmes is known for his proficiency with observation, forensic science, and logical reasoning that borders on the fantastic,";
        cout<<"\n\n which he employs when investigating cases for a wide variety of clients, including Scotland Yard.";
        cout<<"\n\n First appearing in print in 1887 (in A Study in Scarlet),";
        cout<<"\n\n the character's popularity became widespread with the first series of short stories in The Strand Magazine,";
        cout<<"\n\n beginning with 'A Scandal in Bohemia' in 1891.";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer is Sherlock Holmes.";
        cout<<"\n\n Sherlock Holmes is a fictional private detective created by British author Sir Arthur Conan Doyle.";
        cout<<"\n\n Referring to himself as a 'consulting detective' in the stories";
        cout<<"\n\n Holmes is known for his proficiency with observation, forensic science, and logical reasoning that borders on the fantastic,";
        cout<<"\n\n which he employs when investigating cases for a wide variety of clients, including Scotland Yard.";
        cout<<"\n\n First appearing in print in 1887 (in A Study in Scarlet),";
        cout<<"\n\n the character's popularity became widespread with the first series of short stories in The Strand Magazine,";
        cout<<"\n\n beginning with 'A Scandal in Bohemia' in 1891.";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
        system("PAUSE");
        kc();
    }

    system("cls");
    cout<<"\n\n Q6. Who said E=mc2?";
    cout<<"\n A. Satyendra Nath Bose \n\n B. Einstein \n\n C. Stephen Hawking \n\n D. C. V. Raman\n";
    cout<<"\n Answer: ";
    cin>>Ans;

     if(Ans=='b'||Ans=='B')
    {
        cout<<"\n\n your Answer is Right\n Einstein";
        cout<<"\n\n Special relativity is perhaps one of the least intuitive theories ever conceived in the history of science,";
        cout<<"\n\n yet it is central to physics.In E=mc2 Einstein concluded that mass(m) and kinetic energy(E) are equal,since the speed of light(c2) is constant.";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right is answer Einstein";
        cout<<"\n\n Special relativity is perhaps one of the least intuitive theories ever conceived in the history of science,";
        cout<<"\n\n yet it is central to physics.In E=mc2 Einstein concluded that mass(m) and kinetic energy(E) are equal,since the speed of light(c2) is constant.";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
         system("PAUSE");
         kc();
    }

    system("cls");
    cout<<"\n\n Q7. which famous leader's twitter account follows by one another country's big leader?";
    cout<<"\n A. Donald Trump  \n\n B. Vladimir Putin \n\n C. Narendra Modi \n\n D. Xi Jinping\n";
    cout<<"\n Answer: ";
    cin>>Ans;

    if(Ans=='c'||Ans=='C')
    {
        cout<<"\n\n your Answer is Right\n Narendra Modi";
        cout<<"\n\n An Indian Prime Minister Narendra Modi twitter account followed by a Japanese Prime Minister Shinzō Abe and also by his family.";
        cout<<"\n\n Narendra Modi only one Prime Minister is followed by one other Prime Minister on twitter.";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer is Narendra Modi";
        cout<<"\n\n An Indian Prime Minister Narendra Modi twitter account followed by a Japanese Prime Minister Shinzō Abe and also by his family.";
        cout<<"\n\n Narendra Modi only one Prime Minister is followed by one other Prime Minister on twitter.";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
        cout<<"\nBut your knowledgeable......";
         system("PAUSE");
         kc();
    }

    system("cls");
    cout<<"\n\n Q8. Give a name of movie in which A.R. Rahman's 'chaiyya chaiyya' song use as opening and closing credits song?";
    cout<<"\n A. Inside Man  \n\n B. Lord of war \n\n C. The Accidental Husband \n\n D. Lion\n";
    cout<<"\n Answer: ";
    cin>>Ans;

     if(Ans=='a'||Ans=='A')
    {
        cout<<"\n\n your Answer is Right\n Inside Man(2006)";
        cout<<"\n The Right answer  Inside Man in movie's song Rap sung by Pnjabi Mc and the song was featured in background in episode 13 of the American sitcom Outsourced also.";
        cout<<"\n The song was featured in the pilot episode of Smith. A cover of this song was performed in episode 5 of season 5 of CSI: Miami.";
        cout<<"\n\n 'Chaiyya Chaiyya' is an Indian song from the 1998 Hindi film Dil Se. directed by Mani Ratnam.";
        cout<<"\n\n The song was composed by A.R. Rahman, written by Gulzar, and sung by Sukhwinder Singh and Sapna Awasthi";
        cout<<"\n The song is based on Sufi music and Urdu poetry. The Tamil version is called 'Thaiyya Thaiyya', which was also popular among Tamils.";
        cout<<"\n 2002, the BBC World Service conducted an international poll to choose the ten most popular songs of all time. Around 7000 songs were selected from all over the world.";
        cout<<"\n According to the BBC, people from 155 countries voted 'Chaiyya Chaiyya' ninth in the top 10 songs";
        cout<<"\n A.R. Rahman's 'Bombay theme' in Lord of War(2005),'Rang De','Yaaro Yaarodi', & 'Swaasamae' in The Accidental Husband(2008) and 'take it easy Urvasi' in Lion(2016)";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n Wrong Answer....";
        cout<<"\n The Right answer is Inside Man(2006) in movie's song Rap sung by Pnjabi Mc and the song was featured in background in episode 13 of the American sitcom Outsourced also.";
        cout<<"\n The song was featured in the pilot episode of Smith. A cover of this song was performed in episode 5 of season 5 of CSI: Miami.";
        cout<<"\n 'Chaiyya Chaiyya' is an Indian song from the '1998' Hindi film Dil Se. directed by Mani Ratnam.";
        cout<<"\n The song was composed by A.R. Rahman, written by Gulzar, and sung by Sukhwinder Singh and Sapna Awasthi";
        cout<<"\n The song is based on Sufi music and Urdu poetry. The Tamil version is called 'Thaiyya Thaiyya', which was also popular among Tamils.";
        cout<<"\n 2002, the BBC World Service conducted an international poll to choose the ten most popular songs of all time. Around 7000 songs were selected from all over the world.";
        cout<<"\n According to the BBC, people from 155 countries voted 'Chaiyya Chaiyya' ninth in the top 10 songs";
        cout<<"\n A.R. Rahman's 'Bombay theme' in Lord of War(2005),'Rang De','Yaaro Yaarodi', & 'Swaasamae' in The Accidental Husband(2008) and 'take it easy Urvasi' in Lion(2016)";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
         system("PAUSE");
         kc();
    }

    cout<<"\ncongratulations! You got a full Score";
    return 0;
}

int game::second()
{
    int kc();
    static int score=0;
    char Ans;
    cout<<"\n\n here is your first question";
    cout<<"\n\n Q1. What's a roof of world?";
    cout<<"\n A.India \n\n B.Nepal \n\n C.Tibet  \n\n D.Bhutan\n";
    cout<<"\n Answer: ";
    cin>>Ans;
    if(Ans=='c'||Ans=='C')
    {
        cout<<"\n\n you Answer is Right\n Tibet is a roof of world";
        cout<<"\n\nTibetan Plateau stands over 3 miles above sea level and is surrounded by imposing mountain ranges that harbor the world's two highest summits, Mount Everest and K2 ";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer is Tibet";
        cout<<"\n\n Tibetan Plateau stands over 3 miles above sea level and is surrounded by imposing mountain ranges that harbor the world's two highest summits, Mount Everest and K2";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
         system("PAUSE");
         kc();
    }

    system("cls");
    cout<<"\n\n Q2. What is called as 'THE HOLY LAND' ?";
    cout<<"\n A.Kashi \n\n B.Vatican City \n\n C.Mecca  \n\n D.Jerusalem\n";
    cout<<"\n Answer: ";
    cin>>Ans;

    if(Ans=='d'||Ans=='D')
    {
        cout<<"\n\n you Answer is Right\n Jerusalem";
        cout<<"\n\n Jerusalem, a Middle Eastern city west of the Dead Sea, has been a place of pilgrimage and worship for Jews,";
        cout<<"\n\n Christians and Muslims since the biblical era.";
        cout<<"\n\n Its Old City has significant religious sites around the Temple Mount compound, including the Western Wall (sacred to Judaism), the Church of the Holy Sepulchre (a Christian pilgrimage site)";
        cout<<"\n\n and the Dome of the Rock (a 7th-century Islamic shrine with a gold dome).";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer Jerusalem";
        cout<<"\n\n Jerusalem, a Middle Eastern city west of the Dead Sea, has been a place of pilgrimage and worship for Jews,";
        cout<<"\n\n Christians and Muslims since the biblical era.";
        cout<<"\n\n Its Old City has significant religious sites around the Temple Mount compound, including the Western Wall (sacred to Judaism), the Church of the Holy Sepulchre (a Christian pilgrimage site)";
        cout<<"\n\n and the Dome of the Rock (a 7th-century Islamic shrine with a gold dome).";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"Game Over Try Next Time:";
         system("PAUSE");
         kc();
    }

    system("cls");
    cout<<"\n\n Q3. What is called as ' THE LAND OF THUNDERBOLT'?";
    cout<<"\n A.India \n\n B.Bhutan \n\n C.Canada  \n\n D.Arab\n";
    cout<<"\n Answer: ";
    cin>>Ans;

    if(Ans=='b'||Ans=='B')
    {
        cout<<"\n\n your Answer is Right\n Bhutan";
        cout<<"\n\n Bhutan is called Druk Yul - Land of Thunder Dragon. Because of the violent and large thunderstorms that whip down through the valleys from the Himalayas,";
        cout<<"\n\n Bhutan is known as the Land of Thunder Dragon. The sparkling light of thunderbolts were believed to be red fire of a dragon. ";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer is Bhutan";
        cout<<"\n\n Bhutan is called Druk Yul - Land of Thunder Dragon. Because of the violent and large thunderstorms that whip down through the valleys from the Himalayas,";
        cout<<"\n\n Bhutan is known as the Land of Thunder Dragon. The sparkling light of thunderbolts were believed to be red fire of a dragon. ";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
         system("PAUSE");
         kc();
    }

    system("cls");
    cout<<"\n\n Q4.What is called as THE WINDY CITY?";
    cout<<"\n A.New York \n\n B.Chicago \n\n C.Los Angeles   \n\n D.Miami\n";
    cout<<"\n Answer: ";
    cin>>Ans;

     if(Ans=='b'||Ans=='B')
    {
        cout<<"\n\n you Answer is Right\n Chicago";
        cout<<"\n\n The city is windy, according to most local legends, because of the hot air bellowing from politicians.”Dec 22, 2008";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer is  Chicago";
        cout<<"\n\n The city is windy, according to most local legends, because of the hot air bellowing from politicians.”Dec 22, 2008";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\n Game Over Try Next Time:";
        system("PAUSE");
         kc();
    }

    system("cls");
    cout<<"\n\n Q5.What is called as The Entertainment Capital of the World ?";
    cout<<"\n A.New York \n\n B.Chicago \n\n C.Los Angeles   \n\n D.Miami\n";
    cout<<"\n Answer: ";
    cin>>Ans;

    if(Ans=='C'||Ans=='c')
    {
        cout<<"\n\n your Answer is Right\n Los Angeles";
        cout<<"\n\n Los Angeles due to the presence of Hollywood, and the area's radio, television, music, and filmmaking, as well as the abundance of tourist and amusement attractions in the region.";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer is Los Angeles";
        cout<<"\n\n Los Angeles due to the presence of Hollywood, and the area's radio, television, music, and filmmaking, as well as the abundance of tourist and amusement attractions in the region.";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
         system("PAUSE");
         kc();
    }

    system("cls");
    cout<<"\n\n Q6.What is called as Magic City?";
    cout<<"\n A. New York \n\n B. Chicago \n\n C. Los Angeles   \n\n D. Miami\n";
    cout<<"\n Answer: ";
    cin>>Ans;

    if(Ans=='d'||Ans=='D')
    {
        cout<<"\n\n your Answer is Right\n Miami";
        cout<<"\n\n Miami is called the Magic City because it became a city seemingly overnight.Jul 2, 2015";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer is Miami";
        cout<<"\n\n Miami is called the Magic City because it became a city seemingly overnight.Jul 2, 2015";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
         system("PAUSE");
         kc();
    }

    system("cls");
    cout<<"\n\n Q7.On which Biopic movie 'The Man Who Knew Infinity' made?";
    cout<<"\n A. Srinivasa Ramanujan \n\n B. Stephen Hawking \n\n C. Einstein  \n\n D. C.V. Raman \n";
    cout<<"\n Answer: ";
    cin>>Ans;

    if(Ans=='a'||Ans=='A')
    {
        cout<<"\n\n your Answer is Right\n Srinivasa Ramanujan";
        cout<<"\n\n The Man Who Knew Infinity is a 2015 British biographical drama film about the Indian mathematician Srinivasa Ramanujan, based on the 1991 book of the same name by Robert Kanigel.";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer is Srinivasa Ramanujan";
        cout<<"\n\n The Man Who Knew Infinity is a 2015 British biographical drama film about the Indian mathematician Srinivasa Ramanujan, based on the 1991 book of the same name by Robert Kanigel.";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
        cout<<"\nBut your knowledgeable......";
         system("PAUSE");
         kc();
    }

    system("cls");
    cout<<"\n\n Q8.How many 'infinity Stones/Gems in MCU?";
    cout<<"\n A. 5 \n\n B. 6 \n\n C. 7  \n\n D. 8 \n";
    cout<<"\n Answer: ";
    cin>>Ans;

    if(Ans=='a'||Ans=='A')
    {
        cout<<"\nyour Answer is Right\n 6";
        cout<<"\nSoul  : -  Allows the user to steal, control, manipulate, and alter living and dead souls. The Soul Gem is also the gateway to an idyllic pocket universe. At full potential, the Soul Gem grants the user control over all life in the universe.";
        cout<<"\nTime  : -  Allows the user to see into the past and the future; stop, slow down, speed up or reverse the flow of time; time travel; change the past and the future; age and de-age beings; and trap people or entire universes in unending loops of time.";
        cout<<"At full potential, the Time Gem grants the user omniscience and total control over the past, present and future.";
        cout<<"\nSpace : -  Allows the user to exist in any location; move any object anywhere throughout reality; warp or rearrange space; teleport themselves and others any place the user can imagine; increase their speed";
        cout<<"\n and alter the distance between objects contrary to the laws of physics. At full potential, the Space Gem grants the user omnipresence.";
        cout<<"\nMind : -  Allows the user to enhance their mental and psionic abilities and access the thoughts and dreams of other beings. When backed by the Power Gem, the Mind Gem can access all minds in existence simultaneously.";
        cout<<"The Mind Gem is also the manifestation of the universal subconscious. At full potential, the Mind Gem grants the user omniscience.";
        cout<<"\nReality : - Allows the user to fulfill their wishes, even if the wish is in direct contradiction with scientific laws, and do things that would normally be impossible; and create any type of alternate reality the user wishes.";
        cout<<"When backed by the power of the other Gems, the Reality Gem allows the user to alter reality on a universal scale.";
        cout<<"\nPower: - Allows the user to access and manipulate all forms of energy; enhance their physical strength and durability; and boost the effects of the other five Gems. At full potential, the Power Gem grants the user omnipotence.";
        cout<<"\nAdditional Gems have appeared in crossover media and alternate universes outside the Marvel Universe. Name Ego,Rhythm & Build";
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer is 6";
        cout<<"\nSoul  : -  Allows the user to steal, control, manipulate, and alter living and dead souls. The Soul Gem is also the gateway to an idyllic pocket universe. At full potential, the Soul Gem grants the user control over all life in the universe.";
        cout<<"\nTime  : -  Allows the user to see into the past and the future; stop, slow down, speed up or reverse the flow of time; time travel; change the past and the future; age and de-age beings; and trap people or entire universes in unending loops of time.";
        cout<<"At full potential, the Time Gem grants the user omniscience and total control over the past, present and future.";
        cout<<"\nSpace : -  Allows the user to exist in any location; move any object anywhere throughout reality; warp or rearrange space; teleport themselves and others any place the user can imagine; increase their speed";
        cout<<"\n and alter the distance between objects contrary to the laws of physics. At full potential, the Space Gem grants the user omnipresence.";
        cout<<"\nMind : -  Allows the user to enhance their mental and psionic abilities and access the thoughts and dreams of other beings. When backed by the Power Gem, the Mind Gem can access all minds in existence simultaneously.";
        cout<<"The Mind Gem is also the manifestation of the universal subconscious. At full potential, the Mind Gem grants the user omniscience.";
        cout<<"\nReality : - Allows the user to fulfill their wishes, even if the wish is in direct contradiction with scientific laws, and do things that would normally be impossible; and create any type of alternate reality the user wishes.";
        cout<<"When backed by the power of the other Gems, the Reality Gem allows the user to alter reality on a universal scale.";
        cout<<"\nPower: - Allows the user to access and manipulate all forms of energy; enhance their physical strength and durability; and boost the effects of the other five Gems. At full potential, the Power Gem grants the user omnipotence.";
        cout<<"\nAdditional Gems have appeared in crossover media and alternate universes outside the Marvel Universe. Name Ego,Rhythm & Build";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
         system("PAUSE");
         kc();
    }

    cout<<"\ncongratulations! You got a full Score";
    return 0;
}

int game::third()
{
    int kc();
    static int score=0;
    char Ans;
    cout<<"\n\n here is your first question";
    cout<<"\n\n Q1. What's a manufacturing company of A6M Zero fighter Aircraft ";
    cout<<"\n\n A. Nissan  \n\n B. Toyota \n\n C. Mitsubishi \n\n D. Nippon\n";
    cout<<"\n Answer: ";
    cin>>Ans;
    if(Ans=='c'||Ans=='C')
    {
        cout<<"\n\n your Answer is Right\n The Mitsubishi A6M 'Zero' is a long-range fighter aircraft manufactured by Mitsubishi Aircraft Company, a part of Mitsubishi Heavy Industries,";
        cout<<"\n\n and operated by the Imperial Japanese Navy from 1940 to 1945.";
        cout<<"\n\n This aircraft used in attack of Pearl Harbor due to this attack USA involved in WW-II Actively.";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n Right answer is\n The Mitsubishi A6M 'Zero' is a long-range fighter aircraft manufactured by Mitsubishi Aircraft Company, a part of Mitsubishi Heavy Industries,";
        cout<<"\n\n and operated by the Imperial Japanese Navy from 1940 to 1945.";
        cout<<"\n\n This aircraft used in attack of Pearl Harbor due to this attack USA involved in WW-II Actively.";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
        system("PAUSE");
        kc();
    }

    system("cls");
    cout<<"\n\n Q.2What is called as The Empire State";
    cout<<"\n A.New York \n\n B.Chicago \n\n C.Los Angeles   \n\n D.Miami\n";
    cout<<"\n Answer: ";
    cin>>Ans;

    if(Ans=='a'||Ans=='A')
    {
        cout<<"\n\n your Answer is Right\n New York";
        cout<<"\n\n The U.S. state of New York has been known by many nicknames, most notably as the Empire State, adopted as late as the 19th century.";
        cout<<"\n\n This nickname has been incorporated into the names of several state buildings and events, and is commonly believed to refer to the state's wealth and resources.";
        cout<<"\n\n However, the origin of the term remains unclear.";
        cout<<"\n\n There are several theories on the origin of the name. Two of them involve George Washington,";
        cout<<"\n\n one credits aggressive trade routes, and another associates the nickname with New York exceeding Virginia in population.";
        cout<<"\n\n None has been proven. One commonly accepted tale says that, when Washington was given a full map of New York prior to the Battle of New York,";
        cout<<"\n\n he remarked on New York's natural geographic advantages, proclaiming New York the 'Seat of an Empire'.";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer New York";
        cout<<"\n\n The U.S. state of New York has been known by many nicknames, most notably as the Empire State, adopted as late as the 19th century.";
        cout<<"\n\n This nickname has been incorporated into the names of several state buildings and events, and is commonly believed to refer to the state's wealth and resources.";
        cout<<"\n\n However, the origin of the term remains unclear.";
        cout<<"\n\n There are several theories on the origin of the name. Two of them involve George Washington,";
        cout<<"\n\n one credits aggressive trade routes, and another associates the nickname with New York exceeding Virginia in population.";
        cout<<"\n\n None has been proven. One commonly accepted tale says that, when Washington was given a full map of New York prior to the Battle of New York,";
        cout<<"\n\n he remarked on New York's natural geographic advantages, proclaiming New York the 'Seat of an Empire'.";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
        system("PAUSE");
        kc();
    }

    system("cls");
    cout<<"\n\n Q3.Which first country found water on LUNA?";
    cout<<"\n A. USA \n\n B. Rasia \n\n C. India   \n\n D. Japan\n";
    cout<<"\n Answer: ";
    cin>>Ans;

    if(Ans=='c'||Ans=='C')
    {
        cout<<"\n\n your Answer is Right\n India";
        cout<<"\n\n On November 14, 2008, the Indian spacecraft Chandrayaan-1 released the Moon Impact Probe (MIP) that impacted Shackleton Crater,";
        cout<<"\n\n of the lunar south pole, at 20:31 on 14 November 2008 releasing subsurface debris that was analyzed for presence of water ice.";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right is answer India found water on LUNA";
        cout<<"\n\n On November 14, 2008, the Indian spacecraft Chandrayaan-1 released the Moon Impact Probe (MIP) that impacted Shackleton Crater,";
        cout<<"\n\n of the lunar south pole, at 20:31 on 14 November 2008 releasing subsurface debris that was analyzed for presence of water ice.";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
         kc();
        system("PAUSE");
    }


    system("cls");
    cout<<"\n\n Q4.Which Special Force motto is ' Few of the fearless '?";
    cout<<"\n A. US Navy SEALs \n\n B. MARCOS \n\n C. Special Air Service(SAS)  \n\n D. GIGN \n";
    cout<<"\n Answer: ";
    cin>>Ans;

    if(Ans=='b'||Ans=='B')
    {
        cout<<"\n\n your Answer is Right\n MARCOS is a Special Force have motto' Few of the fearless";
        cout<<"\n\n MARCOS, previously named as Marine Commando Force (MCF), is the special forces unit of the Indian Navy created for conducting special operations such as ";
        cout<<"\n amphibious warfare, close quarter combat, counter-terrorism, direct action, special reconnaissance, unconventional warfare, hostage rescue, personnel recovery,";
        cout<<"\ncombat search and rescue, asymmetric warfare, foreign internal defence, counterproliferation, amphibious reconnaissance including hydrographic reconnaissance.";
        cout<<"\n The MCF is specially organised, trained and equipped for the conduct of special operations in a maritime environment";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right is answer MARCOS";
        cout<<"\n\n MARCOS, previously named as Marine Commando Force (MCF), is the special forces unit of the Indian Navy created for conducting special operations such as ";
        cout<<"\n amphibious warfare, close quarter combat, counter-terrorism, direct action, special reconnaissance, unconventional warfare, hostage rescue, personnel recovery,";
        cout<<"\ncombat search and rescue, asymmetric warfare, foreign internal defence, counterproliferation, amphibious reconnaissance including hydrographic reconnaissance.";
        cout<<"\n The MCF is specially organised, trained and equipped for the conduct of special operations in a maritime environment";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
         kc();
        system("PAUSE");
    }

    system("cls");
    cout<<"\n\n Q5.who's the first President of INDIA?";
    cout<<"\n A. Jawaharlal Nehru  \n\n B. DR. Sarvepalli Radhakrishnan \n\n C. DR. B. R. Ambedkar   \n\n D. DR.Rajendra Prasad\n";
    cout<<"\n Answer: ";
    cin>>Ans;

    if(Ans=='D'||Ans=='d')
    {
        cout<<"\n\n your Answer is Right\n DR.Rajendra Prasad";
        cout<<"\n\n DR.Rajendra Prasad was the first President of India, in office from 1950 to 1962.";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer DR.Rajendra Prasad";
        cout<<"\n\n DR.Rajendra Prasad was the first President of India, in office from 1950 to 1962.";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
        system("PAUSE");
         kc();
    }


    system("cls");
    cout<<"\n\n Q6.Developer Company of GTA series Games?";
    cout<<"\n A. Grand Theft Auto  \n\n B. EA \n\n C. Ubisoft   \n\n D. Rockstar\n";
    cout<<"\n Answer: ";
    cin>>Ans;

    if(Ans=='d'||Ans=='D')
    {
        cout<<"\n\n your Answer is Right\n Rockstar is a Developer Company of GTA series Games";
        cout<<"\n\n GTA is an action-adventure video game series created by David Jones and Mike Dailly,";
        cout<<"\n\n the later titles of which were created by brothers Dan and Sam Houser, Leslie Benzies and Aaron Garbut.";
        cout<<"\n\n It is primarily developed by Rockstar North (formerly DMA Design), and published by Rockstar Games.";
        cout<<"\n\n The name of the series references the term used in the US for motor vehicle theft.";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer is Rockstar";
        cout<<"\n\n GTA is an action-adventure video game series created by David Jones and Mike Dailly,";
        cout<<"\n\n the later titles of which were created by brothers Dan and Sam Houser, Leslie Benzies and Aaron Garbut.";
        cout<<"\n\n It is primarily developed by Rockstar North (formerly DMA Design), and published by Rockstar Games.";
        cout<<"\n\n The name of the series references the term used in the US for motor vehicle theft.";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
         system("PAUSE");
         kc();
    }

    system("cls");
    cout<<"\n\n Q7.What's a name of first game in Battlefield Series Game ?";
    cout<<"\n A. Battlefield Bad company \n\n B. Battlefield 1 \n\n C. Battlefild 1942   \n\n D. Battlefield 1943\n";
    cout<<"\n Answer: ";
    cin>>Ans;

    if(Ans=='c'||Ans=='C')
    {
        cout<<"\n\n your Answer is Right\n Battlefild 1942 is a name of first game in Battlefield Game Series. ";
        cout<<"\n\n is a first-person shooter video game developed by Digital Illusions Creative Entertainment and published by Electronic Arts for Microsoft Windows and Mac OS X.";
        cout<<"\n\n The game can be played in single-player mode against the video game AI or in multiplayer mode against players on the Internet or in a local area network.";
        cout<<"\n\n It is a popular platform for mod developers, with a large number of released modifications that alter the gameplay and theme.";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer Battlefild 1942 ";
        cout<<"\n\n is a first-person shooter video game developed by Digital Illusions Creative Entertainment and published by Electronic Arts for Microsoft Windows and Mac OS X.";
        cout<<"\n\n The game can be played in single-player mode against the video game AI or in multiplayer mode against players on the Internet or in a local area network.";
        cout<<"\n\n It is a popular platform for mod developers, with a large number of released modifications that alter the gameplay and theme.";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\n Game Over Try Next Time:";
        cout<<"\n But your knowledgeable......";
         system("PAUSE");
         kc();
    }

    cout<<"\n\n Q7.What's a first product of Samsung ?";
    cout<<"\n A. TV \n\n B. Nuddles 1 \n\n C. Game Solver   \n\n D. Soda \n";
    cout<<"\n Answer: ";
    cin>>Ans;

    if(Ans=='b'||Ans=='B')
    {
        cout<<"\n\n your Answer is Right\n Nuddles is a first product of Samsung";
        cout<<"\n\n is a With only 30,000 won (about $27 USD), Lee Byung-chull started Samsung on March 1 in 1938, as a trading company based in Taegu, Korea.";
        cout<<"The small company of only 40 employees started as a grocery store, trading and exporting goods produced in and around the city,";
        cout<<"like dried Korean fish and vegetables, as well as its own noodles.";
        score=score+10;
        cout<<"\n\n your score is: "<<score<<"\n";
        system("PAUSE");
    }
    else
    {
        cout<<"\n\n Wrong Answer....";
        cout<<"\n\n The Right answer is Nuddles ";
        cout<<"\n\n is a With only 30,000 won (about $27 USD), Lee Byung-chull started Samsung on March 1 in 1938, as a trading company based in Taegu, Korea.";
        cout<<"The small company of only 40 employees started as a grocery store, trading and exporting goods produced in and around the city,";
        cout<<"like dried Korean fish and vegetables, as well as its own noodles.";
        cout<<"\n\n your score is: "<<score<<"\n";
        cout<<"\nGame Over Try Next Time:";
         system("PAUSE");
         kc();
    }

    cout<<"\n congratulations! You got a full Score";
    return 0;
}

int kc()
{
            game g1;
            system("cls");
            static int li;
            char name[20];
            static  char g;
            cout<<"\n\n Wlecome to Who Wants to Be a Millionaire";
            cout<<"\n\n I'm your host Race to play game please enter your name: ";
            cin>>name;
            ST:
            cout<<"\nEnter your Gender(F for Female & M for Male) : ";
            cin>>g;

            if(g=='F'||g=='f')
            {
                cout<<"\n\n Welcome Medam "<<name;
            }
            else if(g=='M'||g=='m')
            {
                cout<<"\n\n Welcome Mr. "<<name;
            }
            else
            {
                goto ST;
            }
          //  KBC g1(name);
            system("cls");
            srand(time(0));
            (rand()%6+1);
            li=(rand()%6+1);

            //cout<<"\n\n"<<li;
            cout<<name<<"\n\n let's know the rules";
            cout<<"\n\n You need to give a 8 Right to win game and become  A Millionaire";
            cout<<"\n\n Here is no time limits just choose your answer belong the below option.";
            cout<<"\n\n Please choose a,b,c,d or A,B,C,D only";
            cout<<"\n\n ya One more thing here you have not any life line";
			cout<<"\n\n correct one gives you 10 points wrong one no gives a point and GAME OVER\n";


            if(g=='F'||g=='f')
                {cout<<"\n\n So let's Start the game Medam "<<name<<"\n";}
            else
                {cout<<"\n\n So let's Start the game Mr. "<<name<<"\n";}
          //  system("PAUSE");

            switch(li)
            {
                case 1:
                system("PAUSE");
                g1.first();
                cout<<"\nYou become A Millionaire thanks you! for playing game";
                break;

                case 2:
                system("PAUSE");
                g1.second();
				cout<<"\nYou become A Millionaire thanks you! for playing game";
                break;

                case 3:
                system("PAUSE");
                g1.third();
				cout<<"\nYou become A Millionaire thanks you! for playing game";
                break;

                case 4:
                system("PAUSE");
                g1.first();
				cout<<"\nYou become A Millionaire thanks you! for playing game";
                break;

                case 5:
                system("PAUSE");
                g1.second();
				cout<<"\nYou become A Millionaire thanks you! for playing game";
                break;

                case 6:
                system("PAUSE");
                g1.third();
				cout<<"\nYou become A Millionaire thanks you! for playing game";
                break;

                default:
                    cout<<"not valid";
            }

    return 0;
}

int main()
{
    START:
    system("cls");
    kc();
    cout<<"\nJohn Carpenter became the first millionaire on the United States version of the game show Who Wants to Be a Millionaire on November 19, 1999. \n\n Did you know This!?.....";
    system("PAUSE");
    goto START;
    return 0;
}
