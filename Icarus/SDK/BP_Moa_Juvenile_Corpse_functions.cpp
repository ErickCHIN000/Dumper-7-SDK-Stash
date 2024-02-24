#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Moa_Juvenile_Corpse.BP_Moa_Juvenile_Corpse_C
// (Actor)

class UClass* ABP_Moa_Juvenile_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Moa_Juvenile_Corpse_C");

	return Clss;
}


// BP_Moa_Juvenile_Corpse_C BP_Moa_Juvenile_Corpse.Default__BP_Moa_Juvenile_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Moa_Juvenile_Corpse_C* ABP_Moa_Juvenile_Corpse_C::GetDefaultObj()
{
	static class ABP_Moa_Juvenile_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Moa_Juvenile_Corpse_C*>(ABP_Moa_Juvenile_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Moa_Juvenile_Corpse.BP_Moa_Juvenile_Corpse_C.UpdateSkeletalMeshCarryPhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Moa_Juvenile_Corpse_C::UpdateSkeletalMeshCarryPhysics(class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Moa_Juvenile_Corpse_C", "UpdateSkeletalMeshCarryPhysics");

	Params::ABP_Moa_Juvenile_Corpse_C_UpdateSkeletalMeshCarryPhysics_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Moa_Juvenile_Corpse.BP_Moa_Juvenile_Corpse_C.OnSkinnedStateUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Moa_Juvenile_Corpse_C::OnSkinnedStateUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Moa_Juvenile_Corpse_C", "OnSkinnedStateUpdated");



	UObject::ProcessEvent(Func, nullptr);

}

}

