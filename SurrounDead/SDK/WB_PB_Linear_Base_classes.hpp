#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x79 (0x339 - 0x2C0)
// WidgetBlueprintGeneratedClass WB_PB_Linear_Base.WB_PB_Linear_Base_C
class UWB_PB_Linear_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWB_BaseProgressBar_C*                 BasePB;                                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DesignTimeGradient;                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BaseProgressBar_C*                 GradientPB;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_DesignTimeGradient;                             // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RB_Gradient;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsDesignTime;                                     // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DC5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Size;                                              // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FillColor;                                         // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          GradientColor;                                     // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ProgressChangeColor;                               // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsChanging;                                       // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_PB_Linear_Base_C* GetDefaultObj();

	struct FVector2D FindFillSize(class UObject* Object, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_GetTexture2DSizeClamped_ReturnValue, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_2, const struct FVector2D& CallFunc_GetTexture2DSizeClamped_ReturnValue_1);
	void Rotate_DesignRetainerGradient(double Rotation, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void Rotate_DesignTimeGradient(double Angle, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
	void Mirror_DesignTimeGradient(bool Mirror, double Temp_real_Variable, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, double Temp_real_Variable_1, bool Temp_bool_Variable_1, double Temp_real_Variable_2, double K2Node_Select_Default, double Temp_real_Variable_3, double K2Node_Select_Default_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void GetPercent(double* Percent, double CallFunc_GetPercent_Percent);
	void SetPercent(double InPercent);
	void SetFillColor(const struct FLinearColor& InColor, double GradientPower, enum class ESlateBrushTileType Tiling);
	void SetSize(const struct FVector2D& Size);
	void SetGradientPercent(double Value);
	void SetUseGradient(bool UseGradient);
	void SetFillColorMask(class UObject* Value);
	void SetGradientMask(class UTexture2D* GradientTexture);
	void UpdateProgressChangeColor(const struct FLinearColor& NewColor, double InterpSpeed, bool IsChanging);
	void SetBarFillType(enum class EProgressBarFillType FillType, bool bUseShader);
	void PreConstruct(bool IsDesignTime);
	void Reconstruct();
	void Construct();
	void ExecuteUbergraph_WB_PB_Linear_Base(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, class UObject* K2Node_CustomEvent_Value, const struct FVector2D& CallFunc_FindFillSize_ReturnValue, const struct FVector2D& CallFunc_FindFillSize_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_UseGradient, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double K2Node_CustomEvent_Value_1, const struct FVector2D& K2Node_CustomEvent_Size, const struct FLinearColor& K2Node_CustomEvent_InColor, double K2Node_CustomEvent_GradientPower, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling, double CallFunc_MapRangeClamped_ReturnValue, double Temp_real_Variable, bool Temp_bool_Has_Been_Initd_Variable, double K2Node_CustomEvent_InPercent, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_IsClosed_Variable_1, class UTexture2D* K2Node_CustomEvent_GradientTexture, const struct FLinearColor& K2Node_CustomEvent_NewColor, double K2Node_CustomEvent_InterpSpeed, bool K2Node_CustomEvent_IsChanging, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FLinearColor& CallFunc_CInterpTo_ReturnValue, double Temp_real_Variable_1, enum class EProgressBarFillType K2Node_CustomEvent_FillType, bool K2Node_CustomEvent_bUseShader, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, bool Temp_bool_IsClosed_Variable_2, double Temp_real_Variable_2, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, bool Temp_bool_Variable_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double K2Node_Select_Default, const struct FLinearColor& CallFunc_SubtractBrightnessValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue_1, bool Temp_bool_IsClosed_Variable_3, float CallFunc_GetRenderOpacity_ReturnValue, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double K2Node_Select_Default_1, double CallFunc_FInterpTo_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_CInterpTo_InterpSpeed_ImplicitCast, float CallFunc_CInterpTo_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
};

}


