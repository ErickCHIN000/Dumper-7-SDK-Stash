#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass GGPrototypeMenuInterface.GGPrototypeMenuInterface_C
class IGGPrototypeMenuInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGGPrototypeMenuInterface_C* GetDefaultObj();

	void GetGearInfoPanelContainer(class UPanelWidget** Panel);
	void SetPlayerGameData(class UGGPlayerGameDataAsset* PlayerGameData);
};

}


