// SPDX-FileCopyrightText: 2023 yuzu Emulator Project
// SPDX-FileCopyrightText: 2024 suyu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

package dev.suyu.suyu_emu.model

enum class GameVerificationResult(val int: Int) {
    Success(0),
    Failed(1),
    NotImplemented(2);

    companion object {
        fun from(int: Int): GameVerificationResult =
            entries.firstOrNull { it.int == int } ?: Success
    }
}
