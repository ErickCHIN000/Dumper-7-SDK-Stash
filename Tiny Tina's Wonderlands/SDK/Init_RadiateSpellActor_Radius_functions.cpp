#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_RadiateSpellActor_Radius.Init_RadiateSpellActor_Radius_C
// (None)

class UClass* UInit_RadiateSpellActor_Radius_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_RadiateSpellActor_Radius_C");

	return Clss;
}


// Init_RadiateSpellActor_Radius_C Init_RadiateSpellActor_Radius.Default__Init_RadiateSpellActor_Radius_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_RadiateSpellActor_Radius_C* UInit_RadiateSpellActor_Radius_C::GetDefaultObj()
{
	static class UInit_RadiateSpellActor_Radius_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_RadiateSpellActor_Radius_C*>(UInit_RadiateSpellActor_Radius_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_RadiateSpellActor_Radius.Init_RadiateSpellActor_Radius_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARadiateDamageActor_Spell_Base_C*K2Node_DynamicCast_AsRadiate_Damage_Actor_Spell_Base             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetSpellModRadius_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_RadiateSpellActor_Radius_C::CalculateAttributeInitialValue(class UObject* Context, class ARadiateDamageActor_Spell_Base_C* K2Node_DynamicCast_AsRadiate_Damage_Actor_Spell_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetSpellModRadius_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_RadiateSpellActor_Radius_C", "CalculateAttributeInitialValue");

	Params::UInit_RadiateSpellActor_Radius_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsRadiate_Damage_Actor_Spell_Base = K2Node_DynamicCast_AsRadiate_Damage_Actor_Spell_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSpellModRadius_ReturnValue = CallFunc_GetSpellModRadius_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


