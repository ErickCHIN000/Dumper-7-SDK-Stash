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

// 0xB (0xB - 0x0)
// Function Init_EnchantmentWeight.Init_EnchantmentWeight_C.IsReRollingEnchantment
struct UInit_EnchantmentWeight_C_IsReRollingEnchantment_Params
{
public:
	class UInventoryBalanceStateComponent*       InventoryBalanceState;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsReRollingEnchantment;                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBeingReRolled_ReturnValue;              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function Init_EnchantmentWeight.Init_EnchantmentWeight_C.GetInventoryBalanceState
struct UInit_EnchantmentWeight_C_GetInventoryBalanceState_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryBalanceStateComponent*       InventoryBalanceState;                             // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_DynamicCast_AsActor;                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2687[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryBalanceStateComponent*       CallFunc_GetComponentByClass_ReturnValue;          // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF9 (0xF9 - 0x0)
// Function Init_EnchantmentWeight.Init_EnchantmentWeight_C.GetRarityWeightScalar
struct UInit_EnchantmentWeight_C_GetRarityWeightScalar_Params
{
public:
	class UInventoryBalanceStateComponent*       InventoryBalanceState;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RarityWeightScale;                                 // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOakInventoryRarityData*               NewInventoryRarityData;                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WeightToUse;                                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryRarityData*                  CallFunc_GetInventoryRarityData_ReturnValue;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOakInventoryRarityData*               K2Node_DynamicCast_AsOak_Inventory_Rarity_Data;    // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          CallFunc_GetDataTableValue_OutValue;               // 0x40(0x38)(NoDestructor)
	bool                                         CallFunc_GetDataTableValue_ReturnValue;            // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          CallFunc_GetDataTableValue_OutValue1;              // 0x80(0x38)(NoDestructor)
	bool                                         CallFunc_GetDataTableValue_ReturnValue1;           // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue1;     // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue2;     // 0xBB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAttributeInitializationData          CallFunc_GetDataTableValue_OutValue2;              // 0xC0(0x38)(NoDestructor)
	bool                                         CallFunc_GetDataTableValue_ReturnValue2;           // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function Init_EnchantmentWeight.Init_EnchantmentWeight_C.CalculateAttributeInitialValue
struct UInit_EnchantmentWeight_C_CalculateAttributeInitialValue_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BaseDropWeight;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryBalanceStateComponent*       CallFunc_GetInventoryBalanceState_InventoryBalanceState; // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAttributeInitializationData          CallFunc_GetDataTableValue_OutValue;               // 0x18(0x38)(NoDestructor)
	bool                                         CallFunc_GetDataTableValue_ReturnValue;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2739[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetRarityWeightScalar_RarityWeightScale;  // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsReRollingEnchantment_IsReRollingEnchantment; // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_273A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetValueOfAttribute_ReturnValue;          // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FClamp_ReturnValue;                       // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue1;         // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


