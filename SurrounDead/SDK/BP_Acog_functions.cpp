#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Acog.BP_Acog_C
// (Actor)

class UClass* ABP_Acog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Acog_C");

	return Clss;
}


// BP_Acog_C BP_Acog.Default__BP_Acog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Acog_C* ABP_Acog_C::GetDefaultObj()
{
	static class ABP_Acog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Acog_C*>(ABP_Acog_C::StaticClass()->DefaultObject);

	return Default;
}

}


