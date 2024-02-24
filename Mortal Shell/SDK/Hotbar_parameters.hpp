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

// 0xC1 (0xC1 - 0x0)
// Function Hotbar.Hotbar_C.OnDrop
struct UHotbar_C_OnDrop_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         PointerEvent;                                      // 0x38(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                    Operation;                                         // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_99D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDragItem_C*                           K2Node_DynamicCast_AsDrag_Item;                    // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function Hotbar.Hotbar_C.OnDragDetected
struct UHotbar_C_OnDragDetected_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         PointerEvent;                                      // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                    Operation;                                         // 0xA8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDragWidget_C*                         CallFunc_CreateDragDropOperation_ReturnValue;      // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue; // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_AbsoluteToLocal_ReturnValue;              // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x218 (0x218 - 0x0)
// Function Hotbar.Hotbar_C.OnMouseButtonDown
struct UHotbar_C_OnMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_DetectDragIfPressed_ReturnValue;          // 0x160(0xB8)(None)
};

// 0x18 (0x18 - 0x0)
// Function Hotbar.Hotbar_C.ExecuteUbergraph_Hotbar
struct UHotbar_C_ExecuteUbergraph_Hotbar_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A0E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UHotbar_Slot_C*>                K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
};

}
}


