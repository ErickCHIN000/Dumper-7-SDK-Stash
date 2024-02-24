#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerDeathNew.PlayerDeathNew_C
// (None)

class UClass* UPlayerDeathNew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerDeathNew_C");

	return Clss;
}


// PlayerDeathNew_C PlayerDeathNew.Default__PlayerDeathNew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerDeathNew_C* UPlayerDeathNew_C::GetDefaultObj()
{
	static class UPlayerDeathNew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerDeathNew_C*>(UPlayerDeathNew_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerDeathNew.PlayerDeathNew_C.GetGameInfoInstance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         Output_Get                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerDeathNew_C::GetGameInfoInstance(class UGameInfoInstance_C** Output_Get, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerDeathNew_C", "GetGameInfoInstance");

	Params::UPlayerDeathNew_C_GetGameInfoInstance_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = Parms.Output_Get;

}


// Function PlayerDeathNew.PlayerDeathNew_C.DualSense_Death
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Local_Char                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ControllerAudio_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerDeathNew_C::DualSense_Death(class ACharacter* Local_Char, uint8 CallFunc_MakeLiteralByte_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerDeathNew_C", "DualSense_Death");

	Params::UPlayerDeathNew_C_DualSense_Death_Params Parms{};

	Parms.Local_Char = Local_Char;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerDeathNew.PlayerDeathNew_C.Get_AllHighScoresText_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UPlayerDeathNew_C::Get_AllHighScoresText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerDeathNew_C", "Get_AllHighScoresText_Text_0");

	Params::UPlayerDeathNew_C_Get_AllHighScoresText_Text_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PlayerDeathNew.PlayerDeathNew_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerDeathNew_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerDeathNew_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerDeathNew.PlayerDeathNew_C.BndEvt__Button_412_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPlayerDeathNew_C::BndEvt__Button_412_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerDeathNew_C", "BndEvt__Button_412_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerDeathNew.PlayerDeathNew_C.ContinueGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerDeathNew_C::ContinueGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerDeathNew_C", "ContinueGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerDeathNew.PlayerDeathNew_C.ContinueGameSkipIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerDeathNew_C::ContinueGameSkipIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerDeathNew_C", "ContinueGameSkipIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerDeathNew.PlayerDeathNew_C.ExecuteUbergraph_PlayerDeathNew
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeProgress  CallFunc_GetStormModeProgress_Progress                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInfoInstance_Output_Get                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerDeathNew_C::ExecuteUbergraph_PlayerDeathNew(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool CallFunc_NotEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC_1, bool K2Node_DynamicCast_bSuccess_2, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_3, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface_1, bool K2Node_DynamicCast_bSuccess_5, class UGameInfoInstance_C* CallFunc_GetGameInfoInstance_Output_Get, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_StormModeIsActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerDeathNew_C", "ExecuteUbergraph_PlayerDeathNew");

	Params::UPlayerDeathNew_C_ExecuteUbergraph_PlayerDeathNew_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStormModeProgress_Progress = CallFunc_GetStormModeProgress_Progress;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC_1 = K2Node_DynamicCast_AsGameplay_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface = K2Node_DynamicCast_AsLoading_Screen_Interface;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface_1 = K2Node_DynamicCast_AsLoading_Screen_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetGameInfoInstance_Output_Get = CallFunc_GetGameInfoInstance_Output_Get;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


