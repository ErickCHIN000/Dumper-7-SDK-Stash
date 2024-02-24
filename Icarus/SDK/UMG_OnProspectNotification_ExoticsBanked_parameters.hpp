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

// 0x30 (0x30 - 0x0)
// Function UMG_OnProspectNotification_ExoticsBanked.UMG_OnProspectNotification_ExoticsBanked_C.SetExoticsCount
struct UUMG_OnProspectNotification_ExoticsBanked_C_SetExoticsCount_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMetaCurrencyRowHandle                Currency;                                          // 0x4(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AA3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_WorkshopCostLarge_C*              CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_OnProspectNotification_ExoticsBanked.UMG_OnProspectNotification_ExoticsBanked_C.PreConstruct
struct UUMG_OnProspectNotification_ExoticsBanked_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function UMG_OnProspectNotification_ExoticsBanked.UMG_OnProspectNotification_ExoticsBanked_C.ExecuteUbergraph_UMG_OnProspectNotification_ExoticsBanked
struct UUMG_OnProspectNotification_ExoticsBanked_C_ExecuteUbergraph_UMG_OnProspectNotification_ExoticsBanked_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


