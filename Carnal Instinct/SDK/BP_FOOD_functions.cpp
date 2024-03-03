#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FOOD.BP_Food_C
// (Actor)

class UClass* ABP_Food_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Food_C");

	return Clss;
}


// BP_Food_C BP_FOOD.Default__BP_Food_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Food_C* ABP_Food_C::GetDefaultObj()
{
	static class ABP_Food_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Food_C*>(ABP_Food_C::StaticClass()->DefaultObject);

	return Default;
}

}


