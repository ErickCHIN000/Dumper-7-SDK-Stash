#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x350 - 0x340)
// WidgetBlueprintGeneratedClass WBP_ConstraintSatisfied.WBP_ConstraintSatisfied_C
class UWBP_ConstraintSatisfied_C : public UNWXUserWidget
{
public:
	class UImage*                                Img_Border;                                        // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Icon;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ConstraintSatisfied_C* GetDefaultObj();

	void UpdateCosmetics(bool IsConstraintSatisfied, bool Temp_bool_Variable, bool Temp_bool_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_1);
};

}


