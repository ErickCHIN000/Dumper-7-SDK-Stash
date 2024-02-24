#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Splint.BP_Splint_C
// (Actor)

class UClass* ABP_Splint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Splint_C");

	return Clss;
}


// BP_Splint_C BP_Splint.Default__BP_Splint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Splint_C* ABP_Splint_C::GetDefaultObj()
{
	static class ABP_Splint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Splint_C*>(ABP_Splint_C::StaticClass()->DefaultObject);

	return Default;
}

}


