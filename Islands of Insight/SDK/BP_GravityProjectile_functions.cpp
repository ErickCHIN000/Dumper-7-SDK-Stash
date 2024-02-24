#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GravityProjectile.BP_GravityProjectile_C
// (Actor)

class UClass* ABP_GravityProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GravityProjectile_C");

	return Clss;
}


// BP_GravityProjectile_C BP_GravityProjectile.Default__BP_GravityProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GravityProjectile_C* ABP_GravityProjectile_C::GetDefaultObj()
{
	static class ABP_GravityProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GravityProjectile_C*>(ABP_GravityProjectile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GravityProjectile.BP_GravityProjectile_C.OnNewProjectile
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_GravityProjectile_C::OnNewProjectile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GravityProjectile_C", "OnNewProjectile");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GravityProjectile.BP_GravityProjectile_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GravityProjectile_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GravityProjectile_C", "ReceiveTick");

	Params::ABP_GravityProjectile_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GravityProjectile.BP_GravityProjectile_C.BP_StopTrail
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_GravityProjectile_C::BP_StopTrail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GravityProjectile_C", "BP_StopTrail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GravityProjectile.BP_GravityProjectile_C.BP_StartVFX
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsSolved                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GravityProjectile_C::BP_StartVFX(bool IsSolved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GravityProjectile_C", "BP_StartVFX");

	Params::ABP_GravityProjectile_C_BP_StartVFX_Params Parms{};

	Parms.IsSolved = IsSolved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GravityProjectile.BP_GravityProjectile_C.BP_ImpactedObstacle
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                     ImpactLoc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GravityProjectile_C::BP_ImpactedObstacle(const struct FVector& ImpactLoc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GravityProjectile_C", "BP_ImpactedObstacle");

	Params::ABP_GravityProjectile_C_BP_ImpactedObstacle_Params Parms{};

	Parms.ImpactLoc = ImpactLoc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GravityProjectile.BP_GravityProjectile_C.ExecuteUbergraph_BP_GravityProjectile
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ImpactLoc                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsSolved                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GravityProjectile_C::ExecuteUbergraph_BP_GravityProjectile(int32 EntryPoint, const struct FVector& K2Node_Event_ImpactLoc, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue, float K2Node_Event_DeltaSeconds, bool K2Node_Event_IsSolved, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GravityProjectile_C", "ExecuteUbergraph_BP_GravityProjectile");

	Params::ABP_GravityProjectile_C_ExecuteUbergraph_BP_GravityProjectile_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ImpactLoc = K2Node_Event_ImpactLoc;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_IsSolved = K2Node_Event_IsSolved;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


