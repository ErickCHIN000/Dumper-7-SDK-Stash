#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass CharacterUIInterface.CharacterUIInterface_C
class ICharacterUIInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICharacterUIInterface_C* GetDefaultObj();

	void ShowTutorial(class FName TutorialID);
	void HideUI();
	void Close();
	void ToggleScreen(enum class ECharacterScreenType ScreenType);
};

}


