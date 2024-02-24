#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_PS_Crossbolt_QueensCry.DamageSource_PS_Crossbolt_QueensCry_C
// (None)

class UClass* UDamageSource_PS_Crossbolt_QueensCry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_PS_Crossbolt_QueensCry_C");

	return Clss;
}


// DamageSource_PS_Crossbolt_QueensCry_C DamageSource_PS_Crossbolt_QueensCry.Default__DamageSource_PS_Crossbolt_QueensCry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_PS_Crossbolt_QueensCry_C* UDamageSource_PS_Crossbolt_QueensCry_C::GetDefaultObj()
{
	static class UDamageSource_PS_Crossbolt_QueensCry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_PS_Crossbolt_QueensCry_C*>(UDamageSource_PS_Crossbolt_QueensCry_C::StaticClass()->DefaultObject);

	return Default;
}

}


