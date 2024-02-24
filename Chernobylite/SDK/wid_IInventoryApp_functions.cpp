#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass wid_IInventoryApp.wid_IInventoryApp_C
// (None)

class UClass* IWid_IInventoryApp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_IInventoryApp_C");

	return Clss;
}


// wid_IInventoryApp_C wid_IInventoryApp.Default__wid_IInventoryApp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IWid_IInventoryApp_C* IWid_IInventoryApp_C::GetDefaultObj()
{
	static class IWid_IInventoryApp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IWid_IInventoryApp_C*>(IWid_IInventoryApp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_IInventoryApp.wid_IInventoryApp_C.FaceUpReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::FaceUpReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "FaceUpReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.Back
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::Back()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "Back");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.Assign
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::Assign()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "Assign");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.QuickUse8
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::QuickUse8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "QuickUse8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.QuickUse7
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::QuickUse7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "QuickUse7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.QuickUse6
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::QuickUse6()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "QuickUse6");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.QuickUse5
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::QuickUse5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "QuickUse5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.ReleaseButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::ReleaseButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "ReleaseButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.SelectItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Idx                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IWid_IInventoryApp_C::SelectItem(const struct FVector2D& Idx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "SelectItem");

	Params::IWid_IInventoryApp_C_SelectItem_Params Parms{};

	Parms.Idx = Idx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.QuickUse4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::QuickUse4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "QuickUse4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.QuickUse3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::QuickUse3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "QuickUse3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.QuickUse2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::QuickUse2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "QuickUse2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.QuickUse1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::QuickUse1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "QuickUse1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.RightStick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::RightStick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "RightStick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.r2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::R2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "r2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.L2
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::L2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "L2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.FaceLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::FaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "FaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.FaceDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::FaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "FaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.FaceRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::FaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "FaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.FaceUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::FaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "FaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.DPadRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::DPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "DPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.DPadLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::DPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "DPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.DPadDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::DPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "DPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.DPadUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::DPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "DPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_IInventoryApp.wid_IInventoryApp_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IWid_IInventoryApp_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_IInventoryApp_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}

}


