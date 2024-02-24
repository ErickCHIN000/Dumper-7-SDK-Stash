#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C
// (Actor)

class UClass* ABP_ThroneRoom_Scanner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ThroneRoom_Scanner_C");

	return Clss;
}


// BP_ThroneRoom_Scanner_C BP_ThroneRoom_Scanner.Default__BP_ThroneRoom_Scanner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ThroneRoom_Scanner_C* ABP_ThroneRoom_Scanner_C::GetDefaultObj()
{
	static class ABP_ThroneRoom_Scanner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ThroneRoom_Scanner_C*>(ABP_ThroneRoom_Scanner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.Are All Goats On Trigger
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               All_Goats_On_Trigger                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AGGPlayerController*> CallFunc_GetAllGGPlayerControllers_ReturnValue                   (ReferenceParm)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ThroneRoom_Scanner_C::Are_All_Goats_On_Trigger(bool* All_Goats_On_Trigger, TArray<class AGGPlayerController*>& CallFunc_GetAllGGPlayerControllers_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "Are All Goats On Trigger");

	Params::ABP_ThroneRoom_Scanner_C_Are_All_Goats_On_Trigger_Params Parms{};

	Parms.CallFunc_GetAllGGPlayerControllers_ReturnValue = CallFunc_GetAllGGPlayerControllers_ReturnValue;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (All_Goats_On_Trigger != nullptr)
		*All_Goats_On_Trigger = Parms.All_Goats_On_Trigger;

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.OnRep_ScanningAccepted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::OnRep_ScanningAccepted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "OnRep_ScanningAccepted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.OnRep_GoatIsStandingOnPlate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetIsLoaded_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           CallFunc_GetLoadedAsset_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsLoaded_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           CallFunc_GetLoadedAsset_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ThroneRoom_Scanner_C::OnRep_GoatIsStandingOnPlate(bool CallFunc_GetIsLoaded_ReturnValue, class UMaterialInstance* CallFunc_GetLoadedAsset_ReturnValue, bool CallFunc_GetIsLoaded_ReturnValue_1, class UMaterialInstance* CallFunc_GetLoadedAsset_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "OnRep_GoatIsStandingOnPlate");

	Params::ABP_ThroneRoom_Scanner_C_OnRep_GoatIsStandingOnPlate_Params Parms{};

	Parms.CallFunc_GetIsLoaded_ReturnValue = CallFunc_GetIsLoaded_ReturnValue;
	Parms.CallFunc_GetLoadedAsset_ReturnValue = CallFunc_GetLoadedAsset_ReturnValue;
	Parms.CallFunc_GetIsLoaded_ReturnValue_1 = CallFunc_GetIsLoaded_ReturnValue_1;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_1 = CallFunc_GetLoadedAsset_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.StartScanningFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::StartScanningFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "StartScanningFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.PlayDeclinedFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::PlayDeclinedFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "PlayDeclinedFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.PlayThroneRoomRevealSeq
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::PlayThroneRoomRevealSeq()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "PlayThroneRoomRevealSeq");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.ThroneRoomRevealSeqFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::ThroneRoomRevealSeqFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "ThroneRoomRevealSeqFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.ScanningComplete
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::ScanningComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "ScanningComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.BndEvt__BP_ThroneRoom_Scanner_Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ThroneRoom_Scanner_C::BndEvt__BP_ThroneRoom_Scanner_Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "BndEvt__BP_ThroneRoom_Scanner_Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABP_ThroneRoom_Scanner_C_BndEvt__BP_ThroneRoom_Scanner_Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.PlayActivateFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::PlayActivateFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "PlayActivateFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.BndEvt__BP_ThroneRoom_Scanner_Capsule_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThroneRoom_Scanner_C::BndEvt__BP_ThroneRoom_Scanner_Capsule_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "BndEvt__BP_ThroneRoom_Scanner_Capsule_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	Params::ABP_ThroneRoom_Scanner_C_BndEvt__BP_ThroneRoom_Scanner_Capsule_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.PlayAcceptedFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::PlayAcceptedFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "PlayAcceptedFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.BndEvt__BP_ThroneRoom_Scanner_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnDynamicLoadingFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThroneRoom_Scanner_C::BndEvt__BP_ThroneRoom_Scanner_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnDynamicLoadingFinished__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "BndEvt__BP_ThroneRoom_Scanner_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnDynamicLoadingFinished__DelegateSignature");

	Params::ABP_ThroneRoom_Scanner_C_BndEvt__BP_ThroneRoom_Scanner_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_2_OnDynamicLoadingFinished__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.BndEvt__BP_ThroneRoom_Scanner_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_3_OnLostSignificance__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThroneRoom_Scanner_C::BndEvt__BP_ThroneRoom_Scanner_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_3_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "BndEvt__BP_ThroneRoom_Scanner_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_3_OnLostSignificance__DelegateSignature");

	Params::ABP_ThroneRoom_Scanner_C_BndEvt__BP_ThroneRoom_Scanner_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_3_OnLostSignificance__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.OpenThroneRoomDoors
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::OpenThroneRoomDoors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "OpenThroneRoomDoors");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.ResetEyes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::ResetEyes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "ResetEyes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.MulticastFadeOut
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::MulticastFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "MulticastFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.FadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThroneRoom_Scanner_C::FadeIn(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "FadeIn");

	Params::ABP_ThroneRoom_Scanner_C_FadeIn_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThroneRoom_Scanner_C::FadeOut(float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "FadeOut");

	Params::ABP_ThroneRoom_Scanner_C_FadeOut_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.PlayActivateSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::PlayActivateSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "PlayActivateSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.StartScanningSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::StartScanningSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "StartScanningSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.SetSounds
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::SetSounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "SetSounds");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.On Stand On Plate Effect
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::On_Stand_On_Plate_Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "On Stand On Plate Effect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.StartScan
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::StartScan()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "StartScan");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.OnAllGoatsGathered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      GatherID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_ThroneRoom_Scanner_C::OnAllGoatsGathered(const class FString& GatherID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "OnAllGoatsGathered");

	Params::ABP_ThroneRoom_Scanner_C_OnAllGoatsGathered_Params Parms{};

	Parms.GatherID = GatherID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.PlayersOnScannerUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ThroneRoom_Scanner_C::PlayersOnScannerUpdated(bool NewPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "PlayersOnScannerUpdated");

	Params::ABP_ThroneRoom_Scanner_C_PlayersOnScannerUpdated_Params Parms{};

	Parms.NewPlayer = NewPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.GatherTheGoats
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGPlayerState*              InitialPlayer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThroneRoom_Scanner_C::GatherTheGoats(class AGGPlayerState* InitialPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "GatherTheGoats");

	Params::ABP_ThroneRoom_Scanner_C_GatherTheGoats_Params Parms{};

	Parms.InitialPlayer = InitialPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.OnCinematicStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*        Sequence                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThroneRoom_Scanner_C::OnCinematicStarted(class ULevelSequencePlayer* Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "OnCinematicStarted");

	Params::ABP_ThroneRoom_Scanner_C_OnCinematicStarted_Params Parms{};

	Parms.Sequence = Sequence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.SeqForAllNearbyPlayers_OnFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::SeqForAllNearbyPlayers_OnFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "SeqForAllNearbyPlayers_OnFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.SeqForAllNearbyPlayers_OnStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ThroneRoom_Scanner_C::SeqForAllNearbyPlayers_OnStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "SeqForAllNearbyPlayers_OnStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.ExecuteUbergraph_BP_ThroneRoom_Scanner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGGatherGoatsSubsystem*     CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGatherGoatsSubsystem*     CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGatherGoatsSubsystem*     CallFunc_GetWorldSubsystem_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)
