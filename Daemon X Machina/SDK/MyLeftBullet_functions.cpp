#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MyLeftBullet.MyLeftBullet_C
// (Actor)

class UClass* AMyLeftBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MyLeftBullet_C");

	return Clss;
}


// MyLeftBullet_C MyLeftBullet.Default__MyLeftBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMyLeftBullet_C* AMyLeftBullet_C::GetDefaultObj()
{
	static class AMyLeftBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMyLeftBullet_C*>(AMyLeftBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


