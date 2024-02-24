#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_debug_SaveMenu.wid_debug_SaveMenu_C
// (None)

class UClass* UWid_debug_SaveMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_debug_SaveMenu_C");

	return Clss;
}


// wid_debug_SaveMenu_C wid_debug_SaveMenu.Default__wid_debug_SaveMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_debug_SaveMenu_C* UWid_debug_SaveMenu_C::GetDefaultObj()
{
	static class UWid_debug_SaveMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_debug_SaveMenu_C*>(UWid_debug_SaveMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_debug_SaveMenu.wid_debug_SaveMenu_C.GetCategoryName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        Name                                                             (Parm, OutParm)

void UWid_debug_SaveMenu_C::GetCategoryName(class FText* Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_SaveMenu_C", "GetCategoryName");

	Params::UWid_debug_SaveMenu_C_GetCategoryName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function wid_debug_SaveMenu.wid_debug_SaveMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_debug_SaveMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_SaveMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_debug_SaveMenu.wid_debug_SaveMenu_C.Accept
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_debug_SaveMenu_C::Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_SaveMenu_C", "Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_debug_SaveMenu.wid_debug_SaveMenu_C.Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_debug_SaveMenu_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_SaveMenu_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_debug_SaveMenu.wid_debug_SaveMenu_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_debug_SaveMenu_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_SaveMenu_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_debug_SaveMenu.wid_debug_SaveMenu_C.ExecuteUbergraph_wid_debug_SaveMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadGame_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadGameFromFile_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGameToFile_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SaveGame_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentIndex_CurrentIndex                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_debug_SaveMenu_C::ExecuteUbergraph_wid_debug_SaveMenu(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_LoadGame_ReturnValue, bool CallFunc_LoadGameFromFile_ReturnValue, bool CallFunc_SaveGameToFile_ReturnValue, bool CallFunc_SaveGame_ReturnValue, int32 CallFunc_GetCurrentIndex_CurrentIndex, bool K2Node_SwitchInteger_CmpSuccess, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_debug_SaveMenu_C", "ExecuteUbergraph_wid_debug_SaveMenu");

	Params::UWid_debug_SaveMenu_C_ExecuteUbergraph_wid_debug_SaveMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_LoadGame_ReturnValue = CallFunc_LoadGame_ReturnValue;
	Parms.CallFunc_LoadGameFromFile_ReturnValue = CallFunc_LoadGameFromFile_ReturnValue;
	Parms.CallFunc_SaveGameToFile_ReturnValue = CallFunc_SaveGameToFile_ReturnValue;
	Parms.CallFunc_SaveGame_ReturnValue = CallFunc_SaveGame_ReturnValue;
	Parms.CallFunc_GetCurrentIndex_CurrentIndex = CallFunc_GetCurrentIndex_CurrentIndex;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue = CallFunc_DeleteGameInSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


