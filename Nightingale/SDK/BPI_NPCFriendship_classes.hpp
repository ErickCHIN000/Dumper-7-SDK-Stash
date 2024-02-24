#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_NPCFriendship.BPI_NPCFriendship_C
class IBPI_NPCFriendship_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_NPCFriendship_C* GetDefaultObj();

	void GetBestFriend(class FString* PlayerId);
	void GetFriendshipLevel(const class FString& PlayerId, enum class Enum_FriendshipLevel* FriendshipLevel, int32* FriendshipScore);
	void FriendshipEvent(const class FString& PlayerId, enum class Enum_NPCFriendshipEvent EventStrength, bool* Success, int32* ScoreAwarded);
};

}


