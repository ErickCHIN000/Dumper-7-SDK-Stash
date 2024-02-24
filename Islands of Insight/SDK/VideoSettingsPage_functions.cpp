#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass VideoSettingsPage.VideoSettingsPage_C
// (None)

class UClass* UVideoSettingsPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VideoSettingsPage_C");

	return Clss;
}


// VideoSettingsPage_C VideoSettingsPage.Default__VideoSettingsPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVideoSettingsPage_C* UVideoSettingsPage_C::GetDefaultObj()
{
	static class UVideoSettingsPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVideoSettingsPage_C*>(UVideoSettingsPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VideoSettingsPage.VideoSettingsPage_C.Set Resolution Scaling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVideoSettingsPage_C::Set_Resolution_Scaling(int32 Value, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "Set Resolution Scaling");

	Params::UVideoSettingsPage_C_Set_Resolution_Scaling_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VideoSettingsPage.VideoSettingsPage_C.SetQualityPresetValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      View_Distance                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Geometry_Detail                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Post_Processing                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Shadows                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Textures                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Effects                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Foliage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Shaders                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      SSGI                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      VolumetricFog                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UVideoSettingsPage_C::SetQualityPresetValues(const class FString& View_Distance, const class FString& Geometry_Detail, const class FString& Post_Processing, const class FString& Shadows, const class FString& Textures, const class FString& Effects, const class FString& Foliage, const class FString& Shaders, const class FString& SSGI, const class FString& VolumetricFog)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "SetQualityPresetValues");

	Params::UVideoSettingsPage_C_SetQualityPresetValues_Params Parms{};

	Parms.View_Distance = View_Distance;
	Parms.Geometry_Detail = Geometry_Detail;
	Parms.Post_Processing = Post_Processing;
	Parms.Shadows = Shadows;
	Parms.Textures = Textures;
	Parms.Effects = Effects;
	Parms.Foliage = Foliage;
	Parms.Shaders = Shaders;
	Parms.SSGI = SSGI;
	Parms.VolumetricFog = VolumetricFog;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VideoSettingsPage.VideoSettingsPage_C.Remove Please Wait Overlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVideoSettingsPage_C::Remove_Please_Wait_Overlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "Remove Please Wait Overlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VideoSettingsPage.VideoSettingsPage_C.Add Please Wait Overlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStyledPleaseWaitOverlay_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVideoSettingsPage_C::Add_Please_Wait_Overlay(bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class UStyledPleaseWaitOverlay_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "Add Please Wait Overlay");

	Params::UVideoSettingsPage_C_Add_Please_Wait_Overlay_Params Parms{};

	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VideoSettingsPage.VideoSettingsPage_C.LowVRAM Warning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_LowVRAMWarning_FullScreen_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVideoSettingsPage_C::LowVRAM_Warning(class UWBP_LowVRAMWarning_FullScreen_C* CallFunc_Create_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "LowVRAM Warning");

	Params::UVideoSettingsPage_C_LowVRAM_Warning_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance = K2Node_DynamicCast_AsSophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VideoSettingsPage.VideoSettingsPage_C.HandleQualityPresets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVideoSettingsPage_C::HandleQualityPresets(int32 NewValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "HandleQualityPresets");

	Params::UVideoSettingsPage_C_HandleQualityPresets_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VideoSettingsPage.VideoSettingsPage_C.Get Normalized Resolution Scale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Normalized_Resolution_Scale                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetGameResolution_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVideoSettingsPage_C::Get_Normalized_Resolution_Scale(float* Normalized_Resolution_Scale, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector2D& CallFunc_GetGameResolution_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "Get Normalized Resolution Scale");

	Params::UVideoSettingsPage_C_Get_Normalized_Resolution_Scale_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance = K2Node_DynamicCast_AsSophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetGameResolution_ReturnValue = CallFunc_GetGameResolution_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Normalized_Resolution_Scale != nullptr)
		*Normalized_Resolution_Scale = Parms.Normalized_Resolution_Scale;

}


