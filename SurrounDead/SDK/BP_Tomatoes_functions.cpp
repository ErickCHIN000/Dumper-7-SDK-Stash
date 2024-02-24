#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Tomatoes.BP_Tomatoes_C
// (Actor)

class UClass* ABP_Tomatoes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Tomatoes_C");

	return Clss;
}


// BP_Tomatoes_C BP_Tomatoes.Default__BP_Tomatoes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Tomatoes_C* ABP_Tomatoes_C::GetDefaultObj()
{
	static class ABP_Tomatoes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Tomatoes_C*>(ABP_Tomatoes_C::StaticClass()->DefaultObject);

	return Default;
}

}


