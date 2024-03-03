#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD3 (0x333 - 0x260)
// WidgetBlueprintGeneratedClass WB_Container_Linear.WB_Container_Linear_C
class UWB_Container_Linear_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWB_PB_Linear_Base_C*                  BaseProgressBar;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Marquee_Linear_C*                  BaseProgressBar_Marquee;                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Marquee_Linear_C*                  OnTop_Marquee;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_BaseProgressBar_Marquee;                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_OnTop_Marquee;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_TargetProgressBar;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_TargetProgressBar_Marquee;                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          PB_DefaultMarquee;                                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       Switcher;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_PB_Linear_Target_C*                TargetProgressBar;                                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Marquee_Linear_C*                  TargetProgressBar_Marquee;                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_LinearProgress_Separated_C*        WB_LinearProgress_Separated;                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                             Size;                                              // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentPercent;                                    // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetFillColor_Positive;                          // 0x2D4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetFillColor_Negative;                          // 0x2E4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TargetPercent;                                     // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsNegativeFillValue;                              // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DeltaTime;                                         // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0x300(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseTargetPercent;                                 // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsDesignTime;                                     // 0x309(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EProgressMethod                   ProgressMethod;                                    // 0x30A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseMarquee;                                       // 0x30B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EMarqueeMethod                    MarqueeMethod;                                     // 0x30C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseSeparation;                                    // 0x30D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B68[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          FillColor;                                         // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ProgressChangeColor;                               // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseProgressChangeColor;                           // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsProgressChanging;                               // 0x331(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EProgressBarFillType              BarFillType;                                       // 0x332(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Container_Linear_C* GetDefaultObj();

	void Set_Mirror_OV_OnTopMarquee(bool Mirror, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float K2Node_Select_Default, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void Set_Mirror_OV_TargetPB_Marquee(bool Mirror, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float K2Node_Select_Default, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void Set_Mirror_OV_BasePB_Marquee(bool Mirror, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, float K2Node_Select_Default, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void Handle_SetUseSeparation(bool bUseSeparation, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default);
	void Set_DefaultMarquee_Visibility(bool bVisible, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1);
	void Set_MarqueeMask(enum class EMarqueeMask MaskType, class UTexture2D* CustomMask, enum class EMarqueeMask Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* K2Node_Select_Default, class UWB_Marquee_Linear_C* CallFunc_FindMarquee_ReturnValue);
	void Hide_AllMarquees();
	void Interp_BasePB_Color(const struct FLinearColor& Target, float InterpSpeed, bool bIsChanging);
	void SetMirrorY_OV_Target(bool MirrorY, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void SetMirrorX_OV_Target(bool MirrorX, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void GetSizeY(float* Current_Size_Y, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
	void GetPercent_Separated(float* Percent);
	float GetAbsoluteTargetPercent(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue);
	float FindHighestPercentValue(bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, float K2Node_Select_Default);
	bool IsMarqueeMethod(enum class EMarqueeMethod Method, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	class UWB_Marquee_Linear_C* FindMarquee(enum class EMarqueeMethod Temp_byte_Variable, class UWB_Marquee_Linear_C* K2Node_Select_Default);
	void UpdateStaticPercent(bool CallFunc_IsProgressMethodStatic_ReturnValue);
	bool IsProgressMethodStatic(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool IsProgressMethodInterpolate(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void GetTargetPercent(float* Percent);
	float FindTargetPercentValue(float CallFunc_GetPercent_Percent, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue);
	struct FLinearColor FindTargetFillColor(bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default);
	bool IsNegativeFillValue(float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void GetSizeX(float* Current_Size_X, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y);
	void FindTargetProgressBarPosition(float Percent, float LocalPercent, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, float Temp_float_Variable_2, bool Temp_bool_Variable_4, float Temp_float_Variable_3, bool Temp_bool_Variable_5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, bool Temp_bool_Variable_6, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetSizeY_Current_Size_Y, float K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, float CallFunc_GetSizeX_Current_Size_X, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, float K2Node_Select_Default_3, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_5, float CallFunc_GetSizeX_Current_Size_X_1, float K2Node_Select_Default_4, float K2Node_Select_Default_5, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float K2Node_Select_Default_6, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_6);
	void GetPercent(float* Percent, float CallFunc_GetPercent_Percent);
	void SetPercent(float InPercent);
	void SetFillColor(const struct FLinearColor& InColor, float GradientPower, enum class ESlateBrushTileType Tiling);
	void SetSize(const struct FVector2D& Size);
	void SetUseGradient(bool UseGradient);
	void SetTargetPercent(float TargetPercent);
	void SetTargetFillColorPositive(const struct FLinearColor& Color);
	void SetTargetFillColorNegative(const struct FLinearColor& Color);
	void SetUseTargetPercent(bool UseTargetPercent);
	void UpdateTargetPercent();
	void UpdatePercent();
	void SetProgressMethod(enum class EProgressMethod ProgressMethod);
	void SetFillColorMask(class UObject* Value);
	void SetGradientMask(class UTexture2D* GradientTexture);
	void SetCustomMarqueeAppearance(bool bIsMarquee, enum class EMarqueeMethod MarqueeMethod);
	void SetCustomMarqueeSpeed(float Speed);
	void SetCustomMarqueeMask(enum class EMarqueeMask MaskType, class UTexture2D* CustomMask, enum class ESlateBrushTileType MaskTiling);
	void SetCustomMarqueePercent_Current();
	void SetCustomMarqueePercent_Target(float Percent);
	void SetCustomMarqueePercent_CurrentAndTarget();
	void SetDefaultMarquee_IsMarquee(bool IsMarquee);
	void SetDefaultMarquee_Image(class UTexture2D* Image);
	void SetDefaultMarquee_ImageSize(const struct FVector2D& Image_Size);
	void SetDefaultMarquee_Tint(const struct FLinearColor& Color);
	void SetDefaultMarquee_DrawAs(enum class ESlateBrushDrawType Draw_As);
	void SetDefaultMarquee_Tiling(enum class ESlateBrushTileType Tiling);
	void SetCustomMarqueeColor(const struct FLinearColor& InColorAndOpacity);
	void SetUseSeparation(bool bUseSeparation);
	void AddSegments(int32 NumSegments, float Spacing, const struct FVector2D& Size, const struct FLinearColor& FillColor, enum class EProgressBarFillType FillType, bool bIsFillFromCenter);
	void AddBackground(const struct FLinearColor& Color, bool bUseBackgroundBlur, float BlurStrength);
	void UpdateSeparationPercent(float Percent);
	void SetUseAbsoluteFillMethod(bool bAbsoluteFill);
	void SetBarFillType(enum class EProgressBarFillType FillType);
	void UpdateMarqueeFillType();
	void StartTriggerProgressChangeColor(const struct FLinearColor& ProgressChangeColor);
	void StopTriggerProgressChangeColor();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WB_Container_Linear(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, float CallFunc_FindHighestPercentValue_ReturnValue, bool CallFunc_IsMarqueeMethod_ReturnValue, bool K2Node_CustomEvent_IsMarquee, bool K2Node_SwitchEnum_CmpSuccess, class UTexture2D* K2Node_CustomEvent_Image, const struct FVector2D& K2Node_CustomEvent_Image_Size, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& K2Node_CustomEvent_Color_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class ESlateBrushDrawType K2Node_CustomEvent_Draw_As, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling, bool Temp_bool_IsClosed_Variable_1, const struct FLinearColor& K2Node_CustomEvent_InColorAndOpacity, bool K2Node_CustomEvent_bUseSeparation, int32 K2Node_CustomEvent_NumSegments, float K2Node_CustomEvent_Spacing, const struct FVector2D& K2Node_CustomEvent_Size, const struct FLinearColor& K2Node_CustomEvent_FillColor, enum class EProgressBarFillType K2Node_CustomEvent_FillType_1, bool K2Node_CustomEvent_bIsFillFromCenter, bool CallFunc_IsMarqueeMethod_ReturnValue_1, bool CallFunc_IsMarqueeMethod_ReturnValue_2, class UWB_Marquee_Linear_C* CallFunc_FindMarquee_ReturnValue, const struct FLinearColor& K2Node_CustomEvent_Color, bool K2Node_CustomEvent_bUseBackgroundBlur, float K2Node_CustomEvent_BlurStrength, float K2Node_CustomEvent_Percent, float K2Node_CustomEvent_Percent_1, bool K2Node_CustomEvent_bAbsoluteFill, class UWB_Marquee_Linear_C* CallFunc_FindMarquee_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_Has_Been_Initd_Variable, enum class EProgressBarFillType K2Node_CustomEvent_FillType, class UWB_Marquee_Linear_C* CallFunc_FindMarquee_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_1, enum class EMarqueeMask K2Node_CustomEvent_MaskType, class UTexture2D* K2Node_CustomEvent_CustomMask, enum class ESlateBrushTileType K2Node_CustomEvent_MaskTiling, float K2Node_CustomEvent_Speed, bool K2Node_CustomEvent_bIsMarquee, enum class EMarqueeMethod K2Node_CustomEvent_MarqueeMethod, const struct FLinearColor& K2Node_CustomEvent_ProgressChangeColor, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, class UTexture2D* K2Node_CustomEvent_GradientTexture, class UObject* K2Node_CustomEvent_Value, bool K2Node_SwitchEnum_CmpSuccess_2, bool Temp_bool_IsClosed_Variable_2, enum class EProgressMethod K2Node_CustomEvent_ProgressMethod, float CallFunc_GetAbsoluteTargetPercent_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_IsNegativeFillValue_ReturnValue, const struct FLinearColor& CallFunc_FindTargetFillColor_ReturnValue, float CallFunc_GetAbsoluteTargetPercent_ReturnValue_1, bool Temp_bool_IsClosed_Variable_3, bool K2Node_CustomEvent_UseTargetPercent, const struct FLinearColor& K2Node_CustomEvent_Color_2, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle, const struct FLinearColor& K2Node_CustomEvent_Color_3, float K2Node_CustomEvent_TargetPercent, bool K2Node_CustomEvent_UseGradient, bool Temp_bool_Has_Been_Initd_Variable_3, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle_1, const struct FVector2D& K2Node_CustomEvent_Size_1, bool Temp_bool_IsClosed_Variable_4, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle_2, const struct FLinearColor& K2Node_CustomEvent_InColor, float K2Node_CustomEvent_GradientPower, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling_1, float K2Node_CustomEvent_InPercent, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle_3, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_IsProgressMethodInterpolate_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_5, bool K2Node_SwitchEnum_CmpSuccess_6, bool K2Node_SwitchEnum_CmpSuccess_7, bool Temp_bool_Has_Been_Initd_Variable_4);
};

}


