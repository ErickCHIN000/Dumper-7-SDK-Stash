#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuide_Tags.UMG_FieldGuide_Tags_C
// (None)

class UClass* UUMG_FieldGuide_Tags_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuide_Tags_C");

	return Clss;
}


// UMG_FieldGuide_Tags_C UMG_FieldGuide_Tags.Default__UMG_FieldGuide_Tags_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuide_Tags_C* UUMG_FieldGuide_Tags_C::GetDefaultObj()
{
	static class UUMG_FieldGuide_Tags_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuide_Tags_C*>(UUMG_FieldGuide_Tags_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuide_Tags.UMG_FieldGuide_Tags_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_Tags_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Tags_C", "PreConstruct");

	Params::UUMG_FieldGuide_Tags_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Tags.UMG_FieldGuide_Tags_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_Tags_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Tags_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_Tags.UMG_FieldGuide_Tags_C.ExecuteUbergraph_UMG_FieldGuide_Tags
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_Tags_C::ExecuteUbergraph_UMG_FieldGuide_Tags(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Tags_C", "ExecuteUbergraph_UMG_FieldGuide_Tags");

	Params::UUMG_FieldGuide_Tags_C_ExecuteUbergraph_UMG_FieldGuide_Tags_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


