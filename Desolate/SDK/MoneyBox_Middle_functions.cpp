#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MoneyBox_Middle.MoneyBox_Middle_C
// (Actor)

class UClass* AMoneyBox_Middle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoneyBox_Middle_C");

	return Clss;
}


// MoneyBox_Middle_C MoneyBox_Middle.Default__MoneyBox_Middle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMoneyBox_Middle_C* AMoneyBox_Middle_C::GetDefaultObj()
{
	static class AMoneyBox_Middle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoneyBox_Middle_C*>(AMoneyBox_Middle_C::StaticClass()->DefaultObject);

	return Default;
}

}


