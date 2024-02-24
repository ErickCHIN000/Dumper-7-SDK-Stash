#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalLechieAcog.BP_LocalLechieAcog_C
// (Actor)

class UClass* ABP_LocalLechieAcog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalLechieAcog_C");

	return Clss;
}


// BP_LocalLechieAcog_C BP_LocalLechieAcog.Default__BP_LocalLechieAcog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalLechieAcog_C* ABP_LocalLechieAcog_C::GetDefaultObj()
{
	static class ABP_LocalLechieAcog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalLechieAcog_C*>(ABP_LocalLechieAcog_C::StaticClass()->DefaultObject);

	return Default;
}

}


