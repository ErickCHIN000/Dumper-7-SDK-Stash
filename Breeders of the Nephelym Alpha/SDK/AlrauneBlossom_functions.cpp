#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AlrauneBlossom.AlrauneBlossom_C
// (None)

class UClass* UAlrauneBlossom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlrauneBlossom_C");

	return Clss;
}


// AlrauneBlossom_C AlrauneBlossom.Default__AlrauneBlossom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAlrauneBlossom_C* UAlrauneBlossom_C::GetDefaultObj()
{
	static class UAlrauneBlossom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlrauneBlossom_C*>(UAlrauneBlossom_C::StaticClass()->DefaultObject);

	return Default;
}

}


