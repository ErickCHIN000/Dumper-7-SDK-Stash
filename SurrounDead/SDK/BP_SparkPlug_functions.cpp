#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SparkPlug.BP_SparkPlug_C
// (Actor)

class UClass* ABP_SparkPlug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SparkPlug_C");

	return Clss;
}


// BP_SparkPlug_C BP_SparkPlug.Default__BP_SparkPlug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SparkPlug_C* ABP_SparkPlug_C::GetDefaultObj()
{
	static class ABP_SparkPlug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SparkPlug_C*>(ABP_SparkPlug_C::StaticClass()->DefaultObject);

	return Default;
}

}


