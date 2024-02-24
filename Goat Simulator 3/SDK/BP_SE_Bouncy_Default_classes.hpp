#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x518 - 0x4F0)
// BlueprintGeneratedClass BP_SE_Bouncy_Default.BP_SE_Bouncy_Default_C
class ABP_SE_Bouncy_Default_C : public AGGStatusEffectBouncy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Bouncy_Loop;                                       // 0x4F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             BounceGoatSound;                                   // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             BounceObjectSound;                                 // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BouncySoundFadeOutTime;                            // 0x510(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BouncySoundFadeInTime;                             // 0x514(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SE_Bouncy_Default_C* GetDefaultObj();

	void BPInitializeStatus(class UGGStatusEffectManager* Manager, enum class EApplicationMethod ApplicationMethod, class AActor* SpreadFrom, bool bMovedBetweenActors);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BPResetForPool();
	void BPClientInitializeStatus(class UGGStatusEffectManager* Manager);
	void ExecuteUbergraph_BP_SE_Bouncy_Default(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UGGStatusEffectManager* K2Node_Event_Manager, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, class UGGStatusEffectManager* K2Node_Event_Manager_1, enum class EApplicationMethod K2Node_Event_ApplicationMethod, class AActor* K2Node_Event_SpreadFrom, bool K2Node_Event_bMovedBetweenActors, class AGGVehicle* K2Node_DynamicCast_AsGGVehicle, bool K2Node_DynamicCast_bSuccess_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

}


