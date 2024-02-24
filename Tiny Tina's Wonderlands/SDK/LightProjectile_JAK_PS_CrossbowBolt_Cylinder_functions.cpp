#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_JAK_PS_CrossbowBolt_Cylinder.LightProjectile_JAK_PS_CrossbowBolt_Cylinder_C
// (None)

class UClass* ULightProjectile_JAK_PS_CrossbowBolt_Cylinder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_JAK_PS_CrossbowBolt_Cylinder_C");

	return Clss;
}


// LightProjectile_JAK_PS_CrossbowBolt_Cylinder_C LightProjectile_JAK_PS_CrossbowBolt_Cylinder.Default__LightProjectile_JAK_PS_CrossbowBolt_Cylinder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_JAK_PS_CrossbowBolt_Cylinder_C* ULightProjectile_JAK_PS_CrossbowBolt_Cylinder_C::GetDefaultObj()
{
	static class ULightProjectile_JAK_PS_CrossbowBolt_Cylinder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_JAK_PS_CrossbowBolt_Cylinder_C*>(ULightProjectile_JAK_PS_CrossbowBolt_Cylinder_C::StaticClass()->DefaultObject);

	return Default;
}

}


