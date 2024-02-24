#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcGullet_BreederF.OrcGullet_BreederF_C
// (None)

class UClass* UOrcGullet_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcGullet_BreederF_C");

	return Clss;
}


// OrcGullet_BreederF_C OrcGullet_BreederF.Default__OrcGullet_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcGullet_BreederF_C* UOrcGullet_BreederF_C::GetDefaultObj()
{
	static class UOrcGullet_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcGullet_BreederF_C*>(UOrcGullet_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


