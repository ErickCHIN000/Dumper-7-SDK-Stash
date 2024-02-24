#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MPGameMode.BP_MPGameMode_C
// (Actor)

class UClass* ABP_MPGameMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MPGameMode_C");

	return Clss;
}


// BP_MPGameMode_C BP_MPGameMode.Default__BP_MPGameMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MPGameMode_C* ABP_MPGameMode_C::GetDefaultObj()
{
	static class ABP_MPGameMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MPGameMode_C*>(ABP_MPGameMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MPGameMode.BP_MPGameMode_C.ResetStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MPGameMode_C::ResetStats(class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPGameMode_C", "ResetStats");

	Params::ABP_MPGameMode_C_ResetStats_Params Parms{};

	Parms.CallFunc_CastToController_Controller = CallFunc_CastToController_Controller;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MPGameMode.BP_MPGameMode_C.AutoSaveGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_DateToString_AutoSave_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MPGameMode_C::AutoSaveGame(bool CallFunc_GetBoolCVar_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, const class FString& CallFunc_DateToString_AutoSave_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, const class FString& CallFunc_Concat_StrStr_ReturnValue, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPGameMode_C", "AutoSaveGame");

	Params::ABP_MPGameMode_C_AutoSaveGame_Params Parms{};

	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_DateToString_AutoSave_ReturnValue = CallFunc_DateToString_AutoSave_ReturnValue;
	Parms.CallFunc_CastToCharacter_Character = CallFunc_CastToCharacter_Character;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_CastToController_Controller = CallFunc_CastToController_Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MPGameMode.BP_MPGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MPGameMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPGameMode_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPGameMode.BP_MPGameMode_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MPGameMode_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPGameMode_C", "ReceiveEndPlay");

	Params::ABP_MPGameMode_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MPGameMode.BP_MPGameMode_C.Event_BindDaysSurvived
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPGameMode_C::Event_BindDaysSurvived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPGameMode_C", "Event_BindDaysSurvived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPGameMode.BP_MPGameMode_C.EventBindMidnight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPGameMode_C::EventBindMidnight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPGameMode_C", "EventBindMidnight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPGameMode.BP_MPGameMode_C.Event_AutoSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPGameMode_C::Event_AutoSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPGameMode_C", "Event_AutoSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPGameMode.BP_MPGameMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MPGameMode_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPGameMode_C", "ReceiveTick");

	Params::ABP_MPGameMode_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MPGameMode.BP_MPGameMode_C.EventSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MPGameMode_C::EventSave(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPGameMode_C", "EventSave");

	Params::ABP_MPGameMode_C_EventSave_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MPGameMode.BP_MPGameMode_C.ExecuteUbergraph_BP_MPGameMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Sky_C*        CallFunc_GetUDS_UDS                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHUD_Game_C*                 CallFunc_GetGameHUD_HUD                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_GetStartTimeStamp_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDiscordRichPresence        K2Node_MakeStruct_DiscordRichPresence                            (None)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDiscordRpc*                 CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MPGameMode_C::ExecuteUbergraph_BP_MPGameMode(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AUltra_Dynamic_Sky_C* CallFunc_GetUDS_UDS, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class AHUD_Game_C* CallFunc_GetGameHUD_HUD, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, int64 CallFunc_GetStartTimeStamp_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDiscordRichPresence& K2Node_MakeStruct_DiscordRichPresence, float K2Node_Event_DeltaSeconds, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, class UDiscordRpc* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPGameMode_C", "ExecuteUbergraph_BP_MPGameMode");

	Params::ABP_MPGameMode_C_ExecuteUbergraph_BP_MPGameMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetUDS_UDS = CallFunc_GetUDS_UDS;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGameHUD_HUD = CallFunc_GetGameHUD_HUD;
	Parms.CallFunc_CastToController_Controller = CallFunc_CastToController_Controller;
	Parms.CallFunc_GetStartTimeStamp_ReturnValue = CallFunc_GetStartTimeStamp_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_DiscordRichPresence = K2Node_MakeStruct_DiscordRichPresence;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CastToCharacter_Character = CallFunc_CastToCharacter_Character;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


