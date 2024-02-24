#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FishBase.BP_FishBase_C
// (Actor)

class UClass* ABP_FishBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FishBase_C");

	return Clss;
}


// BP_FishBase_C BP_FishBase.Default__BP_FishBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FishBase_C* ABP_FishBase_C::GetDefaultObj()
{
	static class ABP_FishBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FishBase_C*>(ABP_FishBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FishBase.BP_FishBase_C.TryPlayPickupSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      PickingUpPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LocationIsInAudibleRangeOfEvent_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FishBase_C::TryPlayPickupSound(class AIcarusPlayerCharacter* PickingUpPlayer, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_LocationIsInAudibleRangeOfEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "TryPlayPickupSound");

	Params::ABP_FishBase_C_TryPlayPickupSound_Params Parms{};

	Parms.PickingUpPlayer = PickingUpPlayer;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_LocationIsInAudibleRangeOfEvent_ReturnValue = CallFunc_LocationIsInAudibleRangeOfEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FishBase.BP_FishBase_C.SetMovementAudioPlayState
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldPlay                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFishSetup                  CallFunc_GetFishSetup_FishSetup                                  (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FishBase_C::SetMovementAudioPlayState(bool ShouldPlay, const struct FFishSetup& CallFunc_GetFishSetup_FishSetup, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "SetMovementAudioPlayState");

	Params::ABP_FishBase_C_SetMovementAudioPlayState_Params Parms{};

	Parms.ShouldPlay = ShouldPlay;
	Parms.CallFunc_GetFishSetup_FishSetup = CallFunc_GetFishSetup_FishSetup;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FishBase.BP_FishBase_C.TryPlayAttackSound
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFishSetup                  CallFunc_GetFishSetup_FishSetup                                  (None)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocationIsInAudibleRangeOfEvent_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FishBase_C::TryPlayAttackSound(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FFishSetup& CallFunc_GetFishSetup_FishSetup, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LocationIsInAudibleRangeOfEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "TryPlayAttackSound");

	Params::ABP_FishBase_C_TryPlayAttackSound_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetFishSetup_FishSetup = CallFunc_GetFishSetup_FishSetup;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LocationIsInAudibleRangeOfEvent_ReturnValue = CallFunc_LocationIsInAudibleRangeOfEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FishBase.BP_FishBase_C.GetFishSetup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFishSetup                  FishSetup                                                        (Parm, OutParm)
// struct FFishSetupRowHandle         GalileoFishRow                                                   (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FFishSetup                  GalileoFish                                                      (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFeatureLevelEnabled_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFeatureLevelEnabled_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFishSetup                  K2Node_Select_Default                                            (None)
// struct FFishSetupRowHandle         K2Node_Select_Default_1                                          (NoDestructor, HasGetValueTypeHash)
// struct FFishSetup                  CallFunc_GetFishSetupStruct_FishSetup                            (None)
// enum class EValid                  CallFunc_GetFishSetupStruct_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FishBase_C::GetFishSetup(struct FFishSetup* FishSetup, const struct FFishSetupRowHandle& GalileoFishRow, const struct FFishSetup& GalileoFish, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsFeatureLevelEnabled_ReturnValue, bool CallFunc_IsFeatureLevelEnabled_ReturnValue_1, const struct FFishSetup& K2Node_Select_Default, const struct FFishSetupRowHandle& K2Node_Select_Default_1, const struct FFishSetup& CallFunc_GetFishSetupStruct_FishSetup, enum class EValid CallFunc_GetFishSetupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "GetFishSetup");

	Params::ABP_FishBase_C_GetFishSetup_Params Parms{};

	Parms.GalileoFishRow = GalileoFishRow;
	Parms.GalileoFish = GalileoFish;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsFeatureLevelEnabled_ReturnValue = CallFunc_IsFeatureLevelEnabled_ReturnValue;
	Parms.CallFunc_IsFeatureLevelEnabled_ReturnValue_1 = CallFunc_IsFeatureLevelEnabled_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetFishSetupStruct_FishSetup = CallFunc_GetFishSetupStruct_FishSetup;
	Parms.CallFunc_GetFishSetupStruct_Paths = CallFunc_GetFishSetupStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FishSetup != nullptr)
		*FishSetup = std::move(Parms.FishSetup);

}


// Function BP_FishBase.BP_FishBase_C.Pickup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacterSurvival*Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFishSetup                  CallFunc_GetFishSetup_FishSetup                                  (None)
// struct FItemRewards                CallFunc_GetItemRewardsStruct_ItemRewards                        (None)
// enum class EValid                  CallFunc_GetItemRewardsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemRewardEntry            CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GenerateItemFromReward_ReturnValue                      (ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TriggerExperienceEvent_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FishBase_C::Pickup(class AIcarusPlayerCharacterSurvival* Player, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, const struct FFishSetup& CallFunc_GetFishSetup_FishSetup, const struct FItemRewards& CallFunc_GetItemRewardsStruct_ItemRewards, enum class EValid CallFunc_GetItemRewardsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemRewardEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FItemData& CallFunc_GenerateItemFromReward_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_TriggerExperienceEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "Pickup");

	Params::ABP_FishBase_C_Pickup_Params Parms{};

	Parms.Player = Player;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFishSetup_FishSetup = CallFunc_GetFishSetup_FishSetup;
	Parms.CallFunc_GetItemRewardsStruct_ItemRewards = CallFunc_GetItemRewardsStruct_ItemRewards;
	Parms.CallFunc_GetItemRewardsStruct_Paths = CallFunc_GetItemRewardsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GenerateItemFromReward_ReturnValue = CallFunc_GenerateItemFromReward_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_TriggerExperienceEvent_ReturnValue = CallFunc_TriggerExperienceEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FishBase.BP_FishBase_C.DetachFromLure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FishBase_C::DetachFromLure()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "DetachFromLure");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FishBase.BP_FishBase_C.CheckFishManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FishBase_C::CheckFishManager(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "CheckFishManager");

	Params::ABP_FishBase_C_CheckFishManager_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FishBase.BP_FishBase_C.UpdateRepLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FishBase_C::UpdateRepLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "UpdateRepLocation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FishBase.BP_FishBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_FishBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FishBase.BP_FishBase_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FishBase_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "ReceiveEndPlay");

	Params::ABP_FishBase_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FishBase.BP_FishBase_C.BPOnRep_Dead
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_FishBase_C::BPOnRep_Dead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "BPOnRep_Dead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FishBase.BP_FishBase_C.BPOnRep_Scale
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_FishBase_C::BPOnRep_Scale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "BPOnRep_Scale");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FishBase.BP_FishBase_C.BPOnRep_AttachActor
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_FishBase_C::BPOnRep_AttachActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "BPOnRep_AttachActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FishBase.BP_FishBase_C.KillFish
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorState*                 ActorState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DamageTaken                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageEvent                DamageEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AController*                 Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FishBase_C::KillFish(class UActorState* ActorState, int32 DamageTaken, struct FDamageEvent& DamageEvent, class AController* Instigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "KillFish");

	Params::ABP_FishBase_C_KillFish_Params Parms{};

	Parms.ActorState = ActorState;
	Parms.DamageTaken = DamageTaken;
	Parms.DamageEvent = DamageEvent;
	Parms.Instigator = Instigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FishBase.BP_FishBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FishBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "ReceiveTick");

	Params::ABP_FishBase_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FishBase.BP_FishBase_C.AttackPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FishBase_C::AttackPlayer(class AIcarusPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "AttackPlayer");

	Params::ABP_FishBase_C_AttackPlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FishBase.BP_FishBase_C.MULTI_PlayAttackFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FishBase_C::MULTI_PlayAttackFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "MULTI_PlayAttackFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FishBase.BP_FishBase_C.OnRep_AwarenessTarget
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_FishBase_C::OnRep_AwarenessTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "OnRep_AwarenessTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FishBase.BP_FishBase_C.MULTI_PlayPickupFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      PickingUpPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FishBase_C::MULTI_PlayPickupFX(class AIcarusPlayerCharacter* PickingUpPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "MULTI_PlayPickupFX");

	Params::ABP_FishBase_C_MULTI_PlayPickupFX_Params Parms{};

	Parms.PickingUpPlayer = PickingUpPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FishBase.BP_FishBase_C.ExecuteUbergraph_BP_FishBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_CustomEvent_PickingUpPlayer                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector_NetQuantize         K2Node_MakeStruct_Vector_NetQuantize                             (NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCreatureSubsystem*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFishSetup                  CallFunc_GetFishSetup_FishSetup                                  (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorState*                 K2Node_CustomEvent_ActorState                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_DamageTaken                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageEvent                K2Node_CustomEvent_DamageEvent                                   (ConstParm)
// class AController*                 K2Node_CustomEvent_Instigator                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusActor*                K2Node_DynamicCast_AsIcarus_Actor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     K2Node_DynamicCast_AsIcarus_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GrantExperienceToActor_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      K2Node_Event_Player                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FishBase_C::ExecuteUbergraph_BP_FishBase(int32 EntryPoint, class AIcarusPlayerCharacter* K2Node_CustomEvent_PickingUpPlayer, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector_NetQuantize& K2Node_MakeStruct_Vector_NetQuantize, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UCreatureSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FFishSetup& CallFunc_GetFishSetup_FishSetup, bool CallFunc_IsValid_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_RandomFloatInRange_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UActorState* K2Node_CustomEvent_ActorState, int32 K2Node_CustomEvent_DamageTaken, const struct FDamageEvent& K2Node_CustomEvent_DamageEvent, class AController* K2Node_CustomEvent_Instigator, class AActor* K2Node_CustomEvent_DamageCauser, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GrantExperienceToActor_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_4, class AIcarusPlayerCharacter* K2Node_Event_Player, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "ExecuteUbergraph_BP_FishBase");

	Params::ABP_FishBase_C_ExecuteUbergraph_BP_FishBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_PickingUpPlayer = K2Node_CustomEvent_PickingUpPlayer;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_MakeStruct_Vector_NetQuantize = K2Node_MakeStruct_Vector_NetQuantize;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetFishSetup_FishSetup = CallFunc_GetFishSetup_FishSetup;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_ActorState = K2Node_CustomEvent_ActorState;
	Parms.K2Node_CustomEvent_DamageTaken = K2Node_CustomEvent_DamageTaken;
	Parms.K2Node_CustomEvent_DamageEvent = K2Node_CustomEvent_DamageEvent;
	Parms.K2Node_CustomEvent_Instigator = K2Node_CustomEvent_Instigator;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_DynamicCast_AsIcarus_Actor = K2Node_DynamicCast_AsIcarus_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller = K2Node_DynamicCast_AsIcarus_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GrantExperienceToActor_ReturnValue = CallFunc_GrantExperienceToActor_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_Event_Player = K2Node_Event_Player;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FishBase.BP_FishBase_C.FishDetached__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFishDetatchReason      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FishBase_C::FishDetached__DelegateSignature(enum class EFishDetatchReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FishBase_C", "FishDetached__DelegateSignature");

	Params::ABP_FishBase_C_FishDetached__DelegateSignature_Params Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}

}


