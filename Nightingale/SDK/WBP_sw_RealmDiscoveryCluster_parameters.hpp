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

// 0x1 (0x1 - 0x0)
// Function WBP_sw_RealmDiscoveryCluster.WBP_sw_RealmDiscoveryCluster_C.DisplayNoInfoText
struct UWBP_sw_RealmDiscoveryCluster_C_DisplayNoInfoText_Params
{
public:
	bool                                         ShouldDisplay;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function WBP_sw_RealmDiscoveryCluster.WBP_sw_RealmDiscoveryCluster_C.PreviewOnly_PopulateDiscoveries
struct UWBP_sw_RealmDiscoveryCluster_C_PreviewOnly_PopulateDiscoveries_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5382[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5386[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNWXClusterCollectionPresentationData K2Node_MakeStruct_NWXClusterCollectionPresentationData; // 0x10(0x60)(None)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_sw_RealmDiscoveryCluster_Entry_C* CallFunc_Create_ReturnValue;                       // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_sw_RealmDiscoveryCluster.WBP_sw_RealmDiscoveryCluster_C.GetNumberOfEntries
struct UWBP_sw_RealmDiscoveryCluster_C_GetNumberOfEntries_Params
{
public:
	int32                                        NumberOfEntries;                                   // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_sw_RealmDiscoveryCluster.WBP_sw_RealmDiscoveryCluster_C.HasEntries
struct UWBP_sw_RealmDiscoveryCluster_C_HasEntries_Params
{
public:
	bool                                         HasEntries;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5429[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNumberOfEntries_NumberOfEntries;       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function WBP_sw_RealmDiscoveryCluster.WBP_sw_RealmDiscoveryCluster_C.PopulateDiscoveries
struct UWBP_sw_RealmDiscoveryCluster_C_PopulateDiscoveries_Params
{
public:
	TArray<struct FNWXClusterCollectionPresentationData> NewClusterCollectionPresentationData;              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5489[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNWXClusterCollectionPresentationData CallFunc_Array_Get_Item;                           // 0x20(0x60)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5499[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_sw_RealmDiscoveryCluster_Entry_C* CallFunc_Create_ReturnValue;                       // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x98(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_sw_RealmDiscoveryCluster.WBP_sw_RealmDiscoveryCluster_C.PreConstruct
struct UWBP_sw_RealmDiscoveryCluster_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_sw_RealmDiscoveryCluster.WBP_sw_RealmDiscoveryCluster_C.ExecuteUbergraph_WBP_sw_RealmDiscoveryCluster
struct UWBP_sw_RealmDiscoveryCluster_C_ExecuteUbergraph_WBP_sw_RealmDiscoveryCluster_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


