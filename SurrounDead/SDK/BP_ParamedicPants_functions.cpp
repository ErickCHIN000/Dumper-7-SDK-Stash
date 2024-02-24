#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ParamedicPants.BP_ParamedicPants_C
// (Actor)

class UClass* ABP_ParamedicPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ParamedicPants_C");

	return Clss;
}


// BP_ParamedicPants_C BP_ParamedicPants.Default__BP_ParamedicPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ParamedicPants_C* ABP_ParamedicPants_C::GetDefaultObj()
{
	static class ABP_ParamedicPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ParamedicPants_C*>(ABP_ParamedicPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


