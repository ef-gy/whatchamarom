#if !defined(POKEMON_RANDOMISER_CHARACTER_MAP_H)
#define POKEMON_RANDOMISER_CHARACTER_MAP_H

#include <map>

namespace pokemon {
namespace text {
namespace bgry {

/* The BGRY section used Bulbapedia extensively for character translations.
 *
 * See this link for ALL the detail:
 * https://bulbapedia.bulbagarden.net/wiki/Character_encoding_in_Generation_I
 */

static const constexpr uint8_t end = 0x50;

static std::map<uint8_t, std::string> english({
    // NULL
    {0x00, std::string()},  // yes I know that's the same as "", but I still
                            // wanted it to stick out. :)

    // 0x01 - 0xa7: non-text data

    // 0xa9 - 0x5f: dialogue control codes
    {0x4F, " "},
    {0x57, "#"},
    {0x51, "*"},
    {0x52, "A1"},
    {0x53, "A2"},
    {0x54, "POKé"},
    {0x55, "+"},
    {0x58, "$"},

    // 0x60 - 0x7f: mirror characters
    {0x75, "…"},
    {0x7F, " "},

    // 0x80 - 0xbf: normal text characters
    {0x80, "A"},
    {0x81, "B"},
    {0x82, "C"},
    {0x83, "D"},
    {0x84, "E"},
    {0x85, "F"},
    {0x86, "G"},
    {0x87, "H"},
    {0x88, "I"},
    {0x89, "J"},
    {0x8A, "K"},
    {0x8B, "L"},
    {0x8C, "M"},
    {0x8D, "N"},
    {0x8E, "O"},
    {0x8F, "P"},
    {0x90, "Q"},
    {0x91, "R"},
    {0x92, "S"},
    {0x93, "T"},
    {0x94, "U"},
    {0x95, "V"},
    {0x96, "W"},
    {0x97, "X"},
    {0x98, "Y"},
    {0x99, "Z"},
    {0x9A, "("},
    {0x9B, ")"},
    {0x9C, ":"},
    {0x9D, ";"},
    {0x9E, "["},
    {0x9F, "]"},
    {0xA0, "a"},
    {0xA1, "b"},
    {0xA2, "c"},
    {0xA3, "d"},
    {0xA4, "e"},
    {0xA5, "f"},
    {0xA6, "g"},
    {0xA7, "h"},
    {0xA8, "i"},
    {0xA9, "j"},
    {0xAA, "k"},
    {0xAB, "l"},
    {0xAC, "m"},
    {0xAD, "n"},
    {0xAE, "o"},
    {0xAF, "p"},
    {0xB0, "q"},
    {0xB1, "r"},
    {0xB2, "s"},
    {0xB3, "t"},
    {0xB4, "u"},
    {0xB5, "v"},
    {0xB6, "w"},
    {0xB7, "x"},
    {0xB8, "y"},
    {0xB9, "z"},
    {0xBA, "é"},
    {0xBB, "'d"},
    {0xBC, "'l"},
    {0xBD, "'s"},
    {0xBE, "'t"},
    {0xBF, "'v"},

    // 0xc0 - 0xdf: non-text data

    // 0xe0 - 0xff: numbers and special symbols
    {0xE0, "'"},
    {0xE1, "PK"},
    {0xE2, "MN"},
    {0xE3, "-"},
    {0xE4, "'r"},
    {0xE5, "'m"},
    {0xE6, "?"},
    {0xE7, "!"},
    {0xE8, "."},
    {0xED, "→"},
    {0xEE, "↓"},
    {0xEF, "♂"},
    {0xF0, "¥"},
    {0xF1, "×"},
    {0xF3, "/"},
    {0xF4, ","},
    {0xF5, "♀"},
    {0xF6, "0"},
    {0xF7, "1"},
    {0xF8, "2"},
    {0xF9, "3"},
    {0xFA, "4"},
    {0xFB, "5"},
    {0xFC, "6"},
    {0xFD, "7"},
    {0xFE, "8"},
    {0xFF, "9"},
});

}  // namespace bgry
}  // namespace text
}  // namespace pokemon

#endif
