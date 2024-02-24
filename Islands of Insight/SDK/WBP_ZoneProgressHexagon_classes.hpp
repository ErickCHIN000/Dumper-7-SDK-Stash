#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass WBP_ZoneProgressHexagon.WBP_ZoneProgressHexagon_C
class UWBP_ZoneProgressHexagon_C : public UUserWidget
{
public:
	class UImage*                                BackgroundImage;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ZoneShortName;                                     // 0x278(0x18)(Edit, BlueprintVisible)
	struct FLinearColor                          TeamColor;                                         // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ZoneProgressHexagon_C* GetDefaultObj();

	void Get_Scaled_Progress(float InputPin, float* OutputPin, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_MathExpression_ReturnValue, float K2Node_MathExpression_ReturnValue_1);
	void SetEdgeProgress(float RedProgress, float blueProgress, class UImage* EdgeObject, int32 EdgeIndex, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue, float CallFunc_FMin_ReturnValue_1);
	void SetProgress(float RedProgress, float blueProgress, float CallFunc_Get_Scaled_Progress_OutputPin, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_Get_Scaled_Progress_OutputPin_1);
};

}


