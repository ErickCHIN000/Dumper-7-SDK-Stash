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

// 0x10 (0x10 - 0x0)
// Function BP_ConsumableComponent.BP_ConsumableComponent_C.GetStatusEffects
struct UBP_ConsumableComponent_C_GetStatusEffects_Params
{
public:
	TArray<struct FStatusEffectLevel>            StatusEffects;                                     // 0x0(0x10)(Parm, OutParm)
};

// 0x10 (0x10 - 0x0)
// Function BP_ConsumableComponent.BP_ConsumableComponent_C.GetGameplayEffects
struct UBP_ConsumableComponent_C_GetGameplayEffects_Params
{
public:
	TArray<class UClass*>                        GameplayEffects;                                   // 0x0(0x10)(Parm, OutParm)
};

// 0x22 (0x22 - 0x0)
// Function BP_ConsumableComponent.BP_ConsumableComponent_C.GetOrCacheAttachParent
struct UBP_ConsumableComponent_C_GetOrCacheAttachParent_Params
{
public:
	class ANWXPlayerCharacter*                   Parent;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetAttachParentActor_ReturnValue;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerCharacter*                   K2Node_DynamicCast_AsNWXPlayer_Character;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x72 (0x72 - 0x0)
// Function BP_ConsumableComponent.BP_ConsumableComponent_C.GetOrCacheInventoryComponent
struct UBP_ConsumableComponent_C_GetOrCacheInventoryComponent_Params
{
public:
	class UInventoryComponentBase*               InventoryComponent;                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue_1;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ANWXPlayerCharacter*                   CallFunc_GetOrCacheAttachParent_Parent;            // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A21[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponentBase*               CallFunc_GetComponentByClass_ReturnValue;          // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_ConsumableComponent.BP_ConsumableComponent_C.GetConsumableAmount
struct UBP_ConsumableComponent_C_GetConsumableAmount_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A4C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerCharacter*                   CallFunc_GetOrCacheAttachParent_Parent;            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetConsumableAmount_Amount;               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_ConsumableComponent.BP_ConsumableComponent_C.RemoveFromInventory
struct UBP_ConsumableComponent_C_RemoveFromInventory_Params
{
public:
	class ANWXPlayerCharacter*                   CallFunc_GetOrCacheAttachParent_Parent;            // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A6E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IEquippableItemUtilityInterface> K2Node_DynamicCast_AsEquippable_Item_Utility_Interface; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x331 (0x331 - 0x0)
// Function BP_ConsumableComponent.BP_ConsumableComponent_C.ApplyConsumableEffects
struct UBP_ConsumableComponent_C_ApplyConsumableEffects_Params
{
public:
	class ANWXPlayerCharacter*                   CallFunc_GetOrCacheAttachParent_Parent;            // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponentBase*               CallFunc_GetOrCacheInventoryComponent_InventoryComponent; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider;      // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A94[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IItemContainer>       CallFunc_GetDefaultContainer_ReturnValue;          // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_5A95[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_GetItem_Entry;                            // 0x40(0x2F0)(None)
	bool                                         CallFunc_GetItem_ReturnValue;                      // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function BP_ConsumableComponent.BP_ConsumableComponent_C.ExecuteUbergraph_BP_ConsumableComponent
struct UBP_ConsumableComponent_C_ExecuteUbergraph_BP_ConsumableComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetInstanceID_ReturnValue;                // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AD9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AEquippableItem*                       K2Node_DynamicCast_AsEquippable_Item;              // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AE3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    CallFunc_GetItemID_OutItemReference;               // 0x30(0x80)(HasGetValueTypeHash)
};

}
}


