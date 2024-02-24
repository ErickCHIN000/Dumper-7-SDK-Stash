#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaDefault01_R01.CamillaDefault01_R01_C
// (None)

class UClass* UCamillaDefault01_R01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaDefault01_R01_C");

	return Clss;
}


// CamillaDefault01_R01_C CamillaDefault01_R01.Default__CamillaDefault01_R01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaDefault01_R01_C* UCamillaDefault01_R01_C::GetDefaultObj()
{
	static class UCamillaDefault01_R01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaDefault01_R01_C*>(UCamillaDefault01_R01_C::StaticClass()->DefaultObject);

	return Default;
}

}


