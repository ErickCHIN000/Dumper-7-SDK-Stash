#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Gun_AnimBlueprint.Gun_AnimBlueprint_C
// (None)

class UClass* UGun_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Gun_AnimBlueprint_C");

	return Clss;
}


// Gun_AnimBlueprint_C Gun_AnimBlueprint.Default__Gun_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGun_AnimBlueprint_C* UGun_AnimBlueprint_C::GetDefaultObj()
{
	static class UGun_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGun_AnimBlueprint_C*>(UGun_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Gun_AnimBlueprint.Gun_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGun_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Gun_AnimBlueprint_C", "AnimGraph");

	Params::UGun_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Gun_AnimBlueprint.Gun_AnimBlueprint_C.ExecuteUbergraph_Gun_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGun_AnimBlueprint_C::ExecuteUbergraph_Gun_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Gun_AnimBlueprint_C", "ExecuteUbergraph_Gun_AnimBlueprint");

	Params::UGun_AnimBlueprint_C_ExecuteUbergraph_Gun_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


