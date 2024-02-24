#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_DamageObject_StructureConstructed.BP_DamageObject_StructureConstructed_C
class UBP_DamageObject_StructureConstructed_C : public UBP_StructureDamageObject_C
{
public:

	static class UClass* StaticClass();
	static class UBP_DamageObject_StructureConstructed_C* GetDefaultObj();

	void DropResource(class UObject* Structure, const struct FInventoryEntry& Resource, const struct FTransform& SpawnTransform, bool CallFunc_IsValid_ReturnValue);
	void ApplyPerks(class AActor* DestructionSource, class UAbilitySystemComponent* AbilitySystem, bool CallFunc_IsValid_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess);
	void DropContainerResources(class UObject* Structure, const struct FTransform& DropTransform, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_GetResourceDropTransform_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue, bool CallFunc_GetWorldIsTearingDown_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_FindOwnerActor_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetInventoryContainerInterface_ContainerInterface, bool CallFunc_DoesImplementInterface_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void DoStructureDestroy(class UObject* Structure, class AActor* DestructionSource, bool* Success, bool CallFunc_IsStructureValid_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess);
	void PreStructureDestroy(class UObject* Structure, class AActor* DestructionSource, bool CallFunc_IsStructureValid_ReturnValue, class ANWXPlayerState* CallFunc_GetPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& CallFunc_DeconstructTag_DeconstructTag, bool CallFunc_DoesStructureHaveTag_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue);
	void DropAllResources(class UObject* Structure, class AActor* DeconstructionSource, const struct FTransform& DropTransform, enum class EDeconstructionResourceReturn ResourceReturn, class AActor* LDeconstructionSource, double ReturnPercentage, int32 ResourcesToGrant, const struct FInventoryEntry& Resource, const TArray<struct FInventoryEntry>& InputtedResources, bool DropAll, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double Temp_real_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, double Temp_real_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, double Temp_real_Variable_2, enum class EDeconstructionResourceReturn Temp_byte_Variable, TScriptInterface<class IStructureOriginatorInterface> K2Node_DynamicCast_AsStructure_Originator_Interface, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetResourceDropTransform_ReturnValue, enum class EStructureOriginatorType CallFunc_GetStructureOriginatorType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetWorldIsTearingDown_ReturnValue, const struct FGameplayTag& CallFunc_DropNoneResourcesTag_DropNoneTag, double K2Node_Select_Default, bool CallFunc_IsStateActiveForObject_ReturnValue, const struct FGameplayTag& CallFunc_DropPartialResourcesTag_DropPartialTag, bool CallFunc_IsStateActiveForObject_ReturnValue_1, double CallFunc_Multiply_IntFloat_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetDroppableResources_DroppableResources, int32 CallFunc_Round_ReturnValue, const struct FGameplayTag& CallFunc_DropAllResourcesTag_DropAllTag, bool CallFunc_OwnerHasAuthority_ReturnValue, bool CallFunc_IsStateActiveForObject_ReturnValue_2);
};

}


