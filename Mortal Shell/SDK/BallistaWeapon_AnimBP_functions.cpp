#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BallistaWeapon_AnimBP.BallistaWeapon_AnimBP_C
// (None)

class UClass* UBallistaWeapon_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BallistaWeapon_AnimBP_C");

	return Clss;
}


// BallistaWeapon_AnimBP_C BallistaWeapon_AnimBP.Default__BallistaWeapon_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBallistaWeapon_AnimBP_C* UBallistaWeapon_AnimBP_C::GetDefaultObj()
{
	static class UBallistaWeapon_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBallistaWeapon_AnimBP_C*>(UBallistaWeapon_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BallistaWeapon_AnimBP.BallistaWeapon_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBallistaWeapon_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BallistaWeapon_AnimBP_C", "AnimGraph");

	Params::UBallistaWeapon_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BallistaWeapon_AnimBP.BallistaWeapon_AnimBP_C.ExecuteUbergraph_BallistaWeapon_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBallistaWeapon_AnimBP_C::ExecuteUbergraph_BallistaWeapon_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BallistaWeapon_AnimBP_C", "ExecuteUbergraph_BallistaWeapon_AnimBP");

	Params::UBallistaWeapon_AnimBP_C_ExecuteUbergraph_BallistaWeapon_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


