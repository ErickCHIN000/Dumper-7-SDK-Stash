#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ScrapMetal.BP_ScrapMetal_C
// (Actor)

class UClass* ABP_ScrapMetal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ScrapMetal_C");

	return Clss;
}


// BP_ScrapMetal_C BP_ScrapMetal.Default__BP_ScrapMetal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ScrapMetal_C* ABP_ScrapMetal_C::GetDefaultObj()
{
	static class ABP_ScrapMetal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ScrapMetal_C*>(ABP_ScrapMetal_C::StaticClass()->DefaultObject);

	return Default;
}

}


