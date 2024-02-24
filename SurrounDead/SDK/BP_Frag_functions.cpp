#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Frag.BP_Frag_C
// (Actor)

class UClass* ABP_Frag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Frag_C");

	return Clss;
}


// BP_Frag_C BP_Frag.Default__BP_Frag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Frag_C* ABP_Frag_C::GetDefaultObj()
{
	static class ABP_Frag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Frag_C*>(ABP_Frag_C::StaticClass()->DefaultObject);

	return Default;
}

}


