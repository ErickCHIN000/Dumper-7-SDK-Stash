#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass bi_BuildSystemUIState.bi_BuildSystemUIState_C
class Ibi_BuildSystemUIState_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class Ibi_BuildSystemUIState_C* GetDefaultObj();

	void Hide();
	void Show();
	void InputR1();
	void InputL1();
	void InputDPadRight();
	void InputDPadUp();
	void InputDPadLeft();
	void InputDPadDown();
	void InputFaceRight();
	void InputFaceUp();
	void InputFaceLeft();
	void InputFaceDown();
};

}


