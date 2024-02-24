#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Katana.BP_Katana_C
// (Actor)

class UClass* ABP_Katana_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Katana_C");

	return Clss;
}


// BP_Katana_C BP_Katana.Default__BP_Katana_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Katana_C* ABP_Katana_C::GetDefaultObj()
{
	static class ABP_Katana_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Katana_C*>(ABP_Katana_C::StaticClass()->DefaultObject);

	return Default;
}

}


