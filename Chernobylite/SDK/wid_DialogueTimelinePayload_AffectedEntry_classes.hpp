#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x32 (0x292 - 0x260)
// WidgetBlueprintGeneratedClass wid_DialogueTimelinePayload_AffectedEntry.wid_DialogueTimelinePayload_AffectedEntry_C
class UWid_DialogueTimelinePayload_AffectedEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                            Entry;                                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LeDot;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x278(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class EBasicResultType                  ReactionType;                                      // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsBold;                                            // 0x291(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_DialogueTimelinePayload_AffectedEntry_C* GetDefaultObj();

	void UpdateTypeface(const struct FSlateFontInfo& Font, enum class EBasicResultType Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, bool Temp_bool_Variable, class FName Temp_name_Variable_3, class FName K2Node_Select_Default, class FName K2Node_Select_Default_1);
	void Update(class FText Text, enum class EBasicResultType ReactionType);
	void GetReactionColor(struct FLinearColor* Color, bool K2Node_SwitchEnum_CmpSuccess);
	void SetReactionType(enum class EBasicResultType ReactionType, const struct FLinearColor& CallFunc_GetReactionColor_Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void SetText(class FText Text);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_wid_DialogueTimelinePayload_AffectedEntry(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


