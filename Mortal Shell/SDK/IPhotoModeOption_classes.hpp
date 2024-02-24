#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IPhotoModeOption.IPhotoModeOption_C
class IIPhotoModeOption_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIPhotoModeOption_C* GetDefaultObj();

	void FireChangeEventWithCurrentValue();
	void FireEventWithDefaultValueButKeepCurrent();
	void GetMaxDelta(int32* MaxDelta);
	void SetValueAndOverrideDefault(int32 Value, bool CallEvent);
	void IsOptionEnabled(bool* bEnabled);
	void SetOptionEnabled(bool bEnabled);
	void Reset(bool bForceFireValueChange);
	void SetIsHighlighted(bool bHighlighted);
	void SetSelectedValue(int32 Value, bool CallEvent);
	void Navigate(int32 Delta);
};

}


