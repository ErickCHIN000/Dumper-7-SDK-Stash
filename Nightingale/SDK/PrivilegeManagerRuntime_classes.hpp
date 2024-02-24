#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// Class PrivilegeManagerRuntime.PrivilegeManager
class UPrivilegeManager : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_DCD[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPrivilegeManager* GetDefaultObj();

};

}


