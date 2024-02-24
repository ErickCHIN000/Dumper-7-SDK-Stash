#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2A0 - 0x280)
// BlueprintGeneratedClass Action_LivingBlade_SpawnAnim.Action_LivingBlade_SpawnAnim_C
class UAction_LivingBlade_SpawnAnim_C : public UOakAction_Anim_ActionAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       HandFX;                                            // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter*                         OakChar;                                           // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_LivingBlade_SpawnAnim_C* GetDefaultObj();

	void LivingBlade_Spawn();
	void OnServerBegin(class AActor* Actor);
	void Audio_LivingBlade_Activate();
	void Audio_LivingBlade_Move();
	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_Action_LivingBlade_SpawnAnim(int32 EntryPoint, bool CallFunc_IsLocallyControlled_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* K2Node_Event_Actor1, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_K2_GetActor_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_K2_GetActor_ReturnValue2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess2, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue3, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess3, class USkeletalMeshComponent* CallFunc_GetFirstPersonMesh_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1);
};

}


