#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2E0 - 0x290)
// BlueprintGeneratedClass GC_SpeedBoost.GC_SpeedBoost_C
class AGC_SpeedBoost_C : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              BoostParticle;                                     // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       BoostStartAC;                                      // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       BoostLoopAC;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       BoostEndAC;                                        // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BoostSoundVolume;                                  // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BoostSoundPitch;                                   // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CarBoostOngoingParticle;                           // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CarBoostBurstParticle;                             // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       CarBoostStopParticle;                              // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_SpeedBoost_C* GetDefaultObj();

	void ReceiveTick(float DeltaSeconds);
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void PlayBoostLoopSound();
	void PlayBoostStartSound();
	void PlayBoostEndSound();
	void StopBoostStartSound();
	void StopBoostLoopSound();
	void SetSoundVolumeAndPitch(class UAudioComponent* AudioComponent);
	void ExecuteUbergraph_GC_SpeedBoost(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, class AActor* CallFunc_GetOwner_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AGGVehicle_Car* K2Node_DynamicCast_AsGGVehicle_Car, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class AGGVehicle_Car* K2Node_DynamicCast_AsGGVehicle_Car_1, bool K2Node_DynamicCast_bSuccess_1, class AGGVehicle_Car* K2Node_DynamicCast_AsGGVehicle_Car_2, bool K2Node_DynamicCast_bSuccess_2, class ABP_Vehicle_Car_C* K2Node_DynamicCast_AsBP_Vehicle_Car, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_3, class AGGVehicle_Car* K2Node_DynamicCast_AsGGVehicle_Car_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UAudioComponent* K2Node_CustomEvent_AudioComponent, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_4, class AGGVehicle_Car* K2Node_DynamicCast_AsGGVehicle_Car_4, bool K2Node_DynamicCast_bSuccess_5, class ABP_Vehicle_Car_C* K2Node_DynamicCast_AsBP_Vehicle_Car_1, bool K2Node_DynamicCast_bSuccess_6, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2);
};

}


