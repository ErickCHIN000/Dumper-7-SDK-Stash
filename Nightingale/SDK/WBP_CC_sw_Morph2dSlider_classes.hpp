#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x3A8 - 0x348)
// WidgetBlueprintGeneratedClass WBP_CC_sw_Morph2dSlider.WBP_CC_sw_Morph2dSlider_C
class UWBP_CC_sw_Morph2dSlider_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_cc_sw_Slider_2D_C*                WBP_cc_sw_Slider_2D;                               // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_CharacterAppearanceComponent_C*    AppearanceComponent;                               // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  MorphA_Name;                                       // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MorphB_Name;                                       // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MorphC_Name;                                       // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MorphD_Name;                                       // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CachedValue;                                       // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text_Label;                                        // 0x390(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_CC_sw_Morph2dSlider_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue);
	void GetValuesFromAppearanceComponent(float L_ValueD, float L_ValueC, float L_ValueB, float L_ValueA, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_3, bool Temp_bool_Variable_1, double K2Node_Select_Default, double K2Node_Select_Default_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, TArray<struct FAppearanceMorphTarget>& CallFunc_GetBodyMorphTargets_OutCurrentMorphs, int32 CallFunc_Array_Length_ReturnValue, const struct FAppearanceMorphTarget& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_EqualEqual_NameName_ReturnValue_3, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_2, double CallFunc_Less_DoubleDouble_B_ImplicitCast_1, double CallFunc_MapRangeClamped_Value_ImplicitCast_3, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1);
	void UpdateAppearanceComponentValues(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool CallFunc_IsValid_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, double CallFunc_MapRangeClamped_ReturnValue_2, double CallFunc_MapRangeClamped_ReturnValue_3);
	void BndEvt__WBP_CC_sw_Morph2dSlider_WBP_cc_sw_Slider_2D_K2Node_ComponentBoundEvent_0_ED_SliderValueChanged__DelegateSignature(const struct FVector2D& Slider_Value);
	void RefreshSlider();
	void Construct();
	void Randomize();
	void Reset_Slider();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_CC_sw_Morph2dSlider(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& K2Node_ComponentBoundEvent_Slider_Value, double CallFunc_BreakVector2D_X_2, double CallFunc_BreakVector2D_Y_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_4, bool K2Node_Event_IsDesignTime);
};

}


