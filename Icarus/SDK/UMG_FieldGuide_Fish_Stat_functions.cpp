#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuide_Fish_Stat.UMG_FieldGuide_Fish_Stat_C
// (None)

class UClass* UUMG_FieldGuide_Fish_Stat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuide_Fish_Stat_C");

	return Clss;
}


// UMG_FieldGuide_Fish_Stat_C UMG_FieldGuide_Fish_Stat.Default__UMG_FieldGuide_Fish_Stat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuide_Fish_Stat_C* UUMG_FieldGuide_Fish_Stat_C::GetDefaultObj()
{
	static class UUMG_FieldGuide_Fish_Stat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuide_Fish_Stat_C*>(UUMG_FieldGuide_Fish_Stat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuide_Fish_Stat.UMG_FieldGuide_Fish_Stat_C.UpdateValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_FieldGuide_Fish_Stat_C::UpdateValue(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Fish_Stat_C", "UpdateValue");

	Params::UUMG_FieldGuide_Fish_Stat_C_UpdateValue_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Fish_Stat.UMG_FieldGuide_Fish_Stat_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_Fish_Stat_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Fish_Stat_C", "PreConstruct");

	Params::UUMG_FieldGuide_Fish_Stat_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Fish_Stat.UMG_FieldGuide_Fish_Stat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_Fish_Stat_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Fish_Stat_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_Fish_Stat.UMG_FieldGuide_Fish_Stat_C.ExecuteUbergraph_UMG_FieldGuide_Fish_Stat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_Fish_Stat_C::ExecuteUbergraph_UMG_FieldGuide_Fish_Stat(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Fish_Stat_C", "ExecuteUbergraph_UMG_FieldGuide_Fish_Stat");

	Params::UUMG_FieldGuide_Fish_Stat_C_ExecuteUbergraph_UMG_FieldGuide_Fish_Stat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


