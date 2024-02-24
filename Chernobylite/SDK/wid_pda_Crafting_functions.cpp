#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_Crafting.wid_pda_Crafting_C
// (None)

class UClass* UWid_pda_Crafting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_Crafting_C");

	return Clss;
}


// wid_pda_Crafting_C wid_pda_Crafting.Default__wid_pda_Crafting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_Crafting_C* UWid_pda_Crafting_C::GetDefaultObj()
{
	static class UWid_pda_Crafting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_Crafting_C*>(UWid_pda_Crafting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_Crafting.wid_pda_Crafting_C.InputLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::InputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "InputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.InputUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::InputUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "InputUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.InputDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::InputDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "InputDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.InputFaceDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::InputFaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "InputFaceDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.InputFaceRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::InputFaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "InputFaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.InputFaceLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::InputFaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "InputFaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.InputFaceUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::InputFaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "InputFaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.AppClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::AppClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "AppClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.AppOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::AppOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "AppOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.DPadUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::DPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "DPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.DPadRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::DPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "DPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.DPadDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::DPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "DPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.DPadLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::DPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "DPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.InputRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::InputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "InputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.InputFaceDownReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::InputFaceDownReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "InputFaceDownReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.InputZoomUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::InputZoomUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "InputZoomUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.InputZoomDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Crafting_C::InputZoomDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "InputZoomDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Crafting.wid_pda_Crafting_C.ExecuteUbergraph_wid_pda_Crafting
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CloseInventory_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_Crafting_C::ExecuteUbergraph_wid_pda_Crafting(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_CloseInventory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Crafting_C", "ExecuteUbergraph_wid_pda_Crafting");

	Params::UWid_pda_Crafting_C_ExecuteUbergraph_wid_pda_Crafting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_CloseInventory_ReturnValue = CallFunc_CloseInventory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


