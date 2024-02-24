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
// Function WBP_DB_Deploy_ListEntry.WBP_DB_Deploy_ListEntry_C.PreConstruct
struct UWBP_DB_Deploy_ListEntry_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_DB_Deploy_ListEntry.WBP_DB_Deploy_ListEntry_C.DeploymentButtonSelected
struct UWBP_DB_Deploy_ListEntry_C_DeploymentButtonSelected_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_DB_Deploy_ListEntry.WBP_DB_Deploy_ListEntry_C.ExecuteUbergraph_WBP_DB_Deploy_ListEntry
struct UWBP_DB_Deploy_ListEntry_C_ExecuteUbergraph_WBP_DB_Deploy_ListEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D94[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_CustomEvent_Button;                         // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_DB_Deploy_ListEntry.WBP_DB_Deploy_ListEntry_C.DeploymentSelected__DelegateSignature
struct UWBP_DB_Deploy_ListEntry_C_DeploymentSelected__DelegateSignature_Params
{
public:
	struct FDeployment                           Deployment;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}


