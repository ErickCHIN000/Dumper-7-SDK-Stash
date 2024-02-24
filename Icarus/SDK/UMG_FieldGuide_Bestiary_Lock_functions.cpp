#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuide_Bestiary_Lock.UMG_FieldGuide_Bestiary_Lock_C
// (None)

class UClass* UUMG_FieldGuide_Bestiary_Lock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuide_Bestiary_Lock_C");

	return Clss;
}


// UMG_FieldGuide_Bestiary_Lock_C UMG_FieldGuide_Bestiary_Lock.Default__UMG_FieldGuide_Bestiary_Lock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuide_Bestiary_Lock_C* UUMG_FieldGuide_Bestiary_Lock_C::GetDefaultObj()
{
	static class UUMG_FieldGuide_Bestiary_Lock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuide_Bestiary_Lock_C*>(UUMG_FieldGuide_Bestiary_Lock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuide_Bestiary_Lock.UMG_FieldGuide_Bestiary_Lock_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_Bestiary_Lock_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Lock_C", "PreConstruct");

	Params::UUMG_FieldGuide_Bestiary_Lock_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Bestiary_Lock.UMG_FieldGuide_Bestiary_Lock_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_Bestiary_Lock_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Lock_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_Bestiary_Lock.UMG_FieldGuide_Bestiary_Lock_C.ExecuteUbergraph_UMG_FieldGuide_Bestiary_Lock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_FieldGuide_Bestiary_Lock_C::ExecuteUbergraph_UMG_FieldGuide_Bestiary_Lock(int32 EntryPoint, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_Event_IsDesignTime, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Lock_C", "ExecuteUbergraph_UMG_FieldGuide_Bestiary_Lock");

	Params::UUMG_FieldGuide_Bestiary_Lock_C_ExecuteUbergraph_UMG_FieldGuide_Bestiary_Lock_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


