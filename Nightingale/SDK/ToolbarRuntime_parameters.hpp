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

// 0x18 (0x18 - 0x0)
// Function ToolbarRuntime.ToolbarAccessInterface.FindToolbarArrangement_BP
struct IToolbarAccessInterface_FindToolbarArrangement_BP_Params
{
public:
	enum class EToolbarArrangement               Arrangement;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_193[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolbarArrangementInterface> ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.UnbindAllDelegates
struct IToolbarArrangementInterface_UnbindAllDelegates_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.SwapToolbarSlots
struct IToolbarArrangementInterface_SwapToolbarSlots_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherSlotIndex;                                    // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.SelectToolbarSlotByIndex
struct IToolbarArrangementInterface_SelectToolbarSlotByIndex_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.RemoveInventoryEntryFromToolbar
struct IToolbarArrangementInterface_RemoveInventoryEntryFromToolbar_Params
{
public:
	struct FGuid                                 InventoryEntryInstanceId;                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.IsSlotEntryAtIndexEmpty
struct IToolbarArrangementInterface_IsSlotEntryAtIndexEmpty_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A8[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.IsSelectedSlotEmpty
struct IToolbarArrangementInterface_IsSelectedSlotEmpty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.IsInventoryEntryInToolbar
struct IToolbarArrangementInterface_IsInventoryEntryInToolbar_Params
{
public:
	struct FGuid                                 InventoryEntryInstanceId;                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.GetToolbarSize
struct IToolbarArrangementInterface_GetToolbarSize_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.GetSlotEntryObjectAtIndex
struct IToolbarArrangementInterface_GetSlotEntryObjectAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IToolbarSlotEntryObjectInterface> ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.GetSelectedSlotIndex
struct IToolbarArrangementInterface_GetSelectedSlotIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.GetSelectedSlotEntryObject
struct IToolbarArrangementInterface_GetSelectedSlotEntryObject_Params
{
public:
	TScriptInterface<class IToolbarSlotEntryObjectInterface> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.GetGameplayTagForLoadoutSlot
struct IToolbarArrangementInterface_GetGameplayTagForLoadoutSlot_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.FindSlotIndexForNewSlotEntry
struct IToolbarArrangementInterface_FindSlotIndexForNewSlotEntry_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.ClearToolbarSlot
struct IToolbarArrangementInterface_ClearToolbarSlot_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.CanAssignInventoryEntry
struct IToolbarArrangementInterface_CanAssignInventoryEntry_Params
{
public:
	struct FGuid                                 InventoryEntryInstanceId;                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C0[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.BindDelegate_OnToolbarSlotEntryChanged
struct IToolbarArrangementInterface_BindDelegate_OnToolbarSlotEntryChanged_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.BindDelegate_OnToolbarArrangementChanged
struct IToolbarArrangementInterface_BindDelegate_OnToolbarArrangementChanged_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.BindDelegate_OnSelectedSlotIndexChanged
struct IToolbarArrangementInterface_BindDelegate_OnSelectedSlotIndexChanged_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ToolbarRuntime.ToolbarArrangementInterface.AssignInventoryEntryToToolbarSlot
struct IToolbarArrangementInterface_AssignInventoryEntryToToolbarSlot_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 InventoryEntryInstanceId;                          // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction ToolbarRuntime.ToolbarComponent.ToolbarSlotEntryChangedMulticastDelegate__DelegateSignature
struct UToolbarComponent_ToolbarSlotEntryChangedMulticastDelegate__DelegateSignature_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction ToolbarRuntime.ToolbarComponent.ToolbarSelectedSlotIndexChangedMulticastDelegate__DelegateSignature
struct UToolbarComponent_ToolbarSelectedSlotIndexChangedMulticastDelegate__DelegateSignature_Params
{
public:
	int32                                        OldSelectedIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewSelectedIndex;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ToolbarRuntime.ToolbarComponent.ReplaceEntryAtIndex
struct UToolbarComponent_ReplaceEntryAtIndex_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UToolbarSlotEntryBase*                 NewEntry;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ToolbarRuntime.ToolbarComponent.OnRep_ToolbarEntryObjects
struct UToolbarComponent_OnRep_ToolbarEntryObjects_Params
{
public:
	TArray<class UToolbarSlotEntryBase*>         OldToolbarEntryObjects;                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ToolbarRuntime.ToolbarComponent.OnRep_SelectedSlotIndex
struct UToolbarComponent_OnRep_SelectedSlotIndex_Params
{
public:
	int32                                        OldSlotIndex;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ToolbarRuntime.ToolbarComponent.OnPossessedPawnChanged
struct UToolbarComponent_OnPossessedPawnChanged_Params
{
public:
	class APawn*                                 OldPawn;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 NewPawn;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ToolbarRuntime.ToolbarComponent.ConstructSlotEntry
struct UToolbarComponent_ConstructSlotEntry_Params
{
public:
	TSubclassOf<class UToolbarSlotEntryBase>     SlotEntryClass;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InitialSlotIndex;                                  // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UToolbarSlotEntryBase*                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ToolbarRuntime.ToolbarComponent.Auth_SwapToolbarSlots
struct UToolbarComponent_Auth_SwapToolbarSlots_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherSlotIndex;                                    // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ToolbarRuntime.ToolbarComponent.Auth_RemoveInventoryEntryFromToolbar
struct UToolbarComponent_Auth_RemoveInventoryEntryFromToolbar_Params
{
public:
	struct FGuid                                 InventoryEntryInstanceId;                          // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ToolbarRuntime.ToolbarComponent.Auth_ClearToolbarSlot
struct UToolbarComponent_Auth_ClearToolbarSlot_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ToolbarRuntime.ToolbarComponent.Auth_AssignInventoryEntryToToolbarSlot
struct UToolbarComponent_Auth_AssignInventoryEntryToToolbarSlot_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 InventoryEntryInstanceId;                          // 0x4(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ToolbarRuntime.ToolbarInputInterface.Client_ToggleCurrentToolbarSlot
struct IToolbarInputInterface_Client_ToggleCurrentToolbarSlot_Params
{
public:
	enum class EToolbarArrangement               Arrangement;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ToolbarRuntime.ToolbarInputInterface.Client_SelectToolbarSlotByIndex
struct IToolbarInputInterface_Client_SelectToolbarSlotByIndex_Params
{
public:
	enum class EToolbarArrangement               Arrangement;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SlotIndex;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ToolbarRuntime.ToolbarInputInterface.Client_SelectPreviousToolbarSlot
struct IToolbarInputInterface_Client_SelectPreviousToolbarSlot_Params
{
public:
	enum class EToolbarArrangement               Arrangement;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ToolbarRuntime.ToolbarInputInterface.Client_SelectNextToolbarSlot
struct IToolbarInputInterface_Client_SelectNextToolbarSlot_Params
{
public:
	enum class EToolbarArrangement               Arrangement;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ToolbarRuntime.ToolbarEntryStackCharacteristic.UpdateStackSize
struct UToolbarEntryStackCharacteristic_UpdateStackSize_Params
{
public:
	int32                                        NewStackSize;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ToolbarRuntime.ToolbarEntryStackCharacteristic.GetStackSize
struct UToolbarEntryStackCharacteristic_GetStackSize_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ToolbarRuntime.ToolbarEntryDurabilityCharacteristic.UpdateDurability
struct UToolbarEntryDurabilityCharacteristic_UpdateDurability_Params
{
public:
	struct FItemInstanceDurabilityData           NewDurabilityData;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F2[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ToolbarRuntime.ToolbarEntryDurabilityCharacteristic.GetDurability
struct UToolbarEntryDurabilityCharacteristic_GetDurability_Params
{
public:
	struct FItemInstanceDurabilityData           ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ToolbarRuntime.ToolbarEntryQualityCharacteristic.UpdateQuality
struct UToolbarEntryQualityCharacteristic_UpdateQuality_Params
{
public:
	enum class EItemQuality                      NewQuality;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ToolbarRuntime.ToolbarEntryQualityCharacteristic.GetQuality
struct UToolbarEntryQualityCharacteristic_GetQuality_Params
{
public:
	enum class EItemQuality                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ToolbarRuntime.ToolbarSlotEntryBase.HasAuthority
struct UToolbarSlotEntryBase_HasAuthority_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ToolbarRuntime.ToolbarSlotEntryBase.GetSlotIndex
struct UToolbarSlotEntryBase_GetSlotIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ToolbarRuntime.ToolbarSlotEntryBase.GetOwningController
struct UToolbarSlotEntryBase_GetOwningController_Params
{
public:
	class APlayerController*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ToolbarRuntime.ToolbarSlotEntryObjectInterface.UnbindAllDelegates
struct IToolbarSlotEntryObjectInterface_UnbindAllDelegates_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ToolbarRuntime.ToolbarSlotEntryObjectInterface.GetTooltipWidget
struct IToolbarSlotEntryObjectInterface_GetTooltipWidget_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ToolbarRuntime.ToolbarSlotEntryObjectInterface.GetStackCharacteristic
struct IToolbarSlotEntryObjectInterface_GetStackCharacteristic_Params
{
public:
	class UToolbarEntryStackCharacteristic*      ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ToolbarRuntime.ToolbarSlotEntryObjectInterface.GetQualityCharacteristic
struct IToolbarSlotEntryObjectInterface_GetQualityCharacteristic_Params
{
public:
	class UToolbarEntryQualityCharacteristic*    ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ToolbarRuntime.ToolbarSlotEntryObjectInterface.GetIconTexture
struct IToolbarSlotEntryObjectInterface_GetIconTexture_Params
{
public:
	class UTexture2D*                            ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ToolbarRuntime.ToolbarSlotEntryObjectInterface.GetDurabilityCharacteristic
struct IToolbarSlotEntryObjectInterface_GetDurabilityCharacteristic_Params
{
public:
	class UToolbarEntryDurabilityCharacteristic* ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ToolbarRuntime.ToolbarSlotEntryObjectInterface.GetDragAndDropOperation
struct IToolbarSlotEntryObjectInterface_GetDragAndDropOperation_Params
{
public:
	class UDragDropOperation*                    ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ToolbarRuntime.ToolbarSlotEntryObjectInterface.BindDelegateTo_OnToolbarSlotEntryUpdated
struct IToolbarSlotEntryObjectInterface_BindDelegateTo_OnToolbarSlotEntryUpdated_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ToolbarRuntime.ToolbarSlotEntryWidgetInterface.SetSlotIndex
struct IToolbarSlotEntryWidgetInterface_SetSlotIndex_Params
{
public:
	int32                                        SlotIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ToolbarRuntime.ToolbarSlotEntryWidgetInterface.SetSlotEntry
struct IToolbarSlotEntryWidgetInterface_SetSlotEntry_Params
{
public:
	TScriptInterface<class IToolbarSlotEntryObjectInterface> SlotEntryObject;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


