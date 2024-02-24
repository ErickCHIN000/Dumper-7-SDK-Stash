#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Structure_Functional.BP_Structure_Functional_C
// (Actor)

class UClass* ABP_Structure_Functional_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Structure_Functional_C");

	return Clss;
}


// BP_Structure_Functional_C BP_Structure_Functional.Default__BP_Structure_Functional_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Structure_Functional_C* ABP_Structure_Functional_C::GetDefaultObj()
{
	static class ABP_Structure_Functional_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Structure_Functional_C*>(ABP_Structure_Functional_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Structure_Functional.BP_Structure_Functional_C.GetEntitySupportMesh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UStaticMeshComponent* ABP_Structure_Functional_C::GetEntitySupportMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_C", "GetEntitySupportMesh");

	Params::ABP_Structure_Functional_C_GetEntitySupportMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Functional.BP_Structure_Functional_C.GetIdentifierTag
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FGameplayTag ABP_Structure_Functional_C::GetIdentifierTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_C", "GetIdentifierTag");

	Params::ABP_Structure_Functional_C_GetIdentifierTag_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Structure_Functional.BP_Structure_Functional_C.GetSupportMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        SupportMesh                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_C::GetSupportMesh(class UStaticMeshComponent** SupportMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_C", "GetSupportMesh");

	Params::ABP_Structure_Functional_C_GetSupportMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SupportMesh != nullptr)
		*SupportMesh = Parms.SupportMesh;

}


// Function BP_Structure_Functional.BP_Structure_Functional_C.GetCacheParameters
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCanCache                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCanWithdraw                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_C::GetCacheParameters(bool* bCanCache, bool* bCanWithdraw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_C", "GetCacheParameters");

	Params::ABP_Structure_Functional_C_GetCacheParameters_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bCanCache != nullptr)
		*bCanCache = Parms.bCanCache;

	if (bCanWithdraw != nullptr)
		*bCanWithdraw = Parms.bCanWithdraw;

}


// Function BP_Structure_Functional.BP_Structure_Functional_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Structure_Functional_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Structure_Functional.BP_Structure_Functional_C.ExecuteUbergraph_BP_Structure_Functional
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Structure_Functional_C::ExecuteUbergraph_BP_Structure_Functional(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Structure_Functional_C", "ExecuteUbergraph_BP_Structure_Functional");

	Params::ABP_Structure_Functional_C_ExecuteUbergraph_BP_Structure_Functional_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


