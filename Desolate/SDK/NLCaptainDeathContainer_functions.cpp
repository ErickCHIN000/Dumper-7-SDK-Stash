#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NLCaptainDeathContainer.NLCaptainDeathContainer_C
// (Actor)

class UClass* ANLCaptainDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NLCaptainDeathContainer_C");

	return Clss;
}


// NLCaptainDeathContainer_C NLCaptainDeathContainer.Default__NLCaptainDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANLCaptainDeathContainer_C* ANLCaptainDeathContainer_C::GetDefaultObj()
{
	static class ANLCaptainDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANLCaptainDeathContainer_C*>(ANLCaptainDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


