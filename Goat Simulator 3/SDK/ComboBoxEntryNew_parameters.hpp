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

// 0x268 (0x268 - 0x0)
// Function ComboBoxEntryNew.ComboBoxEntryNew_C.OnFocusReceived
struct UComboBoxEntryNew_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)(None)
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue;                 // 0x1B0(0xB8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ComboBoxEntryNew.ComboBoxEntryNew_C.OnAddedToFocusPath
struct UComboBoxEntryNew_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ComboBoxEntryNew.ComboBoxEntryNew_C.OnRemovedFromFocusPath
struct UComboBoxEntryNew_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function ComboBoxEntryNew.ComboBoxEntryNew_C.SetEntry
struct UComboBoxEntryNew_C_SetEntry_Params
{
public:
	class FText                                  StringEntry;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function ComboBoxEntryNew.ComboBoxEntryNew_C.SetSelected
struct UComboBoxEntryNew_C_SetSelected_Params
{
public:
	bool                                         IsSelected;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x98 (0x98 - 0x0)
// Function ComboBoxEntryNew.ComboBoxEntryNew_C.ExecuteUbergraph_ComboBoxEntryNew
struct UComboBoxEntryNew_C_ExecuteUbergraph_ComboBoxEntryNew_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0x4(0x8)(NoDestructor)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0xC(0x8)(NoDestructor)
	uint8                                        Pad_A2F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_CustomEvent_StringEntry;                    // 0x28(0x18)(None)
	bool                                         K2Node_CustomEvent_IsSelected;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A34[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x48(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x70(0x28)(None)
};

}
}


