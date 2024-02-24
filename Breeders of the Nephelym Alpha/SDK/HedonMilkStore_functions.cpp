#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HedonMilkStore.HedonMilkStore_C
// (None)

class UClass* UHedonMilkStore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HedonMilkStore_C");

	return Clss;
}


// HedonMilkStore_C HedonMilkStore.Default__HedonMilkStore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHedonMilkStore_C* UHedonMilkStore_C::GetDefaultObj()
{
	static class UHedonMilkStore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHedonMilkStore_C*>(UHedonMilkStore_C::StaticClass()->DefaultObject);

	return Default;
}

}


