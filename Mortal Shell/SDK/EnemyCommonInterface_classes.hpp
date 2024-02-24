#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass EnemyCommonInterface.EnemyCommonInterface_C
class IEnemyCommonInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IEnemyCommonInterface_C* GetDefaultObj();

	void Enemy_StoneSkinTimeline_End();
	void Enemy_StoneSkinTimeline_Start();
	void Enemy_ReEnable();
	void Enemy_DeAggroPlayer();
	void Enemy_IsInParryableState(bool* IsParryableState_);
	void EnemyCommon_StopPhysicalHit();
	bool BossCrucix_IsSimulatingLittleBro();
	void BossCrucix_SimLittleBro_Stop();
	void BossCrucix_SimLittleBro_Start();
	void BossCharacterHadern_IsHadern(bool* IsHadern);
	void BossCryptCharacter_GetThrowAttack(bool* ThrowAttack);
	void EnemyCommon_SkipDeathBlowReactionAnimation(bool* ShouldSkip);
	void EnemyCommon_GetHealth(float* Health, float* MaxHealth);
	void ForceReturn();
};

}


