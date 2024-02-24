#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Challenge_Console_Major_Skybound.BP_Challenge_Console_Major_Skybound_C
// (None)

class UClass* UBP_Challenge_Console_Major_Skybound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Challenge_Console_Major_Skybound_C");

	return Clss;
}


// BP_Challenge_Console_Major_Skybound_C BP_Challenge_Console_Major_Skybound.Default__BP_Challenge_Console_Major_Skybound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Challenge_Console_Major_Skybound_C* UBP_Challenge_Console_Major_Skybound_C::GetDefaultObj()
{
	static class UBP_Challenge_Console_Major_Skybound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Challenge_Console_Major_Skybound_C*>(UBP_Challenge_Console_Major_Skybound_C::StaticClass()->DefaultObject);

	return Default;
}

}


