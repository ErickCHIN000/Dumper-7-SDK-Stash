#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalPickUpPartsHUDComponent.ArsenalPickUpPartsHUDComponent_C
// (None)

class UClass* UArsenalPickUpPartsHUDComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalPickUpPartsHUDComponent_C");

	return Clss;
}


// ArsenalPickUpPartsHUDComponent_C ArsenalPickUpPartsHUDComponent.Default__ArsenalPickUpPartsHUDComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalPickUpPartsHUDComponent_C* UArsenalPickUpPartsHUDComponent_C::GetDefaultObj()
{
	static class UArsenalPickUpPartsHUDComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalPickUpPartsHUDComponent_C*>(UArsenalPickUpPartsHUDComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ArsenalPickUpPartsHUDComponent.ArsenalPickUpPartsHUDComponent_C.TTLCanBeginPlay
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanBegin                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArsenalPickUpPartsHUDComponent_C::TTLCanBeginPlay(bool* CanBegin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalPickUpPartsHUDComponent_C", "TTLCanBeginPlay");

	Params::UArsenalPickUpPartsHUDComponent_C_TTLCanBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanBegin != nullptr)
		*CanBegin = Parms.CanBegin;

}


// Function ArsenalPickUpPartsHUDComponent.ArsenalPickUpPartsHUDComponent_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalPickUpPartsHUDComponent_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalPickUpPartsHUDComponent_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalPickUpPartsHUDComponent.ArsenalPickUpPartsHUDComponent_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalPickUpPartsHUDComponent_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalPickUpPartsHUDComponent_C", "Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalPickUpPartsHUDComponent.ArsenalPickUpPartsHUDComponent_C.UpdatePickUpPartsHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalPickUpPartsHUDComponent_C::UpdatePickUpPartsHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalPickUpPartsHUDComponent_C", "UpdatePickUpPartsHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalPickUpPartsHUDComponent.ArsenalPickUpPartsHUDComponent_C.UpdateHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UArsenalPickUpPartsHUDComponent_C::UpdateHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalPickUpPartsHUDComponent_C", "UpdateHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalPickUpPartsHUDComponent.ArsenalPickUpPartsHUDComponent_C.TTLBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UArsenalPickUpPartsHUDComponent_C::TTLBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalPickUpPartsHUDComponent_C", "TTLBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ArsenalPickUpPartsHUDComponent.ArsenalPickUpPartsHUDComponent_C.ExecuteUbergraph_ArsenalPickUpPartsHUDComponent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArsenalPickUpPartsHUDComponent_C::ExecuteUbergraph_ArsenalPickUpPartsHUDComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ArsenalPickUpPartsHUDComponent_C", "ExecuteUbergraph_ArsenalPickUpPartsHUDComponent");

	Params::UArsenalPickUpPartsHUDComponent_C_ExecuteUbergraph_ArsenalPickUpPartsHUDComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


