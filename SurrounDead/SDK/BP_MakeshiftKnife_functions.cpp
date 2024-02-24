#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MakeshiftKnife.BP_MakeshiftKnife_C
// (Actor)

class UClass* ABP_MakeshiftKnife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MakeshiftKnife_C");

	return Clss;
}


// BP_MakeshiftKnife_C BP_MakeshiftKnife.Default__BP_MakeshiftKnife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MakeshiftKnife_C* ABP_MakeshiftKnife_C::GetDefaultObj()
{
	static class ABP_MakeshiftKnife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MakeshiftKnife_C*>(ABP_MakeshiftKnife_C::StaticClass()->DefaultObject);

	return Default;
}

}


