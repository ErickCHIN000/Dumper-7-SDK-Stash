#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalInstrumentHUDComponent.ArsenalInstrumentHUDComponent_C
// (None)

class UClass* UArsenalInstrumentHUDComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalInstrumentHUDComponent_C");

	return Clss;
}


// ArsenalInstrumentHUDComponent_C ArsenalInstrumentHUDComponent.Default__ArsenalInstrumentHUDComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalInstrumentHUDComponent_C* UArsenalInstrumentHUDComponent_C::GetDefaultObj()
{
	static class UArsenalInstrumentHUDComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalInstrumentHUDComponent_C*>(UArsenalInstrumentHUDComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalInstrumentHUDComponent.ArsenalInstrumentHUDComponent_C.TTLCanBeginPlay
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanBegin                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalInstrumentHUDComponent_C::TTLCanBeginPlay(bool* CanBegin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalInstrumentHUDComponent_C", "TTLCanBeginPlay");

	Params::UArsenalInstrumentHUDComponent_C_TTLCanBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanBegin != nullptr)
		*CanBegin = Parms.CanBegin;

}


// Function ArsenalInstrumentHUDComponent.ArsenalInstrumentHUDComponent_C.UpdateHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalInstrumentHUDComponent_C::UpdateHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalInstrumentHUDComponent_C", "UpdateHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalInstrumentHUDComponent.ArsenalInstrumentHUDComponent_C.TTLBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UArsenalInstrumentHUDComponent_C::TTLBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalInstrumentHUDComponent_C", "TTLBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalInstrumentHUDComponent.ArsenalInstrumentHUDComponent_C.ExecuteUbergraph_ArsenalInstrumentHUDComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalInstrumentHUDComponent_C::ExecuteUbergraph_ArsenalInstrumentHUDComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalInstrumentHUDComponent_C", "ExecuteUbergraph_ArsenalInstrumentHUDComponent");

	Params::UArsenalInstrumentHUDComponent_C_ExecuteUbergraph_ArsenalInstrumentHUDComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


