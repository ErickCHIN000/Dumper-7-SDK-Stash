#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaDefault01_FutaBalls.CamillaDefault01_FutaBalls_C
// (None)

class UClass* UCamillaDefault01_FutaBalls_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaDefault01_FutaBalls_C");

	return Clss;
}


// CamillaDefault01_FutaBalls_C CamillaDefault01_FutaBalls.Default__CamillaDefault01_FutaBalls_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaDefault01_FutaBalls_C* UCamillaDefault01_FutaBalls_C::GetDefaultObj()
{
	static class UCamillaDefault01_FutaBalls_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaDefault01_FutaBalls_C*>(UCamillaDefault01_FutaBalls_C::StaticClass()->DefaultObject);

	return Default;
}

}


