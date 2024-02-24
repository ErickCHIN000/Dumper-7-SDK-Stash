#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPDmgEffect.BPDmgEffect_C
class UBPDmgEffect_C : public UObject
{
public:

	static class UClass* StaticClass();
	static class UBPDmgEffect_C* GetDefaultObj();

	void OnApplyDmgToHitActor(float OriginalDmg, class AActor* Source, class AActor* Target);
};

}


