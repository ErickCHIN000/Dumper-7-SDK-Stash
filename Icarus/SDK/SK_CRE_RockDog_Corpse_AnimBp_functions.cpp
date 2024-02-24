#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass SK_CRE_RockDog_Corpse_AnimBp.SK_CRE_RockDog_Corpse_AnimBp_C
// (None)

class UClass* USK_CRE_RockDog_Corpse_AnimBp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SK_CRE_RockDog_Corpse_AnimBp_C");

	return Clss;
}


// SK_CRE_RockDog_Corpse_AnimBp_C SK_CRE_RockDog_Corpse_AnimBp.Default__SK_CRE_RockDog_Corpse_AnimBp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USK_CRE_RockDog_Corpse_AnimBp_C* USK_CRE_RockDog_Corpse_AnimBp_C::GetDefaultObj()
{
	static class USK_CRE_RockDog_Corpse_AnimBp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USK_CRE_RockDog_Corpse_AnimBp_C*>(USK_CRE_RockDog_Corpse_AnimBp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SK_CRE_RockDog_Corpse_AnimBp.SK_CRE_RockDog_Corpse_AnimBp_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_CRE_RockDog_Corpse_AnimBp_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_RockDog_Corpse_AnimBp_C", "AnimGraph");

	Params::USK_CRE_RockDog_Corpse_AnimBp_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function SK_CRE_RockDog_Corpse_AnimBp.SK_CRE_RockDog_Corpse_AnimBp_C.ExecuteUbergraph_SK_CRE_RockDog_Corpse_AnimBp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_CRE_RockDog_Corpse_AnimBp_C::ExecuteUbergraph_SK_CRE_RockDog_Corpse_AnimBp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SK_CRE_RockDog_Corpse_AnimBp_C", "ExecuteUbergraph_SK_CRE_RockDog_Corpse_AnimBp");

	Params::USK_CRE_RockDog_Corpse_AnimBp_C_ExecuteUbergraph_SK_CRE_RockDog_Corpse_AnimBp_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


