#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Label_text.wid_Label_text_C
// (None)

class UClass* UWid_Label_text_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Label_text_C");

	return Clss;
}


// wid_Label_text_C wid_Label_text.Default__wid_Label_text_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Label_text_C* UWid_Label_text_C::GetDefaultObj()
{
	static class UWid_Label_text_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Label_text_C*>(UWid_Label_text_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Label_text.wid_Label_text_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Label_text_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Label_text_C", "PreConstruct");

	Params::UWid_Label_text_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Label_text.wid_Label_text_C.ExecuteUbergraph_wid_Label_text
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Label_text_C::ExecuteUbergraph_wid_Label_text(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Label_text_C", "ExecuteUbergraph_wid_Label_text");

	Params::UWid_Label_text_C_ExecuteUbergraph_wid_Label_text_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


