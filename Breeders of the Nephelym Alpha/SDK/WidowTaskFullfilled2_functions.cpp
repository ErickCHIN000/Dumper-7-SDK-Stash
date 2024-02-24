#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WidowTaskFullfilled2.WidowTaskFullfilled2_C
// (None)

class UClass* UWidowTaskFullfilled2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidowTaskFullfilled2_C");

	return Clss;
}


// WidowTaskFullfilled2_C WidowTaskFullfilled2.Default__WidowTaskFullfilled2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidowTaskFullfilled2_C* UWidowTaskFullfilled2_C::GetDefaultObj()
{
	static class UWidowTaskFullfilled2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidowTaskFullfilled2_C*>(UWidowTaskFullfilled2_C::StaticClass()->DefaultObject);

	return Default;
}

}


