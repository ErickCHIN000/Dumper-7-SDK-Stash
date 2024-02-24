#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QuestRadarVolume.QuestRadarVolume_C
// (Actor)

class UClass* AQuestRadarVolume_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestRadarVolume_C");

	return Clss;
}


// QuestRadarVolume_C QuestRadarVolume.Default__QuestRadarVolume_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQuestRadarVolume_C* AQuestRadarVolume_C::GetDefaultObj()
{
	static class AQuestRadarVolume_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQuestRadarVolume_C*>(AQuestRadarVolume_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRadarVolume.QuestRadarVolume_C.ShouldNotBeSaved
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AQuestRadarVolume_C::ShouldNotBeSaved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "ShouldNotBeSaved");

	Params::AQuestRadarVolume_C_ShouldNotBeSaved_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuestRadarVolume.QuestRadarVolume_C.GetActorState
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName AQuestRadarVolume_C::GetActorState(bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "GetActorState");

	Params::AQuestRadarVolume_C_GetActorState_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function QuestRadarVolume.QuestRadarVolume_C.GetSelectionInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Selection                Result                                                           (Parm, OutParm, HasGetValueTypeHash)

void AQuestRadarVolume_C::GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "GetSelectionInfo");

	Params::AQuestRadarVolume_C_GetSelectionInfo_Params Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function QuestRadarVolume.QuestRadarVolume_C.QuestTaskVolumeCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestRadarVolume_C::QuestTaskVolumeCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "QuestTaskVolumeCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestRadarVolume.QuestRadarVolume_C.OnRep_IsVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void AQuestRadarVolume_C::OnRep_IsVisible(const class FString& CallFunc_Conv_BoolToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "OnRep_IsVisible");

	Params::AQuestRadarVolume_C_OnRep_IsVisible_Params Parms{};

	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRadarVolume.QuestRadarVolume_C.IsTargetVolume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQuestRadar_C*               RadarSpawner                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestRadarVolume_C::IsTargetVolume(class AQuestRadar_C* RadarSpawner, bool* Result, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "IsTargetVolume");

	Params::AQuestRadarVolume_C_IsTargetVolume_Params Parms{};

	Parms.RadarSpawner = RadarSpawner;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function QuestRadarVolume.QuestRadarVolume_C.UpdateRadarSpawner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestRadarVolume_C::UpdateRadarSpawner(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "UpdateRadarSpawner");

	Params::AQuestRadarVolume_C_UpdateRadarSpawner_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRadarVolume.QuestRadarVolume_C.SetIsVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestRadarVolume_C::SetIsVisible(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "SetIsVisible");

	Params::AQuestRadarVolume_C_SetIsVisible_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRadarVolume.QuestRadarVolume_C.SetWorkInProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestRadarVolume_C::SetWorkInProgress(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "SetWorkInProgress");

	Params::AQuestRadarVolume_C_SetWorkInProgress_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRadarVolume.QuestRadarVolume_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestRadarVolume_C::UpdateVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "UpdateVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestRadarVolume.QuestRadarVolume_C.SetStateDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHGlobals*                  CallFunc_GetSHGlobals_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestRadarVolume_C::SetStateDisabled(class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "SetStateDisabled");

	Params::AQuestRadarVolume_C_SetStateDisabled_Params Parms{};

	Parms.CallFunc_GetSHGlobals_ReturnValue = CallFunc_GetSHGlobals_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRadarVolume.QuestRadarVolume_C.SetStateEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USHGlobals*                  CallFunc_GetSHGlobals_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestRadarVolume_C::SetStateEnabled(class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "SetStateEnabled");

	Params::AQuestRadarVolume_C_SetStateEnabled_Params Parms{};

	Parms.CallFunc_GetSHGlobals_ReturnValue = CallFunc_GetSHGlobals_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRadarVolume.QuestRadarVolume_C.CompleteWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestRadarVolume_C::CompleteWork()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "CompleteWork");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestRadarVolume.QuestRadarVolume_C.StartWork
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestRadarVolume_C::StartWork(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "StartWork");

	Params::AQuestRadarVolume_C_StartWork_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRadarVolume.QuestRadarVolume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AQuestRadarVolume_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestRadarVolume.QuestRadarVolume_C.OnItemDropped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQuestRadar_C*               Radar                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestRadarVolume_C::OnItemDropped(class AQuestRadar_C* Radar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "OnItemDropped");

	Params::AQuestRadarVolume_C_OnItemDropped_Params Parms{};

	Parms.Radar = Radar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRadarVolume.QuestRadarVolume_C.SetActorState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StateName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestRadarVolume_C::SetActorState(class FName StateName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "SetActorState");

	Params::AQuestRadarVolume_C_SetActorState_Params Parms{};

	Parms.StateName = StateName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRadarVolume.QuestRadarVolume_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AQuestRadarVolume_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "ReceiveTick");

	Params::AQuestRadarVolume_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRadarVolume.QuestRadarVolume_C.OnStateRestored
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestRadarVolume_C::OnStateRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "OnStateRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestRadarVolume.QuestRadarVolume_C.CompleteQuestRadar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AQuestRadarVolume_C::CompleteQuestRadar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "CompleteQuestRadar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestRadarVolume.QuestRadarVolume_C.ExecuteUbergraph_QuestRadarVolume
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQuestRadar_C*>       CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQuestRadar_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGenericCharacter_C*         K2Node_DynamicCast_AsGeneric_Character                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTargetVolume_Result                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQuestRadar_C*               K2Node_CustomEvent_Radar                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_StateName                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USHGlobals*                  CallFunc_GetSHGlobals_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AQuestRadarVolume_C::ExecuteUbergraph_QuestRadarVolume(int32 EntryPoint, TArray<class AQuestRadar_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class AQuestRadar_C* CallFunc_Array_Get_Item, class APawn* CallFunc_GetInstigator_ReturnValue, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTargetVolume_Result, class AQuestRadar_C* K2Node_CustomEvent_Radar, class FName K2Node_Event_StateName, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRadarVolume_C", "ExecuteUbergraph_QuestRadarVolume");

	Params::AQuestRadarVolume_C_ExecuteUbergraph_QuestRadarVolume_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsGeneric_Character = K2Node_DynamicCast_AsGeneric_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsTargetVolume_Result = CallFunc_IsTargetVolume_Result;
	Parms.K2Node_CustomEvent_Radar = K2Node_CustomEvent_Radar;
	Parms.K2Node_Event_StateName = K2Node_Event_StateName;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetSHGlobals_ReturnValue = CallFunc_GetSHGlobals_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


