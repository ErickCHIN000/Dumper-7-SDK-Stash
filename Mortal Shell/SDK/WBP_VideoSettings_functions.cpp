#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_VideoSettings.WBP_VideoSettings_C
// (None)

class UClass* UWBP_VideoSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_VideoSettings_C");

	return Clss;
}


// WBP_VideoSettings_C WBP_VideoSettings.Default__WBP_VideoSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_VideoSettings_C* UWBP_VideoSettings_C::GetDefaultObj()
{
	static class UWBP_VideoSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_VideoSettings_C*>(UWBP_VideoSettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_VideoSettings.WBP_VideoSettings_C.IsDXRestartRequired
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Required_                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHRayTracing*               CallFunc_GetRayTracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDX12Active_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDX12Desired_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::IsDXRestartRequired(bool* Required_, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue, bool CallFunc_IsDX12Active_ReturnValue, bool CallFunc_IsDX12Desired_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "IsDXRestartRequired");

	Params::UWBP_VideoSettings_C_IsDXRestartRequired_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetRayTracingSettings_ReturnValue = CallFunc_GetRayTracingSettings_ReturnValue;
	Parms.CallFunc_IsDX12Active_ReturnValue = CallFunc_IsDX12Active_ReturnValue;
	Parms.CallFunc_IsDX12Desired_ReturnValue = CallFunc_IsDX12Desired_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Required_ != nullptr)
		*Required_ = Parms.Required_;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetDLSS_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHRayTracing*               CallFunc_GetRayTracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHRayTracing*               CallFunc_GetRayTracingSettings_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDesiredDlssMode_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::SetDLSS_Right(int32 Temp_int_Variable, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetDesiredDlssMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetDLSS_Right");

	Params::UWBP_VideoSettings_C_SetDLSS_Right_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetRayTracingSettings_ReturnValue = CallFunc_GetRayTracingSettings_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_GetRayTracingSettings_ReturnValue_1 = CallFunc_GetRayTracingSettings_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDesiredDlssMode_ReturnValue = CallFunc_GetDesiredDlssMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetDLSS_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHRayTracing*               CallFunc_GetRayTracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHRayTracing*               CallFunc_GetRayTracingSettings_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDesiredDlssMode_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::SetDLSS_Left(int32 Temp_int_Variable, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetDesiredDlssMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetDLSS_Left");

	Params::UWBP_VideoSettings_C_SetDLSS_Left_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetRayTracingSettings_ReturnValue = CallFunc_GetRayTracingSettings_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_GetRayTracingSettings_ReturnValue_1 = CallFunc_GetRayTracingSettings_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetDesiredDlssMode_ReturnValue = CallFunc_GetDesiredDlssMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetDLSS_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHRayTracing*               CallFunc_GetRayTracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDesiredDlssMode_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::SetDLSS_Text(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue, int32 CallFunc_GetDesiredDlssMode_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetDLSS_Text");

	Params::UWBP_VideoSettings_C_SetDLSS_Text_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetRayTracingSettings_ReturnValue = CallFunc_GetRayTracingSettings_ReturnValue;
	Parms.CallFunc_GetDesiredDlssMode_ReturnValue = CallFunc_GetDesiredDlssMode_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetDLSS_Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_Available                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLSSAvailable_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::SetDLSS_Button(bool Local_Available, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_IsDLSSAvailable_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetDLSS_Button");

	Params::UWBP_VideoSettings_C_SetDLSS_Button_Params Parms{};

	Parms.Local_Available = Local_Available;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_IsDLSSAvailable_ReturnValue = CallFunc_IsDLSSAvailable_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.IsDLSSAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHRayTracing*               CallFunc_GetRayTracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_VideoSettings_C::IsDLSSAvailable(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "IsDLSSAvailable");

	Params::UWBP_VideoSettings_C_IsDLSSAvailable_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetRayTracingSettings_ReturnValue = CallFunc_GetRayTracingSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetRayTracing_Toggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHRayTracing*               CallFunc_GetRayTracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRayTracingDesired_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::SetRayTracing_Toggle(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue, bool CallFunc_IsRayTracingDesired_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetRayTracing_Toggle");

	Params::UWBP_VideoSettings_C_SetRayTracing_Toggle_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetRayTracingSettings_ReturnValue = CallFunc_GetRayTracingSettings_ReturnValue;
	Parms.CallFunc_IsRayTracingDesired_ReturnValue = CallFunc_IsRayTracingDesired_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetRayTracing_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHRayTracing*               CallFunc_GetRayTracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRayTracingDesired_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_VideoSettings_C::SetRayTracing_Text(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue, bool CallFunc_IsRayTracingDesired_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetRayTracing_Text");

	Params::UWBP_VideoSettings_C_SetRayTracing_Text_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetRayTracingSettings_ReturnValue = CallFunc_GetRayTracingSettings_ReturnValue;
	Parms.CallFunc_IsRayTracingDesired_ReturnValue = CallFunc_IsRayTracingDesired_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetRayTracing_Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_Available                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRayTracingAvailable_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::SetRayTracing_Button(bool Local_Available, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1, bool CallFunc_IsRayTracingAvailable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetRayTracing_Button");

	Params::UWBP_VideoSettings_C_SetRayTracing_Button_Params Parms{};

	Parms.Local_Available = Local_Available;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsRayTracingAvailable_ReturnValue = CallFunc_IsRayTracingAvailable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.IsRayTracingAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHRayTracing*               CallFunc_GetRayTracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDX12Active_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWBP_VideoSettings_C::IsRayTracingAvailable(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue, bool CallFunc_IsDX12Active_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "IsRayTracingAvailable");

	Params::UWBP_VideoSettings_C_IsRayTracingAvailable_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetRayTracingSettings_ReturnValue = CallFunc_GetRayTracingSettings_ReturnValue;
	Parms.CallFunc_IsDX12Active_ReturnValue = CallFunc_IsDX12Active_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetDirectX_Toggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDXRestartRequired_Required_                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHRayTracing*               CallFunc_GetRayTracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDX12Desired_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::SetDirectX_Toggle(bool CallFunc_IsDXRestartRequired_Required_, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue, bool CallFunc_IsDX12Desired_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetDirectX_Toggle");

	Params::UWBP_VideoSettings_C_SetDirectX_Toggle_Params Parms{};

	Parms.CallFunc_IsDXRestartRequired_Required_ = CallFunc_IsDXRestartRequired_Required_;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRayTracingSettings_ReturnValue = CallFunc_GetRayTracingSettings_ReturnValue;
	Parms.CallFunc_IsDX12Desired_ReturnValue = CallFunc_IsDX12Desired_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetDirectX_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_DX12Desired                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_DX12Active                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHRayTracing*               CallFunc_GetRayTracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDX12Active_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDX12Desired_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::SetDirectX_Text(bool Local_DX12Desired, bool Local_DX12Active, class FText Temp_text_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable_1, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool Temp_bool_Variable_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue, bool CallFunc_IsDX12Active_ReturnValue, bool CallFunc_IsDX12Desired_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetDirectX_Text");

	Params::UWBP_VideoSettings_C_SetDirectX_Text_Params Parms{};

	Parms.Local_DX12Desired = Local_DX12Desired;
	Parms.Local_DX12Active = Local_DX12Active;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetRayTracingSettings_ReturnValue = CallFunc_GetRayTracingSettings_ReturnValue;
	Parms.CallFunc_IsDX12Active_ReturnValue = CallFunc_IsDX12Active_ReturnValue;
	Parms.CallFunc_IsDX12Desired_ReturnValue = CallFunc_IsDX12Desired_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetDirectX_Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_Available                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDirectXAvailable_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::SetDirectX_Button(bool Local_Available, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_IsDirectXAvailable_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetDirectX_Button");

	Params::UWBP_VideoSettings_C_SetDirectX_Button_Params Parms{};

	Parms.Local_Available = Local_Available;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_IsDirectXAvailable_ReturnValue = CallFunc_IsDirectXAvailable_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.IsDirectXAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHRayTracing*               CallFunc_GetRayTracingSettings_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanSwitchRHI_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWBP_VideoSettings_C::IsDirectXAvailable(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHRayTracing* CallFunc_GetRayTracingSettings_ReturnValue, bool CallFunc_CanSwitchRHI_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "IsDirectXAvailable");

	Params::UWBP_VideoSettings_C_IsDirectXAvailable_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetRayTracingSettings_ReturnValue = CallFunc_GetRayTracingSettings_ReturnValue;
	Parms.CallFunc_CanSwitchRHI_ReturnValue = CallFunc_CanSwitchRHI_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.AdvancedSettingsAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetIsConsole_IsConsole                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::AdvancedSettingsAvailable(bool CallFunc_GetIsConsole_IsConsole, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "AdvancedSettingsAvailable");

	Params::UWBP_VideoSettings_C_AdvancedSettingsAvailable_Params Parms{};

	Parms.CallFunc_GetIsConsole_IsConsole = CallFunc_GetIsConsole_IsConsole;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetXboxSerieSText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_XboxS_Type         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_XboxS_Type         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_VideoSettings_C::SetXboxSerieSText(enum class Enum_XboxS_Type Type, enum class Enum_XboxS_Type Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetXboxSerieSText");

	Params::UWBP_VideoSettings_C_SetXboxSerieSText_Params Parms{};

	Parms.Type = Type;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetXboxSerieSMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_XboxS_Type         CallFunc_GetXboxSType_Type                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::SetXboxSerieSMode(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, enum class Enum_XboxS_Type CallFunc_GetXboxSType_Type, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetXboxSerieSMode");

	Params::UWBP_VideoSettings_C_SetXboxSerieSMode_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetXboxSType_Type = CallFunc_GetXboxSType_Type;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.GetXboxSerieSMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_XboxS_Type         CallFunc_GetXboxSType_Type                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::GetXboxSerieSMode(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_XboxS_Type CallFunc_GetXboxSType_Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "GetXboxSerieSMode");

	Params::UWBP_VideoSettings_C_GetXboxSerieSMode_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetXboxSType_Type = CallFunc_GetXboxSType_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.HandleXboxSerieSOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDebugXboxSerieSOption_Debug                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsXboxOneSeriesS_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::HandleXboxSerieSOption(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDebugXboxSerieSOption_Debug, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, bool CallFunc_IsXboxOneSeriesS_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "HandleXboxSerieSOption");

	Params::UWBP_VideoSettings_C_HandleXboxSerieSOption_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDebugXboxSerieSOption_Debug = CallFunc_GetDebugXboxSerieSOption_Debug;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_IsXboxOneSeriesS_ReturnValue = CallFunc_IsXboxOneSeriesS_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetCutsceneAspectRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::ResetCutsceneAspectRatio(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResetCutsceneAspectRatio");

	Params::UWBP_VideoSettings_C_ResetCutsceneAspectRatio_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetRadialBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::ResetRadialBlur(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResetRadialBlur");

	Params::UWBP_VideoSettings_C_ResetRadialBlur_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.RadialBlur_Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRadialBlur_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::RadialBlur_Set(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetRadialBlur_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "RadialBlur_Set");

	Params::UWBP_VideoSettings_C_RadialBlur_Set_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetRadialBlur_ReturnValue = CallFunc_GetRadialBlur_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.CutsceneAspectRatio_Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCutsceneAspectRatio_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::CutsceneAspectRatio_Set(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetCutsceneAspectRatio_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "CutsceneAspectRatio_Set");

	Params::UWBP_VideoSettings_C_CutsceneAspectRatio_Set_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCutsceneAspectRatio_ReturnValue = CallFunc_GetCutsceneAspectRatio_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.RadialBlur_Get
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRadialBlur_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_VideoSettings_C::RadialBlur_Get(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetRadialBlur_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "RadialBlur_Get");

	Params::UWBP_VideoSettings_C_RadialBlur_Get_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRadialBlur_ReturnValue = CallFunc_GetRadialBlur_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.CutsceneAspectRatio_Get
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCutsceneAspectRatio_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_VideoSettings_C::CutsceneAspectRatio_Get(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetCutsceneAspectRatio_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "CutsceneAspectRatio_Get");

	Params::UWBP_VideoSettings_C_CutsceneAspectRatio_Get_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCutsceneAspectRatio_ReturnValue = CallFunc_GetCutsceneAspectRatio_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.CutsceneAspectRatioAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Local_AspectRatio                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsConsole_IsConsole                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::CutsceneAspectRatioAvailable(float Local_AspectRatio, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, bool CallFunc_GetIsConsole_IsConsole, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "CutsceneAspectRatioAvailable");

	Params::UWBP_VideoSettings_C_CutsceneAspectRatioAvailable_Params Parms{};

	Parms.Local_AspectRatio = Local_AspectRatio;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetDesktopResolution_ReturnValue = CallFunc_GetDesktopResolution_ReturnValue;
	Parms.CallFunc_GetIsConsole_IsConsole = CallFunc_GetIsConsole_IsConsole;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_2 = CallFunc_Conv_FloatToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.GetIsConsole
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsConsole                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_ForceIsConsole                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::GetIsConsole(bool* IsConsole, bool Local_ForceIsConsole)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "GetIsConsole");

	Params::UWBP_VideoSettings_C_GetIsConsole_Params Parms{};

	Parms.Local_ForceIsConsole = Local_ForceIsConsole;

	UObject::ProcessEvent(Func, &Parms);

	if (IsConsole != nullptr)
		*IsConsole = Parms.IsConsole;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::ResetFOV(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResetFOV");

	Params::UWBP_VideoSettings_C_ResetFOV_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetAspectRatio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::ResetAspectRatio(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResetAspectRatio");

	Params::UWBP_VideoSettings_C_ResetAspectRatio_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.UWSettingsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Local_AspectRatio                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsConsole_IsConsole                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::UWSettingsEnabled(float Local_AspectRatio, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_GetIsConsole_IsConsole, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "UWSettingsEnabled");

	Params::UWBP_VideoSettings_C_UWSettingsEnabled_Params Parms{};

	Parms.Local_AspectRatio = Local_AspectRatio;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetDesktopResolution_ReturnValue = CallFunc_GetDesktopResolution_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_2 = CallFunc_Conv_FloatToString_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_GetIsConsole_IsConsole = CallFunc_GetIsConsole_IsConsole;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.GetFOVRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWBP_VideoSettings_C::GetFOVRange(float Value, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "GetFOVRange");

	Params::UWBP_VideoSettings_C_GetFOVRange_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.FOV_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFOVRange_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::FOV_Right(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetFOVRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "FOV_Right");

	Params::UWBP_VideoSettings_C_FOV_Right_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFOVRange_ReturnValue = CallFunc_GetFOVRange_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.FOV_Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FOV                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::FOV_Set(float FOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "FOV_Set");

	Params::UWBP_VideoSettings_C_FOV_Set_Params Parms{};

	Parms.FOV = FOV;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.FOV_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFOVRange_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::FOV_Left(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetFOVRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "FOV_Left");

	Params::UWBP_VideoSettings_C_FOV_Left_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFOVRange_ReturnValue = CallFunc_GetFOVRange_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.FOV_SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UWBP_VideoSettings_C::FOV_SetText(float Value, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "FOV_SetText");

	Params::UWBP_VideoSettings_C_FOV_SetText_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.FOV_Get
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::FOV_Get(float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "FOV_Get");

	Params::UWBP_VideoSettings_C_FOV_Get_Params Parms{};

	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.AspectRatio_Get
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAspectRatioConstraint_index                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::AspectRatio_Get(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetAspectRatioConstraint_index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "AspectRatio_Get");

	Params::UWBP_VideoSettings_C_AspectRatio_Get_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAspectRatioConstraint_index = CallFunc_GetAspectRatioConstraint_index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.AspectRatio_SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_VideoSettings_C::AspectRatio_SetText(int32 Index, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "AspectRatio_SetText");

	Params::UWBP_VideoSettings_C_AspectRatio_SetText_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.AspectRatio_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAspectRatioConstraint_index                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::AspectRatio_Right(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetAspectRatioConstraint_index, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchInteger_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "AspectRatio_Right");

	Params::UWBP_VideoSettings_C_AspectRatio_Right_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAspectRatioConstraint_index = CallFunc_GetAspectRatioConstraint_index;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.AspectRatio_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAspectRatioConstraint_index                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::AspectRatio_Left(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetAspectRatioConstraint_index, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchInteger_CmpSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "AspectRatio_Left");

	Params::UWBP_VideoSettings_C_AspectRatio_Left_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAspectRatioConstraint_index = CallFunc_GetAspectRatioConstraint_index;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.IsFramerateDirty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWBP_VideoSettings_C::IsFramerateDirty(bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "IsFramerateDirty");

	Params::UWBP_VideoSettings_C_IsFramerateDirty_Params Parms{};

	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.DiscardAnyChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::DiscardAnyChange(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "DiscardAnyChange");

	Params::UWBP_VideoSettings_C_DiscardAnyChange_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ApplyNewSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::ApplyNewSettings(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsFullscreenModeDirty_ReturnValue, bool CallFunc_IsFullscreenModeDirty_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ApplyNewSettings");

	Params::UWBP_VideoSettings_C_ApplyNewSettings_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue = CallFunc_IsFullscreenModeDirty_ReturnValue;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue_1 = CallFunc_IsFullscreenModeDirty_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.FilmGrain_IsAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::FilmGrain_IsAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "FilmGrain_IsAvailable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.PixelMode_IsAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::PixelMode_IsAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "PixelMode_IsAvailable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetScalability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::ResetScalability(class UGameUserSettings* Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResetScalability");

	Params::UWBP_VideoSettings_C_ResetScalability_Params Parms{};

	Parms.Settings = Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetResolutionScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_ResolutionY                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::ResetResolutionScale(int32 Local_ResolutionY, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResetResolutionScale");

	Params::UWBP_VideoSettings_C_ResetResolutionScale_Params Parms{};

	Parms.Local_ResolutionY = Local_ResolutionY;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDesktopResolution_ReturnValue = CallFunc_GetDesktopResolution_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetBrigthness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::ResetBrigthness(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResetBrigthness");

	Params::UWBP_VideoSettings_C_ResetBrigthness_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetPixelMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::ResetPixelMode(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResetPixelMode");

	Params::UWBP_VideoSettings_C_ResetPixelMode_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetFilmGrain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::ResetFilmGrain(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResetFilmGrain");

	Params::UWBP_VideoSettings_C_ResetFilmGrain_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetMotionBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::ResetMotionBlur(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResetMotionBlur");

	Params::UWBP_VideoSettings_C_ResetMotionBlur_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetVSync
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::ResetVSync(class UGameUserSettings* Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResetVSync");

	Params::UWBP_VideoSettings_C_ResetVSync_Params Parms{};

	Parms.Settings = Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetFramerate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::ResetFramerate(class UGameUserSettings* Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResetFramerate");

	Params::UWBP_VideoSettings_C_ResetFramerate_Params Parms{};

	Parms.Settings = Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetDisplayMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::ResetDisplayMode(class UGameUserSettings* Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResetDisplayMode");

	Params::UWBP_VideoSettings_C_ResetDisplayMode_Params Parms{};

	Parms.Settings = Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetResolution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::ResetResolution(class UGameUserSettings* Settings, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResetResolution");

	Params::UWBP_VideoSettings_C_ResetResolution_Params Parms{};

	Parms.Settings = Settings;
	Parms.CallFunc_GetDesktopResolution_ReturnValue = CallFunc_GetDesktopResolution_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.StopListen_Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::StopListen_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "StopListen_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.StopListen_Confirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::StopListen_Confirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "StopListen_Confirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Resolution Is Available
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWindowMode             WindowMode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsConsole_IsConsole                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::Resolution_Is_Available(enum class EWindowMode WindowMode, bool CallFunc_GetIsConsole_IsConsole, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Resolution Is Available");

	Params::UWBP_VideoSettings_C_Resolution_Is_Available_Params Parms{};

	Parms.WindowMode = WindowMode;
	Parms.CallFunc_GetIsConsole_IsConsole = CallFunc_GetIsConsole_IsConsole;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.HDR_Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HDR_Set_Enabled                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::HDR_Update(bool CallFunc_HDR_Set_Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "HDR_Update");

	Params::UWBP_VideoSettings_C_HDR_Update_Params Parms{};

	Parms.CallFunc_HDR_Set_Enabled = CallFunc_HDR_Set_Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.IsHDRSupported
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetIsConsole_IsConsole                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHDREnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::IsHDRSupported(bool CallFunc_GetIsConsole_IsConsole, bool CallFunc_Not_PreBool_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsHDREnabled_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "IsHDRSupported");

	Params::UWBP_VideoSettings_C_IsHDRSupported_Params Parms{};

	Parms.CallFunc_GetIsConsole_IsConsole = CallFunc_GetIsConsole_IsConsole;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_IsHDREnabled_ReturnValue = CallFunc_IsHDREnabled_ReturnValue;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.HDR_SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_VideoSettings_C::HDR_SetText(bool Enabled, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "HDR_SetText");

	Params::UWBP_VideoSettings_C_HDR_SetText_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.HDR_Set
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHDREnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::HDR_Set(bool* Enabled, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsHDREnabled_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "HDR_Set");

	Params::UWBP_VideoSettings_C_HDR_Set_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_IsHDREnabled_ReturnValue = CallFunc_IsHDREnabled_ReturnValue;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.GetSettingsValues
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UTextBlock*>          ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsConsole_IsConsole                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UTextBlock*>          K2Node_Select_Default                                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

TArray<class UTextBlock*> UWBP_VideoSettings_C::GetSettingsValues(bool Temp_bool_Variable, bool CallFunc_GetIsConsole_IsConsole, TArray<class UTextBlock*>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "GetSettingsValues");

	Params::UWBP_VideoSettings_C_GetSettingsValues_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetIsConsole_IsConsole = CallFunc_GetIsConsole_IsConsole;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.GetSettingsTitles
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UTextBlock*>          ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsConsole_IsConsole                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UTextBlock*>          K2Node_Select_Default                                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

TArray<class UTextBlock*> UWBP_VideoSettings_C::GetSettingsTitles(bool Temp_bool_Variable, bool CallFunc_GetIsConsole_IsConsole, TArray<class UTextBlock*>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "GetSettingsTitles");

	Params::UWBP_VideoSettings_C_GetSettingsTitles_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetIsConsole_IsConsole = CallFunc_GetIsConsole_IsConsole;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.GetSettingsButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UButton*>             ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsConsole_IsConsole                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UButton*>             K2Node_Select_Default                                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

TArray<class UButton*> UWBP_VideoSettings_C::GetSettingsButtons(bool Temp_bool_Variable, bool CallFunc_GetIsConsole_IsConsole, TArray<class UButton*>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "GetSettingsButtons");

	Params::UWBP_VideoSettings_C_GetSettingsButtons_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetIsConsole_IsConsole = CallFunc_GetIsConsole_IsConsole;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.HideSettingsOnConsoles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Debug                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsConsole_IsConsole                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::HideSettingsOnConsoles(bool Debug, bool CallFunc_GetIsConsole_IsConsole)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "HideSettingsOnConsoles");

	Params::UWBP_VideoSettings_C_HideSettingsOnConsoles_Params Parms{};

	Parms.Debug = Debug;
	Parms.CallFunc_GetIsConsole_IsConsole = CallFunc_GetIsConsole_IsConsole;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetSpinBoxes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USpinBox*>            CallFunc_GetSpinBoxes_Array                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpinBox*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::ResetSpinBoxes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array, int32 CallFunc_Array_Length_ReturnValue, class USpinBox* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResetSpinBoxes");

	Params::UWBP_VideoSettings_C_ResetSpinBoxes_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSpinBoxes_Array = CallFunc_GetSpinBoxes_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.GetSpinBoxes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class USpinBox*>            Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsConsole_IsConsole                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USpinBox*>            K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class USpinBox*>            K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class USpinBox*>            K2Node_Select_Default                                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_VideoSettings_C::GetSpinBoxes(TArray<class USpinBox*>* Array, bool Temp_bool_Variable, bool CallFunc_GetIsConsole_IsConsole, TArray<class USpinBox*>& K2Node_MakeArray_Array, TArray<class USpinBox*>& K2Node_MakeArray_Array_1, TArray<class USpinBox*>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "GetSpinBoxes");

	Params::UWBP_VideoSettings_C_GetSpinBoxes_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetIsConsole_IsConsole = CallFunc_GetIsConsole_IsConsole;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetMotionBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::SetMotionBlur(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetMotionBlur");

	Params::UWBP_VideoSettings_C_SetMotionBlur_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Text_SetMotionBlur
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_VideoSettings_C::Text_SetMotionBlur(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Text_SetMotionBlur");

	Params::UWBP_VideoSettings_C_Text_SetMotionBlur_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.DisableFilmGrain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::DisableFilmGrain(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "DisableFilmGrain");

	Params::UWBP_VideoSettings_C_DisableFilmGrain_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.DisablePixelMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::DisablePixelMode(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "DisablePixelMode");

	Params::UWBP_VideoSettings_C_DisablePixelMode_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetIndieMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::SetIndieMode(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetIndieMode");

	Params::UWBP_VideoSettings_C_SetIndieMode_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Text_SetPixelMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_VideoSettings_C::Text_SetPixelMode(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Text_SetPixelMode");

	Params::UWBP_VideoSettings_C_Text_SetPixelMode_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetFilmGrain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::SetFilmGrain(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetFilmGrain");

	Params::UWBP_VideoSettings_C_SetFilmGrain_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Text_SetFilmGrain
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_VideoSettings_C::Text_SetFilmGrain(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Text_SetFilmGrain");

	Params::UWBP_VideoSettings_C_Text_SetFilmGrain_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.GetMainMenuPC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AMainMenuPC_C*               AsMain_Menu_PC                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainMenuPC_C*               K2Node_DynamicCast_AsMain_Menu_PC                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::GetMainMenuPC(class AMainMenuPC_C** AsMain_Menu_PC, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AMainMenuPC_C* K2Node_DynamicCast_AsMain_Menu_PC, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "GetMainMenuPC");

	Params::UWBP_VideoSettings_C_GetMainMenuPC_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Menu_PC = K2Node_DynamicCast_AsMain_Menu_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsMain_Menu_PC != nullptr)
		*AsMain_Menu_PC = Parms.AsMain_Menu_PC;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.VSync_Get
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncEnabled_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_VideoSettings_C::VSync_Get(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsVSyncEnabled_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "VSync_Get");

	Params::UWBP_VideoSettings_C_VSync_Get_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_IsVSyncEnabled_ReturnValue = CallFunc_IsVSyncEnabled_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.VSync_Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncEnabled_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::VSync_Set(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsVSyncEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "VSync_Set");

	Params::UWBP_VideoSettings_C_VSync_Set_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_IsVSyncEnabled_ReturnValue = CallFunc_IsVSyncEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Resolution_SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Resolution_SetIndex(int32 CallFunc_Array_LastIndex_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Resolution_SetIndex");

	Params::UWBP_VideoSettings_C_Resolution_SetIndex_Params Parms{};

	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Brightness_SpinBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::Brightness_SpinBox(float InputPin, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Brightness_SpinBox");

	Params::UWBP_VideoSettings_C_Brightness_SpinBox_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue = CallFunc_HasAnyUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Brightness_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBrightnessRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Brightness_Right(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetBrightnessRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Brightness_Right");

	Params::UWBP_VideoSettings_C_Brightness_Right_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetBrightnessRange_ReturnValue = CallFunc_GetBrightnessRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Brightness_Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Brightness                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Brightness_Set(float Brightness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Brightness_Set");

	Params::UWBP_VideoSettings_C_Brightness_Set_Params Parms{};

	Parms.Brightness = Brightness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Brightness_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetBrightnessRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Brightness_Left(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_GetBrightnessRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Brightness_Left");

	Params::UWBP_VideoSettings_C_Brightness_Left_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetBrightnessRange_ReturnValue = CallFunc_GetBrightnessRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Brightness_SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UWBP_VideoSettings_C::Brightness_SetText(float Value, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Brightness_SetText");

	Params::UWBP_VideoSettings_C_Brightness_SetText_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Brightness_Get
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::Brightness_Get()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Brightness_Get");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.AntiAliasing_Get
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::AntiAliasing_Get(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "AntiAliasing_Get");

	Params::UWBP_VideoSettings_C_AntiAliasing_Get_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.PP_Get
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPostProcessingQuality_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::PP_Get(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetPostProcessingQuality_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "PP_Get");

	Params::UWBP_VideoSettings_C_PP_Get_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetPostProcessingQuality_ReturnValue = CallFunc_GetPostProcessingQuality_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Foliage_Get
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoliageQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::Foliage_Get(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetFoliageQuality_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Foliage_Get");

	Params::UWBP_VideoSettings_C_Foliage_Get_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFoliageQuality_ReturnValue = CallFunc_GetFoliageQuality_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Effects_Get
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::Effects_Get(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Effects_Get");

	Params::UWBP_VideoSettings_C_Effects_Get_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ViewDistance_Get
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::ViewDistance_Get(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetViewDistanceQuality_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ViewDistance_Get");

	Params::UWBP_VideoSettings_C_ViewDistance_Get_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Textures_Get
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::Textures_Get(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Textures_Get");

	Params::UWBP_VideoSettings_C_Textures_Get_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Shadows_Get
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::Shadows_Get(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Shadows_Get");

	Params::UWBP_VideoSettings_C_Shadows_Get_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResScale_Get
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::ResScale_Get()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResScale_Get");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Framerate_Get
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                CallFunc_Map_Values_Values                                       (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)

void UWBP_VideoSettings_C::Framerate_Get(TArray<class FText>& CallFunc_Map_Values_Values, class FText CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Framerate_Get");

	Params::UWBP_VideoSettings_C_Framerate_Get_Params Parms{};

	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.DisplayMode_Get
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// enum class EWindowMode             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_VideoSettings_C::DisplayMode_Get(class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, enum class EWindowMode Temp_byte_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "DisplayMode_Get");

	Params::UWBP_VideoSettings_C_DisplayMode_Get_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Resolution_Get
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_VideoSettings_C::Resolution_Get(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Resolution_Get");

	Params::UWBP_VideoSettings_C_Resolution_Get_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Presets_Get
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOverallScalabilityLevel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::Presets_Get(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Presets_Get");

	Params::UWBP_VideoSettings_C_Presets_Get_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetOverallScalabilityLevel_ReturnValue = CallFunc_GetOverallScalabilityLevel_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetValueArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTextBlock*>          K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_VideoSettings_C::SetValueArray(TArray<class UTextBlock*>& K2Node_MakeArray_Array, TArray<class UTextBlock*>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetValueArray");

	Params::UWBP_VideoSettings_C_SetValueArray_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetTitleArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTextBlock*>          K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_VideoSettings_C::SetTitleArray(TArray<class UTextBlock*>& K2Node_MakeArray_Array, TArray<class UTextBlock*>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetTitleArray");

	Params::UWBP_VideoSettings_C_SetTitleArray_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.SetButtonArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UButton*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UButton*>             K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_VideoSettings_C::SetButtonArray(TArray<class UButton*>& K2Node_MakeArray_Array, TArray<class UButton*>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "SetButtonArray");

	Params::UWBP_VideoSettings_C_SetButtonArray_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResScale_SpinBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::ResScale_SpinBox(float InputPin, bool CallFunc_HasAnyUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResScale_SpinBox");

	Params::UWBP_VideoSettings_C_ResScale_SpinBox_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.CallFunc_HasAnyUserFocus_ReturnValue = CallFunc_HasAnyUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Nav_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetIsConsole_IsConsole                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Nav_Right(bool CallFunc_GetIsConsole_IsConsole, bool K2Node_SwitchInteger_CmpSuccess, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Nav_Right");

	Params::UWBP_VideoSettings_C_Nav_Right_Params Parms{};

	Parms.CallFunc_GetIsConsole_IsConsole = CallFunc_GetIsConsole_IsConsole;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Nav_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetIsConsole_IsConsole                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::Nav_Left(bool CallFunc_GetIsConsole_IsConsole, bool K2Node_SwitchInteger_CmpSuccess, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Nav_Left");

	Params::UWBP_VideoSettings_C_Nav_Left_Params Parms{};

	Parms.CallFunc_GetIsConsole_IsConsole = CallFunc_GetIsConsole_IsConsole;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResScale_Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ResolutionScale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::ResScale_Set(float ResolutionScale, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResScale_Set");

	Params::UWBP_VideoSettings_C_ResScale_Set_Params Parms{};

	Parms.ResolutionScale = ResolutionScale;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResScale_SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_VideoSettings_C::ResScale_SetText(float Percent, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResScale_SetText");

	Params::UWBP_VideoSettings_C_ResScale_SetText_Params Parms{};

	Parms.Percent = Percent;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.UI_Sound_Navigate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::UI_Sound_Navigate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "UI_Sound_Navigate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.AntiAliasing_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::AntiAliasing_Right(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "AntiAliasing_Right");

	Params::UWBP_VideoSettings_C_AntiAliasing_Right_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.AntiAliasing_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::AntiAliasing_Left(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "AntiAliasing_Left");

	Params::UWBP_VideoSettings_C_AntiAliasing_Left_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.PP_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPostProcessingQuality_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::PP_Right(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetPostProcessingQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "PP_Right");

	Params::UWBP_VideoSettings_C_PP_Right_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetPostProcessingQuality_ReturnValue = CallFunc_GetPostProcessingQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.PP_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPostProcessingQuality_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::PP_Left(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetPostProcessingQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "PP_Left");

	Params::UWBP_VideoSettings_C_PP_Left_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetPostProcessingQuality_ReturnValue = CallFunc_GetPostProcessingQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Foliage_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoliageQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Foliage_Right(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetFoliageQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Foliage_Right");

	Params::UWBP_VideoSettings_C_Foliage_Right_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFoliageQuality_ReturnValue = CallFunc_GetFoliageQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Foliage_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoliageQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Foliage_Left(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetFoliageQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Foliage_Left");

	Params::UWBP_VideoSettings_C_Foliage_Left_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFoliageQuality_ReturnValue = CallFunc_GetFoliageQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Effects_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Effects_Right(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Effects_Right");

	Params::UWBP_VideoSettings_C_Effects_Right_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Effects_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Effects_Left(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Effects_Left");

	Params::UWBP_VideoSettings_C_Effects_Left_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ViewDistance_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::ViewDistance_Right(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetViewDistanceQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ViewDistance_Right");

	Params::UWBP_VideoSettings_C_ViewDistance_Right_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ViewDistance_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::ViewDistance_Left(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetViewDistanceQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ViewDistance_Left");

	Params::UWBP_VideoSettings_C_ViewDistance_Left_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Textures_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Textures_Right(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Textures_Right");

	Params::UWBP_VideoSettings_C_Textures_Right_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Textures_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Textures_Left(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Textures_Left");

	Params::UWBP_VideoSettings_C_Textures_Left_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Shadows_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Shadows_Right(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Shadows_Right");

	Params::UWBP_VideoSettings_C_Shadows_Right_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Shadows_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Shadows_Left(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Shadows_Left");

	Params::UWBP_VideoSettings_C_Shadows_Left_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResScale_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::ResScale_Right(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResScale_Right");

	Params::UWBP_VideoSettings_C_ResScale_Right_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResScale_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraModifierInterface_C>K2Node_DynamicCast_AsCamera_Modifier_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::ResScale_Left(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICameraModifierInterface_C> K2Node_DynamicCast_AsCamera_Modifier_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResScale_Left");

	Params::UWBP_VideoSettings_C_ResScale_Left_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Interface = K2Node_DynamicCast_AsCamera_Modifier_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Presets_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOverallScalabilityLevel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Presets_Right(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Presets_Right");

	Params::UWBP_VideoSettings_C_Presets_Right_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetOverallScalabilityLevel_ReturnValue = CallFunc_GetOverallScalabilityLevel_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Presets_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOverallScalabilityLevel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Presets_Left(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Presets_Left");

	Params::UWBP_VideoSettings_C_Presets_Left_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetOverallScalabilityLevel_ReturnValue = CallFunc_GetOverallScalabilityLevel_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Framerate_Right
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_Map_Keys_Keys                                           (ReferenceParm, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Framerate_Right(int32 Local_Index, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, TArray<float>& CallFunc_Map_Keys_Keys, float CallFunc_Array_Get_Item, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Framerate_Right");

	Params::UWBP_VideoSettings_C_Framerate_Right_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Framerate_Left
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_Map_Keys_Keys                                           (ReferenceParm, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Framerate_Left(int32 Local_Index, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, TArray<float>& CallFunc_Map_Keys_Keys, float CallFunc_Array_Get_Item, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Framerate_Left");

	Params::UWBP_VideoSettings_C_Framerate_Left_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.DisplayMode_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::DisplayMode_Right(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "DisplayMode_Right");

	Params::UWBP_VideoSettings_C_DisplayMode_Right_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.DisplayMode_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::DisplayMode_Left(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "DisplayMode_Left");

	Params::UWBP_VideoSettings_C_DisplayMode_Left_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Resolution_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Resolution_Right(int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Resolution_Right");

	Params::UWBP_VideoSettings_C_Resolution_Right_Params Parms{};

	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Resolution_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::Resolution_Left(int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Resolution_Left");

	Params::UWBP_VideoSettings_C_Resolution_Left_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ResetButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UTextBlock*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::ResetButtons(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UTextBlock* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, class UTextBlock* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, class UButton* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ResetButtons");

	Params::UWBP_VideoSettings_C_ResetButtons_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.GetTextColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            (None)

struct FSlateColor UWBP_VideoSettings_C::GetTextColor(int32 Index, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FSlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "GetTextColor");

	Params::UWBP_VideoSettings_C_GetTextColor_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.GetIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_GetSettingsButtons_ReturnValue                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWBP_VideoSettings_C::GetIndex(int32 Delta, int32 SelectedIndex, TArray<class UButton*>& CallFunc_GetSettingsButtons_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "GetIndex");

	Params::UWBP_VideoSettings_C_GetIndex_Params Parms{};

	Parms.Delta = Delta;
	Parms.SelectedIndex = SelectedIndex;
	Parms.CallFunc_GetSettingsButtons_ReturnValue = CallFunc_GetSettingsButtons_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Nav_Set
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Hovering                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     Local_SelectedButton                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_UseWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_SelectedIndex                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Hovering                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UButton*                     Local_Button                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_GetSettingsButtons_ReturnValue                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIndex_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UTextBlock*>          CallFunc_GetSettingsValues_ReturnValue                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UTextBlock*>          CallFunc_GetSettingsTitles_ReturnValue                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UButton*>             CallFunc_GetSettingsButtons_ReturnValue_1                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_GetSettingsButtons_ReturnValue_2                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UButton*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USpinBox*>            CallFunc_GetSpinBoxes_Array                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class USpinBox*                    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USpinBox*>            CallFunc_GetSpinBoxes_Array_1                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USpinBox*                    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UButton*>             CallFunc_GetSettingsButtons_ReturnValue_3                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UButton*>             CallFunc_GetSettingsButtons_ReturnValue_4                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 CallFunc_GetTextColor_ReturnValue                                (None)
// struct FSlateColor                 CallFunc_GetTextColor_ReturnValue_1                              (None)
// class UTextBlock*                  CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UButton*                     CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Nav_Set(bool UseWidget, class UButton* Button, bool Hovering, bool CustomIndex, int32 Index, int32 Delta, class UButton* Local_SelectedButton, bool Local_UseWidget, int32 Local_Delta, int32 Local_SelectedIndex, bool Local_CustomIndex, bool Local_Hovering, int32 Local_Index, class UButton* Local_Button, TArray<class UButton*>& CallFunc_GetSettingsButtons_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_GetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UTextBlock*>& CallFunc_GetSettingsValues_ReturnValue, TArray<class UTextBlock*>& CallFunc_GetSettingsTitles_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, TArray<class UButton*>& CallFunc_GetSettingsButtons_ReturnValue_1, TArray<class UButton*>& CallFunc_GetSettingsButtons_ReturnValue_2, class UButton* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array, class USpinBox* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USpinBox*>& CallFunc_GetSpinBoxes_Array_1, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, class USpinBox* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_1, TArray<class UButton*>& CallFunc_GetSettingsButtons_ReturnValue_3, int32 CallFunc_Array_LastIndex_ReturnValue, TArray<class UButton*>& CallFunc_GetSettingsButtons_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, class UButton* CallFunc_Array_Get_Item_3, bool CallFunc_BooleanAND_ReturnValue_1, const struct FSlateColor& CallFunc_GetTextColor_ReturnValue, const struct FSlateColor& CallFunc_GetTextColor_ReturnValue_1, class UTextBlock* CallFunc_Array_Get_Item_4, class UTextBlock* CallFunc_Array_Get_Item_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, class UButton* CallFunc_Array_Get_Item_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Nav_Set");

	Params::UWBP_VideoSettings_C_Nav_Set_Params Parms{};

	Parms.UseWidget = UseWidget;
	Parms.Button = Button;
	Parms.Hovering = Hovering;
	Parms.CustomIndex = CustomIndex;
	Parms.Index = Index;
	Parms.Delta = Delta;
	Parms.Local_SelectedButton = Local_SelectedButton;
	Parms.Local_UseWidget = Local_UseWidget;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_SelectedIndex = Local_SelectedIndex;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_Hovering = Local_Hovering;
	Parms.Local_Index = Local_Index;
	Parms.Local_Button = Local_Button;
	Parms.CallFunc_GetSettingsButtons_ReturnValue = CallFunc_GetSettingsButtons_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetIndex_ReturnValue = CallFunc_GetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetSettingsValues_ReturnValue = CallFunc_GetSettingsValues_ReturnValue;
	Parms.CallFunc_GetSettingsTitles_ReturnValue = CallFunc_GetSettingsTitles_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetSettingsButtons_ReturnValue_1 = CallFunc_GetSettingsButtons_ReturnValue_1;
	Parms.CallFunc_GetSettingsButtons_ReturnValue_2 = CallFunc_GetSettingsButtons_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetSpinBoxes_Array = CallFunc_GetSpinBoxes_Array;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSpinBoxes_Array_1 = CallFunc_GetSpinBoxes_Array_1;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetSettingsButtons_ReturnValue_3 = CallFunc_GetSettingsButtons_ReturnValue_3;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GetSettingsButtons_ReturnValue_4 = CallFunc_GetSettingsButtons_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetTextColor_ReturnValue = CallFunc_GetTextColor_ReturnValue;
	Parms.CallFunc_GetTextColor_ReturnValue_1 = CallFunc_GetTextColor_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Get_Button_Reso_ToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Tooltip_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_VideoSettings_C::Get_Button_Reso_ToolTipWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_Tooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Get_Button_Reso_ToolTipWidget");

	Params::UWBP_VideoSettings_C_Get_Button_Reso_ToolTipWidget_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Load Initial Values 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_SaveSettings                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::Load_Initial_Values_(bool Local_SaveSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Load Initial Values ");

	Params::UWBP_VideoSettings_C_Load_Initial_Values__Params Parms{};

	Parms.Local_SaveSettings = Local_SaveSettings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__ComboBox_Shadows_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__ComboBox_Shadows_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__ComboBox_Shadows_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Shadows_Handle_Right_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Shadows_Handle_Right_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Shadows_Handle_Right_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__ComboBox_Shadows_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__ComboBox_Shadows_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__ComboBox_Shadows_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Reso_Handle_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Reso_Handle_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Reso_Handle_Left_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Reso_Handle_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Reso_Handle_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Reso_Handle_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Reso_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Reso_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Reso_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Reso_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Reso_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Reso_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Handle_Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Handle_Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Handle_Left_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleLeft_DisplayMode_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleLeft_DisplayMode_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleLeft_DisplayMode_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleRight_DisplayMode_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleRight_DisplayMode_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleRight_DisplayMode_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_DisplayMode_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_DisplayMode_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_DisplayMode_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_DisplayMode_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_DisplayMode_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_DisplayMode_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleLeft_VSync_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleLeft_VSync_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleLeft_VSync_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleRight_VSync_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleRight_VSync_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleRight_VSync_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_VSync_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_VSync_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_VSync_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_VSync_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_VSync_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_VSync_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleLeft_ResScale_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleLeft_ResScale_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleLeft_ResScale_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleRight_ResScale_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleRight_ResScale_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleRight_ResScale_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_ResScale_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_ResScale_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_ResScale_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_ResScale_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_ResScale_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_ResScale_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleLeft_Presets_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleLeft_Presets_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleLeft_Presets_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleRight_Presets_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleRight_Presets_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleRight_Presets_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Presets_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Presets_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Presets_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Presets_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Presets_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Presets_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleRight_Textures_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleRight_Textures_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleRight_Textures_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleLeft_Textures_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleLeft_Textures_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleLeft_Textures_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Textures_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Textures_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Textures_K2Node_ComponentBoundEvent_34_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Textures_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Textures_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Textures_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleRight_LOD_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleRight_LOD_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleRight_LOD_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleLeft_LOD_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleLeft_LOD_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleLeft_LOD_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_LOD_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_LOD_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_LOD_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_LOD_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_LOD_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_LOD_K2Node_ComponentBoundEvent_39_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleLeft_Fx_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleLeft_Fx_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleLeft_Fx_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleRight_Fx_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleRight_Fx_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleRight_Fx_K2Node_ComponentBoundEvent_41_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Fx_K2Node_ComponentBoundEvent_46_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Fx_K2Node_ComponentBoundEvent_46_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Fx_K2Node_ComponentBoundEvent_46_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Fx_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Fx_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Fx_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleLeft_Foliage_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleLeft_Foliage_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleLeft_Foliage_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleRight_Foliage_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleRight_Foliage_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleRight_Foliage_K2Node_ComponentBoundEvent_49_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Foliage_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Foliage_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Foliage_K2Node_ComponentBoundEvent_55_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Foliage_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Foliage_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Foliage_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleLeft_PostProcess_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleLeft_PostProcess_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleLeft_PostProcess_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleRight_PostProcess_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleRight_PostProcess_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleRight_PostProcess_K2Node_ComponentBoundEvent_58_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_PostProcess_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_PostProcess_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_PostProcess_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_PostProcess_K2Node_ComponentBoundEvent_64_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_PostProcess_K2Node_ComponentBoundEvent_64_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_PostProcess_K2Node_ComponentBoundEvent_64_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Navigate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::Navigate(bool CustomIndex, int32 Index, int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Navigate");

	Params::UWBP_VideoSettings_C_Navigate_Params Parms{};

	Parms.CustomIndex = CustomIndex;
	Parms.Index = Index;
	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ChangeValueLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::ChangeValueLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ChangeValueLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ChangeValueRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::ChangeValueRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ChangeValueRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleLeft_AA_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleLeft_AA_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleLeft_AA_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleRight_AA_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleRight_AA_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleRight_AA_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_AA_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_AA_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_AA_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_AA_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_AA_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_AA_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Brightness_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Brightness_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Brightness_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Brightness_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Brightness_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Brightness_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleLeft_Brightness_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleLeft_Brightness_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleLeft_Brightness_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleRight_Brightness_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleRight_Brightness_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleRight_Brightness_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__SpinBox_Brightness_K2Node_ComponentBoundEvent_39_OnSpinBoxValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::BndEvt__SpinBox_Brightness_K2Node_ComponentBoundEvent_39_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__SpinBox_Brightness_K2Node_ComponentBoundEvent_39_OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::UWBP_VideoSettings_C_BndEvt__SpinBox_Brightness_K2Node_ComponentBoundEvent_39_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleLeft_VSync_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleLeft_VSync_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleLeft_VSync_K2Node_ComponentBoundEvent_44_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleRight_VSync_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleRight_VSync_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleRight_VSync_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_VSync_K2Node_ComponentBoundEvent_46_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_VSync_K2Node_ComponentBoundEvent_46_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_VSync_K2Node_ComponentBoundEvent_46_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_VSync_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_VSync_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_VSync_K2Node_ComponentBoundEvent_47_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_FilmGrain_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_FilmGrain_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_FilmGrain_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_FilmGrain_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_FilmGrain_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_FilmGrain_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Left_FilmGrain_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Left_FilmGrain_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Left_FilmGrain_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Right_FilmGrain_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Right_FilmGrain_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Right_FilmGrain_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_PixelMode_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_PixelMode_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_PixelMode_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_PixelMode_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_PixelMode_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_PixelMode_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Left_PixelMode_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Left_PixelMode_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Left_PixelMode_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Right_PixelMode_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Right_PixelMode_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Right_PixelMode_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_MotionBlur_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_MotionBlur_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_MotionBlur_K2Node_ComponentBoundEvent_66_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_MotionBlur_K2Node_ComponentBoundEvent_67_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_MotionBlur_K2Node_ComponentBoundEvent_67_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_MotionBlur_K2Node_ComponentBoundEvent_67_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Left_MotionBlur_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Left_MotionBlur_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Left_MotionBlur_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Right_MotionBlur_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Right_MotionBlur_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Right_MotionBlur_K2Node_ComponentBoundEvent_69_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.IndieMode_Transition
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::IndieMode_Transition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "IndieMode_Transition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.UpdateIndieMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::UpdateIndieMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "UpdateIndieMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.OnIndieModeTransitionEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::OnIndieModeTransitionEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "OnIndieModeTransitionEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.IndieMode_TransitionReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::IndieMode_TransitionReset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "IndieMode_TransitionReset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Left_HDR_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Left_HDR_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Left_HDR_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Right_HDR_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Right_HDR_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Right_HDR_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_HDR_K2Node_ComponentBoundEvent_73_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_HDR_K2Node_ComponentBoundEvent_73_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_HDR_K2Node_ComponentBoundEvent_73_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_HDR_K2Node_ComponentBoundEvent_74_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_HDR_K2Node_ComponentBoundEvent_74_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_HDR_K2Node_ComponentBoundEvent_74_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Confirm_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::Confirm_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Confirm_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Confirm_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::Confirm_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Confirm_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.OnOpen_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::OnOpen_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "OnOpen_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.OnResetToDefault_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::OnResetToDefault_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "OnResetToDefault_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.OnResetToDefault_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::OnResetToDefault_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "OnResetToDefault_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.EnableConfirmPopUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_VideoSettings_Confirm_C* Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VideoSettings_C::EnableConfirmPopUp(class UUI_VideoSettings_Confirm_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "EnableConfirmPopUp");

	Params::UWBP_VideoSettings_C_EnableConfirmPopUp_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.DirtySettings_DiscardChanges
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::DirtySettings_DiscardChanges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "DirtySettings_DiscardChanges");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.DirtySettings_ApplyChanges
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::DirtySettings_ApplyChanges()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "DirtySettings_ApplyChanges");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_AspectRatio_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_AspectRatio_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_AspectRatio_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_AspectRatio_K2Node_ComponentBoundEvent_72_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_AspectRatio_K2Node_ComponentBoundEvent_72_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_AspectRatio_K2Node_ComponentBoundEvent_72_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleLeft_AspectRatio_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleLeft_AspectRatio_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleLeft_AspectRatio_K2Node_ComponentBoundEvent_75_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleRight_AspectRatio_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleRight_AspectRatio_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleRight_AspectRatio_K2Node_ComponentBoundEvent_76_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_FOV_K2Node_ComponentBoundEvent_77_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_FOV_K2Node_ComponentBoundEvent_77_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_FOV_K2Node_ComponentBoundEvent_77_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_FOV_K2Node_ComponentBoundEvent_78_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_FOV_K2Node_ComponentBoundEvent_78_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_FOV_K2Node_ComponentBoundEvent_78_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleLeft_FOV_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleLeft_FOV_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleLeft_FOV_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleRight_FOV_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleRight_FOV_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleRight_FOV_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_CutsceneAspectRatio_K2Node_ComponentBoundEvent_81_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_CutsceneAspectRatio_K2Node_ComponentBoundEvent_81_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_CutsceneAspectRatio_K2Node_ComponentBoundEvent_81_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_CutsceneAspectRatio_K2Node_ComponentBoundEvent_82_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_CutsceneAspectRatio_K2Node_ComponentBoundEvent_82_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_CutsceneAspectRatio_K2Node_ComponentBoundEvent_82_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleLeft_CutsceneAspectRatio_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleLeft_CutsceneAspectRatio_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleLeft_CutsceneAspectRatio_K2Node_ComponentBoundEvent_83_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__HandleRight_CutsceneAspectRatio_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__HandleRight_CutsceneAspectRatio_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__HandleRight_CutsceneAspectRatio_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_RadialBlur_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_RadialBlur_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_RadialBlur_K2Node_ComponentBoundEvent_85_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_RadialBlur_K2Node_ComponentBoundEvent_86_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_RadialBlur_K2Node_ComponentBoundEvent_86_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_RadialBlur_K2Node_ComponentBoundEvent_86_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Left_RadialBlur_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Left_RadialBlur_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Left_RadialBlur_K2Node_ComponentBoundEvent_87_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Right_RadialBlur_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Right_RadialBlur_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Right_RadialBlur_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_VideoSettings_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "PreConstruct");

	Params::UWBP_VideoSettings_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Left_RayTracing_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Left_RayTracing_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Left_RayTracing_K2Node_ComponentBoundEvent_89_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Right_RayTracing_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Right_RayTracing_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Right_RayTracing_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_RayTracing_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_RayTracing_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_RayTracing_K2Node_ComponentBoundEvent_99_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_RayTracing_K2Node_ComponentBoundEvent_100_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_RayTracing_K2Node_ComponentBoundEvent_100_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_RayTracing_K2Node_ComponentBoundEvent_100_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_DLSS_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_DLSS_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_DLSS_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_DLSS_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_DLSS_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_DLSS_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Left_DLSS_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Left_DLSS_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Left_DLSS_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Right_DLSS_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Right_DLSS_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Right_DLSS_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_DirectX_K2Node_ComponentBoundEvent_89_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_DirectX_K2Node_ComponentBoundEvent_89_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_DirectX_K2Node_ComponentBoundEvent_89_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_DirectX_K2Node_ComponentBoundEvent_90_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_DirectX_K2Node_ComponentBoundEvent_90_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_DirectX_K2Node_ComponentBoundEvent_90_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Left_DirectX_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Left_DirectX_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Left_DirectX_K2Node_ComponentBoundEvent_99_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.BndEvt__Button_Right_DirectX_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::BndEvt__Button_Right_DirectX_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "BndEvt__Button_Right_DirectX_K2Node_ComponentBoundEvent_100_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.ExecuteUbergraph_WBP_VideoSettings
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CustomIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Delta                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_InValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIntPoint>           CallFunc_GetSupportedFullscreenResolutions_Resolutions           (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_GetSupportedFullscreenResolutions_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_VideoSettings_Confirm_C* K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsConsole_IsConsole                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsConsole_IsConsole_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_IndieModeTransition_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)

void UWBP_VideoSettings_C::ExecuteUbergraph_WBP_VideoSettings(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, enum class EUMGSequencePlayMode Temp_byte_Variable, bool K2Node_CustomEvent_CustomIndex, int32 K2Node_CustomEvent_Index, int32 K2Node_CustomEvent_Delta, bool CallFunc_Not_PreBool_ReturnValue_2, float K2Node_ComponentBoundEvent_InValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_4, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool Temp_bool_Variable, enum class EUMGSequencePlayMode K2Node_Select_Default, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, TArray<struct FIntPoint>& CallFunc_GetSupportedFullscreenResolutions_Resolutions, bool CallFunc_GetSupportedFullscreenResolutions_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Not_PreBool_ReturnValue_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_VideoSettings_Confirm_C* K2Node_CustomEvent_Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_GetIsConsole_IsConsole, bool CallFunc_GetIsConsole_IsConsole_1, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_8, class UUI_IndieModeTransition_C* CallFunc_Create_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue_9, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "ExecuteUbergraph_WBP_VideoSettings");

	Params::UWBP_VideoSettings_C_ExecuteUbergraph_WBP_VideoSettings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CustomEvent_CustomIndex = K2Node_CustomEvent_CustomIndex;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CustomEvent_Delta = K2Node_CustomEvent_Delta;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_InValue = K2Node_ComponentBoundEvent_InValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetSupportedFullscreenResolutions_Resolutions = CallFunc_GetSupportedFullscreenResolutions_Resolutions;
	Parms.CallFunc_GetSupportedFullscreenResolutions_ReturnValue = CallFunc_GetSupportedFullscreenResolutions_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_GetIsConsole_IsConsole = CallFunc_GetIsConsole_IsConsole;
	Parms.CallFunc_GetIsConsole_IsConsole_1 = CallFunc_GetIsConsole_IsConsole_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Not_PreBool_ReturnValue_9 = CallFunc_Not_PreBool_ReturnValue_9;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VideoSettings.WBP_VideoSettings_C.OnOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VideoSettings_C::OnOptionSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VideoSettings_C", "OnOptionSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


