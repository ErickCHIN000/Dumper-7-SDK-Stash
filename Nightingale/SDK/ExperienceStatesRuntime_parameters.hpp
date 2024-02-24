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

// 0x78 (0x78 - 0x0)
// Function ExperienceStatesRuntime.DerivedStateIDGeneratorFunctionLibrary.GetDerivedIDForStateFromAssetData
struct UDerivedStateIDGeneratorFunctionLibrary_GetDerivedIDForStateFromAssetData_Params
{
public:
	enum class EDerivedStates                    State;                                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_367[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAssetData                            AssetData;                                         // 0x8(0x68)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExperienceStateID                    ReturnValue;                                       // 0x70(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_369[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ExperienceStatesRuntime.DerivedStateIDGeneratorFunctionLibrary.GetDerivedIDForState
struct UDerivedStateIDGeneratorFunctionLibrary_GetDerivedIDForState_Params
{
public:
	enum class EDerivedStates                    State;                                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 UniqueID;                                          // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExperienceStateID                    ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ExperienceStatesRuntime.DerivedStateIDGeneratorFunctionLibrary.FindUniqueID
struct UDerivedStateIDGeneratorFunctionLibrary_FindUniqueID_Params
{
public:
	struct FAssetData                            AssetData;                                         // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ReturnValue;                                       // 0x68(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ExperienceStatesRuntime.ExperienceStateCondition.OnCounterChanged
struct UExperienceStateCondition_OnCounterChanged_Params
{
public:
	struct FExperienceStateID                    ID;                                                // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OldValue;                                          // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewValue;                                          // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ExperienceStatesRuntime.ExperienceStateEventInterface.UnbindEventFrom_ExperienceStatesReady
struct IExperienceStateEventInterface_UnbindEventFrom_ExperienceStatesReady_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ExperienceStatesRuntime.ExperienceStateEventInterface.UnbindEventFrom_ExperienceStateChanged
struct IExperienceStateEventInterface_UnbindEventFrom_ExperienceStateChanged_Params
{
public:
	struct FExperienceStateID                    ExperienceStateID;                                 // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Event;                                             // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ExperienceStatesRuntime.ExperienceStateEventInterface.BindEventTo_ExperienceStatesReady
struct IExperienceStateEventInterface_BindEventTo_ExperienceStatesReady_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ExperienceStatesRuntime.ExperienceStateEventInterface.BindEventTo_ExperienceStateChanged
struct IExperienceStateEventInterface_BindEventTo_ExperienceStateChanged_Params
{
public:
	struct FExperienceStateID                    ExperienceStateID;                                 // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Event;                                             // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ExperienceStatesRuntime.ExperienceStateFunctionLibrary.ToDebugString
struct UExperienceStateFunctionLibrary_ToDebugString_Params
{
public:
	struct FExperienceStateID                    ID;                                                // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_429[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ExperienceStatesRuntime.ExperienceStateFunctionLibrary.TestExperienceStateValue
struct UExperienceStateFunctionLibrary_TestExperienceStateValue_Params
{
public:
	class UObject*                               Reader;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExperienceStateID                    ID;                                                // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENWXMathComparison                Comparator;                                        // 0xC(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_446[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TargetValue;                                       // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGetResult                        Result;                                            // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44A[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ExperienceStatesRuntime.ExperienceStateFunctionLibrary.SetExperienceStateValue
struct UExperienceStateFunctionLibrary_SetExperienceStateValue_Params
{
public:
	class UObject*                               Writer;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExperienceStateID                    ID;                                                // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGetResult                        Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ExperienceStatesRuntime.ExperienceStateFunctionLibrary.ReadExperienceStateValue
struct UExperienceStateFunctionLibrary_ReadExperienceStateValue_Params
{
public:
	class UObject*                               Reader;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExperienceStateID                    ID;                                                // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGetResult                        Result;                                            // 0xC(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ExperienceStatesRuntime.ExperienceStateFunctionLibrary.ModifyExperienceStateValue
struct UExperienceStateFunctionLibrary_ModifyExperienceStateValue_Params
{
public:
	class UObject*                               Writer;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExperienceStateID                    ID;                                                // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Change;                                            // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGetResult                        Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ExperienceStatesRuntime.ExperienceStateFunctionLibrary.EqualEqual_FExperienceStateID
struct UExperienceStateFunctionLibrary_EqualEqual_FExperienceStateID_Params
{
public:
	struct FExperienceStateID                    A;                                                 // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExperienceStateID                    B;                                                 // 0x4(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D3[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ExperienceStatesRuntime.ExperienceStateTrackerComponent.Server_WriteExperienceState
struct UExperienceStateTrackerComponent_Server_WriteExperienceState_Params
{
public:
	struct FExperienceStateID                    ExperienceStateID;                                 // 0x0(0x4)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ExperienceStatesRuntime.ExperienceStateTrackerComponent.OnRep_CompressedExperienceStateBuffer
struct UExperienceStateTrackerComponent_OnRep_CompressedExperienceStateBuffer_Params
{
public:
	struct FCompressedExperienceStates           PreviousValue;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}


