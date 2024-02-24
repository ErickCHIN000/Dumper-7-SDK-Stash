#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HuntingClue.BP_HuntingClue_C
// (Actor)

class UClass* ABP_HuntingClue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HuntingClue_C");

	return Clss;
}


// BP_HuntingClue_C BP_HuntingClue.Default__BP_HuntingClue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HuntingClue_C* ABP_HuntingClue_C::GetDefaultObj()
{
	static class ABP_HuntingClue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HuntingClue_C*>(ABP_HuntingClue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HuntingClue.BP_HuntingClue_C.GetHuntingWidgetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HuntingClue_C::GetHuntingWidgetLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "GetHuntingWidgetLocation");

	Params::ABP_HuntingClue_C_GetHuntingWidgetLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function BP_HuntingClue.BP_HuntingClue_C.GatherSplineLocations
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FVector>             Locations                                                        (Parm, OutParm)
// TArray<struct FVector>             NewSplineLocations                                               (Edit, BlueprintVisible)
// struct FVector                     SegmentDistance                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Segments                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Distance                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHuntingClueSetup           CallFunc_GetHuntingClueSetupStruct_HuntingClueSetup              (None)
// enum class EValid                  CallFunc_GetHuntingClueSetupStruct_Paths                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNavigationSystemV1*         CallFunc_GetNavigationSystem_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Divide_VectorInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_ProjectPointToNavigation_ProjectedLocation           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_ProjectPointToNavigation_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_InverseTransformLocation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HuntingClue_C::GatherSplineLocations(bool* Return, TArray<struct FVector>* Locations, const TArray<struct FVector>& NewSplineLocations, const struct FVector& SegmentDistance, int32 Segments, const struct FVector& Distance, int32 Temp_int_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FHuntingClueSetup& CallFunc_GetHuntingClueSetupStruct_HuntingClueSetup, enum class EValid CallFunc_GetHuntingClueSetupStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Divide_FloatFloat_ReturnValue, class UNavigationSystemV1* CallFunc_GetNavigationSystem_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_Divide_VectorInt_ReturnValue, const struct FVector& CallFunc_K2_ProjectPointToNavigation_ProjectedLocation, bool CallFunc_K2_ProjectPointToNavigation_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "GatherSplineLocations");

	Params::ABP_HuntingClue_C_GatherSplineLocations_Params Parms{};

	Parms.NewSplineLocations = NewSplineLocations;
	Parms.SegmentDistance = SegmentDistance;
	Parms.Segments = Segments;
	Parms.Distance = Distance;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetHuntingClueSetupStruct_HuntingClueSetup = CallFunc_GetHuntingClueSetupStruct_HuntingClueSetup;
	Parms.CallFunc_GetHuntingClueSetupStruct_Paths = CallFunc_GetHuntingClueSetupStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetNavigationSystem_ReturnValue = CallFunc_GetNavigationSystem_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_Divide_VectorInt_ReturnValue = CallFunc_Divide_VectorInt_ReturnValue;
	Parms.CallFunc_K2_ProjectPointToNavigation_ProjectedLocation = CallFunc_K2_ProjectPointToNavigation_ProjectedLocation;
	Parms.CallFunc_K2_ProjectPointToNavigation_ReturnValue = CallFunc_K2_ProjectPointToNavigation_ReturnValue;
	Parms.CallFunc_InverseTransformLocation_ReturnValue = CallFunc_InverseTransformLocation_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

	if (Locations != nullptr)
		*Locations = std::move(Parms.Locations);

}


