#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass dmgtype_Bullet.dmgtype_Bullet_C
// (None)

class UClass* UDmgtype_Bullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("dmgtype_Bullet_C");

	return Clss;
}


// dmgtype_Bullet_C dmgtype_Bullet.Default__dmgtype_Bullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgtype_Bullet_C* UDmgtype_Bullet_C::GetDefaultObj()
{
	static class UDmgtype_Bullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgtype_Bullet_C*>(UDmgtype_Bullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


