#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC1 (0x341 - 0x280)
// BlueprintGeneratedClass A_Necro_CallDead_Start.A_Necro_CallDead_Start_C
class UA_Necro_CallDead_Start_C : public UOakAction_Anim_ActionAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	float                                        HealthSacrificePercent;                            // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 HealthSacrificePercentHandle;                      // 0x290(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        BonusDamageMultiplier;                             // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 BonusDamageMultiplierHandle;                       // 0x2B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        Damage;                                            // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 DamageHandle;                                      // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        SacrificedHealth;                                  // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              HandFX;                                            // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              NovaFX;                                            // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SacrificedHealthDuration;                          // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 SacrificedHealthDurationHandle;                    // 0x308(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        SkillCooldownRefundOnAbort;                        // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameResourcePoolReference            SkillCooldownPool;                                 // 0x328(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	bool                                         SkillActivated;                                    // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UA_Necro_CallDead_Start_C* GetDefaultObj();

	void SetActionSkillCameraMode(class FName Mode_Name, bool Enabled, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue);
	void SacrificeHealth(float* HealthRemoved, float Temp_float_Variable, const struct FHitResult& Temp_struct_Variable, bool Temp_bool_Variable, class AActor* CallFunc_K2_GetActor_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, class UGameResourcePoolManagerComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Divide_FloatFloat_ReturnValue);
	void OnServerBegin(class AActor* Actor);
	void AN_Activate();
	void OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void AN_UnlockMovement();
	void OnBeginBringUpWeapon(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_A_Necro_CallDead_Start(int32 EntryPoint, enum class EGbxActionEndState K2Node_Event_ActionEndState1, class AActor* K2Node_Event_Actor3, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_GetDataTableValueFromHandle_ReturnValue2, const struct FRangedDistanceOverrides& K2Node_MakeStruct_RangedDistanceOverrides, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue3, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_SacrificeHealth_HealthRemoved, class AActor* K2Node_Event_Actor2, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor1, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue2, class AActor* CallFunc_K2_GetActor_ReturnValue3, class AActor* CallFunc_K2_GetActor_ReturnValue4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_K2_GetActor_ReturnValue5, class AActor* CallFunc_K2_GetActor_ReturnValue6, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, class AActor* CallFunc_K2_GetActor_ReturnValue7, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue8, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* K2Node_Event_Actor4, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, const struct FHitResult& Temp_struct_Variable, class AActor* CallFunc_K2_GetActor_ReturnValue9, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess2, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue10);
};

}


