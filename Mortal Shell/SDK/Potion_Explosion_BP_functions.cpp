#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Potion_Explosion_BP.Potion_Explosion_BP_C
// (Actor)

class UClass* APotion_Explosion_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Potion_Explosion_BP_C");

	return Clss;
}


// Potion_Explosion_BP_C Potion_Explosion_BP.Default__Potion_Explosion_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APotion_Explosion_BP_C* APotion_Explosion_BP_C::GetDefaultObj()
{
	static class APotion_Explosion_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APotion_Explosion_BP_C*>(APotion_Explosion_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Potion_Explosion_BP.Potion_Explosion_BP_C.ReplaceNearbyFloorWithDM
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APotion_Explosion_BP_C::ReplaceNearbyFloorWithDM(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Potion_Explosion_BP_C", "ReplaceNearbyFloorWithDM");

	Params::APotion_Explosion_BP_C_ReplaceNearbyFloorWithDM_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}

}


