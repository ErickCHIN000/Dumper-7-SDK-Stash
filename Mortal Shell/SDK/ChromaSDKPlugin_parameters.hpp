#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsLoaded
struct UChromaSDKPluginAnimation1DObject_IsLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsLoaded
struct UChromaSDKPluginAnimation2DObject_IsLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimationName
struct UChromaSDKPluginBPLibrary_UnloadAnimationName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.UnloadAnimation
struct UChromaSDKPluginBPLibrary_UnloadAnimation_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimStartFramesName
struct UChromaSDKPluginBPLibrary_TrimStartFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfFrames;                                    // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimStartFrames
struct UChromaSDKPluginBPLibrary_TrimStartFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfFrames;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimFrameName
struct UChromaSDKPluginBPLibrary_TrimFrameName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimFrame
struct UChromaSDKPluginBPLibrary_TrimFrame_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimEndFramesName
struct UChromaSDKPluginBPLibrary_TrimEndFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastFrameId;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_254[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.TrimEndFrames
struct UChromaSDKPluginBPLibrary_TrimEndFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastFrameId;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ToLinearColor
struct UChromaSDKPluginBPLibrary_ToLinearColor_Params
{
public:
	int32                                        ColorParam;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0x4(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ToBGR
struct UChromaSDKPluginBPLibrary_ToBGR_Params
{
public:
	struct FLinearColor                          ColorParam;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesOffsetName
struct UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFramesOffsetName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesOffset
struct UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFramesOffset_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFramesName
struct UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFramesName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroTargetAllKeysAllFrames
struct UChromaSDKPluginBPLibrary_SubtractNonZeroTargetAllKeysAllFrames_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysName
struct UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesOffsetName
struct UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFramesOffsetName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesOffset
struct UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFramesOffset_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFramesName
struct UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFramesName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeysAllFrames
struct UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeysAllFrames_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SubtractNonZeroAllKeys
struct UChromaSDKPluginBPLibrary_SubtractNonZeroAllKeys_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationType
struct UChromaSDKPluginBPLibrary_StopAnimationType_Params
{
public:
	enum class EChromaSDKDeviceEnum              Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimations
struct UChromaSDKPluginBPLibrary_StopAnimations_Params
{
public:
	TArray<class FString>                        AnimationNames;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimationComposite
struct UChromaSDKPluginBPLibrary_StopAnimationComposite_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.StopAnimation
struct UChromaSDKPluginBPLibrary_StopAnimation_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor
struct UChromaSDKPluginBPLibrary_SetMouseLedColor_Params
{
public:
	enum class EChromaSDKMouseLed                Led;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_349[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorParam;                                        // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FChromaSDKColors>              Colors;                                            // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorName
struct UChromaSDKPluginBPLibrary_SetKeysNonZeroColorName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_364[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorAllFramesName
struct UChromaSDKPluginBPLibrary_SetKeysNonZeroColorAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColorAllFrames
struct UChromaSDKPluginBPLibrary_SetKeysNonZeroColorAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_399[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysNonZeroColor
struct UChromaSDKPluginBPLibrary_SetKeysNonZeroColor_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorRGBName
struct UChromaSDKPluginBPLibrary_SetKeysColorRGBName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorRGB
struct UChromaSDKPluginBPLibrary_SetKeysColorRGB_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_408[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorName
struct UChromaSDKPluginBPLibrary_SetKeysColorName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_423[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesRGBName
struct UChromaSDKPluginBPLibrary_SetKeysColorAllFramesRGBName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_449[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesRGB
struct UChromaSDKPluginBPLibrary_SetKeysColorAllFramesRGB_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_468[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFramesName
struct UChromaSDKPluginBPLibrary_SetKeysColorAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColorAllFrames
struct UChromaSDKPluginBPLibrary_SetKeysColorAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeysColor
struct UChromaSDKPluginBPLibrary_SetKeysColor_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorName
struct UChromaSDKPluginBPLibrary_SetKeyNonZeroColorName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChromaSDKKeyboardKey             Key;                                               // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_500[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorParam;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorAllFramesName
struct UChromaSDKPluginBPLibrary_SetKeyNonZeroColorAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChromaSDKKeyboardKey             Key;                                               // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorParam;                                        // 0x14(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColorAllFrames
struct UChromaSDKPluginBPLibrary_SetKeyNonZeroColorAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChromaSDKKeyboardKey             Key;                                               // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_539[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorParam;                                        // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyNonZeroColor
struct UChromaSDKPluginBPLibrary_SetKeyNonZeroColor_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChromaSDKKeyboardKey             Key;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_567[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorParam;                                        // 0xC(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorName
struct UChromaSDKPluginBPLibrary_SetKeyColorName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChromaSDKKeyboardKey             Key;                                               // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorParam;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFramesName
struct UChromaSDKPluginBPLibrary_SetKeyColorAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChromaSDKKeyboardKey             Key;                                               // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorParam;                                        // 0x14(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColorAllFrames
struct UChromaSDKPluginBPLibrary_SetKeyColorAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChromaSDKKeyboardKey             Key;                                               // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorParam;                                        // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyColor
struct UChromaSDKPluginBPLibrary_SetKeyColor_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChromaSDKKeyboardKey             Key;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorParam;                                        // 0xC(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor
struct UChromaSDKPluginBPLibrary_SetKeyboardKeyColor_Params
{
public:
	enum class EChromaSDKKeyboardKey             Key;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorParam;                                        // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FChromaSDKColors>              Colors;                                            // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetChromaCustomFlagName
struct UChromaSDKPluginBPLibrary_SetChromaCustomFlagName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Flag;                                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetChromaCustomColorAllFramesName
struct UChromaSDKPluginBPLibrary_SetChromaCustomColorAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReverseAllFramesName
struct UChromaSDKPluginBPLibrary_ReverseAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReverseAllFrames
struct UChromaSDKPluginBPLibrary_ReverseAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReduceFramesName
struct UChromaSDKPluginBPLibrary_ReduceFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        N;                                                 // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ReduceFrames
struct UChromaSDKPluginBPLibrary_ReduceFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        N;                                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PreviewFrameName
struct UChromaSDKPluginBPLibrary_PreviewFrameName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PreviewFrame
struct UChromaSDKPluginBPLibrary_PreviewFrame_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimations
struct UChromaSDKPluginBPLibrary_PlayAnimations_Params
{
public:
	TArray<class FString>                        AnimationNames;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Loop;                                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5E8[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationName
struct UChromaSDKPluginBPLibrary_PlayAnimationName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Loop;                                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5EA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimationComposite
struct UChromaSDKPluginBPLibrary_PlayAnimationComposite_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Loop;                                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5EE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.PlayAnimation
struct UChromaSDKPluginBPLibrary_PlayAnimation_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Loop;                                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5FB[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OverrideFrameDurationName
struct UChromaSDKPluginBPLibrary_OverrideFrameDurationName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_606[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsName
struct UChromaSDKPluginBPLibrary_OffsetNonZeroColorsName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsAllFramesName
struct UChromaSDKPluginBPLibrary_OffsetNonZeroColorsAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_61F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColorsAllFrames
struct UChromaSDKPluginBPLibrary_OffsetNonZeroColorsAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetNonZeroColors
struct UChromaSDKPluginBPLibrary_OffsetNonZeroColors_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsName
struct UChromaSDKPluginBPLibrary_OffsetColorsName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsAllFramesName
struct UChromaSDKPluginBPLibrary_OffsetColorsAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_689[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColorsAllFrames
struct UChromaSDKPluginBPLibrary_OffsetColorsAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.OffsetColors
struct UChromaSDKPluginBPLibrary_OffsetColors_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyTargetColorLerpAllFramesName
struct UChromaSDKPluginBPLibrary_MultiplyTargetColorLerpAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam1;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam2;                                       // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyTargetColorLerpAllFrames
struct UChromaSDKPluginBPLibrary_MultiplyTargetColorLerpAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam1;                                       // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam2;                                       // 0x14(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyNonZeroTargetColorLerpAllFramesName
struct UChromaSDKPluginBPLibrary_MultiplyNonZeroTargetColorLerpAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam1;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam2;                                       // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyNonZeroTargetColorLerpAllFrames
struct UChromaSDKPluginBPLibrary_MultiplyNonZeroTargetColorLerpAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam1;                                       // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam2;                                       // 0x14(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityRGBName
struct UChromaSDKPluginBPLibrary_MultiplyIntensityRGBName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityRGB
struct UChromaSDKPluginBPLibrary_MultiplyIntensityRGB_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityName
struct UChromaSDKPluginBPLibrary_MultiplyIntensityName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorName
struct UChromaSDKPluginBPLibrary_MultiplyIntensityColorName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x14(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorAllFramesName
struct UChromaSDKPluginBPLibrary_MultiplyIntensityColorAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColorAllFrames
struct UChromaSDKPluginBPLibrary_MultiplyIntensityColorAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityColor
struct UChromaSDKPluginBPLibrary_MultiplyIntensityColor_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesRGBName
struct UChromaSDKPluginBPLibrary_MultiplyIntensityAllFramesRGBName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RedIntensity;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GreenIntensity;                                    // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        blueIntensity;                                     // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesRGB
struct UChromaSDKPluginBPLibrary_MultiplyIntensityAllFramesRGB_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RedIntensity;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GreenIntensity;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        blueIntensity;                                     // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFramesName
struct UChromaSDKPluginBPLibrary_MultiplyIntensityAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_854[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensityAllFrames
struct UChromaSDKPluginBPLibrary_MultiplyIntensityAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyIntensity
struct UChromaSDKPluginBPLibrary_MultiplyIntensity_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyColorLerpAllFramesName
struct UChromaSDKPluginBPLibrary_MultiplyColorLerpAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam1;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam2;                                       // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MultiplyColorLerpAllFrames
struct UChromaSDKPluginBPLibrary_MultiplyColorLerpAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam1;                                       // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam2;                                       // 0x14(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRGBName
struct UChromaSDKPluginBPLibrary_MakeBlankFramesRGBName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameCount;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8EF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRGB
struct UChromaSDKPluginBPLibrary_MakeBlankFramesRGB_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameCount;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomName
struct UChromaSDKPluginBPLibrary_MakeBlankFramesRandomName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameCount;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomBlackAndWhiteName
struct UChromaSDKPluginBPLibrary_MakeBlankFramesRandomBlackAndWhiteName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameCount;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandomBlackAndWhite
struct UChromaSDKPluginBPLibrary_MakeBlankFramesRandomBlackAndWhite_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameCount;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesRandom
struct UChromaSDKPluginBPLibrary_MakeBlankFramesRandom_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameCount;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFramesName
struct UChromaSDKPluginBPLibrary_MakeBlankFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameCount;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.MakeBlankFrames
struct UChromaSDKPluginBPLibrary_MakeBlankFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameCount;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0xC(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimationName
struct UChromaSDKPluginBPLibrary_LoadAnimationName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LoadAnimation
struct UChromaSDKPluginBPLibrary_LoadAnimation_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LerpColorBGR
struct UChromaSDKPluginBPLibrary_LerpColorBGR_Params
{
public:
	int32                                        From;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        To;                                                // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.LerpColor
struct UChromaSDKPluginBPLibrary_LerpColor_Params
{
public:
	struct FLinearColor                          ColorParam1;                                       // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam2;                                       // 0x10(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0x24(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.Lerp
struct UChromaSDKPluginBPLibrary_Lerp_Params
{
public:
	float                                        Start;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        End;                                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Amt;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows
struct UChromaSDKPluginBPLibrary_IsPlatformWindows_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized
struct UChromaSDKPluginBPLibrary_IsInitialized_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationTypePlaying
struct UChromaSDKPluginBPLibrary_IsAnimationTypePlaying_Params
{
public:
	enum class EChromaSDKDeviceEnum              Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsAnimationPlaying
struct UChromaSDKPluginBPLibrary_IsAnimationPlaying_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A5C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InvertColorsAllFramesName
struct UChromaSDKPluginBPLibrary_InvertColorsAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InvertColorsAllFrames
struct UChromaSDKPluginBPLibrary_InvertColorsAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertFrameName
struct UChromaSDKPluginBPLibrary_InsertFrameName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SourceFrame;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetFrame;                                       // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertFrame
struct UChromaSDKPluginBPLibrary_InsertFrame_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SourceFrame;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetFrame;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertDelayName
struct UChromaSDKPluginBPLibrary_InsertDelayName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Delay;                                             // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.InsertDelay
struct UChromaSDKPluginBPLibrary_InsertDelay_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Delay;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetRGB
struct UChromaSDKPluginBPLibrary_GetRGB_Params
{
public:
	int32                                        Red;                                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0xC(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationId
struct UChromaSDKPluginBPLibrary_GetPlayingAnimationId_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetPlayingAnimationCount
struct UChromaSDKPluginBPLibrary_GetPlayingAnimationCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMouseLedColor
struct UChromaSDKPluginBPLibrary_GetMouseLedColor_Params
{
public:
	enum class EChromaSDKMouseLed                Led;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FChromaSDKColors>              Colors;                                            // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow
struct UChromaSDKPluginBPLibrary_GetMaxRow_Params
{
public:
	enum class EChromaSDKDevice2DEnum            Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds
struct UChromaSDKPluginBPLibrary_GetMaxLeds_Params
{
public:
	enum class EChromaSDKDevice1DEnum            Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B78[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn
struct UChromaSDKPluginBPLibrary_GetMaxColumn_Params
{
public:
	enum class EChromaSDKDevice2DEnum            Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColorName
struct UChromaSDKPluginBPLibrary_GetKeyColorName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChromaSDKKeyboardKey             Key;                                               // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyColor
struct UChromaSDKPluginBPLibrary_GetKeyColor_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChromaSDKKeyboardKey             Key;                                               // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ReturnValue;                                       // 0xC(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardRazerKey
struct UChromaSDKPluginBPLibrary_GetKeyboardRazerKey_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChromaSDKKeyboardKey             ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetKeyboardKeyColor
struct UChromaSDKPluginBPLibrary_GetKeyboardKeyColor_Params
{
public:
	enum class EChromaSDKKeyboardKey             Key;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FChromaSDKColors>              Colors;                                            // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCountName
struct UChromaSDKPluginBPLibrary_GetFrameCountName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetFrameCount
struct UChromaSDKPluginBPLibrary_GetFrameCount_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationName
struct UChromaSDKPluginBPLibrary_GetAnimationName_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C41[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationIdByIndex
struct UChromaSDKPluginBPLibrary_GetAnimationIdByIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationId
struct UChromaSDKPluginBPLibrary_GetAnimationId_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C5F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimationCount
struct UChromaSDKPluginBPLibrary_GetAnimationCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetAnimation
struct UChromaSDKPluginBPLibrary_GetAnimation_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorRGBName
struct UChromaSDKPluginBPLibrary_FillZeroColorRGBName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorRGB
struct UChromaSDKPluginBPLibrary_FillZeroColorRGB_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorName
struct UChromaSDKPluginBPLibrary_FillZeroColorName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x14(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesRGBName
struct UChromaSDKPluginBPLibrary_FillZeroColorAllFramesRGBName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D0A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesRGB
struct UChromaSDKPluginBPLibrary_FillZeroColorAllFramesRGB_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFramesName
struct UChromaSDKPluginBPLibrary_FillZeroColorAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColorAllFrames
struct UChromaSDKPluginBPLibrary_FillZeroColorAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillZeroColor
struct UChromaSDKPluginBPLibrary_FillZeroColor_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdRGBColorsAllFramesRGBName
struct UChromaSDKPluginBPLibrary_FillThresholdRGBColorsAllFramesRGBName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RedThreshold;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GreenThreshold;                                    // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blueThreshold;                                     // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdRGBColorsAllFramesRGB
struct UChromaSDKPluginBPLibrary_FillThresholdRGBColorsAllFramesRGB_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RedThreshold;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GreenThreshold;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blueThreshold;                                     // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsRGBName
struct UChromaSDKPluginBPLibrary_FillThresholdColorsRGBName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Threshold;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E56[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsRGB
struct UChromaSDKPluginBPLibrary_FillThresholdColorsRGB_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Threshold;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsMinMaxAllFramesRGBName
struct UChromaSDKPluginBPLibrary_FillThresholdColorsMinMaxAllFramesRGBName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinThreshold;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinRed;                                            // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinGreen;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinBlue;                                           // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxThreshold;                                      // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRed;                                            // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxGreen;                                          // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxBlue;                                           // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsMinMaxAllFramesRGB
struct UChromaSDKPluginBPLibrary_FillThresholdColorsMinMaxAllFramesRGB_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinThreshold;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinRed;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinGreen;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinBlue;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxThreshold;                                      // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRed;                                            // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxGreen;                                          // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxBlue;                                           // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesRGBName
struct UChromaSDKPluginBPLibrary_FillThresholdColorsAllFramesRGBName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Threshold;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesRGB
struct UChromaSDKPluginBPLibrary_FillThresholdColorsAllFramesRGB_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Threshold;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFramesName
struct UChromaSDKPluginBPLibrary_FillThresholdColorsAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Threshold;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x14(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillThresholdColorsAllFrames
struct UChromaSDKPluginBPLibrary_FillThresholdColorsAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Threshold;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsName
struct UChromaSDKPluginBPLibrary_FillRandomColorsName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1047[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteName
struct UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhiteName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1064[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteAllFramesName
struct UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhiteAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhiteAllFrames
struct UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhiteAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsBlackAndWhite
struct UChromaSDKPluginBPLibrary_FillRandomColorsBlackAndWhite_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsAllFramesName
struct UChromaSDKPluginBPLibrary_FillRandomColorsAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColorsAllFrames
struct UChromaSDKPluginBPLibrary_FillRandomColorsAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillRandomColors
struct UChromaSDKPluginBPLibrary_FillRandomColors_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorRGBName
struct UChromaSDKPluginBPLibrary_FillNonZeroColorRGBName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorRGB
struct UChromaSDKPluginBPLibrary_FillNonZeroColorRGB_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorName
struct UChromaSDKPluginBPLibrary_FillNonZeroColorName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x14(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_115B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesRGBName
struct UChromaSDKPluginBPLibrary_FillNonZeroColorAllFramesRGBName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_118C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesRGB
struct UChromaSDKPluginBPLibrary_FillNonZeroColorAllFramesRGB_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFramesName
struct UChromaSDKPluginBPLibrary_FillNonZeroColorAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColorAllFrames
struct UChromaSDKPluginBPLibrary_FillNonZeroColorAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillNonZeroColor
struct UChromaSDKPluginBPLibrary_FillNonZeroColor_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorRGBName
struct UChromaSDKPluginBPLibrary_FillColorRGBName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorRGB
struct UChromaSDKPluginBPLibrary_FillColorRGB_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorName
struct UChromaSDKPluginBPLibrary_FillColorName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x14(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_124C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesRGBName
struct UChromaSDKPluginBPLibrary_FillColorAllFramesRGBName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1263[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesRGB
struct UChromaSDKPluginBPLibrary_FillColorAllFramesRGB_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Red;                                               // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Green;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        blue;                                              // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFramesName
struct UChromaSDKPluginBPLibrary_FillColorAllFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColorAllFrames
struct UChromaSDKPluginBPLibrary_FillColorAllFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FillColor
struct UChromaSDKPluginBPLibrary_FillColor_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorParam;                                        // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeStartFramesName
struct UChromaSDKPluginBPLibrary_FadeStartFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Fade;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeStartFrames
struct UChromaSDKPluginBPLibrary_FadeStartFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Fade;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeEndFramesName
struct UChromaSDKPluginBPLibrary_FadeEndFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Fade;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1308[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.FadeEndFrames
struct UChromaSDKPluginBPLibrary_FadeEndFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Fade;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateMirrorFramesName
struct UChromaSDKPluginBPLibrary_DuplicateMirrorFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateMirrorFrames
struct UChromaSDKPluginBPLibrary_DuplicateMirrorFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFramesName
struct UChromaSDKPluginBPLibrary_DuplicateFramesName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFrames
struct UChromaSDKPluginBPLibrary_DuplicateFrames_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFirstFrameName
struct UChromaSDKPluginBPLibrary_DuplicateFirstFrameName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameCount;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1380[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DuplicateFirstFrame
struct UChromaSDKPluginBPLibrary_DuplicateFirstFrame_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameCount;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColorsBlackAndWhite2D
struct UChromaSDKPluginBPLibrary_CreateRandomColorsBlackAndWhite2D_Params
{
public:
	enum class EChromaSDKDevice2DEnum            Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FChromaSDKColors>              ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColorsBlackAndWhite1D
struct UChromaSDKPluginBPLibrary_CreateRandomColorsBlackAndWhite1D_Params
{
public:
	enum class EChromaSDKDevice1DEnum            Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D
struct UChromaSDKPluginBPLibrary_CreateRandomColors2D_Params
{
public:
	enum class EChromaSDKDevice2DEnum            Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FChromaSDKColors>              ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D
struct UChromaSDKPluginBPLibrary_CreateRandomColors1D_Params
{
public:
	enum class EChromaSDKDevice1DEnum            Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D
struct UChromaSDKPluginBPLibrary_CreateColors2D_Params
{
public:
	enum class EChromaSDKDevice2DEnum            Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1436[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FChromaSDKColors>              ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D
struct UChromaSDKPluginBPLibrary_CreateColors1D_Params
{
public:
	enum class EChromaSDKDevice1DEnum            Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysName
struct UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_149C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesOffsetName
struct UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFramesOffsetName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14C5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesOffset
struct UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFramesOffset_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFramesName
struct UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFramesName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeysAllFrames
struct UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeysAllFrames_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroTargetAllKeys
struct UChromaSDKPluginBPLibrary_CopyNonZeroTargetAllKeys_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorName
struct UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1578[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFramesName
struct UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorAllFramesName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColorAllFrames
struct UChromaSDKPluginBPLibrary_CopyNonZeroKeysColorAllFrames_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeysColor
struct UChromaSDKPluginBPLibrary_CopyNonZeroKeysColor_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColorName
struct UChromaSDKPluginBPLibrary_CopyNonZeroKeyColorName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChromaSDKKeyboardKey             Key;                                               // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1622[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroKeyColor
struct UChromaSDKPluginBPLibrary_CopyNonZeroKeyColor_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChromaSDKKeyboardKey             Key;                                               // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_165B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysOffsetName
struct UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysOffsetName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysOffset
struct UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysOffset_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysName
struct UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesOffsetName
struct UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFramesOffsetName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16FD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesOffset
struct UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFramesOffset_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFramesName
struct UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFramesName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeysAllFrames
struct UChromaSDKPluginBPLibrary_CopyNonZeroAllKeysAllFrames_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyNonZeroAllKeys
struct UChromaSDKPluginBPLibrary_CopyNonZeroAllKeys_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorName
struct UChromaSDKPluginBPLibrary_CopyKeysColorName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_180F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFramesName
struct UChromaSDKPluginBPLibrary_CopyKeysColorAllFramesName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColorAllFrames
struct UChromaSDKPluginBPLibrary_CopyKeysColorAllFrames_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeysColor
struct UChromaSDKPluginBPLibrary_CopyKeysColor_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_188C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EChromaSDKKeyboardKey>     Keys;                                              // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColorName
struct UChromaSDKPluginBPLibrary_CopyKeyColorName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChromaSDKKeyboardKey             Key;                                               // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyKeyColor
struct UChromaSDKPluginBPLibrary_CopyKeyColor_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameIndex;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EChromaSDKKeyboardKey             Key;                                               // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1997[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAnimationName
struct UChromaSDKPluginBPLibrary_CopyAnimationName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAnimation
struct UChromaSDKPluginBPLibrary_CopyAnimation_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TargetAnimationName;                               // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysName
struct UChromaSDKPluginBPLibrary_CopyAllKeysName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A2E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysAllFramesName
struct UChromaSDKPluginBPLibrary_CopyAllKeysAllFramesName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeysAllFrames
struct UChromaSDKPluginBPLibrary_CopyAllKeysAllFrames_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CopyAllKeys
struct UChromaSDKPluginBPLibrary_CopyAllKeys_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimationName
struct UChromaSDKPluginBPLibrary_CloseAnimationName_Params
{
public:
	class FString                                AnimationName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CloseAnimation
struct UChromaSDKPluginBPLibrary_CloseAnimation_Params
{
public:
	int32                                        AnimationId;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ClearAnimationType
struct UChromaSDKPluginBPLibrary_ClearAnimationType_Params
{
public:
	enum class EChromaSDKDeviceEnum              Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit
struct UChromaSDKPluginBPLibrary_ChromaSDKUnInit_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect
struct UChromaSDKPluginBPLibrary_ChromaSDKSetEffect_Params
{
public:
	struct FChromaSDKGuid                        EffectId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit
struct UChromaSDKPluginBPLibrary_ChromaSDKInit_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect
struct UChromaSDKPluginBPLibrary_ChromaSDKDeleteEffect_Params
{
public:
	struct FChromaSDKGuid                        EffectId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic
struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectStatic_Params
{
public:
	enum class EChromaSDKDeviceEnum              Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorParam;                                        // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChromaSDKEffectResult                ReturnValue;                                       // 0x14(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone
struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectNone_Params
{
public:
	enum class EChromaSDKDeviceEnum              Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FChromaSDKEffectResult                ReturnValue;                                       // 0x4(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectKeyboardCustom2D
struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectKeyboardCustom2D_Params
{
public:
	TArray<struct FChromaSDKColors>              Colors;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChromaSDKEffectResult                ReturnValue;                                       // 0x10(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BFE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D
struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom2D_Params
{
public:
	enum class EChromaSDKDevice2DEnum            Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FChromaSDKColors>              Colors;                                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChromaSDKEffectResult                ReturnValue;                                       // 0x18(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C2C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D
struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom1D_Params
{
public:
	enum class EChromaSDKDevice1DEnum            Device;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  Colors;                                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FChromaSDKEffectResult                ReturnValue;                                       // 0x18(0x14)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C71[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AppendAllFramesName
struct UChromaSDKPluginBPLibrary_AppendAllFramesName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AppendAllFrames
struct UChromaSDKPluginBPLibrary_AppendAllFrames_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesOffsetName
struct UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFramesOffsetName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CEB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesOffset
struct UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFramesOffset_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFramesName
struct UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFramesName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroTargetAllKeysAllFrames
struct UChromaSDKPluginBPLibrary_AddNonZeroTargetAllKeysAllFrames_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysName
struct UChromaSDKPluginBPLibrary_AddNonZeroAllKeysName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesOffsetName
struct UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFramesOffsetName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DEB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesOffset
struct UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFramesOffset_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFramesName
struct UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFramesName_Params
{
public:
	class FString                                SourceAnimationName;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TargetAnimationName;                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeysAllFrames
struct UChromaSDKPluginBPLibrary_AddNonZeroAllKeysAllFrames_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.AddNonZeroAllKeys
struct UChromaSDKPluginBPLibrary_AddNonZeroAllKeys_Params
{
public:
	int32                                        SourceAnimationId;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetAnimationId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameId;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


