/*
 * File: _coder_bisect_info.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 08-Apr-2019 21:24:20
 */

/* Include Files */
#include "_coder_bisect_info.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : const mxArray *
 */
const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[8] = {
    "789ced584d6bdb301856d634eb18fb60b79e56c62883405cfa11ba324ab7a4a18166145a584733866c2b8d40b68ced14f71676ea0fd80fd8aefb1bbbf6b8fd8c"
    "31d865d749b1ddb8aaa9dcd84dba6281501e5bcffb213d7979135068b6001b0fd9dc9803a0c4d61936ef007f4c07b8c0e6fd60f59f17c183007f6253a3a68b3c",
    "d77f6942038170e8d4c02634ddbd630b011b39941c217df0a68309dac306daa611b08519301a91576780bfb2bbce996540a2c01f3c8f3e18e6518cc9a315c9e3"
    "71800f36df7da8af292de812a82a6d0fc1b6a72eb1b9c23eab6cadb6bdd505f65967abe64fc4e64b86554db1a0ed2e2a2a7690e6568c208e55491cd3421c1c23",
    "dba676c05f90f08be7f845a075a1cd795d096f49f0cbf141737b7f3372022ea544a59e820ca210ac2a86ff9840f35019c438c8f2629ea5187f8588bf7bc17376"
    "4b5f4f0f7fbe1e9d0f52facf8eff22c22fc4f041641d657f1ffc1f7a9e11e2e0d8b0757c847594845f12f81cebb4a712e4fb97e97a45e0739c50d7d4729430d4",
    "8a1593ef157471f2eacb44757d3c3f9b8dffebd6f524ef33cedf5dc11fc7818d44fcb4fa5d16f8cb57cb374cd708cf77c4bafcf7d74e5e97b3d06fd6f7b923f1"
    "f754f0c7b146756457306bce6c13920a76def430719be6db9e816cac65a26b4fc2af09fc9ae41cf82c0f0257ca61e48a1879eafe037cfe73fa23d77982fd374d",
    "e773823f8e059d3b1a24c8b36ad4b0a08b9952c7a1f3bac0af4bce2156e717224f5bcf8193553f3069fe6dd3f996c4df13c11fc782ce99c9f8f3bd8efea42af0"
    "ab92fc63f5cd22e62790a23ff99df727c9f6f7c1e5f739aedf8db2ff31a6cec53105a0ea8c45cf8b029fe384df67443a3d536181066d481a3d9f3c9fcff59c45",
    "7dcefa3ef37e3befb7739d03302bf8e338a6df86768557eea1ddcbea7e38a276439e2589675de0ad4bf28fd577d90f393c8b14f5fbfdb7b5bc7edf445def4bfc"
    "3d13fc712ce81a5a1639de1d28a5d13335175373687f4362ff91609fe34e60e563179a3a4189ea7943b0d3909c4bacde633249a9fbddef4bb9ee93ec9ff4fd5e",
    "577d4fdbc7e475fef6e9fd1fdf92d310", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 8272U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/*
 * Arguments    : void
 * Return Type  : mxArray *
 */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 5);
  emlrtSetField(xEntryPoints, 0, "Name", mxCreateString("bisect"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", mxCreateDoubleScalar(5.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", mxCreateDoubleScalar(4.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", mxCreateString("9.0.0.341360 (R2016a)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/*
 * File trailer for _coder_bisect_info.c
 *
 * [EOF]
 */
