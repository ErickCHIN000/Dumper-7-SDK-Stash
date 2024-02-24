#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RealmPower.WBP_RealmPower_C
// (None)

class UClass* UWBP_RealmPower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RealmPower_C");

	return Clss;
}


// WBP_RealmPower_C WBP_RealmPower.Default__WBP_RealmPower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RealmPower_C* UWBP_RealmPower_C::GetDefaultObj()
{
	static class UWBP_RealmPower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RealmPower_C*>(UWBP_RealmPower_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RealmPower.WBP_RealmPower_C.InitializeDesignerPreview
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RealmPower_C::InitializeDesignerPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmPower_C", "InitializeDesignerPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RealmPower.WBP_RealmPower_C.GetPowerText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Power                                                            (Parm, OutParm)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)

void UWBP_RealmPower_C::GetPowerText(class FText* Power, class FText CallFunc_GetText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmPower_C", "GetPowerText");

	Params::UWBP_RealmPower_C_GetPowerText_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Power != nullptr)
		*Power = Parms.Power;

}


// Function WBP_RealmPower.WBP_RealmPower_C.SetRealmPower
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RealmPower                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_RealmPower_C::SetRealmPower(int32 RealmPower, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmPower_C", "SetRealmPower");

	Params::UWBP_RealmPower_C_SetRealmPower_Params Parms{};

	Parms.RealmPower = RealmPower;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RealmPower.WBP_RealmPower_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RealmPower_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmPower_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RealmPower.WBP_RealmPower_C.ExecuteUbergraph_WBP_RealmPower
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentRealmPower_RealmPower                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RealmPower_C::ExecuteUbergraph_WBP_RealmPower(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, int32 CallFunc_GetCurrentRealmPower_RealmPower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RealmPower_C", "ExecuteUbergraph_WBP_RealmPower");

	Params::UWBP_RealmPower_C_ExecuteUbergraph_WBP_RealmPower_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetCurrentRealmPower_RealmPower = CallFunc_GetCurrentRealmPower_RealmPower;

	UObject::ProcessEvent(Func, &Parms);

}

}


