#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Fishing_FishHealth.WBP_Fishing_FishHealth_C
// (None)

class UClass* UWBP_Fishing_FishHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Fishing_FishHealth_C");

	return Clss;
}


// WBP_Fishing_FishHealth_C WBP_Fishing_FishHealth.Default__WBP_Fishing_FishHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Fishing_FishHealth_C* UWBP_Fishing_FishHealth_C::GetDefaultObj()
{
	static class UWBP_Fishing_FishHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Fishing_FishHealth_C*>(UWBP_Fishing_FishHealth_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Fishing_FishHealth.WBP_Fishing_FishHealth_C.SetIsReeling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsReeling                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Fishing_FishHealth_C::SetIsReeling(bool IsReeling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Fishing_FishHealth_C", "SetIsReeling");

	Params::UWBP_Fishing_FishHealth_C_SetIsReeling_Params Parms{};

	Parms.IsReeling = IsReeling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Fishing_FishHealth.WBP_Fishing_FishHealth_C.InitializeFishBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFish                       Fish                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Round64_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (None)
// class ABP_FishingBobber_C*         K2Node_DynamicCast_AsBP_Fishing_Bobber                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Fishing_FishHealth_C::InitializeFishBar(const struct FFish& Fish, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int64 CallFunc_Round64_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, class ABP_FishingBobber_C* K2Node_DynamicCast_AsBP_Fishing_Bobber, bool K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Fishing_FishHealth_C", "InitializeFishBar");

	Params::UWBP_Fishing_FishHealth_C_InitializeFishBar_Params Parms{};

	Parms.Fish = Fish;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Round64_ReturnValue = CallFunc_Round64_ReturnValue;
	Parms.CallFunc_Conv_Int64ToText_ReturnValue = CallFunc_Conv_Int64ToText_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Fishing_Bobber = K2Node_DynamicCast_AsBP_Fishing_Bobber;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Fishing_FishHealth.WBP_Fishing_FishHealth_C.UpdateProgress
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Fishing_FishHealth_C::UpdateProgress(double Progress, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Fishing_FishHealth_C", "UpdateProgress");

	Params::UWBP_Fishing_FishHealth_C_UpdateProgress_Params Parms{};

	Parms.Progress = Progress;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Fishing_FishHealth.WBP_Fishing_FishHealth_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Fishing_FishHealth_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Fishing_FishHealth_C", "Tick");

	Params::UWBP_Fishing_FishHealth_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Fishing_FishHealth.WBP_Fishing_FishHealth_C.ExecuteUbergraph_WBP_Fishing_FishHealth
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Fishing_FishHealth_C::ExecuteUbergraph_WBP_Fishing_FishHealth(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Fishing_FishHealth_C", "ExecuteUbergraph_WBP_Fishing_FishHealth");

	Params::UWBP_Fishing_FishHealth_C_ExecuteUbergraph_WBP_Fishing_FishHealth_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


