#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6D (0x2CD - 0x260)
// WidgetBlueprintGeneratedClass WB_PB_Linear_Base.WB_PB_Linear_Base_C
class UWB_PB_Linear_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWB_BaseProgressBar_C*                 BasePB;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DesignTimeGradient;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_BaseProgressBar_C*                 GradientPB;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_DesignTimeGradient;                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RB_Gradient;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsDesignTime;                                     // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2505[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Size;                                              // 0x294(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FillColor;                                         // 0x29C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          GradientColor;                                     // 0x2AC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ProgressChangeColor;                               // 0x2BC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsChanging;                                       // 0x2CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWB_PB_Linear_Base_C* GetDefaultObj();

	struct FVector2D FindFillSize(class UObject* Object, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_GetTexture2DSizeClamped_ReturnValue, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_2, const struct FVector2D& CallFunc_GetTexture2DSizeClamped_ReturnValue_1);
	void Rotate_DesignRetainerGradient(float Rotation, float CallFunc_Multiply_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue);
	void Rotate_DesignTimeGradient(float Angle);
	void Mirror_DesignTimeGradient(bool Mirror, float Temp_float_Variable, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float K2Node_Select_Default, float Temp_float_Variable_3, float K2Node_Select_Default_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void GetPercent(float* Percent, float CallFunc_GetPercent_Percent);
	void SetPercent(float InPercent);
	void SetFillColor(const struct FLinearColor& InColor, float GradientPower, enum class ESlateBrushTileType Tiling);
	void SetSize(const struct FVector2D& Size);
	void SetGradientPercent(float Value);
	void SetUseGradient(bool UseGradient);
	void SetFillColorMask(class UObject* Value);
	void SetGradientMask(class UTexture2D* GradientTexture);
	void UpdateProgressChangeColor(const struct FLinearColor& NewColor, float InterpSpeed, bool IsChanging);
	void SetBarFillType(enum class EProgressBarFillType FillType);
	void PreConstruct(bool IsDesignTime);
	void Reconstruct();
	void Construct();
	void ExecuteUbergraph_WB_PB_Linear_Base(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, float Temp_float_Variable, class UObject* K2Node_CustomEvent_Value, const struct FVector2D& CallFunc_FindFillSize_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue, const struct FVector2D& CallFunc_FindFillSize_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_UseGradient, bool Temp_bool_Has_Been_Initd_Variable, float K2Node_CustomEvent_Value_1, const struct FVector2D& K2Node_CustomEvent_Size, const struct FLinearColor& K2Node_CustomEvent_InColor, float K2Node_CustomEvent_GradientPower, enum class ESlateBrushTileType K2Node_CustomEvent_Tiling, bool Temp_bool_Has_Been_Initd_Variable_1, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_CustomEvent_InPercent, bool Temp_bool_IsClosed_Variable_1, float Temp_float_Variable_1, class UTexture2D* K2Node_CustomEvent_GradientTexture, bool Temp_bool_Has_Been_Initd_Variable_2, const struct FLinearColor& K2Node_CustomEvent_NewColor, float K2Node_CustomEvent_InterpSpeed, bool K2Node_CustomEvent_IsChanging, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FLinearColor& CallFunc_CInterpTo_ReturnValue, bool Temp_bool_IsClosed_Variable_2, enum class EProgressBarFillType K2Node_CustomEvent_FillType, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Variable, bool K2Node_Event_IsDesignTime, float Temp_float_Variable_2, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool Temp_bool_Variable_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float K2Node_Select_Default, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FLinearColor& CallFunc_SubtractBrightnessValue_ReturnValue, bool Temp_bool_IsClosed_Variable_3, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_GetRenderOpacity_ReturnValue, float K2Node_Select_Default_1, float CallFunc_FInterpTo_ReturnValue);
};

}


