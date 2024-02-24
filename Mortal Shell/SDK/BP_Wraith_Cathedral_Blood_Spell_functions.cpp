#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Wraith_Cathedral_Blood_Spell.BP_Wraith_Cathedral_Blood_Spell_C
// (Actor)

class UClass* ABP_Wraith_Cathedral_Blood_Spell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Wraith_Cathedral_Blood_Spell_C");

	return Clss;
}


// BP_Wraith_Cathedral_Blood_Spell_C BP_Wraith_Cathedral_Blood_Spell.Default__BP_Wraith_Cathedral_Blood_Spell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Wraith_Cathedral_Blood_Spell_C* ABP_Wraith_Cathedral_Blood_Spell_C::GetDefaultObj()
{
	static class ABP_Wraith_Cathedral_Blood_Spell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Wraith_Cathedral_Blood_Spell_C*>(ABP_Wraith_Cathedral_Blood_Spell_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Wraith_Cathedral_Blood_Spell.BP_Wraith_Cathedral_Blood_Spell_C.SoundOnFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Cathedral_Blood_Spell_C::SoundOnFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Cathedral_Blood_Spell_C", "SoundOnFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Cathedral_Blood_Spell.BP_Wraith_Cathedral_Blood_Spell_C.ExecuteUbergraph_BP_Wraith_Cathedral_Blood_Spell
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Wraith_Cathedral_Blood_Spell_C::ExecuteUbergraph_BP_Wraith_Cathedral_Blood_Spell(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Cathedral_Blood_Spell_C", "ExecuteUbergraph_BP_Wraith_Cathedral_Blood_Spell");

	Params::ABP_Wraith_Cathedral_Blood_Spell_C_ExecuteUbergraph_BP_Wraith_Cathedral_Blood_Spell_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