// Function BP_HuntingClue.BP_HuntingClue_C.UpdatePerceptionState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_HuntingClue_C::UpdatePerceptionState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "UpdatePerceptionState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HuntingClue.BP_HuntingClue_C.UpdateStateVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_HuntingClue_C::UpdateStateVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "UpdateStateVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HuntingClue.BP_HuntingClue_C.InitVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_HuntingClue_C::InitVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "InitVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HuntingClue.BP_HuntingClue_C.UpdateState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHuntingClueState       OldState                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHuntingClueState       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHuntingClueState       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHuntingClueState       Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HuntingManager_C*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHuntingClueState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHuntingClueState       K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HuntingClue_C::UpdateState(bool Highlight, enum class EHuntingClueState OldState, bool Temp_bool_Variable, enum class EHuntingClueState Temp_byte_Variable, bool Temp_bool_Variable_1, enum class EHuntingClueState Temp_byte_Variable_1, enum class EHuntingClueState Temp_byte_Variable_2, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UBP_HuntingManager_C* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class EHuntingClueState K2Node_Select_Default, enum class EHuntingClueState K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "UpdateState");

	Params::ABP_HuntingClue_C_UpdateState_Params Parms{};

	Parms.Highlight = Highlight;
	Parms.OldState = OldState;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HuntingClue.BP_HuntingClue_C.FocusUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewFocused                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CurrentlyFocused                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HuntingClue_C::FocusUpdated(class AActor* Actor, bool NewFocused, bool CurrentlyFocused, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "FocusUpdated");

	Params::ABP_HuntingClue_C_FocusUpdated_Params Parms{};

	Parms.Actor = Actor;
	Parms.NewFocused = NewFocused;
	Parms.CurrentlyFocused = CurrentlyFocused;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HuntingClue.BP_HuntingClue_C.OnRep_SplineLocations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_HuntingClue_C::OnRep_SplineLocations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "OnRep_SplineLocations");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HuntingClue.BP_HuntingClue_C.RequestSplineLocations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HuntingManager_C*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HuntingClue_C::RequestSplineLocations(enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UBP_HuntingManager_C* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "RequestSplineLocations");

	Params::ABP_HuntingClue_C_RequestSplineLocations_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HuntingClue.BP_HuntingClue_C.UpdateTrail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_HuntingClue_C::UpdateTrail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "UpdateTrail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HuntingClue.BP_HuntingClue_C.OnRep_NextHuntingClue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_HuntingClue_C::OnRep_NextHuntingClue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "OnRep_NextHuntingClue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HuntingClue.BP_HuntingClue_C.UpdateVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_HuntingClue_C::UpdateVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "UpdateVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HuntingClue.BP_HuntingClue_C.SetNextClue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_HuntingClue_C*           Clue                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HuntingClue_C::SetNextClue(class ABP_HuntingClue_C* Clue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "SetNextClue");

	Params::ABP_HuntingClue_C_SetNextClue_Params Parms{};

	Parms.Clue = Clue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HuntingClue.BP_HuntingClue_C.RegisterHuntingWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_HuntingClue_C::RegisterHuntingWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "RegisterHuntingWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HuntingClue.BP_HuntingClue_C.GetNextClueDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HuntingClue_C::GetNextClueDistance(float* Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "GetNextClueDistance");

	Params::ABP_HuntingClue_C_GetNextClueDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function BP_HuntingClue.BP_HuntingClue_C.SendSplineLocations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             Locations                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_HuntingClue_C::SendSplineLocations(TArray<struct FVector>& Locations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "SendSplineLocations");

	Params::ABP_HuntingClue_C_SendSplineLocations_Params Parms{};

	Parms.Locations = Locations;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HuntingClue.BP_HuntingClue_C.BndEvt__Highlightable_K2Node_ComponentBoundEvent_1_HighlightChangedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UHighlightableComponent*     Highlightable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHighlighted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HuntingClue_C::BndEvt__Highlightable_K2Node_ComponentBoundEvent_1_HighlightChangedSignature__DelegateSignature(class UHighlightableComponent* Highlightable, class UPrimitiveComponent* Component, bool bHighlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "BndEvt__Highlightable_K2Node_ComponentBoundEvent_1_HighlightChangedSignature__DelegateSignature");

	Params::ABP_HuntingClue_C_BndEvt__Highlightable_K2Node_ComponentBoundEvent_1_HighlightChangedSignature__DelegateSignature_Params Parms{};

	Parms.Highlightable = Highlightable;
	Parms.Component = Component;
	Parms.bHighlighted = bHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HuntingClue.BP_HuntingClue_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_HuntingClue_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_HuntingClue.BP_HuntingClue_C.ExecuteUbergraph_BP_HuntingClue
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             K2Node_Event_Locations                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UHighlightableComponent*     K2Node_ComponentBoundEvent_Highlightable                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_Component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bHighlighted                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UBP_HuntingManager_C*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HuntingClue_C::ExecuteUbergraph_BP_HuntingClue(int32 EntryPoint, TArray<struct FVector>& K2Node_Event_Locations, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHighlightableComponent* K2Node_ComponentBoundEvent_Highlightable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_Component, bool K2Node_ComponentBoundEvent_bHighlighted, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_HuntingManager_C* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "ExecuteUbergraph_BP_HuntingClue");

	Params::ABP_HuntingClue_C_ExecuteUbergraph_BP_HuntingClue_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Locations = K2Node_Event_Locations;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Highlightable = K2Node_ComponentBoundEvent_Highlightable;
	Parms.K2Node_ComponentBoundEvent_Component = K2Node_ComponentBoundEvent_Component;
	Parms.K2Node_ComponentBoundEvent_bHighlighted = K2Node_ComponentBoundEvent_bHighlighted;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_HuntingClue.BP_HuntingClue_C.ClueUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_HuntingClue_C::ClueUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HuntingClue_C", "ClueUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


