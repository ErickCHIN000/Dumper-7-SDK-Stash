#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValkyrieLongScope.BP_ValkyrieLongScope_C
// (Actor)

class UClass* ABP_ValkyrieLongScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValkyrieLongScope_C");

	return Clss;
}


// BP_ValkyrieLongScope_C BP_ValkyrieLongScope.Default__BP_ValkyrieLongScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ValkyrieLongScope_C* ABP_ValkyrieLongScope_C::GetDefaultObj()
{
	static class ABP_ValkyrieLongScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ValkyrieLongScope_C*>(ABP_ValkyrieLongScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


