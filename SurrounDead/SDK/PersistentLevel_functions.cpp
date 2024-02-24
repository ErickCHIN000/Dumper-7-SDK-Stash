#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PersistentLevel.PersistentLevel_C
// (Actor)

class UClass* APersistentLevel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PersistentLevel_C");

	return Clss;
}


// PersistentLevel_C PersistentLevel.Default__PersistentLevel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APersistentLevel_C* APersistentLevel_C::GetDefaultObj()
{
	static class APersistentLevel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APersistentLevel_C*>(APersistentLevel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PersistentLevel.PersistentLevel_C.OnCompleted_FF53B9C745E13D1E2B32DCA47AA890F7
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APersistentLevel_C::OnCompleted_FF53B9C745E13D1E2B32DCA47AA890F7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentLevel_C", "OnCompleted_FF53B9C745E13D1E2B32DCA47AA890F7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PersistentLevel.PersistentLevel_C.Event_LoadLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APersistentLevel_C::Event_LoadLevel(class FName LevelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentLevel_C", "Event_LoadLevel");

	Params::APersistentLevel_C_Event_LoadLevel_Params Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PersistentLevel.PersistentLevel_C.Event_KeyDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APersistentLevel_C::Event_KeyDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentLevel_C", "Event_KeyDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PersistentLevel.PersistentLevel_C.Event_FadeFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APersistentLevel_C::Event_FadeFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentLevel_C", "Event_FadeFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PersistentLevel.PersistentLevel_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APersistentLevel_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentLevel_C", "CustomEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PersistentLevel.PersistentLevel_C.Event_RemoveLoadingScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APersistentLevel_C::Event_RemoveLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentLevel_C", "Event_RemoveLoadingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PersistentLevel.PersistentLevel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APersistentLevel_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentLevel_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PersistentLevel.PersistentLevel_C.ExecuteUbergraph_PersistentLevel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEMSAsyncWait*               CallFunc_AsyncWaitForOperation_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_LevelName                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USD_GameInstance_C*          CallFunc_GetGameInstance_Instance                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USD_GameInstance_C*          CallFunc_GetGameInstance_Instance_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USave_FirstLoadGame_C*       CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USD_GameInstance_C*          CallFunc_GetGameInstance_Instance_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USD_GameInstance_C*          CallFunc_GetGameInstance_Instance_3                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USave_FirstLoadGame_C*       CallFunc_GetCustomSave_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USD_GameInstance_C*          CallFunc_GetGameInstance_Instance_4                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULoadingScreenWidget_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void APersistentLevel_C::ExecuteUbergraph_PersistentLevel(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UEMSAsyncWait* CallFunc_AsyncWaitForOperation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_LevelName, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance_1, class USave_FirstLoadGame_C* CallFunc_GetCustomSave_ReturnValue, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance_2, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance_3, class USave_FirstLoadGame_C* CallFunc_GetCustomSave_ReturnValue_1, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ULoadingScreenWidget_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentLevel_C", "ExecuteUbergraph_PersistentLevel");

	Params::APersistentLevel_C_ExecuteUbergraph_PersistentLevel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AsyncWaitForOperation_ReturnValue = CallFunc_AsyncWaitForOperation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_LevelName = K2Node_CustomEvent_LevelName;
	Parms.CallFunc_GetGameInstance_Instance = CallFunc_GetGameInstance_Instance;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetGameInstance_Instance_1 = CallFunc_GetGameInstance_Instance_1;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;
	Parms.CallFunc_GetGameInstance_Instance_2 = CallFunc_GetGameInstance_Instance_2;
	Parms.CallFunc_GetGameInstance_Instance_3 = CallFunc_GetGameInstance_Instance_3;
	Parms.CallFunc_GetCustomSave_ReturnValue_1 = CallFunc_GetCustomSave_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_Instance_4 = CallFunc_GetGameInstance_Instance_4;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PersistentLevel.PersistentLevel_C.GetLevelName__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APersistentLevel_C::GetLevelName__DelegateSignature(class FName Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentLevel_C", "GetLevelName__DelegateSignature");

	Params::APersistentLevel_C_GetLevelName__DelegateSignature_Params Parms{};

	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PersistentLevel.PersistentLevel_C.RemoveLoadingScreen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void APersistentLevel_C::RemoveLoadingScreen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PersistentLevel_C", "RemoveLoadingScreen__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


