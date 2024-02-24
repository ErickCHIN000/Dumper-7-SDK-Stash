#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SmallRainEffect.SmallRainEffect_C
// (Actor)

class UClass* ASmallRainEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmallRainEffect_C");

	return Clss;
}


// SmallRainEffect_C SmallRainEffect.Default__SmallRainEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASmallRainEffect_C* ASmallRainEffect_C::GetDefaultObj()
{
	static class ASmallRainEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASmallRainEffect_C*>(ASmallRainEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


