#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Options_Video.WBP_Options_Video_C
// (None)

class UClass* UWBP_Options_Video_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Options_Video_C");

	return Clss;
}


// WBP_Options_Video_C WBP_Options_Video.Default__WBP_Options_Video_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Options_Video_C* UWBP_Options_Video_C::GetDefaultObj()
{
	static class UWBP_Options_Video_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Options_Video_C*>(UWBP_Options_Video_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_29
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnValueChanged_FSRSharpness_NewValue_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_29(float NewValue, double CallFunc_OnValueChanged_FSRSharpness_NewValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_29");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_29_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnValueChanged_FSRSharpness_NewValue_ImplicitCast = CallFunc_OnValueChanged_FSRSharpness_NewValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_28
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_28(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_28");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_28_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_27
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnValueChanged_DLSSSharpness_NewValue_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_27(float NewValue, double CallFunc_OnValueChanged_DLSSSharpness_NewValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_27");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_27_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnValueChanged_DLSSSharpness_NewValue_ImplicitCast = CallFunc_OnValueChanged_DLSSSharpness_NewValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_26
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_26(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_26");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_26_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_25
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_25(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_25");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_25_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_24
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_24(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_24");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_24_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_23(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_23");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_23_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_22
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_22(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_22");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_22_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_21
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_21(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_21");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_21_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_20
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_20(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_20");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_20_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_19
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_19(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_19");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_19_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_18
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnValueChanged_FrameRateLimit_NewValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_18(float NewValue, double CallFunc_OnValueChanged_FrameRateLimit_NewValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_18");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_18_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnValueChanged_FrameRateLimit_NewValue_ImplicitCast = CallFunc_OnValueChanged_FrameRateLimit_NewValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_17
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnValueChanged_FOV_TP_ChangedFOV_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_17(float NewValue, double CallFunc_OnValueChanged_FOV_TP_ChangedFOV_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_17");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_17_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnValueChanged_FOV_TP_ChangedFOV_ImplicitCast = CallFunc_OnValueChanged_FOV_TP_ChangedFOV_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_16
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnValueChanged_FOV_ChangedFOV_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_16(float NewValue, double CallFunc_OnValueChanged_FOV_ChangedFOV_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_16");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_16_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnValueChanged_FOV_ChangedFOV_ImplicitCast = CallFunc_OnValueChanged_FOV_ChangedFOV_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_15
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_15(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_15");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_15_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_14
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnValueChanged_FSRSharpness_NewValue_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_14(float NewValue, double CallFunc_OnValueChanged_FSRSharpness_NewValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_14");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_14_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnValueChanged_FSRSharpness_NewValue_ImplicitCast = CallFunc_OnValueChanged_FSRSharpness_NewValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_13
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_13(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_13");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_13_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_12
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnValueChanged_DLSSSharpness_NewValue_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_12(float NewValue, double CallFunc_OnValueChanged_DLSSSharpness_NewValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_12");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_12_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnValueChanged_DLSSSharpness_NewValue_ImplicitCast = CallFunc_OnValueChanged_DLSSSharpness_NewValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_11
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_11(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_11");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_11_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_10
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_10(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_10");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_10_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_9(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_9");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_9_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_8(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_8");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_8_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_7(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_7");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_7_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_6(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_6");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_6_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_5(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_5");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_5_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_4(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_4");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_4_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnValueChanged_FrameRateLimit_NewValue_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_3(float NewValue, double CallFunc_OnValueChanged_FrameRateLimit_NewValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_3");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_3_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnValueChanged_FrameRateLimit_NewValue_ImplicitCast = CallFunc_OnValueChanged_FrameRateLimit_NewValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnValueChanged_FOV_TP_ChangedFOV_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_2(float NewValue, double CallFunc_OnValueChanged_FOV_TP_ChangedFOV_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_2");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_2_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnValueChanged_FOV_TP_ChangedFOV_ImplicitCast = CallFunc_OnValueChanged_FOV_TP_ChangedFOV_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_OnValueChanged_FOV_ChangedFOV_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_1(float NewValue, double CallFunc_OnValueChanged_FOV_ChangedFOV_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_1");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_1_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_OnValueChanged_FOV_ChangedFOV_ImplicitCast = CallFunc_OnValueChanged_FOV_ChangedFOV_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CREATEDELEGATE_PROXYFUNCTION_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CREATEDELEGATE_PROXYFUNCTION_0(int32 NewValue, const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::UWBP_Options_Video_C_CREATEDELEGATE_PROXYFUNCTION_0_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.Option = Option;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.Get_Dropdown_GI_ToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Options_Video_C::Get_Dropdown_GI_ToolTipWidget(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "Get_Dropdown_GI_ToolTipWidget");

	Params::UWBP_Options_Video_C_Get_Dropdown_GI_ToolTipWidget_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Options_Video.WBP_Options_Video_C.DoCustomNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     FocusedWidget                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFocusedDescendants_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUserWidget*              K2Node_DynamicCast_AsNWXUser_Widget                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusWidget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFocusedDescendants_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUserWidget*              K2Node_DynamicCast_AsNWXUser_Widget_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusWidget_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Options_Video_C::DoCustomNavigation(enum class EUINavigation Navigation, class UWidget* FocusedWidget, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue, int32 CallFunc_Max_ReturnValue, class UNWXUserWidget* K2Node_DynamicCast_AsNWXUser_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsEnabled_ReturnValue, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UWidget* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue_1, class UNWXUserWidget* K2Node_DynamicCast_AsNWXUser_Widget_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsEnabled_ReturnValue_1, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "DoCustomNavigation");

	Params::UWBP_Options_Video_C_DoCustomNavigation_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.FocusedWidget = FocusedWidget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_HasFocusedDescendants_ReturnValue = CallFunc_HasFocusedDescendants_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXUser_Widget = K2Node_DynamicCast_AsNWXUser_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetDefaultFocusWidget_ReturnValue = CallFunc_GetDefaultFocusWidget_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasFocusedDescendants_ReturnValue_1 = CallFunc_HasFocusedDescendants_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXUser_Widget_1 = K2Node_DynamicCast_AsNWXUser_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetIsEnabled_ReturnValue_1 = CallFunc_GetIsEnabled_ReturnValue_1;
	Parms.CallFunc_GetDefaultFocusWidget_ReturnValue_1 = CallFunc_GetDefaultFocusWidget_ReturnValue_1;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Options_Video.WBP_Options_Video_C.SetupNavigationWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_Options_Video_C::SetupNavigationWidgets(TArray<class UWidget*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "SetupNavigationWidgets");

	Params::UWBP_Options_Video_C_SetupNavigationWidgets_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusWidget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Options_Video_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_Options_Video_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetDefaultFocusWidget_ReturnValue = CallFunc_GetDefaultFocusWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Options_Video.WBP_Options_Video_C.LabelAsExperimental
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  LabelRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        LabelText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_Options_Video_C::LabelAsExperimental(class UTextBlock* LabelRef, class FText LabelText, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "LabelAsExperimental");

	Params::UWBP_Options_Video_C_LabelAsExperimental_Params Parms{};

	Parms.LabelRef = LabelRef;
	Parms.LabelText = LabelText;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.GetTextArray_QualitiesXESS
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FText>                TextValues                                                       (Parm, OutParm)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm)

void UWBP_Options_Video_C::GetTextArray_QualitiesXESS(TArray<class FText>* TextValues, TArray<class FText>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "GetTextArray_QualitiesXESS");

	Params::UWBP_Options_Video_C_GetTextArray_QualitiesXESS_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (TextValues != nullptr)
		*TextValues = std::move(Parms.TextValues);

}


// Function WBP_Options_Video.WBP_Options_Video_C.GetTextArray_QualitiesFSR
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FText>                TextValues                                                       (Parm, OutParm)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm)

void UWBP_Options_Video_C::GetTextArray_QualitiesFSR(TArray<class FText>* TextValues, TArray<class FText>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "GetTextArray_QualitiesFSR");

	Params::UWBP_Options_Video_C_GetTextArray_QualitiesFSR_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (TextValues != nullptr)
		*TextValues = std::move(Parms.TextValues);

}


// Function WBP_Options_Video.WBP_Options_Video_C.GetTextArray_QualitiesDLSS
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FText>                TextValues                                                       (Parm, OutParm)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm)

void UWBP_Options_Video_C::GetTextArray_QualitiesDLSS(TArray<class FText>* TextValues, TArray<class FText>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "GetTextArray_QualitiesDLSS");

	Params::UWBP_Options_Video_C_GetTextArray_QualitiesDLSS_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (TextValues != nullptr)
		*TextValues = std::move(Parms.TextValues);

}


// Function WBP_Options_Video.WBP_Options_Video_C.GetTextArray_QualitiesTSR
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FText>                TextValues                                                       (Parm, OutParm)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm)

void UWBP_Options_Video_C::GetTextArray_QualitiesTSR(TArray<class FText>* TextValues, TArray<class FText>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "GetTextArray_QualitiesTSR");

	Params::UWBP_Options_Video_C_GetTextArray_QualitiesTSR_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (TextValues != nullptr)
		*TextValues = std::move(Parms.TextValues);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_Arachnophobia
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_Arachnophobia(bool NewValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_Arachnophobia");

	Params::UWBP_Options_Video_C_OnValueChanged_Arachnophobia_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.RevertResolution
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWindowMode             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::RevertResolution(enum class EWindowMode Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_2, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, const struct FIntPoint& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "RevertResolution");

	Params::UWBP_Options_Video_C_RevertResolution_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_2 = CallFunc_GetNWXGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.CallFunc_GetDesktopResolution_ReturnValue = CallFunc_GetDesktopResolution_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnResolutionTimedPopupWindowClosed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXCommonWindowWidget*      Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_Timer_C*          LPopupTimer                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_Timer_C*          K2Node_DynamicCast_AsWBP_Popup_Timer                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnResolutionTimedPopupWindowClosed(class UNWXCommonWindowWidget* Window, class UWBP_Popup_Timer_C* LPopupTimer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_Popup_Timer_C* K2Node_DynamicCast_AsWBP_Popup_Timer, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnResolutionTimedPopupWindowClosed");

	Params::UWBP_Options_Video_C_OnResolutionTimedPopupWindowClosed_Params Parms{};

	Parms.Window = Window;
	Parms.LPopupTimer = LPopupTimer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsWBP_Popup_Timer = K2Node_DynamicCast_AsWBP_Popup_Timer;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnScreenModeTimedPopupWindowClosed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXCommonWindowWidget*      Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_Timer_C*          LPopupTimer                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_Timer_C*          K2Node_DynamicCast_AsWBP_Popup_Timer                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnScreenModeTimedPopupWindowClosed(class UNWXCommonWindowWidget* Window, class UWBP_Popup_Timer_C* LPopupTimer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_Popup_Timer_C* K2Node_DynamicCast_AsWBP_Popup_Timer, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnScreenModeTimedPopupWindowClosed");

	Params::UWBP_Options_Video_C_OnScreenModeTimedPopupWindowClosed_Params Parms{};

	Parms.Window = Window;
	Parms.LPopupTimer = LPopupTimer;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsWBP_Popup_Timer = K2Node_DynamicCast_AsWBP_Popup_Timer;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_GI
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_GI(int32& NewValue, const class FString& SelectedOption, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_GI");

	Params::UWBP_Options_Video_C_OnValueChanged_GI_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.SelectedOption = SelectedOption;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_EnableThirdPersonNonGameplay
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXWorldSettings*           CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_EnableThirdPersonNonGameplay(bool NewValue, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_EnableThirdPersonNonGameplay");

	Params::UWBP_Options_Video_C_OnValueChanged_EnableThirdPersonNonGameplay_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.InternalDefaultChanges
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::InternalDefaultChanges(class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "InternalDefaultChanges");

	Params::UWBP_Options_Video_C_InternalDefaultChanges_Params Parms{};

	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.RemoveBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "RemoveBindings");

	Params::UWBP_Options_Video_C_RemoveBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.SetupBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "SetupBindings");

	Params::UWBP_Options_Video_C_SetupBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_EnableThirdPerson
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXWorldSettings*           CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_EnableThirdPerson(bool NewValue, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_EnableThirdPerson");

	Params::UWBP_Options_Video_C_OnValueChanged_EnableThirdPerson_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_FOV_TP
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ChangedFOV                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetTPFieldOfView_NewTPFOV_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_FOV_TP(double& ChangedFOV, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, float CallFunc_SetTPFieldOfView_NewTPFOV_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_FOV_TP");

	Params::UWBP_Options_Video_C_OnValueChanged_FOV_TP_Params Parms{};

	Parms.ChangedFOV = ChangedFOV;
	Parms.CallFunc_GetLocalGameUserSettingsComponent_ReturnValue = CallFunc_GetLocalGameUserSettingsComponent_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_SetTPFieldOfView_NewTPFOV_ImplicitCast = CallFunc_SetTPFieldOfView_NewTPFOV_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.Should Third Person Options be Visible
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsNonGameplayView                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Visibility                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXWorldSettings*           CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFeatureFlagStatus      CallFunc_FeatureFlagBranch_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::Should_Third_Person_Options_be_Visible(bool IsNonGameplayView, enum class ESlateVisibility* Visibility, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFeatureFlagStatus CallFunc_FeatureFlagBranch_Result, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "Should Third Person Options be Visible");

	Params::UWBP_Options_Video_C_Should_Third_Person_Options_be_Visible_Params Parms{};

	Parms.IsNonGameplayView = IsNonGameplayView;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FeatureFlagBranch_Result = CallFunc_FeatureFlagBranch_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility != nullptr)
		*Visibility = Parms.Visibility;

}


// Function WBP_Options_Video.WBP_Options_Video_C.UpdateResoultionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWindowMode             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::UpdateResoultionEnabled(enum class EWindowMode Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "UpdateResoultionEnabled");

	Params::UWBP_Options_Video_C_UpdateResoultionEnabled_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.SetScreenSettingDropDownOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::SetScreenSettingDropDownOptions(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Conv_BoolToInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "SetScreenSettingDropDownOptions");

	Params::UWBP_Options_Video_C_SetScreenSettingDropDownOptions_Params Parms{};

	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetDesktopResolution_ReturnValue = CallFunc_GetDesktopResolution_ReturnValue;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.RevertScreenMode
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::RevertScreenMode(bool CallFunc_IsValid_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "RevertScreenMode");

	Params::UWBP_Options_Video_C_RevertScreenMode_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.ConfirmScreenSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::ConfirmScreenSettings(bool CallFunc_IsValid_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "ConfirmScreenSettings");

	Params::UWBP_Options_Video_C_ConfirmScreenSettings_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.CheckQualityPresetSetting
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedOption                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetTextArray_QualityPresets_TextValues                  (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOverallScalabilityLevel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::CheckQualityPresetSetting(int32 SelectedOption, TArray<class FText>& CallFunc_GetTextArray_QualityPresets_TextValues, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "CheckQualityPresetSetting");

	Params::UWBP_Options_Video_C_CheckQualityPresetSetting_Params Parms{};

	Parms.SelectedOption = SelectedOption;
	Parms.CallFunc_GetTextArray_QualityPresets_TextValues = CallFunc_GetTextArray_QualityPresets_TextValues;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetOverallScalabilityLevel_ReturnValue = CallFunc_GetOverallScalabilityLevel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.UpdateWidgets_Enabled
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNvidiaReflexSupported_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSFrameGeneration_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDLSSFrameGenSupported_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_3                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EUpscalingTechnique     CallFunc_GetUpscalingTechnique_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::UpdateWidgets_Enabled(class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_IsNvidiaReflexSupported_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, bool CallFunc_GetDLSSFrameGeneration_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsDLSSFrameGenSupported_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_3, enum class EUpscalingTechnique CallFunc_GetUpscalingTechnique_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "UpdateWidgets_Enabled");

	Params::UWBP_Options_Video_C_UpdateWidgets_Enabled_Params Parms{};

	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_IsNvidiaReflexSupported_ReturnValue = CallFunc_IsNvidiaReflexSupported_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetDLSSFrameGeneration_ReturnValue = CallFunc_GetDLSSFrameGeneration_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_2 = CallFunc_GetNWXGameUserSettings_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsDLSSFrameGenSupported_ReturnValue = CallFunc_IsDLSSFrameGenSupported_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_3 = CallFunc_GetNWXGameUserSettings_ReturnValue_3;
	Parms.CallFunc_GetUpscalingTechnique_ReturnValue = CallFunc_GetUpscalingTechnique_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.GetDefaultFocusWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Options_Video_C::GetDefaultFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "GetDefaultFocusWidget");

	Params::UWBP_Options_Video_C_GetDefaultFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_EnableCameraShake
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_EnableCameraShake(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_EnableCameraShake");

	Params::UWBP_Options_Video_C_OnValueChanged_EnableCameraShake_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_FSRFramegen
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_FSRFramegen(bool bEnable, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_FSRFramegen");

	Params::UWBP_Options_Video_C_OnValueChanged_FSRFramegen_Params Parms{};

	Parms.bEnable = bEnable;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_FSRSharpness
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_FSRSharpness_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_FSRSharpness(double NewValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, float K2Node_VariableSet_FSRSharpness_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_FSRSharpness");

	Params::UWBP_Options_Video_C_OnValueChanged_FSRSharpness_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.K2Node_VariableSet_FSRSharpness_ImplicitCast = K2Node_VariableSet_FSRSharpness_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_DLSSFramegen
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_DLSSFramegen(bool bEnable, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_DLSSFramegen");

	Params::UWBP_Options_Video_C_OnValueChanged_DLSSFramegen_Params Parms{};

	Parms.bEnable = bEnable;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_DLSSSharpness
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDLSSSharpness_NewDLSSSharpness_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_DLSSSharpness(double NewValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, float CallFunc_SetDLSSSharpness_NewDLSSSharpness_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_DLSSSharpness");

	Params::UWBP_Options_Video_C_OnValueChanged_DLSSSharpness_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_SetDLSSSharpness_NewDLSSSharpness_ImplicitCast = CallFunc_SetDLSSSharpness_NewDLSSSharpness_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_UpscaleQualityXESS
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_UpscaleQualityXESS(int32 NewValue, const class FString& SelectedOption, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_UpscaleQualityXESS");

	Params::UWBP_Options_Video_C_OnValueChanged_UpscaleQualityXESS_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.SelectedOption = SelectedOption;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_UpscaleQualityFSR
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_UpscaleQualityFSR(int32 NewValue, const class FString& SelectedOption, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_UpscaleQualityFSR");

	Params::UWBP_Options_Video_C_OnValueChanged_UpscaleQualityFSR_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.SelectedOption = SelectedOption;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_UpscaleQualityDLSS
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_UpscaleQualityDLSS(int32 NewValue, const class FString& SelectedOption, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_UpscaleQualityDLSS");

	Params::UWBP_Options_Video_C_OnValueChanged_UpscaleQualityDLSS_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.SelectedOption = SelectedOption;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_UpscaleQualityTSR
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_UpscaleQualityTSR(int32 NewValue, const class FString& SelectedOption, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_UpscaleQualityTSR");

	Params::UWBP_Options_Video_C_OnValueChanged_UpscaleQualityTSR_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.SelectedOption = SelectedOption;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_UpscaleMethod
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class EUpscalingTechnique     RequestedUpscaleMethod                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUpscalingTechnique>CallFunc_GatherSupportedUpscalingTechniques_ReturnValue          (ReferenceParm)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_UpscaleMethod(int32 NewValue, const class FString& SelectedOption, enum class EUpscalingTechnique RequestedUpscaleMethod, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, TArray<enum class EUpscalingTechnique>& CallFunc_GatherSupportedUpscalingTechniques_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_UpscaleMethod");

	Params::UWBP_Options_Video_C_OnValueChanged_UpscaleMethod_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.SelectedOption = SelectedOption;
	Parms.RequestedUpscaleMethod = RequestedUpscaleMethod;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GatherSupportedUpscalingTechniques_ReturnValue = CallFunc_GatherSupportedUpscalingTechniques_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_2 = CallFunc_GetNWXGameUserSettings_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.InitializeWidget_UpscaleMethod
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedUpscaleMethodOption                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                UpscaleMethodOptions                                             (Edit, BlueprintVisible)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// enum class EUpscalingTechnique     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EUpscalingTechnique>CallFunc_GatherSupportedUpscalingTechniques_ReturnValue          (ReferenceParm)
// enum class EUpscalingTechnique     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EUpscalingTechnique     CallFunc_GetUpscalingTechnique_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::InitializeWidget_UpscaleMethod(int32 SelectedUpscaleMethodOption, const TArray<class FText>& UpscaleMethodOptions, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, enum class EUpscalingTechnique Temp_byte_Variable, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, TArray<enum class EUpscalingTechnique>& CallFunc_GatherSupportedUpscalingTechniques_ReturnValue, enum class EUpscalingTechnique CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FText K2Node_Select_Default, int32 CallFunc_Array_Add_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, enum class EUpscalingTechnique CallFunc_GetUpscalingTechnique_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "InitializeWidget_UpscaleMethod");

	Params::UWBP_Options_Video_C_InitializeWidget_UpscaleMethod_Params Parms{};

	Parms.SelectedUpscaleMethodOption = SelectedUpscaleMethodOption;
	Parms.UpscaleMethodOptions = UpscaleMethodOptions;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GatherSupportedUpscalingTechniques_ReturnValue = CallFunc_GatherSupportedUpscalingTechniques_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetUpscalingTechnique_ReturnValue = CallFunc_GetUpscalingTechnique_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.Debug_EnableAllDebugSliders
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable_DebugOptions                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_OptionSlider_C*         K2Node_DynamicCast_AsWBP_Option_Slider                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Options_Dropdown_C*     K2Node_DynamicCast_AsWBP_Options_Dropdown                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::Debug_EnableAllDebugSliders(bool Enable_DebugOptions, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_OptionSlider_C* K2Node_DynamicCast_AsWBP_Option_Slider, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UWBP_Options_Dropdown_C* K2Node_DynamicCast_AsWBP_Options_Dropdown, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "Debug_EnableAllDebugSliders");

	Params::UWBP_Options_Video_C_Debug_EnableAllDebugSliders_Params Parms{};

	Parms.Enable_DebugOptions = Enable_DebugOptions;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Option_Slider = K2Node_DynamicCast_AsWBP_Option_Slider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWBP_Options_Dropdown = K2Node_DynamicCast_AsWBP_Options_Dropdown;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.GetTextArray_QualityPresets
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FText>                TextValues                                                       (Parm, OutParm)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm)

void UWBP_Options_Video_C::GetTextArray_QualityPresets(TArray<class FText>* TextValues, TArray<class FText>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "GetTextArray_QualityPresets");

	Params::UWBP_Options_Video_C_GetTextArray_QualityPresets_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (TextValues != nullptr)
		*TextValues = std::move(Parms.TextValues);

}


// Function WBP_Options_Video.WBP_Options_Video_C.GetTextArray_Qualities
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FText>                TextValues                                                       (Parm, OutParm)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm)

void UWBP_Options_Video_C::GetTextArray_Qualities(TArray<class FText>* TextValues, TArray<class FText>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "GetTextArray_Qualities");

	Params::UWBP_Options_Video_C_GetTextArray_Qualities_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (TextValues != nullptr)
		*TextValues = std::move(Parms.TextValues);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_WindowMode
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class EWindowMode             LWindowedMode                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// enum class EWindowMode             Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class FText                        Temp_text_Variable_4                                             (ConstParm)
// class FText                        Temp_text_Variable_5                                             (ConstParm)
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_Timer_C*          CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        Temp_text_Variable_6                                             (ConstParm)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindDisplaySize_X                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindDisplaySize_Y                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_MakeStruct_IntPoint                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_WindowMode(int32 NewValue, const class FString& SelectedOption, enum class EWindowMode LWindowedMode, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EWindowMode Temp_byte_Variable, enum class EWindowMode Temp_byte_Variable_1, enum class EWindowMode Temp_byte_Variable_2, enum class EWindowMode K2Node_Select_Default, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, enum class EWindowMode Temp_byte_Variable_3, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_Popup_Timer_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText K2Node_Select_Default_1, class FText Temp_text_Variable_6, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, int32 CallFunc_FindDisplaySize_X, int32 CallFunc_FindDisplaySize_Y, const struct FIntPoint& K2Node_MakeStruct_IntPoint, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_2, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, const struct FIntPoint& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_WindowMode");

	Params::UWBP_Options_Video_C_OnValueChanged_WindowMode_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.SelectedOption = SelectedOption;
	Parms.LWindowedMode = LWindowedMode;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_FindDisplaySize_X = CallFunc_FindDisplaySize_X;
	Parms.CallFunc_FindDisplaySize_Y = CallFunc_FindDisplaySize_Y;
	Parms.K2Node_MakeStruct_IntPoint = K2Node_MakeStruct_IntPoint;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_2 = CallFunc_GetNWXGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetDesktopResolution_ReturnValue = CallFunc_GetDesktopResolution_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_Reflex
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_Reflex(bool NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_Reflex");

	Params::UWBP_Options_Video_C_OnValueChanged_Reflex_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_VSync
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_VSync(bool bEnable, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_VSync");

	Params::UWBP_Options_Video_C_OnValueChanged_VSync_Params Parms{};

	Parms.bEnable = bEnable;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_ViewDistance
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_ViewDistance(int32& NewValue, const class FString& SelectedOption, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_ViewDistance");

	Params::UWBP_Options_Video_C_OnValueChanged_ViewDistance_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.SelectedOption = SelectedOption;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_Textures
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_Textures(int32& NewValue, const class FString& SelectedOption, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_Textures");

	Params::UWBP_Options_Video_C_OnValueChanged_Textures_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.SelectedOption = SelectedOption;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_Shadows
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_Shadows(int32& NewValue, const class FString& SelectedOption, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_Shadows");

	Params::UWBP_Options_Video_C_OnValueChanged_Shadows_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.SelectedOption = SelectedOption;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_Shading
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_Shading(int32& NewValue, const class FString& SelectedOption, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_Shading");

	Params::UWBP_Options_Video_C_OnValueChanged_Shading_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.SelectedOption = SelectedOption;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_Resolution
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Option                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class EWindowMode             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class FText                        Temp_text_Variable_1                                             (ConstParm)
// class FText                        Temp_text_Variable_2                                             (ConstParm)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_Timer_C*          CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_4                                             (ConstParm)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_MakeStruct_IntPoint                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_Resolution(int32 SelectedIndex, const class FString& Option, enum class EWindowMode Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UWBP_Popup_Timer_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText Temp_text_Variable_4, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Get_Item_1, const struct FIntPoint& K2Node_MakeStruct_IntPoint, const struct FIntPoint& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_Resolution");

	Params::UWBP_Options_Video_C_OnValueChanged_Resolution_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Option = Option;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_2 = CallFunc_GetNWXGameUserSettings_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetDesktopResolution_ReturnValue = CallFunc_GetDesktopResolution_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeStruct_IntPoint = K2Node_MakeStruct_IntPoint;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_QualityPreset
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_QualityPreset(int32& NewValue, const class FString& SelectedOption, bool CallFunc_LessEqual_IntInt_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_QualityPreset");

	Params::UWBP_Options_Video_C_OnValueChanged_QualityPreset_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.SelectedOption = SelectedOption;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_PostProcessing
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_PostProcessing(int32& NewValue, const class FString& SelectedOption, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_PostProcessing");

	Params::UWBP_Options_Video_C_OnValueChanged_PostProcessing_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.SelectedOption = SelectedOption;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_MotionBlur
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_MotionBlur(bool IsEnabled, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_MotionBlur");

	Params::UWBP_Options_Video_C_OnValueChanged_MotionBlur_Params Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_FrameRateLimit
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_FrameRateLimit(double& NewValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, float CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_FrameRateLimit");

	Params::UWBP_Options_Video_C_OnValueChanged_FrameRateLimit_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast = CallFunc_SetFrameRateLimit_NewLimit_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_FOV
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ChangedFOV                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFieldOfView_NewFOV_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_FOV(double& ChangedFOV, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UBP_UserSettingsComponent_C* CallFunc_GetLocalGameUserSettingsComponent_ReturnValue, float CallFunc_SetFieldOfView_NewFOV_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_FOV");

	Params::UWBP_Options_Video_C_OnValueChanged_FOV_Params Parms{};

	Parms.ChangedFOV = ChangedFOV;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetLocalGameUserSettingsComponent_ReturnValue = CallFunc_GetLocalGameUserSettingsComponent_ReturnValue;
	Parms.CallFunc_SetFieldOfView_NewFOV_ImplicitCast = CallFunc_SetFieldOfView_NewFOV_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_Foliage
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelctedOption                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_Foliage(int32& NewValue, const class FString& SelctedOption, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_Foliage");

	Params::UWBP_Options_Video_C_OnValueChanged_Foliage_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.SelctedOption = SelctedOption;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_Effects
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelectedString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_Effects(int32& NewValue, const class FString& SelectedString, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_Effects");

	Params::UWBP_Options_Video_C_OnValueChanged_Effects_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.SelectedString = SelectedString;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnValueChanged_AntiAliasing
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::OnValueChanged_AntiAliasing(int32& NewValue, const class FString& SelectedOption, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnValueChanged_AntiAliasing");

	Params::UWBP_Options_Video_C_OnValueChanged_AntiAliasing_Params Parms{};

	Parms.NewValue = NewValue;
	Parms.SelectedOption = SelectedOption;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.InitializeWidget_WindowMode
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)

void UWBP_Options_Video_C::InitializeWidget_WindowMode(class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "InitializeWidget_WindowMode");

	Params::UWBP_Options_Video_C_InitializeWidget_WindowMode_Params Parms{};

	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.InitializeWidget_Screen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EUStreamlineReflexMode  CallFunc_GetNvidiaReflexMode_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncEnabled_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::InitializeWidget_Screen(class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, enum class EUStreamlineReflexMode CallFunc_GetNvidiaReflexMode_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, bool CallFunc_IsVSyncEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "InitializeWidget_Screen");

	Params::UWBP_Options_Video_C_InitializeWidget_Screen_Params Parms{};

	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetNvidiaReflexMode_ReturnValue = CallFunc_GetNvidiaReflexMode_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_IsVSyncEnabled_ReturnValue = CallFunc_IsVSyncEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.InitializeWidget_Resolution
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Y                                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              X                                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FIntPoint>           AvailableReslutions                                              (Edit, BlueprintVisible)
// TArray<class FText>                ResolutionArray                                                  (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// struct FIntPoint                   K2Node_MakeStruct_IntPoint                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// TArray<struct FIntPoint>           CallFunc_GetSupportedFullScreenResolutions_ReturnValue           (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetLastConfirmedScreenResolution_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::InitializeWidget_Resolution(int32 Y, int32 X, const TArray<struct FIntPoint>& AvailableReslutions, const TArray<class FText>& ResolutionArray, int32 Temp_int_Array_Index_Variable, const struct FIntPoint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const struct FIntPoint& K2Node_MakeStruct_IntPoint, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, TArray<struct FIntPoint>& CallFunc_GetSupportedFullScreenResolutions_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_2, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue_1, const struct FIntPoint& CallFunc_GetLastConfirmedScreenResolution_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "InitializeWidget_Resolution");

	Params::UWBP_Options_Video_C_InitializeWidget_Resolution_Params Parms{};

	Parms.Y = Y;
	Parms.X = X;
	Parms.AvailableReslutions = AvailableReslutions;
	Parms.ResolutionArray = ResolutionArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.K2Node_MakeStruct_IntPoint = K2Node_MakeStruct_IntPoint;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetSupportedFullScreenResolutions_ReturnValue = CallFunc_GetSupportedFullScreenResolutions_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_2 = CallFunc_GetNWXGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetScreenResolution_ReturnValue_1 = CallFunc_GetScreenResolution_ReturnValue_1;
	Parms.CallFunc_GetLastConfirmedScreenResolution_ReturnValue = CallFunc_GetLastConfirmedScreenResolution_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.InitializeWidget_QualityPreset
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                Options                                                          (Edit, BlueprintVisible)
// int32                              SelectedOption                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetTextArray_QualityPresets_TextValues                  (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetOverallScalabilityLevel_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::InitializeWidget_QualityPreset(const TArray<class FText>& Options, int32 SelectedOption, TArray<class FText>& CallFunc_GetTextArray_QualityPresets_TextValues, int32 CallFunc_Array_Length_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetOverallScalabilityLevel_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "InitializeWidget_QualityPreset");

	Params::UWBP_Options_Video_C_InitializeWidget_QualityPreset_Params Parms{};

	Parms.Options = Options;
	Parms.SelectedOption = SelectedOption;
	Parms.CallFunc_GetTextArray_QualityPresets_TextValues = CallFunc_GetTextArray_QualityPresets_TextValues;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetOverallScalabilityLevel_ReturnValue = CallFunc_GetOverallScalabilityLevel_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.InitializeWidgetGroup_Quality
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                CallFunc_GetTextArray_Qualities_TextValues                       (ReferenceParm)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetTextArray_Qualities_TextValues_1                     (ReferenceParm)
// int32                              CallFunc_GetGlobalIlluminationQuality_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewDistanceQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTextureQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetTextArray_Qualities_TextValues_2                     (ReferenceParm)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_3                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetTextArray_Qualities_TextValues_3                     (ReferenceParm)
// int32                              CallFunc_GetShadowQuality_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_4                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetTextArray_Qualities_TextValues_4                     (ReferenceParm)
// int32                              CallFunc_GetShadingQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_5                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPostProcessingQuality_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetTextArray_Qualities_TextValues_5                     (ReferenceParm)
// TArray<class FText>                CallFunc_GetTextArray_Qualities_TextValues_6                     (ReferenceParm)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_6                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFoliageQuality_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetTextArray_Qualities_TextValues_7                     (ReferenceParm)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_7                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_8                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetTextArray_Qualities_TextValues_8                     (ReferenceParm)
// int32                              CallFunc_GetAntiAliasingQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::InitializeWidgetGroup_Quality(TArray<class FText>& CallFunc_GetTextArray_Qualities_TextValues, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, TArray<class FText>& CallFunc_GetTextArray_Qualities_TextValues_1, int32 CallFunc_GetGlobalIlluminationQuality_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_2, int32 CallFunc_GetViewDistanceQuality_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, TArray<class FText>& CallFunc_GetTextArray_Qualities_TextValues_2, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_3, TArray<class FText>& CallFunc_GetTextArray_Qualities_TextValues_3, int32 CallFunc_GetShadowQuality_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_4, TArray<class FText>& CallFunc_GetTextArray_Qualities_TextValues_4, int32 CallFunc_GetShadingQuality_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_5, int32 CallFunc_GetPostProcessingQuality_ReturnValue, TArray<class FText>& CallFunc_GetTextArray_Qualities_TextValues_5, TArray<class FText>& CallFunc_GetTextArray_Qualities_TextValues_6, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_6, int32 CallFunc_GetFoliageQuality_ReturnValue, TArray<class FText>& CallFunc_GetTextArray_Qualities_TextValues_7, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_7, int32 CallFunc_GetVisualEffectQuality_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_8, TArray<class FText>& CallFunc_GetTextArray_Qualities_TextValues_8, int32 CallFunc_GetAntiAliasingQuality_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "InitializeWidgetGroup_Quality");

	Params::UWBP_Options_Video_C_InitializeWidgetGroup_Quality_Params Parms{};

	Parms.CallFunc_GetTextArray_Qualities_TextValues = CallFunc_GetTextArray_Qualities_TextValues;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetTextArray_Qualities_TextValues_1 = CallFunc_GetTextArray_Qualities_TextValues_1;
	Parms.CallFunc_GetGlobalIlluminationQuality_ReturnValue = CallFunc_GetGlobalIlluminationQuality_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_2 = CallFunc_GetNWXGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetViewDistanceQuality_ReturnValue = CallFunc_GetViewDistanceQuality_ReturnValue;
	Parms.CallFunc_GetTextureQuality_ReturnValue = CallFunc_GetTextureQuality_ReturnValue;
	Parms.CallFunc_GetTextArray_Qualities_TextValues_2 = CallFunc_GetTextArray_Qualities_TextValues_2;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_3 = CallFunc_GetNWXGameUserSettings_ReturnValue_3;
	Parms.CallFunc_GetTextArray_Qualities_TextValues_3 = CallFunc_GetTextArray_Qualities_TextValues_3;
	Parms.CallFunc_GetShadowQuality_ReturnValue = CallFunc_GetShadowQuality_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_4 = CallFunc_GetNWXGameUserSettings_ReturnValue_4;
	Parms.CallFunc_GetTextArray_Qualities_TextValues_4 = CallFunc_GetTextArray_Qualities_TextValues_4;
	Parms.CallFunc_GetShadingQuality_ReturnValue = CallFunc_GetShadingQuality_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_5 = CallFunc_GetNWXGameUserSettings_ReturnValue_5;
	Parms.CallFunc_GetPostProcessingQuality_ReturnValue = CallFunc_GetPostProcessingQuality_ReturnValue;
	Parms.CallFunc_GetTextArray_Qualities_TextValues_5 = CallFunc_GetTextArray_Qualities_TextValues_5;
	Parms.CallFunc_GetTextArray_Qualities_TextValues_6 = CallFunc_GetTextArray_Qualities_TextValues_6;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_6 = CallFunc_GetNWXGameUserSettings_ReturnValue_6;
	Parms.CallFunc_GetFoliageQuality_ReturnValue = CallFunc_GetFoliageQuality_ReturnValue;
	Parms.CallFunc_GetTextArray_Qualities_TextValues_7 = CallFunc_GetTextArray_Qualities_TextValues_7;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_7 = CallFunc_GetNWXGameUserSettings_ReturnValue_7;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_8 = CallFunc_GetNWXGameUserSettings_ReturnValue_8;
	Parms.CallFunc_GetTextArray_Qualities_TextValues_8 = CallFunc_GetTextArray_Qualities_TextValues_8;
	Parms.CallFunc_GetAntiAliasingQuality_ReturnValue = CallFunc_GetAntiAliasingQuality_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.GetFullscreenSetting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWindowMode             NewParam                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Fullscreen_Option                                                (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSelectedOption_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::GetFullscreenSetting(enum class EWindowMode* NewParam, const class FString& Fullscreen_Option, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_GetSelectedOption_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "GetFullscreenSetting");

	Params::UWBP_Options_Video_C_GetFullscreenSetting_Params Parms{};

	Parms.Fullscreen_Option = Fullscreen_Option;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetSelectedOption_ReturnValue = CallFunc_GetSelectedOption_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function WBP_Options_Video.WBP_Options_Video_C.UpdateSettingValues
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_2                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDLSSFrameGeneration_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_3                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetTextArray_QualitiesXESS_TextValues                   (ReferenceParm)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_4                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetTextArray_QualitiesFSR_TextValues                    (ReferenceParm)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_5                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetTextArray_QualitiesDLSS_TextValues                   (ReferenceParm)
// TArray<class FText>                CallFunc_GetTextArray_QualitiesTSR_TextValues                    (ReferenceParm)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_6                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetArachnophobiaModeEnabled_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_7                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNonGameplayThirdPersonEnabled_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStartMenu_IsStartMenu                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_8                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEnableCameraShake_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_9                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGameplayThirdPersonEnabled_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_10                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDLSSSharpness_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_11                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_12                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMotionBlurEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_13                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFrameRateLimit_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_14                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTPFieldOfView_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_15                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFieldOfView_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_NewValue_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSliderValue_NewValue_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::UpdateSettingValues(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_2, bool CallFunc_GetDLSSFrameGeneration_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue, TArray<class FText>& CallFunc_GetTextArray_QualitiesXESS_TextValues, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_4, TArray<class FText>& CallFunc_GetTextArray_QualitiesFSR_TextValues, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_5, TArray<class FText>& CallFunc_GetTextArray_QualitiesDLSS_TextValues, TArray<class FText>& CallFunc_GetTextArray_QualitiesTSR_TextValues, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_6, bool CallFunc_GetArachnophobiaModeEnabled_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_7, bool CallFunc_GetNonGameplayThirdPersonEnabled_ReturnValue, bool CallFunc_GetIsStartMenu_IsStartMenu, enum class ESlateVisibility K2Node_Select_Default, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_8, bool CallFunc_GetEnableCameraShake_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_9, bool CallFunc_GetGameplayThirdPersonEnabled_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_10, float CallFunc_GetDLSSSharpness_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_11, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_12, bool CallFunc_GetMotionBlurEnabled_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_13, float CallFunc_GetFrameRateLimit_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_14, float CallFunc_GetTPFieldOfView_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_15, float CallFunc_GetFieldOfView_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetSliderValue_NewValue_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetSliderValue_NewValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "UpdateSettingValues");

	Params::UWBP_Options_Video_C_UpdateSettingValues_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_2 = CallFunc_GetNWXGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetDLSSFrameGeneration_ReturnValue = CallFunc_GetDLSSFrameGeneration_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_3 = CallFunc_GetNWXGameUserSettings_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetTextArray_QualitiesXESS_TextValues = CallFunc_GetTextArray_QualitiesXESS_TextValues;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_4 = CallFunc_GetNWXGameUserSettings_ReturnValue_4;
	Parms.CallFunc_GetTextArray_QualitiesFSR_TextValues = CallFunc_GetTextArray_QualitiesFSR_TextValues;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_5 = CallFunc_GetNWXGameUserSettings_ReturnValue_5;
	Parms.CallFunc_GetTextArray_QualitiesDLSS_TextValues = CallFunc_GetTextArray_QualitiesDLSS_TextValues;
	Parms.CallFunc_GetTextArray_QualitiesTSR_TextValues = CallFunc_GetTextArray_QualitiesTSR_TextValues;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_6 = CallFunc_GetNWXGameUserSettings_ReturnValue_6;
	Parms.CallFunc_GetArachnophobiaModeEnabled_ReturnValue = CallFunc_GetArachnophobiaModeEnabled_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_7 = CallFunc_GetNWXGameUserSettings_ReturnValue_7;
	Parms.CallFunc_GetNonGameplayThirdPersonEnabled_ReturnValue = CallFunc_GetNonGameplayThirdPersonEnabled_ReturnValue;
	Parms.CallFunc_GetIsStartMenu_IsStartMenu = CallFunc_GetIsStartMenu_IsStartMenu;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_8 = CallFunc_GetNWXGameUserSettings_ReturnValue_8;
	Parms.CallFunc_GetEnableCameraShake_ReturnValue = CallFunc_GetEnableCameraShake_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_9 = CallFunc_GetNWXGameUserSettings_ReturnValue_9;
	Parms.CallFunc_GetGameplayThirdPersonEnabled_ReturnValue = CallFunc_GetGameplayThirdPersonEnabled_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_10 = CallFunc_GetNWXGameUserSettings_ReturnValue_10;
	Parms.CallFunc_GetDLSSSharpness_ReturnValue = CallFunc_GetDLSSSharpness_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_11 = CallFunc_GetNWXGameUserSettings_ReturnValue_11;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_12 = CallFunc_GetNWXGameUserSettings_ReturnValue_12;
	Parms.CallFunc_GetMotionBlurEnabled_ReturnValue = CallFunc_GetMotionBlurEnabled_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_13 = CallFunc_GetNWXGameUserSettings_ReturnValue_13;
	Parms.CallFunc_GetFrameRateLimit_ReturnValue = CallFunc_GetFrameRateLimit_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_14 = CallFunc_GetNWXGameUserSettings_ReturnValue_14;
	Parms.CallFunc_GetTPFieldOfView_ReturnValue = CallFunc_GetTPFieldOfView_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_15 = CallFunc_GetNWXGameUserSettings_ReturnValue_15;
	Parms.CallFunc_GetFieldOfView_ReturnValue = CallFunc_GetFieldOfView_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetSliderValue_NewValue_ImplicitCast = CallFunc_SetSliderValue_NewValue_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_SetSliderValue_NewValue_ImplicitCast_1 = CallFunc_SetSliderValue_NewValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Options_Video.WBP_Options_Video_C.Get Screen Resolution
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                   Screen_Resolution                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::Get_Screen_Resolution(struct FIntPoint* Screen_Resolution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "Get Screen Resolution");

	Params::UWBP_Options_Video_C_Get_Screen_Resolution_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Screen_Resolution != nullptr)
		*Screen_Resolution = std::move(Parms.Screen_Resolution);

}


// Function WBP_Options_Video.WBP_Options_Video_C.BndEvt__WBP_Options_Video_Button_SetToDefaults_K2Node_ComponentBoundEvent_5_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Options_Video_C::BndEvt__WBP_Options_Video_Button_SetToDefaults_K2Node_ComponentBoundEvent_5_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "BndEvt__WBP_Options_Video_Button_SetToDefaults_K2Node_ComponentBoundEvent_5_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Options_Video.WBP_Options_Video_C.BndEvt__WBP_Options_Video_Button_SetPresetToAuto_K2Node_ComponentBoundEvent_6_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Options_Video_C::BndEvt__WBP_Options_Video_Button_SetPresetToAuto_K2Node_ComponentBoundEvent_6_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "BndEvt__WBP_Options_Video_Button_SetPresetToAuto_K2Node_ComponentBoundEvent_6_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Options_Video.WBP_Options_Video_C.BndEvt__WBP_Options_Video_WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Options_Video_C::BndEvt__WBP_Options_Video_WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "BndEvt__WBP_Options_Video_WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Options_Video.WBP_Options_Video_C.OnGammaAccepted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Options_Video_C::OnGammaAccepted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "OnGammaAccepted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Options_Video.WBP_Options_Video_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Options_Video_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Options_Video.WBP_Options_Video_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Options_Video_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Options_Video.WBP_Options_Video_C.ExecuteUbergraph_WBP_Options_Video
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_Should_Third_Person_Options_be_Visible_Visibility       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_Should_Third_Person_Options_be_Visible_Visibility_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_Should_Third_Person_Options_be_Visible_Visibility_2     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXLocalPlayer*             CallFunc_GetOwningLocalPlayer_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Options_GammaScreen_C*  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Options_Video_C::ExecuteUbergraph_WBP_Options_Video(int32 EntryPoint, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, enum class ESlateVisibility CallFunc_Should_Third_Person_Options_be_Visible_Visibility, enum class ESlateVisibility CallFunc_Should_Third_Person_Options_be_Visible_Visibility_1, enum class ESlateVisibility CallFunc_Should_Third_Person_Options_be_Visible_Visibility_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXLocalPlayer* CallFunc_GetOwningLocalPlayer_ReturnValue, class UWBP_Options_GammaScreen_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Options_Video_C", "ExecuteUbergraph_WBP_Options_Video");

	Params::UWBP_Options_Video_C_ExecuteUbergraph_WBP_Options_Video_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_Should_Third_Person_Options_be_Visible_Visibility = CallFunc_Should_Third_Person_Options_be_Visible_Visibility;
	Parms.CallFunc_Should_Third_Person_Options_be_Visible_Visibility_1 = CallFunc_Should_Third_Person_Options_be_Visible_Visibility_1;
	Parms.CallFunc_Should_Third_Person_Options_be_Visible_Visibility_2 = CallFunc_Should_Third_Person_Options_be_Visible_Visibility_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningLocalPlayer_ReturnValue = CallFunc_GetOwningLocalPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


