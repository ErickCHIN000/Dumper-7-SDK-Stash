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
// Function WBP_sw_RealmInfo_GenericRoundImageHolder.WBP_sw_RealmInfo_GenericRoundImageHolder_C.DisplayNoInfoTextAndContainer
struct UWBP_sw_RealmInfo_GenericRoundImageHolder_C_DisplayNoInfoTextAndContainer_Params
{
public:
	bool                                         ShouldDisplay;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function WBP_sw_RealmInfo_GenericRoundImageHolder.WBP_sw_RealmInfo_GenericRoundImageHolder_C.Add Image
struct UWBP_sw_RealmInfo_GenericRoundImageHolder_C_Add_Image_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             NewParam;                                          // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_sw_RealmInfo_FactionEntry_C*      CallFunc_Create_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_sw_RealmInfo_GenericRoundImageHolder.WBP_sw_RealmInfo_GenericRoundImageHolder_C.PreConstruct
struct UWBP_sw_RealmInfo_GenericRoundImageHolder_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_sw_RealmInfo_GenericRoundImageHolder.WBP_sw_RealmInfo_GenericRoundImageHolder_C.ExecuteUbergraph_WBP_sw_RealmInfo_GenericRoundImageHolder
struct UWBP_sw_RealmInfo_GenericRoundImageHolder_C_ExecuteUbergraph_WBP_sw_RealmInfo_GenericRoundImageHolder_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


