#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Zombie_MovementSpeed.Zombie_MovementSpeed_C
// (None)

class UClass* UZombie_MovementSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Zombie_MovementSpeed_C");

	return Clss;
}


// Zombie_MovementSpeed_C Zombie_MovementSpeed.Default__Zombie_MovementSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UZombie_MovementSpeed_C* UZombie_MovementSpeed_C::GetDefaultObj()
{
	static class UZombie_MovementSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UZombie_MovementSpeed_C*>(UZombie_MovementSpeed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Zombie_MovementSpeed.Zombie_MovementSpeed_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UZombie_MovementSpeed_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Zombie_MovementSpeed_C", "ReceiveActivationAI");

	Params::UZombie_MovementSpeed_C_ReceiveActivationAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Zombie_MovementSpeed.Zombie_MovementSpeed_C.ExecuteUbergraph_Zombie_MovementSpeed
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AI_C>  K2Node_DynamicCast_AsBPI_AI                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AI_C>  K2Node_DynamicCast_AsBPI_AI_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMovementSpeeds_RoamingSpeed                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMovementSpeeds_AlertSpeed                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMovementSpeeds_AttackSpeed                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMovementSpeeds_RoamingSpeed_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMovementSpeeds_AlertSpeed_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMovementSpeeds_AttackSpeed_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_AI_C>  K2Node_DynamicCast_AsBPI_AI_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMovementSpeeds_RoamingSpeed_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMovementSpeeds_AlertSpeed_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMovementSpeeds_AttackSpeed_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MasterZombie_C*          K2Node_DynamicCast_AsBP_Master_Zombie                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UZombie_MovementSpeed_C::ExecuteUbergraph_Zombie_MovementSpeed(int32 EntryPoint, TScriptInterface<class IBPI_AI_C> K2Node_DynamicCast_AsBPI_AI, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_AI_C> K2Node_DynamicCast_AsBPI_AI_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_GetMovementSpeeds_RoamingSpeed, double CallFunc_GetMovementSpeeds_AlertSpeed, double CallFunc_GetMovementSpeeds_AttackSpeed, double CallFunc_GetMovementSpeeds_RoamingSpeed_1, double CallFunc_GetMovementSpeeds_AlertSpeed_1, double CallFunc_GetMovementSpeeds_AttackSpeed_1, TScriptInterface<class IBPI_AI_C> K2Node_DynamicCast_AsBPI_AI_2, bool K2Node_DynamicCast_bSuccess_2, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, double CallFunc_GetMovementSpeeds_RoamingSpeed_2, double CallFunc_GetMovementSpeeds_AlertSpeed_2, double CallFunc_GetMovementSpeeds_AttackSpeed_2, class ABP_MasterZombie_C* K2Node_DynamicCast_AsBP_Master_Zombie, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Zombie_MovementSpeed_C", "ExecuteUbergraph_Zombie_MovementSpeed");

	Params::UZombie_MovementSpeed_C_ExecuteUbergraph_Zombie_MovementSpeed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBPI_AI = K2Node_DynamicCast_AsBPI_AI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_AI_1 = K2Node_DynamicCast_AsBPI_AI_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetMovementSpeeds_RoamingSpeed = CallFunc_GetMovementSpeeds_RoamingSpeed;
	Parms.CallFunc_GetMovementSpeeds_AlertSpeed = CallFunc_GetMovementSpeeds_AlertSpeed;
	Parms.CallFunc_GetMovementSpeeds_AttackSpeed = CallFunc_GetMovementSpeeds_AttackSpeed;
	Parms.CallFunc_GetMovementSpeeds_RoamingSpeed_1 = CallFunc_GetMovementSpeeds_RoamingSpeed_1;
	Parms.CallFunc_GetMovementSpeeds_AlertSpeed_1 = CallFunc_GetMovementSpeeds_AlertSpeed_1;
	Parms.CallFunc_GetMovementSpeeds_AttackSpeed_1 = CallFunc_GetMovementSpeeds_AttackSpeed_1;
	Parms.K2Node_DynamicCast_AsBPI_AI_2 = K2Node_DynamicCast_AsBPI_AI_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetMovementSpeeds_RoamingSpeed_2 = CallFunc_GetMovementSpeeds_RoamingSpeed_2;
	Parms.CallFunc_GetMovementSpeeds_AlertSpeed_2 = CallFunc_GetMovementSpeeds_AlertSpeed_2;
	Parms.CallFunc_GetMovementSpeeds_AttackSpeed_2 = CallFunc_GetMovementSpeeds_AttackSpeed_2;
	Parms.K2Node_DynamicCast_AsBP_Master_Zombie = K2Node_DynamicCast_AsBP_Master_Zombie;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


