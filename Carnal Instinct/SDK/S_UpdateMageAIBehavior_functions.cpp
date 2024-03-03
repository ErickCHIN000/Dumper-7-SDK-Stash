#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass S_UpdateMageAIBehavior.S_UpdateMageAIBehavior_C
// (None)

class UClass* US_UpdateMageAIBehavior_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S_UpdateMageAIBehavior_C");

	return Clss;
}


// S_UpdateMageAIBehavior_C S_UpdateMageAIBehavior.Default__S_UpdateMageAIBehavior_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class US_UpdateMageAIBehavior_C* US_UpdateMageAIBehavior_C::GetDefaultObj()
{
	static class US_UpdateMageAIBehavior_C* Default = nullptr;

	if (!Default)
		Default = static_cast<US_UpdateMageAIBehavior_C*>(US_UpdateMageAIBehavior_C::StaticClass()->DefaultObject);

	return Default;
}


// Function S_UpdateMageAIBehavior.S_UpdateMageAIBehavior_C.UpdateActivities
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetBlackboardValueAsEnum_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void US_UpdateMageAIBehavior_C::UpdateActivities(bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, uint8 CallFunc_GetBlackboardValueAsEnum_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S_UpdateMageAIBehavior_C", "UpdateActivities");

	Params::US_UpdateMageAIBehavior_C_UpdateActivities_Params Parms{};

	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetBlackboardValueAsEnum_ReturnValue = CallFunc_GetBlackboardValueAsEnum_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S_UpdateMageAIBehavior.S_UpdateMageAIBehavior_C.UpdateBehavior
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              L_ReceivedHitsCount                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              L_StaminaPercent                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              L_DotProductToTarget                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      L_Target                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              L_DistanceToTarget                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AIBehavior            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_AIBehavior            Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class II_CanBeAttacked_C>K2Node_DynamicCast_AsI_Can_be_Attacked                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_Result                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRecentlyReceivedHitsCount_Value                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPatrolPathValid_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_AIBehavior            K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 CallFunc_GetState_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDotProductTo_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void US_UpdateMageAIBehavior_C::UpdateBehavior(int32 L_ReceivedHitsCount, float L_StaminaPercent, float L_DotProductToTarget, class AActor* L_Target, float L_DistanceToTarget, enum class E_AIBehavior Temp_byte_Variable, enum class E_AIBehavior Temp_byte_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, TScriptInterface<class II_CanBeAttacked_C> K2Node_DynamicCast_AsI_Can_be_Attacked, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_Result, bool Temp_bool_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_GetRecentlyReceivedHitsCount_Value, bool CallFunc_GreaterEqual_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsPatrolPathValid_Result, enum class E_AIBehavior K2Node_Select_Default, enum class E_State CallFunc_GetState_State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetDotProductTo_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetDistanceTo_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_4, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S_UpdateMageAIBehavior_C", "UpdateBehavior");

	Params::US_UpdateMageAIBehavior_C_UpdateBehavior_Params Parms{};

	Parms.L_ReceivedHitsCount = L_ReceivedHitsCount;
	Parms.L_StaminaPercent = L_StaminaPercent;
	Parms.L_DotProductToTarget = L_DotProductToTarget;
	Parms.L_Target = L_Target;
	Parms.L_DistanceToTarget = L_DistanceToTarget;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsI_Can_be_Attacked = K2Node_DynamicCast_AsI_Can_be_Attacked;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsAlive_Result = CallFunc_IsAlive_Result;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_GetRecentlyReceivedHitsCount_Value = CallFunc_GetRecentlyReceivedHitsCount_Value;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_3 = CallFunc_MakeLiteralByte_ReturnValue_3;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsPatrolPathValid_Result = CallFunc_IsPatrolPathValid_Result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetState_State = CallFunc_GetState_State;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetDotProductTo_ReturnValue = CallFunc_GetDotProductTo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_4 = CallFunc_MakeLiteralByte_ReturnValue_4;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S_UpdateMageAIBehavior.S_UpdateMageAIBehavior_C.ReceiveSearchStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void US_UpdateMageAIBehavior_C::ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S_UpdateMageAIBehavior_C", "ReceiveSearchStartAI");

	Params::US_UpdateMageAIBehavior_C_ReceiveSearchStartAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S_UpdateMageAIBehavior.S_UpdateMageAIBehavior_C.OnStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_State                 PrevState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void US_UpdateMageAIBehavior_C::OnStateChanged(enum class E_State PrevState, enum class E_State NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S_UpdateMageAIBehavior_C", "OnStateChanged");

	Params::US_UpdateMageAIBehavior_C_OnStateChanged_Params Parms{};

	Parms.PrevState = PrevState;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S_UpdateMageAIBehavior.S_UpdateMageAIBehavior_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void US_UpdateMageAIBehavior_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S_UpdateMageAIBehavior_C", "ReceiveTickAI");

	Params::US_UpdateMageAIBehavior_C_ReceiveTickAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S_UpdateMageAIBehavior.S_UpdateMageAIBehavior_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void US_UpdateMageAIBehavior_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S_UpdateMageAIBehavior_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function S_UpdateMageAIBehavior.S_UpdateMageAIBehavior_C.Flee
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void US_UpdateMageAIBehavior_C::Flee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S_UpdateMageAIBehavior_C", "Flee");



	UObject::ProcessEvent(Func, nullptr);

}


// Function S_UpdateMageAIBehavior.S_UpdateMageAIBehavior_C.ExecuteUbergraph_S_UpdateMageAIBehavior
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 K2Node_CustomEvent_PrevState                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_State                 K2Node_CustomEvent_NewState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseAI_C*                K2Node_DynamicCast_AsBP_Base_AI                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class ABP_BaseAIController_C*      K2Node_DynamicCast_AsBP_Base_AIController                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void US_UpdateMageAIBehavior_C::ExecuteUbergraph_S_UpdateMageAIBehavior(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, enum class E_State K2Node_CustomEvent_PrevState, enum class E_State K2Node_CustomEvent_NewState, class ABP_BaseAI_C* K2Node_DynamicCast_AsBP_Base_AI, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool CallFunc_BooleanOR_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_BaseAIController_C* K2Node_DynamicCast_AsBP_Base_AIController, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S_UpdateMageAIBehavior_C", "ExecuteUbergraph_S_UpdateMageAIBehavior");

	Params::US_UpdateMageAIBehavior_C_ExecuteUbergraph_S_UpdateMageAIBehavior_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController_1 = K2Node_Event_OwnerController_1;
	Parms.K2Node_Event_ControlledPawn_1 = K2Node_Event_ControlledPawn_1;
	Parms.K2Node_CustomEvent_PrevState = K2Node_CustomEvent_PrevState;
	Parms.K2Node_CustomEvent_NewState = K2Node_CustomEvent_NewState;
	Parms.K2Node_DynamicCast_AsBP_Base_AI = K2Node_DynamicCast_AsBP_Base_AI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBP_Base_AIController = K2Node_DynamicCast_AsBP_Base_AIController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


