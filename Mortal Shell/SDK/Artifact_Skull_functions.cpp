#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Artifact_Skull.Artifact_Skull_C
// (Actor)

class UClass* AArtifact_Skull_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Artifact_Skull_C");

	return Clss;
}


// Artifact_Skull_C Artifact_Skull.Default__Artifact_Skull_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArtifact_Skull_C* AArtifact_Skull_C::GetDefaultObj()
{
	static class AArtifact_Skull_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArtifact_Skull_C*>(AArtifact_Skull_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Artifact_Skull.Artifact_Skull_C.OnActorUsed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           ControllerWhoUsedActor                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AGameplayPC_C*>       CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGamePlayPlayerState_C*      K2Node_DynamicCast_AsGame_Play_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArtifact_Skull_C::OnActorUsed(class APlayerController* Controller, bool* Success, class APlayerController* ControllerWhoUsedActor, int32 Temp_int_Array_Index_Variable, bool CallFunc_OnActorUsed_Success, bool CallFunc_IsServer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AGameplayPC_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AGameplayPC_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AGamePlayPlayerState_C* K2Node_DynamicCast_AsGame_Play_Player_State, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Artifact_Skull_C", "OnActorUsed");

	Params::AArtifact_Skull_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.ControllerWhoUsedActor = ControllerWhoUsedActor;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_Player_State = K2Node_DynamicCast_AsGame_Play_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_As0_Base_1 = K2Node_DynamicCast_As0_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Artifact_Skull.Artifact_Skull_C.OnWasUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnWasUsed_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AArtifact_Skull_C::OnWasUsed(bool* Success, bool CallFunc_OnWasUsed_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Artifact_Skull_C", "OnWasUsed");

	Params::AArtifact_Skull_C_OnWasUsed_Params Parms{};

	Parms.CallFunc_OnWasUsed_Success = CallFunc_OnWasUsed_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Artifact_Skull.Artifact_Skull_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AArtifact_Skull_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Artifact_Skull_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Artifact_Skull.Artifact_Skull_C.ExecuteUbergraph_Artifact_Skull
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArtifact_Skull_C::ExecuteUbergraph_Artifact_Skull(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Artifact_Skull_C", "ExecuteUbergraph_Artifact_Skull");

	Params::AArtifact_Skull_C_ExecuteUbergraph_Artifact_Skull_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


