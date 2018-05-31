#include <QVector>

#ifndef CONSTANTS_H
#define CONSTANTS_H

#define TREE "/Users/macbookair/Documents/qt_projects/idiom_io/img/tree.png"
#define CROSS "/Users/macbookair/Documents/qt_projects/idiom_io/img/x.png"
#define FULL_HEART "/Users/macbookair/Documents/qt_projects/idiom_io/img/full_heart.png"
#define EMPTY_HEART "/Users/macbookair/Documents/qt_projects/idiom_io/img/empty_heart.png"
#define IT "/Users/macbookair/Documents/qt_projects/idiom_io/img/flags/it.png"
#define ES "/Users/macbookair/Documents/qt_projects/idiom_io/img/flags/es.png"
#define FR "/Users/macbookair/Documents/qt_projects/idiom_io/img/flags/fr.png"
#define DE "/Users/macbookair/Documents/qt_projects/idiom_io/img/flags/de.png"

const QVector<QString> BASIC_IT_TRANSLATION_TASKS({
    "Hello, my name is ...",
    "See you soon!",
    "Nice to meet you.",
    "Thank you very much.",
    "I am twenty years old.",
    "I come from the city.",
    "What time is it?",
    "How's the weather?",
    "Do you have any hobbies?",
    "Can you please repeat?",
    "Learning is fun!",
    "What a sunny day!",
    "I am ready to go.",
    "Finish your lunch!",
    "What do you like?",
    "Are you available tomorrow?",
    "Can you make me a sandwich, please?",
    "I like tea and coffee.",
    "My house is big.",
    "I love animals!"
});

const QVector<QVector<QString>> BASIC_IT_TRANSLATION_SOLUTIONS(

    {

            {"Ciao il mio nome è", "Salve il mio nome è"},
            {"A presto"},
            {"Molte grazie", "Grazie molte", "Grazie mille", "Mille grazie"},
            {"Io ho venti anni", "Ho venti anni"},
            {"Io vengo dalla città", "Vengo dalla città"},
            {"Che ora è", "Che ore sono"},
            {"Com'è il tempo", "Com'è il meteo", "Che tempo fa", "Che meteo fa"},
            {"Hai dei passatempi", "Hai degli hobby", "Hai delle passioni"},
            {"Puoi ripetere per favore", "Può ripetere per favore"},
            {"Imparare è divertente"},
            {"Che giornata soleggiata", "Che giornata di sole"},
            {"Sono pronto ad andare", "Sono pronta ad andare", "Sono pronto a partire", "Sono pronta a partire"},
            {"Finisici il tuo pranzo", "Finite il vostro pranzo"},
            {"Che cosa ti piace?", "Che cosa vi piace?"},
            {"Sei libero domani", "Sei libera domani", "Sei disponibile domani"},
            {"Puoi famri un panino per favore", "Potete farmi un panino per favore"},
            {"Mi piacciono il tè ed il caffè", "Mi piace il tè e mi piace il caffè", "Mi piacciono tè e caffè",
            "Mi piacciono il tè e il caffè"},
            {"La mia casa è grande", "Casa mia è grande"},
            {"Amo gli animali"}

    }

);

const QVector<QString> BASIC_IT_MULTIPLE_CHOICE_TASKS({
    "A Boat",
    "A River",
    "A Bird",
    "The Sea",
    "The Beach",
    "The Stars",
    "A Human",
    "A Car",
    "My Pants",
    "A Dog",
    "The Safe",
    "The Sphere",
    "Your Uncle",
    "My Ankle",
    "The Space",
    "My Life",
    "It's Strange",
    "That's Magic",
    "Goodbye",
    "He's Honest"
});

const QVector<QVector<QString>> BASIC_IT_MULTIPLE_CHOICE_OPTIONS(

    {

            {"Una Nave", "Un Vascello", "Una Barca", "Un Porto"},
            {"Un Ruscello", "Il Mare", "Un Oceano", "Un Fiume"},
            {"Un Uccello", "Un Animale", "Un Rettile", "Un Pesce"},
            {"Un Mare", "Al Mare", "Il Mare", "Del Mare"},
            {"Una Spiaggia", "La Spiaggia", "Che Spiaggia", "Un Spiaggio"},
            {"La Stella", "Delle Stelle", "Una Stella", "Le Stelle"},
            {"Una Donna", "Un Umano", "Un Uomo", "Un Babbuino"},
            {"Una Moto", "Un'Automobile", "Un Motore", "Un Autotreno"},
            {"I Miei Pantaloni", "I Pantaloni", "I Suoi Pantaloni", "Dei Pantaloni"},
            {"Un Lupo", "Un Gatto", "Un Canto", "Un Cane"},
            {"La Guardia", "La Maglia", "Il Lucchetto", "La Cassaforte"},
            {"La Sfoglia", "La Sfinge", "La Sfumatura", "La Sfera"},
            {"Tuo Nonno", "Tuo Zio", "Tuo Suocero", "Tuo Nipote"},
            {"La Mia Gamba", "La Mia Caviglia", "Il Mio Polpaccio", "La Mia Mano"},
            {"Lo Spaccio", "Lo Spazio", "Lo Spiglio", "Lo Spulcio"},
            {"La Mia Vita", "La Mia Linfa", "Il Mio Momento", "La Mia Lenza"},
            {"È Stupido", "È Strano", "È Sotto", "È Rotto"},
            {"Quella è Meglio", "Quella è Magia", "Quella è Maestria", "Quella è Media"},
            {"Ciao", "A Domani", "A Dopo", "Arrivederci"},
            {"Lui è Molesto", "Lui è Silvestro", "Lui è Maldestro", "Lui è Onesto"}
    }

);

