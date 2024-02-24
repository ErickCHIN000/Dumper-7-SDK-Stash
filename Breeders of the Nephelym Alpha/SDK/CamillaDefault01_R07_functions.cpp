#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaDefault01_R07.CamillaDefault01_R07_C
// (None)

class UClass* UCamillaDefault01_R07_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaDefault01_R07_C");

	return Clss;
}


// CamillaDefault01_R07_C CamillaDefault01_R07.Default__CamillaDefault01_R07_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaDefault01_R07_C* UCamillaDefault01_R07_C::GetDefaultObj()
{
	static class UCamillaDefault01_R07_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaDefault01_R07_C*>(UCamillaDefault01_R07_C::StaticClass()->DefaultObject);

	return Default;
}

}


