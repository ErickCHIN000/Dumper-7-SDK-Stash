#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TutorialComponent.BP_TutorialComponent_C
// (None)

class UClass* UBP_TutorialComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TutorialComponent_C");

	return Clss;
}


// BP_TutorialComponent_C BP_TutorialComponent.Default__BP_TutorialComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TutorialComponent_C* UBP_TutorialComponent_C::GetDefaultObj()
{
	static class UBP_TutorialComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TutorialComponent_C*>(UBP_TutorialComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TutorialComponent.BP_TutorialComponent_C.SetPlayerController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SelfIsValid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      Controller                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerStateSystems_C>K2Node_DynamicCast_AsBPI_Player_State_Systems                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      CallFunc_GetBPPlayerController_Player_Controller                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_TutorialComponent_C::SetPlayerController(bool* SelfIsValid, class ABP_PlayerController_C** Controller, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBPI_PlayerStateSystems_C> K2Node_DynamicCast_AsBPI_Player_State_Systems, bool K2Node_DynamicCast_bSuccess, class ABP_PlayerController_C* CallFunc_GetBPPlayerController_Player_Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TutorialComponent_C", "SetPlayerController");

	Params::UBP_TutorialComponent_C_SetPlayerController_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_State_Systems = K2Node_DynamicCast_AsBPI_Player_State_Systems;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBPPlayerController_Player_Controller = CallFunc_GetBPPlayerController_Player_Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (SelfIsValid != nullptr)
		*SelfIsValid = Parms.SelfIsValid;

	if (Controller != nullptr)
		*Controller = Parms.Controller;

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_TutorialComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TutorialComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.Client_TutorialModalPopup
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTutorialDataAsset_SlideDeck*Tutorial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_TutorialComponent_C::Client_TutorialModalPopup(class UTutorialDataAsset_SlideDeck* Tutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TutorialComponent_C", "Client_TutorialModalPopup");

	Params::UBP_TutorialComponent_C_Client_TutorialModalPopup_Params Parms{};

	Parms.Tutorial = Tutorial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.Client_TutorialNonModalPopup
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTutorialDataAsset*          Tutorial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_TutorialComponent_C::Client_TutorialNonModalPopup(class UTutorialDataAsset* Tutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TutorialComponent_C", "Client_TutorialNonModalPopup");

	Params::UBP_TutorialComponent_C_Client_TutorialNonModalPopup_Params Parms{};

	Parms.Tutorial = Tutorial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.ExecuteUbergraph_BP_TutorialComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTutorialDataAsset_SlideDeck*K2Node_CustomEvent_Tutorial_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTutorialDataAsset*          K2Node_CustomEvent_Tutorial                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue_1                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShowTutorials_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetShowTutorials_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetPlayerController_SelfIsValid                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      CallFunc_SetPlayerController_Controller                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_TutorialComponent_C::ExecuteUbergraph_BP_TutorialComponent(int32 EntryPoint, class UTutorialDataAsset_SlideDeck* K2Node_CustomEvent_Tutorial_1, class UTutorialDataAsset* K2Node_CustomEvent_Tutorial, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetShowTutorials_ReturnValue, bool CallFunc_GetShowTutorials_ReturnValue_1, bool CallFunc_SetPlayerController_SelfIsValid, class ABP_PlayerController_C* CallFunc_SetPlayerController_Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TutorialComponent_C", "ExecuteUbergraph_BP_TutorialComponent");

	Params::UBP_TutorialComponent_C_ExecuteUbergraph_BP_TutorialComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Tutorial_1 = K2Node_CustomEvent_Tutorial_1;
	Parms.K2Node_CustomEvent_Tutorial = K2Node_CustomEvent_Tutorial;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue_1 = CallFunc_GetNWXGameUserSettings_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetShowTutorials_ReturnValue = CallFunc_GetShowTutorials_ReturnValue;
	Parms.CallFunc_GetShowTutorials_ReturnValue_1 = CallFunc_GetShowTutorials_ReturnValue_1;
	Parms.CallFunc_SetPlayerController_SelfIsValid = CallFunc_SetPlayerController_SelfIsValid;
	Parms.CallFunc_SetPlayerController_Controller = CallFunc_SetPlayerController_Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.RequestTutorialModal__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTutorialDataAsset_SlideDeck*TutorialData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_TutorialComponent_C::RequestTutorialModal__DelegateSignature(class UTutorialDataAsset_SlideDeck* TutorialData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TutorialComponent_C", "RequestTutorialModal__DelegateSignature");

	Params::UBP_TutorialComponent_C_RequestTutorialModal__DelegateSignature_Params Parms{};

	Parms.TutorialData = TutorialData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TutorialComponent.BP_TutorialComponent_C.RequestTutorialNonModal__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTutorialDataAsset*          Tutorial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_TutorialComponent_C::RequestTutorialNonModal__DelegateSignature(class UTutorialDataAsset* Tutorial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TutorialComponent_C", "RequestTutorialNonModal__DelegateSignature");

	Params::UBP_TutorialComponent_C_RequestTutorialNonModal__DelegateSignature_Params Parms{};

	Parms.Tutorial = Tutorial;

	UObject::ProcessEvent(Func, &Parms);

}

}


