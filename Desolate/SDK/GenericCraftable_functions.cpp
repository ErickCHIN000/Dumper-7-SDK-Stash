#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericCraftable.GenericCraftable_C
// (Actor)

class UClass* AGenericCraftable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericCraftable_C");

	return Clss;
}


// GenericCraftable_C GenericCraftable.Default__GenericCraftable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericCraftable_C* AGenericCraftable_C::GetDefaultObj()
{
	static class AGenericCraftable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericCraftable_C*>(AGenericCraftable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GenericCraftable.GenericCraftable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AGenericCraftable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericCraftable_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GenericCraftable.GenericCraftable_C.ExecuteUbergraph_GenericCraftable
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGenericCraftable_C::ExecuteUbergraph_GenericCraftable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GenericCraftable_C", "ExecuteUbergraph_GenericCraftable");

	Params::AGenericCraftable_C_ExecuteUbergraph_GenericCraftable_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


