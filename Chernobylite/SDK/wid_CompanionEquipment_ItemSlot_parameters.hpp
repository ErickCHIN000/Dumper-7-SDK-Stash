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

// 0x309 (0x309 - 0x0)
// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.UpdateUpgrades
struct UWid_CompanionEquipment_ItemSlot_C_UpdateUpgrades_Params
{
public:
	struct FInventoryEntry                       InventoryEntry;                                    // 0x0(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FItemEntry                            ItemInfo;                                          // 0x30(0x150)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UWid_Upgrade_Icon_C*                   UpgradeIconWidget;                                 // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          AvailableUpgrades;                                 // 0x188(0x10)(Edit, BlueprintVisible)
	int32                                        Column;                                            // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1851[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Upgrade_Icon_C*                   CallFunc_Create_ReturnValue;                       // 0x1A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniformGridSlot*                      CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x1B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew; // 0x1C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetUpgrades_ReturnValue;                  // 0x1C8(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x1DC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1876[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetUpgradeInfo_isVaid;                    // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1889[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUpgradeEntry                         CallFunc_GetUpgradeInfo_ReturnValue;               // 0x200(0x108)(None)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x218 (0x218 - 0x0)
// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.OnMouseButtonUp
struct UWid_CompanionEquipment_ItemSlot_C_OnMouseButtonUp_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)(None)
};

// 0x4C0 (0x4C0 - 0x0)
// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.GetEquippedItemAndItemInfo
struct UWid_CompanionEquipment_ItemSlot_C_GetEquippedItemAndItemInfo_Params
{
public:
	struct FInventoryEntry                       EquippedItem;                                      // 0x0(0x30)(Parm, OutParm)
	struct FItemEntry                            ItemInfo;                                          // 0x30(0x150)(Parm, OutParm)
	bool                                         IsValid;                                           // 0x180(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_192D[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            LocalItemInfo;                                     // 0x190(0x150)(Edit, BlueprintVisible)
	struct FInventoryEntry                       LocalEquippedItem;                                 // 0x2E0(0x30)(Edit, BlueprintVisible)
	bool                                         CallFunc_IsSlotValid_Result;                       // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1946[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponent2*                  CallFunc_GetCGPlayerInventory_InventoryComponentNew; // 0x318(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItemInfo_IsValid;                      // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1952[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemEntry                            CallFunc_GetItemInfo_ReturnValue;                  // 0x330(0x150)(None)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x480(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CompanionGetEquippedItem_outResult;       // 0x488(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1955[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_CompanionGetEquippedItem_ReturnValue;     // 0x490(0x30)(None)
};

// 0x301 (0x301 - 0x0)
// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.Update
struct UWid_CompanionEquipment_ItemSlot_C_Update_Params
{
public:
	struct FItemEntry                            ItemInfo;                                          // 0x0(0x150)(Edit, BlueprintVisible)
	struct FInventoryEntry                       EquippedItem;                                      // 0x150(0x30)(Edit, BlueprintVisible)
	struct FInventoryEntry                       CallFunc_GetEquippedItemAndItemInfo_EquippedItem;  // 0x180(0x30)(None)
	struct FItemEntry                            CallFunc_GetEquippedItemAndItemInfo_ItemInfo;      // 0x1B0(0x150)(None)
	bool                                         CallFunc_GetEquippedItemAndItemInfo_IsValid;       // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.GetBackgroundBasedOnSelectionType
struct UWid_CompanionEquipment_ItemSlot_C_GetBackgroundBasedOnSelectionType_Params
{
public:
	enum class ECompanionEquipmentSlotSelectionType SelectionType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19F2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Texture;                                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotSelectionType Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Temp_object_Variable;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable_1;                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable_2;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Temp_object_Variable_3;                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.UpdateBackground
struct UWid_CompanionEquipment_ItemSlot_C_UpdateBackground_Params
{
public:
	enum class ECompanionEquipmentSlotSelectionType SelectionType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A6C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetBackgroundBasedOnSelectionType_Texture; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.IsSlotValid
struct UWid_CompanionEquipment_ItemSlot_C_IsSlotValid_Params
{
public:
	bool                                         Result;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.PreConstruct
struct UWid_CompanionEquipment_ItemSlot_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.Init
struct UWid_CompanionEquipment_ItemSlot_C_Init_Params
{
public:
	enum class ECompanionEquipmentSlotType       InSlotType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AE0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  InCompanionID;                                     // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.ExecuteUbergraph_wid_CompanionEquipment_ItemSlot
struct UWid_CompanionEquipment_ItemSlot_C_ExecuteUbergraph_wid_CompanionEquipment_ItemSlot_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B54[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x10(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECompanionEquipmentSlotType       K2Node_CustomEvent_InSlotType;                     // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B68[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_InCompanionID;                  // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0x30(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.OnSelected__DelegateSignature
struct UWid_CompanionEquipment_ItemSlot_C_OnSelected__DelegateSignature_Params
{
public:
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NewIsSelected;                                     // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.OnSlotPressed__DelegateSignature
struct UWid_CompanionEquipment_ItemSlot_C_OnSlotPressed__DelegateSignature_Params
{
public:
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.OnSlotUnhovered__DelegateSignature
struct UWid_CompanionEquipment_ItemSlot_C_OnSlotUnhovered__DelegateSignature_Params
{
public:
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_CompanionEquipment_ItemSlot.wid_CompanionEquipment_ItemSlot_C.OnSlotHovered__DelegateSignature
struct UWid_CompanionEquipment_ItemSlot_C_OnSlotHovered__DelegateSignature_Params
{
public:
	enum class ECompanionEquipmentSlotType       SlotType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


