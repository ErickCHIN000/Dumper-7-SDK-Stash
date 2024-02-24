#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_BuildingHammer.BP_SkeletalItem_BuildingHammer_C
// (Actor)

class UClass* ABP_SkeletalItem_BuildingHammer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_BuildingHammer_C");

	return Clss;
}


// BP_SkeletalItem_BuildingHammer_C BP_SkeletalItem_BuildingHammer.Default__BP_SkeletalItem_BuildingHammer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_BuildingHammer_C* ABP_SkeletalItem_BuildingHammer_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_BuildingHammer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_BuildingHammer_C*>(ABP_SkeletalItem_BuildingHammer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_BuildingHammer.BP_SkeletalItem_BuildingHammer_C.BP_SkeletalItem_BuildingHammer_AutoGenFunc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FViewTraceResult            Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// enum class EViewTraceResultPriorityReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewTraceResultPriorityCallFunc_GetGenericViewTraceResultPriority_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EViewTraceResultPriority ABP_SkeletalItem_BuildingHammer_C::BP_SkeletalItem_BuildingHammer_AutoGenFunc(struct FViewTraceResult& Result, enum class EViewTraceResultPriority CallFunc_GetGenericViewTraceResultPriority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_BuildingHammer_C", "BP_SkeletalItem_BuildingHammer_AutoGenFunc");

	Params::ABP_SkeletalItem_BuildingHammer_C_BP_SkeletalItem_BuildingHammer_AutoGenFunc_Params Parms{};

	Parms.Result = Result;
	Parms.CallFunc_GetGenericViewTraceResultPriority_ReturnValue = CallFunc_GetGenericViewTraceResultPriority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


