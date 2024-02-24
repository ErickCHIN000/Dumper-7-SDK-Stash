#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x258 - 0x220)
// BlueprintGeneratedClass Action_KotC_AS3_BreathWeapon.Action_KotC_AS3_BreathWeapon_C
class UAction_KotC_AS3_BreathWeapon_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class AOakCharacter_Player*                  PlayerCharacter;                                   // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CameraModeName;                                    // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProj_KotC_AS3_BreathAttack_C*         FireBreathActor;                                   // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Loops;                                             // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxLoops;                                          // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FireBreathFX1st;                                   // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FireBreathFX3rd;                                   // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_KotC_AS3_BreathWeapon_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void StartFireBreath();
	void AN_StartBreath();
	void AN_StopBreath();
	void ExecuteUbergraph_Action_KotC_AS3_BreathWeapon(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable1, class AActor* K2Node_Event_Actor1, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue, bool Temp_bool_IsClosed_Variable1, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue2, class AActor* CallFunc_K2_GetActor_ReturnValue3, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_K2_GetActor_ReturnValue4, class AActor* CallFunc_K2_GetActor_ReturnValue5, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess2, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_IsLocallyControlled_ReturnValue, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue6, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetUpVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue7, class AProj_KotC_AS3_BreathAttack_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue8, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue2, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UPassive_KotC_24_C* K2Node_DynamicCast_AsPassive_Kot_C_24, bool K2Node_DynamicCast_bSuccess4);
};

}


