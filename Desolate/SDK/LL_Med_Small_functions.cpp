#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Med_Small.LL_Med_Small_C
// (Actor)

class UClass* ALL_Med_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Med_Small_C");

	return Clss;
}


// LL_Med_Small_C LL_Med_Small.Default__LL_Med_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Med_Small_C* ALL_Med_Small_C::GetDefaultObj()
{
	static class ALL_Med_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Med_Small_C*>(ALL_Med_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}


