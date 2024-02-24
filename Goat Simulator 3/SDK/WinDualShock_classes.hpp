#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class WinDualShock.DualShockExternalEndpointSettings
class UDualShockExternalEndpointSettings : public UAudioEndpointSettingsBase
{
public:
	int32                                        ControllerIndex;                                   // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4[0x4];                                        // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDualShockExternalEndpointSettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class WinDualShock.DualShockSoundfieldEndpointSettings
class UDualShockSoundfieldEndpointSettings : public USoundfieldEndpointSettingsBase
{
public:
	int32                                        ControllerIndex;                                   // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8[0x4];                                        // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDualShockSoundfieldEndpointSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class WinDualShock.DualShockSpatializationSettings
class UDualShockSpatializationSettings : public USoundfieldEncodingSettingsBase
{
public:
	float                                        Spread;                                            // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Passthrough;                                       // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9[0x7];                                        // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDualShockSpatializationSettings* GetDefaultObj();

};

}


