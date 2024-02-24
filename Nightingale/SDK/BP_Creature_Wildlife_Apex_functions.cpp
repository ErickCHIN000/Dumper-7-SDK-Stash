#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Creature_Wildlife_Apex.BP_Creature_Wildlife_Apex_C
// (Actor, Pawn)

class UClass* ABP_Creature_Wildlife_Apex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Creature_Wildlife_Apex_C");

	return Clss;
}


// BP_Creature_Wildlife_Apex_C BP_Creature_Wildlife_Apex.Default__BP_Creature_Wildlife_Apex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Creature_Wildlife_Apex_C* ABP_Creature_Wildlife_Apex_C::GetDefaultObj()
{
	static class ABP_Creature_Wildlife_Apex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Creature_Wildlife_Apex_C*>(ABP_Creature_Wildlife_Apex_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Creature_Wildlife_Apex.BP_Creature_Wildlife_Apex_C.SetHarvestNodeInstanceLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     HarvestNodeInstanceLocation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Wildlife_Apex_C::SetHarvestNodeInstanceLocation(const struct FVector& HarvestNodeInstanceLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Apex_C", "SetHarvestNodeInstanceLocation");

	Params::ABP_Creature_Wildlife_Apex_C_SetHarvestNodeInstanceLocation_Params Parms{};

	Parms.HarvestNodeInstanceLocation = HarvestNodeInstanceLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Wildlife_Apex.BP_Creature_Wildlife_Apex_C.SetHarvestNodeInstancee
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HarvestNodeInstance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Wildlife_Apex_C::SetHarvestNodeInstancee(int32 HarvestNodeInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Apex_C", "SetHarvestNodeInstancee");

	Params::ABP_Creature_Wildlife_Apex_C_SetHarvestNodeInstancee_Params Parms{};

	Parms.HarvestNodeInstance = HarvestNodeInstance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Wildlife_Apex.BP_Creature_Wildlife_Apex_C.SetHarvestNode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ResourceNode_IIM_C*      HarvestNode                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Wildlife_Apex_C::SetHarvestNode(class ABP_ResourceNode_IIM_C* HarvestNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Apex_C", "SetHarvestNode");

	Params::ABP_Creature_Wildlife_Apex_C_SetHarvestNode_Params Parms{};

	Parms.HarvestNode = HarvestNode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_Wildlife_Apex.BP_Creature_Wildlife_Apex_C.GetHarvestNodeInstanceLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     ApexHarvestNodeInstanceLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Wildlife_Apex_C::GetHarvestNodeInstanceLocation(struct FVector* ApexHarvestNodeInstanceLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Apex_C", "GetHarvestNodeInstanceLocation");

	Params::ABP_Creature_Wildlife_Apex_C_GetHarvestNodeInstanceLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ApexHarvestNodeInstanceLocation != nullptr)
		*ApexHarvestNodeInstanceLocation = std::move(Parms.ApexHarvestNodeInstanceLocation);

}


// Function BP_Creature_Wildlife_Apex.BP_Creature_Wildlife_Apex_C.GetHarvestNodeInstance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              HarvestNodeInstance                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Wildlife_Apex_C::GetHarvestNodeInstance(int32* HarvestNodeInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Apex_C", "GetHarvestNodeInstance");

	Params::ABP_Creature_Wildlife_Apex_C_GetHarvestNodeInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HarvestNodeInstance != nullptr)
		*HarvestNodeInstance = Parms.HarvestNodeInstance;

}


// Function BP_Creature_Wildlife_Apex.BP_Creature_Wildlife_Apex_C.GetHarvestNode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABP_ResourceNodeIIMBase_C*   HarvestNode                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_Wildlife_Apex_C::GetHarvestNode(class ABP_ResourceNodeIIMBase_C** HarvestNode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_Wildlife_Apex_C", "GetHarvestNode");

	Params::ABP_Creature_Wildlife_Apex_C_GetHarvestNode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HarvestNode != nullptr)
		*HarvestNode = Parms.HarvestNode;

}

}


