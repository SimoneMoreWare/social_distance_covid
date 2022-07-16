# social_distance_covid
Arduino: costruire un rilevatore distanziamento sociale

Il mondo di Arduino è pieno di maker che ogni giorno creano progetti davvero utili e interessanti alla società. 

Il progetto in questione è basato su Arduino ed utilizza un sensore di distanza ad ultrasuoni HC-SR04 e nel momento in cui la distanza che frappone colui che indossa il dispositivo a colui che si trova di fronte a lui è superiore al limite di distanza imposto si accende un LED verde, in caso contrario (ossia la distanza che separa i due è minore al limite di distanza imposto) si accenderà un LED rosso.

Il sensore in questione è molto preciso, ma come visto in un articolo che approfondisce il funzionamento del sensore (clicca qui per maggiori informazioni), vi sono alcuni oggetti, come i superfici morbide (peluche), che assorbono le onde sonore impedendo la corretta misurazione.

I materiali utilizzati per la creazione di questo progetto sono i seguenti:

Sensore di distanza HC-SR04
Arduino Pro Mini ATMEGA328P
DC-DC Voltage Booster Converter
1X LED verde 5mm
1x LED rosso 5mm
2x Resistori da 220 ohm
FTDI USB TTL Serial Adapter
Lipo Battery 3.7v

![alt text](https://i0.wp.com/www.moreware.org/wp/wp-content/uploads/2020/12/FJV9YPJKI972P6I.jpg?w=1024&ssl=1)

Gli strumenti da utilizzare sono i seguenti:

Saldatore
Multimetro
Breadboard (opzionale)
Stampante 3d (è possibile richiedere un service esterno)

Ecco qui i link per poter scaricare i progetti in 3D.

[Lattering.stl](https://content.instructables.com/ORIG/FH9/HQ0M/KI972P9B/FH9HQ0MKI972P9B.stl)
[Case.stl](https://content.instructables.com/ORIG/F9K/KG7N/KI972P9C/F9KKG7NKI972P9C.stl)
[Lid.stl](https://content.instructables.com/ORIG/FJX/3DG0/KI972P9D/FJX3DG0KI972P9D.stl)

![alt text](https://i0.wp.com/www.moreware.org/wp/wp-content/uploads/2020/12/F7G0D1DKI972P7T.png?resize=150%2C150&ssl=1)

Il diagramma di collegamento è il seguente:

![alt text](https://i0.wp.com/www.moreware.org/wp/wp-content/uploads/2020/12/FKEOOENKI972P7S.png?w=1024&ssl=1)

Ecco un immagine del progetto concluso

![alt text](https://i0.wp.com/www.moreware.org/wp/wp-content/uploads/2020/12/FZFQFV9KI972P6W.jpg?w=1024&ssl=1)

Il codice da utilizzare per il coretto funzionamento è il [seguente](https://github.com/SimoneMoreWare/social_distance_covid/blob/main/distance.ino):





