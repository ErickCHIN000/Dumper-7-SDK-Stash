#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CrossbowProjectile_Sesters.BP_CrossbowProjectile_Sesters_C
// (Actor)

class UClass* ABP_CrossbowProjectile_Sesters_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CrossbowProjectile_Sesters_C");

	return Clss;
}


// BP_CrossbowProjectile_Sesters_C BP_CrossbowProjectile_Sesters.Default__BP_CrossbowProjectile_Sesters_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CrossbowProjectile_Sesters_C* ABP_CrossbowProjectile_Sesters_C::GetDefaultObj()
{
	static class ABP_CrossbowProjectile_Sesters_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CrossbowProjectile_Sesters_C*>(ABP_CrossbowProjectile_Sesters_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CrossbowProjectile_Sesters.BP_CrossbowProjectile_Sesters_C.PlayImpactAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CrossbowProjectile_Sesters_C::PlayImpactAudio(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CrossbowProjectile_Sesters_C", "PlayImpactAudio");

	Params::ABP_CrossbowProjectile_Sesters_C_PlayImpactAudio_Params Parms{};

	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}

}


