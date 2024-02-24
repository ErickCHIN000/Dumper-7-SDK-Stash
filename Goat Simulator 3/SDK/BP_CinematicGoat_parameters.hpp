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

// 0x21 (0x21 - 0x0)
// Function BP_CinematicGoat.BP_CinematicGoat_C.Get walk-in spline
struct ABP_CinematicGoat_C_Get_walkMinusin_spline_Params
{
public:
	class USplineComponent*                      Spline;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CAC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGAlternativeGoatDataAsset*           CallFunc_GetCurrentAltGoat_ReturnValue;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SplineActor_C*                     CallFunc_Map_Find_Value;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_CinematicGoat.BP_CinematicGoat_C.HasFinishedWalkIn
struct ABP_CinematicGoat_C_HasFinishedWalkIn_Params
{
public:
	bool                                         Finished;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_CinematicGoat.BP_CinematicGoat_C.Has valid walk-in sequence
struct ABP_CinematicGoat_C_Has_valid_walkMinusin_sequence_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_CinematicGoat.BP_CinematicGoat_C.OnLoaded_1E8D15934606A5D54B79EC9A3AE3977B
struct ABP_CinematicGoat_C_OnLoaded_1E8D15934606A5D54B79EC9A3AE3977B_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_CinematicGoat.BP_CinematicGoat_C.ReceiveTick
struct ABP_CinematicGoat_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x7A (0x7A - 0x0)
// Function BP_CinematicGoat.BP_CinematicGoat_C.ExecuteUbergraph_BP_CinematicGoat
struct ABP_CinematicGoat_C_ExecuteUbergraph_BP_CinematicGoat_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DC3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequence*                        K2Node_DynamicCast_AsLevel_Sequence;               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DCE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ALevelSequenceActor*                   CallFunc_CreateLevelSequencePlayer_OutActor;       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequencePlayer*                  CallFunc_CreateLevelSequencePlayer_ReturnValue;    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DDF[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x4C(0x10)(ZeroConstructor, NoDestructor)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Has_valid_walk_in_sequence_ReturnValue;   // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveEffectSource_ReturnValue;           // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveEffectSource_ReturnValue_1;         // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E04[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USplineComponent*                      CallFunc_Get_walk_in_spline_Spline;                // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGSplineFollowComponent*              CallFunc_StartFollowingSpline_ReturnValue;         // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasFinishedWalkIn_Finished;               // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


