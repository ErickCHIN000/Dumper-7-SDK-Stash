#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_JAK_PS_Masterwork_Child.LightProjectile_JAK_PS_Masterwork_Child_C
// (None)

class UClass* ULightProjectile_JAK_PS_Masterwork_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_JAK_PS_Masterwork_Child_C");

	return Clss;
}


// LightProjectile_JAK_PS_Masterwork_Child_C LightProjectile_JAK_PS_Masterwork_Child.Default__LightProjectile_JAK_PS_Masterwork_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_JAK_PS_Masterwork_Child_C* ULightProjectile_JAK_PS_Masterwork_Child_C::GetDefaultObj()
{
	static class ULightProjectile_JAK_PS_Masterwork_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_JAK_PS_Masterwork_Child_C*>(ULightProjectile_JAK_PS_Masterwork_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


