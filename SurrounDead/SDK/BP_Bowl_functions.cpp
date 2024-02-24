#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Bowl.BP_Bowl_C
// (Actor)

class UClass* ABP_Bowl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Bowl_C");

	return Clss;
}


// BP_Bowl_C BP_Bowl.Default__BP_Bowl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Bowl_C* ABP_Bowl_C::GetDefaultObj()
{
	static class ABP_Bowl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Bowl_C*>(ABP_Bowl_C::StaticClass()->DefaultObject);

	return Default;
}

}


