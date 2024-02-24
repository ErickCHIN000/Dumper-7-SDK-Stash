#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass GamePlayGameStateInterface.GamePlayGameStateInterface_C
class IGamePlayGameStateInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGamePlayGameStateInterface_C* GetDefaultObj();

	void GetForceHideCursor(bool* Value);
	void SetForceHideCursor(bool Value);
	void GetIsMouseMoving(bool* IsMoving);
	void IsInKeyboardMode(bool* InKeyboardMode);
};

}


