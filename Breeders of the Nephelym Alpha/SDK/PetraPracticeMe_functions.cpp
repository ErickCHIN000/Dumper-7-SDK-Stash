#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PetraPracticeMe.PetraPracticeMe_C
// (None)

class UClass* UPetraPracticeMe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PetraPracticeMe_C");

	return Clss;
}


// PetraPracticeMe_C PetraPracticeMe.Default__PetraPracticeMe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPetraPracticeMe_C* UPetraPracticeMe_C::GetDefaultObj()
{
	static class UPetraPracticeMe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPetraPracticeMe_C*>(UPetraPracticeMe_C::StaticClass()->DefaultObject);

	return Default;
}

}


