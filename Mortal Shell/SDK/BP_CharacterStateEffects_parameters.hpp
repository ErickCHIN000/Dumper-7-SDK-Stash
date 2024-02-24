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

// 0x4C (0x4C - 0x0)
// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.InterpPoisonAmount
struct ABP_CharacterStateEffects_C_InterpPoisonAmount_Params
{
public:
	float                                        Temp_float_Variable;                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B8B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable_1;                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_2;                             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B91[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBlendableInterface>  CallFunc_RemoveBlendable_InBlendableObject_CastInput; // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBlendableInterface>  CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput; // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B98[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FInterpTo_ReturnValue;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default_1;                           // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.InterpFreezeAmount
struct ABP_CharacterStateEffects_C_InterpFreezeAmount_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BCC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBlendableInterface>  CallFunc_RemoveBlendable_InBlendableObject_CastInput; // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BCF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBlendableInterface>  CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput; // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BD1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_FInterpTo_ReturnValue;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.ReceiveTick
struct ABP_CharacterStateEffects_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.SetFreezeAmount
struct ABP_CharacterStateEffects_C_SetFreezeAmount_Params
{
public:
	float                                        DesiredFreezeAmount;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBB (0xBB - 0x0)
// Function BP_CharacterStateEffects.BP_CharacterStateEffects_C.ExecuteUbergraph_BP_CharacterStateEffects
struct ABP_CharacterStateEffects_C_ExecuteUbergraph_BP_CharacterStateEffects_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C5B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C60[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaSeconds;                         // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C61[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_DesiredFreezeAmount;            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C6A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C73[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_C82[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x60(0x8)(NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBlendableInterface>  CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput; // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBlendableInterface>  CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1; // 0x78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBlendableInterface>  CallFunc_RemoveBlendable_InBlendableObject_CastInput; // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlaying_ReturnValue;                    // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C95[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBuffObject_C*                         CallFunc_Array_Get_Item;                           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C9A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBuffObjectPoisonDPS_C*                K2Node_DynamicCast_AsBuff_Object_Poison_DPS;       // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


