#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIAR_TargetIsEnemyOrSelf.AIAR_TargetIsEnemyOrSelf_C
// (None)

class UClass* UAIAR_TargetIsEnemyOrSelf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIAR_TargetIsEnemyOrSelf_C");

	return Clss;
}


// AIAR_TargetIsEnemyOrSelf_C AIAR_TargetIsEnemyOrSelf.Default__AIAR_TargetIsEnemyOrSelf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIAR_TargetIsEnemyOrSelf_C* UAIAR_TargetIsEnemyOrSelf_C::GetDefaultObj()
{
	static class UAIAR_TargetIsEnemyOrSelf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIAR_TargetIsEnemyOrSelf_C*>(UAIAR_TargetIsEnemyOrSelf_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIAR_TargetIsEnemyOrSelf.AIAR_TargetIsEnemyOrSelf_C.CheckStaticTargetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwnerPawn_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetOwnerAIController_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Targeter_C>K2Node_DynamicCast_AsBPI_Targeter                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnemy_bIsEnemy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIAR_TargetIsEnemyOrSelf_C::CheckStaticTargetRequirements(class AActor* Target, class APawn* CallFunc_GetOwnerPawn_ReturnValue, class AAIController* CallFunc_GetOwnerAIController_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEnemy_bIsEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIAR_TargetIsEnemyOrSelf_C", "CheckStaticTargetRequirements");

	Params::UAIAR_TargetIsEnemyOrSelf_C_CheckStaticTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetOwnerPawn_ReturnValue = CallFunc_GetOwnerPawn_ReturnValue;
	Parms.CallFunc_GetOwnerAIController_ReturnValue = CallFunc_GetOwnerAIController_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Targeter = K2Node_DynamicCast_AsBPI_Targeter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsEnemy_bIsEnemy = CallFunc_IsEnemy_bIsEnemy;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


