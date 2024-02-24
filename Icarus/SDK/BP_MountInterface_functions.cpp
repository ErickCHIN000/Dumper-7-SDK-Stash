#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MountInterface.BP_MountInterface_C
// (None)

class UClass* IBP_MountInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MountInterface_C");

	return Clss;
}


// BP_MountInterface_C BP_MountInterface.Default__BP_MountInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_MountInterface_C* IBP_MountInterface_C::GetDefaultObj()
{
	static class IBP_MountInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_MountInterface_C*>(IBP_MountInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MountInterface.BP_MountInterface_C.GetMountCombatBehaviour
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMountCombatBehaviourStateCombatBehaviour                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_MountInterface_C::GetMountCombatBehaviour(enum class EMountCombatBehaviourState* CombatBehaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MountInterface_C", "GetMountCombatBehaviour");

	Params::IBP_MountInterface_C_GetMountCombatBehaviour_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CombatBehaviour != nullptr)
		*CombatBehaviour = Parms.CombatBehaviour;

}


// Function BP_MountInterface.BP_MountInterface_C.GetMountMovementBehaviour
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMountMovementBehaviourStateMovementBehaviour                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_MountInterface_C::GetMountMovementBehaviour(enum class EMountMovementBehaviourState* MovementBehaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MountInterface_C", "GetMountMovementBehaviour");

	Params::IBP_MountInterface_C_GetMountMovementBehaviour_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MovementBehaviour != nullptr)
		*MovementBehaviour = Parms.MovementBehaviour;

}


// Function BP_MountInterface.BP_MountInterface_C.MountCombatBehaviourUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMountCombatBehaviourStateNewCombatBehaviour                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_MountInterface_C::MountCombatBehaviourUpdated(enum class EMountCombatBehaviourState NewCombatBehaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MountInterface_C", "MountCombatBehaviourUpdated");

	Params::IBP_MountInterface_C_MountCombatBehaviourUpdated_Params Parms{};

	Parms.NewCombatBehaviour = NewCombatBehaviour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MountInterface.BP_MountInterface_C.MountMovementBehaviourUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMountMovementBehaviourStateNewMovementBehaviour                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_MountInterface_C::MountMovementBehaviourUpdated(enum class EMountMovementBehaviourState NewMovementBehaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MountInterface_C", "MountMovementBehaviourUpdated");

	Params::IBP_MountInterface_C_MountMovementBehaviourUpdated_Params Parms{};

	Parms.NewMovementBehaviour = NewMovementBehaviour;

	UObject::ProcessEvent(Func, &Parms);

}

}


