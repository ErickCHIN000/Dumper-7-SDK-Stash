#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CinematicChair.BP_CinematicChair_C
// (Actor)

class UClass* ABP_CinematicChair_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CinematicChair_C");

	return Clss;
}


// BP_CinematicChair_C BP_CinematicChair.Default__BP_CinematicChair_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CinematicChair_C* ABP_CinematicChair_C::GetDefaultObj()
{
	static class ABP_CinematicChair_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CinematicChair_C*>(ABP_CinematicChair_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CinematicChair.BP_CinematicChair_C.GetSeatedPlayerControlRotation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetAttachedPlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FRotator ABP_CinematicChair_C::GetSeatedPlayerControlRotation(class AIcarusPlayerCharacter* CallFunc_GetAttachedPlayer_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicChair_C", "GetSeatedPlayerControlRotation");

	Params::ABP_CinematicChair_C_GetSeatedPlayerControlRotation_Params Parms{};

	Parms.CallFunc_GetAttachedPlayer_ReturnValue = CallFunc_GetAttachedPlayer_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CinematicChair.BP_CinematicChair_C.GetPossesTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPossesTarget_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CinematicPawn_C*         K2Node_DynamicCast_AsBP_Cinematic_Pawn                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class APawn* ABP_CinematicChair_C::GetPossesTarget(class AActor* CallFunc_GetAttachParentActor_ReturnValue, class APawn* CallFunc_GetPossesTarget_ReturnValue, class ABP_CinematicPawn_C* K2Node_DynamicCast_AsBP_Cinematic_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicChair_C", "GetPossesTarget");

	Params::ABP_CinematicChair_C_GetPossesTarget_Params Parms{};

	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.CallFunc_GetPossesTarget_ReturnValue = CallFunc_GetPossesTarget_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Cinematic_Pawn = K2Node_DynamicCast_AsBP_Cinematic_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CinematicChair.BP_CinematicChair_C.IsDriverSeat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_CinematicChair_C::IsDriverSeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicChair_C", "IsDriverSeat");

	Params::ABP_CinematicChair_C_IsDriverSeat_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CinematicChair.BP_CinematicChair_C.LeaveSeat
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bChangeSeat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bForce                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LeaveSeat_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_CinematicChair_C::LeaveSeat(bool bChangeSeat, bool bForce, bool CallFunc_LeaveSeat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicChair_C", "LeaveSeat");

	Params::ABP_CinematicChair_C_LeaveSeat_Params Parms{};

	Parms.bChangeSeat = bChangeSeat;
	Parms.bForce = bForce;
	Parms.CallFunc_LeaveSeat_ReturnValue = CallFunc_LeaveSeat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CinematicChair.BP_CinematicChair_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicChair_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicChair_C", "ReceiveTick");

	Params::ABP_CinematicChair_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicChair.BP_CinematicChair_C.OnAttachedPlayerDestroyed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedAttachedPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicChair_C::OnAttachedPlayerDestroyed(class AActor* DestroyedAttachedPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicChair_C", "OnAttachedPlayerDestroyed");

	Params::ABP_CinematicChair_C_OnAttachedPlayerDestroyed_Params Parms{};

	Parms.DestroyedAttachedPlayer = DestroyedAttachedPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicChair.BP_CinematicChair_C.SettingsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPostProcessSettings        Settings                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CinematicChair_C::SettingsUpdated(const struct FPostProcessSettings& Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicChair_C", "SettingsUpdated");

	Params::ABP_CinematicChair_C_SettingsUpdated_Params Parms{};

	Parms.Settings = Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicChair.BP_CinematicChair_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_3
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicChair_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_3(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicChair_C", "InpAxisEvt_LookUp_K2Node_InputAxisEvent_3");

	Params::ABP_CinematicChair_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_3_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicChair.BP_CinematicChair_C.InpAxisEvt_LookRight_K2Node_InputAxisEvent_1
// (BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicChair_C::InpAxisEvt_LookRight_K2Node_InputAxisEvent_1(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicChair_C", "InpAxisEvt_LookRight_K2Node_InputAxisEvent_1");

	Params::ABP_CinematicChair_C_InpAxisEvt_LookRight_K2Node_InputAxisEvent_1_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicChair.BP_CinematicChair_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicChair_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicChair_C", "ReceiveEndPlay");

	Params::ABP_CinematicChair_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicChair.BP_CinematicChair_C.ClearOwningController
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CinematicChair_C::ClearOwningController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicChair_C", "ClearOwningController");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CinematicChair.BP_CinematicChair_C.ExecuteUbergraph_BP_CinematicChair
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetPossesTargetController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_DestroyedAttachedPlayer                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetParentActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIRelationshipsRowHandle   CallFunc_MakeLiteralAIRelationships_ReturnValue                  (NoDestructor, HasGetValueTypeHash)
// struct FAIRelationshipsRowHandle   CallFunc_MakeLiteralAIRelationships_ReturnValue_1                (NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetCheatController_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACheatController*            CallFunc_GetCheatController_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetCheatController_Paths_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACheatController*            CallFunc_GetCheatController_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetParentActor_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_SpectatorUI_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPostProcessSettings        K2Node_CustomEvent_Settings                                      (None)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_GetIcarusPlayerCharacterBP_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// float                              K2Node_InputAxisEvent_AxisValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier*             CallFunc_FindCameraModifierByClass_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier*             CallFunc_AddNewCameraModifier_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_InputAxisEvent_AxisValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier*             CallFunc_FindCameraModifierByClass_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveCameraModifier_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CinematicChair_C::ExecuteUbergraph_BP_CinematicChair(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, class AIcarusPlayerController* CallFunc_GetPossesTargetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsLocalPlayerController_ReturnValue, class AActor* K2Node_Event_DestroyedAttachedPlayer, bool CallFunc_IsValid_ReturnValue_4, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_5, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetParentActor_ReturnValue, const struct FAIRelationshipsRowHandle& CallFunc_MakeLiteralAIRelationships_ReturnValue, const struct FAIRelationshipsRowHandle& CallFunc_MakeLiteralAIRelationships_ReturnValue_1, enum class EValid CallFunc_GetCheatController_Paths, class ACheatController* CallFunc_GetCheatController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetCheatController_Paths_1, class ACheatController* CallFunc_GetCheatController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess_1, class AActor* CallFunc_GetParentActor_ReturnValue_1, class UW_SpectatorUI_C* CallFunc_Create_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_Has_Been_Initd_Variable, const struct FPostProcessSettings& K2Node_CustomEvent_Settings, bool CallFunc_IsServer_ReturnValue_1, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_1, bool K2Node_DynamicCast_bSuccess_3, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_GetIcarusPlayerCharacterBP_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, float K2Node_InputAxisEvent_AxisValue_1, bool Temp_bool_IsClosed_Variable, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class UCameraModifier* CallFunc_FindCameraModifierByClass_ReturnValue, class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, float K2Node_InputAxisEvent_AxisValue, class UCameraModifier* CallFunc_FindCameraModifierByClass_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_RemoveCameraModifier_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicChair_C", "ExecuteUbergraph_BP_CinematicChair");

	Params::ABP_CinematicChair_C_ExecuteUbergraph_BP_CinematicChair_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetPossesTargetController_ReturnValue = CallFunc_GetPossesTargetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.K2Node_Event_DestroyedAttachedPlayer = K2Node_Event_DestroyedAttachedPlayer;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetParentActor_ReturnValue = CallFunc_GetParentActor_ReturnValue;
	Parms.CallFunc_MakeLiteralAIRelationships_ReturnValue = CallFunc_MakeLiteralAIRelationships_ReturnValue;
	Parms.CallFunc_MakeLiteralAIRelationships_ReturnValue_1 = CallFunc_MakeLiteralAIRelationships_ReturnValue_1;
	Parms.CallFunc_GetCheatController_Paths = CallFunc_GetCheatController_Paths;
	Parms.CallFunc_GetCheatController_ReturnValue = CallFunc_GetCheatController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCheatController_Paths_1 = CallFunc_GetCheatController_Paths_1;
	Parms.CallFunc_GetCheatController_ReturnValue_1 = CallFunc_GetCheatController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetParentActor_ReturnValue_1 = CallFunc_GetParentActor_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_Settings = K2Node_CustomEvent_Settings;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_1 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetIcarusPlayerCharacterBP_ReturnValue = CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_InputAxisEvent_AxisValue_1 = K2Node_InputAxisEvent_AxisValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_FindCameraModifierByClass_ReturnValue = CallFunc_FindCameraModifierByClass_ReturnValue;
	Parms.CallFunc_AddNewCameraModifier_ReturnValue = CallFunc_AddNewCameraModifier_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue_1 = CallFunc_GetPlayerCameraManager_ReturnValue_1;
	Parms.K2Node_InputAxisEvent_AxisValue = K2Node_InputAxisEvent_AxisValue;
	Parms.CallFunc_FindCameraModifierByClass_ReturnValue_1 = CallFunc_FindCameraModifierByClass_ReturnValue_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_RemoveCameraModifier_ReturnValue = CallFunc_RemoveCameraModifier_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


