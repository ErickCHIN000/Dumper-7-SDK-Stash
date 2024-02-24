#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MyDetourCrowdAIController.MyDetourCrowdAIController_C
// (Actor)

class UClass* AMyDetourCrowdAIController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MyDetourCrowdAIController_C");

	return Clss;
}


// MyDetourCrowdAIController_C MyDetourCrowdAIController.Default__MyDetourCrowdAIController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMyDetourCrowdAIController_C* AMyDetourCrowdAIController_C::GetDefaultObj()
{
	static class AMyDetourCrowdAIController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMyDetourCrowdAIController_C*>(AMyDetourCrowdAIController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MyDetourCrowdAIController.MyDetourCrowdAIController_C.CallPawnSensed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMyDetourCrowdAIController_C::CallPawnSensed(class AZero_Base_C* Target, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyDetourCrowdAIController_C", "CallPawnSensed");

	Params::AMyDetourCrowdAIController_C_CallPawnSensed_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyDetourCrowdAIController.MyDetourCrowdAIController_C.GetEnemyCharacterName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (Parm, OutParm)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetName_Name                                            (None)

void AMyDetourCrowdAIController_C::GetEnemyCharacterName(class FText* Name, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetName_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyDetourCrowdAIController_C", "GetEnemyCharacterName");

	Params::AMyDetourCrowdAIController_C_GetEnemyCharacterName_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetName_Name = CallFunc_GetName_Name;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function MyDetourCrowdAIController.MyDetourCrowdAIController_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APawn*                       Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMyDetourCrowdAIController_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyDetourCrowdAIController_C", "BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature");

	Params::AMyDetourCrowdAIController_C_BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature_Params Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyDetourCrowdAIController.MyDetourCrowdAIController_C.GetNearestGroupSpawner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyDetourCrowdAIController_C::GetNearestGroupSpawner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyDetourCrowdAIController_C", "GetNearestGroupSpawner");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyDetourCrowdAIController.MyDetourCrowdAIController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMyDetourCrowdAIController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyDetourCrowdAIController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyDetourCrowdAIController.MyDetourCrowdAIController_C.BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_HearNoiseDelegate__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class APawn*                       Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMyDetourCrowdAIController_C::BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, struct FVector& Location, float Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyDetourCrowdAIController_C", "BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_HearNoiseDelegate__DelegateSignature");

	Params::AMyDetourCrowdAIController_C_BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_HearNoiseDelegate__DelegateSignature_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.Location = Location;
	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyDetourCrowdAIController.MyDetourCrowdAIController_C.ResetAggroOnWalkBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyDetourCrowdAIController_C::ResetAggroOnWalkBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyDetourCrowdAIController_C", "ResetAggroOnWalkBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyDetourCrowdAIController.MyDetourCrowdAIController_C.ForceResetAggro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyDetourCrowdAIController_C::ForceResetAggro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyDetourCrowdAIController_C", "ForceResetAggro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyDetourCrowdAIController.MyDetourCrowdAIController_C.ExecuteUbergraph_MyDetourCrowdAIController
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       K2Node_ComponentBoundEvent_Pawn                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetNavAgentLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_ComponentBoundEvent_Instigator                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_ComponentBoundEvent_Location                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Volume                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMyDetourCrowdAIController_C::ExecuteUbergraph_MyDetourCrowdAIController(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class APawn* K2Node_ComponentBoundEvent_Pawn, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_GetNavAgentLocation_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class APawn* K2Node_ComponentBoundEvent_Instigator, const struct FVector& K2Node_ComponentBoundEvent_Location, float K2Node_ComponentBoundEvent_Volume, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Less_FloatFloat_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyDetourCrowdAIController_C", "ExecuteUbergraph_MyDetourCrowdAIController");

	Params::AMyDetourCrowdAIController_C_ExecuteUbergraph_MyDetourCrowdAIController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Pawn = K2Node_ComponentBoundEvent_Pawn;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetNavAgentLocation_ReturnValue = CallFunc_GetNavAgentLocation_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue_1 = CallFunc_GetBlackboard_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Instigator = K2Node_ComponentBoundEvent_Instigator;
	Parms.K2Node_ComponentBoundEvent_Location = K2Node_ComponentBoundEvent_Location;
	Parms.K2Node_ComponentBoundEvent_Volume = K2Node_ComponentBoundEvent_Volume;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsEnemy_Character_1 = K2Node_DynamicCast_AsEnemy_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_3 = CallFunc_MakeLiteralName_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetBlackboard_ReturnValue_2 = CallFunc_GetBlackboard_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MyDetourCrowdAIController.MyDetourCrowdAIController_C.OnPawnSensed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyDetourCrowdAIController_C::OnPawnSensed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyDetourCrowdAIController_C", "OnPawnSensed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MyDetourCrowdAIController.MyDetourCrowdAIController_C.WasAggroed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMyDetourCrowdAIController_C::WasAggroed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MyDetourCrowdAIController_C", "WasAggroed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


