#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x288 - 0x268)
// WidgetBlueprintGeneratedClass WBP_DifficultyIndicator.WBP_DifficultyIndicator_C
class UWBP_DifficultyIndicator_C : public UDifficultyIndicator
{
public:
	class UImage*                                DifficultySymbol;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_1;                                         // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UObject*>                       Return_Value_Image;                                // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_DifficultyIndicator_C* GetDefaultObj();

	struct FLinearColor GetDisabledColor(const struct FLinearColor& CallFunc_LinearColor_White_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32 CallFunc_GetDifficulty_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	struct FSlateBrush GetDifficultyTexture(int32 CallFunc_GetDifficulty_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UObject* CallFunc_Array_Get_Item, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
};

}


