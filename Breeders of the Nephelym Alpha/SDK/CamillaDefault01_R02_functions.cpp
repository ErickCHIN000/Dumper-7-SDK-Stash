#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaDefault01_R02.CamillaDefault01_R02_C
// (None)

class UClass* UCamillaDefault01_R02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaDefault01_R02_C");

	return Clss;
}


// CamillaDefault01_R02_C CamillaDefault01_R02.Default__CamillaDefault01_R02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaDefault01_R02_C* UCamillaDefault01_R02_C::GetDefaultObj()
{
	static class UCamillaDefault01_R02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaDefault01_R02_C*>(UCamillaDefault01_R02_C::StaticClass()->DefaultObject);

	return Default;
}

}


