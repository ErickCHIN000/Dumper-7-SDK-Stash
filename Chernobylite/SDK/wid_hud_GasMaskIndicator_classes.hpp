#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass wid_hud_GasMaskIndicator.wid_hud_GasMaskIndicator_C
class UWid_hud_GasMaskIndicator_C : public UUserWidget
{
public:
	class UTextBlock*                            Counter;                                           // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GasMask;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_hud_GasMaskIndicator_C* GetDefaultObj();

	void SetCount(int32 FilterCount, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_SwitchInteger_CmpSuccess);
	void SetEmpty(bool IsEmpty, float CallFunc_Conv_BoolToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetProgress(float Progress, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
};

}


