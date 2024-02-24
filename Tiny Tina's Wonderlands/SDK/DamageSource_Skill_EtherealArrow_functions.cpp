#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Skill_EtherealArrow.DamageSource_Skill_EtherealArrow_C
// (None)

class UClass* UDamageSource_Skill_EtherealArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Skill_EtherealArrow_C");

	return Clss;
}


// DamageSource_Skill_EtherealArrow_C DamageSource_Skill_EtherealArrow.Default__DamageSource_Skill_EtherealArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Skill_EtherealArrow_C* UDamageSource_Skill_EtherealArrow_C::GetDefaultObj()
{
	static class UDamageSource_Skill_EtherealArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Skill_EtherealArrow_C*>(UDamageSource_Skill_EtherealArrow_C::StaticClass()->DefaultObject);

	return Default;
}

}


