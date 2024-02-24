#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class DLSS.DLSSOverrideSettings
class UDLSSOverrideSettings : public UObject
{
public:
	enum class EDLSSSettingOverride              EnableDLSSInEditorViewportsOverride;               // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDLSSSettingOverride              EnableScreenpercentageManipulationInDLSSEditorViewportsOverride; // 0x29(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDLSSSettingOverride              EnableDLSSInPlayInEditorViewportsOverride;         // 0x2A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDLSSIncompatiblePluginsToolsWarnings;         // 0x2B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDLSSSettingOverride              ShowDLSSSDebugOnScreenMessages;                    // 0x2C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDLSSOverrideSettings* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class DLSS.DLSSSettings
class UDLSSSettings : public UObject
{
public:
	bool                                         bEnableDLSSD3D12;                                  // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDLSSD3D11;                                  // 0x29(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDLSSVulkan;                                 // 0x2A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDLSSInEditorViewports;                      // 0x2B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableScreenpercentageManipulationInDLSSEditorViewports; // 0x2C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDLSSInPlayInEditorViewports;                // 0x2D(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDLSSSDebugOnScreenMessages;                   // 0x2E(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_224[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                GenericDLSSBinaryPath;                             // 0x30(0x10)(Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenericDLSSBinaryExists;                          // 0x40(0x1)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_226[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       NVIDIANGXApplicationId;                            // 0x44(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CustomDLSSBinaryPath;                              // 0x48(0x10)(Edit, ZeroConstructor, Config, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCustomDLSSBinaryExists;                           // 0x58(0x1)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDLSSSettings* GetDefaultObj();

};

}