// Function VideoSettingsPage.VideoSettingsPage_C.Get_AutoApplyCheckbox_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UVideoSettingsPage_C::Get_AutoApplyCheckbox_bIsEnabled_0(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "Get_AutoApplyCheckbox_bIsEnabled_0");

	Params::UVideoSettingsPage_C_Get_AutoApplyCheckbox_bIsEnabled_0_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VideoSettingsPage.VideoSettingsPage_C.Get_ApplyButton_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesAnyChildSettingHaveUnappliedChange_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UVideoSettingsPage_C::Get_ApplyButton_bIsEnabled_0(bool CallFunc_DoesAnyChildSettingHaveUnappliedChange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "Get_ApplyButton_bIsEnabled_0");

	Params::UVideoSettingsPage_C_Get_ApplyButton_bIsEnabled_0_Params Parms{};

	Parms.CallFunc_DoesAnyChildSettingHaveUnappliedChange_ReturnValue = CallFunc_DoesAnyChildSettingHaveUnappliedChange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VideoSettingsPage.VideoSettingsPage_C.Get_SaveButton_bIsEnabled_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesAnyChildSettingHaveUnsavedChange_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UVideoSettingsPage_C::Get_SaveButton_bIsEnabled_0(bool CallFunc_DoesAnyChildSettingHaveUnsavedChange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "Get_SaveButton_bIsEnabled_0");

	Params::UVideoSettingsPage_C_Get_SaveButton_bIsEnabled_0_Params Parms{};

	Parms.CallFunc_DoesAnyChildSettingHaveUnsavedChange_ReturnValue = CallFunc_DoesAnyChildSettingHaveUnsavedChange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VideoSettingsPage.VideoSettingsPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UVideoSettingsPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VideoSettingsPage.VideoSettingsPage_C.BndEvt__VideoSettingsPage_WBP_StyledButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UVideoSettingsPage_C::BndEvt__VideoSettingsPage_WBP_StyledButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "BndEvt__VideoSettingsPage_WBP_StyledButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VideoSettingsPage.VideoSettingsPage_C.BndEvt__VideoSettingsPage_SaveButton_1_K2Node_ComponentBoundEvent_5_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UVideoSettingsPage_C::BndEvt__VideoSettingsPage_SaveButton_1_K2Node_ComponentBoundEvent_5_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "BndEvt__VideoSettingsPage_SaveButton_1_K2Node_ComponentBoundEvent_5_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VideoSettingsPage.VideoSettingsPage_C.BndEvt__VideoSettingsPage_ApplyButton_1_K2Node_ComponentBoundEvent_6_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UVideoSettingsPage_C::BndEvt__VideoSettingsPage_ApplyButton_1_K2Node_ComponentBoundEvent_6_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "BndEvt__VideoSettingsPage_ApplyButton_1_K2Node_ComponentBoundEvent_6_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VideoSettingsPage.VideoSettingsPage_C.BndEvt__VideoSettingsPage_WindowModeRadioSelectSetting_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UVideoSettingsPage_C::BndEvt__VideoSettingsPage_WindowModeRadioSelectSetting_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature(const class FString& Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "BndEvt__VideoSettingsPage_WindowModeRadioSelectSetting_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature");

	Params::UVideoSettingsPage_C_BndEvt__VideoSettingsPage_WindowModeRadioSelectSetting_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VideoSettingsPage.VideoSettingsPage_C.BndEvt__VideoSettingsPage_DefaultRadioSelectSetting_1_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UVideoSettingsPage_C::BndEvt__VideoSettingsPage_DefaultRadioSelectSetting_1_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature(const class FString& Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "BndEvt__VideoSettingsPage_DefaultRadioSelectSetting_1_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature");

	Params::UVideoSettingsPage_C_BndEvt__VideoSettingsPage_DefaultRadioSelectSetting_1_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VideoSettingsPage.VideoSettingsPage_C.Quality Preset Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVideoSettingsPage_C::Quality_Preset_Changed(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "Quality Preset Changed");

	Params::UVideoSettingsPage_C_Quality_Preset_Changed_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VideoSettingsPage.VideoSettingsPage_C.Apply and Queue Save
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVideoSettingsPage_C::Apply_and_Queue_Save()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "Apply and Queue Save");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VideoSettingsPage.VideoSettingsPage_C.NoLongerUsingPreset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVideoSettingsPage_C::NoLongerUsingPreset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "NoLongerUsingPreset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VideoSettingsPage.VideoSettingsPage_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVideoSettingsPage_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "Tick");

	Params::UVideoSettingsPage_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VideoSettingsPage.VideoSettingsPage_C.OnClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UVideoSettingsPage_C::OnClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "OnClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VideoSettingsPage.VideoSettingsPage_C.ExecuteUbergraph_VideoSettingsPage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAutoSettingWidget*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAutoSettingWidget*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDefaultRadioSelectSetting_C*K2Node_DynamicCast_AsDefault_Radio_Select_Setting                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UAutoSettingWidget*>  CallFunc_GetChildSettings_ReturnValue                            (ReferenceParm, ContainsInstancedReference)
