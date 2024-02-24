#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcBrashDumb.OrcBrashDumb_C
// (None)

class UClass* UOrcBrashDumb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcBrashDumb_C");

	return Clss;
}


// OrcBrashDumb_C OrcBrashDumb.Default__OrcBrashDumb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcBrashDumb_C* UOrcBrashDumb_C::GetDefaultObj()
{
	static class UOrcBrashDumb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcBrashDumb_C*>(UOrcBrashDumb_C::StaticClass()->DefaultObject);

	return Default;
}

}


