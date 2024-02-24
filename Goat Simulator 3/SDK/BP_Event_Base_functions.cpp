#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Event_Base.BP_Event_Base_C
// (Actor)

class UClass* ABP_Event_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Event_Base_C");

	return Clss;
}


// BP_Event_Base_C BP_Event_Base.Default__BP_Event_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Event_Base_C* ABP_Event_Base_C::GetDefaultObj()
{
	static class ABP_Event_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Event_Base_C*>(ABP_Event_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Event_Base.BP_Event_Base_C.GetMatchingAreaContextActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoatTower*                K2Node_DynamicCast_AsGGGoat_Tower                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

class AActor* ABP_Event_Base_C::GetMatchingAreaContextActor(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class AGGGoatTower* K2Node_DynamicCast_AsGGGoat_Tower, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "GetMatchingAreaContextActor");

	Params::ABP_Event_Base_C_GetMatchingAreaContextActor_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGGGoat_Tower = K2Node_DynamicCast_AsGGGoat_Tower;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Event_Base.BP_Event_Base_C.GetMatchingGoatTower
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoatTower*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoatTower*                K2Node_DynamicCast_AsGGGoat_Tower                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class AGGGoatTower* ABP_Event_Base_C::GetMatchingGoatTower(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AGGGoatTower* K2Node_DynamicCast_AsGGGoat_Tower, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "GetMatchingGoatTower");

	Params::ABP_Event_Base_C_GetMatchingGoatTower_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGGoat_Tower = K2Node_DynamicCast_AsGGGoat_Tower;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Event_Base.BP_Event_Base_C.DecreaseEventProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InstigatorActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              CallFunc_GetPlayerStateFromActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              CallFunc_GetGGPlayerState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Event_Base_C::DecreaseEventProgress(class AActor* InstigatorActor, int32 Value, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, class AGGPlayerState* CallFunc_GetPlayerStateFromActor_ReturnValue, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "DecreaseEventProgress");

	Params::ABP_Event_Base_C_DecreaseEventProgress_Params Parms{};

	Parms.InstigatorActor = InstigatorActor;
	Parms.Value = Value;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue = CallFunc_GetPrimaryGGPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerStateFromActor_ReturnValue = CallFunc_GetPlayerStateFromActor_ReturnValue;
	Parms.CallFunc_GetGGPlayerState_ReturnValue = CallFunc_GetGGPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_Base.BP_Event_Base_C.ReportEventProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InstigatorActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              CallFunc_GetPlayerStateFromActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              CallFunc_GetGGPlayerState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Event_Base_C::ReportEventProgress(class AActor* InstigatorActor, int32 Value, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, class AGGPlayerState* CallFunc_GetPlayerStateFromActor_ReturnValue, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "ReportEventProgress");

	Params::ABP_Event_Base_C_ReportEventProgress_Params Parms{};

	Parms.InstigatorActor = InstigatorActor;
	Parms.Value = Value;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue = CallFunc_GetPrimaryGGPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerStateFromActor_ReturnValue = CallFunc_GetPlayerStateFromActor_ReturnValue;
	Parms.CallFunc_GetGGPlayerState_ReturnValue = CallFunc_GetGGPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_Base.BP_Event_Base_C.CompleteEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InstigatorActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              CallFunc_GetPlayerStateFromActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Event_Base_C::CompleteEvent(class AActor* InstigatorActor, class AGGPlayerState* CallFunc_GetPlayerStateFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "CompleteEvent");

	Params::ABP_Event_Base_C_CompleteEvent_Params Parms{};

	Parms.InstigatorActor = InstigatorActor;
	Parms.CallFunc_GetPlayerStateFromActor_ReturnValue = CallFunc_GetPlayerStateFromActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_Base.BP_Event_Base_C.BndEvt__HintArea_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Event_Base_C::BndEvt__HintArea_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "BndEvt__HintArea_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABP_Event_Base_C_BndEvt__HintArea_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_Base.BP_Event_Base_C.PlayCompletedSequence
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Event_Base_C::PlayCompletedSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "PlayCompletedSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_Base.BP_Event_Base_C.PlaySeqForAllNearbyPlayers
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*              SequenceToPlay                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OverrideLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CameraCutsDistance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Event_Base_C::PlaySeqForAllNearbyPlayers(class ULevelSequence* SequenceToPlay, class AActor* OverrideLocation, float CameraCutsDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "PlaySeqForAllNearbyPlayers");

	Params::ABP_Event_Base_C_PlaySeqForAllNearbyPlayers_Params Parms{};

	Parms.SequenceToPlay = SequenceToPlay;
	Parms.OverrideLocation = OverrideLocation;
	Parms.CameraCutsDistance = CameraCutsDistance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_Base.BP_Event_Base_C.OnCompletedSequenceFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Event_Base_C::OnCompletedSequenceFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "OnCompletedSequenceFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_Base.BP_Event_Base_C.OnCompletedSequencePlaying
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Event_Base_C::OnCompletedSequencePlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "OnCompletedSequencePlaying");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_Base.BP_Event_Base_C.OnQuestProgressionLoadedBlueprint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bSaveExisted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bWasCompleted                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Event_Base_C::OnQuestProgressionLoadedBlueprint(bool bSaveExisted, bool bWasCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "OnQuestProgressionLoadedBlueprint");

	Params::ABP_Event_Base_C_OnQuestProgressionLoadedBlueprint_Params Parms{};

	Parms.bSaveExisted = bSaveExisted;
	Parms.bWasCompleted = bWasCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_Base.BP_Event_Base_C.LoadGoatTowerLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Event_Base_C::LoadGoatTowerLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "LoadGoatTowerLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_Base.BP_Event_Base_C.OnQuestCompletedBlueprint
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Event_Base_C::OnQuestCompletedBlueprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "OnQuestCompletedBlueprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_Base.BP_Event_Base_C.BindPersistentEffectsToggler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GoatTower_PersistentEffectsToggler_C*Toggler                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Event_Base_C::BindPersistentEffectsToggler(class ABP_GoatTower_PersistentEffectsToggler_C* Toggler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "BindPersistentEffectsToggler");

	Params::ABP_Event_Base_C_BindPersistentEffectsToggler_Params Parms{};

	Parms.Toggler = Toggler;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_Base.BP_Event_Base_C.UnbindPersistentEffectsToggler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_GoatTower_PersistentEffectsToggler_C*Toggler                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Event_Base_C::UnbindPersistentEffectsToggler(class ABP_GoatTower_PersistentEffectsToggler_C* Toggler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "UnbindPersistentEffectsToggler");

	Params::ABP_Event_Base_C_UnbindPersistentEffectsToggler_Params Parms{};

	Parms.Toggler = Toggler;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_Base.BP_Event_Base_C.OnCinematicStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*        Sequence                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Event_Base_C::OnCinematicStarted(class ULevelSequencePlayer* Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "OnCinematicStarted");

	Params::ABP_Event_Base_C_OnCinematicStarted_Params Parms{};

	Parms.Sequence = Sequence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_Base.BP_Event_Base_C.SeqForAllNearbyPlayers_OnStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Event_Base_C::SeqForAllNearbyPlayers_OnStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "SeqForAllNearbyPlayers_OnStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_Base.BP_Event_Base_C.SeqForAllNearbyPlayers_OnFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Event_Base_C::SeqForAllNearbyPlayers_OnFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "SeqForAllNearbyPlayers_OnFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_Base.BP_Event_Base_C.ExecuteUbergraph_BP_Event_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsCompGoatCapsuleComp_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     K2Node_DynamicCast_AsGGGoat                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerState*              CallFunc_GetGGPlayerState_ReturnValue                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequence*              K2Node_CustomEvent_SequenceToPlay                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OverrideLocation                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_CameraCutsDistance                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGLevelSequenceActor*       CallFunc_CreateGGLevelSequencePlayer_OutActor                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateGGLevelSequencePlayer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSaveExisted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bWasCompleted                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEventCompletedState    CallFunc_GetCompletionState_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class AGGPlayerController*> CallFunc_GetLocalGGPlayerControllers_ReturnValue                 (ReferenceParm)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class ABP_GoatTower_PersistentEffectsToggler_C*K2Node_CustomEvent_Toggler_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GoatTower_PersistentEffectsToggler_C*K2Node_CustomEvent_Toggler                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetClosestEventPointLocation_OutDistance                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetClosestEventPointLocation_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        K2Node_CustomEvent_Sequence                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Event_Base_C::ExecuteUbergraph_BP_Event_Base(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_IsCompGoatCapsuleComp_ReturnValue, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue, class ULevelSequence* K2Node_CustomEvent_SequenceToPlay, class AActor* K2Node_CustomEvent_OverrideLocation, float K2Node_CustomEvent_CameraCutsDistance, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AGGLevelSequenceActor* CallFunc_CreateGGLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateGGLevelSequencePlayer_ReturnValue, bool K2Node_Event_bSaveExisted, bool K2Node_Event_bWasCompleted, enum class EEventCompletedState CallFunc_GetCompletionState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class AGGPlayerController*>& CallFunc_GetLocalGGPlayerControllers_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_GoatTower_PersistentEffectsToggler_C* K2Node_CustomEvent_Toggler_1, class ABP_GoatTower_PersistentEffectsToggler_C* K2Node_CustomEvent_Toggler, int32 Temp_int_Array_Index_Variable, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class AGGPlayerController* CallFunc_Array_Get_Item, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_GetClosestEventPointLocation_OutDistance, const struct FVector& CallFunc_GetClosestEventPointLocation_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class ULevelSequencePlayer* K2Node_CustomEvent_Sequence, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_1, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_2, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_Base_C", "ExecuteUbergraph_BP_Event_Base");

	Params::ABP_Event_Base_C_ExecuteUbergraph_BP_Event_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.CallFunc_IsCompGoatCapsuleComp_ReturnValue = CallFunc_IsCompGoatCapsuleComp_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGGoat = K2Node_DynamicCast_AsGGGoat;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGGPlayerState_ReturnValue = CallFunc_GetGGPlayerState_ReturnValue;
	Parms.K2Node_CustomEvent_SequenceToPlay = K2Node_CustomEvent_SequenceToPlay;
	Parms.K2Node_CustomEvent_OverrideLocation = K2Node_CustomEvent_OverrideLocation;
	Parms.K2Node_CustomEvent_CameraCutsDistance = K2Node_CustomEvent_CameraCutsDistance;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CreateGGLevelSequencePlayer_OutActor = CallFunc_CreateGGLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateGGLevelSequencePlayer_ReturnValue = CallFunc_CreateGGLevelSequencePlayer_ReturnValue;
	Parms.K2Node_Event_bSaveExisted = K2Node_Event_bSaveExisted;
	Parms.K2Node_Event_bWasCompleted = K2Node_Event_bWasCompleted;
	Parms.CallFunc_GetCompletionState_ReturnValue = CallFunc_GetCompletionState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalGGPlayerControllers_ReturnValue = CallFunc_GetLocalGGPlayerControllers_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_Toggler_1 = K2Node_CustomEvent_Toggler_1;
	Parms.K2Node_CustomEvent_Toggler = K2Node_CustomEvent_Toggler;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_GetClosestEventPointLocation_OutDistance = CallFunc_GetClosestEventPointLocation_OutDistance;
	Parms.CallFunc_GetClosestEventPointLocation_ReturnValue = CallFunc_GetClosestEventPointLocation_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_Sequence = K2Node_CustomEvent_Sequence;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue = CallFunc_GetGlobalEventHandler_ReturnValue;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue_1 = CallFunc_GetGlobalEventHandler_ReturnValue_1;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue_2 = CallFunc_GetGlobalEventHandler_ReturnValue_2;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


