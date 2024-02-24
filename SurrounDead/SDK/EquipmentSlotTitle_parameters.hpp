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

// 0x220 (0x220 - 0x0)
// Function EquipmentSlotTitle.EquipmentSlotTitle_C.OnMouseButtonDoubleClick
struct UEquipmentSlotTitle_C_OnMouseButtonDoubleClick_Params
{
public:
	struct FGeometry                             InMyGeometry;                                      // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         InMouseEvent;                                      // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x168(0xB8)(None)
};

// 0x238 (0x238 - 0x0)
// Function EquipmentSlotTitle.EquipmentSlotTitle_C.OnMouseButtonDown
struct UEquipmentSlotTitle_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xB0(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x168(0xB8)(None)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x220(0x18)(HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EquipmentSlotTitle.EquipmentSlotTitle_C.IsEmptyEquipmentSlot
struct UEquipmentSlotTitle_C_IsEmptyEquipmentSlot_Params
{
public:
	bool                                         IsEmpty;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function EquipmentSlotTitle.EquipmentSlotTitle_C.PreConstruct
struct UEquipmentSlotTitle_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function EquipmentSlotTitle.EquipmentSlotTitle_C.UpdateName
struct UEquipmentSlotTitle_C_UpdateName_Params
{
public:
	class FText                                  SlotName;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x14 (0x14 - 0x0)
// Function EquipmentSlotTitle.EquipmentSlotTitle_C.UpdateTextColor
struct UEquipmentSlotTitle_C_UpdateTextColor_Params
{
public:
	struct FSlateColor                           Color;                                             // 0x0(0x14)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xA8 (0xA8 - 0x0)
// Function EquipmentSlotTitle.EquipmentSlotTitle_C.ExecuteUbergraph_EquipmentSlotTitle
struct UEquipmentSlotTitle_C_ExecuteUbergraph_EquipmentSlotTitle_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_CustomEvent_SlotName;                       // 0x8(0x18)(None)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x28(0x58)(HasGetValueTypeHash)
	class UBorderSlot*                           CallFunc_SlotAsBorderSlot_ReturnValue;             // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_CustomEvent_Color;                          // 0x8C(0x14)(None)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_MakeStruct_Size_ImplicitCast;               // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function EquipmentSlotTitle.EquipmentSlotTitle_C.OnWidgetMouseButtonDown__DelegateSignature
struct UEquipmentSlotTitle_C_OnWidgetMouseButtonDown__DelegateSignature_Params
{
public:
	struct FKey                                  Button;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1F8 (0x1F8 - 0x0)
// Function EquipmentSlotTitle.EquipmentSlotTitle_C.ItemDropped__DelegateSignature
struct UEquipmentSlotTitle_C_ItemDropped__DelegateSignature_Params
{
public:
	class UJSIContainer_C*                       FromContainer;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UEquipmentSlotTitle_C*                 EquipmentSlotRef;                                  // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UJSI_Slot_C*                           NewSlotRef;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFItemInfo                            PickupItemInfo;                                    // 0x18(0x1D9)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9C9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


