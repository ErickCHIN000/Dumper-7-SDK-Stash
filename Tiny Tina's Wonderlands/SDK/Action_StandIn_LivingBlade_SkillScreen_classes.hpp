#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x248 - 0x220)
// BlueprintGeneratedClass Action_StandIn_LivingBlade_SkillScreen.Action_StandIn_LivingBlade_SkillScreen_C
class UAction_StandIn_LivingBlade_SkillScreen_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	TArray<class AAuxActor_LivingBlade_C*>       AuxActor;                                          // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                StandIn;                                           // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              LivingBladeEffects;                                // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_StandIn_LivingBlade_SkillScreen_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void TurnOnEffects();
	void RemoveAuxActor();
	void AssignAuxActor();
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ExecuteUbergraph_Action_StandIn_LivingBlade_SkillScreen(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IBPI_PlayerStandin_C> K2Node_DynamicCast_AsBPI_Player_Standin, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable1, int32 Temp_int_Loop_Counter_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Array_Index_Variable2, class AActor* K2Node_Event_Actor1, class AAuxActor_LivingBlade_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, class AActor* CallFunc_Array_Get_Item1, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class AAuxActor_LivingBlade_C* K2Node_DynamicCast_AsAux_Actor_Living_Blade, bool K2Node_DynamicCast_bSuccess1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue2, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class AAuxActor_LivingBlade_C* CallFunc_Array_Get_Item2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue1, int32 Temp_int_Loop_Counter_Variable2, bool CallFunc_Less_IntInt_ReturnValue2, int32 CallFunc_Add_IntInt_ReturnValue2);
};

}


