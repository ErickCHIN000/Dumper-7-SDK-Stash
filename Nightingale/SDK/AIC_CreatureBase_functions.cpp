#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIC_CreatureBase.AIC_CreatureBase_C
// (Actor)

class UClass* AAIC_CreatureBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIC_CreatureBase_C");

	return Clss;
}


// AIC_CreatureBase_C AIC_CreatureBase.Default__AIC_CreatureBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAIC_CreatureBase_C* AAIC_CreatureBase_C::GetDefaultObj()
{
	static class AAIC_CreatureBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAIC_CreatureBase_C*>(AAIC_CreatureBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetThreat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ThreateningActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Threat                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetThreat(class AActor* ThreateningActor, double* Threat, bool CallFunc_IsValid_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetThreat");

	Params::AAIC_CreatureBase_C_GetThreat_Params Parms{};

	Parms.ThreateningActor = ThreateningActor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Threat != nullptr)
		*Threat = Parms.Threat;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.ModifyThreat
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ThreateningActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Threat                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             HighestThreat                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CurrentThreat                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::ModifyThreat(class AActor* ThreateningActor, double Threat, bool* Success, double HighestThreat, class AActor* CurrentThreat, int32 Temp_int_Array_Index_Variable, bool CallFunc_Map_Remove_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class AActor*>& CallFunc_Map_Keys_Keys, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "ModifyThreat");

	Params::AAIC_CreatureBase_C_ModifyThreat_Params Parms{};

	Parms.ThreateningActor = ThreateningActor;
	Parms.Threat = Threat;
	Parms.HighestThreat = HighestThreat;
	Parms.CurrentThreat = CurrentThreat;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetEmployer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Employer                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetEmployer(class AActor** Employer, class FName CallFunc_GetBBVar_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetEmployer");

	Params::AAIC_CreatureBase_C_GetEmployer_Params Parms{};

	Parms.CallFunc_GetBBVar_ReturnValue = CallFunc_GetBBVar_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Employer != nullptr)
		*Employer = Parms.Employer;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetAlertnessLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAlertnessLevelType     AlertnessLevel                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AnimationStates_C>K2Node_DynamicCast_AsBPI_Animation_States                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAlertnessLevelType     CallFunc_GetAlertnessLevel_AlertnessLevel                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetAlertnessLevel(enum class EAlertnessLevelType* AlertnessLevel, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_AnimationStates_C> K2Node_DynamicCast_AsBPI_Animation_States, bool K2Node_DynamicCast_bSuccess, enum class EAlertnessLevelType CallFunc_GetAlertnessLevel_AlertnessLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetAlertnessLevel");

	Params::AAIC_CreatureBase_C_GetAlertnessLevel_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Animation_States = K2Node_DynamicCast_AsBPI_Animation_States;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAlertnessLevel_AlertnessLevel = CallFunc_GetAlertnessLevel_AlertnessLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (AlertnessLevel != nullptr)
		*AlertnessLevel = Parms.AlertnessLevel;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.SetAlertnessLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAlertnessLevelType     AlertnessLevel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AnimationStates_C>K2Node_DynamicCast_AsBPI_Animation_States                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetAlertnessLevel_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::SetAlertnessLevel(enum class EAlertnessLevelType AlertnessLevel, bool* Success, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_AnimationStates_C> K2Node_DynamicCast_AsBPI_Animation_States, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetAlertnessLevel_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "SetAlertnessLevel");

	Params::AAIC_CreatureBase_C_SetAlertnessLevel_Params Parms{};

	Parms.AlertnessLevel = AlertnessLevel;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Animation_States = K2Node_DynamicCast_AsBPI_Animation_States;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetAlertnessLevel_Success = CallFunc_SetAlertnessLevel_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.ClearActionStationMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_ActionStationUser_C>K2Node_DynamicCast_AsBPI_Action_Station_User                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClearActionStationMode_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::ClearActionStationMode(bool* Success, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_ActionStationUser_C> K2Node_DynamicCast_AsBPI_Action_Station_User, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ClearActionStationMode_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "ClearActionStationMode");

	Params::AAIC_CreatureBase_C_ClearActionStationMode_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Action_Station_User = K2Node_DynamicCast_AsBPI_Action_Station_User;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ClearActionStationMode_Success = CallFunc_ClearActionStationMode_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.SetActionStationMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_ActionStationUser_C>K2Node_DynamicCast_AsBPI_Action_Station_User                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetActionStationMode_Success                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::SetActionStationMode(bool* Success, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_ActionStationUser_C> K2Node_DynamicCast_AsBPI_Action_Station_User, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetActionStationMode_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "SetActionStationMode");

	Params::AAIC_CreatureBase_C_SetActionStationMode_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Action_Station_User = K2Node_DynamicCast_AsBPI_Action_Station_User;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetActionStationMode_Success = CallFunc_SetActionStationMode_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.ClearBTreeActionStation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_1                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::ClearBTreeActionStation(bool* Success, class FName CallFunc_GetBBVar_ReturnValue, class FName CallFunc_GetBBVar_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "ClearBTreeActionStation");

	Params::AAIC_CreatureBase_C_ClearBTreeActionStation_Params Parms{};

	Parms.CallFunc_GetBBVar_ReturnValue = CallFunc_GetBBVar_ReturnValue;
	Parms.CallFunc_GetBBVar_ReturnValue_1 = CallFunc_GetBBVar_ReturnValue_1;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue_1 = CallFunc_GetBlackboard_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.SetBTreeActionStation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActionStation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::SetBTreeActionStation(class AActor* ActionStation, bool* Success, class FName CallFunc_GetBBVar_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "SetBTreeActionStation");

	Params::AAIC_CreatureBase_C_SetBTreeActionStation_Params Parms{};

	Parms.ActionStation = ActionStation;
	Parms.CallFunc_GetBBVar_ReturnValue = CallFunc_GetBBVar_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.ServerStopMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_ActionStationUser_C>K2Node_DynamicCast_AsBPI_Action_Station_User                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ServerStopMontage_bSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::ServerStopMontage(bool* bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_ActionStationUser_C> K2Node_DynamicCast_AsBPI_Action_Station_User, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ServerStopMontage_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "ServerStopMontage");

	Params::AAIC_CreatureBase_C_ServerStopMontage_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Action_Station_User = K2Node_DynamicCast_AsBPI_Action_Station_User;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ServerStopMontage_bSuccess = CallFunc_ServerStopMontage_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.ServerPlayMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Section                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bDisableBlendspace                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bLooping                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_ActionStationUser_C>K2Node_DynamicCast_AsBPI_Action_Station_User                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ServerPlayMontage_bSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::ServerPlayMontage(class UAnimMontage* Montage, double PlayRate, class FName Section, bool bDisableBlendspace, bool bLooping, bool* bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_ActionStationUser_C> K2Node_DynamicCast_AsBPI_Action_Station_User, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ServerPlayMontage_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "ServerPlayMontage");

	Params::AAIC_CreatureBase_C_ServerPlayMontage_Params Parms{};

	Parms.Montage = Montage;
	Parms.PlayRate = PlayRate;
	Parms.Section = Section;
	Parms.bDisableBlendspace = bDisableBlendspace;
	Parms.bLooping = bLooping;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Action_Station_User = K2Node_DynamicCast_AsBPI_Action_Station_User;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ServerPlayMontage_bSuccess = CallFunc_ServerPlayMontage_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GrazeResourceNode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AResourceNodeIIMBase*        ResourceNode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Herbivore_C>K2Node_DynamicCast_AsBPI_Herbivore                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GrazeResourceNode_bSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GrazeResourceNode(class AResourceNodeIIMBase* ResourceNode, bool* bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_Herbivore_C> K2Node_DynamicCast_AsBPI_Herbivore, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GrazeResourceNode_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GrazeResourceNode");

	Params::AAIC_CreatureBase_C_GrazeResourceNode_Params Parms{};

	Parms.ResourceNode = ResourceNode;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Herbivore = K2Node_DynamicCast_AsBPI_Herbivore;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GrazeResourceNode_bSuccess = CallFunc_GrazeResourceNode_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetIsHerbivore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsHerbivore                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Herbivore_C>K2Node_DynamicCast_AsBPI_Herbivore                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsHerbivore_bIsHerbivore                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetIsHerbivore(bool* bIsHerbivore, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_Herbivore_C> K2Node_DynamicCast_AsBPI_Herbivore, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsHerbivore_bIsHerbivore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetIsHerbivore");

	Params::AAIC_CreatureBase_C_GetIsHerbivore_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Herbivore = K2Node_DynamicCast_AsBPI_Herbivore;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsHerbivore_bIsHerbivore = CallFunc_GetIsHerbivore_bIsHerbivore;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsHerbivore != nullptr)
		*bIsHerbivore = Parms.bIsHerbivore;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetSimulationStateManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXSimStateManagerBase*     Simulation_State_Manager                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_HasSimulationStateManager_C>K2Node_DynamicCast_AsBPI_Has_Simulation_State_Manager            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXSimStateManagerBase*     CallFunc_GetSimulationStateManager_Simulation_State_Manager      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetSimulationStateManager(class ANWXSimStateManagerBase** Simulation_State_Manager, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_HasSimulationStateManager_C> K2Node_DynamicCast_AsBPI_Has_Simulation_State_Manager, bool K2Node_DynamicCast_bSuccess, class ANWXSimStateManagerBase* CallFunc_GetSimulationStateManager_Simulation_State_Manager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetSimulationStateManager");

	Params::AAIC_CreatureBase_C_GetSimulationStateManager_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Has_Simulation_State_Manager = K2Node_DynamicCast_AsBPI_Has_Simulation_State_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSimulationStateManager_Simulation_State_Manager = CallFunc_GetSimulationStateManager_Simulation_State_Manager;

	UObject::ProcessEvent(Func, &Parms);

	if (Simulation_State_Manager != nullptr)
		*Simulation_State_Manager = Parms.Simulation_State_Manager;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.ResolveSimulationRound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_HasSimulationStateManager_C>K2Node_DynamicCast_AsBPI_Has_Simulation_State_Manager            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ResolveSimulationRound_bSuccess                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::ResolveSimulationRound(bool* bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_HasSimulationStateManager_C> K2Node_DynamicCast_AsBPI_Has_Simulation_State_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ResolveSimulationRound_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "ResolveSimulationRound");

	Params::AAIC_CreatureBase_C_ResolveSimulationRound_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Has_Simulation_State_Manager = K2Node_DynamicCast_AsBPI_Has_Simulation_State_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ResolveSimulationRound_bSuccess = CallFunc_ResolveSimulationRound_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.HasHungrySquadMember
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHasHungrySquadMember                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAISpawner*               CallFunc_GetSpawner_Spawner                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   K2Node_DynamicCast_AsBP_Creature_Spawner_Base                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Consumer_C>CallFunc_IsHungry_self_CastInput                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHungry_bIsHungry                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::HasHungrySquadMember(bool* bHasHungrySquadMember, int32 Temp_int_Array_Index_Variable, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class ABP_CreatureBase_C* CallFunc_Array_Get_Item, TScriptInterface<class IBPI_Consumer_C> CallFunc_IsHungry_self_CastInput, bool CallFunc_IsHungry_bIsHungry, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "HasHungrySquadMember");

	Params::AAIC_CreatureBase_C_HasHungrySquadMember_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetSpawner_Spawner = CallFunc_GetSpawner_Spawner;
	Parms.K2Node_DynamicCast_AsBP_Creature_Spawner_Base = K2Node_DynamicCast_AsBP_Creature_Spawner_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsHungry_self_CastInput = CallFunc_IsHungry_self_CastInput;
	Parms.CallFunc_IsHungry_bIsHungry = CallFunc_IsHungry_bIsHungry;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasHungrySquadMember != nullptr)
		*bHasHungrySquadMember = Parms.bHasHungrySquadMember;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.IsHungry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsHungry                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Consumer_C>K2Node_DynamicCast_AsBPI_Consumer                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHungry_bIsHungry                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::IsHungry(bool* bIsHungry, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_Consumer_C> K2Node_DynamicCast_AsBPI_Consumer, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsHungry_bIsHungry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "IsHungry");

	Params::AAIC_CreatureBase_C_IsHungry_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Consumer = K2Node_DynamicCast_AsBPI_Consumer;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsHungry_bIsHungry = CallFunc_IsHungry_bIsHungry;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsHungry != nullptr)
		*bIsHungry = Parms.bIsHungry;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.RemoveFromEnemies
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EnemyTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_CreatureInfo_C>K2Node_DynamicCast_AsBPI_Creature_Info                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveFromEnemies_bSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::RemoveFromEnemies(const struct FGameplayTag& EnemyTag, bool* bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_CreatureInfo_C> K2Node_DynamicCast_AsBPI_Creature_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveFromEnemies_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "RemoveFromEnemies");

	Params::AAIC_CreatureBase_C_RemoveFromEnemies_Params Parms{};

	Parms.EnemyTag = EnemyTag;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Creature_Info = K2Node_DynamicCast_AsBPI_Creature_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RemoveFromEnemies_bSuccess = CallFunc_RemoveFromEnemies_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.AddToEnemies
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EnemyTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_CreatureInfo_C>K2Node_DynamicCast_AsBPI_Creature_Info                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddToEnemies_bSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::AddToEnemies(const struct FGameplayTag& EnemyTag, bool* bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_CreatureInfo_C> K2Node_DynamicCast_AsBPI_Creature_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AddToEnemies_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "AddToEnemies");

	Params::AAIC_CreatureBase_C_AddToEnemies_Params Parms{};

	Parms.EnemyTag = EnemyTag;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Creature_Info = K2Node_DynamicCast_AsBPI_Creature_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddToEnemies_bSuccess = CallFunc_AddToEnemies_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.RemoveFromFriends
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                FriendTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_CreatureInfo_C>K2Node_DynamicCast_AsBPI_Creature_Info                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveFromFriends_bSuccess                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::RemoveFromFriends(const struct FGameplayTag& FriendTag, bool* bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_CreatureInfo_C> K2Node_DynamicCast_AsBPI_Creature_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveFromFriends_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "RemoveFromFriends");

	Params::AAIC_CreatureBase_C_RemoveFromFriends_Params Parms{};

	Parms.FriendTag = FriendTag;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Creature_Info = K2Node_DynamicCast_AsBPI_Creature_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RemoveFromFriends_bSuccess = CallFunc_RemoveFromFriends_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.AddToFriends
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                FriendTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_CreatureInfo_C>K2Node_DynamicCast_AsBPI_Creature_Info                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddToFriends_bSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::AddToFriends(const struct FGameplayTag& FriendTag, bool* bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_CreatureInfo_C> K2Node_DynamicCast_AsBPI_Creature_Info, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AddToFriends_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "AddToFriends");

	Params::AAIC_CreatureBase_C_AddToFriends_Params Parms{};

	Parms.FriendTag = FriendTag;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Creature_Info = K2Node_DynamicCast_AsBPI_Creature_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AddToFriends_bSuccess = CallFunc_AddToFriends_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetCreatureInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CreatureInfo             Info                                                             (Parm, OutParm, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_CreatureInfo_C>K2Node_DynamicCast_AsBPI_Creature_Info                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CreatureInfo             CallFunc_GetCreatureInfo_Info                                    (HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetCreatureInfo(struct FS_CreatureInfo* Info, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_CreatureInfo_C> K2Node_DynamicCast_AsBPI_Creature_Info, bool K2Node_DynamicCast_bSuccess, const struct FS_CreatureInfo& CallFunc_GetCreatureInfo_Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetCreatureInfo");

	Params::AAIC_CreatureBase_C_GetCreatureInfo_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Creature_Info = K2Node_DynamicCast_AsBPI_Creature_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCreatureInfo_Info = CallFunc_GetCreatureInfo_Info;

	UObject::ProcessEvent(Func, &Parms);

	if (Info != nullptr)
		*Info = std::move(Parms.Info);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetRedirectedTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldRedirect                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      RedirectedTarget                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetRedirectedTarget(bool* ShouldRedirect, class AActor** RedirectedTarget, class APawn* CallFunc_K2_GetPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetRedirectedTarget");

	Params::AAIC_CreatureBase_C_GetRedirectedTarget_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldRedirect != nullptr)
		*ShouldRedirect = Parms.ShouldRedirect;

	if (RedirectedTarget != nullptr)
		*RedirectedTarget = Parms.RedirectedTarget;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetDamageEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      DamageEffect                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetDamageEffect(class UClass** DamageEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetDamageEffect");

	Params::AAIC_CreatureBase_C_GetDamageEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DamageEffect != nullptr)
		*DamageEffect = Parms.DamageEffect;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.AllowEnemyTargeting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Allowed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::AllowEnemyTargeting(bool* Allowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "AllowEnemyTargeting");

	Params::AAIC_CreatureBase_C_AllowEnemyTargeting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Allowed != nullptr)
		*Allowed = Parms.Allowed;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.AllowFriendlyTargeting
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Allowed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::AllowFriendlyTargeting(bool* Allowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "AllowFriendlyTargeting");

	Params::AAIC_CreatureBase_C_AllowFriendlyTargeting_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Allowed != nullptr)
		*Allowed = Parms.Allowed;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.IsAfraidOf
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorInQuestion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsAfraidOf                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Targeter_C>K2Node_DynamicCast_AsBPI_Targeter                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAfraidOf_bIsAfraidOf                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::IsAfraidOf(class AActor* ActorInQuestion, bool* bIsAfraidOf, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAfraidOf_bIsAfraidOf)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "IsAfraidOf");

	Params::AAIC_CreatureBase_C_IsAfraidOf_Params Parms{};

	Parms.ActorInQuestion = ActorInQuestion;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Targeter = K2Node_DynamicCast_AsBPI_Targeter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsAfraidOf_bIsAfraidOf = CallFunc_IsAfraidOf_bIsAfraidOf;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsAfraidOf != nullptr)
		*bIsAfraidOf = Parms.bIsAfraidOf;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetTargetPriorityOrder
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTag>        TargetPriorityOrder                                              (Parm, OutParm)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Targeter_C>K2Node_DynamicCast_AsBPI_Targeter                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_GetTargetPriorityOrder_TargetPriorityOrder              (ReferenceParm)

void AAIC_CreatureBase_C::GetTargetPriorityOrder(TArray<struct FGameplayTag>* TargetPriorityOrder, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, TArray<struct FGameplayTag>& CallFunc_GetTargetPriorityOrder_TargetPriorityOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetTargetPriorityOrder");

	Params::AAIC_CreatureBase_C_GetTargetPriorityOrder_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Targeter = K2Node_DynamicCast_AsBPI_Targeter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTargetPriorityOrder_TargetPriorityOrder = CallFunc_GetTargetPriorityOrder_TargetPriorityOrder;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetPriorityOrder != nullptr)
		*TargetPriorityOrder = std::move(Parms.TargetPriorityOrder);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.IsFriend
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorInQuestion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsFriend                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ActorHostilityTags                                               (Edit, BlueprintVisible)
// class AActor*                      PotentialFriend                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Targeter_C>K2Node_DynamicCast_AsBPI_Targeter                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFriend_bIsFriend                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::IsFriend(class AActor* ActorInQuestion, bool* bIsFriend, const struct FGameplayTagContainer& ActorHostilityTags, class AActor* PotentialFriend, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFriend_bIsFriend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "IsFriend");

	Params::AAIC_CreatureBase_C_IsFriend_Params Parms{};

	Parms.ActorInQuestion = ActorInQuestion;
	Parms.ActorHostilityTags = ActorHostilityTags;
	Parms.PotentialFriend = PotentialFriend;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Targeter = K2Node_DynamicCast_AsBPI_Targeter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsFriend_bIsFriend = CallFunc_IsFriend_bIsFriend;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsFriend != nullptr)
		*bIsFriend = Parms.bIsFriend;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.ClearTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_1                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_2                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::ClearTarget(bool* Success, class FName CallFunc_GetBBVar_ReturnValue, class FName CallFunc_GetBBVar_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, class FName CallFunc_GetBBVar_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "ClearTarget");

	Params::AAIC_CreatureBase_C_ClearTarget_Params Parms{};

	Parms.CallFunc_GetBBVar_ReturnValue = CallFunc_GetBBVar_ReturnValue;
	Parms.CallFunc_GetBBVar_ReturnValue_1 = CallFunc_GetBBVar_ReturnValue_1;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue_1 = CallFunc_GetBlackboard_ReturnValue_1;
	Parms.CallFunc_GetBlackboard_ReturnValue_2 = CallFunc_GetBlackboard_ReturnValue_2;
	Parms.CallFunc_GetBBVar_ReturnValue_2 = CallFunc_GetBBVar_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.SetTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OldTarget                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTarget_Target                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::SetTarget(class AActor* NewTarget, class AActor** Target, class AActor* OldTarget, class AActor* CallFunc_GetTarget_Target, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetBBVar_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "SetTarget");

	Params::AAIC_CreatureBase_C_SetTarget_Params Parms{};

	Parms.NewTarget = NewTarget;
	Parms.OldTarget = OldTarget;
	Parms.CallFunc_GetTarget_Target = CallFunc_GetTarget_Target;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBBVar_ReturnValue = CallFunc_GetBBVar_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.IsEnemy
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorInQuestion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsEnemy                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ActorHostilityTags                                               (Edit, BlueprintVisible)
// class AActor*                      PotentialEnemy                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Targeter_C>K2Node_DynamicCast_AsBPI_Targeter                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnemy_bIsEnemy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::IsEnemy(class AActor* ActorInQuestion, bool* bIsEnemy, const struct FGameplayTagContainer& ActorHostilityTags, class AActor* PotentialEnemy, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnemy_bIsEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "IsEnemy");

	Params::AAIC_CreatureBase_C_IsEnemy_Params Parms{};

	Parms.ActorInQuestion = ActorInQuestion;
	Parms.ActorHostilityTags = ActorHostilityTags;
	Parms.PotentialEnemy = PotentialEnemy;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Targeter = K2Node_DynamicCast_AsBPI_Targeter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsEnemy_bIsEnemy = CallFunc_IsEnemy_bIsEnemy;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsEnemy != nullptr)
		*bIsEnemy = Parms.bIsEnemy;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Target                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetTarget(class AActor** Target, class FName CallFunc_GetBBVar_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetTarget");

	Params::AAIC_CreatureBase_C_GetTarget_Params Parms{};

	Parms.CallFunc_GetBBVar_ReturnValue = CallFunc_GetBBVar_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.CanInteractWithActionStation_Giant_TEMP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CanInteractWithStructure                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       (None)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::CanInteractWithActionStation_Giant_TEMP(class AActor* Actor, bool* CanInteractWithStructure, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasAnyTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "CanInteractWithActionStation_Giant_TEMP");

	Params::AAIC_CreatureBase_C_CanInteractWithActionStation_Giant_TEMP_Params Parms{};

	Parms.Actor = Actor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteractWithStructure != nullptr)
		*CanInteractWithStructure = Parms.CanInteractWithStructure;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetHitResponseComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UHitResponseComponent*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHitResponseComponent*       Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IHitResponseProviderInterface>K2Node_DynamicCast_AsHit_Response_Provider_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHitResponseComponent*       CallFunc_GetHitResponseComponent_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UHitResponseComponent* AAIC_CreatureBase_C::GetHitResponseComponent(class UHitResponseComponent* Temp_object_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IHitResponseProviderInterface> K2Node_DynamicCast_AsHit_Response_Provider_Interface, bool K2Node_DynamicCast_bSuccess, class UHitResponseComponent* CallFunc_GetHitResponseComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetHitResponseComponent");

	Params::AAIC_CreatureBase_C_GetHitResponseComponent_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsHit_Response_Provider_Interface = K2Node_DynamicCast_AsHit_Response_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHitResponseComponent_ReturnValue = CallFunc_GetHitResponseComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetVocalizationLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IHitResponseProviderInterface>K2Node_DynamicCast_AsHit_Response_Provider_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVocalizationLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AAIC_CreatureBase_C::GetVocalizationLocation(const struct FVector& Temp_struct_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IHitResponseProviderInterface> K2Node_DynamicCast_AsHit_Response_Provider_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetVocalizationLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetVocalizationLocation");

	Params::AAIC_CreatureBase_C_GetVocalizationLocation_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsHit_Response_Provider_Interface = K2Node_DynamicCast_AsHit_Response_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetVocalizationLocation_ReturnValue = CallFunc_GetVocalizationLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetSpawnerController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXAISpawnerController*     Spawner_Controller                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXAISpawner*               CallFunc_GetSpawner_Spawner                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAISpawnerController*     K2Node_DynamicCast_AsNWXAISpawner_Controller                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetSpawnerController(class ANWXAISpawnerController** Spawner_Controller, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, class AAIController* CallFunc_GetAIController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXAISpawnerController* K2Node_DynamicCast_AsNWXAISpawner_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetSpawnerController");

	Params::AAIC_CreatureBase_C_GetSpawnerController_Params Parms{};

	Parms.CallFunc_GetSpawner_Spawner = CallFunc_GetSpawner_Spawner;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXAISpawner_Controller = K2Node_DynamicCast_AsNWXAISpawner_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Spawner_Controller != nullptr)
		*Spawner_Controller = Parms.Spawner_Controller;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetSpawner
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXAISpawner*               Spawner                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetSpawner(class ANWXAISpawner** Spawner, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetSpawner");

	Params::AAIC_CreatureBase_C_GetSpawner_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Spawner != nullptr)
		*Spawner = Parms.Spawner;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.RemoveFromAllLists
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Branch                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LActor                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::RemoveFromAllLists(class AActor* Actor, bool* Branch, class AActor* LActor, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "RemoveFromAllLists");

	Params::AAIC_CreatureBase_C_RemoveFromAllLists_Params Parms{};

	Parms.Actor = Actor;
	Parms.LActor = LActor;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_2 = CallFunc_Array_RemoveItem_ReturnValue_2;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_3 = CallFunc_Array_RemoveItem_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Branch != nullptr)
		*Branch = Parms.Branch;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetPerceivedPlayers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>              PlayerList                                                       (Parm, OutParm)

void AAIC_CreatureBase_C::GetPerceivedPlayers(TArray<class AActor*>* PlayerList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetPerceivedPlayers");

	Params::AAIC_CreatureBase_C_GetPerceivedPlayers_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PlayerList != nullptr)
		*PlayerList = std::move(Parms.PlayerList);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetPerceivedFears
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>              FearList                                                         (Parm, OutParm)

void AAIC_CreatureBase_C::GetPerceivedFears(TArray<class AActor*>* FearList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetPerceivedFears");

	Params::AAIC_CreatureBase_C_GetPerceivedFears_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FearList != nullptr)
		*FearList = std::move(Parms.FearList);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetPerceivedAllies
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>              AllyList                                                         (Parm, OutParm)

void AAIC_CreatureBase_C::GetPerceivedAllies(TArray<class AActor*>* AllyList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetPerceivedAllies");

	Params::AAIC_CreatureBase_C_GetPerceivedAllies_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AllyList != nullptr)
		*AllyList = std::move(Parms.AllyList);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetPerceivedEnemies
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>              EnemyList                                                        (Parm, OutParm)

void AAIC_CreatureBase_C::GetPerceivedEnemies(TArray<class AActor*>* EnemyList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetPerceivedEnemies");

	Params::AAIC_CreatureBase_C_GetPerceivedEnemies_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EnemyList != nullptr)
		*EnemyList = std::move(Parms.EnemyList);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetClosestAllyByTags
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       HasAnyTags                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       DoesNotHaveAnyTags                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                      ClosestEnemyActor                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LAlly                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              LFilteredAllies                                                  (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetClosestActorInArray_ClosestEnemyActor                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetClosestActorInArray_Distance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       (None)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyTags_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetClosestAllyByTags(const struct FGameplayTagContainer& HasAnyTags, const struct FGameplayTagContainer& DoesNotHaveAnyTags, class AActor** ClosestEnemyActor, double* Distance, class AActor* LAlly, const TArray<class AActor*>& LFilteredAllies, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetClosestActorInArray_ClosestEnemyActor, double CallFunc_GetClosestActorInArray_Distance, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetClosestAllyByTags");

	Params::AAIC_CreatureBase_C_GetClosestAllyByTags_Params Parms{};

	Parms.HasAnyTags = HasAnyTags;
	Parms.DoesNotHaveAnyTags = DoesNotHaveAnyTags;
	Parms.LAlly = LAlly;
	Parms.LFilteredAllies = LFilteredAllies;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetClosestActorInArray_ClosestEnemyActor = CallFunc_GetClosestActorInArray_ClosestEnemyActor;
	Parms.CallFunc_GetClosestActorInArray_Distance = CallFunc_GetClosestActorInArray_Distance;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_HasAnyTags_ReturnValue_1 = CallFunc_HasAnyTags_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ClosestEnemyActor != nullptr)
		*ClosestEnemyActor = Parms.ClosestEnemyActor;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetAllyInRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Range                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayerInRange                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      PlayerActor                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActorInRangeInArray_ActorInRange                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActorInRangeInArray_FoundActor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetActorInRangeInArray_Distance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetAllyInRange(double Range, bool* PlayerInRange, class AActor** PlayerActor, double* Distance, bool CallFunc_GetActorInRangeInArray_ActorInRange, class AActor* CallFunc_GetActorInRangeInArray_FoundActor, double CallFunc_GetActorInRangeInArray_Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetAllyInRange");

	Params::AAIC_CreatureBase_C_GetAllyInRange_Params Parms{};

	Parms.Range = Range;
	Parms.CallFunc_GetActorInRangeInArray_ActorInRange = CallFunc_GetActorInRangeInArray_ActorInRange;
	Parms.CallFunc_GetActorInRangeInArray_FoundActor = CallFunc_GetActorInRangeInArray_FoundActor;
	Parms.CallFunc_GetActorInRangeInArray_Distance = CallFunc_GetActorInRangeInArray_Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerInRange != nullptr)
		*PlayerInRange = Parms.PlayerInRange;

	if (PlayerActor != nullptr)
		*PlayerActor = Parms.PlayerActor;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetClosestAlly
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      ClosestEnemyActor                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetClosestActorInArray_ClosestEnemyActor                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetClosestActorInArray_Distance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetClosestAlly(class AActor** ClosestEnemyActor, double* Distance, class AActor* CallFunc_GetClosestActorInArray_ClosestEnemyActor, double CallFunc_GetClosestActorInArray_Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetClosestAlly");

	Params::AAIC_CreatureBase_C_GetClosestAlly_Params Parms{};

	Parms.CallFunc_GetClosestActorInArray_ClosestEnemyActor = CallFunc_GetClosestActorInArray_ClosestEnemyActor;
	Parms.CallFunc_GetClosestActorInArray_Distance = CallFunc_GetClosestActorInArray_Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (ClosestEnemyActor != nullptr)
		*ClosestEnemyActor = Parms.ClosestEnemyActor;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetClosestPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      ClosestEnemyActor                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetClosestActorInArray_ClosestEnemyActor                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetClosestActorInArray_Distance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetClosestPlayer(class AActor** ClosestEnemyActor, double* Distance, class AActor* CallFunc_GetClosestActorInArray_ClosestEnemyActor, double CallFunc_GetClosestActorInArray_Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetClosestPlayer");

	Params::AAIC_CreatureBase_C_GetClosestPlayer_Params Parms{};

	Parms.CallFunc_GetClosestActorInArray_ClosestEnemyActor = CallFunc_GetClosestActorInArray_ClosestEnemyActor;
	Parms.CallFunc_GetClosestActorInArray_Distance = CallFunc_GetClosestActorInArray_Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (ClosestEnemyActor != nullptr)
		*ClosestEnemyActor = Parms.ClosestEnemyActor;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.UpdateAllyList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 Stimulus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                               bIsAlly                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LActor                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFriend_bIsFriend                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::UpdateAllyList(class AActor* Actor, const struct FAIStimulus& Stimulus, bool* bIsAlly, class AActor* LActor, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_2, bool CallFunc_IsFriend_bIsFriend, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "UpdateAllyList");

	Params::AAIC_CreatureBase_C_UpdateAllyList_Params Parms{};

	Parms.Actor = Actor;
	Parms.Stimulus = Stimulus;
	Parms.LActor = LActor;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_2 = CallFunc_Array_RemoveItem_ReturnValue_2;
	Parms.CallFunc_IsFriend_bIsFriend = CallFunc_IsFriend_bIsFriend;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsAlly != nullptr)
		*bIsAlly = Parms.bIsAlly;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetPlayerInRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Range                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlayerInRange                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      PlayerActor                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActorInRangeInArray_ActorInRange                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActorInRangeInArray_FoundActor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetActorInRangeInArray_Distance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetPlayerInRange(double Range, bool* PlayerInRange, class AActor** PlayerActor, double* Distance, bool CallFunc_GetActorInRangeInArray_ActorInRange, class AActor* CallFunc_GetActorInRangeInArray_FoundActor, double CallFunc_GetActorInRangeInArray_Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetPlayerInRange");

	Params::AAIC_CreatureBase_C_GetPlayerInRange_Params Parms{};

	Parms.Range = Range;
	Parms.CallFunc_GetActorInRangeInArray_ActorInRange = CallFunc_GetActorInRangeInArray_ActorInRange;
	Parms.CallFunc_GetActorInRangeInArray_FoundActor = CallFunc_GetActorInRangeInArray_FoundActor;
	Parms.CallFunc_GetActorInRangeInArray_Distance = CallFunc_GetActorInRangeInArray_Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerInRange != nullptr)
		*PlayerInRange = Parms.PlayerInRange;

	if (PlayerActor != nullptr)
		*PlayerActor = Parms.PlayerActor;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.UpdatePlayerList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 Stimulus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class AActor*                      LActor                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::UpdatePlayerList(class AActor* Actor, const struct FAIStimulus& Stimulus, class AActor* LActor, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "UpdatePlayerList");

	Params::AAIC_CreatureBase_C_UpdatePlayerList_Params Parms{};

	Parms.Actor = Actor;
	Parms.Stimulus = Stimulus;
	Parms.LActor = LActor;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetFearInRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Range                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnemyInRange                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EnemyActor                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActorInRangeInArray_ActorInRange                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActorInRangeInArray_FoundActor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetActorInRangeInArray_Distance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetFearInRange(double Range, bool* EnemyInRange, class AActor** EnemyActor, double* Distance, bool CallFunc_GetActorInRangeInArray_ActorInRange, class AActor* CallFunc_GetActorInRangeInArray_FoundActor, double CallFunc_GetActorInRangeInArray_Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetFearInRange");

	Params::AAIC_CreatureBase_C_GetFearInRange_Params Parms{};

	Parms.Range = Range;
	Parms.CallFunc_GetActorInRangeInArray_ActorInRange = CallFunc_GetActorInRangeInArray_ActorInRange;
	Parms.CallFunc_GetActorInRangeInArray_FoundActor = CallFunc_GetActorInRangeInArray_FoundActor;
	Parms.CallFunc_GetActorInRangeInArray_Distance = CallFunc_GetActorInRangeInArray_Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (EnemyInRange != nullptr)
		*EnemyInRange = Parms.EnemyInRange;

	if (EnemyActor != nullptr)
		*EnemyActor = Parms.EnemyActor;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetClosestFear
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      ClosestEnemyActor                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetClosestActorInArray_ClosestEnemyActor                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetClosestActorInArray_Distance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetClosestFear(class AActor** ClosestEnemyActor, double* Distance, class AActor* CallFunc_GetClosestActorInArray_ClosestEnemyActor, double CallFunc_GetClosestActorInArray_Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetClosestFear");

	Params::AAIC_CreatureBase_C_GetClosestFear_Params Parms{};

	Parms.CallFunc_GetClosestActorInArray_ClosestEnemyActor = CallFunc_GetClosestActorInArray_ClosestEnemyActor;
	Parms.CallFunc_GetClosestActorInArray_Distance = CallFunc_GetClosestActorInArray_Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (ClosestEnemyActor != nullptr)
		*ClosestEnemyActor = Parms.ClosestEnemyActor;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetActorInRangeInArray
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>              TargetArray                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                             Range                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ActorInRange                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      FoundActor                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       LPawn                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// double                             LRange                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetActorInRange_DistanceToTarget                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActorInRange_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetActorInRange_Distance_ImplicitCast                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Distance_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetActorInRangeInArray(TArray<class AActor*>& TargetArray, double Range, bool* ActorInRange, class AActor** FoundActor, double* Distance, class APawn* LPawn, double LRange, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_GetActorInRange_DistanceToTarget, class AActor* CallFunc_GetActorInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetActorInRange_Distance_ImplicitCast, double K2Node_FunctionResult_Distance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetActorInRangeInArray");

	Params::AAIC_CreatureBase_C_GetActorInRangeInArray_Params Parms{};

	Parms.TargetArray = TargetArray;
	Parms.Range = Range;
	Parms.LPawn = LPawn;
	Parms.LRange = LRange;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetActorInRange_DistanceToTarget = CallFunc_GetActorInRange_DistanceToTarget;
	Parms.CallFunc_GetActorInRange_ReturnValue = CallFunc_GetActorInRange_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActorInRange_Distance_ImplicitCast = CallFunc_GetActorInRange_Distance_ImplicitCast;
	Parms.K2Node_FunctionResult_Distance_ImplicitCast = K2Node_FunctionResult_Distance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ActorInRange != nullptr)
		*ActorInRange = Parms.ActorInRange;

	if (FoundActor != nullptr)
		*FoundActor = Parms.FoundActor;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetClosestActorInArray
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class AActor*>              TargetArray                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                      ClosestEnemyActor                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ClosestActor                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// double                             ClosestDistance                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       LPawn                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ClosestDistance_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetClosestActorInArray(TArray<class AActor*>& TargetArray, class AActor** ClosestEnemyActor, double* Distance, class AActor* ClosestActor, double ClosestDistance, class APawn* LPawn, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_ClosestDistance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetClosestActorInArray");

	Params::AAIC_CreatureBase_C_GetClosestActorInArray_Params Parms{};

	Parms.TargetArray = TargetArray;
	Parms.ClosestActor = ClosestActor;
	Parms.ClosestDistance = ClosestDistance;
	Parms.LPawn = LPawn;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_ClosestDistance_ImplicitCast = K2Node_VariableSet_ClosestDistance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ClosestEnemyActor != nullptr)
		*ClosestEnemyActor = Parms.ClosestEnemyActor;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.UpdateFearsList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 Stimulus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class AActor*                      LActor                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAfraidOf_bIsAfraidOf                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::UpdateFearsList(class AActor* Actor, const struct FAIStimulus& Stimulus, class AActor* LActor, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsAfraidOf_bIsAfraidOf)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "UpdateFearsList");

	Params::AAIC_CreatureBase_C_UpdateFearsList_Params Parms{};

	Parms.Actor = Actor;
	Parms.Stimulus = Stimulus;
	Parms.LActor = LActor;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_IsAfraidOf_bIsAfraidOf = CallFunc_IsAfraidOf_bIsAfraidOf;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetEnemyInRange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Range                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnemyInRange                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EnemyActor                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetActorInRangeInArray_ActorInRange                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetActorInRangeInArray_FoundActor                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetActorInRangeInArray_Distance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetEnemyInRange(double Range, bool* EnemyInRange, class AActor** EnemyActor, double* Distance, bool CallFunc_GetActorInRangeInArray_ActorInRange, class AActor* CallFunc_GetActorInRangeInArray_FoundActor, double CallFunc_GetActorInRangeInArray_Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetEnemyInRange");

	Params::AAIC_CreatureBase_C_GetEnemyInRange_Params Parms{};

	Parms.Range = Range;
	Parms.CallFunc_GetActorInRangeInArray_ActorInRange = CallFunc_GetActorInRangeInArray_ActorInRange;
	Parms.CallFunc_GetActorInRangeInArray_FoundActor = CallFunc_GetActorInRangeInArray_FoundActor;
	Parms.CallFunc_GetActorInRangeInArray_Distance = CallFunc_GetActorInRangeInArray_Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (EnemyInRange != nullptr)
		*EnemyInRange = Parms.EnemyInRange;

	if (EnemyActor != nullptr)
		*EnemyActor = Parms.EnemyActor;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetClosestEnemy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      ClosestEnemyActor                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetClosestActorInArray_ClosestEnemyActor                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetClosestActorInArray_Distance                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetClosestEnemy(class AActor** ClosestEnemyActor, double* Distance, class AActor* CallFunc_GetClosestActorInArray_ClosestEnemyActor, double CallFunc_GetClosestActorInArray_Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetClosestEnemy");

	Params::AAIC_CreatureBase_C_GetClosestEnemy_Params Parms{};

	Parms.CallFunc_GetClosestActorInArray_ClosestEnemyActor = CallFunc_GetClosestActorInArray_ClosestEnemyActor;
	Parms.CallFunc_GetClosestActorInArray_Distance = CallFunc_GetClosestActorInArray_Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (ClosestEnemyActor != nullptr)
		*ClosestEnemyActor = Parms.ClosestEnemyActor;

	if (Distance != nullptr)
		*Distance = Parms.Distance;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.UpdateEnemyList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 Stimulus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class AActor*                      LActor                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnemy_bIsEnemy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::UpdateEnemyList(class AActor* Actor, const struct FAIStimulus& Stimulus, class AActor* LActor, bool CallFunc_IsEnemy_bIsEnemy, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "UpdateEnemyList");

	Params::AAIC_CreatureBase_C_UpdateEnemyList_Params Parms{};

	Parms.Actor = Actor;
	Parms.Stimulus = Stimulus;
	Parms.LActor = LActor;
	Parms.CallFunc_IsEnemy_bIsEnemy = CallFunc_IsEnemy_bIsEnemy;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.InitializeBlackBoardVariables
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        LBlackboard                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEvadeChance_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRangedCombatDistance_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRangedAttackCooldown_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRunningMeleeAttackDistance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMeleeCombatDistance_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMeleeAttackCooldown_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCreatureRunDistance_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCreatureDispersionRadius_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::InitializeBlackBoardVariables(bool* Success, class UBlackboardComponent* LBlackboard, float CallFunc_GetEvadeChance_ReturnValue, float CallFunc_GetRangedCombatDistance_ReturnValue, float CallFunc_GetRangedAttackCooldown_ReturnValue, float CallFunc_GetRunningMeleeAttackDistance_ReturnValue, float CallFunc_GetMeleeCombatDistance_ReturnValue, float CallFunc_GetMeleeAttackCooldown_ReturnValue, float CallFunc_GetCreatureRunDistance_ReturnValue, float CallFunc_GetCreatureDispersionRadius_ReturnValue, class FName CallFunc_GetBBVar_ReturnValue, class FName CallFunc_GetBBVar_ReturnValue_1, class FName CallFunc_GetBBVar_ReturnValue_2, class FName CallFunc_GetBBVar_ReturnValue_3, class FName CallFunc_GetBBVar_ReturnValue_4, class FName CallFunc_GetBBVar_ReturnValue_5, class FName CallFunc_GetBBVar_ReturnValue_6, class FName CallFunc_GetBBVar_ReturnValue_7, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "InitializeBlackBoardVariables");

	Params::AAIC_CreatureBase_C_InitializeBlackBoardVariables_Params Parms{};

	Parms.LBlackboard = LBlackboard;
	Parms.CallFunc_GetEvadeChance_ReturnValue = CallFunc_GetEvadeChance_ReturnValue;
	Parms.CallFunc_GetRangedCombatDistance_ReturnValue = CallFunc_GetRangedCombatDistance_ReturnValue;
	Parms.CallFunc_GetRangedAttackCooldown_ReturnValue = CallFunc_GetRangedAttackCooldown_ReturnValue;
	Parms.CallFunc_GetRunningMeleeAttackDistance_ReturnValue = CallFunc_GetRunningMeleeAttackDistance_ReturnValue;
	Parms.CallFunc_GetMeleeCombatDistance_ReturnValue = CallFunc_GetMeleeCombatDistance_ReturnValue;
	Parms.CallFunc_GetMeleeAttackCooldown_ReturnValue = CallFunc_GetMeleeAttackCooldown_ReturnValue;
	Parms.CallFunc_GetCreatureRunDistance_ReturnValue = CallFunc_GetCreatureRunDistance_ReturnValue;
	Parms.CallFunc_GetCreatureDispersionRadius_ReturnValue = CallFunc_GetCreatureDispersionRadius_ReturnValue;
	Parms.CallFunc_GetBBVar_ReturnValue = CallFunc_GetBBVar_ReturnValue;
	Parms.CallFunc_GetBBVar_ReturnValue_1 = CallFunc_GetBBVar_ReturnValue_1;
	Parms.CallFunc_GetBBVar_ReturnValue_2 = CallFunc_GetBBVar_ReturnValue_2;
	Parms.CallFunc_GetBBVar_ReturnValue_3 = CallFunc_GetBBVar_ReturnValue_3;
	Parms.CallFunc_GetBBVar_ReturnValue_4 = CallFunc_GetBBVar_ReturnValue_4;
	Parms.CallFunc_GetBBVar_ReturnValue_5 = CallFunc_GetBBVar_ReturnValue_5;
	Parms.CallFunc_GetBBVar_ReturnValue_6 = CallFunc_GetBBVar_ReturnValue_6;
	Parms.CallFunc_GetBBVar_ReturnValue_7 = CallFunc_GetBBVar_ReturnValue_7;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.CreaturePrint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENWXLogLevel            NWXLogLevel                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELogCategory            LogCategory                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::CreaturePrint(enum class ENWXLogLevel NWXLogLevel, enum class ELogCategory LogCategory, const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "CreaturePrint");

	Params::AAIC_CreatureBase_C_CreaturePrint_Params Parms{};

	Parms.NWXLogLevel = NWXLogLevel;
	Parms.LogCategory = LogCategory;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.CanInteractWithActorTEMP
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CanInteractWithStructure                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       (None)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::CanInteractWithActorTEMP(class AActor* Actor, bool* CanInteractWithStructure, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasAnyTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "CanInteractWithActorTEMP");

	Params::AAIC_CreatureBase_C_CanInteractWithActorTEMP_Params Parms{};

	Parms.Actor = Actor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteractWithStructure != nullptr)
		*CanInteractWithStructure = Parms.CanInteractWithStructure;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.StopTreeAndAI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Force_Stop                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StopBehavior_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::StopTreeAndAI(const class FString& Reason, bool Force_Stop, bool CallFunc_StopBehavior_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "StopTreeAndAI");

	Params::AAIC_CreatureBase_C_StopTreeAndAI_Params Parms{};

	Parms.Reason = Reason;
	Parms.Force_Stop = Force_Stop;
	Parms.CallFunc_StopBehavior_ReturnValue = CallFunc_StopBehavior_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.ThreatDecay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CurrentThreat                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::ThreatDecay(class AActor* CurrentThreat, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, TArray<class AActor*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "ThreatDecay");

	Params::AAIC_CreatureBase_C_ThreatDecay_Params Parms{};

	Parms.CurrentThreat = CurrentThreat;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.OnActionChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAIAction*                   OldAction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAIAction*                   NewAction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OldTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          CreaturePawn                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          CallFunc_GetCreaturePawn_CreaturePawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::OnActionChanged(class UAIAction* OldAction, class UAIAction* NewAction, class AActor* OldTarget, class AActor* NewTarget, class ABP_CreatureBase_C* CreaturePawn, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ABP_CreatureBase_C* CallFunc_GetCreaturePawn_CreaturePawn, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "OnActionChanged");

	Params::AAIC_CreatureBase_C_OnActionChanged_Params Parms{};

	Parms.OldAction = OldAction;
	Parms.NewAction = NewAction;
	Parms.OldTarget = OldTarget;
	Parms.NewTarget = NewTarget;
	Parms.CreaturePawn = CreaturePawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCreaturePawn_CreaturePawn = CallFunc_GetCreaturePawn_CreaturePawn;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.ForceDisableAI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateBlackBoardAIEnabled_bSuccess                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::ForceDisableAI(bool Disable, bool* Success, class FName CallFunc_GetBBVar_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_UpdateBlackBoardAIEnabled_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "ForceDisableAI");

	Params::AAIC_CreatureBase_C_ForceDisableAI_Params Parms{};

	Parms.Disable = Disable;
	Parms.CallFunc_GetBBVar_ReturnValue = CallFunc_GetBBVar_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_UpdateBlackBoardAIEnabled_bSuccess = CallFunc_UpdateBlackBoardAIEnabled_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.SetDisableBlendspace
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDisable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::SetDisableBlendspace(bool bDisable, class FName CallFunc_GetBBVar_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "SetDisableBlendspace");

	Params::AAIC_CreatureBase_C_SetDisableBlendspace_Params Parms{};

	Parms.bDisable = bDisable;
	Parms.CallFunc_GetBBVar_ReturnValue = CallFunc_GetBBVar_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.ReplicateTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          CallFunc_GetCreaturePawn_CreaturePawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::ReplicateTarget(class AActor* Target, class ABP_CreatureBase_C* CallFunc_GetCreaturePawn_CreaturePawn, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "ReplicateTarget");

	Params::AAIC_CreatureBase_C_ReplicateTarget_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetCreaturePawn_CreaturePawn = CallFunc_GetCreaturePawn_CreaturePawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.UpdateBlackBoardAIEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetBBVar_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureManager_C*       K2Node_DynamicCast_AsBP_Creature_Manager                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAI_Enabled_AIEnabled                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::UpdateBlackBoardAIEnabled(bool* bSuccess, class FName CallFunc_GetBBVar_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager, bool CallFunc_IsValid_ReturnValue, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAI_Enabled_AIEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "UpdateBlackBoardAIEnabled");

	Params::AAIC_CreatureBase_C_UpdateBlackBoardAIEnabled_Params Parms{};

	Parms.CallFunc_GetBBVar_ReturnValue = CallFunc_GetBBVar_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetCreatureManager_CreatureManager = CallFunc_GetCreatureManager_CreatureManager;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_Manager = K2Node_DynamicCast_AsBP_Creature_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsAI_Enabled_AIEnabled = CallFunc_IsAI_Enabled_AIEnabled;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.GetCreaturePawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          CreaturePawn                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::GetCreaturePawn(class ABP_CreatureBase_C** CreaturePawn, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "GetCreaturePawn");

	Params::AAIC_CreatureBase_C_GetCreaturePawn_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CreaturePawn != nullptr)
		*CreaturePawn = Parms.CreaturePawn;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.IsPerceivedTarget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsPerceivedTarget                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActorPerceptionBlueprintInfoCallFunc_GetActorsPerception_Info                                (None)
// bool                               CallFunc_GetActorsPerception_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::IsPerceivedTarget(class AActor* TargetActor, bool* IsPerceivedTarget, int32 Temp_int_Array_Index_Variable, const struct FActorPerceptionBlueprintInfo& CallFunc_GetActorsPerception_Info, bool CallFunc_GetActorsPerception_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FAIStimulus& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "IsPerceivedTarget");

	Params::AAIC_CreatureBase_C_IsPerceivedTarget_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetActorsPerception_Info = CallFunc_GetActorsPerception_Info;
	Parms.CallFunc_GetActorsPerception_ReturnValue = CallFunc_GetActorsPerception_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPerceivedTarget != nullptr)
		*IsPerceivedTarget = Parms.IsPerceivedTarget;

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXPathFollowingComponent*  LFollowComponent                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPathFollowingComponent*     CallFunc_GetPathFollowingComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FCarTurnData                CallFunc_GetCarTurnsData_ReturnValue                             (ConstParm)
// class UNWXPathFollowingComponent*  K2Node_DynamicCast_AsNWXPath_Following_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAICCreatureData            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::UserConstructionScript(class UNWXPathFollowingComponent* LFollowComponent, class UPathFollowingComponent* CallFunc_GetPathFollowingComponent_ReturnValue, const struct FCarTurnData& CallFunc_GetCarTurnsData_ReturnValue, class UNWXPathFollowingComponent* K2Node_DynamicCast_AsNWXPath_Following_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FAICCreatureData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "UserConstructionScript");

	Params::AAIC_CreatureBase_C_UserConstructionScript_Params Parms{};

	Parms.LFollowComponent = LFollowComponent;
	Parms.CallFunc_GetPathFollowingComponent_ReturnValue = CallFunc_GetPathFollowingComponent_ReturnValue;
	Parms.CallFunc_GetCarTurnsData_ReturnValue = CallFunc_GetCarTurnsData_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPath_Following_Component = K2Node_DynamicCast_AsNWXPath_Following_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "ReceivePossess");

	Params::AAIC_CreatureBase_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.UpdateAIEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAIC_CreatureBase_C::UpdateAIEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "UpdateAIEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAIC_CreatureBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.MoveCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAIRequestID                RequestID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// enum class EPathFollowingResult    Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::MoveCompleted(const struct FAIRequestID& RequestID, enum class EPathFollowingResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "MoveCompleted");

	Params::AAIC_CreatureBase_C_MoveCompleted_Params Parms{};

	Parms.RequestID = RequestID;
	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.TargetPerceptionUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 Stimulus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void AAIC_CreatureBase_C::TargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "TargetPerceptionUpdated");

	Params::AAIC_CreatureBase_C_TargetPerceptionUpdated_Params Parms{};

	Parms.Actor = Actor;
	Parms.Stimulus = Stimulus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.CreatureDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXAICharacter*             Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::CreatureDeath(class ANWXAICharacter* Creature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "CreatureDeath");

	Params::AAIC_CreatureBase_C_CreatureDeath_Params Parms{};

	Parms.Creature = Creature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.CreatureDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::CreatureDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "CreatureDestroyed");

	Params::AAIC_CreatureBase_C_CreatureDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.OnNavLinkStart
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                     Left                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Right                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Destination                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENavLinkDirection       Direction                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENavLinkType            NavType                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::OnNavLinkStart(struct FVector& Left, struct FVector& Right, struct FVector& Destination, enum class ENavLinkDirection Direction, enum class ENavLinkType NavType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "OnNavLinkStart");

	Params::AAIC_CreatureBase_C_OnNavLinkStart_Params Parms{};

	Parms.Left = Left;
	Parms.Right = Right;
	Parms.Destination = Destination;
	Parms.Direction = Direction;
	Parms.NavType = NavType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 Stimulus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void AAIC_CreatureBase_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature");

	Params::AAIC_CreatureBase_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature_Params Parms{};

	Parms.Actor = Actor;
	Parms.Stimulus = Stimulus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.CreatureTargetDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::CreatureTargetDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "CreatureTargetDestroyed");

	Params::AAIC_CreatureBase_C_CreatureTargetDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.CreatureTargetDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXAICharacter*             AICharacter                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::CreatureTargetDeath(class ANWXAICharacter* AICharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "CreatureTargetDeath");

	Params::AAIC_CreatureBase_C_CreatureTargetDeath_Params Parms{};

	Parms.AICharacter = AICharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.ExecuteUbergraph_AIC_CreatureBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UNavigationQueryFilter>CallFunc_GetNavFilter_ReturnValue                                (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 K2Node_CustomEvent_Stimulus                                      (NoDestructor)
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateAllyList_bIsAlly                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAIRequestID                K2Node_CustomEvent_RequestID                                     (NoDestructor)
// enum class EPathFollowingResult    K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAICharacter*             K2Node_CustomEvent_Creature                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DestroyedActor_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCreatureManagerBase*     CallFunc_GetCreatureManager_CreatureManager                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureManager_C*       K2Node_DynamicCast_AsBP_Creature_Manager                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Left                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Right                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Destination                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENavLinkDirection       K2Node_Event_Direction                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENavLinkType            K2Node_Event_NavType                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InitializeBlackBoardVariables_Success                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateBlackBoardAIEnabled_bSuccess                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTicketTakerComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          CallFunc_GetCreaturePawn_CreaturePawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_Actor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAIStimulus                 K2Node_ComponentBoundEvent_Stimulus                              (NoDestructor)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveFromAllLists_Branch                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXAICharacter*             K2Node_CustomEvent_AICharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXWorldSettings*           CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveFromAllLists_Branch_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftClassPtr<class UAIAction>>CallFunc_GetAIActions_ReturnValue                                (ConstParm, ReferenceParm)
// TSoftClassPtr<class UAIAction>     CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsAIAction                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddActionClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::ExecuteUbergraph_AIC_CreatureBase(int32 EntryPoint, TSubclassOf<class UNavigationQueryFilter> CallFunc_GetNavFilter_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_Actor, const struct FAIStimulus& K2Node_CustomEvent_Stimulus, bool CallFunc_RunBehaviorTree_ReturnValue, bool CallFunc_UpdateAllyList_bIsAlly, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FAIRequestID& K2Node_CustomEvent_RequestID, enum class EPathFollowingResult K2Node_CustomEvent_Result, bool K2Node_SwitchEnum_CmpSuccess, class ANWXAICharacter* K2Node_CustomEvent_Creature, class AActor* K2Node_CustomEvent_DestroyedActor_1, class ANWXCreatureManagerBase* CallFunc_GetCreatureManager_CreatureManager, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_CreatureManager_C* K2Node_DynamicCast_AsBP_Creature_Manager, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& K2Node_Event_Left, const struct FVector& K2Node_Event_Right, const struct FVector& K2Node_Event_Destination, enum class ENavLinkDirection K2Node_Event_Direction, enum class ENavLinkType K2Node_Event_NavType, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_InitializeBlackBoardVariables_Success, bool CallFunc_IsServer_ReturnValue, bool CallFunc_UpdateBlackBoardAIEnabled_bSuccess, class APawn* K2Node_Event_PossessedPawn, class UTicketTakerComponent* CallFunc_GetComponentByClass_ReturnValue, class ABP_CreatureBase_C* CallFunc_GetCreaturePawn_CreaturePawn, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AActor* K2Node_ComponentBoundEvent_Actor, const struct FAIStimulus& K2Node_ComponentBoundEvent_Stimulus, class AActor* K2Node_CustomEvent_DestroyedActor, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_RemoveFromAllLists_Branch, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_HasAuthority_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class ANWXAICharacter* K2Node_CustomEvent_AICharacter, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, bool CallFunc_RemoveFromAllLists_Branch_1, TArray<TSoftClassPtr<class UAIAction>>& CallFunc_GetAIActions_ReturnValue, TSoftClassPtr<class UAIAction> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsAIAction, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_AddActionClass_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "ExecuteUbergraph_AIC_CreatureBase");

	Params::AAIC_CreatureBase_C_ExecuteUbergraph_AIC_CreatureBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetNavFilter_ReturnValue = CallFunc_GetNavFilter_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_CustomEvent_Stimulus = K2Node_CustomEvent_Stimulus;
	Parms.CallFunc_RunBehaviorTree_ReturnValue = CallFunc_RunBehaviorTree_ReturnValue;
	Parms.CallFunc_UpdateAllyList_bIsAlly = CallFunc_UpdateAllyList_bIsAlly;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_CustomEvent_RequestID = K2Node_CustomEvent_RequestID;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Creature = K2Node_CustomEvent_Creature;
	Parms.K2Node_CustomEvent_DestroyedActor_1 = K2Node_CustomEvent_DestroyedActor_1;
	Parms.CallFunc_GetCreatureManager_CreatureManager = CallFunc_GetCreatureManager_CreatureManager;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsBP_Creature_Manager = K2Node_DynamicCast_AsBP_Creature_Manager;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_Left = K2Node_Event_Left;
	Parms.K2Node_Event_Right = K2Node_Event_Right;
	Parms.K2Node_Event_Destination = K2Node_Event_Destination;
	Parms.K2Node_Event_Direction = K2Node_Event_Direction;
	Parms.K2Node_Event_NavType = K2Node_Event_NavType;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_InitializeBlackBoardVariables_Success = CallFunc_InitializeBlackBoardVariables_Success;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_UpdateBlackBoardAIEnabled_bSuccess = CallFunc_UpdateBlackBoardAIEnabled_bSuccess;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetCreaturePawn_CreaturePawn = CallFunc_GetCreaturePawn_CreaturePawn;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_ComponentBoundEvent_Actor = K2Node_ComponentBoundEvent_Actor;
	Parms.K2Node_ComponentBoundEvent_Stimulus = K2Node_ComponentBoundEvent_Stimulus;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_RemoveFromAllLists_Branch = CallFunc_RemoveFromAllLists_Branch;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_AICharacter = K2Node_CustomEvent_AICharacter;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_RemoveFromAllLists_Branch_1 = CallFunc_RemoveFromAllLists_Branch_1;
	Parms.CallFunc_GetAIActions_ReturnValue = CallFunc_GetAIActions_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsAIAction = K2Node_ClassDynamicCast_AsAIAction;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_AddActionClass_ReturnValue = CallFunc_AddActionClass_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIC_CreatureBase.AIC_CreatureBase_C.CreatureSetTarget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIC_CreatureBase_C*         AIC_CreatureBase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          BP_CreatureBase                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OldTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AAIC_CreatureBase_C::CreatureSetTarget__DelegateSignature(class AAIC_CreatureBase_C* AIC_CreatureBase, class ABP_CreatureBase_C* BP_CreatureBase, class AActor* OldTarget, class AActor* NewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIC_CreatureBase_C", "CreatureSetTarget__DelegateSignature");

	Params::AAIC_CreatureBase_C_CreatureSetTarget__DelegateSignature_Params Parms{};

	Parms.AIC_CreatureBase = AIC_CreatureBase;
	Parms.BP_CreatureBase = BP_CreatureBase;
	Parms.OldTarget = OldTarget;
	Parms.NewTarget = NewTarget;

	UObject::ProcessEvent(Func, &Parms);

}

}


