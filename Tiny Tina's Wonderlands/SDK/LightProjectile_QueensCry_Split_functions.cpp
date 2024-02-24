#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjectile_QueensCry_Split.LightProjectile_QueensCry_Split_C
// (None)

class UClass* ULightProjectile_QueensCry_Split_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjectile_QueensCry_Split_C");

	return Clss;
}


// LightProjectile_QueensCry_Split_C LightProjectile_QueensCry_Split.Default__LightProjectile_QueensCry_Split_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjectile_QueensCry_Split_C* ULightProjectile_QueensCry_Split_C::GetDefaultObj()
{
	static class ULightProjectile_QueensCry_Split_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjectile_QueensCry_Split_C*>(ULightProjectile_QueensCry_Split_C::StaticClass()->DefaultObject);

	return Default;
}

}


