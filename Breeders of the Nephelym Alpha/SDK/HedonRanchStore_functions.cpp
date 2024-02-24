#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HedonRanchStore.HedonRanchStore_C
// (None)

class UClass* UHedonRanchStore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HedonRanchStore_C");

	return Clss;
}


// HedonRanchStore_C HedonRanchStore.Default__HedonRanchStore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHedonRanchStore_C* UHedonRanchStore_C::GetDefaultObj()
{
	static class UHedonRanchStore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHedonRanchStore_C*>(UHedonRanchStore_C::StaticClass()->DefaultObject);

	return Default;
}

}


