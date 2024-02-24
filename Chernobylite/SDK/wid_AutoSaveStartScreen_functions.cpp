#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_AutoSaveStartScreen.wid_AutoSaveStartScreen_C
// (None)

class UClass* UWid_AutoSaveStartScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_AutoSaveStartScreen_C");

	return Clss;
}


// wid_AutoSaveStartScreen_C wid_AutoSaveStartScreen.Default__wid_AutoSaveStartScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_AutoSaveStartScreen_C* UWid_AutoSaveStartScreen_C::GetDefaultObj()
{
	static class UWid_AutoSaveStartScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_AutoSaveStartScreen_C*>(UWid_AutoSaveStartScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_AutoSaveStartScreen.wid_AutoSaveStartScreen_C.Input
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AutoSaveStartScreen_C::Input(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AutoSaveStartScreen_C", "Input");

	Params::UWid_AutoSaveStartScreen_C_Input_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AutoSaveStartScreen.wid_AutoSaveStartScreen_C.Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AutoSaveStartScreen_C::Start(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AutoSaveStartScreen_C", "Start");

	Params::UWid_AutoSaveStartScreen_C_Start_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_AutoSaveStartScreen.wid_AutoSaveStartScreen_C.Completed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_AutoSaveStartScreen_C::Completed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AutoSaveStartScreen_C", "Completed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AutoSaveStartScreen.wid_AutoSaveStartScreen_C.Done
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_AutoSaveStartScreen_C::Done()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AutoSaveStartScreen_C", "Done");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_AutoSaveStartScreen.wid_AutoSaveStartScreen_C.ExecuteUbergraph_wid_AutoSaveStartScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_AutoSaveStartScreen_C::ExecuteUbergraph_wid_AutoSaveStartScreen(int32 EntryPoint, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_AutoSaveStartScreen_C", "ExecuteUbergraph_wid_AutoSaveStartScreen");

	Params::UWid_AutoSaveStartScreen_C_ExecuteUbergraph_wid_AutoSaveStartScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


