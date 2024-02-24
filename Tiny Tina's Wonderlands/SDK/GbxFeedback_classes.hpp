#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA50 (0xA78 - 0x28)
// Class GbxFeedback.GbxRumbleRemapping
class UGbxRumbleRemapping : public UObject
{
public:
	struct FRemapByConsole                       WindowsMapping;                                    // 0x28(0x210)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRemapByConsole                       XBoxOneMapping;                                    // 0x238(0x210)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRemapByConsole                       PS4Mapping;                                        // 0x448(0x210)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRemapByConsole                       XBoxSeriesXMapping;                                // 0x658(0x210)(Edit, Config, NativeAccessSpecifierPublic)
	struct FRemapByConsole                       PS5Mapping;                                        // 0x868(0x210)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxRumbleRemapping* GetDefaultObj();

};

}


