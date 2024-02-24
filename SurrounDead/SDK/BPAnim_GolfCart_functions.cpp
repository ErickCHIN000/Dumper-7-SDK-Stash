#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_GolfCart.BPAnim_GolfCart_C
// (None)

class UClass* UBPAnim_GolfCart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_GolfCart_C");

	return Clss;
}


// BPAnim_GolfCart_C BPAnim_GolfCart.Default__BPAnim_GolfCart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_GolfCart_C* UBPAnim_GolfCart_C::GetDefaultObj()
{
	static class UBPAnim_GolfCart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_GolfCart_C*>(UBPAnim_GolfCart_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_GolfCart.BPAnim_GolfCart_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBPAnim_GolfCart_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_GolfCart_C", "AnimGraph");

	Params::UBPAnim_GolfCart_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BPAnim_GolfCart.BPAnim_GolfCart_C.ExecuteUbergraph_BPAnim_GolfCart
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_GolfCart_C::ExecuteUbergraph_BPAnim_GolfCart(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_GolfCart_C", "ExecuteUbergraph_BPAnim_GolfCart");

	Params::UBPAnim_GolfCart_C_ExecuteUbergraph_BPAnim_GolfCart_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


