#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x135 (0x47D - 0x348)
// WidgetBlueprintGeneratedClass WBP_sw_ItemTooltip_Attribute.WBP_sw_ItemTooltip_Attribute_C
class UWBP_sw_ItemTooltip_Attribute_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_pip;                                           // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Label;                                         // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Value;                                         // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FAttributeValueAndUIData              AttributeInfo;                                     // 0x368(0x100)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           Tint_Color;                                        // 0x468(0x14)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class EAttributeValueType               AttributeValueType;                                // 0x47C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_sw_ItemTooltip_Attribute_C* GetDefaultObj();

	void InitializeDesignerPreview();
	void UpdateValue(double NewValue, const struct FSlateColor& LPositiveTint, const struct FSlateColor& LNegativeTint, const struct FSlateColor& LNeutralTint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, class FText CallFunc_FormatTextFromType_ResultText);
	void Initialize(double CallFunc_UpdateValue_NewValue_ImplicitCast);
	void Construct();
	void ExecuteUbergraph_WBP_sw_ItemTooltip_Attribute(int32 EntryPoint);
};

}


