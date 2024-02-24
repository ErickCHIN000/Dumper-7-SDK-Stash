#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_debug_EventSystem.wid_debug_EventSystem_C
// (None)

class UClass* UWid_debug_EventSystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_debug_EventSystem_C");

	return Clss;
}


// wid_debug_EventSystem_C wid_debug_EventSystem.Default__wid_debug_EventSystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_debug_EventSystem_C* UWid_debug_EventSystem_C::GetDefaultObj()
{
	static class UWid_debug_EventSystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_debug_EventSystem_C*>(UWid_debug_EventSystem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_debug_EventSystem.wid_debug_EventSystem_C.GetCategoryName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Name                                                             (Parm, OutParm)

void UWid_debug_EventSystem_C::GetCategoryName(class FText* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_EventSystem_C", "GetCategoryName");

	Params::UWid_debug_EventSystem_C_GetCategoryName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function wid_debug_EventSystem.wid_debug_EventSystem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_debug_EventSystem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_EventSystem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_debug_EventSystem.wid_debug_EventSystem_C.Accept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_debug_EventSystem_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_EventSystem_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_debug_EventSystem.wid_debug_EventSystem_C.Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_debug_EventSystem_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_EventSystem_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_debug_EventSystem.wid_debug_EventSystem_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_debug_EventSystem_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_EventSystem_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_debug_EventSystem.wid_debug_EventSystem_C.ExecuteUbergraph_wid_debug_EventSystem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentIndex_CurrentIndex                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_debug_EventSystem_C::ExecuteUbergraph_wid_debug_EventSystem(int32 EntryPoint, int32 CallFunc_GetCurrentIndex_CurrentIndex, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_EventSystem_C", "ExecuteUbergraph_wid_debug_EventSystem");

	Params::UWid_debug_EventSystem_C_ExecuteUbergraph_wid_debug_EventSystem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentIndex_CurrentIndex = CallFunc_GetCurrentIndex_CurrentIndex;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


