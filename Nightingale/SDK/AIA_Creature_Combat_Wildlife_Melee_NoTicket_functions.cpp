#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_Combat_Wildlife_Melee_NoTicket.AIA_Creature_Combat_Wildlife_Melee_NoTicket_C
// (None)

class UClass* UAIA_Creature_Combat_Wildlife_Melee_NoTicket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_Combat_Wildlife_Melee_NoTicket_C");

	return Clss;
}


// AIA_Creature_Combat_Wildlife_Melee_NoTicket_C AIA_Creature_Combat_Wildlife_Melee_NoTicket.Default__AIA_Creature_Combat_Wildlife_Melee_NoTicket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_Combat_Wildlife_Melee_NoTicket_C* UAIA_Creature_Combat_Wildlife_Melee_NoTicket_C::GetDefaultObj()
{
	static class UAIA_Creature_Combat_Wildlife_Melee_NoTicket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_Combat_Wildlife_Melee_NoTicket_C*>(UAIA_Creature_Combat_Wildlife_Melee_NoTicket_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_Combat_Wildlife_Melee_NoTicket.AIA_Creature_Combat_Wildlife_Melee_NoTicket_C.OwnerMeleeRequirements
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxAngle                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_Wildlife_Melee_NoTicket_C::OwnerMeleeRequirements(bool* Success, double MaxAngle, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_Wildlife_Melee_NoTicket_C", "OwnerMeleeRequirements");

	Params::UAIA_Creature_Combat_Wildlife_Melee_NoTicket_C_OwnerMeleeRequirements_Params Parms{};

	Parms.MaxAngle = MaxAngle;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function AIA_Creature_Combat_Wildlife_Melee_NoTicket.AIA_Creature_Combat_Wildlife_Melee_NoTicket_C.GetNormalizedScore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNormalizedScore_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIA_Creature_Combat_Wildlife_Melee_NoTicket_C::GetNormalizedScore(class AActor* Target, float CallFunc_GetNormalizedScore_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_Wildlife_Melee_NoTicket_C", "GetNormalizedScore");

	Params::UAIA_Creature_Combat_Wildlife_Melee_NoTicket_C_GetNormalizedScore_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetNormalizedScore_ReturnValue = CallFunc_GetNormalizedScore_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


