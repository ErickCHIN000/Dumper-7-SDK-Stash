#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CompassComponent.BP_CompassComponent_C
// (None)

class UClass* UBP_CompassComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CompassComponent_C");

	return Clss;
}


// BP_CompassComponent_C BP_CompassComponent.Default__BP_CompassComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CompassComponent_C* UBP_CompassComponent_C::GetDefaultObj()
{
	static class UBP_CompassComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CompassComponent_C*>(UBP_CompassComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CompassComponent.BP_CompassComponent_C.ShowCompass
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CompassComponent_C::ShowCompass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompassComponent_C", "ShowCompass");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CompassComponent.BP_CompassComponent_C.HideCompass
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_CompassComponent_C::HideCompass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompassComponent_C", "HideCompass");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CompassComponent.BP_CompassComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_CompassComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompassComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CompassComponent.BP_CompassComponent_C.ExecuteUbergraph_BP_CompassComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompassComponent_C::ExecuteUbergraph_BP_CompassComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompassComponent_C", "ExecuteUbergraph_BP_CompassComponent");

	Params::UBP_CompassComponent_C_ExecuteUbergraph_BP_CompassComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


