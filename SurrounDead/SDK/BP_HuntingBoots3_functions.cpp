#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HuntingBoots3.BP_HuntingBoots3_C
// (Actor)

class UClass* ABP_HuntingBoots3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HuntingBoots3_C");

	return Clss;
}


// BP_HuntingBoots3_C BP_HuntingBoots3.Default__BP_HuntingBoots3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HuntingBoots3_C* ABP_HuntingBoots3_C::GetDefaultObj()
{
	static class ABP_HuntingBoots3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HuntingBoots3_C*>(ABP_HuntingBoots3_C::StaticClass()->DefaultObject);

	return Default;
}

}


