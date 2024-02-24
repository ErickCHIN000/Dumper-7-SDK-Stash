#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x239 - 0x220)
// BlueprintGeneratedClass Action_StandIn_Maelstorm.Action_StandIn_Maelstorm_C
class UAction_StandIn_Maelstorm_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class AAuxActor_Shaman_Maelstorm_C*          AuxActor;                                          // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                StandIn;                                           // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPaused;                                          // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAction_StandIn_Maelstorm_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void RemoveAuxActor();
	void AssignAuxActor();
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ShowAuxActor();
	void TurnOnHandEffects();
	void TurnOnRain();
	void ExecuteUbergraph_Action_StandIn_Maelstorm(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* K2Node_Event_Actor1, bool CallFunc_IsValid_ReturnValue1, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, bool Temp_bool_True_if_break_was_hit_Variable, class AActor* CallFunc_Array_Get_Item, class AAuxActor_Shaman_Maelstorm_C* K2Node_DynamicCast_AsAux_Actor_Shaman_Maelstorm, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4);
};

}