const QVector<QString> BASIC_IT_GAP_FILL_TASKS({
    "Ciao, puoi ____ a muovere queste cose ____?",
    "Il mio ____ è Luigi e sono venuto per ____.",
    "Buddha era un ____, non un ____.",
    "Mi ____ la marmellata con la ____.",
    "Sono sempre ____. Ora vado a ____.",
    "Non ho ____ di lavorare. Che ____!",
    "Mi sento ____. Ho bisogno di chiamare un ____.",
    "Cosa fai? Non vedi che sto ____? ____ tutto!",
    "A volte ____ funziona la TV e dobbiamo ____ il tecnico",
    "Come fai a ____ così bene? Che ____!",
    "Che ____ ci sono? Hai ____ il pacco?",
    "Sono nuovo. Vengo dalla ____, non è ____ da qui.",
    "Per ____, aiutami ad ____ questo tavolo.",
    "Che cosa fai ____. ____?",
    "Quando ____, puoi ____ anche una coca cola?",
    "Se ti ____, dovresti ____ di più.",
    "Sono quello che ____. ____ e basta!",
    "Ho tanta ____! Che si ____?",
    "La ____ non è un'____!",
    "Mandami una ____, ____ vedere!"
});

const QVector<QVector<QString>> BASIC_IT_FIRST_GAP_FILL_OPTIONS(

        {

            {"aiutare", "aiutarmi", "aiutarli", "aiuto"},
            {"cognome", "soprannome", "nome", "numero"},
            {"dio", "animale", "uomo", "uccello"},
            {"nutro", "vedo", "bevo", "piace"},
            {"stanco", "morto", "sonno", "lungo"},
            {"sete", "olio", "voglia", "tanta"},
            {"bene", "male", "rene", "sale"},
            {"lavando", "pulendo", "mangiando", "sorridendo"},
            {"no", "non", "se", "quando"},
            {"stonare", "mangiare", "ballare", "bere"},
            {"novità", "velleità", "sommità", "età"},
            {"vecchia", "storia", "città", "giostra"},
            {"favore", "onore", "dovere", "sostenere"},
            {"ieri", "sera", "domani", "mattina"},
            {"sei", "vai", "resti", "vedi"},
            {"senti", "lamenti", "metti", "piace"},
            {"lotto", "lordo", "sono", "metto"},
            {"sete", "fame", "voglia", "noia"},
            {"banana", "sottana", "matematica", "nostrana"},
            {"nota", "rosa", "fotografia", "maglietta"}


        }

);

const QVector<QVector<QString>> BASIC_IT_SECOND_GAP_FILL_OPTIONS(

        {

            {"dove", "sotto", "laggiù", "ovunque"},
            {"pranzare", "vedere", "essere", "ridere"},
            {"uomo", "dio", "uccello", "animale"},
            {"strada", "fragola", "noia", "sorda"},
            {"sonno", "dormire", "meditare", "lavorare"},
            {"serata", "voglia", "noia", "meglio"},
            {"architetto", "ingegnere", "bidello", "dottore"},
            {"sudi", "lavi", "sporchi", "sogni"},
            {"vivere", "avere", "aspettare", "mangiare"},
            {"male", "bene", "cattivo", "bravo"},
            {"rotto", "messo", "ricevuto", "annoiato"},
            {"nuova", "alta", "lontana", "vecchia"},
            {"alzare", "andare", "annuire", "aspirare"},
            {"usciamo", "mettiamo", "guardiamo", "sognamo"},
            {"vedere", "avere", "comprare", "scartare"},
            {"ascoltarlo", "sondarlo", "baciarlo", "scortarlo"},
            {"virgola", "accento", "punto", "parco"},
            {"mangia", "trova", "somma", "prova"},
            {"opinione", "idea", "eleganza", "abbondanza"},
            {"voglio", "sogno", "passo", "sono"}

        }

);

const QVector<QVector<QString>> BASIC_IT_PAIR_TASKS(

        {

            {"Ciao", "Goodbye", "Hello", "Attenzione", "Casa", "Sure", "Certo", "Arrivederci", "Uccello", "Attention", "Bird",
             "House"},

        }

);

#endif // CONSTANTS_H
