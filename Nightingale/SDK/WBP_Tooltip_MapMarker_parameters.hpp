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

// 0x70 (0x70 - 0x0)
// Function WBP_Tooltip_MapMarker.WBP_Tooltip_MapMarker_C.RefreshMapMarker
struct UWBP_Tooltip_MapMarker_C_RefreshMapMarker_Params
{
public:
	class FText                                  TitleText;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  BodyText;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CoordText;                                         // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	TSoftObjectPtr<class UTexture2D>             IconTexture;                                       // 0x48(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Tooltip_MapMarker.WBP_Tooltip_MapMarker_C.PreConstruct
struct UWBP_Tooltip_MapMarker_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_Tooltip_MapMarker.WBP_Tooltip_MapMarker_C.ExecuteUbergraph_WBP_Tooltip_MapMarker
struct UWBP_Tooltip_MapMarker_C_ExecuteUbergraph_WBP_Tooltip_MapMarker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


