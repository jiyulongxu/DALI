// Copyright (c) 2019, NVIDIA CORPORATION. All rights reserved.
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

#ifndef DALI_PIPELINE_OPERATORS_DECODER_HOST_DECODER_RANDOM_CROP_H_
#define DALI_PIPELINE_OPERATORS_DECODER_HOST_DECODER_RANDOM_CROP_H_

#include "dali/common.h"
#include "dali/pipeline/operators/decoder/host_decoder.h"

namespace dali {

class RandomCropGenerator;

class HostDecoderRandomCrop : public HostDecoder {
 public:
  explicit HostDecoderRandomCrop(const OpSpec &spec);

  inline ~HostDecoderRandomCrop() override = default;
  DISABLE_COPY_MOVE_ASSIGN(HostDecoderRandomCrop);

 protected:
  inline CropWindowGenerator GetCropWindowGenerator(int data_idx) const override {
    return crop_window_generator_;
  }

 private:
  CropWindowGenerator crop_window_generator_;
};

}  // namespace dali

#endif  // DALI_PIPELINE_OPERATORS_DECODER_HOST_DECODER_RANDOM_CROP_H_
