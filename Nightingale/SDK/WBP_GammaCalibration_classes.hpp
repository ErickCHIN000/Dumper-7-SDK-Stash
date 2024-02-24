#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x398 - 0x348)
// WidgetBlueprintGeneratedClass WBP_GammaCalibration.WBP_GammaCalibration_C
class UWBP_GammaCalibration_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             CBU_Gamma_Accept;                                  // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_Small_Flourish_Center_C* WBP_Component_Small_Flourish_Center;               // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GammaScreen_Slider_C*             WBP_GammaScreen_Slider;                            // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       Out_Range_A_ImageDarkest;                          // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Out_Range_B_ImageBrightest;                        // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           BrightnessCurve;                                   // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnGammaAccepted;                                   // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_GammaCalibration_C* GetDefaultObj();

	void AdjustProxyImageBrightness(double Value, float CallFunc_GetFloatValue_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_GetFloatValue_InTime_ImplicitCast);
	void Construct();
	void BndEvt__WBP_GammaCalibration_WBP_GammaScreen_Slider_K2Node_ComponentBoundEvent_0_OnSliderValueChanged__DelegateSignature(float NewValue);
	void BndEvt__WBP_GammaCalibration_CBU_Gamma_Accept_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_GammaCalibration(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue, float K2Node_ComponentBoundEvent_NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, float CallFunc_GetBrightness_ReturnValue, double CallFunc_AdjustProxyImageBrightness_Value_ImplicitCast, double CallFunc_AdjustProxyImageBrightness_Value_ImplicitCast_1);
	void OnGammaAccepted__DelegateSignature();
};

}


