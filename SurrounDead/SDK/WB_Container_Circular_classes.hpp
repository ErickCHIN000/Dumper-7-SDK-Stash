#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x160 (0x420 - 0x2C0)
// WidgetBlueprintGeneratedClass WB_Container_Circular.WB_Container_Circular_C
class UWB_Container_Circular_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Circle;                                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MarqueeBackground;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MarqueeCircle;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_TargetCircle;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Content;                                        // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TargetCircle;                                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WS_Marquee;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CircleMaterial;                                    // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       Thickness;                                         // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Density;                                           // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Steps;                                             // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22A0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Spacing;                                           // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StepDensity;                                       // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BackgroundColor;                                   // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FillColor;                                         // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TargetPercent;                                     // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentPercent;                                    // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAbsoluteFillMethod;                               // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsNegativeFillValue;                              // 0x361(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EProgressMethod                   ProgressMethod;                                    // 0x362(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsDesignTime;                                     // 0x363(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DeltaTime;                                         // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0x370(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseTargetPercent;                                 // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          TargetFillColor_Positive;                          // 0x37C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetFillColor_Negative;                          // 0x38C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          GradientColor;                                     // 0x39C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       GradientOpacity;                                   // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseGradient;                                      // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22E3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            FillColorMask;                                     // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            BackgroundMask;                                    // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       BackgroundThickness;                               // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseMarquee;                                       // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22EB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          MarqueeColor;                                      // 0x3DC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          MarqueeColorBG;                                    // 0x3EC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ProgressChangeColor;                               // 0x3FC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsProgressChanging;                               // 0x40C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseProgressChangeColor;                           // 0x40D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsChanging;                                       // 0x40E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22F6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          LocalColor;                                        // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Container_Circular_C* GetDefaultObj();

	struct FLinearColor GetFillColor(const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	double GetGradientOpacity(double Temp_real_Variable, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_K2_GetScalarParameterValue_ReturnValue, double K2Node_Select_Default, double K2Node_Select_Option_1_ImplicitCast);
	void SetMarqueeMaskParam(class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue);
	void SetTimeParamMarquee(double Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	void SetMarqueeBGColorParam(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A);
	void SetMarqueeColorParam(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A);
	void SetStepDensityParamMarquee(double Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	void SetDensityParamMarquee(double Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	void SetSpacingParamMarquee(double Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	void SetStepsParamMarquee(int32 Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	void SetThicknessParamMarquee(double Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
	class UMaterialInstanceDynamic* GetCircleMaterialMarqueeBG(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	class UMaterialInstanceDynamic* GetCircleMaterialMarquee(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetBackgroundColorMaskParam(class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetFillColorMaskParam(class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetGradientColorParam(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetGradientMaskParam(class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetGradientOpacityParam(double Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void SetUseGradientParam(bool UseGradient, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue, double K2Node_Select_Default, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void SetDensityParamTarget(double Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialTarget_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void SetThicknessParamTarget(double Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialTarget_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void SetPercentParamTarget(double Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialTarget_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	double GetAbsoluteTargetPercent(double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue);
	void SetFillColorParamTarget(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialTarget_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A);
	class UMaterialInstanceDynamic* GetCircleMaterialTarget(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	struct FLinearColor FindTargetFillColor(bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default);
	void FindTargetProgressBarPosition(double Progress, double CallFunc_MapRangeClamped_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
	bool IsProgressMethodStatic(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateStaticPercent(bool CallFunc_IsProgressMethodStatic_ReturnValue);
	bool IsProgressMethodInterpolate(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool IsNegativeFillValue(double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
	void SetAbsoluteFillMethod(bool bAbsoluteFillMethod, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue, double K2Node_Select_Default, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void GetTargetPercent(double* TargetPercent);
	void GetPercent(double* Percent);
	class UMaterialInstanceDynamic* GetCircleMaterial(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetFillColorParam(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetEmptyColorParam(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue);
	void SetStepDensityParam(double Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void SetSpacingParam(double Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void SetStepsParam(int32 Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void SetDensityParam(double Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void SetThicknessParam(double Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void SetPercentParam(double Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void SetThickness(double Thickness);
	void SetTargetPercent(double TargetPercent);
	void SetSteps(int32 Steps);
	void SetPercent(double Percent);
	void SetSpacing(double Spacing);
	void SetSize(double Size);
	void SetDensity(double Density);
	void SetStepDensity(double HardStepBorder);
	void SetUseTargetPercent(bool bIsTargetPercent);
	void SetBackgroundColor(class UTexture2D* BackgroundMask, const struct FLinearColor& Color);
	void SetFillColor(const struct FLinearColor& FillColor, double GradientPower);
	void SetUseAbsoluteFillMethod(bool bAbsoluteFillMethod);
	void UpdateTargetPercent();
	void SetProgressMethod(enum class EProgressMethod ProgressMethod);
	void UpdatePercent();
	void SetTargetFillColor_Positive(const struct FLinearColor& FillColor);
	void SetTargetFillColor_Negative(const struct FLinearColor& FillColor);
	void SetGradientOpacity(double GradientOpacity);
	void SetGradientType(enum class EGradientTypes GradientType);
	void SetUseGradient(bool bUseGradient);
	void SetFillColorMask(class UTexture2D* Mask);
	void SetupMarquee(bool bUseMarquee, const struct FLinearColor& MarqueeColor, const struct FLinearColor& MarqueeBackgroundColor);
	void SetMarqueeTime(double Value);
	void SetMarqueeMask(enum class EMarqueeMask MarqueeMask, class UTexture2D* CustomMask);
	void StartTriggerProgressChangeColor(const struct FLinearColor& ProgressChangeColor);
	void StopTriggerProgressChangeColor();
	void UpdateProgressChangeColor(const struct FLinearColor& NewColor, double InterpSpeed, bool IsChanging);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WB_Container_Circular(int32 EntryPoint, bool Temp_bool_Variable, double Temp_real_Variable, bool Temp_bool_Variable_1, class UTexture2D* Temp_object_Variable, bool Temp_bool_Variable_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_3, double Temp_real_Variable_1, int32 K2Node_Select_Default, double K2Node_CustomEvent_Thickness, double K2Node_CustomEvent_TargetPercent, int32 K2Node_CustomEvent_Steps, double K2Node_CustomEvent_Percent, double K2Node_CustomEvent_Spacing, double K2Node_CustomEvent_Size, double K2Node_CustomEvent_Density, double K2Node_CustomEvent_HardStepBorder, bool K2Node_CustomEvent_bIsTargetPercent, class UTexture2D* K2Node_CustomEvent_BackgroundMask, const struct FLinearColor& K2Node_CustomEvent_Color, const struct FLinearColor& K2Node_CustomEvent_FillColor_2, double K2Node_CustomEvent_GradientPower, bool K2Node_CustomEvent_bAbsoluteFillMethod, double CallFunc_MapRangeClamped_ReturnValue, double K2Node_Select_Default_1, enum class EProgressMethod K2Node_CustomEvent_ProgressMethod, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsNegativeFillValue_ReturnValue, const struct FLinearColor& CallFunc_FindTargetFillColor_ReturnValue, double CallFunc_GetAbsoluteTargetPercent_ReturnValue, const struct FLinearColor& K2Node_CustomEvent_FillColor_1, const struct FLinearColor& K2Node_CustomEvent_FillColor, class UTexture* Temp_object_Variable_1, double K2Node_CustomEvent_GradientOpacity, class UTexture2D* Temp_object_Variable_2, bool Temp_bool_IsClosed_Variable_1, enum class EGradientTypes K2Node_CustomEvent_GradientType, bool K2Node_CustomEvent_bUseGradient, class UTexture2D* K2Node_CustomEvent_Mask, enum class EGradientTypes Temp_byte_Variable, bool K2Node_CustomEvent_bUseMarquee, const struct FLinearColor& K2Node_CustomEvent_MarqueeColor, const struct FLinearColor& K2Node_CustomEvent_MarqueeBackgroundColor, double K2Node_CustomEvent_Value, enum class EMarqueeMask K2Node_CustomEvent_MarqueeMask, class UTexture2D* K2Node_CustomEvent_CustomMask, class UTexture2D* Temp_object_Variable_3, const struct FLinearColor& K2Node_CustomEvent_ProgressChangeColor, const struct FLinearColor& K2Node_CustomEvent_NewColor, double K2Node_CustomEvent_InterpSpeed, bool K2Node_CustomEvent_IsChanging, double CallFunc_GetWorldDeltaSeconds_ReturnValue, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, bool K2Node_Event_IsDesignTime, const struct FLinearColor& CallFunc_CInterpTo_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class EMarqueeMask Temp_byte_Variable_1, class UTexture2D* K2Node_Select_Default_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsProgressMethodInterpolate_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, const struct FLinearColor& CallFunc_SubtractBrightnessValue_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTexture2D* K2Node_Select_Default_3, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_GetGradientOpacity_ReturnValue, bool Temp_bool_IsClosed_Variable_2, double K2Node_Select_Default_4, double CallFunc_FInterpTo_ReturnValue, class UTexture* Temp_object_Variable_7, class UTexture* Temp_object_Variable_8, class UTexture* Temp_object_Variable_9, class UTexture* K2Node_Select_Default_5, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_CInterpTo_InterpSpeed_ImplicitCast, float CallFunc_CInterpTo_DeltaTime_ImplicitCast);
};

}


