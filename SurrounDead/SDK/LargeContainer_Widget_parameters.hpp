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

// 0x9 (0x9 - 0x0)
// Function LargeContainer_Widget.LargeContainer_Widget_C.SetActionbarFollower
struct ULargeContainer_Widget_C_SetActionbarFollower_Params
{
public:
	class UJSI_Slot_C*                           JigRef;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Return;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function LargeContainer_Widget.LargeContainer_Widget_C.GetAllAttachments
struct ULargeContainer_Widget_C_GetAllAttachments_Params
{
public:
	TArray<class FName>                          Attachments;                                       // 0x0(0x10)(Parm, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function LargeContainer_Widget.LargeContainer_Widget_C.GetListOfNonAddContainers
struct ULargeContainer_Widget_C_GetListOfNonAddContainers_Params
{
public:
	TArray<class UJSIContainer_C*>               Containers;                                        // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
};

// 0x19 (0x19 - 0x0)
// Function LargeContainer_Widget.LargeContainer_Widget_C.GetJSIContainerByPlayerSlots
struct ULargeContainer_Widget_C_GetJSIContainerByPlayerSlots_Params
{
public:
	enum class EPlayerSlots                      Slot;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_324A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UJSIContainer_C*                       Container;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UJSI_Slot_C*                           EquippedItem;                                      // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPending_;                                        // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function LargeContainer_Widget.LargeContainer_Widget_C.GetDropWidget
struct ULargeContainer_Widget_C_GetDropWidget_Params
{
public:
	class UDropItemBackGwidget_C*                DropWRef;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function LargeContainer_Widget.LargeContainer_Widget_C.GetListOfContainers
struct ULargeContainer_Widget_C_GetListOfContainers_Params
{
public:
	TArray<class UJSIContainer_C*>               Containers;                                        // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UJSIContainer_C*>               K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x14 (0x14 - 0x0)
// Function LargeContainer_Widget.LargeContainer_Widget_C.GetContainerByAttachmentType
struct ULargeContainer_Widget_C_GetContainerByAttachmentType_Params
{
public:
	enum class EAttachmentType                   Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UJSIContainer_C*                       JigContainer;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        ContainerIndex;                                    // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function LargeContainer_Widget.LargeContainer_Widget_C.SetItemReference
struct ULargeContainer_Widget_C_SetItemReference_Params
{
public:
	class UJSI_Slot_C*                           ItemRef;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function LargeContainer_Widget.LargeContainer_Widget_C.SetActorOwner
struct ULargeContainer_Widget_C_SetActorOwner_Params
{
public:
	class AActor*                                ActorRef;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function LargeContainer_Widget.LargeContainer_Widget_C.JSIOnWeightUpdated
struct ULargeContainer_Widget_C_JSIOnWeightUpdated_Params
{
public:
	double                                       NewWeight;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x71 (0x71 - 0x0)
// Function LargeContainer_Widget.LargeContainer_Widget_C.ExecuteUbergraph_LargeContainer_Widget
struct ULargeContainer_Widget_C_ExecuteUbergraph_LargeContainer_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UJSI_Slot_C*                           K2Node_Event_ItemRef;                              // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_ActorRef;                             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Event_NewWeight;                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_JigMultiplayer_C*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3336[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UJSI_Slot_C*                           CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCount_Count;                           // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_JSI_CheckIfCanAddItemToContainer_Result;  // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3342[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UJSIContainer_C*                       CallFunc_JSI_CheckIfCanAddItemToContainer_AddToContainer; // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_JSI_CheckIfCanAddItemToContainer_ToIndex; // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_JSI_CheckIfCanAddItemToContainer_FinalRotation; // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_JSI_CheckIfCanAddStackItemToContainer_Result; // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3348[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UJSI_Slot_C*                           CallFunc_JSI_CheckIfCanAddStackItemToContainer_WithItem; // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanStack__CanStack;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanStack__FreeSpaceAvailable;             // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3351[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


