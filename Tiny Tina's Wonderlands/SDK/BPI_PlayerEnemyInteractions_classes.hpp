#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_PlayerEnemyInteractions.BPI_PlayerEnemyInteractions_C
class IBPI_PlayerEnemyInteractions_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_PlayerEnemyInteractions_C* GetDefaultObj();

	void Enemy_OnPolymorphStop(bool* Res);
	void Enemy_OnPolymorphStart(bool* Res);
	void CanEnemyBeTeamSwapped(bool* Res);
	void GetCompanionTargetingSocket(class FName* Socket);
	void Player_SpawnTransfusionProjectile(class UClass* DataBlueprint__Override_, class UClass* DamageType__Override_, class AActor* SourceActor, class AActor* TargetActor, float Damage, class AActor* Causer__Override_);
	void Enemy_OnThoughtLockStop();
	void Enemy_OnThoughtLockStart();
	void Enemy_OnPhaseLockStop();
	void Enemy_OnPhaseLockStart();
	void Player_HealthDepleted(class AOakCharacter* Character);
};

}


