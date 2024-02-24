#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_BenchRepairItems.LL_BenchRepairItems_C
// (Actor)

class UClass* ALL_BenchRepairItems_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_BenchRepairItems_C");

	return Clss;
}


// LL_BenchRepairItems_C LL_BenchRepairItems.Default__LL_BenchRepairItems_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_BenchRepairItems_C* ALL_BenchRepairItems_C::GetDefaultObj()
{
	static class ALL_BenchRepairItems_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_BenchRepairItems_C*>(ALL_BenchRepairItems_C::StaticClass()->DefaultObject);

	return Default;
}

}


