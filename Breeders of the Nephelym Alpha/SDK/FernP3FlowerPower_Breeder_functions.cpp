#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernP3FlowerPower_Breeder.FernP3FlowerPower_Breeder_C
// (None)

class UClass* UFernP3FlowerPower_Breeder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernP3FlowerPower_Breeder_C");

	return Clss;
}


// FernP3FlowerPower_Breeder_C FernP3FlowerPower_Breeder.Default__FernP3FlowerPower_Breeder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernP3FlowerPower_Breeder_C* UFernP3FlowerPower_Breeder_C::GetDefaultObj()
{
	static class UFernP3FlowerPower_Breeder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernP3FlowerPower_Breeder_C*>(UFernP3FlowerPower_Breeder_C::StaticClass()->DefaultObject);

	return Default;
}

}


