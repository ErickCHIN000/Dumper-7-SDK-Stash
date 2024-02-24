#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_debug_IMenuEntry.wid_debug_IMenuEntry_C
// (None)

class UClass* UWid_debug_IMenuEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_debug_IMenuEntry_C");

	return Clss;
}


// wid_debug_IMenuEntry_C wid_debug_IMenuEntry.Default__wid_debug_IMenuEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_debug_IMenuEntry_C* UWid_debug_IMenuEntry_C::GetDefaultObj()
{
	static class UWid_debug_IMenuEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_debug_IMenuEntry_C*>(UWid_debug_IMenuEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_debug_IMenuEntry.wid_debug_IMenuEntry_C.GetCategoryName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Name                                                             (Parm, OutParm)

void UWid_debug_IMenuEntry_C::GetCategoryName(class FText* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_IMenuEntry_C", "GetCategoryName");

	Params::UWid_debug_IMenuEntry_C_GetCategoryName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function wid_debug_IMenuEntry.wid_debug_IMenuEntry_C.Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_debug_IMenuEntry_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_IMenuEntry_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_debug_IMenuEntry.wid_debug_IMenuEntry_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_debug_IMenuEntry_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_IMenuEntry_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_debug_IMenuEntry.wid_debug_IMenuEntry_C.Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_debug_IMenuEntry_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_IMenuEntry_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_debug_IMenuEntry.wid_debug_IMenuEntry_C.Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_debug_IMenuEntry_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_IMenuEntry_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_debug_IMenuEntry.wid_debug_IMenuEntry_C.Accept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_debug_IMenuEntry_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_IMenuEntry_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_debug_IMenuEntry.wid_debug_IMenuEntry_C.Back
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_debug_IMenuEntry_C::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_IMenuEntry_C", "Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_debug_IMenuEntry.wid_debug_IMenuEntry_C.ExecuteUbergraph_wid_debug_IMenuEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_debug_IMenuEntry_C::ExecuteUbergraph_wid_debug_IMenuEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_IMenuEntry_C", "ExecuteUbergraph_wid_debug_IMenuEntry");

	Params::UWid_debug_IMenuEntry_C_ExecuteUbergraph_wid_debug_IMenuEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


