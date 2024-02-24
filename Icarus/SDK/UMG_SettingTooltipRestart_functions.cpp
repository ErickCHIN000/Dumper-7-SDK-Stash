#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SettingTooltipRestart.UMG_SettingTooltipRestart_C
// (None)

class UClass* UUMG_SettingTooltipRestart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SettingTooltipRestart_C");

	return Clss;
}


// UMG_SettingTooltipRestart_C UMG_SettingTooltipRestart.Default__UMG_SettingTooltipRestart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SettingTooltipRestart_C* UUMG_SettingTooltipRestart_C::GetDefaultObj()
{
	static class UUMG_SettingTooltipRestart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SettingTooltipRestart_C*>(UUMG_SettingTooltipRestart_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_SettingTooltipRestart.UMG_SettingTooltipRestart_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_SettingTooltipRestart_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingTooltipRestart_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SettingTooltipRestart.UMG_SettingTooltipRestart_C.ExecuteUbergraph_UMG_SettingTooltipRestart
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_SettingTooltipRestartTooltip_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SettingTooltipRestart_C::ExecuteUbergraph_UMG_SettingTooltipRestart(int32 EntryPoint, class UUMG_SettingTooltipRestartTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SettingTooltipRestart_C", "ExecuteUbergraph_UMG_SettingTooltipRestart");

	Params::UUMG_SettingTooltipRestart_C_ExecuteUbergraph_UMG_SettingTooltipRestart_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


