#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCampLogHUDComponent.BaseCampLogHUDComponent_C
// (None)

class UClass* UBaseCampLogHUDComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCampLogHUDComponent_C");

	return Clss;
}


// BaseCampLogHUDComponent_C BaseCampLogHUDComponent.Default__BaseCampLogHUDComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCampLogHUDComponent_C* UBaseCampLogHUDComponent_C::GetDefaultObj()
{
	static class UBaseCampLogHUDComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCampLogHUDComponent_C*>(UBaseCampLogHUDComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


