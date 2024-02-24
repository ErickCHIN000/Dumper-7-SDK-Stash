#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CreditsLine_v3.CreditsLine_v3_C
// (None)

class UClass* UCreditsLine_v3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreditsLine_v3_C");

	return Clss;
}


// CreditsLine_v3_C CreditsLine_v3.Default__CreditsLine_v3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreditsLine_v3_C* UCreditsLine_v3_C::GetDefaultObj()
{
	static class UCreditsLine_v3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreditsLine_v3_C*>(UCreditsLine_v3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreditsLine_v3.CreditsLine_v3_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCreditsLine_v3_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsLine_v3_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreditsLine_v3.CreditsLine_v3_C.OnSynchronizeProperties
// (Event, Public, BlueprintEvent)
// Parameters:

void UCreditsLine_v3_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsLine_v3_C", "OnSynchronizeProperties");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreditsLine_v3.CreditsLine_v3_C.ExecuteUbergraph_CreditsLine_v3
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreditsLine_v3_C::ExecuteUbergraph_CreditsLine_v3(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsLine_v3_C", "ExecuteUbergraph_CreditsLine_v3");

	Params::UCreditsLine_v3_C_ExecuteUbergraph_CreditsLine_v3_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


