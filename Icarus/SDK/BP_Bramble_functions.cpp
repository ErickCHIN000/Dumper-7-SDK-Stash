#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Bramble.BP_Bramble_C
// (Actor)

class UClass* ABP_Bramble_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Bramble_C");

	return Clss;
}


// BP_Bramble_C BP_Bramble.Default__BP_Bramble_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Bramble_C* ABP_Bramble_C::GetDefaultObj()
{
	static class ABP_Bramble_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Bramble_C*>(ABP_Bramble_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Bramble.BP_Bramble_C.DoDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Defender                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Bramble_C::DoDamage(int32 DamageAmount, class AActor* Defender, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Bramble_C", "DoDamage");

	Params::ABP_Bramble_C_DoDamage_Params Parms{};

	Parms.DamageAmount = DamageAmount;
	Parms.Defender = Defender;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


