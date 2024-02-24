#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x180 - 0x178)
// QuestBlueprintGeneratedClass Quest_TheSafeZone.Quest_TheSafeZone_C
class UQuest_TheSafeZone_C : public UQuest
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x178(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UQuest_TheSafeZone_C* GetDefaultObj();

	void ExecuteUbergraph_Quest_TheSafeZone(int32 EntryPoint);
};

}


