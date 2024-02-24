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

// 0x51 (0x51 - 0x0)
// Function WBP_sw_RealmInfoTab_Discoveries.WBP_sw_RealmInfoTab_Discoveries_C.UpdateRealmDiscovery
struct UWBP_sw_RealmInfoTab_Discoveries_C_UpdateRealmDiscovery_Params
{
public:
	struct FRealmSettings                        Realm_Settings;                                    // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FNWXClusterCollectionPresentationData> CallFunc_GenerateRealmRewardPresentation_ClusterCollectionsPresentationDataList; // 0x40(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x33E (0x33E - 0x0)
// Function WBP_sw_RealmInfoTab_Discoveries.WBP_sw_RealmInfoTab_Discoveries_C.UpdateEssenceImageHolder
struct UWBP_sw_RealmInfoTab_Discoveries_C_UpdateEssenceImageHolder_Params
{
public:
	TArray<struct FInventoryEntry>               Essence_Rewards;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_221C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_Array_Get_Item;                           // 0x20(0x2F0)(None)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetItemIcon_ReturnValue;                  // 0x310(0x28)(UObjectWrapper, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x33C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x33D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


