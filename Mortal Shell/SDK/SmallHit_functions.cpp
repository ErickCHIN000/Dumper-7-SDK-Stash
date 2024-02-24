#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmallHit.SmallHit_C
// (None)

class UClass* USmallHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmallHit_C");

	return Clss;
}


// SmallHit_C SmallHit.Default__SmallHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmallHit_C* USmallHit_C::GetDefaultObj()
{
	static class USmallHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmallHit_C*>(USmallHit_C::StaticClass()->DefaultObject);

	return Default;
}

}


