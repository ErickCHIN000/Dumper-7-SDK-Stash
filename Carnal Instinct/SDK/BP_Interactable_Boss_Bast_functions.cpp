#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Boss_Bast.BP_Interactable_Boss_Bast_C
// (Actor)

class UClass* ABP_Interactable_Boss_Bast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Boss_Bast_C");

	return Clss;
}


// BP_Interactable_Boss_Bast_C BP_Interactable_Boss_Bast.Default__BP_Interactable_Boss_Bast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Interactable_Boss_Bast_C* ABP_Interactable_Boss_Bast_C::GetDefaultObj()
{
	static class ABP_Interactable_Boss_Bast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Interactable_Boss_Bast_C*>(ABP_Interactable_Boss_Bast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_Boss_Bast.BP_Interactable_Boss_Bast_C.Start Battle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Interactable_Boss_Bast_C::Start_Battle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Boss_Bast_C", "Start Battle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interactable_Boss_Bast.BP_Interactable_Boss_Bast_C.IntroSeqFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Interactable_Boss_Bast_C::IntroSeqFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Boss_Bast_C", "IntroSeqFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interactable_Boss_Bast.BP_Interactable_Boss_Bast_C.OnCombatFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Interactable_Boss_Bast_C::OnCombatFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Boss_Bast_C", "OnCombatFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interactable_Boss_Bast.BP_Interactable_Boss_Bast_C.Start Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequence*              Level_Seq                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Interactable_Boss_Bast_C::Start_Sequence(class ULevelSequence* Level_Seq)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Boss_Bast_C", "Start Sequence");

	Params::ABP_Interactable_Boss_Bast_C_Start_Sequence_Params Parms{};

	Parms.Level_Seq = Level_Seq;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_Boss_Bast.BP_Interactable_Boss_Bast_C.OnSequence End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Interactable_Boss_Bast_C::OnSequence_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Boss_Bast_C", "OnSequence End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interactable_Boss_Bast.BP_Interactable_Boss_Bast_C.Start DLG with Bast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Interactable_Boss_Bast_C::Start_DLG_with_Bast()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Boss_Bast_C", "Start DLG with Bast");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interactable_Boss_Bast.BP_Interactable_Boss_Bast_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Interactable_Boss_Bast_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Boss_Bast_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interactable_Boss_Bast.BP_Interactable_Boss_Bast_C.End Fight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Interactable_Boss_Bast_C::End_Fight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Boss_Bast_C", "End Fight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interactable_Boss_Bast.BP_Interactable_Boss_Bast_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Interactable_Boss_Bast_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Boss_Bast_C", "ReceiveTick");

	Params::ABP_Interactable_Boss_Bast_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Interactable_Boss_Bast.BP_Interactable_Boss_Bast_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Interactable_Boss_Bast_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Boss_Bast_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Interactable_Boss_Bast.BP_Interactable_Boss_Bast_C.ExecuteUbergraph_BP_Interactable_Boss_Bast
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_bodySystem               CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWB_Fade_C*                  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_dlg_actor_C*             CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_InquisitorOfBast_C*      CallFunc_GetActorOfClass_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMovieSceneSequencePlaybackSettingsK2Node_MakeStruct_MovieSceneSequencePlaybackSettings             (NoDestructor)
// class ALevelSequenceActor*         CallFunc_CreateLevelSequencePlayer_OutActor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateLevelSequencePlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWB_InGame_C*>        CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UWB_InGame_C*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_statue_C*               CallFunc_GetActorOfClass_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class ANpc_stranger_C*             CallFunc_GetActorOfClass_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_strangerplaceholder_C*  CallFunc_GetActorOfClass_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_dlg_get_dlg_component_is_valid                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_dlg_component_C*         CallFunc_dlg_get_dlg_component_dlg_reference                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_is_valid                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_found_index                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_get_dlg_dlg_actor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_nepthys_C*              CallFunc_GetActorOfClass_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_TargetIndicatorComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequence*              K2Node_CustomEvent_Level_Seq                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_strangerplaceholder_C*  CallFunc_GetActorOfClass_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_InquisitorOfBast_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_stranger_C*             CallFunc_GetActorOfClass_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMovieSceneSequencePlaybackSettingsK2Node_MakeStruct_MovieSceneSequencePlaybackSettings_1           (NoDestructor)
// class ALevelSequenceActor*         CallFunc_CreateLevelSequencePlayer_OutActor_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateLevelSequencePlayer_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FMovieSceneSequencePlaybackSettingsK2Node_MakeStruct_MovieSceneSequencePlaybackSettings_2           (NoDestructor, UObjectWrapper)
// class ALevelSequenceActor*         CallFunc_CreateLevelSequencePlayer_OutActor_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateLevelSequencePlayer_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Interactable_Boss_Bast_C::ExecuteUbergraph_BP_Interactable_Boss_Bast(int32 EntryPoint, const struct FS_bodySystem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UWB_Fade_C* CallFunc_Create_ReturnValue, class Abp_dlg_actor_C* CallFunc_GetActorOfClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, enum class E_State CallFunc_GetState_State, bool K2Node_SwitchEnum_CmpSuccess, class Abp_dlg_actor_C* CallFunc_GetActorOfClass_ReturnValue_1, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class ABP_InquisitorOfBast_C* CallFunc_GetActorOfClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWB_InGame_C* CallFunc_Array_Get_Item, class ANpc_statue_C* CallFunc_GetActorOfClass_ReturnValue_3, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ANpc_stranger_C* CallFunc_GetActorOfClass_ReturnValue_4, class ANpc_strangerplaceholder_C* CallFunc_GetActorOfClass_ReturnValue_5, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, bool CallFunc_dlg_get_dlg_component_is_valid, class Ubp_dlg_component_C* CallFunc_dlg_get_dlg_component_dlg_reference, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_1, bool CallFunc_get_dlg_is_valid, int32 CallFunc_get_dlg_found_index, class Abp_dlg_actor_C* CallFunc_get_dlg_dlg_actor, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, class ANpc_nepthys_C* CallFunc_GetActorOfClass_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_2, class UBP_TargetIndicatorComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class ULevelSequence* K2Node_CustomEvent_Level_Seq, class ANpc_strangerplaceholder_C* CallFunc_GetActorOfClass_ReturnValue_7, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_InquisitorOfBast_C* CallFunc_FinishSpawningActor_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_2, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player_3, class ANpc_stranger_C* CallFunc_GetActorOfClass_ReturnValue_8, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings_1, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_1, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_1, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings_2, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor_2, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Boss_Bast_C", "ExecuteUbergraph_BP_Interactable_Boss_Bast");

	Params::ABP_Interactable_Boss_Bast_C_ExecuteUbergraph_BP_Interactable_Boss_Bast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_GetActorOfClass_ReturnValue_2 = CallFunc_GetActorOfClass_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_MovieSceneSequencePlaybackSettings = K2Node_MakeStruct_MovieSceneSequencePlaybackSettings;
	Parms.CallFunc_CreateLevelSequencePlayer_OutActor = CallFunc_CreateLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateLevelSequencePlayer_ReturnValue = CallFunc_CreateLevelSequencePlayer_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetActorOfClass_ReturnValue_3 = CallFunc_GetActorOfClass_ReturnValue_3;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue_4 = CallFunc_GetActorOfClass_ReturnValue_4;
	Parms.CallFunc_GetActorOfClass_ReturnValue_5 = CallFunc_GetActorOfClass_ReturnValue_5;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.CallFunc_dlg_get_dlg_component_is_valid = CallFunc_dlg_get_dlg_component_is_valid;
	Parms.CallFunc_dlg_get_dlg_component_dlg_reference = CallFunc_dlg_get_dlg_component_dlg_reference;
	Parms.CallFunc_Get_Player_Reference_Player_1 = CallFunc_Get_Player_Reference_Player_1;
	Parms.CallFunc_get_dlg_is_valid = CallFunc_get_dlg_is_valid;
	Parms.CallFunc_get_dlg_found_index = CallFunc_get_dlg_found_index;
	Parms.CallFunc_get_dlg_dlg_actor = CallFunc_get_dlg_dlg_actor;
	Parms.CallFunc_get_quest_is_valid = CallFunc_get_quest_is_valid;
	Parms.CallFunc_get_quest_found_index = CallFunc_get_quest_found_index;
	Parms.CallFunc_get_quest_quest_actor = CallFunc_get_quest_quest_actor;
	Parms.CallFunc_GetActorOfClass_ReturnValue_6 = CallFunc_GetActorOfClass_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_Level_Seq = K2Node_CustomEvent_Level_Seq;
	Parms.CallFunc_GetActorOfClass_ReturnValue_7 = CallFunc_GetActorOfClass_ReturnValue_7;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory_1 = CallFunc_Get_AC_Inventory_AC_Inventory_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Get_Player_Reference_Player_2 = CallFunc_Get_Player_Reference_Player_2;
	Parms.CallFunc_Get_Player_Reference_Player_3 = CallFunc_Get_Player_Reference_Player_3;
	Parms.CallFunc_GetActorOfClass_ReturnValue_8 = CallFunc_GetActorOfClass_ReturnValue_8;
	Parms.K2Node_MakeStruct_MovieSceneSequencePlaybackSettings_1 = K2Node_MakeStruct_MovieSceneSequencePlaybackSettings_1;
	Parms.CallFunc_CreateLevelSequencePlayer_OutActor_1 = CallFunc_CreateLevelSequencePlayer_OutActor_1;
	Parms.CallFunc_CreateLevelSequencePlayer_ReturnValue_1 = CallFunc_CreateLevelSequencePlayer_ReturnValue_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_MakeStruct_MovieSceneSequencePlaybackSettings_2 = K2Node_MakeStruct_MovieSceneSequencePlaybackSettings_2;
	Parms.CallFunc_CreateLevelSequencePlayer_OutActor_2 = CallFunc_CreateLevelSequencePlayer_OutActor_2;
	Parms.CallFunc_CreateLevelSequencePlayer_ReturnValue_2 = CallFunc_CreateLevelSequencePlayer_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_2 = CallFunc_GetPlayerCharacter_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_3 = CallFunc_GetPlayerCharacter_ReturnValue_3;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_4 = CallFunc_GetPlayerCharacter_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_5 = CallFunc_GetPlayerCharacter_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


