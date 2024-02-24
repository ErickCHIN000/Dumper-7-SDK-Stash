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

// 0x80 (0x80 - 0x0)
// Function wid_DialogueChoice_Buttons.wid_DialogueChoice_Buttons_C.SetFont
struct UWid_DialogueChoice_Buttons_C_SetFont_Params
{
public:
	class UWid_Inventory_Buttons_Entry_C*        Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFontOutlineSettings                  K2Node_MakeStruct_FontOutlineSettings;             // 0x8(0x20)(NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x28(0x58)(UObjectWrapper, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function wid_DialogueChoice_Buttons.wid_DialogueChoice_Buttons_C.Update
struct UWid_DialogueChoice_Buttons_C_Update_Params
{
public:
	struct FStruct_Inventory_ButtonModifyInfo    Modify;                                            // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function wid_DialogueChoice_Buttons.wid_DialogueChoice_Buttons_C.Tick
struct UWid_DialogueChoice_Buttons_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_DialogueChoice_Buttons.wid_DialogueChoice_Buttons_C.PreConstruct
struct UWid_DialogueChoice_Buttons_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function wid_DialogueChoice_Buttons.wid_DialogueChoice_Buttons_C.ExecuteUbergraph_wid_DialogueChoice_Buttons
struct UWid_DialogueChoice_Buttons_C_ExecuteUbergraph_wid_DialogueChoice_Buttons_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


