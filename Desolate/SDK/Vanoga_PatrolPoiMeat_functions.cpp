#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vanoga_PatrolPoiMeat.Vanoga_PatrolPoiMeat_C
// (Actor)

class UClass* AVanoga_PatrolPoiMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vanoga_PatrolPoiMeat_C");

	return Clss;
}


// Vanoga_PatrolPoiMeat_C Vanoga_PatrolPoiMeat.Default__Vanoga_PatrolPoiMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVanoga_PatrolPoiMeat_C* AVanoga_PatrolPoiMeat_C::GetDefaultObj()
{
	static class AVanoga_PatrolPoiMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVanoga_PatrolPoiMeat_C*>(AVanoga_PatrolPoiMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


