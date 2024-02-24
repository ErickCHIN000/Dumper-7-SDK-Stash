#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ZombieBoss_Attack.ZombieBoss_Attack_C
// (None)

class UClass* UZombieBoss_Attack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZombieBoss_Attack_C");

	return Clss;
}


// ZombieBoss_Attack_C ZombieBoss_Attack.Default__ZombieBoss_Attack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UZombieBoss_Attack_C* UZombieBoss_Attack_C::GetDefaultObj()
{
	static class UZombieBoss_Attack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UZombieBoss_Attack_C*>(UZombieBoss_Attack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ZombieBoss_Attack.ZombieBoss_Attack_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UZombieBoss_Attack_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZombieBoss_Attack_C", "ReceiveExecuteAI");

	Params::UZombieBoss_Attack_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZombieBoss_Attack.ZombieBoss_Attack_C.ExecuteUbergraph_ZombieBoss_Attack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ZombieBoss_C*            K2Node_DynamicCast_AsBP_Zombie_Boss                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UZombieBoss_Attack_C::ExecuteUbergraph_ZombieBoss_Attack(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABP_ZombieBoss_C* K2Node_DynamicCast_AsBP_Zombie_Boss, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZombieBoss_Attack_C", "ExecuteUbergraph_ZombieBoss_Attack");

	Params::UZombieBoss_Attack_C_ExecuteUbergraph_ZombieBoss_Attack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsBP_Zombie_Boss = K2Node_DynamicCast_AsBP_Zombie_Boss;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


