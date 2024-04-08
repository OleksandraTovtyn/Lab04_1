#include "Header.h"

int main() {
    
    Hrebetni* creatures[] = {
      new Sobaky(),
      new Koty(),
      new Liudy(),
      new Vorony()
    };

    for (int i = 0; i < 4; i++) {
        creatures[i]->opis();
    }

    return 0;
}
