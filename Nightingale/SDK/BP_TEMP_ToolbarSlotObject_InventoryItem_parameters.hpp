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

// 0x3F9 (0x3F9 - 0x0)
// Function BP_TEMP_ToolbarSlotObject_InventoryItem.BP_TEMP_ToolbarSlotObject_InventoryItem_C.GetDragAndDropOperation_BP
struct UBP_TEMP_ToolbarSlotObject_InventoryItem_C_GetDragAndDropOperation_BP_Params
{
public:
	class UDragDropOperation*                    ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class UDragOperation_Item_C*                 CallFunc_CreateDragDropOperation_ReturnValue;      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_GetIconTexture_ReturnValue;               // 0x10(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DEA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x20(0xD0)(None)
	struct FInventoryEntry                       CallFunc_GetInventoryEntry_ReturnValue;            // 0xF0(0x2F0)(ConstParm)
	int32                                        CallFunc_GetSlotIndex_ReturnValue;                 // 0x3E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DF0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetOwningController_ReturnValue;          // 0x3E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_GridItem_Draggable_C*             CallFunc_Create_ReturnValue;                       // 0x3F0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x310 (0x310 - 0x0)
// Function BP_TEMP_ToolbarSlotObject_InventoryItem.BP_TEMP_ToolbarSlotObject_InventoryItem_C.GetTooltipWidget_BP
struct UBP_TEMP_ToolbarSlotObject_InventoryItem_C_GetTooltipWidget_BP_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E17[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetInventoryEntry_ReturnValue;            // 0x10(0x2F0)(ConstParm)
	class APlayerController*                     CallFunc_GetOwningController_ReturnValue;          // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_ItemTooltip_C*                    CallFunc_Create_ReturnValue;                       // 0x308(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x311 (0x311 - 0x0)
// Function BP_TEMP_ToolbarSlotObject_InventoryItem.BP_TEMP_ToolbarSlotObject_InventoryItem_C.IsSameInventoryEntry
struct UBP_TEMP_ToolbarSlotObject_InventoryItem_C_IsSameInventoryEntry_Params
{
public:
	struct FGuid                                 OtherItemInstanceId;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSameInventoryEntry;                              // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E4B[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetInventoryEntry_ReturnValue;            // 0x20(0x2F0)(ConstParm)
	bool                                         CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


