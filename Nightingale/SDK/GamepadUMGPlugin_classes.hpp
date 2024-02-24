#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0xF8 - 0x38)
// Class GamepadUMGPlugin.GamepadCursorSettings
class UGamepadCursorSettings : public UDeveloperSettings
{
public:
	struct FRuntimeFloatCurve                    AnalogCursorAccelerationCurve;                     // 0x38(0x88)(Edit, Config, NativeAccessSpecifierPrivate)
	float                                        MaxAnalogCursorSpeed;                              // 0xC0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxAnalogCursorSpeedWhenHovered;                   // 0xC4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AnalogCursorDragCoefficient;                       // 0xC8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AnalogCursorDragCoefficientWhenHovered;            // 0xCC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinAnalogCursorSpeed;                              // 0xD0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AnalogCursorDeadZone;                              // 0xD4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AnalogCursorAccelerationMultiplier;                // 0xD8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AnalogCursorSize;                                  // 0xDC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseEngineAnalogCursor;                            // 0xE0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAnalogCursorNoAcceleration;                       // 0xE1(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7F9[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGamepadCursorSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GamepadUMGPlugin.VirtualCursorFunctionLibrary
class UVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVirtualCursorFunctionLibrary* GetDefaultObj();

	bool IsCursorOverInteractableWidget();
	void EnableVirtualCursor(class APlayerController* PC);
	void DisableVirtualCursor(class APlayerController* PC);
};

}


