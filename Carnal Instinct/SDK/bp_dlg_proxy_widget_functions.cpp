#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_dlg_proxy_widget.bp_dlg_proxy_widget_C
// (Actor)

class UClass* Abp_dlg_proxy_widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_dlg_proxy_widget_C");

	return Clss;
}


// bp_dlg_proxy_widget_C bp_dlg_proxy_widget.Default__bp_dlg_proxy_widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_dlg_proxy_widget_C* Abp_dlg_proxy_widget_C::GetDefaultObj()
{
	static class Abp_dlg_proxy_widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_dlg_proxy_widget_C*>(Abp_dlg_proxy_widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_dlg_proxy_widget.bp_dlg_proxy_widget_C.update_widget_scale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_proxy_widget_C::Update_widget_scale(float CallFunc_MapRangeUnclamped_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_widget_C", "update_widget_scale");

	Params::Abp_dlg_proxy_widget_C_Update_widget_scale_Params Parms{};

	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_proxy_widget.bp_dlg_proxy_widget_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_dlg_proxy_widget_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_widget_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_dlg_proxy_widget.bp_dlg_proxy_widget_C.custom_proxy_tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta_seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_proxy_widget_C::Custom_proxy_tick(float Delta_seconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_widget_C", "custom_proxy_tick");

	Params::Abp_dlg_proxy_widget_C_Custom_proxy_tick_Params Parms{};

	Parms.Delta_seconds = Delta_seconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_dlg_proxy_widget.bp_dlg_proxy_widget_C.custom_proxy_init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_dlg_proxy_widget_C::Custom_proxy_init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_widget_C", "custom_proxy_init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_dlg_proxy_widget.bp_dlg_proxy_widget_C.ExecuteUbergraph_bp_dlg_proxy_widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_delta_seconds                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_dlg_proxy_widget_C::ExecuteUbergraph_bp_dlg_proxy_widget(int32 EntryPoint, float K2Node_Event_delta_seconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_widget_C", "ExecuteUbergraph_bp_dlg_proxy_widget");

	Params::Abp_dlg_proxy_widget_C_ExecuteUbergraph_bp_dlg_proxy_widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_delta_seconds = K2Node_Event_delta_seconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


