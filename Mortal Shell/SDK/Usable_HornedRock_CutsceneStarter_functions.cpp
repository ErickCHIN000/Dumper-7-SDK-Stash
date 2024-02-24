#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Usable_HornedRock_CutsceneStarter.Usable_HornedRock_CutsceneStarter_C
// (Actor)

class UClass* AUsable_HornedRock_CutsceneStarter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Usable_HornedRock_CutsceneStarter_C");

	return Clss;
}


// Usable_HornedRock_CutsceneStarter_C Usable_HornedRock_CutsceneStarter.Default__Usable_HornedRock_CutsceneStarter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUsable_HornedRock_CutsceneStarter_C* AUsable_HornedRock_CutsceneStarter_C::GetDefaultObj()
{
	static class AUsable_HornedRock_CutsceneStarter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUsable_HornedRock_CutsceneStarter_C*>(AUsable_HornedRock_CutsceneStarter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Usable_HornedRock_CutsceneStarter.Usable_HornedRock_CutsceneStarter_C.Usable_HornedRock_CutsceneStarter_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayGameState_C*        CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_HornedRock_CutsceneStarter_C::Usable_HornedRock_CutsceneStarter_AutoGenFunc(class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_HornedRock_CutsceneStarter_C", "Usable_HornedRock_CutsceneStarter_AutoGenFunc");

	Params::AUsable_HornedRock_CutsceneStarter_C_Usable_HornedRock_CutsceneStarter_AutoGenFunc_Params Parms{};

	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState = CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_HornedRock_CutsceneStarter.Usable_HornedRock_CutsceneStarter_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_HornedRock_CutsceneStarter_C::OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_HornedRock_CutsceneStarter_C", "OnActorUsed");

	Params::AUsable_HornedRock_CutsceneStarter_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Usable_HornedRock_CutsceneStarter.Usable_HornedRock_CutsceneStarter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AUsable_HornedRock_CutsceneStarter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_HornedRock_CutsceneStarter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_HornedRock_CutsceneStarter.Usable_HornedRock_CutsceneStarter_C.StartCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_HornedRock_CutsceneStarter_C::StartCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_HornedRock_CutsceneStarter_C", "StartCutscene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_HornedRock_CutsceneStarter.Usable_HornedRock_CutsceneStarter_C.ExecuteUbergraph_Usable_HornedRock_CutsceneStarter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALevelSequenceActor*         K2Node_DynamicCast_AsLevel_Sequence_Actor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGamePlayGameState_C*        CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_HornedRock_CutsceneStarter_C::ExecuteUbergraph_Usable_HornedRock_CutsceneStarter(int32 EntryPoint, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_HornedRock_CutsceneStarter_C", "ExecuteUbergraph_Usable_HornedRock_CutsceneStarter");

	Params::AUsable_HornedRock_CutsceneStarter_C_ExecuteUbergraph_Usable_HornedRock_CutsceneStarter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsLevel_Sequence_Actor = K2Node_DynamicCast_AsLevel_Sequence_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState = CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;

	UObject::ProcessEvent(Func, &Parms);

}

}


