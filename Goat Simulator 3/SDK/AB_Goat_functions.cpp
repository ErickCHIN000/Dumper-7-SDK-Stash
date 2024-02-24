#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_Goat.AB_Goat_C
// (None)

class UClass* UAB_Goat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_Goat_C");

	return Clss;
}


// AB_Goat_C AB_Goat.Default__AB_Goat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_Goat_C* UAB_Goat_C::GetDefaultObj()
{
	static class UAB_Goat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_Goat_C*>(UAB_Goat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_Goat.AB_Goat_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_Goat_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Goat_C", "AnimGraph");

	Params::UAB_Goat_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_Goat.AB_Goat_C.AnimNotify_Footstep_B_L
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAB_Goat_C::AnimNotify_Footstep_B_L()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Goat_C", "AnimNotify_Footstep_B_L");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_Goat.AB_Goat_C.AnimNotify_Footstep_B_R
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAB_Goat_C::AnimNotify_Footstep_B_R()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Goat_C", "AnimNotify_Footstep_B_R");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_Goat.AB_Goat_C.AnimNotify_Footstep_F_L
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAB_Goat_C::AnimNotify_Footstep_F_L()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Goat_C", "AnimNotify_Footstep_F_L");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_Goat.AB_Goat_C.AnimNotify_Footstep_F_R
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAB_Goat_C::AnimNotify_Footstep_F_R()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Goat_C", "AnimNotify_Footstep_F_R");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AB_Goat.AB_Goat_C.ExecuteUbergraph_AB_Goat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Goat_C::ExecuteUbergraph_AB_Goat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Goat_C", "ExecuteUbergraph_AB_Goat");

	Params::UAB_Goat_C_ExecuteUbergraph_AB_Goat_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


