#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DarkTitlebarShort.UMG_DarkTitlebarShort_C
// (None)

class UClass* UUMG_DarkTitlebarShort_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DarkTitlebarShort_C");

	return Clss;
}


// UMG_DarkTitlebarShort_C UMG_DarkTitlebarShort.Default__UMG_DarkTitlebarShort_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DarkTitlebarShort_C* UUMG_DarkTitlebarShort_C::GetDefaultObj()
{
	static class UUMG_DarkTitlebarShort_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DarkTitlebarShort_C*>(UUMG_DarkTitlebarShort_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DarkTitlebarShort.UMG_DarkTitlebarShort_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DarkTitlebarShort_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DarkTitlebarShort_C", "PreConstruct");

	Params::UUMG_DarkTitlebarShort_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DarkTitlebarShort.UMG_DarkTitlebarShort_C.ExecuteUbergraph_UMG_DarkTitlebarShort
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DarkTitlebarShort_C::ExecuteUbergraph_UMG_DarkTitlebarShort(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DarkTitlebarShort_C", "ExecuteUbergraph_UMG_DarkTitlebarShort");

	Params::UUMG_DarkTitlebarShort_C_ExecuteUbergraph_UMG_DarkTitlebarShort_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


