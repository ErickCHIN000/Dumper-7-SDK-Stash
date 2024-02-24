#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_MaleFirstPerson.ABP_MaleFirstPerson_C
// (None)

class UClass* UABP_MaleFirstPerson_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_MaleFirstPerson_C");

	return Clss;
}


// ABP_MaleFirstPerson_C ABP_MaleFirstPerson.Default__ABP_MaleFirstPerson_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_MaleFirstPerson_C* UABP_MaleFirstPerson_C::GetDefaultObj()
{
	static class UABP_MaleFirstPerson_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_MaleFirstPerson_C*>(UABP_MaleFirstPerson_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_MaleFirstPerson.ABP_MaleFirstPerson_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_MaleFirstPerson_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_MaleFirstPerson_C", "AnimGraph");

	Params::UABP_MaleFirstPerson_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_MaleFirstPerson.ABP_MaleFirstPerson_C.ExecuteUbergraph_ABP_MaleFirstPerson
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_MaleFirstPerson_C::ExecuteUbergraph_ABP_MaleFirstPerson(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_MaleFirstPerson_C", "ExecuteUbergraph_ABP_MaleFirstPerson");

	Params::UABP_MaleFirstPerson_C_ExecuteUbergraph_ABP_MaleFirstPerson_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


