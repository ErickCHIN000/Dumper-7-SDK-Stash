#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Miasma_Audio_Manager.BP_Miasma_Audio_Manager_C
// (None)

class UClass* UBP_Miasma_Audio_Manager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Miasma_Audio_Manager_C");

	return Clss;
}


// BP_Miasma_Audio_Manager_C BP_Miasma_Audio_Manager.Default__BP_Miasma_Audio_Manager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Miasma_Audio_Manager_C* UBP_Miasma_Audio_Manager_C::GetDefaultObj()
{
	static class UBP_Miasma_Audio_Manager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Miasma_Audio_Manager_C*>(UBP_Miasma_Audio_Manager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Miasma_Audio_Manager.BP_Miasma_Audio_Manager_C.CheckNightmareRealm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScopedAkComponent*          ScopedAkComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRealmPlacementRequirement  NightmareRealm                                                   (Edit, BlueprintVisible)
// class UObject*                     Temp_object_Variable                                             (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesRealmMeetRequirement_RequirementMet                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Miasma_Audio_Manager_C::CheckNightmareRealm(class UScopedAkComponent* ScopedAkComponent, const struct FRealmPlacementRequirement& NightmareRealm, class UObject* Temp_object_Variable, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_IsClosed_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_DoesRealmMeetRequirement_RequirementMet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Miasma_Audio_Manager_C", "CheckNightmareRealm");

	Params::UBP_Miasma_Audio_Manager_C_CheckNightmareRealm_Params Parms{};

	Parms.ScopedAkComponent = ScopedAkComponent;
	Parms.NightmareRealm = NightmareRealm;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_DoesRealmMeetRequirement_RequirementMet = CallFunc_DoesRealmMeetRequirement_RequirementMet;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Miasma_Audio_Manager.BP_Miasma_Audio_Manager_C.CheckForCooldown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     AverageLocation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          ScopedAkComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Miasma_Audio_Manager_C::CheckForCooldown(const struct FVector& AverageLocation, class UScopedAkComponent* ScopedAkComponent, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Miasma_Audio_Manager_C", "CheckForCooldown");

	Params::UBP_Miasma_Audio_Manager_C_CheckForCooldown_Params Parms{};

	Parms.AverageLocation = AverageLocation;
	Parms.ScopedAkComponent = ScopedAkComponent;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Miasma_Audio_Manager.BP_Miasma_Audio_Manager_C.MiasmaEventEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAkCallbackType         CallbackType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkCallbackInfo*             CallbackInfo                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkEventCallbackInfo*        K2Node_DynamicCast_AsAk_Event_Callback_Info                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Miasma_Audio_Manager_C::MiasmaEventEnded(enum class EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo, class UAkEventCallbackInfo* K2Node_DynamicCast_AsAk_Event_Callback_Info, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Miasma_Audio_Manager_C", "MiasmaEventEnded");

	Params::UBP_Miasma_Audio_Manager_C_MiasmaEventEnded_Params Parms{};

	Parms.CallbackType = CallbackType;
	Parms.CallbackInfo = CallbackInfo;
	Parms.K2Node_DynamicCast_AsAk_Event_Callback_Info = K2Node_DynamicCast_AsAk_Event_Callback_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Miasma_Audio_Manager.BP_Miasma_Audio_Manager_C.SetMultipositionAudio
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMultiEmitter                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             MiasmaLocations                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UScopedAkComponent*          ScopedAkComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          CallFunc_LocationsToTransforms_Transforms                        (ReferenceParm)

void UBP_Miasma_Audio_Manager_C::SetMultipositionAudio(bool IsMultiEmitter, TArray<struct FVector>& MiasmaLocations, class UScopedAkComponent* ScopedAkComponent, bool CallFunc_IsValid_ReturnValue, TArray<struct FTransform>& CallFunc_LocationsToTransforms_Transforms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Miasma_Audio_Manager_C", "SetMultipositionAudio");

	Params::UBP_Miasma_Audio_Manager_C_SetMultipositionAudio_Params Parms{};

	Parms.IsMultiEmitter = IsMultiEmitter;
	Parms.MiasmaLocations = MiasmaLocations;
	Parms.ScopedAkComponent = ScopedAkComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LocationsToTransforms_Transforms = CallFunc_LocationsToTransforms_Transforms;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Miasma_Audio_Manager.BP_Miasma_Audio_Manager_C.GetEventFromGroupSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             BoundAverageCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               AkEvent                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Miasma_Audio_Manager_C::GetEventFromGroupSize(double BoundAverageCount, class UAkAudioEvent** AkEvent, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Miasma_Audio_Manager_C", "GetEventFromGroupSize");

	Params::UBP_Miasma_Audio_Manager_C_GetEventFromGroupSize_Params Parms{};

	Parms.BoundAverageCount = BoundAverageCount;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_InRange_FloatFloat_ReturnValue = CallFunc_InRange_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AkEvent != nullptr)
		*AkEvent = Parms.AkEvent;

}


// Function BP_Miasma_Audio_Manager.BP_Miasma_Audio_Manager_C.MiasmaAudioEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             Locations                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                             BoundAverageCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsMultiEmitter                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               AkEvent                                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          ScopedAkComponent                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     AverageLocation                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             MiasmaLocations                                                  (Edit, BlueprintVisible)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScopedAkComponent*          CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_GetEventFromGroupSize_AkEvent                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVectorArrayAverage_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Miasma_Audio_Manager_C::MiasmaAudioEvent(TArray<struct FVector>& Locations, double BoundAverageCount, bool IsMultiEmitter, class UAkAudioEvent* AkEvent, class UScopedAkComponent* ScopedAkComponent, const struct FVector& AverageLocation, const TArray<struct FVector>& MiasmaLocations, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_PostAkEvent_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, class UAkAudioEvent* CallFunc_GetEventFromGroupSize_AkEvent, const struct FVector& CallFunc_GetVectorArrayAverage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Miasma_Audio_Manager_C", "MiasmaAudioEvent");

	Params::UBP_Miasma_Audio_Manager_C_MiasmaAudioEvent_Params Parms{};

	Parms.Locations = Locations;
	Parms.BoundAverageCount = BoundAverageCount;
	Parms.IsMultiEmitter = IsMultiEmitter;
	Parms.AkEvent = AkEvent;
	Parms.ScopedAkComponent = ScopedAkComponent;
	Parms.AverageLocation = AverageLocation;
	Parms.MiasmaLocations = MiasmaLocations;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PostAkEvent_ReturnValue = CallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue = CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_GetEventFromGroupSize_AkEvent = CallFunc_GetEventFromGroupSize_AkEvent;
	Parms.CallFunc_GetVectorArrayAverage_ReturnValue = CallFunc_GetVectorArrayAverage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Miasma_Audio_Manager.BP_Miasma_Audio_Manager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Miasma_Audio_Manager_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Miasma_Audio_Manager_C", "ReceiveTick");

	Params::UBP_Miasma_Audio_Manager_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Miasma_Audio_Manager.BP_Miasma_Audio_Manager_C.ExecuteUbergraph_BP_Miasma_Audio_Manager
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Miasma_Audio_Manager_C::ExecuteUbergraph_BP_Miasma_Audio_Manager(int32 EntryPoint, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Miasma_Audio_Manager_C", "ExecuteUbergraph_BP_Miasma_Audio_Manager");

	Params::UBP_Miasma_Audio_Manager_C_ExecuteUbergraph_BP_Miasma_Audio_Manager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


