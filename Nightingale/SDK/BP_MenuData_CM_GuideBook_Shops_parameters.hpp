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

// 0x8D (0x8D - 0x0)
// Function BP_MenuData_CM_GuideBook_Shops.BP_MenuData_CM_GuideBook_Shops_C.PostInitialize
struct UBP_MenuData_CM_GuideBook_Shops_C_PostInitialize_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2237[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FShopDescriptorRegistryEntry>  CallFunc_GetAllShopDescriptors_OutShopRegistryEntries; // 0x10(0x10)(ReferenceParm)
	struct FShopDescriptorRegistryEntry          CallFunc_Array_Get_Item;                           // 0x20(0x68)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function BP_MenuData_CM_GuideBook_Shops.BP_MenuData_CM_GuideBook_Shops_C.CreateAndQuickAddEntry
struct UBP_MenuData_CM_GuideBook_Shops_C_CreateAndQuickAddEntry_Params
{
public:
	struct FShopDescriptorRegistryEntry          ShopRegistryEntry;                                 // 0x0(0x68)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UNWXMenuDataEntry*                     CallFunc_CreateEntry_ReturnValue;                  // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXMenuDataEntryShop*                 K2Node_DynamicCast_AsNWXMenu_Data_Entry_Shop;      // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


