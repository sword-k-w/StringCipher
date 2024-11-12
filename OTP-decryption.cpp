//
// Created by sword on 2024/11/10.
//

#include <OTP.h>
#include <cassert>
#include <iostream>

OTP_Decryption::OTP_Decryption() {
  length_ = 0;
  key_ = {};
}

OTP_Decryption::OTP_Decryption(const size_t &length, const std::vector<bool> &key) {
  length_ = length;
  key_ = key;
}

std::vector<bool> OTP_Decryption::Decrypt(const std::vector<bool> &ciphertext) {
  assert(length_ == ciphertext.size());
  std::vector<bool> message(length_);
  for (int i = 0; i < length_; ++i) {
    message[i] = ciphertext[i] ^ key_[i];
  }
  return message;
}


