#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeeUhNo.BeeUhNo_C
// (None)

class UClass* UBeeUhNo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeeUhNo_C");

	return Clss;
}


// BeeUhNo_C BeeUhNo.Default__BeeUhNo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeeUhNo_C* UBeeUhNo_C::GetDefaultObj()
{
	static class UBeeUhNo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeeUhNo_C*>(UBeeUhNo_C::StaticClass()->DefaultObject);

	return Default;
}

}


