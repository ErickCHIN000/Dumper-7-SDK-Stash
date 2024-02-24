#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaDefault01.CamillaDefault01_C
// (None)

class UClass* UCamillaDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaDefault01_C");

	return Clss;
}


// CamillaDefault01_C CamillaDefault01.Default__CamillaDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaDefault01_C* UCamillaDefault01_C::GetDefaultObj()
{
	static class UCamillaDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaDefault01_C*>(UCamillaDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


