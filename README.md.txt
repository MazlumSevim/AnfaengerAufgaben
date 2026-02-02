# AnfängerAufgaben (C) – Übungsprojekt

Dieses Repository enthält ein kleines **Übungsprojekt in C** (erstellt mit **Code::Blocks**), das mehrere grundlegende Programmieraufgaben abdeckt.  
Alle Aufgaben werden in `main.c` nacheinander ausgeführt und teilweise über Eingaben im Terminal gesteuert.

## Inhalte / Aufgaben
Das Programm beinhaltet folgende Übungen:

1. **Hallo-Welt-Programm** – Ausgabe von „Hello World“
2. **Einfache Addition** – zwei Zahlen einlesen und Summe ausgeben
3. **Gerade oder ungerade** – Zahl prüfen und Ergebnis ausgeben
4. **for-Schleife** – Zahlen von 1 bis 10 ausgeben
5. **Funktion (Quadrat)** – Zahl einlesen und Quadrat berechnen (`Quadrat()`)
6. **Array + Schleife** – Array durchlaufen und Werte ausgeben
7. **String-Manipulation** – Wort einlesen und in **Großbuchstaben** umwandeln (`toupper`)
8. **Struct als “einfache Klasse”** – Struct `Auto` mit Marke & Geschwindigkeit

## Projektstruktur
- `main.c` – Quellcode (alle Aufgaben)
- `AnfaengerAufgaben.cbp` / `.depend` / `.layout` – Code::Blocks Projektdateien
- `bin/` – kompilierte Ausgabe (optional)
- `obj/` – Build-Artefakte (optional)

> Hinweis: Für GitHub ist es üblich, `bin/` und `obj/` nicht zu versionieren (siehe .gitignore unten).

## Voraussetzungen
- Ein C-Compiler (z. B. **GCC** / **MinGW**)
- Optional: **Code::Blocks**

## Ausführen mit Code::Blocks
1. Projekt öffnen: `AnfaengerAufgaben.cbp`
2. **Build & Run** starten
3. Eingaben im Terminal folgen

## Kompilieren & Ausführen (Konsole)
Im Projektordner:

### Windows (MinGW)
```bash
gcc main.c -o AnfaengerAufgaben.exe
AnfaengerAufgaben.exe
