#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

// OPCODES enum
enum class OPCODES : uint8_t {
  LOAD = 3, 
  STORE = 4, 
  MOV = 5, 
  ADD = 6, 
  SUB = 7,
  MUL = 8, 
  DIV = 9,
  OUT = 10,
  HALT = 11,
  START = 12,
  MOV_STR = 13,
  PUTS = 14,
  JMP = 15,
  JNZ = 16,
  MOV_REG = 17,
  AND = 18,
  GETS_STR = 19,
  PSTR = 35,
  EXC = 36,
  CMP_STR = 37,
  GETS_INT = 38,
  SYS_CALL = 39,
  UNK = 0 
};

// Declare the opcode map as inline to avoid multiple definition errors
inline const std::unordered_map<std::string, OPCODES> opcodeMap = {
  {"LOAD", OPCODES::LOAD},
  {"STORE", OPCODES::STORE},
  {"MOV", OPCODES::MOV},
  {"ADD", OPCODES::ADD},
  {"SUB", OPCODES::SUB},
  {"MUL", OPCODES::MUL},
  {"DIV", OPCODES::DIV},
  {"OUT", OPCODES::OUT},
  {"HALT", OPCODES::HALT},
  {"START", OPCODES::START},
  {"MOV_STR", OPCODES::MOV_STR},
  {"PUTS", OPCODES::PUTS},
  {"UNK", OPCODES::UNK},
  {"JMP", OPCODES::JMP},
  {"JNZ", OPCODES::JNZ},
  {"MOV_REG", OPCODES::MOV_REG},
  {"AND", OPCODES::AND},
  {"GETS_STR", OPCODES::GETS_STR},
  {"PSTR", OPCODES::PSTR},
  {"EXC", OPCODES::EXC},
  {"CMP_STR", OPCODES::CMP_STR},
  {"GETS_INT", OPCODES::GETS_INT},
};

uint8_t get_opcode_from_string(const std::string& s);

bool is_opcode(const std::string& token);
