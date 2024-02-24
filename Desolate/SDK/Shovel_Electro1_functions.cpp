#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shovel_Electro1.Shovel_Electro1_C
// (Actor)

class UClass* AShovel_Electro1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shovel_Electro1_C");

	return Clss;
}


// Shovel_Electro1_C Shovel_Electro1.Default__Shovel_Electro1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShovel_Electro1_C* AShovel_Electro1_C::GetDefaultObj()
{
	static class AShovel_Electro1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShovel_Electro1_C*>(AShovel_Electro1_C::StaticClass()->DefaultObject);

	return Default;
}

}


