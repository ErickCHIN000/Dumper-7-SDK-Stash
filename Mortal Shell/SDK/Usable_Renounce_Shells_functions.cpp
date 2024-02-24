#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Usable_Renounce_Shells.Usable_Renounce_Shells_C
// (Actor)

class UClass* AUsable_Renounce_Shells_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Usable_Renounce_Shells_C");

	return Clss;
}


// Usable_Renounce_Shells_C Usable_Renounce_Shells.Default__Usable_Renounce_Shells_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUsable_Renounce_Shells_C* AUsable_Renounce_Shells_C::GetDefaultObj()
{
	static class AUsable_Renounce_Shells_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUsable_Renounce_Shells_C*>(AUsable_Renounce_Shells_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Usable_Renounce_Shells.Usable_Renounce_Shells_C.ResetFoundlingDye
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellDyes           CallFunc_GetShellDyes_Dyes                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellDyes           K2Node_SetFieldsInStruct_StructOut                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Renounce_Shells_C::ResetFoundlingDye(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes, const struct FStruct_ShellDyes& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Renounce_Shells_C", "ResetFoundlingDye");

	Params::AUsable_Renounce_Shells_C_ResetFoundlingDye_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetShellDyes_Dyes = CallFunc_GetShellDyes_Dyes;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Renounce_Shells.Usable_Renounce_Shells_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Renounce_Shells_C::OnActorUsed(class APlayerController* Controller, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Renounce_Shells_C", "OnActorUsed");

	Params::AUsable_Renounce_Shells_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Usable_Renounce_Shells.Usable_Renounce_Shells_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AUsable_Renounce_Shells_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Renounce_Shells_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Renounce_Shells.Usable_Renounce_Shells_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AUsable_Renounce_Shells_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Renounce_Shells_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Renounce_Shells.Usable_Renounce_Shells_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AUsable_Renounce_Shells_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Renounce_Shells_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Renounce_Shells.Usable_Renounce_Shells_C.AnsweredRenouncePrompt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bYes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Renounce_Shells_C::AnsweredRenouncePrompt(bool bYes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Renounce_Shells_C", "AnsweredRenouncePrompt");

	Params::AUsable_Renounce_Shells_C_AnsweredRenouncePrompt_Params Parms{};

	Parms.bYes = bYes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Renounce_Shells.Usable_Renounce_Shells_C.OnWidgetHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Renounce_Shells_C::OnWidgetHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Renounce_Shells_C", "OnWidgetHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Renounce_Shells.Usable_Renounce_Shells_C.PromptToRenounce
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Renounce_Shells_C::PromptToRenounce()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Renounce_Shells_C", "PromptToRenounce");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Renounce_Shells.Usable_Renounce_Shells_C.ShowRenounceWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Renounce_Shells_C::ShowRenounceWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Renounce_Shells_C", "ShowRenounceWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Renounce_Shells.Usable_Renounce_Shells_C.RenounceScript
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Renounce_Shells_C::RenounceScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Renounce_Shells_C", "RenounceScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Renounce_Shells.Usable_Renounce_Shells_C.RemoveWB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Renounce_Shells_C::RemoveWB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Renounce_Shells_C", "RemoveWB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Renounce_Shells.Usable_Renounce_Shells_C.SetUsableOnShellEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ShellName                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ShellTagline                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AUsable_Renounce_Shells_C::SetUsableOnShellEquipped(class FText ShellName, class FText ShellTagline)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Renounce_Shells_C", "SetUsableOnShellEquipped");

	Params::AUsable_Renounce_Shells_C_SetUsableOnShellEquipped_Params Parms{};

	Parms.ShellName = ShellName;
	Parms.ShellTagline = ShellTagline;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Renounce_Shells.Usable_Renounce_Shells_C.ScreenAndShakeFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Renounce_Shells_C::ScreenAndShakeFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Renounce_Shells_C", "ScreenAndShakeFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Renounce_Shells.Usable_Renounce_Shells_C.MoveDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Renounce_Shells_C::MoveDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Renounce_Shells_C", "MoveDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Renounce_Shells.Usable_Renounce_Shells_C.MoveUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Renounce_Shells_C::MoveUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Renounce_Shells_C", "MoveUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Renounce_Shells.Usable_Renounce_Shells_C.ExecuteUbergraph_Usable_Renounce_Shells
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bYes                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Dialogue_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_LorePopup_C*             CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AUseable_Player_Death_Statue_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class AUseable_Player_Death_Statue_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_DeathShell_C*>    CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm, HasGetValueTypeHash)
// class ABP_DeathShell_C*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// TArray<class AUsable_Armor_C*>     CallFunc_GetAllActorsOfClass_OutActors_2                         (ReferenceParm, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUsable_Armor_C*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_ShellName                                     (None)
// class FText                        K2Node_CustomEvent_ShellTagline                                  (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RadialBlur_C*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_3                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALevelSequenceActor*         K2Node_DynamicCast_AsLevel_Sequence_Actor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)

void AUsable_Renounce_Shells_C::ExecuteUbergraph_Usable_Renounce_Shells(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_CustomEvent_bYes, bool CallFunc_IsValid_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_Dialogue_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class UUI_LorePopup_C* CallFunc_Create_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TArray<class AUseable_Player_Death_Statue_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AUseable_Player_Death_Statue_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, TArray<class ABP_DeathShell_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABP_DeathShell_C* CallFunc_Array_Get_Item_1, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, const struct FRotator& CallFunc_MakeRotator_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Lerp_ReturnValue_5, const struct FVector& CallFunc_MakeVector_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<class AUsable_Armor_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class AUsable_Armor_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue_2, class FText K2Node_CustomEvent_ShellName, class FText K2Node_CustomEvent_ShellTagline, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Renounce_Shells_C", "ExecuteUbergraph_Usable_Renounce_Shells");

	Params::AUsable_Renounce_Shells_C_ExecuteUbergraph_Usable_Renounce_Shells_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_bYes = K2Node_CustomEvent_bYes;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue_2 = CallFunc_MakeRotator_ReturnValue_2;
	Parms.CallFunc_Lerp_ReturnValue_3 = CallFunc_Lerp_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue_4 = CallFunc_Lerp_ReturnValue_4;
	Parms.CallFunc_MakeRotator_ReturnValue_3 = CallFunc_MakeRotator_ReturnValue_3;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_5 = CallFunc_Lerp_ReturnValue_5;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_2 = CallFunc_GetAllActorsOfClass_OutActors_2;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_CustomEvent_ShellName = K2Node_CustomEvent_ShellName;
	Parms.K2Node_CustomEvent_ShellTagline = K2Node_CustomEvent_ShellTagline;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_2 = CallFunc_GetCharacterAs0_Base_As0_Base_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_2 = CallFunc_K2_SetRelativeRotation_SweepHitResult_2;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_3 = CallFunc_K2_SetRelativeRotation_SweepHitResult_3;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsLevel_Sequence_Actor = K2Node_DynamicCast_AsLevel_Sequence_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_3 = CallFunc_GetCharacterAs0_Base_As0_Base_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


