#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Challenge_Console_Complete20SideMissions.BP_Challenge_Console_Complete20SideMissions_C
// (None)

class UClass* UBP_Challenge_Console_Complete20SideMissions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Challenge_Console_Complete20SideMissions_C");

	return Clss;
}


// BP_Challenge_Console_Complete20SideMissions_C BP_Challenge_Console_Complete20SideMissions.Default__BP_Challenge_Console_Complete20SideMissions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Challenge_Console_Complete20SideMissions_C* UBP_Challenge_Console_Complete20SideMissions_C::GetDefaultObj()
{
	static class UBP_Challenge_Console_Complete20SideMissions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Challenge_Console_Complete20SideMissions_C*>(UBP_Challenge_Console_Complete20SideMissions_C::StaticClass()->DefaultObject);

	return Default;
}

}


