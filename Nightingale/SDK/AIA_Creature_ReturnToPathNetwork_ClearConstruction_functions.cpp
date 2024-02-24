#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_ReturnToPathNetwork_ClearConstruction.AIA_Creature_ReturnToPathNetwork_ClearConstruction_C
// (None)

class UClass* UAIA_Creature_ReturnToPathNetwork_ClearConstruction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_ReturnToPathNetwork_ClearConstruction_C");

	return Clss;
}


// AIA_Creature_ReturnToPathNetwork_ClearConstruction_C AIA_Creature_ReturnToPathNetwork_ClearConstruction.Default__AIA_Creature_ReturnToPathNetwork_ClearConstruction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_ReturnToPathNetwork_ClearConstruction_C* UAIA_Creature_ReturnToPathNetwork_ClearConstruction_C::GetDefaultObj()
{
	static class UAIA_Creature_ReturnToPathNetwork_ClearConstruction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_ReturnToPathNetwork_ClearConstruction_C*>(UAIA_Creature_ReturnToPathNetwork_ClearConstruction_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_ReturnToPathNetwork_ClearConstruction.AIA_Creature_ReturnToPathNetwork_ClearConstruction_C.CheckStaticTargetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_ReturnToPathNetwork_ClearConstruction_C::CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_ReturnToPathNetwork_ClearConstruction_C", "CheckStaticTargetRequirements");

	Params::UAIA_Creature_ReturnToPathNetwork_ClearConstruction_C_CheckStaticTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_ReturnToPathNetwork_ClearConstruction.AIA_Creature_ReturnToPathNetwork_ClearConstruction_C.CheckOwnerRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_ReturnToPathNetwork_ClearConstruction_C::CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_ReturnToPathNetwork_ClearConstruction_C", "CheckOwnerRequirements");

	Params::UAIA_Creature_ReturnToPathNetwork_ClearConstruction_C_CheckOwnerRequirements_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


