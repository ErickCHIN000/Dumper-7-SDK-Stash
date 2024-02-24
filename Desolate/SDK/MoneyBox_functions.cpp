#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MoneyBox.MoneyBox_C
// (Actor)

class UClass* AMoneyBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoneyBox_C");

	return Clss;
}


// MoneyBox_C MoneyBox.Default__MoneyBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMoneyBox_C* AMoneyBox_C::GetDefaultObj()
{
	static class AMoneyBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoneyBox_C*>(AMoneyBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


