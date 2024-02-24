#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Human.BP_Human_C
// (Actor, Pawn)

class UClass* ABP_Human_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Human_C");

	return Clss;
}


// BP_Human_C BP_Human.Default__BP_Human_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Human_C* ABP_Human_C::GetDefaultObj()
{
	static class ABP_Human_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Human_C*>(ABP_Human_C::StaticClass()->DefaultObject);

	return Default;
}

}


