#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x248 - 0x230)
// BlueprintGeneratedClass Action_TED_Reload_Zeus_Base.Action_TED_Reload_Zeus_Base_C
class UAction_TED_Reload_Zeus_Base_C : public UAction_PS_TED_Reload_Master_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              HandFX;                                            // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWeapon*                               ActiveWeapon;                                      // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_TED_Reload_Zeus_Base_C* GetDefaultObj();

	void OnBeginBringUpWeapon(class AActor* Actor);
	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void StartHandFX();
	void StopHandFX();
	void ExecuteUbergraph_Action_TED_Reload_Zeus_Base(int32 EntryPoint, class UParticleSystem* CallFunc_StaticGetParticleEffect_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable1, class AActor* K2Node_Event_Actor2, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool Temp_bool_IsClosed_Variable1, class AActor* CallFunc_K2_GetActor_ReturnValue1, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class AWeapon* CallFunc_GetActiveWeapon_ReturnValue);
};

}


