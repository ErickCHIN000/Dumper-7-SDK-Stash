#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x121 (0x469 - 0x348)
// WidgetBlueprintGeneratedClass WBP_Shop_sw_AttributeRow.WBP_Shop_sw_AttributeRow_C
class UWBP_Shop_sw_AttributeRow_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_pip;                                           // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_AttributeLabel;                                // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_AttributeValue;                                // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FAttributeValueAndUIData              AttributeInfo;                                     // 0x368(0x100)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class EAttributeValueType               AttributeValueType;                                // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Shop_sw_AttributeRow_C* GetDefaultObj();

	void InitializeDesignerPreview();
	void UpdateValue(double NewValue, const struct FSlateColor& LPositiveTint, const struct FSlateColor& LNegativeTint, const struct FSlateColor& LNeutralTint, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, class FText CallFunc_FormatTextFromType_ResultText);
	void Initialize(double CallFunc_UpdateValue_NewValue_ImplicitCast);
	void Construct();
	void ExecuteUbergraph_WBP_Shop_sw_AttributeRow(int32 EntryPoint);
};

}


