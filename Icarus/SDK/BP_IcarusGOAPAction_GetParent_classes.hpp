#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x80 - 0x80)
// BlueprintGeneratedClass BP_IcarusGOAPAction_GetParent.BP_IcarusGOAPAction_GetParent_C
class UBP_IcarusGOAPAction_GetParent_C : public UBP_IcarusGOAPAction_Base_C
{
public:

	static class UClass* StaticClass();
	static class UBP_IcarusGOAPAction_GetParent_C* GetDefaultObj();

	bool CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, class FName ParentCharacterKey, bool Temp_bool_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UIcarusTamingComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckContextualPreconditions_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IAITargetable> K2Node_DynamicCast_AsAITargetable, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsActorAlive_ReturnValue);
	void IsTargetValidParent(class AIcarusNPCGOAPCharacter* TargetActor, bool* ValidParent, const struct FGameplayTag& ParentCreatureType, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsGameplayTagValid_ReturnValue, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup, enum class EValid CallFunc_GetAISetupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess_1, const struct FAICreatureType& CallFunc_GetAICreatureTypeStruct_AICreatureType, enum class EValid CallFunc_GetAICreatureTypeStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FAISetup& CallFunc_GetAISetupStruct_AISetup_1, enum class EValid CallFunc_GetAISetupStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_MatchesTag_ReturnValue, const struct FAICreatureType& CallFunc_GetAICreatureTypeStruct_AICreatureType_1, enum class EValid CallFunc_GetAICreatureTypeStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_3, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, enum class ERelationshipType CallFunc_IsHostileTowards_OutRelationshipSwitch, enum class ERelationshipType CallFunc_IsHostileTowards_OutRelationshipType, bool K2Node_SwitchEnum_CmpSuccess_4);
	bool Execute(class AIcarusNPCGOAPController* Controller, float Delta, const TArray<class AActor*>& NearbyNPCs, class FName ParentCharacterKey, class APawn* ControlledPawn, float SearchRadius, bool Temp_bool_Variable, bool CallFunc_Execute_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, TScriptInterface<class IAITargetable> K2Node_DynamicCast_AsAITargetable, bool K2Node_DynamicCast_bSuccess, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsActorAlive_ReturnValue, bool CallFunc_IsTargetValidParent_ValidParent, bool CallFunc_CompleteCurrentAction_ReturnValue, class UIcarusTamingComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CompleteCurrentAction_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CompleteCurrentAction_ReturnValue_2, bool CallFunc_CompleteCurrentAction_ReturnValue_3, bool Temp_bool_Variable_1, bool CallFunc_Array_RemoveItem_ReturnValue, TArray<class AIcarusNPCGOAPCharacter*>& CallFunc_GetActorsOfClassInWorld_OutActors, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IAITargetable> K2Node_DynamicCast_AsAITargetable_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsActorAlive_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


