#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass wid_IInventoryGridApp.wid_IInventoryGridApp_C
// (None)

class UClass* IWid_IInventoryGridApp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_IInventoryGridApp_C");

	return Clss;
}


// wid_IInventoryGridApp_C wid_IInventoryGridApp.Default__wid_IInventoryGridApp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IWid_IInventoryGridApp_C* IWid_IInventoryGridApp_C::GetDefaultObj()
{
	static class IWid_IInventoryGridApp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IWid_IInventoryGridApp_C*>(IWid_IInventoryGridApp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_IInventoryGridApp.wid_IInventoryGridApp_C.FaceUpReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryGridApp_C::FaceUpReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryGridApp_C", "FaceUpReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryGridApp.wid_IInventoryGridApp_C.ReleaseButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryGridApp_C::ReleaseButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryGridApp_C", "ReleaseButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryGridApp.wid_IInventoryGridApp_C.SelectItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Idx                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IWid_IInventoryGridApp_C::SelectItem(const struct FVector2D& Idx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryGridApp_C", "SelectItem");

	Params::IWid_IInventoryGridApp_C_SelectItem_Params Parms{};

	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_IInventoryGridApp.wid_IInventoryGridApp_C.RightStick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryGridApp_C::RightStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryGridApp_C", "RightStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryGridApp.wid_IInventoryGridApp_C.r2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryGridApp_C::R2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryGridApp_C", "r2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryGridApp.wid_IInventoryGridApp_C.L2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryGridApp_C::L2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryGridApp_C", "L2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryGridApp.wid_IInventoryGridApp_C.FaceLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryGridApp_C::FaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryGridApp_C", "FaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryGridApp.wid_IInventoryGridApp_C.FaceDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryGridApp_C::FaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryGridApp_C", "FaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryGridApp.wid_IInventoryGridApp_C.FaceRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryGridApp_C::FaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryGridApp_C", "FaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryGridApp.wid_IInventoryGridApp_C.FaceUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryGridApp_C::FaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryGridApp_C", "FaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryGridApp.wid_IInventoryGridApp_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryGridApp_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryGridApp_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryGridApp.wid_IInventoryGridApp_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryGridApp_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryGridApp_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryGridApp.wid_IInventoryGridApp_C.Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryGridApp_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryGridApp_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryGridApp.wid_IInventoryGridApp_C.Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryGridApp_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryGridApp_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryGridApp.wid_IInventoryGridApp_C.Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryGridApp_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryGridApp_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryGridApp.wid_IInventoryGridApp_C.Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryGridApp_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryGridApp_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}

}


