#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TornadoProjectile.TornadoProjectile_C
// (Actor)

class UClass* ATornadoProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TornadoProjectile_C");

	return Clss;
}


// TornadoProjectile_C TornadoProjectile.Default__TornadoProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATornadoProjectile_C* ATornadoProjectile_C::GetDefaultObj()
{
	static class ATornadoProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATornadoProjectile_C*>(ATornadoProjectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


