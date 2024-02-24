#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CorruptedWaifuNPC.CorruptedWaifuNPC_C
// (Actor)

class UClass* ACorruptedWaifuNPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CorruptedWaifuNPC_C");

	return Clss;
}


// CorruptedWaifuNPC_C CorruptedWaifuNPC.Default__CorruptedWaifuNPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACorruptedWaifuNPC_C* ACorruptedWaifuNPC_C::GetDefaultObj()
{
	static class ACorruptedWaifuNPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACorruptedWaifuNPC_C*>(ACorruptedWaifuNPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CorruptedWaifuNPC.CorruptedWaifuNPC_C.SetupDanceBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACorruptedWaifuNPC_C::SetupDanceBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorruptedWaifuNPC_C", "SetupDanceBindings");

	Params::ACorruptedWaifuNPC_C_SetupDanceBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CorruptedWaifuNPC.CorruptedWaifuNPC_C.StopDance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCultistWaifu_Skeleton_AnimBlueprint_C*K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACorruptedWaifuNPC_C::StopDance(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UCultistWaifu_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorruptedWaifuNPC_C", "StopDance");

	Params::ACorruptedWaifuNPC_C_StopDance_Params Parms{};

	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint = K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CorruptedWaifuNPC.CorruptedWaifuNPC_C.StartDance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCultistWaifu_Skeleton_AnimBlueprint_C*K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACorruptedWaifuNPC_C::StartDance(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UCultistWaifu_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorruptedWaifuNPC_C", "StartDance");

	Params::ACorruptedWaifuNPC_C_StartDance_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint = K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CorruptedWaifuNPC.CorruptedWaifuNPC_C.ResetWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACorruptedWaifuNPC_C::ResetWidget(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorruptedWaifuNPC_C", "ResetWidget");

	Params::ACorruptedWaifuNPC_C_ResetWidget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CorruptedWaifuNPC.CorruptedWaifuNPC_C.GetStock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FMerchantItem>       NewParam                                                         (Parm, OutParm, HasGetValueTypeHash)

void ACorruptedWaifuNPC_C::GetStock(TArray<struct FMerchantItem>* NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorruptedWaifuNPC_C", "GetStock");

	Params::ACorruptedWaifuNPC_C_GetStock_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function CorruptedWaifuNPC.CorruptedWaifuNPC_C.ContinueDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACorruptedWaifuNPC_C::ContinueDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorruptedWaifuNPC_C", "ContinueDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CorruptedWaifuNPC.CorruptedWaifuNPC_C.OnWidgetHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACorruptedWaifuNPC_C::OnWidgetHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorruptedWaifuNPC_C", "OnWidgetHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CorruptedWaifuNPC.CorruptedWaifuNPC_C.OnOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bYes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACorruptedWaifuNPC_C::OnOptionSelected(bool bYes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorruptedWaifuNPC_C", "OnOptionSelected");

	Params::ACorruptedWaifuNPC_C_OnOptionSelected_Params Parms{};

	Parms.bYes = bYes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CorruptedWaifuNPC.CorruptedWaifuNPC_C.OpenTradeMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACorruptedWaifuNPC_C::OpenTradeMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorruptedWaifuNPC_C", "OpenTradeMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CorruptedWaifuNPC.CorruptedWaifuNPC_C.OnTradeFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACorruptedWaifuNPC_C::OnTradeFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorruptedWaifuNPC_C", "OnTradeFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CorruptedWaifuNPC.CorruptedWaifuNPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACorruptedWaifuNPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorruptedWaifuNPC_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CorruptedWaifuNPC.CorruptedWaifuNPC_C.BossSoundtrack_SetTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACorruptedWaifuNPC_C::BossSoundtrack_SetTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorruptedWaifuNPC_C", "BossSoundtrack_SetTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CorruptedWaifuNPC.CorruptedWaifuNPC_C.BossSoundtrack_SwitchMusicType
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACorruptedWaifuNPC_C::BossSoundtrack_SwitchMusicType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorruptedWaifuNPC_C", "BossSoundtrack_SwitchMusicType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CorruptedWaifuNPC.CorruptedWaifuNPC_C.ExecuteUbergraph_CorruptedWaifuNPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHadernContentEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bYes                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMusicDLCEnabled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActivationExplosion_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActivationExplosion_C*      CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACorruptedWaifuNPC_C::ExecuteUbergraph_CorruptedWaifuNPC(int32 EntryPoint, bool CallFunc_IsHadernContentEnabled_ReturnValue, bool K2Node_Event_bYes, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, bool CallFunc_IsValid_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack, bool CallFunc_GetMusicDLCEnabled_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AActivationExplosion_C* CallFunc_FinishSpawningActor_ReturnValue, class AActivationExplosion_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsInViewport_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CorruptedWaifuNPC_C", "ExecuteUbergraph_CorruptedWaifuNPC");

	Params::ACorruptedWaifuNPC_C_ExecuteUbergraph_CorruptedWaifuNPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsHadernContentEnabled_ReturnValue = CallFunc_IsHadernContentEnabled_ReturnValue;
	Parms.K2Node_Event_bYes = K2Node_Event_bYes;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetBossSoundtrackType_Soundtrack = CallFunc_GetBossSoundtrackType_Soundtrack;
	Parms.CallFunc_GetMusicDLCEnabled_ReturnValue = CallFunc_GetMusicDLCEnabled_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_IsInViewport_ReturnValue_1 = CallFunc_IsInViewport_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


