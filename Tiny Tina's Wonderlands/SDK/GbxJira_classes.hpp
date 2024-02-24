#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class GbxJira.GbxJiraSettings
class UGbxJiraSettings : public UObject
{
public:
	bool                                         bDisplayInLevelEditor;                             // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BugIconSize;                                       // 0x2C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGbxJiraSettings* GetDefaultObj();

};

}


