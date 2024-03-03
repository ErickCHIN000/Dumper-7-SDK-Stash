#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MyGameInstance.BP_MyGameInstance_C
// (None)

class UClass* UBP_MyGameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MyGameInstance_C");

	return Clss;
}


// BP_MyGameInstance_C BP_MyGameInstance.Default__BP_MyGameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MyGameInstance_C* UBP_MyGameInstance_C::GetDefaultObj()
{
	static class UBP_MyGameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MyGameInstance_C*>(UBP_MyGameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_C00D661349CA708A95145581FF251FE3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::OnFailure_C00D661349CA708A95145581FF251FE3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnFailure_C00D661349CA708A95145581FF251FE3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_C00D661349CA708A95145581FF251FE3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::OnSuccess_C00D661349CA708A95145581FF251FE3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnSuccess_C00D661349CA708A95145581FF251FE3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnFailure_B065C47F48B157C121B06CAFCED8C6AC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::OnFailure_B065C47F48B157C121B06CAFCED8C6AC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnFailure_B065C47F48B157C121B06CAFCED8C6AC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.OnSuccess_B065C47F48B157C121B06CAFCED8C6AC
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::OnSuccess_B065C47F48B157C121B06CAFCED8C6AC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "OnSuccess_B065C47F48B157C121B06CAFCED8C6AC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.StartGameTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::StartGameTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "StartGameTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.Timer_TimePlayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::Timer_TimePlayed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "Timer_TimePlayed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.StopGameTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_MyGameInstance_C::StopGameTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "StopGameTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.CreateServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ParentRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bUseLAN                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_MyGameInstance_C::CreateServer(class APlayerController* PlayerController, class UWidget* ParentRef, class FName LevelName, int32 MaxPlayer, bool bUseLAN)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "CreateServer");

	Params::UBP_MyGameInstance_C_CreateServer_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.ParentRef = ParentRef;
	Parms.LevelName = LevelName;
	Parms.MaxPlayer = MaxPlayer;
	Parms.bUseLAN = bUseLAN;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.LaunchSoloGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MySaveGame_C*            MyGameSave                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ParentRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MyGameInstance_C::LaunchSoloGame(class APlayerController* PlayerController, class UBP_MySaveGame_C* MyGameSave, class UWidget* ParentRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "LaunchSoloGame");

	Params::UBP_MyGameInstance_C_LaunchSoloGame_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.MyGameSave = MyGameSave;
	Parms.ParentRef = ParentRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.JoinServerIP
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ParentRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MyGameInstance_C::JoinServerIP(const class FString& Command, class APlayerController* PlayerController, class UWidget* ParentRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "JoinServerIP");

	Params::UBP_MyGameInstance_C_JoinServerIP_Params Parms{};

	Parms.Command = Command;
	Parms.PlayerController = PlayerController;
	Parms.ParentRef = ParentRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.ChangeDifficultyOnSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Difficulty            Difficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MyGameInstance_C::ChangeDifficultyOnSave(enum class E_Difficulty Difficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "ChangeDifficultyOnSave");

	Params::UBP_MyGameInstance_C_ChangeDifficultyOnSave_Params Parms{};

	Parms.Difficulty = Difficulty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.ShowLoadingScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_MyGameInstance_C::ShowLoadingScreen(class APlayerController* PlayerController, class FText Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "ShowLoadingScreen");

	Params::UBP_MyGameInstance_C_ShowLoadingScreen_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.JoinServerSession
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBlueprintSessionResult     Session                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ParentRef                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MyGameInstance_C::JoinServerSession(const struct FBlueprintSessionResult& Session, class APlayerController* PlayerController, class UWidget* ParentRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "JoinServerSession");

	Params::UBP_MyGameInstance_C_JoinServerSession_Params Parms{};

	Parms.Session = Session;
	Parms.PlayerController = PlayerController;
	Parms.ParentRef = ParentRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.ResetAfterErrorFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MyGameInstance_C::ResetAfterErrorFocus(class APlayerController* PlayerController, class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "ResetAfterErrorFocus");

	Params::UBP_MyGameInstance_C_ResetAfterErrorFocus_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MyGameInstance.BP_MyGameInstance_C.ExecuteUbergraph_BP_MyGameInstance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_PlayerController_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_ParentRef_3                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_LevelName                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MaxPlayer                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bUseLAN                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCreateSessionCallbackProxy* CallFunc_CreateSession_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           K2Node_CustomEvent_PlayerController_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MySaveGame_C*            K2Node_CustomEvent_MyGameSave                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_ParentRef_2                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_Command                                       (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_PlayerController_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_ParentRef_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_TimerExistsHandle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class E_Difficulty            K2Node_CustomEvent_Difficulty                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           K2Node_CustomEvent_PlayerController_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Message                                       (None)
// class UW_LoadingScreen_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBlueprintSessionResult     K2Node_CustomEvent_Session                                       (None)
// class APlayerController*           K2Node_CustomEvent_PlayerController_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_ParentRef                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJoinSessionCallbackProxy*   CallFunc_JoinSession_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class APlayerController*           K2Node_CustomEvent_PlayerController                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_MainMenu_C*               K2Node_DynamicCast_AsW_Main_Menu                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_GetMessageTips_Message                                  (None)

void UBP_MyGameInstance_C::ExecuteUbergraph_BP_MyGameInstance(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* K2Node_CustomEvent_PlayerController_5, class UWidget* K2Node_CustomEvent_ParentRef_3, class FName K2Node_CustomEvent_LevelName, int32 K2Node_CustomEvent_MaxPlayer, bool K2Node_CustomEvent_bUseLAN, class UCreateSessionCallbackProxy* CallFunc_CreateSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* K2Node_CustomEvent_PlayerController_4, class UBP_MySaveGame_C* K2Node_CustomEvent_MyGameSave, class UWidget* K2Node_CustomEvent_ParentRef_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const class FString& K2Node_CustomEvent_Command, class APlayerController* K2Node_CustomEvent_PlayerController_3, class UWidget* K2Node_CustomEvent_ParentRef_1, bool CallFunc_K2_TimerExistsHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class E_Difficulty K2Node_CustomEvent_Difficulty, bool CallFunc_IsValid_ReturnValue_6, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class APlayerController* K2Node_CustomEvent_PlayerController_2, class FText K2Node_CustomEvent_Message, class UW_LoadingScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, const struct FBlueprintSessionResult& K2Node_CustomEvent_Session, class APlayerController* K2Node_CustomEvent_PlayerController_1, class UWidget* K2Node_CustomEvent_ParentRef, class UJoinSessionCallbackProxy* CallFunc_JoinSession_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* K2Node_CustomEvent_PlayerController, class UWidget* K2Node_CustomEvent_Widget, class UW_MainMenu_C* K2Node_DynamicCast_AsW_Main_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FText CallFunc_GetMessageTips_Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MyGameInstance_C", "ExecuteUbergraph_BP_MyGameInstance");

	Params::UBP_MyGameInstance_C_ExecuteUbergraph_BP_MyGameInstance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_PlayerController_5 = K2Node_CustomEvent_PlayerController_5;
	Parms.K2Node_CustomEvent_ParentRef_3 = K2Node_CustomEvent_ParentRef_3;
	Parms.K2Node_CustomEvent_LevelName = K2Node_CustomEvent_LevelName;
	Parms.K2Node_CustomEvent_MaxPlayer = K2Node_CustomEvent_MaxPlayer;
	Parms.K2Node_CustomEvent_bUseLAN = K2Node_CustomEvent_bUseLAN;
	Parms.CallFunc_CreateSession_ReturnValue = CallFunc_CreateSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_PlayerController_4 = K2Node_CustomEvent_PlayerController_4;
	Parms.K2Node_CustomEvent_MyGameSave = K2Node_CustomEvent_MyGameSave;
	Parms.K2Node_CustomEvent_ParentRef_2 = K2Node_CustomEvent_ParentRef_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_Command = K2Node_CustomEvent_Command;
	Parms.K2Node_CustomEvent_PlayerController_3 = K2Node_CustomEvent_PlayerController_3;
	Parms.K2Node_CustomEvent_ParentRef_1 = K2Node_CustomEvent_ParentRef_1;
	Parms.CallFunc_K2_TimerExistsHandle_ReturnValue = CallFunc_K2_TimerExistsHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Difficulty = K2Node_CustomEvent_Difficulty;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CustomEvent_PlayerController_2 = K2Node_CustomEvent_PlayerController_2;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_CustomEvent_Session = K2Node_CustomEvent_Session;
	Parms.K2Node_CustomEvent_PlayerController_1 = K2Node_CustomEvent_PlayerController_1;
	Parms.K2Node_CustomEvent_ParentRef = K2Node_CustomEvent_ParentRef;
	Parms.CallFunc_JoinSession_ReturnValue = CallFunc_JoinSession_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_DynamicCast_AsW_Main_Menu = K2Node_DynamicCast_AsW_Main_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetMessageTips_Message = CallFunc_GetMessageTips_Message;

	UObject::ProcessEvent(Func, &Parms);

}

}


