#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Antibiotics.BP_Antibiotics_C
// (Actor)

class UClass* ABP_Antibiotics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Antibiotics_C");

	return Clss;
}


// BP_Antibiotics_C BP_Antibiotics.Default__BP_Antibiotics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Antibiotics_C* ABP_Antibiotics_C::GetDefaultObj()
{
	static class ABP_Antibiotics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Antibiotics_C*>(ABP_Antibiotics_C::StaticClass()->DefaultObject);

	return Default;
}

}


