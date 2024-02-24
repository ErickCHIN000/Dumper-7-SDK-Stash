#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass PCLoadingScreenInterface.PCLoadingScreenInterface_C
class IPCLoadingScreenInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IPCLoadingScreenInterface_C* GetDefaultObj();

	void PCLoadingScreen_GetItemsDiscovered(TArray<class FName>* ItemsDiscovered, bool* Empty);
	void PCLoadingScreen_GetLoadingScreenInfo(const struct FInventoryItem& InventoryItem, int32* LocalFamiliarity, class FString* ItemEffectDescription);
};

}


