#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x528 - 0x508)
// BlueprintGeneratedClass BP_SE_Burning_Default.BP_SE_Burning_Default_C
class ABP_SE_Burning_Default_C : public AGGStatusEffectBurning
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x508(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       FireLoopAC;                                        // 0x510(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FireSoundFadeInTime;                               // 0x518(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FireSoundFadeOutTime;                              // 0x51C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             FireEndSound;                                      // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SE_Burning_Default_C* GetDefaultObj();

	void BPInitializeStatus(class UGGStatusEffectManager* Manager, enum class EApplicationMethod ApplicationMethod, class AActor* SpreadFrom, bool bMovedBetweenActors);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BPResetForPool();
	void BPClientInitializeStatus(class UGGStatusEffectManager* Manager);
	void ExecuteUbergraph_BP_SE_Burning_Default(int32 EntryPoint, class AActor* CallFunc_GetAffectedActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UGGStatusEffectManager* K2Node_Event_Manager_1, enum class EApplicationMethod K2Node_Event_ApplicationMethod, class AActor* K2Node_Event_SpreadFrom, bool K2Node_Event_bMovedBetweenActors, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UGGStatusEffectManager* K2Node_Event_Manager);
};

}


