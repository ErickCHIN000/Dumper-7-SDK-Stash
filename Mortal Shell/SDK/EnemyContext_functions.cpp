#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyContext.EnemyContext_C
// (None)

class UClass* UEnemyContext_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyContext_C");

	return Clss;
}


// EnemyContext_C EnemyContext.Default__EnemyContext_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyContext_C* UEnemyContext_C::GetDefaultObj()
{
	static class UEnemyContext_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyContext_C*>(UEnemyContext_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnemyContext.EnemyContext_C.ProvideSingleActor
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ResultingActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      EnemyActor                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMortalShellEQSPawn_C*       K2Node_DynamicCast_AsMortal_Shell_EQSPawn                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AZero_Base_C*>        CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnemyContext_C::ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor, class AActor* EnemyActor, class AMortalShellEQSPawn_C* K2Node_DynamicCast_AsMortal_Shell_EQSPawn, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPlayerPawn_ReturnValue, TArray<class AZero_Base_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AZero_Base_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyContext_C", "ProvideSingleActor");

	Params::UEnemyContext_C_ProvideSingleActor_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.EnemyActor = EnemyActor;
	Parms.K2Node_DynamicCast_AsMortal_Shell_EQSPawn = K2Node_DynamicCast_AsMortal_Shell_EQSPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingActor != nullptr)
		*ResultingActor = Parms.ResultingActor;

}

}


