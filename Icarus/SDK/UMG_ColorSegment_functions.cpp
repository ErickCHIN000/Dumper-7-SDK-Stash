#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ColorSegment.UMG_ColorSegment_C
// (None)

class UClass* UUMG_ColorSegment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ColorSegment_C");

	return Clss;
}


// UMG_ColorSegment_C UMG_ColorSegment.Default__UMG_ColorSegment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ColorSegment_C* UUMG_ColorSegment_C::GetDefaultObj()
{
	static class UUMG_ColorSegment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ColorSegment_C*>(UUMG_ColorSegment_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ColorSegment.UMG_ColorSegment_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ColorSegment_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ColorSegment_C", "PreConstruct");

	Params::UUMG_ColorSegment_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ColorSegment.UMG_ColorSegment_C.ExecuteUbergraph_UMG_ColorSegment
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ColorSegment_C::ExecuteUbergraph_UMG_ColorSegment(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ColorSegment_C", "ExecuteUbergraph_UMG_ColorSegment");

	Params::UUMG_ColorSegment_C_ExecuteUbergraph_UMG_ColorSegment_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


