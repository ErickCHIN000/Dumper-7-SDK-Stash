#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x50 - 0x38)
// Class XeSSPlugin.XeSSSettings
class UXeSSSettings : public UDeveloperSettings
{
public:
	bool                                         bEnableXeSSInEditorViewports;                      // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DebugDataDumpPath;                                 // 0x40(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UXeSSSettings* GetDefaultObj();

};

}


