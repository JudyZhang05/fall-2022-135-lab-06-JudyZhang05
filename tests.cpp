#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "caeser.h"
#include "vigenere.h"
#include "decrypt.h"

//#include "funcs.h"

// add your tests here

TEST_CASE("Caesar"){
    CHECK(encryptCaesar("HAPPY BIRTHDAY!!!", 25) == "GZOOX AHQSGCZX!!!\n");
    CHECK(encryptCaesar("pleasure meeting you", 5) == "uqjfxzwj rjjynsl dtz\n");
    CHECK(encryptCaesar("NO way!!", 35) == "WX fjh!!\n");
    CHECK(encryptCaesar("goodbye, WORLD?", 20) == "aiixvsy, QILFX?\n");
    CHECK(encryptCaesar("money money money can't you see", -4) == "ikjau ikjau ikjau usj'p ukq oaa\n");
}

TEST_CASE("Vigenere"){
    CHECK(encryptVigenere("Somewhere Only We Know", "keane") == "Csmrarirr Sxpy Ji Uroj\n");
    CHECK(encryptVigenere("~DREAMING of a better PLACE^^", "highup") == "~KZKHGXUO um u qlbzll ESIIL^^\n");
    CHECK(encryptVigenere("Why hello there!", "hi") == "Dpf pltsw aplzl!\n");
    CHECK(encryptVigenere("Zuxo qa g ftjbmtpt.", "unless") == "This is a sentence.\n");
    CHECK(encryptVigenere("tell me when", "hello") == "aiww al aspb\n");
}

TEST_CASE("Decrypt"){
    CHECK(decipher("sdkk ld VGX?!", 25) == "tell me WHY?!");
    CHECK(decipher("You currently have $3.24 in your account", 3) == "Vlr zroobkqiv exsb $3.24 fk vlro xzzlrkq");
    CHECK(decipher("Hello World!", -1) == "Ifmmp Xpsme!");
    CHECK(decryptVigenere("aiww al aspb", "hello") == "tell me when");
    CHECK(decryptVigenere("This is a sentence.", "unless") == "Zuxo qa g ftjbmtpt.");
    CHECK(decryptVigenere("Dpf pltsw aplzl!", "hi") == "Why hello there!");
}
