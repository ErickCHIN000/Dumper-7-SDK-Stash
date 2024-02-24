#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ZombieBoss_MovementSpeed.ZombieBoss_MovementSpeed_C
// (None)

class UClass* UZombieBoss_MovementSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZombieBoss_MovementSpeed_C");

	return Clss;
}


// ZombieBoss_MovementSpeed_C ZombieBoss_MovementSpeed.Default__ZombieBoss_MovementSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UZombieBoss_MovementSpeed_C* UZombieBoss_MovementSpeed_C::GetDefaultObj()
{
	static class UZombieBoss_MovementSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UZombieBoss_MovementSpeed_C*>(UZombieBoss_MovementSpeed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ZombieBoss_MovementSpeed.ZombieBoss_MovementSpeed_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UZombieBoss_MovementSpeed_C::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZombieBoss_MovementSpeed_C", "ReceiveActivationAI");

	Params::UZombieBoss_MovementSpeed_C_ReceiveActivationAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ZombieBoss_MovementSpeed.ZombieBoss_MovementSpeed_C.ExecuteUbergraph_ZombieBoss_MovementSpeed
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ZombieBoss_C*            K2Node_DynamicCast_AsBP_Zombie_Boss                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UZombieBoss_MovementSpeed_C::ExecuteUbergraph_ZombieBoss_MovementSpeed(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABP_ZombieBoss_C* K2Node_DynamicCast_AsBP_Zombie_Boss, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ZombieBoss_MovementSpeed_C", "ExecuteUbergraph_ZombieBoss_MovementSpeed");

	Params::UZombieBoss_MovementSpeed_C_ExecuteUbergraph_ZombieBoss_MovementSpeed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsBP_Zombie_Boss = K2Node_DynamicCast_AsBP_Zombie_Boss;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


