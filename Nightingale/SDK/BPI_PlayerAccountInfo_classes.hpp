#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_PlayerAccountInfo.BPI_PlayerAccountInfo_C
class IBPI_PlayerAccountInfo_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_PlayerAccountInfo_C* GetDefaultObj();

	void GetPlayerNameFromPawn(class FString* PlayerName);
	void GetPersistentUniqueIdFromPawn(class FString* PersistentId);
};

}


