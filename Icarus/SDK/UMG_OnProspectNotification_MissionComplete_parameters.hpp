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

// 0x31A (0x31A - 0x0)
// Function UMG_OnProspectNotification_MissionComplete.UMG_OnProspectNotification_MissionComplete_C.GetMissionDropName
struct UUMG_OnProspectNotification_MissionComplete_C_GetMissionDropName_Params
{
public:
	struct FFactionMissionsRowHandle             MissionRowHandle;                                  // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class FText                                  MissionDropName;                                   // 0x18(0x18)(Parm, OutParm)
	struct FProspectListRowHandle                CallFunc_FindProspectListRowHandleFromFactionMission_FoundProspectListRowHandle; // 0x30(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindProspectListRowHandleFromFactionMission_ReturnValue; // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleNone_ReturnValue;              // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3893[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0x50(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x319(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x104 (0x104 - 0x0)
// Function UMG_OnProspectNotification_MissionComplete.UMG_OnProspectNotification_MissionComplete_C.SetMissionReward
struct UUMG_OnProspectNotification_MissionComplete_C_SetMissionReward_Params
{
public:
	struct FFactionMissionsRowHandle             Mission;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCurrentMission;                                  // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3921[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMetaResource>                 ResourcesReceived;                                 // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                        RewardMulti;                                       // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x38(0x18)(None)
	class UUMG_WorkshopCostLarge_C*              CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetMissionDropName_MissionDropName;       // 0x58(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3959[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMetaResource                         CallFunc_Array_Get_Item;                           // 0x80(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3961[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x9C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMetaCurrencyRowHandle                CallFunc_MakeMetaCurrency_ReturnValue;             // 0xA4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3976[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0xC0(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0xD8(0x18)(None)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3987[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_OnProspectNotification_MissionComplete.UMG_OnProspectNotification_MissionComplete_C.PreConstruct
struct UUMG_OnProspectNotification_MissionComplete_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function UMG_OnProspectNotification_MissionComplete.UMG_OnProspectNotification_MissionComplete_C.ExecuteUbergraph_UMG_OnProspectNotification_MissionComplete
struct UUMG_OnProspectNotification_MissionComplete_C_ExecuteUbergraph_UMG_OnProspectNotification_MissionComplete_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A18[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetaResource                         K2Node_MakeStruct_MetaResource;                    // 0x8(0x18)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetaResource                         K2Node_MakeStruct_MetaResource_1;                  // 0x28(0x18)(None)
	TArray<struct FMetaResource>                 K2Node_MakeArray_Array;                            // 0x40(0x10)(ReferenceParm)
};

}
}