// class FString                      K2Node_ComponentBoundEvent_Val_1                                 (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_Val                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UAutoSettingWidget*>  CallFunc_GetChildSettings_ReturnValue_1                          (ReferenceParm, ContainsInstancedReference)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BenchmarkAndReturnSuggestedSettings_CPUScore            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BenchmarkAndReturnSuggestedSettings_GPUScore            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_resolutionScale     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_viewDistance        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_geometryDetail      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_postProcessing      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_shadows             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_textures            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_effects             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_foliage             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_shaders             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_SSGI                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BenchmarkAndReturnSuggestedSettings_volumetricFog       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_5                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_6                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_7                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_8                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_9                          (ZeroConstructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_10                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStyledSpinner_C*            K2Node_DynamicCast_AsStyled_Spinner                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVideoSettingsPage_C::ExecuteUbergraph_VideoSettingsPage(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, class UAutoSettingWidget* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UAutoSettingWidget* CallFunc_Array_Get_Item_1, class UDefaultRadioSelectSetting_C* K2Node_DynamicCast_AsDefault_Radio_Select_Setting, bool K2Node_DynamicCast_bSuccess, TArray<class UAutoSettingWidget*>& CallFunc_GetChildSettings_ReturnValue, const class FString& K2Node_ComponentBoundEvent_Val_1, bool CallFunc_NotEqual_StrStr_ReturnValue, const class FString& K2Node_ComponentBoundEvent_Val, bool CallFunc_NotEqual_StrStr_ReturnValue_1, int32 K2Node_CustomEvent_NewValue, bool CallFunc_NotEqual_IntInt_ReturnValue, TArray<class UAutoSettingWidget*>& CallFunc_GetChildSettings_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_BenchmarkAndReturnSuggestedSettings_CPUScore, float CallFunc_BenchmarkAndReturnSuggestedSettings_GPUScore, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_resolutionScale, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_viewDistance, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_geometryDetail, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_postProcessing, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_shadows, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_textures, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_effects, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_foliage, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_shaders, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_SSGI, int32 CallFunc_BenchmarkAndReturnSuggestedSettings_volumetricFog, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_5, const class FString& CallFunc_Conv_IntToString_ReturnValue_6, const class FString& CallFunc_Conv_IntToString_ReturnValue_7, const class FString& CallFunc_Conv_IntToString_ReturnValue_8, const class FString& CallFunc_Conv_IntToString_ReturnValue_9, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, int32 CallFunc_GetCurrentIndex_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_10, const class FString& CallFunc_BuildString_Int_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UStyledSpinner_C* K2Node_DynamicCast_AsStyled_Spinner, bool K2Node_DynamicCast_bSuccess_2, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, bool CallFunc_NotEqual_Vector2DVector2D_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "ExecuteUbergraph_VideoSettingsPage");

	Params::UVideoSettingsPage_C_ExecuteUbergraph_VideoSettingsPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsDefault_Radio_Select_Setting = K2Node_DynamicCast_AsDefault_Radio_Select_Setting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChildSettings_ReturnValue = CallFunc_GetChildSettings_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Val_1 = K2Node_ComponentBoundEvent_Val_1;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Val = K2Node_ComponentBoundEvent_Val;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue_1 = CallFunc_NotEqual_StrStr_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetChildSettings_ReturnValue_1 = CallFunc_GetChildSettings_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance = K2Node_DynamicCast_AsSophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_CPUScore = CallFunc_BenchmarkAndReturnSuggestedSettings_CPUScore;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_GPUScore = CallFunc_BenchmarkAndReturnSuggestedSettings_GPUScore;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_resolutionScale = CallFunc_BenchmarkAndReturnSuggestedSettings_resolutionScale;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_viewDistance = CallFunc_BenchmarkAndReturnSuggestedSettings_viewDistance;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_geometryDetail = CallFunc_BenchmarkAndReturnSuggestedSettings_geometryDetail;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_postProcessing = CallFunc_BenchmarkAndReturnSuggestedSettings_postProcessing;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_shadows = CallFunc_BenchmarkAndReturnSuggestedSettings_shadows;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_textures = CallFunc_BenchmarkAndReturnSuggestedSettings_textures;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_effects = CallFunc_BenchmarkAndReturnSuggestedSettings_effects;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_foliage = CallFunc_BenchmarkAndReturnSuggestedSettings_foliage;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_shaders = CallFunc_BenchmarkAndReturnSuggestedSettings_shaders;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_SSGI = CallFunc_BenchmarkAndReturnSuggestedSettings_SSGI;
	Parms.CallFunc_BenchmarkAndReturnSuggestedSettings_volumetricFog = CallFunc_BenchmarkAndReturnSuggestedSettings_volumetricFog;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue_4 = CallFunc_Conv_IntToString_ReturnValue_4;
	Parms.CallFunc_Conv_IntToString_ReturnValue_5 = CallFunc_Conv_IntToString_ReturnValue_5;
	Parms.CallFunc_Conv_IntToString_ReturnValue_6 = CallFunc_Conv_IntToString_ReturnValue_6;
	Parms.CallFunc_Conv_IntToString_ReturnValue_7 = CallFunc_Conv_IntToString_ReturnValue_7;
	Parms.CallFunc_Conv_IntToString_ReturnValue_8 = CallFunc_Conv_IntToString_ReturnValue_8;
	Parms.CallFunc_Conv_IntToString_ReturnValue_9 = CallFunc_Conv_IntToString_ReturnValue_9;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetDesktopResolution_ReturnValue = CallFunc_GetDesktopResolution_ReturnValue;
	Parms.CallFunc_GetCurrentIndex_ReturnValue = CallFunc_GetCurrentIndex_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_10 = CallFunc_Conv_IntToString_ReturnValue_10;
	Parms.CallFunc_BuildString_Int_ReturnValue = CallFunc_BuildString_Int_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_DynamicCast_AsStyled_Spinner = K2Node_DynamicCast_AsStyled_Spinner;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_NotEqual_Vector2DVector2D_ReturnValue = CallFunc_NotEqual_Vector2DVector2D_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VideoSettingsPage.VideoSettingsPage_C.CancelEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVideoSettingsPage_C::CancelEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VideoSettingsPage_C", "CancelEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


