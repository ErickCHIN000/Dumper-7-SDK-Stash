#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2A0 - 0x280)
// BlueprintGeneratedClass Action_Barbarian_NowWeSlass.Action_Barbarian_NowWeSlass_C
class UAction_Barbarian_NowWeSlass_C : public UOakAction_Anim_ActionAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              VFX_FirstPersonTrail;                              // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              VFX_ThirdPersonTrail;                              // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_Barbarian_NowWeSlass_C* GetDefaultObj();

	void StopProblematicActions(class AActor* Target);
	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void SlassLanded();
	void InputUnlock();
	void SlassImpact();
	void TrailStop3rd();
	void Notify_TrailStart3rd();
	void OnServerBegin(class AActor* Actor);
	void OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void OnControlledMoveStopped(class UClass* ControlledMove, struct FControlledMoveStopSummary& StopSummary);
	void ExecuteUbergraph_Action_Barbarian_NowWeSlass(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Actor3, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState1, class AActor* K2Node_Event_Actor2, class AActor* CallFunc_K2_GetActor_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_K2_GetActor_ReturnValue2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player2, bool K2Node_DynamicCast_bSuccess2, class AActor* CallFunc_K2_GetActor_ReturnValue3, class AActor* CallFunc_K2_GetActor_ReturnValue4, class AActor* CallFunc_K2_GetActor_ReturnValue5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue6, class AActor* K2Node_Event_Actor1, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue7, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess3, class AActor* CallFunc_K2_GetActor_ReturnValue8, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player3, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_IsValid_ReturnValue, class UGbxCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue2, class AActor* CallFunc_K2_GetActor_ReturnValue9, bool CallFunc_IsValid_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player4, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_IsValid_ReturnValue2, class UGbxCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue3, bool CallFunc_IsValid_ReturnValue3, class UClass* K2Node_CustomEvent_ControlledMove, const struct FControlledMoveStopSummary& K2Node_CustomEvent_StopSummary, bool CallFunc_ClassIsChildOf_ReturnValue, const struct FHitResult& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1);
};

}


