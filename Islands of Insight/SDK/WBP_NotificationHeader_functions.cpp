#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NotificationHeader.WBP_NotificationHeader_C
// (None)

class UClass* UWBP_NotificationHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NotificationHeader_C");

	return Clss;
}


// WBP_NotificationHeader_C WBP_NotificationHeader.Default__WBP_NotificationHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NotificationHeader_C* UWBP_NotificationHeader_C::GetDefaultObj()
{
	static class UWBP_NotificationHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NotificationHeader_C*>(UWBP_NotificationHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_NotificationHeader.WBP_NotificationHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_NotificationHeader_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NotificationHeader_C", "PreConstruct");

	Params::UWBP_NotificationHeader_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_NotificationHeader.WBP_NotificationHeader_C.ExecuteUbergraph_WBP_NotificationHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_NotificationHeader_C::ExecuteUbergraph_WBP_NotificationHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_NotificationHeader_C", "ExecuteUbergraph_WBP_NotificationHeader");

	Params::UWBP_NotificationHeader_C_ExecuteUbergraph_WBP_NotificationHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


