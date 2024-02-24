#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaDefault02.CamillaDefault02_C
// (None)

class UClass* UCamillaDefault02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaDefault02_C");

	return Clss;
}


// CamillaDefault02_C CamillaDefault02.Default__CamillaDefault02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaDefault02_C* UCamillaDefault02_C::GetDefaultObj()
{
	static class UCamillaDefault02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaDefault02_C*>(UCamillaDefault02_C::StaticClass()->DefaultObject);

	return Default;
}

}


