#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_RadialAbilityBarWindow.WB_RadialAbilityBarWindow_C
// (None)

class UClass* UWB_RadialAbilityBarWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_RadialAbilityBarWindow_C");

	return Clss;
}


// WB_RadialAbilityBarWindow_C WB_RadialAbilityBarWindow.Default__WB_RadialAbilityBarWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_RadialAbilityBarWindow_C* UWB_RadialAbilityBarWindow_C::GetDefaultObj()
{
	static class UWB_RadialAbilityBarWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_RadialAbilityBarWindow_C*>(UWB_RadialAbilityBarWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_RadialAbilityBarWindow.WB_RadialAbilityBarWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_RadialAbilityBarWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_RadialAbilityBarWindow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_RadialAbilityBarWindow.WB_RadialAbilityBarWindow_C.ExecuteUbergraph_WB_RadialAbilityBarWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_RadialAbilityBarWindow_C::ExecuteUbergraph_WB_RadialAbilityBarWindow(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_RadialAbilityBarWindow_C", "ExecuteUbergraph_WB_RadialAbilityBarWindow");

	Params::UWB_RadialAbilityBarWindow_C_ExecuteUbergraph_WB_RadialAbilityBarWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


