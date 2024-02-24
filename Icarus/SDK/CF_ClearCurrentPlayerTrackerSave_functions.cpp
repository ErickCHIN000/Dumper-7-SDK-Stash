#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_ClearCurrentPlayerTrackerSave.CF_ClearCurrentPlayerTrackerSave_C
// (None)

class UClass* UCF_ClearCurrentPlayerTrackerSave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_ClearCurrentPlayerTrackerSave_C");

	return Clss;
}


// CF_ClearCurrentPlayerTrackerSave_C CF_ClearCurrentPlayerTrackerSave.Default__CF_ClearCurrentPlayerTrackerSave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_ClearCurrentPlayerTrackerSave_C* UCF_ClearCurrentPlayerTrackerSave_C::GetDefaultObj()
{
	static class UCF_ClearCurrentPlayerTrackerSave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_ClearCurrentPlayerTrackerSave_C*>(UCF_ClearCurrentPlayerTrackerSave_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_ClearCurrentPlayerTrackerSave.CF_ClearCurrentPlayerTrackerSave_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_ClearCurrentPlayerTrackerSave_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_ClearCurrentPlayerTrackerSave_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_ClearCurrentPlayerTrackerSave.CF_ClearCurrentPlayerTrackerSave_C.DBNO_OptionAClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_ClearCurrentPlayerTrackerSave_C::DBNO_OptionAClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_ClearCurrentPlayerTrackerSave_C", "DBNO_OptionAClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_ClearCurrentPlayerTrackerSave.CF_ClearCurrentPlayerTrackerSave_C.DBNO_OptionBClicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_ClearCurrentPlayerTrackerSave_C::DBNO_OptionBClicked_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_ClearCurrentPlayerTrackerSave_C", "DBNO_OptionBClicked_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_ClearCurrentPlayerTrackerSave.CF_ClearCurrentPlayerTrackerSave_C.ExecuteUbergraph_CF_ClearCurrentPlayerTrackerSave
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// class UAccoladeSubsystem*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConnectedPlayer            CallFunc_FindInitialisedConnectedPlayerByPlayerCharacter_OutConnectedPlayer(None)
// bool                               CallFunc_FindInitialisedConnectedPlayerByPlayerCharacter_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DeleteAccoladeSave_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerTrackerSaveName_ReturnValue                    (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_ClearCurrentPlayerTrackerSave_C::ExecuteUbergraph_CF_ClearCurrentPlayerTrackerSave(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class UAccoladeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByPlayerCharacter_OutConnectedPlayer, bool CallFunc_FindInitialisedConnectedPlayerByPlayerCharacter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_DeleteAccoladeSave_ReturnValue, const class FString& CallFunc_GetPlayerTrackerSaveName_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_ClearCurrentPlayerTrackerSave_C", "ExecuteUbergraph_CF_ClearCurrentPlayerTrackerSave");

	Params::UCF_ClearCurrentPlayerTrackerSave_C_ExecuteUbergraph_CF_ClearCurrentPlayerTrackerSave_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_FindInitialisedConnectedPlayerByPlayerCharacter_OutConnectedPlayer = CallFunc_FindInitialisedConnectedPlayerByPlayerCharacter_OutConnectedPlayer;
	Parms.CallFunc_FindInitialisedConnectedPlayerByPlayerCharacter_ReturnValue = CallFunc_FindInitialisedConnectedPlayerByPlayerCharacter_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_DeleteAccoladeSave_ReturnValue = CallFunc_DeleteAccoladeSave_ReturnValue;
	Parms.CallFunc_GetPlayerTrackerSaveName_ReturnValue = CallFunc_GetPlayerTrackerSaveName_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue = CallFunc_DeleteGameInSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


