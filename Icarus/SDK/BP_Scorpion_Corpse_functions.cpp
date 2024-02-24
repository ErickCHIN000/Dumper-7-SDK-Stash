#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Scorpion_Corpse.BP_Scorpion_Corpse_C
// (Actor)

class UClass* ABP_Scorpion_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Scorpion_Corpse_C");

	return Clss;
}


// BP_Scorpion_Corpse_C BP_Scorpion_Corpse.Default__BP_Scorpion_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Scorpion_Corpse_C* ABP_Scorpion_Corpse_C::GetDefaultObj()
{
	static class ABP_Scorpion_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Scorpion_Corpse_C*>(ABP_Scorpion_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Scorpion_Corpse.BP_Scorpion_Corpse_C.UpdateSkeletalMeshCarryPhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Scorpion_Corpse_C::UpdateSkeletalMeshCarryPhysics(class USkeletalMeshComponent* SkeletalMeshComponent, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Scorpion_Corpse_C", "UpdateSkeletalMeshCarryPhysics");

	Params::ABP_Scorpion_Corpse_C_UpdateSkeletalMeshCarryPhysics_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


