#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class CoherentRenderingPlugin.CoherentRenderingSettings
class UCoherentRenderingSettings : public UObject
{
public:
	enum class ECoherentRenderingSettingsSeverity RenderingLogSeverity;                              // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowWarningsOnScreen;                              // 0x29(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A[0x6];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DeveloperOptions;                                  // 0x30(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCoherentRenderingSettings* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class CoherentRenderingPlugin.CohTextureUserWrapData
class UCohTextureUserWrapData : public UObject
{
public:
	uint8                                        Pad_2B[0x48];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Texture;                                           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCohTextureUserWrapData* GetDefaultObj();

};

}


