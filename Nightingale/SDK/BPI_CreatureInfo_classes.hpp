#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_CreatureInfo.BPI_CreatureInfo_C
class IBPI_CreatureInfo_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_CreatureInfo_C* GetDefaultObj();

	void RemoveFromEnemies(const struct FGameplayTag& EnemyTag, bool* bSuccess);
	void AddToEnemies(const struct FGameplayTag& EnemyTag, bool* bSuccess);
	void RemoveFromFriends(const struct FGameplayTag& FriendTag, bool* bSuccess);
	void AddToFriends(const struct FGameplayTag& FriendTag, bool* bSuccess);
	void GetCreatureInfo(struct FS_CreatureInfo* Info);
};

}


