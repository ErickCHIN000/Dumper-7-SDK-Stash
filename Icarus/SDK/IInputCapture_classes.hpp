#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IInputCapture.IInputCapture_C
class IIInputCapture_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIInputCapture_C* GetDefaultObj();

	void Jump();
	void AltFire(bool Press);
	void PrimaryFire(bool Press);
	void LookY(float Scale);
	void LookX(float Scale);
};

}


