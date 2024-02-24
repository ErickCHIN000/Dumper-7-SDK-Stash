#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass wid_IMissionSelectionApp.wid_IMissionSelectionApp_C
// (None)

class UClass* IWid_IMissionSelectionApp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_IMissionSelectionApp_C");

	return Clss;
}


// wid_IMissionSelectionApp_C wid_IMissionSelectionApp.Default__wid_IMissionSelectionApp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IWid_IMissionSelectionApp_C* IWid_IMissionSelectionApp_C::GetDefaultObj()
{
	static class IWid_IMissionSelectionApp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IWid_IMissionSelectionApp_C*>(IWid_IMissionSelectionApp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_IMissionSelectionApp.wid_IMissionSelectionApp_C.GetCurrentSelection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        EventID                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               Map                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IWid_IMissionSelectionApp_C::GetCurrentSelection(class FName* EventID, enum class EEventMap* Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IMissionSelectionApp_C", "GetCurrentSelection");

	Params::IWid_IMissionSelectionApp_C_GetCurrentSelection_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EventID != nullptr)
		*EventID = Parms.EventID;

	if (Map != nullptr)
		*Map = Parms.Map;

}


// Function wid_IMissionSelectionApp.wid_IMissionSelectionApp_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IMissionSelectionApp_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IMissionSelectionApp_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IMissionSelectionApp.wid_IMissionSelectionApp_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IMissionSelectionApp_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IMissionSelectionApp_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IMissionSelectionApp.wid_IMissionSelectionApp_C.Accept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IMissionSelectionApp_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IMissionSelectionApp_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IMissionSelectionApp.wid_IMissionSelectionApp_C.Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IMissionSelectionApp_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IMissionSelectionApp_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IMissionSelectionApp.wid_IMissionSelectionApp_C.Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IMissionSelectionApp_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IMissionSelectionApp_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IMissionSelectionApp.wid_IMissionSelectionApp_C.Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IMissionSelectionApp_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IMissionSelectionApp_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IMissionSelectionApp.wid_IMissionSelectionApp_C.Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IMissionSelectionApp_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IMissionSelectionApp_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}

}


