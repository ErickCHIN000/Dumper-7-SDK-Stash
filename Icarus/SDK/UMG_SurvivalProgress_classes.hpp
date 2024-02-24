#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x538 (0x7A8 - 0x270)
// WidgetBlueprintGeneratedClass UMG_SurvivalProgress.UMG_SurvivalProgress_C
class UUMG_SurvivalProgress_C : public USurvivalProgressBar
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      LowPulse;                                          // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               BackgroundBorder;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          Level;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SurvivalIcon;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        CurrentProgress;                                   // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_224D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProgressBarStyle                     NormalStyle;                                       // 0x2A8(0x1A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FProgressBarStyle                     OrangeStyle;                                       // 0x448(0x1A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FProgressBarStyle                     WarningStyle;                                      // 0x5E8(0x1A0)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Green;                                             // 0x788(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Orange;                                            // 0x789(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Red;                                               // 0x78A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2269[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GoodThreshold;                                     // 0x78C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BadThreshold;                                      // 0x790(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2277[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveLinearColor*                     SurvivalColourCurve;                               // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     SurvivalIconColourCurve;                           // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_SurvivalProgress_C* GetDefaultObj();

	void SetType(enum class ESecondaryItemTypes SurvivalType, const struct FSlateColor& bg, const struct FProgressBarStyle& Low, const struct FProgressBarStyle& Normal, bool K2Node_SwitchEnum_CmpSuccess);
	void InitStatIcon();
	void UpdateDisplay();
	void ExecuteUbergraph_UMG_SurvivalProgress(int32 EntryPoint, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, enum class ESurvivalStatType Temp_byte_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FLinearColor& Temp_wildcard_Variable, class UTexture2D* K2Node_Select_Default, const struct FLinearColor& CallFunc_GetLinearColorValue_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue_2);
};

}


