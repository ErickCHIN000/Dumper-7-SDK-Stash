#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEB (0x3AB - 0x2C0)
// WidgetBlueprintGeneratedClass WB_Container_Linear.WB_Container_Linear_C
class UWB_Container_Linear_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_PB_Linear_Base_C*                  BaseProgressBar;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Marquee_Linear_C*                  BaseProgressBar_Marquee;                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Marquee_Linear_C*                  OnTop_Marquee;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_BaseProgressBar_Marquee;                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_OnTop_Marquee;                                  // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_TargetProgressBar;                              // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_TargetProgressBar_Marquee;                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          PB_DefaultMarquee;                                 // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher;                                          // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_PB_Linear_Target_C*                TargetProgressBar;                                 // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Marquee_Linear_C*                  TargetProgressBar_Marquee;                         // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LinearProgress_Separated_C*        WB_LinearProgress_Separated;                       // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                             Size;                                              // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentPercent;                                    // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetFillColor_Positive;                          // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetFillColor_Negative;                          // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TargetPercent;                                     // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsNegativeFillValue;                              // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E39[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DeltaTime;                                         // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0x378(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseTargetPercent;                                 // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsDesignTime;                                     // 0x381(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EProgressMethod                   ProgressMethod;                                    // 0x382(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseMarquee;                                       // 0x383(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMarqueeMethod                    MarqueeMethod;                                     // 0x384(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseSeparation;                                    // 0x385(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E42[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          FillColor;                                         // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ProgressChangeColor;                               // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseProgressChangeColor;                           // 0x3A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsProgressChanging;                               // 0x3A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EProgressBarFillType              BarFillType;                                       // 0x3AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Container_Linear_C* GetDefaultObj();

	void Set_Mirror_OV_OnTopMarquee(bool Mirror, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, double K2Node_Select_Default, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void Set_Mirror_OV_TargetPB_Marquee(bool Mirror, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, double K2Node_Select_Default, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void Set_Mirror_OV_BasePB_Marquee(bool Mirror, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, double K2Node_Select_Default, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void Handle_SetUseSeparation(bool bUseSeparation, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default);
	void Set_DefaultMarquee_Visibility(bool bVisible, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1);
	void Set_MarqueeMask(enum class EMarqueeMask MaskType, class UTexture2D* CustomMask, enum class EMarqueeMask Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* K2Node_Select_Default, class UWB_Marquee_Linear_C* CallFunc_FindMarquee_ReturnValue);
	void Hide_AllMarquees();
	void Interp_BasePB_Color(const struct FLinearColor& Target, double InterpSpeed, bool bIsChanging);
	void SetMirrorY_OV_Target(bool MirrorY, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double K2Node_Select_Default, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void SetMirrorX_OV_Target(bool MirrorX, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double K2Node_Select_Default, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void GetSizeY(double* Current_Size_Y, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y);
	void GetPercent_Separated(double* Percent);
	double GetAbsoluteTargetPercent(double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue);
	double FindHighestPercentValue(bool Temp_bool_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_Select_Default);
	bool IsMarqueeMethod(enum class EMarqueeMethod Method, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	class UWB_Marquee_Linear_C* FindMarquee(enum class EMarqueeMethod Temp_byte_Variable, class UWB_Marquee_Linear_C* K2Node_Select_Default);
	void UpdateStaticPercent(bool CallFunc_IsProgressMethodStatic_ReturnValue);
	bool IsProgressMethodStatic(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool IsProgressMethodInterpolate(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetTargetPercent(double* Percent);
	double FindTargetPercentValue(double CallFunc_GetPercent_Percent, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Abs_ReturnValue);
	struct FLinearColor FindTargetFillColor(bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default);
	bool IsNegativeFillValue(double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
	void GetSizeX(double* Current_Size_X, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y);
	void FindTargetProgressBarPosition(double Percent, double LocalPercent, bool Temp_bool_Variable, double Temp_real_Variable, bool Temp_bool_Variable_1, double Temp_real_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, double Temp_real_Variable_2, bool Temp_bool_Variable_4, double Temp_real_Variable_3, bool Temp_bool_Variable_5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool Temp_bool_Variable_6, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_GetSizeY_Current_Size_Y, double K2Node_Select_Default, double K2Node_Select_Default_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double K2Node_Select_Default_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, double CallFunc_GetSizeX_Current_Size_X, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, double K2Node_Select_Default_3, double CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_5, double CallFunc_GetSizeX_Current_Size_X_1, double K2Node_Select_Default_4, double K2Node_Select_Default_5, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_6, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_6);
	void GetPercent(double* Percent, double CallFunc_GetPercent_Percent);
	void SetPercent(double InPercent);
	void SetFillColor(const struct FLinearColor& InColor, double GradientPower, enum class ESlateBrushTileType Tiling);
	void SetSize(const struct FVector2D& Size);
	void SetUseGradient(bool UseGradient);
	void SetTargetPercent(double TargetPercent);
	void SetTargetFillColorPositive(const struct FLinearColor& Color);
	void SetTargetFillColorNegative(const struct FLinearColor& Color);
	void SetUseTargetPercent(bool UseTargetPercent);
	void UpdateTargetPercent();
	void UpdatePercent();
	void SetProgressMethod(enum class EProgressMethod ProgressMethod);
	void SetFillColorMask(class UObject* Value);
	void SetGradientMask(class UTexture2D* GradientTexture);
	void SetCustomMarqueeAppearance(bool bIsMarquee, enum class EMarqueeMethod MarqueeMethod);
	void SetCustomMarqueeSpeed(double Speed);
	void SetCustomMarqueeMask(enum class EMarqueeMask MaskType, class UTexture2D* CustomMask, enum class ESlateBrushTileType MaskTiling);
	void SetCustomMarqueePercent_Current();
	void SetCustomMarqueePercent_Target(double Percent);
	void SetCustomMarqueePercent_CurrentAndTarget();
	void SetDefaultMarquee_IsMarquee(bool IsMarquee);
	void SetDefaultMarquee_Image(class UTexture2D* Image);
	void SetDefaultMarquee_ImageSize(const struct FVector2D& Image_Size);
	void SetDefaultMarquee_Tint(const struct FLinearColor& Color);
	void SetDefaultMarquee_DrawAs(enum class ESlateBrushDrawType Draw_As);
	void SetDefaultMarquee_Tiling(enum class ESlateBrushTileType Tiling);
	void SetCustomMarqueeColor(const struct FLinearColor& InColorAndOpacity);
	void SetUseSeparation(bool bUseSeparation);
	void AddSegments(int32 NumSegments, double Spacing, const struct FVector2D& Size, const struct FLinearColor& FillColor, enum class EProgressBarFillType FillType, bool bIsFillFromCenter, bool bUseShader);
	void AddBackground(const struct FLinearColor& Color, bool bUseBackgroundBlur, double BlurStrength);
	void UpdateSeparationPercent(double Percent);
	void SetUseAbsoluteFillMethod(bool bAbsoluteFill);
	void SetBarFillType(enum class EProgressBarFillType FillType, bool bUseShader);
	void UpdateMarqueeFillType();
	void StartTriggerProgressChangeColor(const struct FLinearColor& ProgressChangeColor);
	void StopTriggerProgressChangeColor();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WB_Container_Linear(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool K2Node_CustomEvent_IsMarquee, class UTexture2D* K2Node_CustomEvent_Image, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& K2Node_CustomEvent_Image_Size, const struct FLinearColor& K2Node_CustomEvent_Color_1, enum class ESlateBrushDrawType K2Node_CustomEvent_Draw_As, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling, bool Temp_bool_IsClosed_Variable_1, const struct FLinearColor& K2Node_CustomEvent_InColorAndOpacity, bool K2Node_CustomEvent_bUseSeparation, int32 K2Node_CustomEvent_NumSegments, double K2Node_CustomEvent_Spacing, const struct FVector2D& K2Node_CustomEvent_Size, const struct FLinearColor& K2Node_CustomEvent_FillColor, enum class EProgressBarFillType K2Node_CustomEvent_FillType_1, bool K2Node_CustomEvent_bIsFillFromCenter, bool K2Node_CustomEvent_bUseShader_1, double CallFunc_FindHighestPercentValue_ReturnValue, bool CallFunc_IsMarqueeMethod_ReturnValue, const struct FLinearColor& K2Node_CustomEvent_Color, bool K2Node_CustomEvent_bUseBackgroundBlur, double K2Node_CustomEvent_BlurStrength, bool CallFunc_IsMarqueeMethod_ReturnValue_1, double K2Node_CustomEvent_Percent, bool CallFunc_IsMarqueeMethod_ReturnValue_2, class UWB_Marquee_Linear_C* CallFunc_FindMarquee_ReturnValue, double K2Node_CustomEvent_Percent_1, bool K2Node_CustomEvent_bAbsoluteFill, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_Has_Been_Initd_Variable, enum class EProgressBarFillType K2Node_CustomEvent_FillType, bool K2Node_CustomEvent_bUseShader, class UWB_Marquee_Linear_C* CallFunc_FindMarquee_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, class UWB_Marquee_Linear_C* CallFunc_FindMarquee_ReturnValue_2, const struct FLinearColor& K2Node_CustomEvent_ProgressChangeColor, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, enum class EMarqueeMask K2Node_CustomEvent_MaskType, class UTexture2D* K2Node_CustomEvent_CustomMask, enum class ESlateBrushTileType K2Node_CustomEvent_MaskTiling, double K2Node_CustomEvent_Speed, bool K2Node_CustomEvent_bIsMarquee, enum class EMarqueeMethod K2Node_CustomEvent_MarqueeMethod, class UTexture2D* K2Node_CustomEvent_GradientTexture, class UObject* K2Node_CustomEvent_Value, bool K2Node_SwitchEnum_CmpSuccess_2, bool Temp_bool_IsClosed_Variable_2, enum class EProgressMethod K2Node_CustomEvent_ProgressMethod, double CallFunc_GetAbsoluteTargetPercent_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_IsNegativeFillValue_ReturnValue, const struct FLinearColor& CallFunc_FindTargetFillColor_ReturnValue, double CallFunc_GetAbsoluteTargetPercent_ReturnValue_1, bool Temp_bool_IsClosed_Variable_3, bool K2Node_CustomEvent_UseTargetPercent, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle, const struct FLinearColor& K2Node_CustomEvent_Color_2, const struct FLinearColor& K2Node_CustomEvent_Color_3, double K2Node_CustomEvent_TargetPercent, bool Temp_bool_Has_Been_Initd_Variable_3, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle_1, bool K2Node_CustomEvent_UseGradient, const struct FVector2D& K2Node_CustomEvent_Size_1, bool Temp_bool_IsClosed_Variable_4, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle_2, const struct FLinearColor& K2Node_CustomEvent_InColor, double K2Node_CustomEvent_GradientPower, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling_1, double K2Node_CustomEvent_InPercent, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle_3, bool CallFunc_IsProgressMethodInterpolate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_5, bool K2Node_SwitchEnum_CmpSuccess_6, bool K2Node_SwitchEnum_CmpSuccess_7, bool Temp_bool_Has_Been_Initd_Variable_4);
};

}


