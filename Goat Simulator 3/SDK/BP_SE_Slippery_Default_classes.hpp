#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x4F0 - 0x4C8)
// BlueprintGeneratedClass BP_SE_Slippery_Default.BP_SE_Slippery_Default_C
class ABP_SE_Slippery_Default_C : public AGGStatusEffectSlippery
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       SlipperyLoopAC;                                    // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        SlipperySoundFadeOutTIme;                          // 0x4D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SlipperySoundFadeInTIme;                           // 0x4DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             SlipperyGoat;                                      // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             SlipperyNPC;                                       // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SE_Slippery_Default_C* GetDefaultObj();

	void BPInitializeStatus(class UGGStatusEffectManager* Manager, enum class EApplicationMethod ApplicationMethod, class AActor* SpreadFrom, bool bMovedBetweenActors);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BPResetForPool();
	void BPClientInitializeStatus(class UGGStatusEffectManager* Manager);
	void ExecuteUbergraph_BP_SE_Slippery_Default(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UGGStatusEffectManager* K2Node_Event_Manager, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, class AGGVehicle* K2Node_DynamicCast_AsGGVehicle, bool K2Node_DynamicCast_bSuccess_1, class UGGStatusEffectManager* K2Node_Event_Manager_1, enum class EApplicationMethod K2Node_Event_ApplicationMethod, class AActor* K2Node_Event_SpreadFrom, bool K2Node_Event_bMovedBetweenActors, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

}


