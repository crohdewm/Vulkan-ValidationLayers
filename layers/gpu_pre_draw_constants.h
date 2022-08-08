// Copyright (c) 2021-2022 The Khronos Group Inc.
// Copyright (c) 2021-2022 Valve Corporation
// Copyright (c) 2021-2022 LunarG, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// * Author: Tony Barbour <tony@lunarg.com>
//
// Values used in the pre draw validation shader and then mapped and checked in gpu_validation

#ifndef GPU_PRE_DRAW_CONSTANTS
#define GPU_PRE_DRAW_CONSTANTS

// values match those found in SPIRV-Tools instrument.hpp file.
#define _kInstErrorMax 7
#define _kInstValidationOutError 7
// The values in instrument.hpp are for the spirv-opt pass but these values are for the
// internal gpu_shaders in the VVL. GLSL can't understand .hpp header file so these
// are defined internally here extending the max values
#define _kInstErrorPreDrawValidate _kInstErrorMax + 1
#define _kPreDrawValidateSubError _kInstValidationOutError + 1
// debug buffer is memset to 0 so need to start at index 1
#define pre_draw_count_exceeds_bufsize_error 1
#define pre_draw_count_exceeds_limit_error 2
#define pre_draw_first_instance_error 3
#endif
