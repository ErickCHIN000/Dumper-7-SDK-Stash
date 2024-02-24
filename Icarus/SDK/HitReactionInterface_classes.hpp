#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass HitReactionInterface.HitReactionInterface_C
class IHitReactionInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IHitReactionInterface_C* GetDefaultObj();

	void OnHitSuccessful(class AActor* HitActor, class AActor* DamageCauser, enum class EStealthAttackType StealthAttack, bool Killcam);
};

}


