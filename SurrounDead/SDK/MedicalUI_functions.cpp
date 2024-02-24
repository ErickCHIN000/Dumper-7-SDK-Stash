#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MedicalUI.MedicalUI_C
// (None)

class UClass* UMedicalUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MedicalUI_C");

	return Clss;
}


// MedicalUI_C MedicalUI.Default__MedicalUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMedicalUI_C* UMedicalUI_C::GetDefaultObj()
{
	static class UMedicalUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMedicalUI_C*>(UMedicalUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MedicalUI.MedicalUI_C.SetupUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMedicalUI_C::SetupUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalUI_C", "SetupUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MedicalUI.MedicalUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMedicalUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MedicalUI.MedicalUI_C.ExecuteUbergraph_MedicalUI
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMedicalUI_C::ExecuteUbergraph_MedicalUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MedicalUI_C", "ExecuteUbergraph_MedicalUI");

	Params::UMedicalUI_C_ExecuteUbergraph_MedicalUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


