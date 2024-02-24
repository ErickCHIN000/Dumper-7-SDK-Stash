#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x48 - 0x40)
// BlueprintGeneratedClass GC_Lick_Drop.GC_Lick_Drop_C
class UGC_Lick_Drop_C : public UGameplayCueNotify_Static
{
public:
	class USoundCue*                             TongueDropSound;                                   // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGC_Lick_Drop_C* GetDefaultObj();

	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnActive_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue);
};

}


