#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Merchant_Skeleton_AnimBlueprint.Merchant_Skeleton_AnimBlueprint_C
// (None)

class UClass* UMerchant_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Merchant_Skeleton_AnimBlueprint_C");

	return Clss;
}


// Merchant_Skeleton_AnimBlueprint_C Merchant_Skeleton_AnimBlueprint.Default__Merchant_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMerchant_Skeleton_AnimBlueprint_C* UMerchant_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UMerchant_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMerchant_Skeleton_AnimBlueprint_C*>(UMerchant_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Merchant_Skeleton_AnimBlueprint.Merchant_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMerchant_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Merchant_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UMerchant_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Merchant_Skeleton_AnimBlueprint.Merchant_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Merchant_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchant_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Merchant_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Merchant_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Merchant_Skeleton_AnimBlueprint");

	Params::UMerchant_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Merchant_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


