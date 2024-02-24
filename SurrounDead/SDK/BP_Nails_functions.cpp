#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Nails.BP_Nails_C
// (Actor)

class UClass* ABP_Nails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Nails_C");

	return Clss;
}


// BP_Nails_C BP_Nails.Default__BP_Nails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Nails_C* ABP_Nails_C::GetDefaultObj()
{
	static class ABP_Nails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Nails_C*>(ABP_Nails_C::StaticClass()->DefaultObject);

	return Default;
}

}


