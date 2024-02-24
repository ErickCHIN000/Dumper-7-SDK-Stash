#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2E (0x36E - 0x340)
// WidgetBlueprintGeneratedClass WBP_sw_decor_kaleidoscope.WBP_sw_decor_kaleidoscope_C
class UWBP_sw_decor_kaleidoscope_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_texture;                                       // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DMI_Kaleidoscope;                                  // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Parameter_As_Texture_2D;                           // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Kscope_PI_multiplier;                              // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Kscope_Radial;                                     // 0x364(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Kscope_Scale;                                      // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UpdateOnMouseMove;                                 // 0x36C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseRenderTarget;                                   // 0x36D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_sw_decor_kaleidoscope_C* GetDefaultObj();

	double UtlitiyPi(class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, double CallFunc_MapRangeUnclamped_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_MapRangeUnclamped_Value_ImplicitCast, double CallFunc_MapRangeUnclamped_InRangeB_ImplicitCast);
	double Utiility_Radial(bool Temp_bool_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, int32 CallFunc_GetViewportSize_SizeX, int32 CallFunc_GetViewportSize_SizeY, float K2Node_Select_Default, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_MapRangeUnclamped_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_MapRangeUnclamped_Value_ImplicitCast);
	void Update_ScalarParameters_Scale(float Kscope_Scale);
	void Update_ScalarParameters_Radial(float Kscope_Radial);
	void Update_ScalarParameters_PI_Multi(float Kscope_PI_multiplier);
	void Update_AllScalarParameters(float Kscope_PI_multiplier, float Kscope_Radial, float Kscope_Scale);
	void RefreshAll_Parameters();
	void RefreshScalarParams();
	void OnLoaded_25E1BAD341C2B5D11AAAD4B99891D4F6(class UObject* Loaded);
	void SetupMaterial();
	void RefreshDMI_Texture();
	void Update_Texture(TSoftObjectPtr<class UTexture2D> Parameter_Image);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_sw_decor_kaleidoscope(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UTexture2D> K2Node_CustomEvent_Parameter_Image, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_IsValid_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UObject* K2Node_CustomEvent_Loaded, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_utiility_Radial_ReturnValue, double CallFunc_UtlitiyPi_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_Kscope_Radial_ImplicitCast, float K2Node_VariableSet_Kscope_PI_multiplier_ImplicitCast, float K2Node_VariableSet_Kscope_Radial_ImplicitCast_1, float K2Node_VariableSet_Kscope_Scale_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast_1);
};

}


