#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_JAK_AR_CrossbowGen.LightProjectile_JAK_AR_CrossbowGen_C
// (None)

class UClass* ULightProjectile_JAK_AR_CrossbowGen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_JAK_AR_CrossbowGen_C");

	return Clss;
}


// LightProjectile_JAK_AR_CrossbowGen_C LightProjectile_JAK_AR_CrossbowGen.Default__LightProjectile_JAK_AR_CrossbowGen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_JAK_AR_CrossbowGen_C* ULightProjectile_JAK_AR_CrossbowGen_C::GetDefaultObj()
{
	static class ULightProjectile_JAK_AR_CrossbowGen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_JAK_AR_CrossbowGen_C*>(ULightProjectile_JAK_AR_CrossbowGen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightProjectile_JAK_AR_CrossbowGen.LightProjectile_JAK_AR_CrossbowGen_C.OnBegin
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile*            Projectile                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightProjectile_JAK_AR_CrossbowGen_C::OnBegin(class ULightProjectile* Projectile, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightProjectile_JAK_AR_CrossbowGen_C", "OnBegin");

	Params::ULightProjectile_JAK_AR_CrossbowGen_C_OnBegin_Params Parms{};

	Parms.Projectile = Projectile;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


