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
// Function ListEmbeddedButton.ListEmbeddedButton_C.OnFocusReceived
struct UListEmbeddedButton_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xF8(0xB8)(None)
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue;                 // 0x1B0(0xB8)(None)
};

// 0x8 (0x8 - 0x0)
// Function ListEmbeddedButton.ListEmbeddedButton_C.OnRemovedFromFocusPath
struct UListEmbeddedButton_C_OnRemovedFromFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ListEmbeddedButton.ListEmbeddedButton_C.PreConstruct
struct UListEmbeddedButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ListEmbeddedButton.ListEmbeddedButton_C.OnAddedToFocusPath
struct UListEmbeddedButton_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function ListEmbeddedButton.ListEmbeddedButton_C.SetCaption
struct UListEmbeddedButton_C_SetCaption_Params
{
public:
	class FText                                  NewCaption;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function ListEmbeddedButton.ListEmbeddedButton_C.SetIcon
struct UListEmbeddedButton_C_SetIcon_Params
{
public:
	class UTexture2D*                            New_Icon;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6A (0x6A - 0x0)
// Function ListEmbeddedButton.ListEmbeddedButton_C.ExecuteUbergraph_ListEmbeddedButton
struct UListEmbeddedButton_C_ExecuteUbergraph_ListEmbeddedButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent_1;                       // 0x4(0x8)(NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A71[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UScaleBoxSlot*                         K2Node_DynamicCast_AsScale_Box_Slot;               // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A79[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x30(0x8)(NoDestructor)
	class FText                                  K2Node_CustomEvent_NewCaption;                     // 0x38(0x18)(None)
	class UTexture2D*                            K2Node_CustomEvent_New_Icon;                       // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A8D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UButtonSlot*                           K2Node_DynamicCast_AsButton_Slot;                  // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


