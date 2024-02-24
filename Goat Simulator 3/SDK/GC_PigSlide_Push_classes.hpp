#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x50 - 0x40)
// BlueprintGeneratedClass GC_PigSlide_Push.GC_PigSlide_Push_C
class UGC_PigSlide_Push_C : public UGameplayCueNotify_Static
{
public:
	class USoundCue*                             PushSound;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Push_Montage;                                      // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGC_PigSlide_Push_C* GetDefaultObj();

	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters, bool K2Node_SwitchEnum_CmpSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, float CallFunc_Montage_Play_ReturnValue);
};

}


