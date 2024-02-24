#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass MainMenuButtonOwnerInterface.MainMenuButtonOwnerInterface_C
class IMainMenuButtonOwnerInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMainMenuButtonOwnerInterface_C* GetDefaultObj();

	void OnButtonPressed();
	void IsAnyPopupVisible(bool* Result);
};

}


