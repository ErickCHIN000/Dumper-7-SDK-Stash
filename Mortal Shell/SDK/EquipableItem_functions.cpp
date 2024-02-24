#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EquipableItem.EquipableItem_C
// (Actor)

class UClass* AEquipableItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EquipableItem_C");

	return Clss;
}


// EquipableItem_C EquipableItem.Default__EquipableItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEquipableItem_C* AEquipableItem_C::GetDefaultObj()
{
	static class AEquipableItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEquipableItem_C*>(AEquipableItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EquipableItem.EquipableItem_C.ActivateItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEquipableItem_C::ActivateItem(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipableItem_C", "ActivateItem");

	Params::AEquipableItem_C_ActivateItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


