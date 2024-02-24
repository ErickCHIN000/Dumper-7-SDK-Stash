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
// Function WBP_Options_InputAction.WBP_Options_InputAction_C.Internal_OnSettingValueUpdated
struct UWBP_Options_InputAction_C_Internal_OnSettingValueUpdated_Params
{
public:
	class UUserWidget*                           SettingsWidget;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function WBP_Options_InputAction.WBP_Options_InputAction_C.CreateWidget
struct UWBP_Options_InputAction_C_CreateWidget_Params
{
public:
	struct FPlayerKeyMapping                     PlayerKeyMapping;                                  // 0x0(0x90)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UOverlay*                              ContainerOverlay;                                  // 0x90(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNWXKeyMappingWidget*                  KeyMappingWidget;                                  // 0x98(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Options_InputKeySelector_C*       CallFunc_Create_ReturnValue;                       // 0xA0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xA8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                          CallFunc_AddChildToOverlay_ReturnValue;            // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function WBP_Options_InputAction.WBP_Options_InputAction_C.CreateKeyMappingWidgets
struct UWBP_Options_InputAction_C_CreateKeyMappingWidgets_Params
{
public:
	class UNWXKeyMappingWidget*                  CallFunc_CreateWidget_KeyMappingWidget;            // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNWXKeyMappingWidget*                  CallFunc_CreateWidget_KeyMappingWidget_1;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMappingInitialized_IsValid;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMappingInitialized_IsValid_1;           // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30A3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXKeyMappingWidget*                  CallFunc_CreateWidget_KeyMappingWidget_2;          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMappingInitialized_IsValid_2;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x92 (0x92 - 0x0)
// Function WBP_Options_InputAction.WBP_Options_InputAction_C.IsMappingGamepad
struct UWBP_Options_InputAction_C_IsMappingGamepad_Params
{
public:
	struct FPlayerKeyMapping                     PlayerKeyMapping;                                  // 0x0(0x90)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         IsGamepad;                                         // 0x90(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Key_IsGamepadKey_ReturnValue;             // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x92 (0x92 - 0x0)
// Function WBP_Options_InputAction.WBP_Options_InputAction_C.IsMappingInitialized
struct UWBP_Options_InputAction_C_IsMappingInitialized_Params
{
public:
	struct FPlayerKeyMapping                     PlayerKeyMapping;                                  // 0x0(0x90)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         IsValid;                                           // 0x90(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x92 (0x92 - 0x0)
// Function WBP_Options_InputAction.WBP_Options_InputAction_C.AddMapping
struct UWBP_Options_InputAction_C_AddMapping_Params
{
public:
	struct FPlayerKeyMapping                     NewMapping;                                        // 0x0(0x90)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         CallFunc_IsMappingGamepad_IsGamepad;               // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMappingInitialized_IsValid;             // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function WBP_Options_InputAction.WBP_Options_InputAction_C.OnMouseEnter
struct UWBP_Options_InputAction_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function WBP_Options_InputAction.WBP_Options_InputAction_C.OnMouseLeave
struct UWBP_Options_InputAction_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x130 (0x130 - 0x0)
// Function WBP_Options_InputAction.WBP_Options_InputAction_C.ExecuteUbergraph_WBP_Options_InputAction
struct UWBP_Options_InputAction_C_ExecuteUbergraph_WBP_Options_InputAction_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_3174[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x40(0x78)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xB8(0x78)(ConstParm)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Options_InputAction.WBP_Options_InputAction_C.OnSettingsValueUpdated__DelegateSignature
struct UWBP_Options_InputAction_C_OnSettingsValueUpdated__DelegateSignature_Params
{
public:
	class UUserWidget*                           SettingsWidget;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


