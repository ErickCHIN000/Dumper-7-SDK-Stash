#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_Wildlife.NavFilter_Wildlife_C
// (None)

class UClass* UNavFilter_Wildlife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_Wildlife_C");

	return Clss;
}


// NavFilter_Wildlife_C NavFilter_Wildlife.Default__NavFilter_Wildlife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_Wildlife_C* UNavFilter_Wildlife_C::GetDefaultObj()
{
	static class UNavFilter_Wildlife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_Wildlife_C*>(UNavFilter_Wildlife_C::StaticClass()->DefaultObject);

	return Default;
}

}


