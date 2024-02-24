#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PersonalTeleportEgg.BP_PersonalTeleportEgg_C
// (Actor)

class UClass* ABP_PersonalTeleportEgg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PersonalTeleportEgg_C");

	return Clss;
}


// BP_PersonalTeleportEgg_C BP_PersonalTeleportEgg.Default__BP_PersonalTeleportEgg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PersonalTeleportEgg_C* ABP_PersonalTeleportEgg_C::GetDefaultObj()
{
	static class ABP_PersonalTeleportEgg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PersonalTeleportEgg_C*>(ABP_PersonalTeleportEgg_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PersonalTeleportEgg.BP_PersonalTeleportEgg_C.BP_EggOnTickClient
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DistanceToPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PersonalTeleportEgg_C::BP_EggOnTickClient(float DeltaTime, float DistanceToPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PersonalTeleportEgg_C", "BP_EggOnTickClient");

	Params::ABP_PersonalTeleportEgg_C_BP_EggOnTickClient_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.DistanceToPlayer = DistanceToPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PersonalTeleportEgg.BP_PersonalTeleportEgg_C.ExecuteUbergraph_BP_PersonalTeleportEgg
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DistanceToPlayer                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PersonalTeleportEgg_C::ExecuteUbergraph_BP_PersonalTeleportEgg(int32 EntryPoint, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, float K2Node_Event_DeltaTime, float K2Node_Event_DistanceToPlayer, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PersonalTeleportEgg_C", "ExecuteUbergraph_BP_PersonalTeleportEgg");

	Params::ABP_PersonalTeleportEgg_C_ExecuteUbergraph_BP_PersonalTeleportEgg_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.K2Node_Event_DistanceToPlayer = K2Node_Event_DistanceToPlayer;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


