#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_CharacterWeight_Armor_PetClasses_StatWeight.Init_CharacterWeight_Armor_PetClasses_StatWeight_C
// (None)

class UClass* UInit_CharacterWeight_Armor_PetClasses_StatWeight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_CharacterWeight_Armor_PetClasses_StatWeight_C");

	return Clss;
}


// Init_CharacterWeight_Armor_PetClasses_StatWeight_C Init_CharacterWeight_Armor_PetClasses_StatWeight.Default__Init_CharacterWeight_Armor_PetClasses_StatWeight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_CharacterWeight_Armor_PetClasses_StatWeight_C* UInit_CharacterWeight_Armor_PetClasses_StatWeight_C::GetDefaultObj()
{
	static class UInit_CharacterWeight_Armor_PetClasses_StatWeight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_CharacterWeight_Armor_PetClasses_StatWeight_C*>(UInit_CharacterWeight_Armor_PetClasses_StatWeight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_CharacterWeight_Armor_PetClasses_StatWeight.Init_CharacterWeight_Armor_PetClasses_StatWeight_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_CharacterWeight_Armor_PetClasses_StatWeight_C::CalculateAttributeInitialValue(class UObject* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_CharacterWeight_Armor_PetClasses_StatWeight_C", "CalculateAttributeInitialValue");

	Params::UInit_CharacterWeight_Armor_PetClasses_StatWeight_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


