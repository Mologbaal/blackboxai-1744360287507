#include <iostream>
#include "voice_recognition.h"
#include "emotion_analysis.h"
#include "api_communication.h"
#include "text_to_speech.h"

int main() {
    std::string recognizedText = startVoiceRecognition();
    std::string emotionTag = analyzeEmotion();
    sendToDeepSeek(recognizedText, emotionTag);
    std::string response = "Да, конечно! " + emotionTag; // Placeholder response
    speakResponse(response);
    return 0;
}
