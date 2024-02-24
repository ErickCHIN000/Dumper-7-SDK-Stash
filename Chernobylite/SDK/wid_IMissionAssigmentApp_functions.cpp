#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass wid_IMissionAssigmentApp.wid_IMissionAssigmentApp_C
// (None)

class UClass* IWid_IMissionAssigmentApp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_IMissionAssigmentApp_C");

	return Clss;
}


// wid_IMissionAssigmentApp_C wid_IMissionAssigmentApp.Default__wid_IMissionAssigmentApp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IWid_IMissionAssigmentApp_C* IWid_IMissionAssigmentApp_C::GetDefaultObj()
{
	static class IWid_IMissionAssigmentApp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IWid_IMissionAssigmentApp_C*>(IWid_IMissionAssigmentApp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_IMissionAssigmentApp.wid_IMissionAssigmentApp_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IMissionAssigmentApp_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IMissionAssigmentApp_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IMissionAssigmentApp.wid_IMissionAssigmentApp_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IMissionAssigmentApp_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IMissionAssigmentApp_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IMissionAssigmentApp.wid_IMissionAssigmentApp_C.Toggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IMissionAssigmentApp_C::Toggle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IMissionAssigmentApp_C", "Toggle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IMissionAssigmentApp.wid_IMissionAssigmentApp_C.Accept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IMissionAssigmentApp_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IMissionAssigmentApp_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IMissionAssigmentApp.wid_IMissionAssigmentApp_C.Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IMissionAssigmentApp_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IMissionAssigmentApp_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IMissionAssigmentApp.wid_IMissionAssigmentApp_C.Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IMissionAssigmentApp_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IMissionAssigmentApp_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}

}


