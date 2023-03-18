/*
 * Copyright (c) 2023, Elisée Maurer <elisee@sparklinlabs.com>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibWeb/Bindings/PlatformObject.h>
#include <LibWeb/DOM/EventTarget.h>
#include <LibWeb/Forward.h>

namespace Web::WebAudio {

class AudioContext final : public BaseAudioContext {
    WEB_PLATFORM_OBJECT(AudioContext, BaseAudioContext);

public:
}

}