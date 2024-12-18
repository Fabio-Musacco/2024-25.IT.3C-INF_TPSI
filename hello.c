#include <stdio.h>

// Funzione per simulare la porta NOT
int NOT(int a) {
    // Il valore di ritorno della funzione
    return 1 - a;
}

// Funzione per simulare la porta AND
int AND(int a, int B) {
    // Il valore di ritorno della funzione
    // TODO aggiungere l'espressione matematica per soddisfare la porta AND
    return a * B;
}

// Funzione per simulare la porta OR
int OR(int a, int B) {
    // Il valore di ritorno della funzione
    // TODO aggiungere l'espressione matematica per soddisfare la porta OR
    return (a+B)-(a*B);
}

int TAUTOLOGIA(int a, int B, int c, int d, int e, int f) {
    // Il valore di ritorno della funzione
    // TODO aggiungere l'espressione matematica per soddisfare la porta OR
    return ((a-1)+a)*((B-1)+B)*((c-1)+c)*((d-1)+d)*((e-1)+e)*((f-1)+f);
}

int main() {
    // Dichiara una variabile
    int A, B, c, d, e, f;

    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di A (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &A);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore A: %d\n", A);

    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di B (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &B);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore B: %d\n", B);

      // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di c (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &c);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore c: %d\n", c);

      // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di d (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &d);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore d: %d\n", d);

      // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di e (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &e);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore e: %d\n", e);

      // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di f (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &f);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore f: %d\n", f);

    if (A != 0 && A != 1 && B != 0 && B != 1 && c != 0 && c != 1 && d != 0 && d != 1 && e != 0 && e != 1 && f != 0 && != 1) {
        printf("I valori inseriti non sono 1 o 0\n");
    } else {
        // Procediamo con l'esecuzione solo se il numero è 1 o 0
        printf("I valori inseriti sono 1 o 0\n");

        // Esempio di porta NOT
        printf("Il valore di A viene trasformato da una porta NOT\n");
        int notA = NOT(A);
        printf("Il valore di uscita della porta NOT è: %d\n", notA);

        // Esempio di porta AND
        printf("I valori di A e B vengono trasformati da una porta AND\n");
        int andAB = AND(A, B);
        printf("Il valore di uscita della porta AND è: %d\n", andAB);

        // Esempio di porta OR
        printf("I valori di A e B vengono trasformati da una porta OR\n");
        int orAB = OR(A, B);
        printf("Il valore di uscita della porta OR è: %d\n", orAB);

        int orResult = OR(A, B);
        int andResult = AND(A, orResult);
        int notResult = NOT(andResult);

        printf("Il valore di uscita di NOT(AND(A, OR(A, B))) è: %d\n", notResult);

        printf("I valori di A, B, C, D, E e F vengono trasformati dalla tautologia\n");
        int tautologiaABCDEF = tautologia(A, B, c, d, e, f);
        printf("Il valore di uscita della tautologia: %d\n", tautologiaABCDEF);

    }
    printf("\n\n");
}