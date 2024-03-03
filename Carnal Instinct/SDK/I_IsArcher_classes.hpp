#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass I_IsArcher.I_IsArcher_C
class II_IsArcher_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class II_IsArcher_C* GetDefaultObj();

	void GetBowStringSocketName(class FName* Name);
	void DoesHoldBowString(bool* Result);
	void GetAimAlpha(float* Value);
};

}


