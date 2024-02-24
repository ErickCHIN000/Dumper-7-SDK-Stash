#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_Bound.NavFilter_Bound_C
// (None)

class UClass* UNavFilter_Bound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_Bound_C");

	return Clss;
}


// NavFilter_Bound_C NavFilter_Bound.Default__NavFilter_Bound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_Bound_C* UNavFilter_Bound_C::GetDefaultObj()
{
	static class UNavFilter_Bound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_Bound_C*>(UNavFilter_Bound_C::StaticClass()->DefaultObject);

	return Default;
}

}


