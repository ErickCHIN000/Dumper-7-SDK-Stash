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

// 0xC0 (0xC0 - 0x0)
// Function wid_Investigation_Buttons.wid_Investigation_Buttons_C.Update
struct UWid_Investigation_Buttons_C_Update_Params
{
public:
	struct FStruct_Inventory_ButtonModifyInfo    Modify;                                            // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_Investigation_Buttons.wid_Investigation_Buttons_C.PreConstruct
struct UWid_Investigation_Buttons_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function wid_Investigation_Buttons.wid_Investigation_Buttons_C.ExecuteUbergraph_wid_Investigation_Buttons
struct UWid_Investigation_Buttons_C_ExecuteUbergraph_wid_Investigation_Buttons_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


