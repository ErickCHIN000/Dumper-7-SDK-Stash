#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MoneyBox_VeryBig.MoneyBox_VeryBig_C
// (Actor)

class UClass* AMoneyBox_VeryBig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MoneyBox_VeryBig_C");

	return Clss;
}


// MoneyBox_VeryBig_C MoneyBox_VeryBig.Default__MoneyBox_VeryBig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMoneyBox_VeryBig_C* AMoneyBox_VeryBig_C::GetDefaultObj()
{
	static class AMoneyBox_VeryBig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMoneyBox_VeryBig_C*>(AMoneyBox_VeryBig_C::StaticClass()->DefaultObject);

	return Default;
}

}


