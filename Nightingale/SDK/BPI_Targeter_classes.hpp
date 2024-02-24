#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Targeter.BPI_Targeter_C
class IBPI_Targeter_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Targeter_C* GetDefaultObj();

	void AllowEnemyTargeting(bool* Allowed);
	void AllowFriendlyTargeting(bool* Allowed);
	void IsAfraidOf(class AActor* ActorInQuestion, bool* bIsAfraidOf);
	void GetTargetPriorityOrder(TArray<struct FGameplayTag>* TargetPriorityOrder);
	void IsFriend(class AActor* ActorInQuestion, bool* bIsFriend);
	void ClearTarget(bool* Success);
	void SetTarget(class AActor* NewTarget, class AActor** Target);
	void GetTarget(class AActor** Target);
	void IsEnemy(class AActor* ActorInQuestion, bool* bIsEnemy);
};

}


