#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E (0xE0 - 0xC2)
// BlueprintGeneratedClass AIA_Creature_NPCFreelance_GhostStructureConstruction.AIA_Creature_NPCFreelance_GhostStructureConstruction_C
class UAIA_Creature_NPCFreelance_GhostStructureConstruction_C : public UAIA_Creature_NPCFreelance_C
{
public:
	uint8                                        Pad_45CA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MinDistance;                                       // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxDistance;                                       // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          StructureTagType;                                  // 0xD8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_Creature_NPCFreelance_GhostStructureConstruction_C* GetDefaultObj();

	bool CheckTargetRequirements(class AActor* Target, const struct FInventoryEntry& Entry, const struct FGameplayTagContainer& ResourcePropertiesContainer, const TArray<struct FStructureResourceRequirements>& Requirements, int32 Temp_int_Array_Index_Variable, bool CallFunc_CheckTargetRequirements_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<struct FStructureResourceRequirements>& Temp_struct_Variable, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class ISchematicInfoInterface> K2Node_DynamicCast_AsSchematic_Info_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetCompanionSearchParameters_SearchLocation, float CallFunc_GetCompanionSearchParameters_SearchRadius, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirements_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FStructureResourceRequirements& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsConstraintMet_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetQuantityRemaining_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_GetCompanionSearchParameters_DesiredSearchRadius_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast);
	bool Initialize(class AAIC_Creature_NPC_Villager_C* K2Node_DynamicCast_AsAIC_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Initialize_ReturnValue);
	float GetNormalizedScore(class AActor* Target, class APawn* CallFunc_GetOwnerPawn_ReturnValue, double CallFunc_GetNormalizedDistanceScore_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	bool CheckStaticTargetRequirements(class AActor* Target, const struct FGameplayTagContainer& LTargetGameplayTags, class UAbilitySystemComponent* LAbilitySystem, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasTag_ReturnValue_1);
};

}


