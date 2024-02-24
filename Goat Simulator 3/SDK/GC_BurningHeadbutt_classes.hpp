#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass GC_BurningHeadbutt.GC_BurningHeadbutt_C
class UGC_BurningHeadbutt_C : public UGameplayCueNotify_Static
{
public:

	static class UClass* StaticClass();
	static class UGC_BurningHeadbutt_C* GetDefaultObj();

	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters, bool K2Node_SwitchEnum_CmpSuccess, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

}


