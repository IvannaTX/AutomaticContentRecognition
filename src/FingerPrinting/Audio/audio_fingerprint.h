#ifndef AUDIO_FINGERPRINT_H
#define AUDIO_FINGERPRINT_H

#include <string>
#include <vector>

class AudioFingerprint {
public:
    std::string extractFingerprint(const std::string& audioFile);
};

#endif // AUDIO_FINGERPRINT_H
