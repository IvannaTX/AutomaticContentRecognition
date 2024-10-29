#include <iostream>
#include "audio_fingerprint.h"

int main() {
    AudioFingerprint audioFingerprinter;
    std::string audioFile = "path/to/your/audiofile.mp3";
    
    std::string fingerprint = audioFingerprinter.extractFingerprint(audioFile);
    std::cout << "Extracted fingerprint: " << fingerprint << std::endl;

    return 0;
}
