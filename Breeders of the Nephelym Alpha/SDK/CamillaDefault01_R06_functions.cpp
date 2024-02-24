#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaDefault01_R06.CamillaDefault01_R06_C
// (None)

class UClass* UCamillaDefault01_R06_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaDefault01_R06_C");

	return Clss;
}


// CamillaDefault01_R06_C CamillaDefault01_R06.Default__CamillaDefault01_R06_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaDefault01_R06_C* UCamillaDefault01_R06_C::GetDefaultObj()
{
	static class UCamillaDefault01_R06_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaDefault01_R06_C*>(UCamillaDefault01_R06_C::StaticClass()->DefaultObject);

	return Default;
}

}


