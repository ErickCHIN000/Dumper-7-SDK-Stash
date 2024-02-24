#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_aa_Flare_00.ba_aa_Flare_00_C
// (Actor)

class UClass* Aba_aa_Flare_00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_aa_Flare_00_C");

	return Clss;
}


// ba_aa_Flare_00_C ba_aa_Flare_00.Default__ba_aa_Flare_00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_aa_Flare_00_C* Aba_aa_Flare_00_C::GetDefaultObj()
{
	static class Aba_aa_Flare_00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_aa_Flare_00_C*>(Aba_aa_Flare_00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_aa_Flare_00.ba_aa_Flare_00_C.SetFOVTL__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_Flare_00_C::SetFOVTL__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Flare_00_C", "SetFOVTL__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Flare_00.ba_aa_Flare_00_C.SetFOVTL__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Aba_aa_Flare_00_C::SetFOVTL__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Flare_00_C", "SetFOVTL__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Flare_00.ba_aa_Flare_00_C.OnNotifyEnd_03D80CC24B0ACF420EF5B688A542DEE1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Flare_00_C::OnNotifyEnd_03D80CC24B0ACF420EF5B688A542DEE1(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Flare_00_C", "OnNotifyEnd_03D80CC24B0ACF420EF5B688A542DEE1");

	Params::Aba_aa_Flare_00_C_OnNotifyEnd_03D80CC24B0ACF420EF5B688A542DEE1_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Flare_00.ba_aa_Flare_00_C.OnNotifyBegin_03D80CC24B0ACF420EF5B688A542DEE1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Flare_00_C::OnNotifyBegin_03D80CC24B0ACF420EF5B688A542DEE1(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Flare_00_C", "OnNotifyBegin_03D80CC24B0ACF420EF5B688A542DEE1");

	Params::Aba_aa_Flare_00_C_OnNotifyBegin_03D80CC24B0ACF420EF5B688A542DEE1_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Flare_00.ba_aa_Flare_00_C.OnInterrupted_03D80CC24B0ACF420EF5B688A542DEE1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Flare_00_C::OnInterrupted_03D80CC24B0ACF420EF5B688A542DEE1(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Flare_00_C", "OnInterrupted_03D80CC24B0ACF420EF5B688A542DEE1");

	Params::Aba_aa_Flare_00_C_OnInterrupted_03D80CC24B0ACF420EF5B688A542DEE1_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Flare_00.ba_aa_Flare_00_C.OnBlendOut_03D80CC24B0ACF420EF5B688A542DEE1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Flare_00_C::OnBlendOut_03D80CC24B0ACF420EF5B688A542DEE1(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Flare_00_C", "OnBlendOut_03D80CC24B0ACF420EF5B688A542DEE1");

	Params::Aba_aa_Flare_00_C_OnBlendOut_03D80CC24B0ACF420EF5B688A542DEE1_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Flare_00.ba_aa_Flare_00_C.OnCompleted_03D80CC24B0ACF420EF5B688A542DEE1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Flare_00_C::OnCompleted_03D80CC24B0ACF420EF5B688A542DEE1(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Flare_00_C", "OnCompleted_03D80CC24B0ACF420EF5B688A542DEE1");

	Params::Aba_aa_Flare_00_C_OnCompleted_03D80CC24B0ACF420EF5B688A542DEE1_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Flare_00.ba_aa_Flare_00_C.ActivateItem
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_Flare_00_C::ActivateItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Flare_00_C", "ActivateItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Flare_00.ba_aa_Flare_00_C.ActivationButtonReleased
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_Flare_00_C::ActivationButtonReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Flare_00_C", "ActivationButtonReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Flare_00.ba_aa_Flare_00_C.OnMovementStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TSubclassOf<class ACGMovementState>InNewMovementState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void Aba_aa_Flare_00_C::OnMovementStateChanged(TSubclassOf<class ACGMovementState> InNewMovementState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Flare_00_C", "OnMovementStateChanged");

	Params::Aba_aa_Flare_00_C_OnMovementStateChanged_Params Parms{};

	Parms.InNewMovementState = InNewMovementState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Flare_00.ba_aa_Flare_00_C.RemoveFlare
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_aa_Flare_00_C::RemoveFlare()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Flare_00_C", "RemoveFlare");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Flare_00.ba_aa_Flare_00_C.AlternativeActivateItem
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_aa_Flare_00_C::AlternativeActivateItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Flare_00_C", "AlternativeActivateItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_aa_Flare_00.ba_aa_Flare_00_C.OnHideShowAdditional
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EState                  OutTargetState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Flare_00_C::OnHideShowAdditional(enum class EState OutTargetState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Flare_00_C", "OnHideShowAdditional");

	Params::Aba_aa_Flare_00_C_OnHideShowAdditional_Params Parms{};

	Parms.OutTargetState = OutTargetState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Flare_00.ba_aa_Flare_00_C.OnForceReloadFinished
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInNoSwap                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_aa_Flare_00_C::OnForceReloadFinished(bool bInNoSwap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Flare_00_C", "OnForceReloadFinished");

	Params::Aba_aa_Flare_00_C_OnForceReloadFinished_Params Parms{};

	Parms.bInNoSwap = bInNoSwap;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Flare_00.ba_aa_Flare_00_C.ExecuteUbergraph_ba_aa_Flare_00
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInNoSwap                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFPAnimQuery                K2Node_MakeStruct_FPAnimQuery                                    (NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TSubclassOf<class ACGMovementState>K2Node_Event_InNewMovementState                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFovValue_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFovValue_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Remove_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SwapActiveItem_OutSwapSuccessful                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HideShowActiveItem_OutActionSuccessful                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>CallFunc_GetCurrentMovementState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_QueryActivity_OutQueryResult                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFPAnimQuery>        CallFunc_QueryActivity_OutQueryQueue                             (ReferenceParm)
// class Aba_aa_emptyhands_00_C*      K2Node_DynamicCast_AsBa_Aa_Emptyhands_00                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_Flare_00_C*              CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EState                  K2Node_Event_OutTargetState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Flare_00_C::ExecuteUbergraph_ba_aa_Flare_00(int32 EntryPoint, bool K2Node_Event_bInNoSwap, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool Temp_bool_Variable, bool K2Node_SwitchName_CmpSuccess, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, const struct FFPAnimQuery& K2Node_MakeStruct_FPAnimQuery, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TSubclassOf<class ACGMovementState> K2Node_Event_InNewMovementState, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, float CallFunc_GetFovValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, float CallFunc_GetFovValue_ReturnValue_1, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue, float CallFunc_Lerp_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_3, class UAnimMontage* CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_4, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, float CallFunc_Remove_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, bool CallFunc_SwapActiveItem_OutSwapSuccessful, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, bool CallFunc_HideShowActiveItem_OutActionSuccessful, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, float CallFunc_Count_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UClass* K2Node_Select_Default, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, bool CallFunc_QueryActivity_OutQueryResult, TArray<struct FFPAnimQuery>& CallFunc_QueryActivity_OutQueryQueue, class Aba_aa_emptyhands_00_C* K2Node_DynamicCast_AsBa_Aa_Emptyhands_00, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16, class Aba_Flare_00_C* CallFunc_FinishSpawningActor_ReturnValue, class AController* CallFunc_GetController_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, enum class EState K2Node_Event_OutTargetState, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Flare_00_C", "ExecuteUbergraph_ba_aa_Flare_00");

	Params::Aba_aa_Flare_00_C_ExecuteUbergraph_ba_aa_Flare_00_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bInNoSwap = K2Node_Event_bInNoSwap;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.K2Node_MakeStruct_FPAnimQuery = K2Node_MakeStruct_FPAnimQuery;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.K2Node_Event_InNewMovementState = K2Node_Event_InNewMovementState;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetFovValue_ReturnValue = CallFunc_GetFovValue_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_GetFovValue_ReturnValue_1 = CallFunc_GetFovValue_ReturnValue_1;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_GetAnimInstance_ReturnValue_2 = CallFunc_GetAnimInstance_ReturnValue_2;
	Parms.CallFunc_GetAnimInstance_ReturnValue_3 = CallFunc_GetAnimInstance_ReturnValue_3;
	Parms.CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1 = CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue_4 = CallFunc_GetAnimInstance_ReturnValue_4;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_Remove_ReturnValue = CallFunc_Remove_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_SwapActiveItem_OutSwapSuccessful = CallFunc_SwapActiveItem_OutSwapSuccessful;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_HideShowActiveItem_OutActionSuccessful = CallFunc_HideShowActiveItem_OutActionSuccessful;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.CallFunc_GetCurrentMovementState_ReturnValue = CallFunc_GetCurrentMovementState_ReturnValue;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew_1 = CallFunc_GetCGPlayerInventory_InventoryComponentNew_1;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10;
	Parms.CallFunc_QueryActivity_OutQueryResult = CallFunc_QueryActivity_OutQueryResult;
	Parms.CallFunc_QueryActivity_OutQueryQueue = CallFunc_QueryActivity_OutQueryQueue;
	Parms.K2Node_DynamicCast_AsBa_Aa_Emptyhands_00 = K2Node_DynamicCast_AsBa_Aa_Emptyhands_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.K2Node_Event_OutTargetState = K2Node_Event_OutTargetState;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