// bool                               CallFunc_IsCompGoat_IsGoat                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsCapsuleComponent                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsMeshComponent                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_IsCompGoat_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              CallFunc_GetGGPlayerState_ReturnValue                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              CallFunc_GetPlayerStateFromActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_DynamicCast_AsGGGoat                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsLoaded_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsLoaded_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsLoaded_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompGoat_IsGoat_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsCapsuleComponent_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsMeshComponent_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_IsCompGoat_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              CallFunc_GetGGPlayerState_ReturnValue_1                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsLoaded_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// struct FCountNotificationParametersK2Node_MakeStruct_CountNotificationParameters                    (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AGGLevelSequenceActor*       CallFunc_CreateGGLevelSequencePlayer_OutActor                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateGGLevelSequencePlayer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Duration_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsLoaded_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsLoaded_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Are_All_Goats_On_Trigger_All_Goats_On_Trigger           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           CallFunc_GetLoadedAsset_ReturnValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsLoaded_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           CallFunc_GetLoadedAsset_ReturnValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_GatherID                                      (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasGatherEventWithID_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_NewPlayer                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors_1                (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGatherGoatsSubsystem*     CallFunc_GetWorldSubsystem_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGatherGoatParameters       K2Node_MakeStruct_GatherGoatParameters                           (None)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors_2                (ReferenceParm)
// class UGGGatherGoatsSubsystem*     CallFunc_GetWorldSubsystem_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              CallFunc_GetPlayerStateFromActor_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerState*              K2Node_CustomEvent_InitialPlayer                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerColorIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class UGGGatherGoatsSubsystem*     CallFunc_GetWorldSubsystem_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct FInviteNotificationParametersK2Node_MakeStruct_InviteNotificationParameters                   (None)
// bool                               CallFunc_GatherAllGoats_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        K2Node_CustomEvent_Sequence                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThroneRoom_Scanner_C::ExecuteUbergraph_BP_ThroneRoom_Scanner(int32 EntryPoint, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool CallFunc_IsCompGoat_IsGoat, bool CallFunc_IsCompGoat_IsCapsuleComponent, bool CallFunc_IsCompGoat_IsMeshComponent, class AGGGoat* CallFunc_IsCompGoat_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue, class AGGPlayerState* CallFunc_GetPlayerStateFromActor_ReturnValue, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_GetIsLoaded_ReturnValue, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_GetIsLoaded_ReturnValue_1, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_2, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_3, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_4, bool CallFunc_GetIsLoaded_ReturnValue_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_IsCompGoat_IsGoat_1, bool CallFunc_IsCompGoat_IsCapsuleComponent_1, bool CallFunc_IsCompGoat_IsMeshComponent_1, class AGGGoat* CallFunc_IsCompGoat_ReturnValue_1, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue_1, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_5, bool CallFunc_GetIsLoaded_ReturnValue_3, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_6, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FCountNotificationParameters& K2Node_MakeStruct_CountNotificationParameters, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AGGLevelSequenceActor* CallFunc_CreateGGLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateGGLevelSequencePlayer_ReturnValue, float K2Node_CustomEvent_Duration_1, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, float K2Node_CustomEvent_Duration, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue_1, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_8, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_6, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_GetIsLoaded_ReturnValue_4, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_11, bool CallFunc_GetIsLoaded_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_9, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_Are_All_Goats_On_Trigger_All_Goats_On_Trigger, class UMaterialInstance* CallFunc_GetLoadedAsset_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_GetIsLoaded_ReturnValue_6, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_11, class UMaterialInstance* CallFunc_GetLoadedAsset_ReturnValue_14, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, const class FString& K2Node_CustomEvent_GatherID, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_HasGatherEventWithID_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_CustomEvent_NewPlayer, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, int32 CallFunc_Array_Length_ReturnValue_1, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const struct FGatherGoatParameters& K2Node_MakeStruct_GatherGoatParameters, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_2, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_4, class AActor* CallFunc_Array_Get_Item_1, class AGGPlayerState* CallFunc_GetPlayerStateFromActor_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, class AGGPlayerState* K2Node_CustomEvent_InitialPlayer, const class FString& CallFunc_GetPlayerName_ReturnValue, int32 CallFunc_GetPlayerColorIndex_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_5, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FInviteNotificationParameters& K2Node_MakeStruct_InviteNotificationParameters, bool CallFunc_GatherAllGoats_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, class ULevelSequencePlayer* K2Node_CustomEvent_Sequence, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_1, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "ExecuteUbergraph_BP_ThroneRoom_Scanner");

	Params::ABP_ThroneRoom_Scanner_C_ExecuteUbergraph_BP_ThroneRoom_Scanner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue = CallFunc_GetGlobalEventHandler_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_HasAuthority_ReturnValue_4 = CallFunc_HasAuthority_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_2 = CallFunc_GetWorldSubsystem_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_IsCompGoat_IsGoat = CallFunc_IsCompGoat_IsGoat;
	Parms.CallFunc_IsCompGoat_IsCapsuleComponent = CallFunc_IsCompGoat_IsCapsuleComponent;
	Parms.CallFunc_IsCompGoat_IsMeshComponent = CallFunc_IsCompGoat_IsMeshComponent;
	Parms.CallFunc_IsCompGoat_ReturnValue = CallFunc_IsCompGoat_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetGGPlayerState_ReturnValue = CallFunc_GetGGPlayerState_ReturnValue;
	Parms.CallFunc_GetPlayerStateFromActor_ReturnValue = CallFunc_GetPlayerStateFromActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsGGGoat = K2Node_DynamicCast_AsGGGoat;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetIsLoaded_ReturnValue = CallFunc_GetIsLoaded_ReturnValue;
	Parms.CallFunc_GetLoadedAsset_ReturnValue = CallFunc_GetLoadedAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetIsLoaded_ReturnValue_1 = CallFunc_GetIsLoaded_ReturnValue_1;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_1 = CallFunc_GetLoadedAsset_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_2 = CallFunc_GetLoadedAsset_ReturnValue_2;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_3 = CallFunc_GetLoadedAsset_ReturnValue_3;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_4 = CallFunc_GetLoadedAsset_ReturnValue_4;
	Parms.CallFunc_GetIsLoaded_ReturnValue_2 = CallFunc_GetIsLoaded_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.CallFunc_IsCompGoat_IsGoat_1 = CallFunc_IsCompGoat_IsGoat_1;
	Parms.CallFunc_IsCompGoat_IsCapsuleComponent_1 = CallFunc_IsCompGoat_IsCapsuleComponent_1;
	Parms.CallFunc_IsCompGoat_IsMeshComponent_1 = CallFunc_IsCompGoat_IsMeshComponent_1;
	Parms.CallFunc_IsCompGoat_ReturnValue_1 = CallFunc_IsCompGoat_ReturnValue_1;
	Parms.CallFunc_GetGGPlayerState_ReturnValue_1 = CallFunc_GetGGPlayerState_ReturnValue_1;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_5 = CallFunc_GetLoadedAsset_ReturnValue_5;
	Parms.CallFunc_GetIsLoaded_ReturnValue_3 = CallFunc_GetIsLoaded_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp_1 = K2Node_ComponentBoundEvent_DynAssetComp_1;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp = K2Node_ComponentBoundEvent_DynAssetComp;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_6 = CallFunc_GetLoadedAsset_ReturnValue_6;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_7 = CallFunc_GetLoadedAsset_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_MakeStruct_CountNotificationParameters = K2Node_MakeStruct_CountNotificationParameters;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_CreateGGLevelSequencePlayer_OutActor = CallFunc_CreateGGLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateGGLevelSequencePlayer_ReturnValue = CallFunc_CreateGGLevelSequencePlayer_ReturnValue;
	Parms.K2Node_CustomEvent_Duration_1 = K2Node_CustomEvent_Duration_1;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue = CallFunc_GetPrimaryGGPlayerController_ReturnValue;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue_1 = CallFunc_GetPrimaryGGPlayerController_ReturnValue_1;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_8 = CallFunc_GetLoadedAsset_ReturnValue_8;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_9 = CallFunc_GetLoadedAsset_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_10 = CallFunc_GetLoadedAsset_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetIsLoaded_ReturnValue_4 = CallFunc_GetIsLoaded_ReturnValue_4;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_11 = CallFunc_GetLoadedAsset_ReturnValue_11;
	Parms.CallFunc_GetIsLoaded_ReturnValue_5 = CallFunc_GetIsLoaded_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_Are_All_Goats_On_Trigger_All_Goats_On_Trigger = CallFunc_Are_All_Goats_On_Trigger_All_Goats_On_Trigger;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_12 = CallFunc_GetLoadedAsset_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_GetIsLoaded_ReturnValue_6 = CallFunc_GetIsLoaded_ReturnValue_6;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_13 = CallFunc_GetLoadedAsset_ReturnValue_13;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_14 = CallFunc_GetLoadedAsset_ReturnValue_14;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.K2Node_CustomEvent_GatherID = K2Node_CustomEvent_GatherID;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_HasGatherEventWithID_ReturnValue = CallFunc_HasGatherEventWithID_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NewPlayer = K2Node_CustomEvent_NewPlayer;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors_1 = CallFunc_GetOverlappingActors_OverlappingActors_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_3 = CallFunc_GetWorldSubsystem_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.K2Node_MakeStruct_GatherGoatParameters = K2Node_MakeStruct_GatherGoatParameters;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors_2 = CallFunc_GetOverlappingActors_OverlappingActors_2;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_4 = CallFunc_GetWorldSubsystem_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetPlayerStateFromActor_ReturnValue_1 = CallFunc_GetPlayerStateFromActor_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_InitialPlayer = K2Node_CustomEvent_InitialPlayer;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_GetPlayerColorIndex_ReturnValue = CallFunc_GetPlayerColorIndex_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_5 = CallFunc_GetWorldSubsystem_ReturnValue_5;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_InviteNotificationParameters = K2Node_MakeStruct_InviteNotificationParameters;
	Parms.CallFunc_GatherAllGoats_ReturnValue = CallFunc_GatherAllGoats_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_CustomEvent_Sequence = K2Node_CustomEvent_Sequence;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue_1 = CallFunc_GetGlobalEventHandler_ReturnValue_1;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue_2 = CallFunc_GetGlobalEventHandler_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ThroneRoom_Scanner.BP_ThroneRoom_Scanner_C.ThroneRoomOpenedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ThroneRoom_Scanner_C::ThroneRoomOpenedDispatcher__DelegateSignature(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThroneRoom_Scanner_C", "ThroneRoomOpenedDispatcher__DelegateSignature");

	Params::ABP_ThroneRoom_Scanner_C_ThroneRoomOpenedDispatcher__DelegateSignature_Params Parms{};

	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}

}


