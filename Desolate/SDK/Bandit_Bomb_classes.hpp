#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA80 - 0xA70)
// BlueprintGeneratedClass Bandit_Bomb.Bandit_Bomb_C
class ABandit_Bomb_C : public AGenericNPC_MeleeWeapon_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio1;                                            // 0xA78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABandit_Bomb_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void EnableBomb();
	void DisableBomb();
	void ExecuteUbergraph_Bandit_Bomb(int32 EntryPoint);
};

}


