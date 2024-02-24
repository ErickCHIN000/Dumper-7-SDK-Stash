#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass KickableInterface.KickableInterface_C
class IKickableInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IKickableInterface_C* GetDefaultObj();

	void GetKicked(class AActor* Kicker, const struct FVector& KickerLocation, const struct FVector& ImpactLocation, const struct FVector& Impulse);
};

}


