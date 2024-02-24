#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x290 - 0x248)
// WidgetBlueprintGeneratedClass QuestTaskLineHUD.QuestTaskLineHUD_C
class UQuestTaskLineHUD_C : public USHUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Progress;                                          // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            QuestTask;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  TaskText;                                          // 0x260(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  TaskProgress;                                      // 0x278(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UQuestTaskLineHUD_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_QuestTaskLineHUD(int32 EntryPoint);
};

}


