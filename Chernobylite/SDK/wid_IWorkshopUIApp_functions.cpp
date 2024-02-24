#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass wid_IWorkshopUIApp.wid_IWorkshopUIApp_C
// (None)

class UClass* IWid_IWorkshopUIApp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_IWorkshopUIApp_C");

	return Clss;
}


// wid_IWorkshopUIApp_C wid_IWorkshopUIApp.Default__wid_IWorkshopUIApp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IWid_IWorkshopUIApp_C* IWid_IWorkshopUIApp_C::GetDefaultObj()
{
	static class IWid_IWorkshopUIApp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IWid_IWorkshopUIApp_C*>(IWid_IWorkshopUIApp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.KeyboardMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IWorkshopUIApp_C::KeyboardMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "KeyboardMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.AnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IWorkshopUIApp_C::AnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "AnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.AlternativeAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IWorkshopUIApp_C::AlternativeAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "AlternativeAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.LeftRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IWid_IWorkshopUIApp_C::LeftRight(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "LeftRight");

	Params::IWid_IWorkshopUIApp_C_LeftRight_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.UpDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IWid_IWorkshopUIApp_C::UpDown(float Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "UpDown");

	Params::IWid_IWorkshopUIApp_C_UpDown_Params Parms{};

	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IWid_IWorkshopUIApp_C::Show(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "Show");

	Params::IWid_IWorkshopUIApp_C_Show_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.MoveOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IWorkshopUIApp_C::MoveOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "MoveOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.Back
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IWorkshopUIApp_C::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.Toggle2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IWorkshopUIApp_C::Toggle2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "Toggle2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.Toggle1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IWorkshopUIApp_C::Toggle1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "Toggle1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.Accept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IWorkshopUIApp_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IWorkshopUIApp_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IWorkshopUIApp_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IWorkshopUIApp_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IWorkshopUIApp_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IWorkshopUIApp_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IWorkshopUIApp.wid_IWorkshopUIApp_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IWorkshopUIApp_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IWorkshopUIApp_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}

}


