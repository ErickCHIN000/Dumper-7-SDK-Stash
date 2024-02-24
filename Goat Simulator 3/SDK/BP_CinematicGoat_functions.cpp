#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CinematicGoat.BP_CinematicGoat_C
// (Actor, Pawn)

class UClass* ABP_CinematicGoat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CinematicGoat_C");

	return Clss;
}


// BP_CinematicGoat_C BP_CinematicGoat.Default__BP_CinematicGoat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CinematicGoat_C* ABP_CinematicGoat_C::GetDefaultObj()
{
	static class ABP_CinematicGoat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CinematicGoat_C*>(ABP_CinematicGoat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CinematicGoat.BP_CinematicGoat_C.Get walk-in spline
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USplineComponent*            Spline                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGAlternativeGoatDataAsset* CallFunc_GetCurrentAltGoat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SplineActor_C*           CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CinematicGoat_C::Get_walkMinusin_spline(class USplineComponent** Spline, bool CallFunc_IsValid_ReturnValue, class UGGAlternativeGoatDataAsset* CallFunc_GetCurrentAltGoat_ReturnValue, class ABP_SplineActor_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicGoat_C", "Get walk-in spline");

	Params::ABP_CinematicGoat_C_Get_walkMinusin_spline_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentAltGoat_ReturnValue = CallFunc_GetCurrentAltGoat_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Spline != nullptr)
		*Spline = Parms.Spline;

}


// Function BP_CinematicGoat.BP_CinematicGoat_C.HasFinishedWalkIn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Finished                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CinematicGoat_C::HasFinishedWalkIn(bool* Finished, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicGoat_C", "HasFinishedWalkIn");

	Params::ABP_CinematicGoat_C_HasFinishedWalkIn_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Finished != nullptr)
		*Finished = Parms.Finished;

}


// Function BP_CinematicGoat.BP_CinematicGoat_C.Has valid walk-in sequence
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_CinematicGoat_C::Has_valid_walkMinusin_sequence(bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicGoat_C", "Has valid walk-in sequence");

	Params::ABP_CinematicGoat_C_Has_valid_walkMinusin_sequence_Params Parms{};

	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CinematicGoat.BP_CinematicGoat_C.OnLoaded_1E8D15934606A5D54B79EC9A3AE3977B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicGoat_C::OnLoaded_1E8D15934606A5D54B79EC9A3AE3977B(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicGoat_C", "OnLoaded_1E8D15934606A5D54B79EC9A3AE3977B");

	Params::ABP_CinematicGoat_C_OnLoaded_1E8D15934606A5D54B79EC9A3AE3977B_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicGoat.BP_CinematicGoat_C.PlayWalkInSeq
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CinematicGoat_C::PlayWalkInSeq()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicGoat_C", "PlayWalkInSeq");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CinematicGoat.BP_CinematicGoat_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CinematicGoat_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicGoat_C", "ReceiveTick");

	Params::ABP_CinematicGoat_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicGoat.BP_CinematicGoat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CinematicGoat_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicGoat_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CinematicGoat.BP_CinematicGoat_C.Prepare for being grabbed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CinematicGoat_C::Prepare_for_being_grabbed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicGoat_C", "Prepare for being grabbed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CinematicGoat.BP_CinematicGoat_C.Clear Movement Mode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CinematicGoat_C::Clear_Movement_Mode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicGoat_C", "Clear Movement Mode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CinematicGoat.BP_CinematicGoat_C.OnFinished_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CinematicGoat_C::OnFinished_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicGoat_C", "OnFinished_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CinematicGoat.BP_CinematicGoat_C.ExecuteUbergraph_BP_CinematicGoat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequence*              K2Node_DynamicCast_AsLevel_Sequence                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALevelSequenceActor*         CallFunc_CreateLevelSequencePlayer_OutActor                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateLevelSequencePlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Has_valid_walk_in_sequence_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveEffectSource_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveEffectSource_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USplineComponent*            CallFunc_Get_walk_in_spline_Spline                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGSplineFollowComponent*    CallFunc_StartFollowingSpline_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasFinishedWalkIn_Finished                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_CinematicGoat_C::ExecuteUbergraph_BP_CinematicGoat(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, class UObject* Temp_object_Variable, class ULevelSequence* K2Node_DynamicCast_AsLevel_Sequence, bool K2Node_DynamicCast_bSuccess, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_DeltaSeconds, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_Has_valid_walk_in_sequence_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_RemoveEffectSource_ReturnValue, bool CallFunc_RemoveEffectSource_ReturnValue_1, class USplineComponent* CallFunc_Get_walk_in_spline_Spline, class UGGSplineFollowComponent* CallFunc_StartFollowingSpline_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasFinishedWalkIn_Finished)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicGoat_C", "ExecuteUbergraph_BP_CinematicGoat");

	Params::ABP_CinematicGoat_C_ExecuteUbergraph_BP_CinematicGoat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsLevel_Sequence = K2Node_DynamicCast_AsLevel_Sequence;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateLevelSequencePlayer_OutActor = CallFunc_CreateLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateLevelSequencePlayer_ReturnValue = CallFunc_CreateLevelSequencePlayer_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_Has_valid_walk_in_sequence_ReturnValue = CallFunc_Has_valid_walk_in_sequence_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_RemoveEffectSource_ReturnValue = CallFunc_RemoveEffectSource_ReturnValue;
	Parms.CallFunc_RemoveEffectSource_ReturnValue_1 = CallFunc_RemoveEffectSource_ReturnValue_1;
	Parms.CallFunc_Get_walk_in_spline_Spline = CallFunc_Get_walk_in_spline_Spline;
	Parms.CallFunc_StartFollowingSpline_ReturnValue = CallFunc_StartFollowingSpline_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasFinishedWalkIn_Finished = CallFunc_HasFinishedWalkIn_Finished;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CinematicGoat.BP_CinematicGoat_C.FinishedWalkInSequence__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CinematicGoat_C::FinishedWalkInSequence__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CinematicGoat_C", "FinishedWalkInSequence__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


