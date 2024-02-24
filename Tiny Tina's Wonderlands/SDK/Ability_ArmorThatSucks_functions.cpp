#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_ArmorThatSucks.Ability_ArmorThatSucks_C
// (None)

class UClass* UAbility_ArmorThatSucks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_ArmorThatSucks_C");

	return Clss;
}


// Ability_ArmorThatSucks_C Ability_ArmorThatSucks.Default__Ability_ArmorThatSucks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_ArmorThatSucks_C* UAbility_ArmorThatSucks_C::GetDefaultObj()
{
	static class UAbility_ArmorThatSucks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_ArmorThatSucks_C*>(UAbility_ArmorThatSucks_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_ArmorThatSucks.Ability_ArmorThatSucks_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_ArmorThatSucks_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_ArmorThatSucks_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_ArmorThatSucks.Ability_ArmorThatSucks_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_ArmorThatSucks_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_ArmorThatSucks_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_ArmorThatSucks.Ability_ArmorThatSucks_C.ExecuteUbergraph_Ability_ArmorThatSucks
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier(NoDestructor, ContainsInstancedReference)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAbilityResourceSpec_ConditionalDamageModifierK2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1(NoDestructor, ContainsInstancedReference)

void UAbility_ArmorThatSucks_C::ExecuteUbergraph_Ability_ArmorThatSucks(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue1, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player1, bool K2Node_DynamicCast_bSuccess1, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_ArmorThatSucks_C", "ExecuteUbergraph_Ability_ArmorThatSucks");

	Params::UAbility_ArmorThatSucks_C_ExecuteUbergraph_Ability_ArmorThatSucks_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier;
	Parms.CallFunc_GetAbilityOwner_ReturnValue1 = CallFunc_GetAbilityOwner_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.K2Node_DynamicCast_AsOak_Character_Player1 = K2Node_DynamicCast_AsOak_Character_Player1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier1;

	UObject::ProcessEvent(Func, &Parms);

}

}


