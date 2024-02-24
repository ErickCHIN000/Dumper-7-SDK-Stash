#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Gore_GibParent.BP_Gore_GibParent_C
// (Actor)

class UClass* ABP_Gore_GibParent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Gore_GibParent_C");

	return Clss;
}


// BP_Gore_GibParent_C BP_Gore_GibParent.Default__BP_Gore_GibParent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Gore_GibParent_C* ABP_Gore_GibParent_C::GetDefaultObj()
{
	static class ABP_Gore_GibParent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Gore_GibParent_C*>(ABP_Gore_GibParent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Gore_GibParent.BP_Gore_GibParent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Gore_GibParent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Gore_GibParent_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Gore_GibParent.BP_Gore_GibParent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Gore_GibParent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Gore_GibParent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Gore_GibParent.BP_Gore_GibParent_C.ExecuteUbergraph_BP_Gore_GibParent
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Gore_GibParent_C::ExecuteUbergraph_BP_Gore_GibParent(int32 EntryPoint, class UMeshComponent* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Gore_GibParent_C", "ExecuteUbergraph_BP_Gore_GibParent");

	Params::ABP_Gore_GibParent_C_ExecuteUbergraph_BP_Gore_GibParent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


