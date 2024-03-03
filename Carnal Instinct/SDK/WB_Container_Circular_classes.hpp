#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x134 (0x394 - 0x260)
// WidgetBlueprintGeneratedClass WB_Container_Circular.WB_Container_Circular_C
class UWB_Container_Circular_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Circle;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MarqueeBackground;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MarqueeCircle;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_TargetCircle;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Content;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TargetCircle;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WS_Marquee;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CircleMaterial;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Thickness;                                         // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Density;                                           // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Steps;                                             // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Spacing;                                           // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StepDensity;                                       // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BackgroundColor;                                   // 0x2BC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FillColor;                                         // 0x2CC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetPercent;                                     // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentPercent;                                    // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAbsoluteFillMethod;                               // 0x2E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsNegativeFillValue;                              // 0x2E5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EProgressMethod                   ProgressMethod;                                    // 0x2E6(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsDesignTime;                                     // 0x2E7(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        DeltaTime;                                         // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C9D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer;                                             // 0x2F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseTargetPercent;                                 // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CAB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          TargetFillColor_Positive;                          // 0x2FC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetFillColor_Negative;                          // 0x30C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          GradientColor;                                     // 0x31C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GradientOpacity;                                   // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseGradient;                                      // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            FillColorMask;                                     // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            BackgroundMask;                                    // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BackgroundThickness;                               // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseMarquee;                                       // 0x34C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CD5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          MarqueeColor;                                      // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          MarqueeColorBG;                                    // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ProgressChangeColor;                               // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsProgressChanging;                               // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bUseProgressChangeColor;                           // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsChanging;                                       // 0x382(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D0C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          LocalColor;                                        // 0x384(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Container_Circular_C* GetDefaultObj();

	struct FLinearColor GetFillColor(const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	float GetGradientOpacity(float Temp_float_Variable, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_K2_GetScalarParameterValue_ReturnValue, float K2Node_Select_Default);
	void SetMarqueeMaskParam(class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue);
	void SetTimeParamMarquee(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue);
	void SetMarqueeBGColorParam(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A);
	void SetMarqueeColorParam(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A);
	void SetStepDensityParamMarquee(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue);
	void SetDensityParamMarquee(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue);
	void SetSpacingParamMarquee(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue);
	void SetStepsParamMarquee(int32 Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue);
	void SetThicknessParamMarquee(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue);
	class UMaterialInstanceDynamic* GetCircleMaterialMarqueeBG(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	class UMaterialInstanceDynamic* GetCircleMaterialMarquee(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetBackgroundColorMaskParam(class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetFillColorMaskParam(class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetGradientColorParam(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetGradientMaskParam(class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetGradientOpacityParam(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetUseGradientParam(bool UseGradient, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue, float K2Node_Select_Default);
	void SetDensityParamTarget(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialTarget_ReturnValue);
	void SetThicknessParamTarget(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialTarget_ReturnValue);
	void SetPercentParamTarget(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialTarget_ReturnValue);
	float GetAbsoluteTargetPercent(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue);
	void SetFillColorParamTarget(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialTarget_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A);
	class UMaterialInstanceDynamic* GetCircleMaterialTarget(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	struct FLinearColor FindTargetFillColor(bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default);
	void FindTargetProgressBarPosition(float Progress, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1);
	bool IsProgressMethodStatic(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateStaticPercent(bool CallFunc_IsProgressMethodStatic_ReturnValue);
	bool IsProgressMethodInterpolate(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool IsNegativeFillValue(float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void SetAbsoluteFillMethod(bool bAbsoluteFillMethod, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue, float K2Node_Select_Default);
	void GetTargetPercent(float* TargetPercent);
	void GetPercent(float* Percent);
	class UMaterialInstanceDynamic* GetCircleMaterial(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetFillColorParam(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetEmptyColorParam(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetStepDensityParam(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetSpacingParam(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetStepsParam(int32 Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void SetDensityParam(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetThicknessParam(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetPercentParam(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetThickness(float Thickness);
	void SetTargetPercent(float TargetPercent);
	void SetSteps(int32 Steps);
	void SetPercent(float Percent);
	void SetSpacing(float Spacing);
	void SetSize(float Size);
	void SetDensity(float Density);
	void SetStepDensity(float HardStepBorder);
	void SetUseTargetPercent(bool bIsTargetPercent);
	void SetBackgroundColor(class UTexture2D* BackgroundMask, const struct FLinearColor& Color);
	void SetFillColor(const struct FLinearColor& FillColor, float GradientPower);
	void SetUseAbsoluteFillMethod(bool bAbsoluteFillMethod);
	void UpdateTargetPercent();
	void SetProgressMethod(enum class EProgressMethod ProgressMethod);
	void UpdatePercent();
	void SetTargetFillColor_Positive(const struct FLinearColor& FillColor);
	void SetTargetFillColor_Negative(const struct FLinearColor& FillColor);
	void SetGradientOpacity(float GradientOpacity);
	void SetGradientType(enum class EGradientTypes GradientType);
	void SetUseGradient(bool bUseGradient);
	void SetFillColorMask(class UTexture2D* Mask);
	void SetupMarquee(bool bUseMarquee, const struct FLinearColor& MarqueeColor, const struct FLinearColor& MarqueeBackgroundColor);
	void SetMarqueeTime(float Value);
	void SetMarqueeMask(enum class EMarqueeMask MarqueeMask, class UTexture2D* CustomMask);
	void StartTriggerProgressChangeColor(const struct FLinearColor& ProgressChangeColor);
	void StopTriggerProgressChangeColor();
	void UpdateProgressChangeColor(const struct FLinearColor& NewColor, float InterpSpeed, bool IsChanging);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WB_Container_Circular(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, class UTexture2D* Temp_object_Variable, bool Temp_bool_Variable_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_3, float Temp_float_Variable_1, int32 K2Node_Select_Default, float K2Node_CustomEvent_Thickness, float K2Node_CustomEvent_TargetPercent, int32 K2Node_CustomEvent_Steps, float K2Node_CustomEvent_Percent, float K2Node_CustomEvent_Spacing, float K2Node_CustomEvent_Size, float K2Node_CustomEvent_Density, float K2Node_CustomEvent_HardStepBorder, bool K2Node_CustomEvent_bIsTargetPercent, class UTexture2D* K2Node_CustomEvent_BackgroundMask, const struct FLinearColor& K2Node_CustomEvent_Color, const struct FLinearColor& K2Node_CustomEvent_FillColor_2, float K2Node_CustomEvent_GradientPower, bool K2Node_CustomEvent_bAbsoluteFillMethod, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Select_Default_1, enum class EProgressMethod K2Node_CustomEvent_ProgressMethod, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsNegativeFillValue_ReturnValue, const struct FLinearColor& CallFunc_FindTargetFillColor_ReturnValue, float CallFunc_GetAbsoluteTargetPercent_ReturnValue, const struct FLinearColor& K2Node_CustomEvent_FillColor_1, const struct FLinearColor& K2Node_CustomEvent_FillColor, class UTexture* Temp_object_Variable_1, float K2Node_CustomEvent_GradientOpacity, class UTexture2D* Temp_object_Variable_2, bool Temp_bool_IsClosed_Variable_1, enum class EGradientTypes K2Node_CustomEvent_GradientType, bool K2Node_CustomEvent_bUseGradient, class UTexture2D* K2Node_CustomEvent_Mask, enum class EGradientTypes Temp_byte_Variable, bool K2Node_CustomEvent_bUseMarquee, const struct FLinearColor& K2Node_CustomEvent_MarqueeColor, const struct FLinearColor& K2Node_CustomEvent_MarqueeBackgroundColor, float K2Node_CustomEvent_Value, enum class EMarqueeMask K2Node_CustomEvent_MarqueeMask, class UTexture2D* K2Node_CustomEvent_CustomMask, class UTexture2D* Temp_object_Variable_3, const struct FLinearColor& K2Node_CustomEvent_ProgressChangeColor, const struct FLinearColor& K2Node_CustomEvent_NewColor, float K2Node_CustomEvent_InterpSpeed, bool K2Node_CustomEvent_IsChanging, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, bool K2Node_Event_IsDesignTime, const struct FLinearColor& CallFunc_CInterpTo_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class EMarqueeMask Temp_byte_Variable_1, class UTexture2D* K2Node_Select_Default_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsProgressMethodInterpolate_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, const struct FLinearColor& CallFunc_SubtractBrightnessValue_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTexture2D* K2Node_Select_Default_3, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_GetGradientOpacity_ReturnValue, bool Temp_bool_IsClosed_Variable_2, float K2Node_Select_Default_4, float CallFunc_FInterpTo_ReturnValue, class UTexture* Temp_object_Variable_7, class UTexture* Temp_object_Variable_8, class UTexture* Temp_object_Variable_9, class UTexture* K2Node_Select_Default_5, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


