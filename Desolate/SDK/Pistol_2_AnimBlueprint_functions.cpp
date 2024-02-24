#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Pistol_2_AnimBlueprint.Pistol_2_AnimBlueprint_C
// (None)

class UClass* UPistol_2_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pistol_2_AnimBlueprint_C");

	return Clss;
}


// Pistol_2_AnimBlueprint_C Pistol_2_AnimBlueprint.Default__Pistol_2_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPistol_2_AnimBlueprint_C* UPistol_2_AnimBlueprint_C::GetDefaultObj()
{
	static class UPistol_2_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPistol_2_AnimBlueprint_C*>(UPistol_2_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Pistol_2_AnimBlueprint.Pistol_2_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPistol_2_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pistol_2_AnimBlueprint_C", "AnimGraph");

	Params::UPistol_2_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Pistol_2_AnimBlueprint.Pistol_2_AnimBlueprint_C.ExecuteUbergraph_Pistol_2_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPistol_2_AnimBlueprint_C::ExecuteUbergraph_Pistol_2_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Pistol_2_AnimBlueprint_C", "ExecuteUbergraph_Pistol_2_AnimBlueprint");

	Params::UPistol_2_AnimBlueprint_C_ExecuteUbergraph_Pistol_2_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


