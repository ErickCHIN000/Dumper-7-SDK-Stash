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

// 0x19 (0x19 - 0x0)
// Function UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C.SetUpgrade
struct UUMG_BioLab_UpgradeSlotChoice_C_SetUpgrade_Params
{
public:
	struct FLivingItemUpgradesRowHandle          Upgrade;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCurrentChoice;                                   // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF1 (0xF1 - 0x0)
// Function UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C.ExecuteUbergraph_UMG_BioLab_UpgradeSlotChoice
struct UUMG_BioLab_UpgradeSlotChoice_C_ExecuteUbergraph_UMG_BioLab_UpgradeSlotChoice_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_414E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_BioLab_Upgrade_Tooltip_C*         CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLivingItemUpgradesRowHandle          K2Node_CustomEvent_Upgrade;                        // 0x10(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsCurrentChoice;                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4157[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLivingItemUpgradeData                CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades; // 0x30(0xA8)(None)
	enum class EValid                            CallFunc_GetLivingItemUpgradesStruct_Paths;        // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4161[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C.ChoiceUnhovered__DelegateSignature
struct UUMG_BioLab_UpgradeSlotChoice_C_ChoiceUnhovered__DelegateSignature_Params
{
public:
	struct FLivingItemUpgradesRowHandle          Upgrade;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C.ChoiceHovered__DelegateSignature
struct UUMG_BioLab_UpgradeSlotChoice_C_ChoiceHovered__DelegateSignature_Params
{
public:
	struct FLivingItemUpgradesRowHandle          Upgrade;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C.UpgradeChoiceClicked__DelegateSignature
struct UUMG_BioLab_UpgradeSlotChoice_C_UpgradeChoiceClicked__DelegateSignature_Params
{
public:
	struct FLivingItemUpgradesRowHandle          Upgrade;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}


