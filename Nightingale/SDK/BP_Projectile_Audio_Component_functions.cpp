#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_Audio_Component.BP_Projectile_Audio_Component_C
// (None)

class UClass* UBP_Projectile_Audio_Component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_Audio_Component_C");

	return Clss;
}


// BP_Projectile_Audio_Component_C BP_Projectile_Audio_Component.Default__BP_Projectile_Audio_Component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Projectile_Audio_Component_C* UBP_Projectile_Audio_Component_C::GetDefaultObj()
{
	static class UBP_Projectile_Audio_Component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Projectile_Audio_Component_C*>(UBP_Projectile_Audio_Component_C::StaticClass()->DefaultObject);

	return Default;
}

}


