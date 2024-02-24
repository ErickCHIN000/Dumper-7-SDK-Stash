#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_AIStolenProj.BPI_AIStolenProj_C
class IBPI_AIStolenProj_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_AIStolenProj_C* GetDefaultObj();

	void AIStolenProj_AttemptDetonate(bool* Success);
	void AIStolenProj_GetElementalTypeFromStolenProjectile(enum class EOakElementalType* StolenProjectileElement);
	void AIStolenProj_AttemptLerpToSocket(class FName SocketToLerpTo, float LerpDuration, bool* Success);
	void AIStolenProj_AttemptReturnTo(enum class Enum_AIThrowAtStyle ReturnTo, class FName TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& TargetOffset, class AActor* SpecifiedActor, const struct FVector& WorldLocation, bool* Success);
	void AIStolenProj_AttemptAttach(class FName SocketName, bool* Success);
	void AIStolenProj_AttemptDestroy(bool* Success);
	void AIStolenProj_AttemptDisarm(bool* Success);
};

}


