// SPDX-FileCopyrightText: Copyright 2024 suyu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include "video_core/renderer_metal/mtl_device.h"

namespace Metal {

Device::Device() {
    device = MTL::CreateSystemDefaultDevice();
    if (!device) {
        throw std::runtime_error("Failed to create Metal device");
    }
    command_queue = device->newCommandQueue();
    if (!command_queue) {
        throw std::runtime_error("Failed to create Metal command queue");
    }
}

Device::~Device() {
    command_queue->release();
    device->release();
}

} // namespace Metal
