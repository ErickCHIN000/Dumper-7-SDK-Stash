#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x608 - 0x5B0)
// BlueprintGeneratedClass BP_SE_Electric_Default.BP_SE_Electric_Default_C
class ABP_SE_Electric_Default_C : public AGGStatusEffectElectric
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       NPCElectrocutedLoopAC;                             // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       GoatElectrocutedLoopAC;                            // 0x5C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       ElectricityLoopAC;                                 // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ElectricitySoundFadeInTime;                        // 0x5D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ElectricitySoundFadeOutTime;                       // 0x5D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             ElectricArcSound;                                  // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             ElectricArcStartSound;                             // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             ElectricShockSound;                                // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             ElectricOnLoopSound;                               // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             ElecitrcOnLoopSoundGoat;                           // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                             ElecitrcOnLoopSoundNPC;                            // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SE_Electric_Default_C* GetDefaultObj();

	void ElectricBeam_BP(class AActor* ShockedActor, bool bNewChain);
	void BPResetForPool();
	void BPClientInitializeStatus(class UGGStatusEffectManager* Manager);
	void SelfElectricShock_BP(class AActor* ShockedActor);
	void SelfInitialShock_BP(class AActor* ShockedActor);
	void ElectrocutionChanged_BP(bool bIsElectrocuting, bool bElectrocutingGoat);
	void BPInitializeStatus(class UGGStatusEffectManager* Manager, enum class EApplicationMethod ApplicationMethod, class AActor* SpreadFrom, bool bMovedBetweenActors);
	void ExecuteUbergraph_BP_SE_Electric_Default(int32 EntryPoint, class AActor* K2Node_Event_ShockedActor_2, bool K2Node_Event_bNewChain, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGGStatusEffectManager* K2Node_Event_Manager_1, class AActor* K2Node_Event_ShockedActor_1, class AActor* K2Node_Event_ShockedActor, class AActor* CallFunc_GetAffectedActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool K2Node_Event_bIsElectrocuting, bool K2Node_Event_bElectrocutingGoat, class UGGStatusEffectManager* K2Node_Event_Manager, enum class EApplicationMethod K2Node_Event_ApplicationMethod, class AActor* K2Node_Event_SpreadFrom, bool K2Node_Event_bMovedBetweenActors, bool CallFunc_IsPlaying_ReturnValue);
};

}


