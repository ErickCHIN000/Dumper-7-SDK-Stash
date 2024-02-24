#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x230 - 0x220)
// BlueprintGeneratedClass Action_StandIn_ReaperOfSouls.Action_StandIn_ReaperOfSouls_C
class UAction_StandIn_ReaperOfSouls_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              ReaperEffects;                                     // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_StandIn_ReaperOfSouls_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void NotifyReaperStart();
	void TurnOnEffects();
	void ExecuteUbergraph_Action_StandIn_ReaperOfSouls(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, TScriptInterface<class IBPI_PlayerStandin_C> K2Node_DynamicCast_AsBPI_Player_Standin, bool K2Node_DynamicCast_bSuccess, class UGbxAction* CallFunc_K2Play_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


