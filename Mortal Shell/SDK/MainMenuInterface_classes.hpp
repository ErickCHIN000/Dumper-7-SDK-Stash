#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass MainMenuInterface.MainMenuInterface_C
class IMainMenuInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMainMenuInterface_C* GetDefaultObj();

	void EscapeMenu_OnClose();
	void EscapeMenu_OnOpen();
	void MainMenu_OnBrightnessConfirmed();
	void MainMenu_SetMenuState(enum class Enum_MainMenu_State Menu_State);
	void MainMenu_CloseCredits();
};

}


