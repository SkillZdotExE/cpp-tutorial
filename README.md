Ein kleines C++ Tutorial für die 5AHEL.

# Vorbereitung

Du brauchst:

## Visual Studio Code

Zu finden [hier](https://code.visualstudio.com/download).

## Einen C++-Compiler (am besten gcc)

Um herauszufinden, ob du schon einen hast, gib folgenden Befehl in die PowerShell ein:

    g++ --version

Solltest du es nicht installiert haben, kannst du es mit zwei Befehlen installieren:

Öffne dazu die Windows PowerShell als Administrator.

Dieser Befehl installiert den Paketmanager chocolatey:

    Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))


Dieser Befehl installiert die neuste MinGW Installation (darin gcc):

    choco install mingw

Überprüfe danach, ob alles funktioniert hat und g++ verfügbar ist:

    g++ --version

Falls nicht, starte PowerShell und/ oder VS Code neu.

# Kompilieren von Programmen

Wenn du in VS Code `strg+ö` drückst, öffnest du die Konsole. Dort steht der pfad, in dem du dich gerade mit der Konsole befindest, das schaut z.B. so aus:

    C:\repos\cpp-tutorial> _

Mit dem Befehl `cd` kannst du Ordner wechseln (**c**hange **d**irectory):

    C:\repos\cpp-tutorial> cd 01_variables
    C:\repos\cpp-tutorial\01_variables> _

Möchtest du einen Ordner weiter nach oben, benutze `cd ..`:

    C:\repos\cpp-tutorial\01_variables> cd ..
    C:\repos\cpp-tutorial> _

Bist du in einem Ordner mit einer .cpp-Datei, kannst du sie mit g++ kompilieren:

    C:\repos\cpp-tutorial\01_variables> g++ main.cpp

Dann erstellt g++, sofern du keine Fehler bekommst, die Datei a.exe. Du kannst sie so ausführen:

    C:\repos\cpp-tutorial\01_variables> ./a

Damit bist du bereit!




