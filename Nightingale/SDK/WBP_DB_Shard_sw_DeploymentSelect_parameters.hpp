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

// 0x8 (0x8 - 0x0)
// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.BP_GetDesiredFocusTarget
struct UWBP_DB_Shard_sw_DeploymentSelect_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.GetDefaultFocusWidget
struct UWBP_DB_Shard_sw_DeploymentSelect_C_GetDefaultFocusWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.OnDeploymentSelected
struct UWBP_DB_Shard_sw_DeploymentSelect_C_OnDeploymentSelected_Params
{
public:
	struct FDeployment                           Deployment;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Default_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
struct UWBP_DB_Shard_sw_DeploymentSelect_C_BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Default_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Sanctuary_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
struct UWBP_DB_Shard_sw_DeploymentSelect_C_BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Sanctuary_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Cancel_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
struct UWBP_DB_Shard_sw_DeploymentSelect_C_BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Cancel_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.ExecuteUbergraph_WBP_DB_Shard_sw_DeploymentSelect
struct UWBP_DB_Shard_sw_DeploymentSelect_C_ExecuteUbergraph_WBP_DB_Shard_sw_DeploymentSelect_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_DB_Deploy_ListEntry_C*            CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDeployment                           CallFunc_Array_Get_Item;                           // 0x30(0x40)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDeployment                           K2Node_CustomEvent_Deployment;                     // 0x78(0x40)(None)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FDeployment                           K2Node_MakeStruct_Deployment;                      // 0xC0(0x40)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0x108(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DCB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x118(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.DeploymentSelected__DelegateSignature
struct UWBP_DB_Shard_sw_DeploymentSelect_C_DeploymentSelected__DelegateSignature_Params
{
public:
	struct FDeployment                           Deployment;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}


