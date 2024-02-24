#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaDefault01_R05.CamillaDefault01_R05_C
// (None)

class UClass* UCamillaDefault01_R05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaDefault01_R05_C");

	return Clss;
}


// CamillaDefault01_R05_C CamillaDefault01_R05.Default__CamillaDefault01_R05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaDefault01_R05_C* UCamillaDefault01_R05_C::GetDefaultObj()
{
	static class UCamillaDefault01_R05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaDefault01_R05_C*>(UCamillaDefault01_R05_C::StaticClass()->DefaultObject);

	return Default;
}

}


