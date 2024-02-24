#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RenIcon.UMG_RenIcon_C
// (None)

class UClass* UUMG_RenIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RenIcon_C");

	return Clss;
}


// UMG_RenIcon_C UMG_RenIcon.Default__UMG_RenIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RenIcon_C* UUMG_RenIcon_C::GetDefaultObj()
{
	static class UUMG_RenIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RenIcon_C*>(UUMG_RenIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RenIcon.UMG_RenIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_RenIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RenIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RenIcon.UMG_RenIcon_C.ExecuteUbergraph_UMG_RenIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_RenIcon_C::ExecuteUbergraph_UMG_RenIcon(int32 EntryPoint, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RenIcon_C", "ExecuteUbergraph_UMG_RenIcon");

	Params::UUMG_RenIcon_C_ExecuteUbergraph_UMG_RenIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


