#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellActor_Hydra_Mod02.SpellActor_Hydra_Mod02_C
// (Actor)

class UClass* ASpellActor_Hydra_Mod02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellActor_Hydra_Mod02_C");

	return Clss;
}


// SpellActor_Hydra_Mod02_C SpellActor_Hydra_Mod02.Default__SpellActor_Hydra_Mod02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellActor_Hydra_Mod02_C* ASpellActor_Hydra_Mod02_C::GetDefaultObj()
{
	static class ASpellActor_Hydra_Mod02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellActor_Hydra_Mod02_C*>(ASpellActor_Hydra_Mod02_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpellActor_Hydra_Mod02.SpellActor_Hydra_Mod02_C.HasValidTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASpellActor_Hydra_Mod02_C::HasValidTarget(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_Mod02_C", "HasValidTarget");

	Params::ASpellActor_Hydra_Mod02_C_HasValidTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function SpellActor_Hydra_Mod02.SpellActor_Hydra_Mod02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_Hydra_Mod02_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_Mod02_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_Hydra_Mod02.SpellActor_Hydra_Mod02_C.HydraSpellActor_FireProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHydraHeads             Head                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpellActor_Hydra_Mod02_C::HydraSpellActor_FireProjectile(enum class EHydraHeads Head)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_Mod02_C", "HydraSpellActor_FireProjectile");

	Params::ASpellActor_Hydra_Mod02_C_HydraSpellActor_FireProjectile_Params Parms{};

	Parms.Head = Head;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellActor_Hydra_Mod02.SpellActor_Hydra_Mod02_C.ExecuteUbergraph_SpellActor_Hydra_Mod02
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class EHydraHeads             K2Node_Event_Head                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FForceSelection             CallFunc_Conv_FloatToForceSelection_ReturnValue                  (NoDestructor)
// struct FCauseDamageStatusEffectOverridesK2Node_MakeStruct_CauseDamageStatusEffectOverrides               (NoDestructor)

void ASpellActor_Hydra_Mod02_C::ExecuteUbergraph_SpellActor_Hydra_Mod02(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, enum class EHydraHeads K2Node_Event_Head, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_Hydra_Mod02_C", "ExecuteUbergraph_SpellActor_Hydra_Mod02");

	Params::ASpellActor_Hydra_Mod02_C_ExecuteUbergraph_SpellActor_Hydra_Mod02_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_Head = K2Node_Event_Head;
	Parms.CallFunc_Conv_FloatToForceSelection_ReturnValue = CallFunc_Conv_FloatToForceSelection_ReturnValue;
	Parms.K2Node_MakeStruct_CauseDamageStatusEffectOverrides = K2Node_MakeStruct_CauseDamageStatusEffectOverrides;

	UObject::ProcessEvent(Func, &Parms);

}

}


