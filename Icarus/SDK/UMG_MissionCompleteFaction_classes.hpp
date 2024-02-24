#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_MissionCompleteFaction.UMG_MissionCompleteFaction_C
class UUMG_MissionCompleteFaction_C : public UUserWidget
{
public:
	class UTextBlock*                            MissionName;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Status;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SuccessImage;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                           Color;                                             // 0x278(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUMG_MissionCompleteFaction_C* GetDefaultObj();

	void Update(bool Success, const struct FFactionMissionsRowHandle& FactionMission, class FText ProspectName, bool Temp_bool_Variable, const struct FFactionMission& CallFunc_GetFactionMissionsStruct_FactionMissions, enum class EValid CallFunc_GetFactionMissionsStruct_Paths, class UTexture2D* Temp_object_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UTexture2D* Temp_object_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UTexture2D* K2Node_Select_Default_1, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateBrush& K2Node_Select_Default_2, const struct FSlateColor& K2Node_Select_Default_3);
};

}


