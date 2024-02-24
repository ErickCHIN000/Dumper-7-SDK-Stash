#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FirearmControlComponent.FirearmControlComponent_C
// (None)

class UClass* UFirearmControlComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FirearmControlComponent_C");

	return Clss;
}


// FirearmControlComponent_C FirearmControlComponent.Default__FirearmControlComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFirearmControlComponent_C* UFirearmControlComponent_C::GetDefaultObj()
{
	static class UFirearmControlComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFirearmControlComponent_C*>(UFirearmControlComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


