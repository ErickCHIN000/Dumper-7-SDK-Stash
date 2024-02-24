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

// 0x370 (0x370 - 0x0)
// Function BPFL_Items_Containers.BPFL_Items_Containers_C.ClaimItem
struct UBPFL_Items_Containers_C_ClaimItem_Params
{
public:
	class AActor*                                ClaimingActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               ItemSource;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       ItemToClaim;                                       // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         bIgnoreCapacity;                                   // 0x300(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x310(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A87[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuid>                         ClaimedInstances;                                  // 0x318(0x10)(Parm, OutParm)
	TArray<struct FInventoryEntry>               UnclaimedItems;                                    // 0x328(0x10)(Parm, OutParm)
	TArray<struct FInventoryEntry>               K2Node_MakeArray_Array;                            // 0x338(0x10)(ReferenceParm)
	bool                                         CallFunc_ClaimItems_bSuccess;                      // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A94[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuid>                         CallFunc_ClaimItems_ClaimedInstances;              // 0x350(0x10)(ReferenceParm)
	TArray<struct FInventoryEntry>               CallFunc_ClaimItems_UnclaimedItems;                // 0x360(0x10)(ReferenceParm)
};

// 0xA0 (0xA0 - 0x0)
// Function BPFL_Items_Containers.BPFL_Items_Containers_C.ClaimItems
struct UBPFL_Items_Containers_C_ClaimItems_Params
{
public:
	class AActor*                                ClaimingActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               ItemSource;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntry>               ItemsToClaim;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bIgnoreCapacity;                                   // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AF2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AF8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuid>                         ClaimedInstances;                                  // 0x38(0x10)(Parm, OutParm)
	TArray<struct FInventoryEntry>               UnclaimedItems;                                    // 0x48(0x10)(Parm, OutParm)
	TArray<struct FGuid>                         K2Node_MakeArray_Array;                            // 0x58(0x10)(ReferenceParm)
	bool                                         CallFunc_OwnerHasAuthority_ReturnValue;            // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B00[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_ItemClaim_C*                       CallFunc_GetDefaultObject_ReturnValue;             // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClaimItem_bSuccess;                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B06[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuid>                         CallFunc_ClaimItem_ClaimedInstances;               // 0x80(0x10)(ReferenceParm)
	TArray<struct FInventoryEntry>               CallFunc_ClaimItem_UnclaimedItems;                 // 0x90(0x10)(ReferenceParm)
};

// 0x38 (0x38 - 0x0)
// Function BPFL_Items_Containers.BPFL_Items_Containers_C.GetAllPlayerContainerItemIds
struct UBPFL_Items_Containers_C_GetAllPlayerContainerItemIds_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemDataReference>            ContainerIReferences;                              // 0x8(0x10)(Parm, OutParm)
	TArray<struct FItemDataReference>            ContainerItemReferences;                           // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<struct FItemDataReference>            K2Node_MakeArray_Array;                            // 0x28(0x10)(ReferenceParm)
};

// 0x691 (0x691 - 0x0)
// Function BPFL_Items_Containers.BPFL_Items_Containers_C.GetInventoryItemFromBackpack
struct UBPFL_Items_Containers_C_GetInventoryItemFromBackpack_Params
{
public:
	class APawn*                                 TargetPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 InstanceID;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B6C[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       InventoryEntry;                                    // 0x30(0x2F0)(Parm, OutParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B6F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x328(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B71[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponentBase*               CallFunc_GetComponentByClass_ReturnValue;          // 0x338(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B76[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetBackpack_Container;                    // 0x348(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_GetBackpack_ReturnValue;                  // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B78[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x360(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue_1;            // 0x370(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x380(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x390(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FInventoryEntry                       CallFunc_GetItem_Entry;                            // 0x3A0(0x2F0)(None)
	bool                                         CallFunc_GetItem_ReturnValue;                      // 0x690(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x92D (0x92D - 0x0)
// Function BPFL_Items_Containers.BPFL_Items_Containers_C.ContainerHasEquivalentItem
struct UBPFL_Items_Containers_C_ContainerHasEquivalentItem_Params
{
public:
	TScriptInterface<class IItemContainer>       Container;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       ItemEntry;                                         // 0x10(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x308(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BAF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 MatchingGuid;                                      // 0x30C(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BB4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CurrentEntry;                                      // 0x320(0x2F0)(Edit, BlueprintVisible)
	TArray<struct FInventoryEntry>               CallFunc_GetAllItems_Entries;                      // 0x610(0x10)(ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x620(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x624(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BB9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_Array_Get_Item;                           // 0x630(0x2F0)(None)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x920(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x924(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BC0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x928(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreItemsEquivalent_ReturnValue;           // 0x92C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


