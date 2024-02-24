#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_PB_Linear_Target.WB_PB_Linear_Target_C
// (None)

class UClass* UWB_PB_Linear_Target_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_PB_Linear_Target_C");

	return Clss;
}


// WB_PB_Linear_Target_C WB_PB_Linear_Target.Default__WB_PB_Linear_Target_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_PB_Linear_Target_C* UWB_PB_Linear_Target_C::GetDefaultObj()
{
	static class UWB_PB_Linear_Target_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_PB_Linear_Target_C*>(UWB_PB_Linear_Target_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.GetPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Percent                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Percent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Target_C::GetPercent(double* Percent, double K2Node_FunctionResult_Percent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Target_C", "GetPercent");

	Params::UWB_PB_Linear_Target_C_GetPercent_Params Parms{};

	Parms.K2Node_FunctionResult_Percent_ImplicitCast = K2Node_FunctionResult_Percent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

}


// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetFillColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InColor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Target_C::SetFillColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Target_C", "SetFillColor");

	Params::UWB_PB_Linear_Target_C_SetFillColor_Params Parms{};

	Parms.InColor = InColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetBarFillType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProgressBarFillType    BarFillType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseShader                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Target_C::SetBarFillType(enum class EProgressBarFillType BarFillType, bool bUseShader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Target_C", "SetBarFillType");

	Params::UWB_PB_Linear_Target_C_SetBarFillType_Params Parms{};

	Parms.BarFillType = BarFillType;
	Parms.bUseShader = bUseShader;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InPercent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Target_C::SetPercent(double InPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Target_C", "SetPercent");

	Params::UWB_PB_Linear_Target_C_SetPercent_Params Parms{};

	Parms.InPercent = InPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.SetDefaultValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_PB_Linear_Target_C::SetDefaultValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Target_C", "SetDefaultValues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_PB_Linear_Target.WB_PB_Linear_Target_C.ExecuteUbergraph_WB_PB_Linear_Target
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_CustomEvent_InColor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProgressBarFillType    K2Node_CustomEvent_BarFillType                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUseShader                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_InPercent                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_PB_Linear_Target_C::ExecuteUbergraph_WB_PB_Linear_Target(int32 EntryPoint, const struct FLinearColor& K2Node_CustomEvent_InColor, enum class EProgressBarFillType K2Node_CustomEvent_BarFillType, bool K2Node_CustomEvent_bUseShader, double K2Node_CustomEvent_InPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_PB_Linear_Target_C", "ExecuteUbergraph_WB_PB_Linear_Target");

	Params::UWB_PB_Linear_Target_C_ExecuteUbergraph_WB_PB_Linear_Target_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_InColor = K2Node_CustomEvent_InColor;
	Parms.K2Node_CustomEvent_BarFillType = K2Node_CustomEvent_BarFillType;
	Parms.K2Node_CustomEvent_bUseShader = K2Node_CustomEvent_bUseShader;
	Parms.K2Node_CustomEvent_InPercent = K2Node_CustomEvent_InPercent;

	UObject::ProcessEvent(Func, &Parms);

}

}


