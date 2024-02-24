#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_KotC_04.Passive_KotC_04_C
// (None)

class UClass* UPassive_KotC_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_KotC_04_C");

	return Clss;
}


// Passive_KotC_04_C Passive_KotC_04.Default__Passive_KotC_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_KotC_04_C* UPassive_KotC_04_C::GetDefaultObj()
{
	static class UPassive_KotC_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_KotC_04_C*>(UPassive_KotC_04_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_KotC_04.Passive_KotC_04_C.GetSkillGrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassive_KotC_04_C::GetSkillGrade(int32* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_KotC_04_C", "GetSkillGrade");

	Params::UPassive_KotC_04_C_GetSkillGrade_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function Passive_KotC_04.Passive_KotC_04_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_KotC_04_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_KotC_04_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_KotC_04.Passive_KotC_04_C.ExecuteUbergraph_Passive_KotC_04
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier(NoDestructor, ContainsInstancedReference)

void UPassive_KotC_04_C::ExecuteUbergraph_Passive_KotC_04(int32 EntryPoint, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_KotC_04_C", "ExecuteUbergraph_Passive_KotC_04");

	Params::UPassive_KotC_04_C_ExecuteUbergraph_Passive_KotC_04_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier;

	UObject::ProcessEvent(Func, &Parms);

}

}


