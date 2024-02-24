#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_NPCInfoForUI.BPI_NPCInfoForUI_C
class IBPI_NPCInfoForUI_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_NPCInfoForUI_C* GetDefaultObj();

	void GetContractInfo(bool* OnContract, class APawn** EmployerPawn, int32* ContractCost, class AActor** OrderTarget);
	void GetFriendship(enum class Enum_FriendshipLevel* FriendshipLevel, int32* FriendshipScore, bool* IsBestFriend, double* FriendshipLevelRatio, int32* FriendshipLevelScore, int32* FriendshipLevelMaxScore);
	void GetCreatureInfo(class FText* UIName, class FText* UIDescription, class UTexture2D** UIIcon);
};

}


