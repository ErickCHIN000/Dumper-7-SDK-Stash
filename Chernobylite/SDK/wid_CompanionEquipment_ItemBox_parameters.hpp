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

// 0x5 (0x5 - 0x0)
// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.Select
struct UWid_CompanionEquipment_ItemBox_C_Select_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotSelectionType K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.Update
struct UWid_CompanionEquipment_ItemBox_C_Update_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetEquippedItemAndItemInfo_EquippedItem;  // 0x8(0x30)(None)
	uint8                                        Pad_20E2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetEquippedItemAndItemInfo_ItemInfo;      // 0x40(0x150)(None)
	bool                                         CallFunc_GetEquippedItemAndItemInfo_IsValid;       // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x198(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.PreConstruct
struct UWid_CompanionEquipment_ItemBox_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.Init
struct UWid_CompanionEquipment_ItemBox_C_Init_Params
{
public:
	class FName                                  Companion;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.BndEvt__ItemSlot_K2Node_ComponentBoundEvent_0_OnSlotHovered__DelegateSignature
struct UWid_CompanionEquipment_ItemBox_C_BndEvt__ItemSlot_K2Node_ComponentBoundEvent_0_OnSlotHovered__DelegateSignature_Params
{
public:
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.BndEvt__ItemSlot_K2Node_ComponentBoundEvent_1_OnSlotUnhovered__DelegateSignature
struct UWid_CompanionEquipment_ItemBox_C_BndEvt__ItemSlot_K2Node_ComponentBoundEvent_1_OnSlotUnhovered__DelegateSignature_Params
{
public:
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.BndEvt__ItemSlot_K2Node_ComponentBoundEvent_2_OnSlotPressed__DelegateSignature
struct UWid_CompanionEquipment_ItemBox_C_BndEvt__ItemSlot_K2Node_ComponentBoundEvent_2_OnSlotPressed__DelegateSignature_Params
{
public:
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.ExecuteUbergraph_wid_CompanionEquipment_ItemBox
struct UWid_CompanionEquipment_ItemBox_C_ExecuteUbergraph_wid_CompanionEquipment_ItemBox_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_Companion;                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x10(0x18)(None)
	enum class ECompanionEquipmentSlotType       K2Node_ComponentBoundEvent_SlotType_2;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       K2Node_ComponentBoundEvent_SlotType_1;             // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       K2Node_ComponentBoundEvent_SlotType;               // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21F0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(ZeroConstructor, NoDestructor)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.OnSelected__DelegateSignature
struct UWid_CompanionEquipment_ItemBox_C_OnSelected__DelegateSignature_Params
{
public:
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSelected;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.OnSlotPressed__DelegateSignature
struct UWid_CompanionEquipment_ItemBox_C_OnSlotPressed__DelegateSignature_Params
{
public:
	class UWid_CompanionEquipment_ItemBox_C*     ItemBox;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.OnSlotUnhovered__DelegateSignature
struct UWid_CompanionEquipment_ItemBox_C_OnSlotUnhovered__DelegateSignature_Params
{
public:
	class UWid_CompanionEquipment_ItemBox_C*     ItemBox;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function wid_CompanionEquipment_ItemBox.wid_CompanionEquipment_ItemBox_C.OnSlotHovered__DelegateSignature
struct UWid_CompanionEquipment_ItemBox_C_OnSlotHovered__DelegateSignature_Params
{
public:
	class UWid_CompanionEquipment_ItemBox_C*     ItemBox;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


