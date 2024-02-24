#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RevisionNumber.UMG_RevisionNumber_C
// (None)

class UClass* UUMG_RevisionNumber_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RevisionNumber_C");

	return Clss;
}


// UMG_RevisionNumber_C UMG_RevisionNumber.Default__UMG_RevisionNumber_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RevisionNumber_C* UUMG_RevisionNumber_C::GetDefaultObj()
{
	static class UUMG_RevisionNumber_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RevisionNumber_C*>(UUMG_RevisionNumber_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RevisionNumber.UMG_RevisionNumber_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_RevisionNumber_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RevisionNumber_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RevisionNumber.UMG_RevisionNumber_C.ExecuteUbergraph_UMG_RevisionNumber
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVersionSubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFormattedVersion_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_RevisionNumber_C::ExecuteUbergraph_UMG_RevisionNumber(int32 EntryPoint, class UVersionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_GetFormattedVersion_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RevisionNumber_C", "ExecuteUbergraph_UMG_RevisionNumber");

	Params::UUMG_RevisionNumber_C_ExecuteUbergraph_UMG_RevisionNumber_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetFormattedVersion_ReturnValue = CallFunc_GetFormattedVersion_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


