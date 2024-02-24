#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cond_KotC_CanAddToAura.Cond_KotC_CanAddToAura_C
// (None)

class UClass* UCond_KotC_CanAddToAura_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cond_KotC_CanAddToAura_C");

	return Clss;
}


// Cond_KotC_CanAddToAura_C Cond_KotC_CanAddToAura.Default__Cond_KotC_CanAddToAura_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCond_KotC_CanAddToAura_C* UCond_KotC_CanAddToAura_C::GetDefaultObj()
{
	static class UCond_KotC_CanAddToAura_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCond_KotC_CanAddToAura_C*>(UCond_KotC_CanAddToAura_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cond_KotC_CanAddToAura.Cond_KotC_CanAddToAura_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ASpellActor_Hydra_Base_C*    K2Node_DynamicCast_AsSpell_Actor_Hydra_Base                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ADrone_PlayerCompanionParent_C*K2Node_DynamicCast_AsDrone_Player_Companion_Parent               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCond_KotC_CanAddToAura_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class ASpellActor_Hydra_Base_C* K2Node_DynamicCast_AsSpell_Actor_Hydra_Base, bool K2Node_DynamicCast_bSuccess, class ADrone_PlayerCompanionParent_C* K2Node_DynamicCast_AsDrone_Player_Companion_Parent, bool K2Node_DynamicCast_bSuccess1, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cond_KotC_CanAddToAura_C", "EvaluateCondition");

	Params::UCond_KotC_CanAddToAura_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsSpell_Actor_Hydra_Base = K2Node_DynamicCast_AsSpell_Actor_Hydra_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsDrone_Player_Companion_Parent = K2Node_DynamicCast_AsDrone_Player_Companion_Parent;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


