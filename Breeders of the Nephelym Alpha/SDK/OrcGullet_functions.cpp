#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcGullet.OrcGullet_C
// (None)

class UClass* UOrcGullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcGullet_C");

	return Clss;
}


// OrcGullet_C OrcGullet.Default__OrcGullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcGullet_C* UOrcGullet_C::GetDefaultObj()
{
	static class UOrcGullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcGullet_C*>(UOrcGullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


