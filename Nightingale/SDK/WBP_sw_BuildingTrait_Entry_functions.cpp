#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_BuildingTrait_Entry.WBP_sw_BuildingTrait_Entry_C
// (None)

class UClass* UWBP_sw_BuildingTrait_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_BuildingTrait_Entry_C");

	return Clss;
}


// WBP_sw_BuildingTrait_Entry_C WBP_sw_BuildingTrait_Entry.Default__WBP_sw_BuildingTrait_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_BuildingTrait_Entry_C* UWBP_sw_BuildingTrait_Entry_C::GetDefaultObj()
{
	static class UWBP_sw_BuildingTrait_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_BuildingTrait_Entry_C*>(UWBP_sw_BuildingTrait_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_BuildingTrait_Entry.WBP_sw_BuildingTrait_Entry_C.Initialize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GenerateTraitPresentationText_ReturnValue               (None)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_BuildingTrait_Entry_C::Initialize(class FText CallFunc_GenerateTraitPresentationText_ReturnValue, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_BuildingTrait_Entry_C", "Initialize");

	Params::UWBP_sw_BuildingTrait_Entry_C_Initialize_Params Parms{};

	Parms.CallFunc_GenerateTraitPresentationText_ReturnValue = CallFunc_GenerateTraitPresentationText_ReturnValue;
	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_BuildingTrait_Entry.WBP_sw_BuildingTrait_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_BuildingTrait_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_BuildingTrait_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_BuildingTrait_Entry.WBP_sw_BuildingTrait_Entry_C.ExecuteUbergraph_WBP_sw_BuildingTrait_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_BuildingTrait_Entry_C::ExecuteUbergraph_WBP_sw_BuildingTrait_Entry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_BuildingTrait_Entry_C", "ExecuteUbergraph_WBP_sw_BuildingTrait_Entry");

	Params::UWBP_sw_BuildingTrait_Entry_C_ExecuteUbergraph_WBP_sw_BuildingTrait_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


