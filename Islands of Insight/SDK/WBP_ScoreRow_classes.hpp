#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass WBP_ScoreRow.WBP_ScoreRow_C
class UWBP_ScoreRow_C : public UUserWidget
{
public:
	class UTextBlock*                            ScoreLabel;                                        // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ScoreValue;                                        // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  LabelText;                                         // 0x270(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  ValueText;                                         // 0x288(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_ScoreRow_C* GetDefaultObj();

};

}


