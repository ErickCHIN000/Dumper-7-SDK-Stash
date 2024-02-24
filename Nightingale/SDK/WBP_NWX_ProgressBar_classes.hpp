#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF1 (0x439 - 0x348)
// WidgetBlueprintGeneratedClass WBP_NWX_ProgressBar.WBP_NWX_ProgressBar_C
class UWBP_NWX_ProgressBar_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_BG;                                            // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              LinearBar;                                         // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       LinearBarSwitcher;                                 // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_BottomToTop;                           // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_FillFromCenter;                        // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_LeftToRight;                           // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_RightToLeft;                           // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_TopToBot;                              // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RadialCircle;                                      // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RadialCircle_BG;                                   // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WS_ProgressBarStyle;                               // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DMI_MaterialInstance;                              // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       CachedProgress;                                    // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       LineRadius;                                        // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       Line_Width;                                        // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       Line_Hardness;                                     // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       Opacity;                                           // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class E_ProgressBarTypes                ProgressBarType;                                   // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F93[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Tint_Minus_Progress_;                              // 0x3DC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FLinearColor                          Tint_Minus_BG;                                     // 0x3EC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_4F99[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Size;                                              // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       CoolDownTime;                                      // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            ProgressTexture;                                   // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTexture2D*                            BGTexture;                                         // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       Duration;                                          // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DMI_MaterialInstance_BG;                           // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowBG;                                            // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_NWX_ProgressBar_C* GetDefaultObj();

	void InitializeDesignerPreview();
	void UpdateCosmetics(class UProgressBar* Temp_object_Variable, class UProgressBar* Temp_object_Variable_1, enum class E_ProgressBarTypes Temp_byte_Variable, class UWidget* Temp_object_Variable_2, class UWidget* Temp_object_Variable_3, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWidget* K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector2D& K2Node_Select_Default_1, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, enum class E_ProgressBarTypes Temp_byte_Variable_1, bool CallFunc_IsRadial_IsRadial, class UProgressBar* K2Node_Select_Default_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void SetupDMI(bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
	void UpdateMaterialParameters(class UMaterialInstanceDynamic* Material, bool UpdateProgress, bool Temp_bool_Variable, float Temp_real_Variable, float K2Node_Select_Default, float K2Node_Select_Option_1_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3);
	void UpdateMaterial(bool CallFunc_IsValid_ReturnValue);
	void IsRadial(bool* IsRadial, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void Initialize(bool Temp_bool_Variable, enum class E_ProgressBarTypes Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, bool CallFunc_IsRadial_IsRadial, class UWidget* K2Node_Select_Default, int32 K2Node_Select_Default_1);
	void SetDuration(double NewDuration);
	void SetTintProgress(const struct FLinearColor& Tint, enum class E_ProgressBarTypes Temp_byte_Variable, class UProgressBar* Temp_object_Variable, class UProgressBar* Temp_object_Variable_1, class UProgressBar* K2Node_Select_Default, bool CallFunc_IsRadial_IsRadial);
	void SetDesignerPreviewProgress(double Progress, double LClampedProgress, double Temp_real_Variable, enum class E_ProgressBarTypes Temp_byte_Variable, class UProgressBar* Temp_object_Variable, class UProgressBar* Temp_object_Variable_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UProgressBar* K2Node_Select_Default_1, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void SetProgress(double Progress, double LClampedProgress, double Temp_real_Variable, enum class E_ProgressBarTypes Temp_byte_Variable, class UProgressBar* Temp_object_Variable, class UProgressBar* Temp_object_Variable_1, bool CallFunc_IsRadial_IsRadial, bool Temp_bool_Variable, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UProgressBar* K2Node_Select_Default_1, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void Construct();
	void ExecuteUbergraph_WBP_NWX_ProgressBar(int32 EntryPoint);
};

}


