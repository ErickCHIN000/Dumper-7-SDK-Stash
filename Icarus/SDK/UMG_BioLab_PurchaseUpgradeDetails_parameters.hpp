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

// 0x10C (0x10C - 0x0)
// Function UMG_BioLab_PurchaseUpgradeDetails.UMG_BioLab_PurchaseUpgradeDetails_C.ExecuteUbergraph_UMG_BioLab_PurchaseUpgradeDetails
struct UUMG_BioLab_PurchaseUpgradeDetails_C_ExecuteUbergraph_UMG_BioLab_PurchaseUpgradeDetails_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F73[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLivingItemUpgradeData                CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades; // 0x8(0xA8)(None)
	enum class EValid                            CallFunc_GetLivingItemUpgradesStruct_Paths;        // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F83[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_WorkshopCost_C*                   CallFunc_Create_ReturnValue;                       // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWorkshopCost                         CallFunc_Array_Get_Item;                           // 0xC8(0x1C)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAlterationsEnum                      CallFunc_RowHandleToStruct_ReturnValue;            // 0xE8(0x10)(HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F95[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


