#pragma once

#include <stddef.h>

#include <vector>

std::vector<float> afc_decode(const void* data, size_t size, bool small_frames);
