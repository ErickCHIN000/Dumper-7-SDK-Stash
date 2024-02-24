#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0x178 - 0x30)
// Class ConsoleAchievementsRuntime.ConsoleProxyAchievements
class UConsoleProxyAchievements : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_D84[0x148];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConsoleProxyAchievements* GetDefaultObj();

	void DebugUpload(TArray<class FString>& Args);
	void DebugConnect();
};

}


