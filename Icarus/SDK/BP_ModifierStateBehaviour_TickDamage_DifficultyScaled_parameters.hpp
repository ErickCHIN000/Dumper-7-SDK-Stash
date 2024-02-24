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

// 0x2 (0x2 - 0x0)
// Function BP_ModifierStateBehaviour_TickDamage_DifficultyScaled.BP_ModifierStateBehaviour_TickDamage_DifficultyScaled_C.ModifierRemoved
struct UBP_ModifierStateBehaviour_TickDamage_DifficultyScaled_C_ModifierRemoved_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ModifierRemoved_ReturnValue;              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_ModifierStateBehaviour_TickDamage_DifficultyScaled.BP_ModifierStateBehaviour_TickDamage_DifficultyScaled_C.ModifierApplied
struct UBP_ModifierStateBehaviour_TickDamage_DifficultyScaled_C_ModifierApplied_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ModifierApplied_ReturnValue;              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_ModifierStateBehaviour_TickDamage_DifficultyScaled.BP_ModifierStateBehaviour_TickDamage_DifficultyScaled_C.ModifierTick
struct UBP_ModifierStateBehaviour_TickDamage_DifficultyScaled_C_ModifierTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2DD (0x2DD - 0x0)
// Function BP_ModifierStateBehaviour_TickDamage_DifficultyScaled.BP_ModifierStateBehaviour_TickDamage_DifficultyScaled_C.ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage_DifficultyScaled
struct UBP_ModifierStateBehaviour_TickDamage_DifficultyScaled_C_ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage_DifficultyScaled_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMissionDifficulty                CallFunc_GetCurrentProspectDifficulty_ReturnValue; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58B8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x8(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	enum class EMissionDifficulty                Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_2;                             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_3;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_4;                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x30(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTime;                            // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModifierStateData                    CallFunc_GetModifierStateData_ReturnValue;         // 0x50(0x250)(None)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomRangeValue                     CallFunc_Map_Find_Value;                           // 0x2A8(0x8)(NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5913[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRandomRangeValue                     CallFunc_Map_Find_Value_1;                         // 0x2B4(0x8)(NoDestructor)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x2BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5918[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x2C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x2CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x2D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x2D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DealFlatDamage_ReturnValue;               // 0x2DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


