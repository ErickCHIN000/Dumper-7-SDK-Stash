#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalLechieSuppressor.BP_LocalLechieSuppressor_C
// (Actor)

class UClass* ABP_LocalLechieSuppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalLechieSuppressor_C");

	return Clss;
}


// BP_LocalLechieSuppressor_C BP_LocalLechieSuppressor.Default__BP_LocalLechieSuppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalLechieSuppressor_C* ABP_LocalLechieSuppressor_C::GetDefaultObj()
{
	static class ABP_LocalLechieSuppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalLechieSuppressor_C*>(ABP_LocalLechieSuppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


