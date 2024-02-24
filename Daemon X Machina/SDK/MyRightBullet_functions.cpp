#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MyRightBullet.MyRightBullet_C
// (Actor)

class UClass* AMyRightBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MyRightBullet_C");

	return Clss;
}


// MyRightBullet_C MyRightBullet.Default__MyRightBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMyRightBullet_C* AMyRightBullet_C::GetDefaultObj()
{
	static class AMyRightBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMyRightBullet_C*>(AMyRightBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


