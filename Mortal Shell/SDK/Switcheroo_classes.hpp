#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Switcheroo.SwitcherooBlueprintLibrary
class USwitcherooBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USwitcherooBlueprintLibrary* GetDefaultObj();

	void UnbindDetectedInputDeviceTypeChanged(FDelegateProperty_ Event);
	void UnbindDetectedInputDeviceChanged(FDelegateProperty_ Event);
	void SetInputDetectionEnabled(bool bEnabled);
	bool IsInputDetectionEnabled();
	bool IsAnalogInputOutsideDeadZone(const struct FVector2D& Input);
	enum class ESwitcherooInputDeviceType GetDetectedInputDeviceType();
	enum class ESwitcherooInputDevice GetDetectedInputDevice();
	void EnableInputDetection();
	void DisableInputDetection();
	void BindDetectedInputDeviceTypeChanged(FDelegateProperty_ Event);
	void BindDetectedInputDeviceChanged(FDelegateProperty_ Event);
	struct FVector2D ApplyDeadZoneToAnalogInput(const struct FVector2D& Input);
};

// 0x10 (0x48 - 0x38)
// Class Switcheroo.SwitcherooSettings
class USwitcherooSettings : public UDeveloperSettings
{
public:
	enum class ESwitcherooInputDevice            DefaultInputDevice;                                // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESwitcherooInputDeviceType        DefaultInputDeviceType;                            // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_222[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MouseMoveThreshold;                                // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESwitcherooAnalogStick            AnalogStick;                                       // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESwitcherooAnalogDeadZoneMode     AnalogDeadZoneMode;                                // 0x41(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_22B[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AnalogDeadZoneSize;                                // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USwitcherooSettings* GetDefaultObj();

	void SetMouseMoveThreshold(float NewMouseMoveThreshold);
	void SetDefaultInputDevice(enum class ESwitcherooInputDevice NewDefaultInputDevice);
	void SetAnalogStick(enum class ESwitcherooAnalogStick NewAnalogStick);
	void SetAnalogDeadZoneSize(float NewAnalogDeadZoneSize);
	void SetAnalogDeadZoneMode(enum class ESwitcherooAnalogDeadZoneMode NewAnalogDeadZoneMode);
	class USwitcherooSettings* GetSwitcherooSettings();
	float GetMouseMoveThreshold();
	enum class ESwitcherooInputDeviceType GetDefaultInputDeviceType();
	enum class ESwitcherooInputDevice GetDefaultInputDevice();
	enum class ESwitcherooAnalogStick GetAnalogStick();
	float GetAnalogDeadZoneSize();
	enum class ESwitcherooAnalogDeadZoneMode GetAnalogDeadZoneMode();
};

}


