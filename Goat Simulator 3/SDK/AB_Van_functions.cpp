#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass AB_Van.AB_Van_C
// (None)

class UClass* UAB_Van_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AB_Van_C");

	return Clss;
}


// AB_Van_C AB_Van.Default__AB_Van_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAB_Van_C* UAB_Van_C::GetDefaultObj()
{
	static class UAB_Van_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAB_Van_C*>(UAB_Van_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AB_Van.AB_Van_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UAB_Van_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Van_C", "AnimGraph");

	Params::UAB_Van_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function AB_Van.AB_Van_C.ExecuteUbergraph_AB_Van
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Van_C::ExecuteUbergraph_AB_Van(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AB_Van_C", "ExecuteUbergraph_AB_Van");

	Params::UAB_Van_C_ExecuteUbergraph_AB_Van_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


