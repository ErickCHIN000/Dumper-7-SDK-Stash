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

// 0x2F0 (0x2F0 - 0x0)
// Function WBP_FuelQueue.WBP_FuelQueue_C.OnActiveEntryUpdated
struct UWBP_FuelQueue_C_OnActiveEntryUpdated_Params
{
public:
	struct FInventoryEntry                       ActiveItem;                                        // 0x0(0x2F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x328 (0x328 - 0x0)
// Function WBP_FuelQueue.WBP_FuelQueue_C.CreateEmptyWidgets
struct UWBP_FuelQueue_C_CreateEmptyWidgets_Params
{
public:
	int32                                        NumItemsDisplayed;                                 // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3856[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       ItemsBeingDisplayed;                               // 0x10(0x2F0)(Edit, BlueprintVisible)
	int32                                        Temp_int_Variable;                                 // 0x300(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x304(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x314(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3866[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_sw_EmptyGridEntry_C*              CallFunc_Create_ReturnValue;                       // 0x318(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUniformGridSlot*                      CallFunc_AddGridItem_ReturnValue;                  // 0x320(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x55 (0x55 - 0x0)
// Function WBP_FuelQueue.WBP_FuelQueue_C.GeneratePadding
struct UWBP_FuelQueue_C_GeneratePadding_Params
{
public:
	int32                                        NumDisplayedStacks;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3899[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_389E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IStructureResourceRequirementsInterface> CallFunc_GetPostConstructionResourceRequirements_ReturnValue; // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FStructureResourceRequirements> CallFunc_GetTotalResourceRequirements_TotalResourceRequirements; // 0x40(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_GetQuantityRemaining_ReturnValue;         // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function WBP_FuelQueue.WBP_FuelQueue_C.UnbindFromEntryWidgets
struct UWBP_FuelQueue_C_UnbindFromEntryWidgets_Params
{
public:
	TArray<class UWidget*>                       LAllSlotWidgets;                                   // 0x0(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38E9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38EF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_sw_GridEntryItem_C*               K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item;       // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x4C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x60(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x2F0 (0x2F0 - 0x0)
// Function WBP_FuelQueue.WBP_FuelQueue_C.OnEntryDoubleClicked
struct UWBP_FuelQueue_C_OnEntryDoubleClicked_Params
{
public:
	struct FInventoryEntry                       ItemEntry;                                         // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x300 (0x300 - 0x0)
// Function WBP_FuelQueue.WBP_FuelQueue_C.OnEntryDragged
struct UWBP_FuelQueue_C_OnEntryDragged_Params
{
public:
	enum class ELoadoutSlotType                  Slot;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Display;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_391F[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       Item;                                              // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x378 (0x378 - 0x0)
// Function WBP_FuelQueue.WBP_FuelQueue_C.UpdateQueue
struct UWBP_FuelQueue_C_UpdateQueue_Params
{
public:
	class UWBP_sw_GridEntryItem_C*               LEntryWidget;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               LNonBurningEntries;                                // 0x8(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3955[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUniformGridSlot*                      CallFunc_AddGridItem_ReturnValue;                  // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x40(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3959[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_sw_GridEntryItem_C*               CallFunc_Create_ReturnValue;                       // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_395C[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_Array_Get_Item;                           // 0x70(0x2F0)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x364(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_395F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               CallFunc_GetNonBurningInventoryEntries_NonBurningEntries; // 0x368(0x10)(ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function WBP_FuelQueue.WBP_FuelQueue_C.OnFuelUpdated
struct UWBP_FuelQueue_C_OnFuelUpdated_Params
{
public:
	TArray<struct FInventoryEntry>               AppliedFuelItems;                                  // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x41 (0x41 - 0x0)
// Function WBP_FuelQueue.WBP_FuelQueue_C.RemoveBindings
struct UWBP_FuelQueue_C_RemoveBindings_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnActiveFuelItemChanged_self_CastInput; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput; // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function WBP_FuelQueue.WBP_FuelQueue_C.SetupBindings
struct UWBP_FuelQueue_C_SetupBindings_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnActiveFuelItemChanged_self_CastInput; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput; // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function WBP_FuelQueue.WBP_FuelQueue_C.Initialize
struct UWBP_FuelQueue_C_Initialize_Params
{
public:
	class ANWXPlayerController*                  PlayerController;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IControllerInteractionInterface> CallFunc_GetLastInteractedActor_self_CastInput;    // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetLastInteractedActor_ReturnValue;       // 0x20(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces;     // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_StructureFuelComponent_C*          CallFunc_GetFuelComponent_FuelComponent;           // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WBP_FuelQueue.WBP_FuelQueue_C.ExecuteUbergraph_WBP_FuelQueue
struct UWBP_FuelQueue_C_ExecuteUbergraph_WBP_FuelQueue_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2F0 (0x2F0 - 0x0)
// Function WBP_FuelQueue.WBP_FuelQueue_C.OnSlotEntryDoubleClicked__DelegateSignature
struct UWBP_FuelQueue_C_OnSlotEntryDoubleClicked__DelegateSignature_Params
{
public:
	struct FInventoryEntry                       InventoryEntry;                                    // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x2F1 (0x2F1 - 0x0)
// Function WBP_FuelQueue.WBP_FuelQueue_C.OnSlotEntryDragged__DelegateSignature
struct UWBP_FuelQueue_C_OnSlotEntryDragged__DelegateSignature_Params
{
public:
	struct FInventoryEntry                       InventoryEntry;                                    // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         IsDragging;                                        // 0x2F0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


