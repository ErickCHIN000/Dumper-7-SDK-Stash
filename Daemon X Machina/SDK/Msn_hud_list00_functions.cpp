#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Msn_hud_list00.Msn_hud_list00_C
// (None)

class UClass* UMsn_hud_list00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_hud_list00_C");

	return Clss;
}


// Msn_hud_list00_C Msn_hud_list00.Default__Msn_hud_list00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_hud_list00_C* UMsn_hud_list00_C::GetDefaultObj()
{
	static class UMsn_hud_list00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_hud_list00_C*>(UMsn_hud_list00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Msn_hud_list00.Msn_hud_list00_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMsn_hud_list00_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Msn_hud_list00_C", "PreConstruct");

	Params::UMsn_hud_list00_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Msn_hud_list00.Msn_hud_list00_C.ExecuteUbergraph_Msn_hud_list00
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMsn_hud_list00_C::ExecuteUbergraph_Msn_hud_list00(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Msn_hud_list00_C", "ExecuteUbergraph_Msn_hud_list00");

	Params::UMsn_hud_list00_C_ExecuteUbergraph_Msn_hud_list00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


