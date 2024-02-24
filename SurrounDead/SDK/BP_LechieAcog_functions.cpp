#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LechieAcog.BP_LechieAcog_C
// (Actor)

class UClass* ABP_LechieAcog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LechieAcog_C");

	return Clss;
}


// BP_LechieAcog_C BP_LechieAcog.Default__BP_LechieAcog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LechieAcog_C* ABP_LechieAcog_C::GetDefaultObj()
{
	static class ABP_LechieAcog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LechieAcog_C*>(ABP_LechieAcog_C::StaticClass()->DefaultObject);

	return Default;
}

}


