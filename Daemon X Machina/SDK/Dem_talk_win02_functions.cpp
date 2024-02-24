#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Dem_talk_win02.Dem_talk_win02_C
// (None)

class UClass* UDem_talk_win02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dem_talk_win02_C");

	return Clss;
}


// Dem_talk_win02_C Dem_talk_win02.Default__Dem_talk_win02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDem_talk_win02_C* UDem_talk_win02_C::GetDefaultObj()
{
	static class UDem_talk_win02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDem_talk_win02_C*>(UDem_talk_win02_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Dem_talk_win02.Dem_talk_win02_C.Get_emblem_t00_ColorAndOpacity_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UDem_talk_win02_C::Get_emblem_t00_ColorAndOpacity_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dem_talk_win02_C", "Get_emblem_t00_ColorAndOpacity_0");

	Params::UDem_talk_win02_C_Get_emblem_t00_ColorAndOpacity_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


