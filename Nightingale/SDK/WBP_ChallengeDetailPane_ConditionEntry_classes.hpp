#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x390 - 0x348)
// WidgetBlueprintGeneratedClass WBP_ChallengeDetailPane_ConditionEntry.WBP_ChallengeDetailPane_ConditionEntry_C
class UWBP_ChallengeDetailPane_ConditionEntry_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      TXT_Condition;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TXT_Progress;                                      // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ConditionString;                                   // 0x360(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  ProgressString;                                    // 0x378(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_ChallengeDetailPane_ConditionEntry_C* GetDefaultObj();

	void Initialize();
	void InitializeDesignerPreview();
	void Construct();
	void ExecuteUbergraph_WBP_ChallengeDetailPane_ConditionEntry(int32 EntryPoint);
};

}


