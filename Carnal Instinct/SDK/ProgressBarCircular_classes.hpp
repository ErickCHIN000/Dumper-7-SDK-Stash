#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18A (0x3F2 - 0x268)
// WidgetBlueprintGeneratedClass ProgressBarCircular.ProgressBarCircular_C
class UProgressBarCircular_C : public UWB_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      Fade;                                              // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               B_Content;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_Effects_Background;                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_Effects_Foreground;                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RB_BlendMask;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Content;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Container_Circular_C*              WB_Container_Circular;                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Size;                                              // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EProgressMethod                   ProgressMethod;                                    // 0x2AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        QueueDelay;                                        // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentPercent;                                    // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InterpTimeCurrent;                                 // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FillColorCurrent;                                  // 0x2BC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            FillColorMask;                                     // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseGradient;                                       // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         UseTargetPercent;                                  // 0x2D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30FF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TargetPercent;                                     // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InterpTimeTarget;                                  // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetFillColor_Positive;                          // 0x2E4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetFillColor_Negative;                          // 0x2F4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BackgroundColor;                                   // 0x304(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3104[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            BackgroundMask;                                    // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InterpValue;                                       // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewPercent;                                        // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OldPercent;                                        // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        InterpValueTarget;                                 // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewTargetPercent;                                  // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OldTargetPercent;                                  // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanSetTargetPercent;                               // 0x33C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanSetPercent;                                     // 0x33D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsDesignTime;                                     // 0x33E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EGradientTypes                    GradientType;                                      // 0x33F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GradientColorVariation;                            // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3111[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            BlendMask;                                         // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Thickness;                                         // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Density;                                           // 0x354(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StepDensity;                                       // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseMarquee;                                       // 0x35C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3112[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          MarqueeColor;                                      // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Separation_Steps;                                  // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Separation_Steps_Spacing;                          // 0x374(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSeparated;                                      // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Separation_AbsoluteFillMethod;                     // 0x379(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3118[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LocalSize;                                         // 0x37C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_311B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_Effects>                    Effects;                                           // 0x388(0x10)(Edit, BlueprintVisible)
	class UWB_Effect_C*                          CurrentEffectWidget;                               // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPercentChanged;                                  // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        GradientOpacity;                                   // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          MarqueeColorBackground;                            // 0x3B4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MarqueeTime;                                       // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMarqueeMask                      MarqueeMask;                                       // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_311E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CustomMarqueeMask;                                 // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0x3D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                Entries;                                           // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bIsProgressRunning;                                // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PauseWithGamePause;                                // 0x3F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UProgressBarCircular_C* GetDefaultObj();

	void Count_TargetPercent(float Time, float* Value, bool Temp_bool_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, float Temp_float_Variable, bool Temp_bool_Variable_2, float K2Node_Select_Default, float Temp_float_Variable_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float K2Node_Select_Default_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float K2Node_Select_Default_2);
	void RemoveEntryIndex(int32 IndexToRemove);
	bool IsValidEntryIndex(int32 IndexToTest, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void GetEntryIndex(int32 Index, float* Value);
	bool IsEffectProgressChangeColor(struct FS_Effects& Effect, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void PB_GetSeparationSteps(int32* Steps);
	void PB_AddEffect(const struct FS_Effects& Effect, int32* Index, int32 CallFunc_Array_Add_ReturnValue);
	void PB_GetEffects(TArray<struct FS_Effects>* Effects);
	void PB_GetIsMarquee(bool* IsMarquee);
	void PB_GetUseGradientFillColor(bool* UseGradientFillColor);
	void PB_GetFillColor(struct FLinearColor* Color);
	void PB_GetTargetFillColor_Negative(struct FLinearColor* Color);
	void PB_GetTargetFillColor_Positive(struct FLinearColor* Color);
	void PB_GetInterpTimeTarget(float* TargetInterpTime);
	void PB_GetInterpTimeCurrent(float* CurrentInterpTime);
	void PB_GetProgressMethod(enum class EProgressMethod* EProgressMethod);
	void PB_GetUseTargetPercent(bool* UseTargetPercent);
	void PB_GetTargetPercent(float* TargetPercent, float CallFunc_GetTargetPercent_TargetPercent);
	void PB_GetPercent(float* Percent, float CallFunc_GetPercent_Percent);
	void PB_GetSize(struct FVector2D* Size, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void ClearEffectLayers(enum class EEffectLayer EffectLayer, class UOverlay* CallFunc_FindEffectOverlay_Overlay, int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWB_Effect_C* K2Node_DynamicCast_AsWB_Effect, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void FindEffectOverlay(enum class EEffectLayer EffectLayer, class UOverlay** Overlay, enum class EEffectLayer Temp_byte_Variable, class UOverlay* K2Node_Select_Default);
	void Count_Percent(float Time, float* Value, bool Temp_bool_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, float Temp_float_Variable, bool Temp_bool_Variable_2, float K2Node_Select_Default, float Temp_float_Variable_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float K2Node_Select_Default_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float K2Node_Select_Default_2);
	void Transfer_CurrentPercent(float Percent, bool CallFunc_IsValid_ReturnValue);
	void Transfer_UseTargetPercent(bool UseTargetPercent, bool CallFunc_IsValid_ReturnValue);
	void Transfer_TargetPercent(float TargetPercent, bool CallFunc_IsValid_ReturnValue);
	void SetBlendMask(class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue);
	float GetInterpolationTime(bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_MakeLiteralFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1);
	bool IsProgressMethodInterpolated(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool IsProgressMethodStatic(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void PB_SetSize(const struct FVector2D& Size);
	void PB_SetPercent(float Value);
	void PB_SetFillColor(const struct FLinearColor& Color);
	void PB_SetTargetPercent(float TargetPercent);
	void PB_SetThickness(float Thickness);
	void PB_SetUseTargetPercent(bool UseTargetPercent);
	void PB_SetProgressMethod(enum class EProgressMethod EProgressMethod);
	void PB_SetInterpTimeCurrent(float CurrentInterpTime);
	void PB_SetInterpTimeTarget(float TargetInterpTime);
	void PB_SetTargetFillColor_Positive(const struct FLinearColor& Color);
	void PB_SetTargetFillColor_Negative(const struct FLinearColor& Color);
	void PB_SetUseGradientFillColor(bool UseGradientFillColor);
	void PB_SetBackgroundColor(const struct FLinearColor& Color);
	void PB_SetFillColorGradientPower(float GradientPower);
	void PB_SetFillColorMask(class UObject* Mask);
	void PB_SetBackgroundColorMask(class UTexture2D* Mask);
	void PB_SetFillColorGradientType(enum class EGradientTypes GradientType);
	void PB_SetBlendMask(class UTexture2D* BlendMask);
	void PB_SetIsMarquee(bool IsMarquee);
	void PB_SetCustomMarqueeImage(class UTexture2D* Image);
	void PB_SetCustomMarqueeMaskType(enum class EMarqueeMask MaskType);
	void PB_SetSeparationSteps(int32 Steps);
	void PB_SetSeparationStepsSpacing(float Spacing);
	void PB_SetSeparationAbsoluteFill(bool AbsoluteFillMethod);
	void PB_SetEffects(TArray<struct FS_Effects>& Effects);
	void PB_SetEffectEnabled(int32 Index, bool IsEnabled);
	void PB_SetAllEffectsEnabled(bool IsEnabled);
	void PB_RemoveEffect(int32 Index);
	void UpdatePercent(float Percent);
	void UpdateInterpolation();
	void SetSize(float Size);
	void SetUseGradient(bool UseGradient, float GradientOpacity, enum class EGradientTypes GradientType);
	void SetTargetPercent(bool UseTargetPercent, float TargetPercent);
	void SetTargetFillColorPositive(const struct FLinearColor& Color);
	void SetTargetFillColorNegative(const struct FLinearColor& Color);
	void SetProgressMethod(enum class EProgressMethod ProgressMethod);
	void SetPercentInterpolated(float NewPercent);
	void SetFillColorMask(class UTexture2D* Value);
	void SetOverallBlendMask(class UTexture2D* BlendMask);
	void CreateEffects();
	void AddEffect(const struct FS_Effects& Effect);
	void Reset();
	void SetThickness(float Thickness);
	void SetSteps(int32 Separation_Steps);
	void SetSpacing(float Spacing);
	void SetDensity(float Density);
	void SetStepDensity(float HardStepBorder);
	void SetBackgroundColor(const struct FLinearColor& BackgroundColor, class UTexture2D* BackgroundMask);
	void SetFillColor(const struct FLinearColor& FillColorCurrent, float GradientPower);
	void UseAbsoluteFillMethod(bool AbsoluteFillMethod);
	void SetupMarquee(bool UseMarquee, const struct FLinearColor& MarqueeColor, const struct FLinearColor& MarqueeBackgroundColor);
	void SetMarqueeTime(float Value);
	void SetMarqueeMask(enum class EMarqueeMask MarqueeMask, class UTexture2D* CustomMarqueeMask);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AddEntry(float NewPercent);
	void InitNextEntry();
	void ExecuteEntry(float CurrentEntry);
	void Reconstruct();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void StopTriggerProgressChangeColor();
	void StartTriggerProgressChangeColor(const struct FLinearColor& Color);
	void HandlePausedQueue();
	void ExecuteUbergraph_ProgressBarCircular(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsGamePaused_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_IsClosed_Variable_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_IsClosed_Variable_4, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_5, float CallFunc_GetPercent_Percent, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_6, float CallFunc_GetPercent_Percent_1, bool CallFunc_IsValid_ReturnValue_4, bool Temp_bool_IsClosed_Variable_5, bool CallFunc_IsValid_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue_6, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector2D& K2Node_Event_Size, float K2Node_Event_Value, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_FClamp_ReturnValue, const struct FLinearColor& K2Node_Event_Color_3, int32 Temp_int_Loop_Counter_Variable_1, float K2Node_Event_TargetPercent, float CallFunc_FClamp_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, float K2Node_Event_Thickness, bool K2Node_Event_UseTargetPercent, enum class EProgressMethod K2Node_Event_EProgressMethod, bool Temp_bool_IsClosed_Variable_6, float K2Node_Event_CurrentInterpTime, float K2Node_Event_TargetInterpTime, const struct FLinearColor& K2Node_Event_Color_2, const struct FLinearColor& K2Node_Event_Color_1, bool K2Node_Event_UseGradientFillColor, const struct FLinearColor& K2Node_Event_Color, float K2Node_Event_GradientPower, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, class UObject* K2Node_Event_Mask_1, class UTexture2D* K2Node_Event_Mask, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, enum class EGradientTypes K2Node_Event_GradientType, class UTexture2D* K2Node_Event_BlendMask, bool K2Node_Event_IsMarquee, class UTexture2D* K2Node_Event_Image, enum class EMarqueeMask K2Node_Event_MaskType, bool Temp_bool_Has_Been_Initd_Variable_7, int32 K2Node_Event_Steps, float K2Node_Event_Spacing, bool K2Node_Event_AbsoluteFillMethod, TArray<struct FS_Effects>& K2Node_Event_Effects, bool Temp_bool_Has_Been_Initd_Variable_8, int32 K2Node_Event_Index_1, bool K2Node_Event_IsEnabled_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool K2Node_Event_IsEnabled, bool Temp_bool_Has_Been_Initd_Variable_9, bool Temp_bool_IsClosed_Variable_7, int32 K2Node_Event_Index, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool Temp_bool_IsClosed_Variable_8, bool Temp_bool_IsClosed_Variable_9, bool CallFunc_IsValid_ReturnValue_7, const struct FS_Effects& K2Node_MakeStruct_S_Effects, bool CallFunc_IsValid_ReturnValue_8, float K2Node_CustomEvent_Percent, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_FClamp_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_IsValid_ReturnValue_9, const struct FS_Effects& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue_2, const struct FS_Effects& K2Node_MakeStruct_S_Effects_1, float K2Node_CustomEvent_Size, bool K2Node_CustomEvent_UseGradient, float K2Node_CustomEvent_GradientOpacity, enum class EGradientTypes K2Node_CustomEvent_GradientType, float CallFunc_FClamp_ReturnValue_3, bool K2Node_CustomEvent_UseTargetPercent, float K2Node_CustomEvent_TargetPercent, const struct FLinearColor& K2Node_CustomEvent_Color_2, const struct FLinearColor& K2Node_CustomEvent_Color_1, bool CallFunc_IsProgressMethodInterpolated_ReturnValue, enum class EProgressMethod K2Node_CustomEvent_ProgressMethod, float K2Node_CustomEvent_NewPercent_1, float CallFunc_Count_Percent_Value, float CallFunc_Count_TargetPercent_Value, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_Count_Percent_Value_1, float CallFunc_MapRangeClamped_ReturnValue_2, class UTexture2D* K2Node_CustomEvent_Value_1, bool CallFunc_IsValid_ReturnValue_10, class UTexture2D* K2Node_CustomEvent_BlendMask, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, int32 Temp_int_Loop_Counter_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_10, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_IsClosed_Variable_10, const struct FS_Effects& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FS_Effects& K2Node_CustomEvent_Effect, bool CallFunc_IsEffectProgressChangeColor_ReturnValue, class UOverlay* CallFunc_FindEffectOverlay_Overlay, bool CallFunc_IsValid_ReturnValue_12, bool Temp_bool_Has_Been_Initd_Variable_11, float K2Node_CustomEvent_Thickness, int32 K2Node_CustomEvent_Separation_Steps, bool CallFunc_IsValid_ReturnValue_13, bool Temp_bool_IsClosed_Variable_11, float K2Node_CustomEvent_Spacing, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, float K2Node_CustomEvent_Density, float K2Node_CustomEvent_HardStepBorder, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, const struct FLinearColor& K2Node_CustomEvent_BackgroundColor, class UTexture2D* K2Node_CustomEvent_BackgroundMask, const struct FLinearColor& K2Node_CustomEvent_FillColorCurrent, float K2Node_CustomEvent_GradientPower, bool Temp_bool_Has_Been_Initd_Variable_12, bool K2Node_CustomEvent_AbsoluteFillMethod, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_3, float CallFunc_MapRangeClamped_ReturnValue_4, bool K2Node_CustomEvent_UseMarquee, const struct FLinearColor& K2Node_CustomEvent_MarqueeColor, const struct FLinearColor& K2Node_CustomEvent_MarqueeBackgroundColor, bool CallFunc_IsValid_ReturnValue_16, float K2Node_CustomEvent_Value, enum class EMarqueeMask K2Node_CustomEvent_MarqueeMask, class UTexture2D* K2Node_CustomEvent_CustomMarqueeMask, bool Temp_bool_IsClosed_Variable_12, bool CallFunc_IsValid_ReturnValue_17, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetInterpolationTime_ReturnValue, float K2Node_CustomEvent_NewPercent, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_13, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValidEntryIndex_ReturnValue, float CallFunc_GetEntryIndex_Value, float K2Node_CustomEvent_CurrentEntry, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_18, bool Temp_bool_IsClosed_Variable_13, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_IsClosed_Variable_14, bool CallFunc_IsValid_ReturnValue_19, class UWB_Effect_Circular_C* CallFunc_Create_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_14, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, bool CallFunc_IsValid_ReturnValue_20, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_15, bool CallFunc_IsValid_ReturnValue_21, bool Temp_bool_IsClosed_Variable_15, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, float K2Node_Select_Default, enum class EUMGSequencePlayMode Temp_byte_Variable, float CallFunc_FClamp_ReturnValue_4, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable_16, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default_1, bool Temp_bool_Has_Been_Initd_Variable_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UTexture2D* Temp_object_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_17, int32 Temp_int_Variable_1, bool Temp_bool_IsClosed_Variable_17, TArray<class UOverlay*>& K2Node_MakeArray_Array, class UOverlay* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWB_Effect_C* K2Node_DynamicCast_AsWB_Effect, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_22, bool CallFunc_IsValid_ReturnValue_23, bool Temp_bool_Variable_2, int32 Temp_int_Variable_2, class UTexture2D* K2Node_Select_Default_2, bool Temp_bool_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_2, int32 K2Node_Select_Default_3, bool CallFunc_BooleanAND_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, int32 K2Node_Select_Default_4, bool Temp_bool_Variable_6, float K2Node_Select_Default_5, const struct FLinearColor& K2Node_CustomEvent_Color, float Temp_float_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool Temp_bool_Variable_7, float Temp_float_Variable_1, float K2Node_Select_Default_6, bool CallFunc_Less_IntInt_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_18, float K2Node_Select_Default_7, bool Temp_bool_Variable_8, float K2Node_Select_Default_8, bool CallFunc_Greater_IntInt_ReturnValue, float Temp_float_Variable_2, bool Temp_bool_Variable_9, float K2Node_Select_Default_9, bool CallFunc_IsValid_ReturnValue_24, bool Temp_bool_IsClosed_Variable_18, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_25);
	void OnPercentChanged__DelegateSignature(float Percent);
};

}


