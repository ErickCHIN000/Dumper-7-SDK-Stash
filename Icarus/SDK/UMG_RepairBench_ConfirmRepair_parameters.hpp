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

// 0x48 (0x48 - 0x0)
// Function UMG_RepairBench_ConfirmRepair.UMG_RepairBench_ConfirmRepair_C.Initialise
struct UUMG_RepairBench_ConfirmRepair_C_Initialise_Params
{
public:
	class AActor*                                LinkedActor;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRepairableItem>               ItemsToRepair;                                     // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FRepairableItem>               ItemsNotRepairable;                                // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FQueueItem>                    RequiredResources;                                 // 0x28(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FQueueItem>                    MissingResources;                                  // 0x38(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xC4 (0xC4 - 0x0)
// Function UMG_RepairBench_ConfirmRepair.UMG_RepairBench_ConfirmRepair_C.ExecuteUbergraph_UMG_RepairBench_ConfirmRepair
struct UUMG_RepairBench_ConfirmRepair_C_ExecuteUbergraph_UMG_RepairBench_ConfirmRepair_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_RepairItemResource_C*             CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_LinkedActor;                    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRepairableItem>               K2Node_CustomEvent_ItemsToRepair;                  // 0x20(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FRepairableItem>               K2Node_CustomEvent_ItemsNotRepairable;             // 0x30(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FQueueItem>                    K2Node_CustomEvent_RequiredResources;              // 0x40(0x10)(ConstParm, ReferenceParm)
	TArray<struct FQueueItem>                    K2Node_CustomEvent_MissingResources;               // 0x50(0x10)(ConstParm, ReferenceParm)
	struct FQueueItem                            CallFunc_Array_Get_Item;                           // 0x60(0x30)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 CallFunc_GetQueueItemDetails_Item;                 // 0x94(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetQueueItemDetails_Count;                // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniformGridSlot*                      CallFunc_AddChildToUniformGrid_ReturnValue;        // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1909[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


