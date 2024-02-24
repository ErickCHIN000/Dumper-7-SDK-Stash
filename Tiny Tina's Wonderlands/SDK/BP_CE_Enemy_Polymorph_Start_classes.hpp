#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x161 - 0x148)
// BlueprintGeneratedClass BP_CE_Enemy_Polymorph_Start.BP_CE_Enemy_Polymorph_Start_C
class UBP_CE_Enemy_Polymorph_Start_C : public UOakAction_CoordinatedEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x148(0x8)(Transient, DuplicateTransient)
	class UWwiseEvent*                           Audio_SpawnIn;                                     // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTeam*                                 MyTeam;                                            // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMovementMode                     PreviousMoveMode;                                  // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CE_Enemy_Polymorph_Start_C* GetDefaultObj();

	void TogglePolymorphLocks(class AActor* PolymorphTarget, bool EnableLocks, class UTeam* StartingTeam, bool* Res, class UTeam* LocalStartingTeam, bool LocalEnableLocks, class AActor* LocalPolymorphTarget, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UTargetableComponent* CallFunc_GetComponentByClass_ReturnValue1, class UGameplayTagContainerComponent* CallFunc_GetComponentByClass_ReturnValue2, bool CallFunc_RemoveGameplayTag_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions1, bool K2Node_DynamicCast_bSuccess1, class UTeamComponent* CallFunc_GetComponentByClass_ReturnValue3, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class USceneComponent* CallFunc_Array_Get_Item, class UParticleSystemComponent* K2Node_DynamicCast_AsParticle_System_Component, bool K2Node_DynamicCast_bSuccess3);
	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ExecuteUbergraph_BP_CE_Enemy_Polymorph_Start(int32 EntryPoint, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class AActor* K2Node_Event_Actor1, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Enemy_OnPolymorphStart_Res, bool CallFunc_TogglePolymorphLocks_Res, class UTeamComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, bool CallFunc_TogglePolymorphLocks_Res1);
};

}


