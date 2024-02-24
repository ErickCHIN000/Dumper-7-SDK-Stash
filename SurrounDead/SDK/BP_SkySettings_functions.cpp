#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkySettings.BP_SkySettings_C
// (Actor)

class UClass* ABP_SkySettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkySettings_C");

	return Clss;
}


// BP_SkySettings_C BP_SkySettings.Default__BP_SkySettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkySettings_C* ABP_SkySettings_C::GetDefaultObj()
{
	static class ABP_SkySettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkySettings_C*>(ABP_SkySettings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkySettings.BP_SkySettings_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SkySettings_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkySettings_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkySettings.BP_SkySettings_C.Saturation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkySettings_C::Saturation(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkySettings_C", "Saturation");

	Params::ABP_SkySettings_C_Saturation_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkySettings.BP_SkySettings_C.NightBright
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkySettings_C::NightBright(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkySettings_C", "NightBright");

	Params::ABP_SkySettings_C_NightBright_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkySettings.BP_SkySettings_C.NightLength
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkySettings_C::NightLength(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkySettings_C", "NightLength");

	Params::ABP_SkySettings_C_NightLength_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkySettings.BP_SkySettings_C.DayLength
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkySettings_C::DayLength(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkySettings_C", "DayLength");

	Params::ABP_SkySettings_C_DayLength_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkySettings.BP_SkySettings_C.ExecuteUbergraph_BP_SkySettings
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Sky_C*        CallFunc_GetUDS_UDS                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Sky_C*        CallFunc_GetUDS_UDS_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Sky_C*        CallFunc_GetUDS_UDS_2                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Sky_C*        CallFunc_GetUDS_UDS_3                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Saturation_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Night_Brightness_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Night_Length_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_Day_Length_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkySettings_C::ExecuteUbergraph_BP_SkySettings(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AUltra_Dynamic_Sky_C* CallFunc_GetUDS_UDS, float K2Node_CustomEvent_NewValue_3, class AUltra_Dynamic_Sky_C* CallFunc_GetUDS_UDS_1, class AUltra_Dynamic_Sky_C* CallFunc_GetUDS_UDS_2, float K2Node_CustomEvent_NewValue_2, class AUltra_Dynamic_Sky_C* CallFunc_GetUDS_UDS_3, float K2Node_CustomEvent_NewValue_1, float K2Node_CustomEvent_NewValue, double K2Node_VariableSet_Saturation_ImplicitCast, double K2Node_VariableSet_Night_Brightness_ImplicitCast, double K2Node_VariableSet_Night_Length_ImplicitCast, double K2Node_VariableSet_Day_Length_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkySettings_C", "ExecuteUbergraph_BP_SkySettings");

	Params::ABP_SkySettings_C_ExecuteUbergraph_BP_SkySettings_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetUDS_UDS = CallFunc_GetUDS_UDS;
	Parms.K2Node_CustomEvent_NewValue_3 = K2Node_CustomEvent_NewValue_3;
	Parms.CallFunc_GetUDS_UDS_1 = CallFunc_GetUDS_UDS_1;
	Parms.CallFunc_GetUDS_UDS_2 = CallFunc_GetUDS_UDS_2;
	Parms.K2Node_CustomEvent_NewValue_2 = K2Node_CustomEvent_NewValue_2;
	Parms.CallFunc_GetUDS_UDS_3 = CallFunc_GetUDS_UDS_3;
	Parms.K2Node_CustomEvent_NewValue_1 = K2Node_CustomEvent_NewValue_1;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.K2Node_VariableSet_Saturation_ImplicitCast = K2Node_VariableSet_Saturation_ImplicitCast;
	Parms.K2Node_VariableSet_Night_Brightness_ImplicitCast = K2Node_VariableSet_Night_Brightness_ImplicitCast;
	Parms.K2Node_VariableSet_Night_Length_ImplicitCast = K2Node_VariableSet_Night_Length_ImplicitCast;
	Parms.K2Node_VariableSet_Day_Length_ImplicitCast = K2Node_VariableSet_Day_Length_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


