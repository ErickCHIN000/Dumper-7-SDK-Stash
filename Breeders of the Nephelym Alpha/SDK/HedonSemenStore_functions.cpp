#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HedonSemenStore.HedonSemenStore_C
// (None)

class UClass* UHedonSemenStore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HedonSemenStore_C");

	return Clss;
}


// HedonSemenStore_C HedonSemenStore.Default__HedonSemenStore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHedonSemenStore_C* UHedonSemenStore_C::GetDefaultObj()
{
	static class UHedonSemenStore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHedonSemenStore_C*>(UHedonSemenStore_C::StaticClass()->DefaultObject);

	return Default;
}

}


