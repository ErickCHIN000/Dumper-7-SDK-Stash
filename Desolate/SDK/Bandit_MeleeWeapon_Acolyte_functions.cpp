#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bandit_MeleeWeapon_Acolyte.Bandit_MeleeWeapon_Acolyte_C
// (Actor)

class UClass* ABandit_MeleeWeapon_Acolyte_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bandit_MeleeWeapon_Acolyte_C");

	return Clss;
}


// Bandit_MeleeWeapon_Acolyte_C Bandit_MeleeWeapon_Acolyte.Default__Bandit_MeleeWeapon_Acolyte_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABandit_MeleeWeapon_Acolyte_C* ABandit_MeleeWeapon_Acolyte_C::GetDefaultObj()
{
	static class ABandit_MeleeWeapon_Acolyte_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABandit_MeleeWeapon_Acolyte_C*>(ABandit_MeleeWeapon_Acolyte_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bandit_MeleeWeapon_Acolyte.Bandit_MeleeWeapon_Acolyte_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABandit_MeleeWeapon_Acolyte_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bandit_MeleeWeapon_Acolyte_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bandit_MeleeWeapon_Acolyte.Bandit_MeleeWeapon_Acolyte_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABandit_MeleeWeapon_Acolyte_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bandit_MeleeWeapon_Acolyte_C", "ReceiveActorBeginOverlap");

	Params::ABandit_MeleeWeapon_Acolyte_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Bandit_MeleeWeapon_Acolyte.Bandit_MeleeWeapon_Acolyte_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABandit_MeleeWeapon_Acolyte_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bandit_MeleeWeapon_Acolyte_C", "ReceiveTick");

	Params::ABandit_MeleeWeapon_Acolyte_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Bandit_MeleeWeapon_Acolyte.Bandit_MeleeWeapon_Acolyte_C.ExecuteUbergraph_Bandit_MeleeWeapon_Acolyte
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABandit_MeleeWeapon_Acolyte_C::ExecuteUbergraph_Bandit_MeleeWeapon_Acolyte(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bandit_MeleeWeapon_Acolyte_C", "ExecuteUbergraph_Bandit_MeleeWeapon_Acolyte");

	Params::ABandit_MeleeWeapon_Acolyte_C_ExecuteUbergraph_Bandit_MeleeWeapon_Acolyte_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


