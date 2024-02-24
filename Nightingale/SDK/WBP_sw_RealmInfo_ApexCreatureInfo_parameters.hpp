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
// Function WBP_sw_RealmInfo_ApexCreatureInfo.WBP_sw_RealmInfo_ApexCreatureInfo_C.DisplayNoInfoText
struct UWBP_sw_RealmInfo_ApexCreatureInfo_C_DisplayNoInfoText_Params
{
public:
	bool                                         ShouldDisplay;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function WBP_sw_RealmInfo_ApexCreatureInfo.WBP_sw_RealmInfo_ApexCreatureInfo_C.AddImgAndDescription
struct UWBP_sw_RealmInfo_ApexCreatureInfo_C_AddImgAndDescription_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Description;                                       // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UWBP_sw_RealmInfo_GenericRoundImageWithDescription_C* CallFunc_Create_ReturnValue;                       // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_sw_RealmInfo_ApexCreatureInfo.WBP_sw_RealmInfo_ApexCreatureInfo_C.ExecuteUbergraph_WBP_sw_RealmInfo_ApexCreatureInfo
struct UWBP_sw_RealmInfo_ApexCreatureInfo_C_ExecuteUbergraph_WBP_sw_RealmInfo_ApexCreatureInfo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


