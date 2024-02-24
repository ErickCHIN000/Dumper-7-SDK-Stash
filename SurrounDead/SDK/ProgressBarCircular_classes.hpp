#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E2 (0x4AA - 0x2C8)
// WidgetBlueprintGeneratedClass ProgressBarCircular.ProgressBarCircular_C
class UProgressBarCircular_C : public UWB_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Fade;                                              // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               B_Content;                                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_Effects_Background;                             // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_Effects_Foreground;                             // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RB_BlendMask;                                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SB_Content;                                        // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Container_Circular_C*              WB_Container_Circular;                             // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       Size;                                              // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EProgressMethod                   ProgressMethod;                                    // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       QueueDelay;                                        // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentPercent;                                    // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InterpTimeCurrent;                                 // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FillColorCurrent;                                  // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            FillColorMask;                                     // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         UseGradient;                                       // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseTargetPercent;                                  // 0x349(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3937[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TargetPercent;                                     // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InterpTimeTarget;                                  // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetFillColor_Positive;                          // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetFillColor_Negative;                          // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BackgroundColor;                                   // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            BackgroundMask;                                    // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       DeltaTime;                                         // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InterpValue;                                       // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NewPercent;                                        // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OldPercent;                                        // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InterpValueTarget;                                 // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NewTargetPercent;                                  // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OldTargetPercent;                                  // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanSetTargetPercent;                               // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanSetPercent;                                     // 0x3D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsDesignTime;                                     // 0x3D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGradientTypes                    GradientType;                                      // 0x3D3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3945[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       GradientColorVariation;                            // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            BlendMask;                                         // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Thickness;                                         // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Density;                                           // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StepDensity;                                       // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseMarquee;                                       // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3946[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          MarqueeColor;                                      // 0x404(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Separation_Steps;                                  // 0x414(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Separation_Steps_Spacing;                          // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSeparated;                                      // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Separation_AbsoluteFillMethod;                     // 0x421(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_394A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             LocalSize;                                         // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_Effects>                    Effects;                                           // 0x438(0x10)(Edit, BlueprintVisible)
	class UWB_Effect_C*                          CurrentEffectWidget;                               // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPercentChanged;                                  // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       GradientOpacity;                                   // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          MarqueeColorBackground;                            // 0x468(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MarqueeTime;                                       // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMarqueeMask                      MarqueeMask;                                       // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3951[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CustomMarqueeMask;                                 // 0x488(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0x490(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<double>                               Entries;                                           // 0x498(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bIsProgressRunning;                                // 0x4A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PauseWithGamePause;                                // 0x4A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UProgressBarCircular_C* GetDefaultObj();

	void Count_TargetPercent(double Time, double* Value, bool Temp_bool_Variable, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool Temp_bool_Variable_1, double Temp_real_Variable, bool Temp_bool_Variable_2, double K2Node_Select_Default, double Temp_real_Variable_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_2);
	void RemoveEntryIndex(int32 IndexToRemove);
	bool IsValidEntryIndex(int32 IndexToTest, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void GetEntryIndex(int32 Index, double* Value);
	bool IsEffectProgressChangeColor(struct FS_Effects& Effect, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void PB_GetSeparationSteps(int32* Steps);
	void PB_AddEffect(const struct FS_Effects& Effect, int32* Index, int32 CallFunc_Array_Add_ReturnValue);
	void PB_GetEffects(TArray<struct FS_Effects>* Effects);
	void PB_GetIsMarquee(bool* IsMarquee);
	void PB_GetUseGradientFillColor(bool* UseGradientFillColor);
	void PB_GetFillColor(struct FLinearColor* Color);
	void PB_GetTargetFillColor_Negative(struct FLinearColor* Color);
	void PB_GetTargetFillColor_Positive(struct FLinearColor* Color);
	void PB_GetInterpTimeTarget(double* TargetInterpTime);
	void PB_GetInterpTimeCurrent(double* CurrentInterpTime);
	void PB_GetProgressMethod(enum class EProgressMethod* EProgressMethod);
	void PB_GetUseTargetPercent(bool* UseTargetPercent);
	void PB_GetTargetPercent(double* TargetPercent, double CallFunc_GetTargetPercent_TargetPercent);
	void PB_GetPercent(double* Percent, double CallFunc_GetPercent_Percent);
	void PB_GetSize(struct FVector2D* Size, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void ClearEffectLayers(enum class EEffectLayer EffectLayer, class UOverlay* CallFunc_FindEffectOverlay_Overlay, int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWB_Effect_C* K2Node_DynamicCast_AsWB_Effect, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void FindEffectOverlay(enum class EEffectLayer EffectLayer, class UOverlay** Overlay, enum class EEffectLayer Temp_byte_Variable, class UOverlay* K2Node_Select_Default);
	void Count_Percent(double Time, double* Value, bool Temp_bool_Variable, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool Temp_bool_Variable_1, double Temp_real_Variable, bool Temp_bool_Variable_2, double K2Node_Select_Default, double Temp_real_Variable_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_2);
	void Transfer_CurrentPercent(double Percent, bool CallFunc_IsValid_ReturnValue);
	void Transfer_UseTargetPercent(bool UseTargetPercent, bool CallFunc_IsValid_ReturnValue);
	void Transfer_TargetPercent(double TargetPercent, bool CallFunc_IsValid_ReturnValue);
	void SetBlendMask(class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue);
	double GetInterpolationTime(bool Temp_bool_Variable, double Temp_real_Variable, double CallFunc_MakeLiteralDouble_ReturnValue, double K2Node_Select_Default, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1);
	bool IsProgressMethodInterpolated(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool IsProgressMethodStatic(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void PB_SetSize(const struct FVector2D& Size);
	void PB_SetPercent(double Value);
	void PB_SetFillColor(const struct FLinearColor& Color);
	void PB_SetTargetPercent(double TargetPercent);
	void PB_SetThickness(double Thickness);
	void PB_SetUseTargetPercent(bool UseTargetPercent);
	void PB_SetProgressMethod(enum class EProgressMethod EProgressMethod);
	void PB_SetInterpTimeCurrent(double CurrentInterpTime);
	void PB_SetInterpTimeTarget(double TargetInterpTime);
	void PB_SetTargetFillColor_Positive(const struct FLinearColor& Color);
	void PB_SetTargetFillColor_Negative(const struct FLinearColor& Color);
	void PB_SetUseGradientFillColor(bool UseGradientFillColor);
	void PB_SetBackgroundColor(const struct FLinearColor& Color);
	void PB_SetFillColorGradientPower(double GradientPower);
	void PB_SetFillColorMask(class UObject* Mask);
	void PB_SetBackgroundColorMask(class UTexture2D* Mask);
	void PB_SetFillColorGradientType(enum class EGradientTypes GradientType);
	void PB_SetBlendMask(class UTexture2D* BlendMask);
	void PB_SetIsMarquee(bool IsMarquee);
	void PB_SetCustomMarqueeImage(class UTexture2D* Image);
	void PB_SetCustomMarqueeMaskType(enum class EMarqueeMask MaskType);
	void PB_SetSeparationSteps(int32 Steps);
	void PB_SetSeparationStepsSpacing(double Spacing);
	void PB_SetSeparationAbsoluteFill(bool AbsoluteFillMethod);
	void PB_SetEffects(TArray<struct FS_Effects>& Effects);
	void PB_SetEffectEnabled(int32 Index, bool IsEnabled);
	void PB_SetAllEffectsEnabled(bool IsEnabled);
	void PB_RemoveEffect(int32 Index);
	void UpdatePercent(double Percent);
	void UpdateInterpolation();
	void SetSize(double Size);
	void SetUseGradient(bool UseGradient, double GradientOpacity, enum class EGradientTypes GradientType);
	void SetTargetPercent(bool UseTargetPercent, double TargetPercent);
	void SetTargetFillColorPositive(const struct FLinearColor& Color);
	void SetTargetFillColorNegative(const struct FLinearColor& Color);
	void SetProgressMethod(enum class EProgressMethod ProgressMethod);
	void SetPercentInterpolated(double NewPercent);
	void SetFillColorMask(class UTexture2D* Value);
	void SetOverallBlendMask(class UTexture2D* BlendMask);
	void CreateEffects();
	void AddEffect(const struct FS_Effects& Effect);
	void Reset();
	void SetThickness(double Thickness);
	void SetSteps(int32 Separation_Steps);
	void SetSpacing(double Spacing);
	void SetDensity(double Density);
	void SetStepDensity(double HardStepBorder);
	void SetBackgroundColor(const struct FLinearColor& BackgroundColor, class UTexture2D* BackgroundMask);
	void SetFillColor(const struct FLinearColor& FillColorCurrent, double GradientPower);
	void UseAbsoluteFillMethod(bool AbsoluteFillMethod);
	void SetupMarquee(bool UseMarquee, const struct FLinearColor& MarqueeColor, const struct FLinearColor& MarqueeBackgroundColor);
	void SetMarqueeTime(double Value);
	void SetMarqueeMask(enum class EMarqueeMask MarqueeMask, class UTexture2D* CustomMarqueeMask);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AddEntry(double NewPercent);
	void InitNextEntry();
	void ExecuteEntry(double CurrentEntry);
	void Reconstruct();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void StopTriggerProgressChangeColor();
	void StartTriggerProgressChangeColor(const struct FLinearColor& Color);
	void HandlePausedQueue();
	void ExecuteUbergraph_ProgressBarCircular(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsGamePaused_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_IsClosed_Variable_3, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_IsClosed_Variable_4, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_5, double CallFunc_GetPercent_Percent, int32 Temp_int_Array_Index_Variable, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_6, double CallFunc_GetPercent_Percent_1, bool CallFunc_IsValid_ReturnValue_4, bool Temp_bool_IsClosed_Variable_5, bool CallFunc_IsValid_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue_6, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector2D& K2Node_Event_Size, double K2Node_Event_Value, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_FClamp_ReturnValue, const struct FLinearColor& K2Node_Event_Color_3, int32 Temp_int_Loop_Counter_Variable_1, double K2Node_Event_TargetPercent, double CallFunc_FClamp_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, double K2Node_Event_Thickness, bool K2Node_Event_UseTargetPercent, enum class EProgressMethod K2Node_Event_EProgressMethod, bool Temp_bool_IsClosed_Variable_6, double K2Node_Event_CurrentInterpTime, double K2Node_Event_TargetInterpTime, const struct FLinearColor& K2Node_Event_Color_2, const struct FLinearColor& K2Node_Event_Color_1, bool K2Node_Event_UseGradientFillColor, const struct FLinearColor& K2Node_Event_Color, double K2Node_Event_GradientPower, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, class UObject* K2Node_Event_Mask_1, class UTexture2D* K2Node_Event_Mask, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, enum class EGradientTypes K2Node_Event_GradientType, class UTexture2D* K2Node_Event_BlendMask, bool K2Node_Event_IsMarquee, class UTexture2D* K2Node_Event_Image, enum class EMarqueeMask K2Node_Event_MaskType, bool Temp_bool_Has_Been_Initd_Variable_7, int32 K2Node_Event_Steps, double K2Node_Event_Spacing, bool K2Node_Event_AbsoluteFillMethod, TArray<struct FS_Effects>& K2Node_Event_Effects, bool Temp_bool_Has_Been_Initd_Variable_8, int32 K2Node_Event_Index_1, bool K2Node_Event_IsEnabled_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool K2Node_Event_IsEnabled, bool Temp_bool_Has_Been_Initd_Variable_9, bool Temp_bool_IsClosed_Variable_7, int32 K2Node_Event_Index, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool Temp_bool_IsClosed_Variable_8, bool Temp_bool_IsClosed_Variable_9, bool CallFunc_IsValid_ReturnValue_7, const struct FS_Effects& K2Node_MakeStruct_S_Effects, bool CallFunc_IsValid_ReturnValue_8, double K2Node_CustomEvent_Percent, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_FClamp_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_IsValid_ReturnValue_9, const struct FS_Effects& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue_2, const struct FS_Effects& K2Node_MakeStruct_S_Effects_1, double K2Node_CustomEvent_Size, bool K2Node_CustomEvent_UseGradient, double K2Node_CustomEvent_GradientOpacity, enum class EGradientTypes K2Node_CustomEvent_GradientType, double CallFunc_FClamp_ReturnValue_3, bool K2Node_CustomEvent_UseTargetPercent, double K2Node_CustomEvent_TargetPercent, const struct FLinearColor& K2Node_CustomEvent_Color_2, const struct FLinearColor& K2Node_CustomEvent_Color_1, bool CallFunc_IsProgressMethodInterpolated_ReturnValue, enum class EProgressMethod K2Node_CustomEvent_ProgressMethod, double K2Node_CustomEvent_NewPercent_1, double CallFunc_Count_Percent_Value, double CallFunc_Count_TargetPercent_Value, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_Count_Percent_Value_1, double CallFunc_MapRangeClamped_ReturnValue_2, class UTexture2D* K2Node_CustomEvent_Value_1, bool CallFunc_IsValid_ReturnValue_10, class UTexture2D* K2Node_CustomEvent_BlendMask, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, int32 Temp_int_Loop_Counter_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_10, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_IsClosed_Variable_10, const struct FS_Effects& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FS_Effects& K2Node_CustomEvent_Effect, bool CallFunc_IsEffectProgressChangeColor_ReturnValue, class UOverlay* CallFunc_FindEffectOverlay_Overlay, bool CallFunc_IsValid_ReturnValue_12, bool Temp_bool_Has_Been_Initd_Variable_11, double K2Node_CustomEvent_Thickness, int32 K2Node_CustomEvent_Separation_Steps, bool CallFunc_IsValid_ReturnValue_13, bool Temp_bool_IsClosed_Variable_11, double K2Node_CustomEvent_Spacing, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, double K2Node_CustomEvent_Density, double K2Node_CustomEvent_HardStepBorder, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_15, const struct FLinearColor& K2Node_CustomEvent_BackgroundColor, class UTexture2D* K2Node_CustomEvent_BackgroundMask, const struct FLinearColor& K2Node_CustomEvent_FillColorCurrent, double K2Node_CustomEvent_GradientPower, bool Temp_bool_Has_Been_Initd_Variable_12, bool K2Node_CustomEvent_AbsoluteFillMethod, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_3, double CallFunc_MapRangeClamped_ReturnValue_4, bool K2Node_CustomEvent_UseMarquee, const struct FLinearColor& K2Node_CustomEvent_MarqueeColor, const struct FLinearColor& K2Node_CustomEvent_MarqueeBackgroundColor, bool CallFunc_IsValid_ReturnValue_16, double K2Node_CustomEvent_Value, enum class EMarqueeMask K2Node_CustomEvent_MarqueeMask, class UTexture2D* K2Node_CustomEvent_CustomMarqueeMask, bool Temp_bool_IsClosed_Variable_12, bool CallFunc_IsValid_ReturnValue_17, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_GetInterpolationTime_ReturnValue, double K2Node_CustomEvent_NewPercent, double CallFunc_Add_DoubleDouble_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_13, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValidEntryIndex_ReturnValue, double CallFunc_GetEntryIndex_Value, double K2Node_CustomEvent_CurrentEntry, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_18, bool Temp_bool_IsClosed_Variable_13, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_IsClosed_Variable_14, bool CallFunc_IsValid_ReturnValue_19, class UWB_Effect_Circular_C* CallFunc_Create_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_14, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, bool CallFunc_IsValid_ReturnValue_20, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_15, bool CallFunc_IsValid_ReturnValue_21, bool Temp_bool_IsClosed_Variable_15, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, double K2Node_Select_Default, enum class EUMGSequencePlayMode Temp_byte_Variable, double CallFunc_FClamp_ReturnValue_4, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable_16, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default_1, bool Temp_bool_Has_Been_Initd_Variable_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UTexture2D* Temp_object_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_17, int32 Temp_int_Variable_1, bool Temp_bool_IsClosed_Variable_17, TArray<class UOverlay*>& K2Node_MakeArray_Array, class UOverlay* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWB_Effect_C* K2Node_DynamicCast_AsWB_Effect, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_22, bool CallFunc_IsValid_ReturnValue_23, bool Temp_bool_Variable_2, int32 Temp_int_Variable_2, class UTexture2D* K2Node_Select_Default_2, bool Temp_bool_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_2, int32 K2Node_Select_Default_3, bool CallFunc_BooleanAND_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 Temp_int_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, int32 K2Node_Select_Default_4, bool Temp_bool_Variable_6, double K2Node_Select_Default_5, const struct FLinearColor& K2Node_CustomEvent_Color, double Temp_real_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool Temp_bool_Variable_7, double Temp_real_Variable_1, double K2Node_Select_Default_6, bool CallFunc_Less_IntInt_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_18, double K2Node_Select_Default_7, bool Temp_bool_Variable_8, double K2Node_Select_Default_8, bool CallFunc_Greater_IntInt_ReturnValue, double Temp_real_Variable_2, bool Temp_bool_Variable_9, double K2Node_Select_Default_9, bool CallFunc_IsValid_ReturnValue_24, bool Temp_bool_IsClosed_Variable_18, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_25, double K2Node_VariableSet_DeltaTime_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void OnPercentChanged__DelegateSignature(double Percent);
};

}


