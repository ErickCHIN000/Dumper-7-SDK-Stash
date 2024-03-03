#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Container_Circular.WB_Container_Circular_C
// (None)

class UClass* UWB_Container_Circular_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Container_Circular_C");

	return Clss;
}


// WB_Container_Circular_C WB_Container_Circular.Default__WB_Container_Circular_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Container_Circular_C* UWB_Container_Circular_C::GetDefaultObj()
{
	static class UWB_Container_Circular_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Container_Circular_C*>(UWB_Container_Circular_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Container_Circular.WB_Container_Circular_C.GetFillColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWB_Container_Circular_C::GetFillColor(const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "GetFillColor");

	Params::UWB_Container_Circular_C_GetFillColor_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue = CallFunc_K2_GetVectorParameterValue_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Circular.WB_Container_Circular_C.GetGradientOpacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWB_Container_Circular_C::GetGradientOpacity(float Temp_float_Variable, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_K2_GetScalarParameterValue_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "GetGradientOpacity");

	Params::UWB_Container_Circular_C_GetGradientOpacity_Params Parms{};

	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetMarqueeMaskParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialMarquee_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetMarqueeMaskParam(class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetMarqueeMaskParam");

	Params::UWB_Container_Circular_C_SetMarqueeMaskParam_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterialMarquee_ReturnValue = CallFunc_GetCircleMaterialMarquee_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetTimeParamMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialMarqueeBG_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialMarquee_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetTimeParamMarquee(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetTimeParamMarquee");

	Params::UWB_Container_Circular_C_SetTimeParamMarquee_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterialMarqueeBG_ReturnValue = CallFunc_GetCircleMaterialMarqueeBG_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetCircleMaterialMarquee_ReturnValue = CallFunc_GetCircleMaterialMarquee_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetMarqueeBGColorParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialMarqueeBG_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetMarqueeBGColorParam(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetMarqueeBGColorParam");

	Params::UWB_Container_Circular_C_SetMarqueeBGColorParam_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterialMarqueeBG_ReturnValue = CallFunc_GetCircleMaterialMarqueeBG_ReturnValue;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetMarqueeColorParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialMarquee_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetMarqueeColorParam(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetMarqueeColorParam");

	Params::UWB_Container_Circular_C_SetMarqueeColorParam_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterialMarquee_ReturnValue = CallFunc_GetCircleMaterialMarquee_ReturnValue;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetStepDensityParamMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialMarqueeBG_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialMarquee_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetStepDensityParamMarquee(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetStepDensityParamMarquee");

	Params::UWB_Container_Circular_C_SetStepDensityParamMarquee_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterialMarqueeBG_ReturnValue = CallFunc_GetCircleMaterialMarqueeBG_ReturnValue;
	Parms.CallFunc_GetCircleMaterialMarquee_ReturnValue = CallFunc_GetCircleMaterialMarquee_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetDensityParamMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialMarqueeBG_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialMarquee_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetDensityParamMarquee(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetDensityParamMarquee");

	Params::UWB_Container_Circular_C_SetDensityParamMarquee_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterialMarqueeBG_ReturnValue = CallFunc_GetCircleMaterialMarqueeBG_ReturnValue;
	Parms.CallFunc_GetCircleMaterialMarquee_ReturnValue = CallFunc_GetCircleMaterialMarquee_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetSpacingParamMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialMarqueeBG_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialMarquee_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetSpacingParamMarquee(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetSpacingParamMarquee");

	Params::UWB_Container_Circular_C_SetSpacingParamMarquee_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterialMarqueeBG_ReturnValue = CallFunc_GetCircleMaterialMarqueeBG_ReturnValue;
	Parms.CallFunc_GetCircleMaterialMarquee_ReturnValue = CallFunc_GetCircleMaterialMarquee_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetStepsParamMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialMarqueeBG_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialMarquee_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetStepsParamMarquee(int32 Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetStepsParamMarquee");

	Params::UWB_Container_Circular_C_SetStepsParamMarquee_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterialMarqueeBG_ReturnValue = CallFunc_GetCircleMaterialMarqueeBG_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetCircleMaterialMarquee_ReturnValue = CallFunc_GetCircleMaterialMarquee_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetThicknessParamMarquee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialMarqueeBG_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialMarquee_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetThicknessParamMarquee(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarqueeBG_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialMarquee_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetThicknessParamMarquee");

	Params::UWB_Container_Circular_C_SetThicknessParamMarquee_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterialMarqueeBG_ReturnValue = CallFunc_GetCircleMaterialMarqueeBG_ReturnValue;
	Parms.CallFunc_GetCircleMaterialMarquee_ReturnValue = CallFunc_GetCircleMaterialMarquee_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.GetCircleMaterialMarqueeBG
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UMaterialInstanceDynamic* UWB_Container_Circular_C::GetCircleMaterialMarqueeBG(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "GetCircleMaterialMarqueeBG");

	Params::UWB_Container_Circular_C_GetCircleMaterialMarqueeBG_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Circular.WB_Container_Circular_C.GetCircleMaterialMarquee
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UMaterialInstanceDynamic* UWB_Container_Circular_C::GetCircleMaterialMarquee(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "GetCircleMaterialMarquee");

	Params::UWB_Container_Circular_C_GetCircleMaterialMarquee_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetBackgroundColorMaskParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetBackgroundColorMaskParam(class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetBackgroundColorMaskParam");

	Params::UWB_Container_Circular_C_SetBackgroundColorMaskParam_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterial_ReturnValue = CallFunc_GetCircleMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetFillColorMaskParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetFillColorMaskParam(class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetFillColorMaskParam");

	Params::UWB_Container_Circular_C_SetFillColorMaskParam_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterial_ReturnValue = CallFunc_GetCircleMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetGradientColorParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetGradientColorParam(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetGradientColorParam");

	Params::UWB_Container_Circular_C_SetGradientColorParam_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterial_ReturnValue = CallFunc_GetCircleMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetGradientMaskParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetGradientMaskParam(class UTexture* Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetGradientMaskParam");

	Params::UWB_Container_Circular_C_SetGradientMaskParam_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterial_ReturnValue = CallFunc_GetCircleMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetGradientOpacityParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetGradientOpacityParam(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetGradientOpacityParam");

	Params::UWB_Container_Circular_C_SetGradientOpacityParam_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterial_ReturnValue = CallFunc_GetCircleMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetUseGradientParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseGradient                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetUseGradientParam(bool UseGradient, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetUseGradientParam");

	Params::UWB_Container_Circular_C_SetUseGradientParam_Params Parms{};

	Parms.UseGradient = UseGradient;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCircleMaterial_ReturnValue = CallFunc_GetCircleMaterial_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetDensityParamTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialTarget_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetDensityParamTarget(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetDensityParamTarget");

	Params::UWB_Container_Circular_C_SetDensityParamTarget_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterialTarget_ReturnValue = CallFunc_GetCircleMaterialTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetThicknessParamTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialTarget_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetThicknessParamTarget(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetThicknessParamTarget");

	Params::UWB_Container_Circular_C_SetThicknessParamTarget_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterialTarget_ReturnValue = CallFunc_GetCircleMaterialTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetPercentParamTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialTarget_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetPercentParamTarget(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetPercentParamTarget");

	Params::UWB_Container_Circular_C_SetPercentParamTarget_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterialTarget_ReturnValue = CallFunc_GetCircleMaterialTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.GetAbsoluteTargetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWB_Container_Circular_C::GetAbsoluteTargetPercent(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "GetAbsoluteTargetPercent");

	Params::UWB_Container_Circular_C_GetAbsoluteTargetPercent_Params Parms{};

	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetFillColorParamTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterialTarget_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetFillColorParamTarget(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterialTarget_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetFillColorParamTarget");

	Params::UWB_Container_Circular_C_SetFillColorParamTarget_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterialTarget_ReturnValue = CallFunc_GetCircleMaterialTarget_ReturnValue;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.GetCircleMaterialTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UMaterialInstanceDynamic* UWB_Container_Circular_C::GetCircleMaterialTarget(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "GetCircleMaterialTarget");

	Params::UWB_Container_Circular_C_GetCircleMaterialTarget_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Circular.WB_Container_Circular_C.FindTargetFillColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWB_Container_Circular_C::FindTargetFillColor(bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "FindTargetFillColor");

	Params::UWB_Container_Circular_C_FindTargetFillColor_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Circular.WB_Container_Circular_C.FindTargetProgressBarPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::FindTargetProgressBarPosition(float Progress, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "FindTargetProgressBarPosition");

	Params::UWB_Container_Circular_C_FindTargetProgressBarPosition_Params Parms{};

	Parms.Progress = Progress;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.IsProgressMethodStatic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_Container_Circular_C::IsProgressMethodStatic(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "IsProgressMethodStatic");

	Params::UWB_Container_Circular_C_IsProgressMethodStatic_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Circular.WB_Container_Circular_C.UpdateStaticPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsProgressMethodStatic_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Container_Circular_C::UpdateStaticPercent(bool CallFunc_IsProgressMethodStatic_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "UpdateStaticPercent");

	Params::UWB_Container_Circular_C_UpdateStaticPercent_Params Parms{};

	Parms.CallFunc_IsProgressMethodStatic_ReturnValue = CallFunc_IsProgressMethodStatic_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.IsProgressMethodInterpolate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_Container_Circular_C::IsProgressMethodInterpolate(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "IsProgressMethodInterpolate");

	Params::UWB_Container_Circular_C_IsProgressMethodInterpolate_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Circular.WB_Container_Circular_C.IsNegativeFillValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UWB_Container_Circular_C::IsNegativeFillValue(float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "IsNegativeFillValue");

	Params::UWB_Container_Circular_C_IsNegativeFillValue_Params Parms{};

	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetAbsoluteFillMethod
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAbsoluteFillMethod                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetAbsoluteFillMethod(bool bAbsoluteFillMethod, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetAbsoluteFillMethod");

	Params::UWB_Container_Circular_C_SetAbsoluteFillMethod_Params Parms{};

	Parms.bAbsoluteFillMethod = bAbsoluteFillMethod;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCircleMaterial_ReturnValue = CallFunc_GetCircleMaterial_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.GetTargetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              TargetPercent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::GetTargetPercent(float* TargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "GetTargetPercent");

	Params::UWB_Container_Circular_C_GetTargetPercent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TargetPercent != nullptr)
		*TargetPercent = Parms.TargetPercent;

}


// Function WB_Container_Circular.WB_Container_Circular_C.GetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::GetPercent(float* Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "GetPercent");

	Params::UWB_Container_Circular_C_GetPercent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

}


// Function WB_Container_Circular.WB_Container_Circular_C.GetCircleMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UMaterialInstanceDynamic* UWB_Container_Circular_C::GetCircleMaterial(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "GetCircleMaterial");

	Params::UWB_Container_Circular_C_GetCircleMaterial_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetFillColorParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetFillColorParam(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetFillColorParam");

	Params::UWB_Container_Circular_C_SetFillColorParam_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterial_ReturnValue = CallFunc_GetCircleMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetEmptyColorParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetEmptyColorParam(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetEmptyColorParam");

	Params::UWB_Container_Circular_C_SetEmptyColorParam_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterial_ReturnValue = CallFunc_GetCircleMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetStepDensityParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetStepDensityParam(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetStepDensityParam");

	Params::UWB_Container_Circular_C_SetStepDensityParam_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterial_ReturnValue = CallFunc_GetCircleMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetSpacingParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetSpacingParam(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetSpacingParam");

	Params::UWB_Container_Circular_C_SetSpacingParam_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterial_ReturnValue = CallFunc_GetCircleMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetStepsParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetStepsParam(int32 Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetStepsParam");

	Params::UWB_Container_Circular_C_SetStepsParam_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterial_ReturnValue = CallFunc_GetCircleMaterial_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetDensityParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetDensityParam(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetDensityParam");

	Params::UWB_Container_Circular_C_SetDensityParam_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterial_ReturnValue = CallFunc_GetCircleMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetThicknessParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetThicknessParam(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetThicknessParam");

	Params::UWB_Container_Circular_C_SetThicknessParam_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterial_ReturnValue = CallFunc_GetCircleMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetPercentParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetCircleMaterial_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetPercentParam(float Value, class UMaterialInstanceDynamic* CallFunc_GetCircleMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetPercentParam");

	Params::UWB_Container_Circular_C_SetPercentParam_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCircleMaterial_ReturnValue = CallFunc_GetCircleMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetThickness
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Thickness                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetThickness(float Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetThickness");

	Params::UWB_Container_Circular_C_SetThickness_Params Parms{};

	Parms.Thickness = Thickness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetTargetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TargetPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetTargetPercent(float TargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetTargetPercent");

	Params::UWB_Container_Circular_C_SetTargetPercent_Params Parms{};

	Parms.TargetPercent = TargetPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetSteps
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Steps                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetSteps(int32 Steps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetSteps");

	Params::UWB_Container_Circular_C_SetSteps_Params Parms{};

	Parms.Steps = Steps;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetPercent(float Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetPercent");

	Params::UWB_Container_Circular_C_SetPercent_Params Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetSpacing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Spacing                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetSpacing(float Spacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetSpacing");

	Params::UWB_Container_Circular_C_SetSpacing_Params Parms{};

	Parms.Spacing = Spacing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetSize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetSize(float Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetSize");

	Params::UWB_Container_Circular_C_SetSize_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetDensity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Density                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetDensity(float Density)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetDensity");

	Params::UWB_Container_Circular_C_SetDensity_Params Parms{};

	Parms.Density = Density;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetStepDensity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HardStepBorder                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetStepDensity(float HardStepBorder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetStepDensity");

	Params::UWB_Container_Circular_C_SetStepDensity_Params Parms{};

	Parms.HardStepBorder = HardStepBorder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetUseTargetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsTargetPercent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Container_Circular_C::SetUseTargetPercent(bool bIsTargetPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetUseTargetPercent");

	Params::UWB_Container_Circular_C_SetUseTargetPercent_Params Parms{};

	Parms.bIsTargetPercent = bIsTargetPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetBackgroundColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  BackgroundMask                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetBackgroundColor(class UTexture2D* BackgroundMask, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetBackgroundColor");

	Params::UWB_Container_Circular_C_SetBackgroundColor_Params Parms{};

	Parms.BackgroundMask = BackgroundMask;
	Parms.Color = Color;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetFillColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              GradientPower                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetFillColor(const struct FLinearColor& FillColor, float GradientPower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetFillColor");

	Params::UWB_Container_Circular_C_SetFillColor_Params Parms{};

	Parms.FillColor = FillColor;
	Parms.GradientPower = GradientPower;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetUseAbsoluteFillMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAbsoluteFillMethod                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Container_Circular_C::SetUseAbsoluteFillMethod(bool bAbsoluteFillMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetUseAbsoluteFillMethod");

	Params::UWB_Container_Circular_C_SetUseAbsoluteFillMethod_Params Parms{};

	Parms.bAbsoluteFillMethod = bAbsoluteFillMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.UpdateTargetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Circular_C::UpdateTargetPercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "UpdateTargetPercent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetProgressMethod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressMethod         ProgressMethod                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetProgressMethod(enum class EProgressMethod ProgressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetProgressMethod");

	Params::UWB_Container_Circular_C_SetProgressMethod_Params Parms{};

	Parms.ProgressMethod = ProgressMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.UpdatePercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Circular_C::UpdatePercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "UpdatePercent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetTargetFillColor_Positive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetTargetFillColor_Positive(const struct FLinearColor& FillColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetTargetFillColor_Positive");

	Params::UWB_Container_Circular_C_SetTargetFillColor_Positive_Params Parms{};

	Parms.FillColor = FillColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetTargetFillColor_Negative
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                FillColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetTargetFillColor_Negative(const struct FLinearColor& FillColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetTargetFillColor_Negative");

	Params::UWB_Container_Circular_C_SetTargetFillColor_Negative_Params Parms{};

	Parms.FillColor = FillColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetGradientOpacity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              GradientOpacity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetGradientOpacity(float GradientOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetGradientOpacity");

	Params::UWB_Container_Circular_C_SetGradientOpacity_Params Parms{};

	Parms.GradientOpacity = GradientOpacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetGradientType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGradientTypes          GradientType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetGradientType(enum class EGradientTypes GradientType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetGradientType");

	Params::UWB_Container_Circular_C_SetGradientType_Params Parms{};

	Parms.GradientType = GradientType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetUseGradient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseGradient                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Container_Circular_C::SetUseGradient(bool bUseGradient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetUseGradient");

	Params::UWB_Container_Circular_C_SetUseGradient_Params Parms{};

	Parms.bUseGradient = bUseGradient;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetFillColorMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Mask                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetFillColorMask(class UTexture2D* Mask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetFillColorMask");

	Params::UWB_Container_Circular_C_SetFillColorMask_Params Parms{};

	Parms.Mask = Mask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetupMarquee
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUseMarquee                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                MarqueeColor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                MarqueeBackgroundColor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetupMarquee(bool bUseMarquee, const struct FLinearColor& MarqueeColor, const struct FLinearColor& MarqueeBackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetupMarquee");

	Params::UWB_Container_Circular_C_SetupMarquee_Params Parms{};

	Parms.bUseMarquee = bUseMarquee;
	Parms.MarqueeColor = MarqueeColor;
	Parms.MarqueeBackgroundColor = MarqueeBackgroundColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetMarqueeTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetMarqueeTime(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetMarqueeTime");

	Params::UWB_Container_Circular_C_SetMarqueeTime_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.SetMarqueeMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMarqueeMask            MarqueeMask                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CustomMask                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::SetMarqueeMask(enum class EMarqueeMask MarqueeMask, class UTexture2D* CustomMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "SetMarqueeMask");

	Params::UWB_Container_Circular_C_SetMarqueeMask_Params Parms{};

	Parms.MarqueeMask = MarqueeMask;
	Parms.CustomMask = CustomMask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.StartTriggerProgressChangeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                ProgressChangeColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::StartTriggerProgressChangeColor(const struct FLinearColor& ProgressChangeColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "StartTriggerProgressChangeColor");

	Params::UWB_Container_Circular_C_StartTriggerProgressChangeColor_Params Parms{};

	Parms.ProgressChangeColor = ProgressChangeColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.StopTriggerProgressChangeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Container_Circular_C::StopTriggerProgressChangeColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "StopTriggerProgressChangeColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Container_Circular.WB_Container_Circular_C.UpdateProgressChangeColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InterpSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsChanging                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Container_Circular_C::UpdateProgressChangeColor(const struct FLinearColor& NewColor, float InterpSpeed, bool IsChanging)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "UpdateProgressChangeColor");

	Params::UWB_Container_Circular_C_UpdateProgressChangeColor_Params Parms{};

	Parms.NewColor = NewColor;
	Parms.InterpSpeed = InterpSpeed;
	Parms.IsChanging = IsChanging;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Container_Circular_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "PreConstruct");

	Params::UWB_Container_Circular_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Container_Circular_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "Tick");

	Params::UWB_Container_Circular_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_Container_Circular.WB_Container_Circular_C.ExecuteUbergraph_WB_Container_Circular
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Thickness                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TargetPercent                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Steps                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Percent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Spacing                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Size                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Density                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_HardStepBorder                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsTargetPercent                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_CustomEvent_BackgroundMask                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_Color                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_FillColor_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_GradientPower                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bAbsoluteFillMethod                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressMethod         K2Node_CustomEvent_ProgressMethod                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsNegativeFillValue_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_FindTargetFillColor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbsoluteTargetPercent_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_FillColor_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_FillColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_GradientOpacity                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EGradientTypes          K2Node_CustomEvent_GradientType                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUseGradient                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_CustomEvent_Mask                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGradientTypes          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUseMarquee                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_CustomEvent_MarqueeColor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_MarqueeBackgroundColor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMarqueeMask            K2Node_CustomEvent_MarqueeMask                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_CustomEvent_CustomMask                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_ProgressChangeColor                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_NewColor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_InterpSpeed                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsChanging                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_CInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMarqueeMask            Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsProgressMethodInterpolate_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SubtractBrightnessValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGradientOpacity_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWB_Container_Circular_C::ExecuteUbergraph_WB_Container_Circular(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, class UTexture2D* Temp_object_Variable, bool Temp_bool_Variable_2, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_3, float Temp_float_Variable_1, int32 K2Node_Select_Default, float K2Node_CustomEvent_Thickness, float K2Node_CustomEvent_TargetPercent, int32 K2Node_CustomEvent_Steps, float K2Node_CustomEvent_Percent, float K2Node_CustomEvent_Spacing, float K2Node_CustomEvent_Size, float K2Node_CustomEvent_Density, float K2Node_CustomEvent_HardStepBorder, bool K2Node_CustomEvent_bIsTargetPercent, class UTexture2D* K2Node_CustomEvent_BackgroundMask, const struct FLinearColor& K2Node_CustomEvent_Color, const struct FLinearColor& K2Node_CustomEvent_FillColor_2, float K2Node_CustomEvent_GradientPower, bool K2Node_CustomEvent_bAbsoluteFillMethod, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Select_Default_1, enum class EProgressMethod K2Node_CustomEvent_ProgressMethod, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsNegativeFillValue_ReturnValue, const struct FLinearColor& CallFunc_FindTargetFillColor_ReturnValue, float CallFunc_GetAbsoluteTargetPercent_ReturnValue, const struct FLinearColor& K2Node_CustomEvent_FillColor_1, const struct FLinearColor& K2Node_CustomEvent_FillColor, class UTexture* Temp_object_Variable_1, float K2Node_CustomEvent_GradientOpacity, class UTexture2D* Temp_object_Variable_2, bool Temp_bool_IsClosed_Variable_1, enum class EGradientTypes K2Node_CustomEvent_GradientType, bool K2Node_CustomEvent_bUseGradient, class UTexture2D* K2Node_CustomEvent_Mask, enum class EGradientTypes Temp_byte_Variable, bool K2Node_CustomEvent_bUseMarquee, const struct FLinearColor& K2Node_CustomEvent_MarqueeColor, const struct FLinearColor& K2Node_CustomEvent_MarqueeBackgroundColor, float K2Node_CustomEvent_Value, enum class EMarqueeMask K2Node_CustomEvent_MarqueeMask, class UTexture2D* K2Node_CustomEvent_CustomMask, class UTexture2D* Temp_object_Variable_3, const struct FLinearColor& K2Node_CustomEvent_ProgressChangeColor, const struct FLinearColor& K2Node_CustomEvent_NewColor, float K2Node_CustomEvent_InterpSpeed, bool K2Node_CustomEvent_IsChanging, float CallFunc_GetWorldDeltaSeconds_ReturnValue, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, bool K2Node_Event_IsDesignTime, const struct FLinearColor& CallFunc_CInterpTo_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class EMarqueeMask Temp_byte_Variable_1, class UTexture2D* K2Node_Select_Default_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsProgressMethodInterpolate_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, const struct FLinearColor& CallFunc_SubtractBrightnessValue_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTexture2D* K2Node_Select_Default_3, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_GetGradientOpacity_ReturnValue, bool Temp_bool_IsClosed_Variable_2, float K2Node_Select_Default_4, float CallFunc_FInterpTo_ReturnValue, class UTexture* Temp_object_Variable_7, class UTexture* Temp_object_Variable_8, class UTexture* Temp_object_Variable_9, class UTexture* K2Node_Select_Default_5, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Container_Circular_C", "ExecuteUbergraph_WB_Container_Circular");

	Params::UWB_Container_Circular_C_ExecuteUbergraph_WB_Container_Circular_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_Thickness = K2Node_CustomEvent_Thickness;
	Parms.K2Node_CustomEvent_TargetPercent = K2Node_CustomEvent_TargetPercent;
	Parms.K2Node_CustomEvent_Steps = K2Node_CustomEvent_Steps;
	Parms.K2Node_CustomEvent_Percent = K2Node_CustomEvent_Percent;
	Parms.K2Node_CustomEvent_Spacing = K2Node_CustomEvent_Spacing;
	Parms.K2Node_CustomEvent_Size = K2Node_CustomEvent_Size;
	Parms.K2Node_CustomEvent_Density = K2Node_CustomEvent_Density;
	Parms.K2Node_CustomEvent_HardStepBorder = K2Node_CustomEvent_HardStepBorder;
	Parms.K2Node_CustomEvent_bIsTargetPercent = K2Node_CustomEvent_bIsTargetPercent;
	Parms.K2Node_CustomEvent_BackgroundMask = K2Node_CustomEvent_BackgroundMask;
	Parms.K2Node_CustomEvent_Color = K2Node_CustomEvent_Color;
	Parms.K2Node_CustomEvent_FillColor_2 = K2Node_CustomEvent_FillColor_2;
	Parms.K2Node_CustomEvent_GradientPower = K2Node_CustomEvent_GradientPower;
	Parms.K2Node_CustomEvent_bAbsoluteFillMethod = K2Node_CustomEvent_bAbsoluteFillMethod;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_ProgressMethod = K2Node_CustomEvent_ProgressMethod;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsNegativeFillValue_ReturnValue = CallFunc_IsNegativeFillValue_ReturnValue;
	Parms.CallFunc_FindTargetFillColor_ReturnValue = CallFunc_FindTargetFillColor_ReturnValue;
	Parms.CallFunc_GetAbsoluteTargetPercent_ReturnValue = CallFunc_GetAbsoluteTargetPercent_ReturnValue;
	Parms.K2Node_CustomEvent_FillColor_1 = K2Node_CustomEvent_FillColor_1;
	Parms.K2Node_CustomEvent_FillColor = K2Node_CustomEvent_FillColor;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_CustomEvent_GradientOpacity = K2Node_CustomEvent_GradientOpacity;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_CustomEvent_GradientType = K2Node_CustomEvent_GradientType;
	Parms.K2Node_CustomEvent_bUseGradient = K2Node_CustomEvent_bUseGradient;
	Parms.K2Node_CustomEvent_Mask = K2Node_CustomEvent_Mask;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CustomEvent_bUseMarquee = K2Node_CustomEvent_bUseMarquee;
	Parms.K2Node_CustomEvent_MarqueeColor = K2Node_CustomEvent_MarqueeColor;
	Parms.K2Node_CustomEvent_MarqueeBackgroundColor = K2Node_CustomEvent_MarqueeBackgroundColor;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CustomEvent_MarqueeMask = K2Node_CustomEvent_MarqueeMask;
	Parms.K2Node_CustomEvent_CustomMask = K2Node_CustomEvent_CustomMask;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_CustomEvent_ProgressChangeColor = K2Node_CustomEvent_ProgressChangeColor;
	Parms.K2Node_CustomEvent_NewColor = K2Node_CustomEvent_NewColor;
	Parms.K2Node_CustomEvent_InterpSpeed = K2Node_CustomEvent_InterpSpeed;
	Parms.K2Node_CustomEvent_IsChanging = K2Node_CustomEvent_IsChanging;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_CInterpTo_ReturnValue = CallFunc_CInterpTo_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsProgressMethodInterpolate_ReturnValue = CallFunc_IsProgressMethodInterpolate_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_SubtractBrightnessValue_ReturnValue = CallFunc_SubtractBrightnessValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_GetGradientOpacity_ReturnValue = CallFunc_GetGradientOpacity_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


