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

// 0x12D (0x12D - 0x0)
// Function BP_EquippableModifier_GlobalStat.BP_EquippableModifier_GlobalStat_C.ItemUnequipped
struct UBP_EquippableModifier_GlobalStat_C_ItemUnequipped_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6056[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AMapManager_C*                         CallFunc_GetActorOfClass_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEquippableData                       CallFunc_GetEquippableStruct_Equippable;           // 0x10(0x118)(None)
	enum class EValid                            CallFunc_GetEquippableStruct_Paths;                // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x12A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ItemUnequipped_ReturnValue;               // 0x12B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12D (0x12D - 0x0)
// Function BP_EquippableModifier_GlobalStat.BP_EquippableModifier_GlobalStat_C.ItemEquipped
struct UBP_EquippableModifier_GlobalStat_C_ItemEquipped_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AMapManager_C*                         CallFunc_GetActorOfClass_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEquippableData                       CallFunc_GetEquippableStruct_Equippable;           // 0x10(0x118)(None)
	enum class EValid                            CallFunc_GetEquippableStruct_Paths;                // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x12A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ItemEquipped_ReturnValue;                 // 0x12B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftClassReference_ReturnValue;    // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


